#pragma once
#ifndef LIBQGROUPBOX_HXX
#define LIBQGROUPBOX_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGroupBox
class VirtualQGroupBox final : public QGroupBox {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGroupBox_MetaObject_Callback = QMetaObject* (*)(const QGroupBox*);
    using QGroupBox_Metacast_Callback = void* (*)(QGroupBox*, const char*);
    using QGroupBox_Metacall_Callback = int (*)(QGroupBox*, int, int, void**);
    using QGroupBox_MinimumSizeHint_Callback = QSize* (*)(const QGroupBox*);
    using QGroupBox_Event_Callback = bool (*)(QGroupBox*, QEvent*);
    using QGroupBox_ChildEvent_Callback = void (*)(QGroupBox*, QChildEvent*);
    using QGroupBox_ResizeEvent_Callback = void (*)(QGroupBox*, QResizeEvent*);
    using QGroupBox_PaintEvent_Callback = void (*)(QGroupBox*, QPaintEvent*);
    using QGroupBox_FocusInEvent_Callback = void (*)(QGroupBox*, QFocusEvent*);
    using QGroupBox_ChangeEvent_Callback = void (*)(QGroupBox*, QEvent*);
    using QGroupBox_MousePressEvent_Callback = void (*)(QGroupBox*, QMouseEvent*);
    using QGroupBox_MouseMoveEvent_Callback = void (*)(QGroupBox*, QMouseEvent*);
    using QGroupBox_MouseReleaseEvent_Callback = void (*)(QGroupBox*, QMouseEvent*);
    using QGroupBox_InitStyleOption_Callback = void (*)(const QGroupBox*, QStyleOptionGroupBox*);
    using QGroupBox_DevType_Callback = int (*)(const QGroupBox*);
    using QGroupBox_SetVisible_Callback = void (*)(QGroupBox*, bool);
    using QGroupBox_SizeHint_Callback = QSize* (*)(const QGroupBox*);
    using QGroupBox_HeightForWidth_Callback = int (*)(const QGroupBox*, int);
    using QGroupBox_HasHeightForWidth_Callback = bool (*)(const QGroupBox*);
    using QGroupBox_PaintEngine_Callback = QPaintEngine* (*)(const QGroupBox*);
    using QGroupBox_MouseDoubleClickEvent_Callback = void (*)(QGroupBox*, QMouseEvent*);
    using QGroupBox_WheelEvent_Callback = void (*)(QGroupBox*, QWheelEvent*);
    using QGroupBox_KeyPressEvent_Callback = void (*)(QGroupBox*, QKeyEvent*);
    using QGroupBox_KeyReleaseEvent_Callback = void (*)(QGroupBox*, QKeyEvent*);
    using QGroupBox_FocusOutEvent_Callback = void (*)(QGroupBox*, QFocusEvent*);
    using QGroupBox_EnterEvent_Callback = void (*)(QGroupBox*, QEnterEvent*);
    using QGroupBox_LeaveEvent_Callback = void (*)(QGroupBox*, QEvent*);
    using QGroupBox_MoveEvent_Callback = void (*)(QGroupBox*, QMoveEvent*);
    using QGroupBox_CloseEvent_Callback = void (*)(QGroupBox*, QCloseEvent*);
    using QGroupBox_ContextMenuEvent_Callback = void (*)(QGroupBox*, QContextMenuEvent*);
    using QGroupBox_TabletEvent_Callback = void (*)(QGroupBox*, QTabletEvent*);
    using QGroupBox_ActionEvent_Callback = void (*)(QGroupBox*, QActionEvent*);
    using QGroupBox_DragEnterEvent_Callback = void (*)(QGroupBox*, QDragEnterEvent*);
    using QGroupBox_DragMoveEvent_Callback = void (*)(QGroupBox*, QDragMoveEvent*);
    using QGroupBox_DragLeaveEvent_Callback = void (*)(QGroupBox*, QDragLeaveEvent*);
    using QGroupBox_DropEvent_Callback = void (*)(QGroupBox*, QDropEvent*);
    using QGroupBox_ShowEvent_Callback = void (*)(QGroupBox*, QShowEvent*);
    using QGroupBox_HideEvent_Callback = void (*)(QGroupBox*, QHideEvent*);
    using QGroupBox_NativeEvent_Callback = bool (*)(QGroupBox*, libqt_string, void*, intptr_t*);
    using QGroupBox_Metric_Callback = int (*)(const QGroupBox*, int);
    using QGroupBox_InitPainter_Callback = void (*)(const QGroupBox*, QPainter*);
    using QGroupBox_Redirected_Callback = QPaintDevice* (*)(const QGroupBox*, QPoint*);
    using QGroupBox_SharedPainter_Callback = QPainter* (*)(const QGroupBox*);
    using QGroupBox_InputMethodEvent_Callback = void (*)(QGroupBox*, QInputMethodEvent*);
    using QGroupBox_InputMethodQuery_Callback = QVariant* (*)(const QGroupBox*, int);
    using QGroupBox_FocusNextPrevChild_Callback = bool (*)(QGroupBox*, bool);
    using QGroupBox_EventFilter_Callback = bool (*)(QGroupBox*, QObject*, QEvent*);
    using QGroupBox_TimerEvent_Callback = void (*)(QGroupBox*, QTimerEvent*);
    using QGroupBox_CustomEvent_Callback = void (*)(QGroupBox*, QEvent*);
    using QGroupBox_ConnectNotify_Callback = void (*)(QGroupBox*, QMetaMethod*);
    using QGroupBox_DisconnectNotify_Callback = void (*)(QGroupBox*, QMetaMethod*);
    using QGroupBox::create;
    using QGroupBox::destroy;
    using QGroupBox::focusNextChild;
    using QGroupBox::focusPreviousChild;
    using QGroupBox::getDecodedMetricF;
    using QGroupBox::isSignalConnected;
    using QGroupBox::receivers;
    using QGroupBox::sender;
    using QGroupBox::senderSignalIndex;
    using QGroupBox::updateMicroFocus;

    // Instance callback storage
    QGroupBox_MetaObject_Callback qgroupbox_metaobject_callback = nullptr;
    QGroupBox_Metacast_Callback qgroupbox_metacast_callback = nullptr;
    QGroupBox_Metacall_Callback qgroupbox_metacall_callback = nullptr;
    QGroupBox_MinimumSizeHint_Callback qgroupbox_minimumsizehint_callback = nullptr;
    QGroupBox_Event_Callback qgroupbox_event_callback = nullptr;
    QGroupBox_ChildEvent_Callback qgroupbox_childevent_callback = nullptr;
    QGroupBox_ResizeEvent_Callback qgroupbox_resizeevent_callback = nullptr;
    QGroupBox_PaintEvent_Callback qgroupbox_paintevent_callback = nullptr;
    QGroupBox_FocusInEvent_Callback qgroupbox_focusinevent_callback = nullptr;
    QGroupBox_ChangeEvent_Callback qgroupbox_changeevent_callback = nullptr;
    QGroupBox_MousePressEvent_Callback qgroupbox_mousepressevent_callback = nullptr;
    QGroupBox_MouseMoveEvent_Callback qgroupbox_mousemoveevent_callback = nullptr;
    QGroupBox_MouseReleaseEvent_Callback qgroupbox_mousereleaseevent_callback = nullptr;
    QGroupBox_InitStyleOption_Callback qgroupbox_initstyleoption_callback = nullptr;
    QGroupBox_DevType_Callback qgroupbox_devtype_callback = nullptr;
    QGroupBox_SetVisible_Callback qgroupbox_setvisible_callback = nullptr;
    QGroupBox_SizeHint_Callback qgroupbox_sizehint_callback = nullptr;
    QGroupBox_HeightForWidth_Callback qgroupbox_heightforwidth_callback = nullptr;
    QGroupBox_HasHeightForWidth_Callback qgroupbox_hasheightforwidth_callback = nullptr;
    QGroupBox_PaintEngine_Callback qgroupbox_paintengine_callback = nullptr;
    QGroupBox_MouseDoubleClickEvent_Callback qgroupbox_mousedoubleclickevent_callback = nullptr;
    QGroupBox_WheelEvent_Callback qgroupbox_wheelevent_callback = nullptr;
    QGroupBox_KeyPressEvent_Callback qgroupbox_keypressevent_callback = nullptr;
    QGroupBox_KeyReleaseEvent_Callback qgroupbox_keyreleaseevent_callback = nullptr;
    QGroupBox_FocusOutEvent_Callback qgroupbox_focusoutevent_callback = nullptr;
    QGroupBox_EnterEvent_Callback qgroupbox_enterevent_callback = nullptr;
    QGroupBox_LeaveEvent_Callback qgroupbox_leaveevent_callback = nullptr;
    QGroupBox_MoveEvent_Callback qgroupbox_moveevent_callback = nullptr;
    QGroupBox_CloseEvent_Callback qgroupbox_closeevent_callback = nullptr;
    QGroupBox_ContextMenuEvent_Callback qgroupbox_contextmenuevent_callback = nullptr;
    QGroupBox_TabletEvent_Callback qgroupbox_tabletevent_callback = nullptr;
    QGroupBox_ActionEvent_Callback qgroupbox_actionevent_callback = nullptr;
    QGroupBox_DragEnterEvent_Callback qgroupbox_dragenterevent_callback = nullptr;
    QGroupBox_DragMoveEvent_Callback qgroupbox_dragmoveevent_callback = nullptr;
    QGroupBox_DragLeaveEvent_Callback qgroupbox_dragleaveevent_callback = nullptr;
    QGroupBox_DropEvent_Callback qgroupbox_dropevent_callback = nullptr;
    QGroupBox_ShowEvent_Callback qgroupbox_showevent_callback = nullptr;
    QGroupBox_HideEvent_Callback qgroupbox_hideevent_callback = nullptr;
    QGroupBox_NativeEvent_Callback qgroupbox_nativeevent_callback = nullptr;
    QGroupBox_Metric_Callback qgroupbox_metric_callback = nullptr;
    QGroupBox_InitPainter_Callback qgroupbox_initpainter_callback = nullptr;
    QGroupBox_Redirected_Callback qgroupbox_redirected_callback = nullptr;
    QGroupBox_SharedPainter_Callback qgroupbox_sharedpainter_callback = nullptr;
    QGroupBox_InputMethodEvent_Callback qgroupbox_inputmethodevent_callback = nullptr;
    QGroupBox_InputMethodQuery_Callback qgroupbox_inputmethodquery_callback = nullptr;
    QGroupBox_FocusNextPrevChild_Callback qgroupbox_focusnextprevchild_callback = nullptr;
    QGroupBox_EventFilter_Callback qgroupbox_eventfilter_callback = nullptr;
    QGroupBox_TimerEvent_Callback qgroupbox_timerevent_callback = nullptr;
    QGroupBox_CustomEvent_Callback qgroupbox_customevent_callback = nullptr;
    QGroupBox_ConnectNotify_Callback qgroupbox_connectnotify_callback = nullptr;
    QGroupBox_DisconnectNotify_Callback qgroupbox_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QGroupBox {
        using QGroupBox::actionEvent;
        using QGroupBox::changeEvent;
        using QGroupBox::childEvent;
        using QGroupBox::closeEvent;
        using QGroupBox::connectNotify;
        using QGroupBox::contextMenuEvent;
        using QGroupBox::customEvent;
        using QGroupBox::disconnectNotify;
        using QGroupBox::dragEnterEvent;
        using QGroupBox::dragLeaveEvent;
        using QGroupBox::dragMoveEvent;
        using QGroupBox::dropEvent;
        using QGroupBox::enterEvent;
        using QGroupBox::event;
        using QGroupBox::focusInEvent;
        using QGroupBox::focusNextPrevChild;
        using QGroupBox::focusOutEvent;
        using QGroupBox::hideEvent;
        using QGroupBox::initPainter;
        using QGroupBox::initStyleOption;
        using QGroupBox::inputMethodEvent;
        using QGroupBox::keyPressEvent;
        using QGroupBox::keyReleaseEvent;
        using QGroupBox::leaveEvent;
        using QGroupBox::metric;
        using QGroupBox::mouseDoubleClickEvent;
        using QGroupBox::mouseMoveEvent;
        using QGroupBox::mousePressEvent;
        using QGroupBox::mouseReleaseEvent;
        using QGroupBox::moveEvent;
        using QGroupBox::nativeEvent;
        using QGroupBox::paintEvent;
        using QGroupBox::redirected;
        using QGroupBox::resizeEvent;
        using QGroupBox::sharedPainter;
        using QGroupBox::showEvent;
        using QGroupBox::tabletEvent;
        using QGroupBox::timerEvent;
        using QGroupBox::wheelEvent;
    };

    VirtualQGroupBox(QWidget* parent) : QGroupBox(parent) {};
    VirtualQGroupBox() : QGroupBox() {};
    VirtualQGroupBox(const QString& title) : QGroupBox(title) {};
    VirtualQGroupBox(const QString& title, QWidget* parent) : QGroupBox(title, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgroupbox_metaobject_callback) {
            QMetaObject* callback_ret = qgroupbox_metaobject_callback(this);
            return callback_ret;
        }
        return QGroupBox::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgroupbox_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qgroupbox_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGroupBox::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgroupbox_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qgroupbox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGroupBox::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qgroupbox_minimumsizehint_callback) {
            QSize* callback_ret = qgroupbox_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGroupBox::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgroupbox_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgroupbox_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGroupBox::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgroupbox_childevent_callback) {
            QChildEvent* cbval1 = event;
            qgroupbox_childevent_callback(this, cbval1);
            return;
        }
        QGroupBox::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qgroupbox_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qgroupbox_resizeevent_callback(this, cbval1);
            return;
        }
        QGroupBox::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qgroupbox_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qgroupbox_paintevent_callback(this, cbval1);
            return;
        }
        QGroupBox::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgroupbox_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qgroupbox_focusinevent_callback(this, cbval1);
            return;
        }
        QGroupBox::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qgroupbox_changeevent_callback) {
            QEvent* cbval1 = event;
            qgroupbox_changeevent_callback(this, cbval1);
            return;
        }
        QGroupBox::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qgroupbox_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qgroupbox_mousepressevent_callback(this, cbval1);
            return;
        }
        QGroupBox::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qgroupbox_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qgroupbox_mousemoveevent_callback(this, cbval1);
            return;
        }
        QGroupBox::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qgroupbox_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qgroupbox_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QGroupBox::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionGroupBox* option) const override {
        if (qgroupbox_initstyleoption_callback) {
            QStyleOptionGroupBox* cbval1 = option;
            qgroupbox_initstyleoption_callback(this, cbval1);
            return;
        }
        QGroupBox::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qgroupbox_devtype_callback) {
            int callback_ret = qgroupbox_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QGroupBox::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qgroupbox_setvisible_callback) {
            bool cbval1 = visible;
            qgroupbox_setvisible_callback(this, cbval1);
            return;
        }
        QGroupBox::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qgroupbox_sizehint_callback) {
            QSize* callback_ret = qgroupbox_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGroupBox::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qgroupbox_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qgroupbox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QGroupBox::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qgroupbox_hasheightforwidth_callback) {
            bool callback_ret = qgroupbox_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QGroupBox::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qgroupbox_paintengine_callback) {
            QPaintEngine* callback_ret = qgroupbox_paintengine_callback(this);
            return callback_ret;
        }
        return QGroupBox::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qgroupbox_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qgroupbox_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QGroupBox::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qgroupbox_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qgroupbox_wheelevent_callback(this, cbval1);
            return;
        }
        QGroupBox::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgroupbox_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qgroupbox_keypressevent_callback(this, cbval1);
            return;
        }
        QGroupBox::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgroupbox_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qgroupbox_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QGroupBox::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgroupbox_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qgroupbox_focusoutevent_callback(this, cbval1);
            return;
        }
        QGroupBox::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qgroupbox_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qgroupbox_enterevent_callback(this, cbval1);
            return;
        }
        QGroupBox::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qgroupbox_leaveevent_callback) {
            QEvent* cbval1 = event;
            qgroupbox_leaveevent_callback(this, cbval1);
            return;
        }
        QGroupBox::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qgroupbox_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qgroupbox_moveevent_callback(this, cbval1);
            return;
        }
        QGroupBox::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qgroupbox_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qgroupbox_closeevent_callback(this, cbval1);
            return;
        }
        QGroupBox::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qgroupbox_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qgroupbox_contextmenuevent_callback(this, cbval1);
            return;
        }
        QGroupBox::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qgroupbox_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qgroupbox_tabletevent_callback(this, cbval1);
            return;
        }
        QGroupBox::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qgroupbox_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qgroupbox_actionevent_callback(this, cbval1);
            return;
        }
        QGroupBox::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qgroupbox_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qgroupbox_dragenterevent_callback(this, cbval1);
            return;
        }
        QGroupBox::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qgroupbox_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qgroupbox_dragmoveevent_callback(this, cbval1);
            return;
        }
        QGroupBox::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qgroupbox_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qgroupbox_dragleaveevent_callback(this, cbval1);
            return;
        }
        QGroupBox::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qgroupbox_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qgroupbox_dropevent_callback(this, cbval1);
            return;
        }
        QGroupBox::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qgroupbox_showevent_callback) {
            QShowEvent* cbval1 = event;
            qgroupbox_showevent_callback(this, cbval1);
            return;
        }
        QGroupBox::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qgroupbox_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qgroupbox_hideevent_callback(this, cbval1);
            return;
        }
        QGroupBox::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qgroupbox_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qgroupbox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QGroupBox::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qgroupbox_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qgroupbox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QGroupBox::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qgroupbox_initpainter_callback) {
            QPainter* cbval1 = painter;
            qgroupbox_initpainter_callback(this, cbval1);
            return;
        }
        QGroupBox::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qgroupbox_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qgroupbox_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QGroupBox::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qgroupbox_sharedpainter_callback) {
            QPainter* callback_ret = qgroupbox_sharedpainter_callback(this);
            return callback_ret;
        }
        return QGroupBox::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qgroupbox_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qgroupbox_inputmethodevent_callback(this, cbval1);
            return;
        }
        QGroupBox::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qgroupbox_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qgroupbox_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGroupBox::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qgroupbox_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qgroupbox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QGroupBox::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgroupbox_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgroupbox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGroupBox::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgroupbox_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qgroupbox_timerevent_callback(this, cbval1);
            return;
        }
        QGroupBox::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgroupbox_customevent_callback) {
            QEvent* cbval1 = event;
            qgroupbox_customevent_callback(this, cbval1);
            return;
        }
        QGroupBox::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgroupbox_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgroupbox_connectnotify_callback(this, cbval1);
            return;
        }
        QGroupBox::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgroupbox_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgroupbox_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGroupBox::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QGroupBox_SuperEvent(QGroupBox* self, QEvent* event);
    friend void QGroupBox_SuperChildEvent(QGroupBox* self, QChildEvent* event);
    friend void QGroupBox_SuperResizeEvent(QGroupBox* self, QResizeEvent* event);
    friend void QGroupBox_SuperPaintEvent(QGroupBox* self, QPaintEvent* event);
    friend void QGroupBox_SuperFocusInEvent(QGroupBox* self, QFocusEvent* event);
    friend void QGroupBox_SuperChangeEvent(QGroupBox* self, QEvent* event);
    friend void QGroupBox_SuperMousePressEvent(QGroupBox* self, QMouseEvent* event);
    friend void QGroupBox_SuperMouseMoveEvent(QGroupBox* self, QMouseEvent* event);
    friend void QGroupBox_SuperMouseReleaseEvent(QGroupBox* self, QMouseEvent* event);
    friend void QGroupBox_SuperInitStyleOption(const QGroupBox* self, QStyleOptionGroupBox* option);
    friend void QGroupBox_SuperMouseDoubleClickEvent(QGroupBox* self, QMouseEvent* event);
    friend void QGroupBox_SuperWheelEvent(QGroupBox* self, QWheelEvent* event);
    friend void QGroupBox_SuperKeyPressEvent(QGroupBox* self, QKeyEvent* event);
    friend void QGroupBox_SuperKeyReleaseEvent(QGroupBox* self, QKeyEvent* event);
    friend void QGroupBox_SuperFocusOutEvent(QGroupBox* self, QFocusEvent* event);
    friend void QGroupBox_SuperEnterEvent(QGroupBox* self, QEnterEvent* event);
    friend void QGroupBox_SuperLeaveEvent(QGroupBox* self, QEvent* event);
    friend void QGroupBox_SuperMoveEvent(QGroupBox* self, QMoveEvent* event);
    friend void QGroupBox_SuperCloseEvent(QGroupBox* self, QCloseEvent* event);
    friend void QGroupBox_SuperContextMenuEvent(QGroupBox* self, QContextMenuEvent* event);
    friend void QGroupBox_SuperTabletEvent(QGroupBox* self, QTabletEvent* event);
    friend void QGroupBox_SuperActionEvent(QGroupBox* self, QActionEvent* event);
    friend void QGroupBox_SuperDragEnterEvent(QGroupBox* self, QDragEnterEvent* event);
    friend void QGroupBox_SuperDragMoveEvent(QGroupBox* self, QDragMoveEvent* event);
    friend void QGroupBox_SuperDragLeaveEvent(QGroupBox* self, QDragLeaveEvent* event);
    friend void QGroupBox_SuperDropEvent(QGroupBox* self, QDropEvent* event);
    friend void QGroupBox_SuperShowEvent(QGroupBox* self, QShowEvent* event);
    friend void QGroupBox_SuperHideEvent(QGroupBox* self, QHideEvent* event);
    friend bool QGroupBox_SuperNativeEvent(QGroupBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QGroupBox_SuperMetric(const QGroupBox* self, int param1);
    friend void QGroupBox_SuperInitPainter(const QGroupBox* self, QPainter* painter);
    friend QPaintDevice* QGroupBox_SuperRedirected(const QGroupBox* self, QPoint* offset);
    friend QPainter* QGroupBox_SuperSharedPainter(const QGroupBox* self);
    friend void QGroupBox_SuperInputMethodEvent(QGroupBox* self, QInputMethodEvent* param1);
    friend bool QGroupBox_SuperFocusNextPrevChild(QGroupBox* self, bool next);
    friend void QGroupBox_SuperTimerEvent(QGroupBox* self, QTimerEvent* event);
    friend void QGroupBox_SuperCustomEvent(QGroupBox* self, QEvent* event);
    friend void QGroupBox_SuperConnectNotify(QGroupBox* self, const QMetaMethod* signal);
    friend void QGroupBox_SuperDisconnectNotify(QGroupBox* self, const QMetaMethod* signal);
};

#endif
