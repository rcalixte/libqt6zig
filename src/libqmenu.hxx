#pragma once
#ifndef LIBQMENU_HXX
#define LIBQMENU_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QMenu
class VirtualQMenu final : public QMenu {
  public:
    // Virtual class public types (including callbacks and access types)
    using QMenu_MetaObject_Callback = QMetaObject* (*)(const QMenu*);
    using QMenu_Metacast_Callback = void* (*)(QMenu*, const char*);
    using QMenu_Metacall_Callback = int (*)(QMenu*, int, int, void**);
    using QMenu_SizeHint_Callback = QSize* (*)(const QMenu*);
    using QMenu_ChangeEvent_Callback = void (*)(QMenu*, QEvent*);
    using QMenu_KeyPressEvent_Callback = void (*)(QMenu*, QKeyEvent*);
    using QMenu_MouseReleaseEvent_Callback = void (*)(QMenu*, QMouseEvent*);
    using QMenu_MousePressEvent_Callback = void (*)(QMenu*, QMouseEvent*);
    using QMenu_MouseMoveEvent_Callback = void (*)(QMenu*, QMouseEvent*);
    using QMenu_WheelEvent_Callback = void (*)(QMenu*, QWheelEvent*);
    using QMenu_EnterEvent_Callback = void (*)(QMenu*, QEnterEvent*);
    using QMenu_LeaveEvent_Callback = void (*)(QMenu*, QEvent*);
    using QMenu_HideEvent_Callback = void (*)(QMenu*, QHideEvent*);
    using QMenu_PaintEvent_Callback = void (*)(QMenu*, QPaintEvent*);
    using QMenu_ActionEvent_Callback = void (*)(QMenu*, QActionEvent*);
    using QMenu_TimerEvent_Callback = void (*)(QMenu*, QTimerEvent*);
    using QMenu_Event_Callback = bool (*)(QMenu*, QEvent*);
    using QMenu_FocusNextPrevChild_Callback = bool (*)(QMenu*, bool);
    using QMenu_InitStyleOption_Callback = void (*)(const QMenu*, QStyleOptionMenuItem*, QAction*);
    using QMenu_DevType_Callback = int (*)(const QMenu*);
    using QMenu_SetVisible_Callback = void (*)(QMenu*, bool);
    using QMenu_MinimumSizeHint_Callback = QSize* (*)(const QMenu*);
    using QMenu_HeightForWidth_Callback = int (*)(const QMenu*, int);
    using QMenu_HasHeightForWidth_Callback = bool (*)(const QMenu*);
    using QMenu_PaintEngine_Callback = QPaintEngine* (*)(const QMenu*);
    using QMenu_MouseDoubleClickEvent_Callback = void (*)(QMenu*, QMouseEvent*);
    using QMenu_KeyReleaseEvent_Callback = void (*)(QMenu*, QKeyEvent*);
    using QMenu_FocusInEvent_Callback = void (*)(QMenu*, QFocusEvent*);
    using QMenu_FocusOutEvent_Callback = void (*)(QMenu*, QFocusEvent*);
    using QMenu_MoveEvent_Callback = void (*)(QMenu*, QMoveEvent*);
    using QMenu_ResizeEvent_Callback = void (*)(QMenu*, QResizeEvent*);
    using QMenu_CloseEvent_Callback = void (*)(QMenu*, QCloseEvent*);
    using QMenu_ContextMenuEvent_Callback = void (*)(QMenu*, QContextMenuEvent*);
    using QMenu_TabletEvent_Callback = void (*)(QMenu*, QTabletEvent*);
    using QMenu_DragEnterEvent_Callback = void (*)(QMenu*, QDragEnterEvent*);
    using QMenu_DragMoveEvent_Callback = void (*)(QMenu*, QDragMoveEvent*);
    using QMenu_DragLeaveEvent_Callback = void (*)(QMenu*, QDragLeaveEvent*);
    using QMenu_DropEvent_Callback = void (*)(QMenu*, QDropEvent*);
    using QMenu_ShowEvent_Callback = void (*)(QMenu*, QShowEvent*);
    using QMenu_NativeEvent_Callback = bool (*)(QMenu*, libqt_string, void*, intptr_t*);
    using QMenu_Metric_Callback = int (*)(const QMenu*, int);
    using QMenu_InitPainter_Callback = void (*)(const QMenu*, QPainter*);
    using QMenu_Redirected_Callback = QPaintDevice* (*)(const QMenu*, QPoint*);
    using QMenu_SharedPainter_Callback = QPainter* (*)(const QMenu*);
    using QMenu_InputMethodEvent_Callback = void (*)(QMenu*, QInputMethodEvent*);
    using QMenu_InputMethodQuery_Callback = QVariant* (*)(const QMenu*, int);
    using QMenu_EventFilter_Callback = bool (*)(QMenu*, QObject*, QEvent*);
    using QMenu_ChildEvent_Callback = void (*)(QMenu*, QChildEvent*);
    using QMenu_CustomEvent_Callback = void (*)(QMenu*, QEvent*);
    using QMenu_ConnectNotify_Callback = void (*)(QMenu*, QMetaMethod*);
    using QMenu_DisconnectNotify_Callback = void (*)(QMenu*, QMetaMethod*);
    using QMenu::columnCount;
    using QMenu::create;
    using QMenu::destroy;
    using QMenu::focusNextChild;
    using QMenu::focusPreviousChild;
    using QMenu::getDecodedMetricF;
    using QMenu::isSignalConnected;
    using QMenu::receivers;
    using QMenu::sender;
    using QMenu::senderSignalIndex;
    using QMenu::updateMicroFocus;

    // Instance callback storage
    QMenu_MetaObject_Callback qmenu_metaobject_callback = nullptr;
    QMenu_Metacast_Callback qmenu_metacast_callback = nullptr;
    QMenu_Metacall_Callback qmenu_metacall_callback = nullptr;
    QMenu_SizeHint_Callback qmenu_sizehint_callback = nullptr;
    QMenu_ChangeEvent_Callback qmenu_changeevent_callback = nullptr;
    QMenu_KeyPressEvent_Callback qmenu_keypressevent_callback = nullptr;
    QMenu_MouseReleaseEvent_Callback qmenu_mousereleaseevent_callback = nullptr;
    QMenu_MousePressEvent_Callback qmenu_mousepressevent_callback = nullptr;
    QMenu_MouseMoveEvent_Callback qmenu_mousemoveevent_callback = nullptr;
    QMenu_WheelEvent_Callback qmenu_wheelevent_callback = nullptr;
    QMenu_EnterEvent_Callback qmenu_enterevent_callback = nullptr;
    QMenu_LeaveEvent_Callback qmenu_leaveevent_callback = nullptr;
    QMenu_HideEvent_Callback qmenu_hideevent_callback = nullptr;
    QMenu_PaintEvent_Callback qmenu_paintevent_callback = nullptr;
    QMenu_ActionEvent_Callback qmenu_actionevent_callback = nullptr;
    QMenu_TimerEvent_Callback qmenu_timerevent_callback = nullptr;
    QMenu_Event_Callback qmenu_event_callback = nullptr;
    QMenu_FocusNextPrevChild_Callback qmenu_focusnextprevchild_callback = nullptr;
    QMenu_InitStyleOption_Callback qmenu_initstyleoption_callback = nullptr;
    QMenu_DevType_Callback qmenu_devtype_callback = nullptr;
    QMenu_SetVisible_Callback qmenu_setvisible_callback = nullptr;
    QMenu_MinimumSizeHint_Callback qmenu_minimumsizehint_callback = nullptr;
    QMenu_HeightForWidth_Callback qmenu_heightforwidth_callback = nullptr;
    QMenu_HasHeightForWidth_Callback qmenu_hasheightforwidth_callback = nullptr;
    QMenu_PaintEngine_Callback qmenu_paintengine_callback = nullptr;
    QMenu_MouseDoubleClickEvent_Callback qmenu_mousedoubleclickevent_callback = nullptr;
    QMenu_KeyReleaseEvent_Callback qmenu_keyreleaseevent_callback = nullptr;
    QMenu_FocusInEvent_Callback qmenu_focusinevent_callback = nullptr;
    QMenu_FocusOutEvent_Callback qmenu_focusoutevent_callback = nullptr;
    QMenu_MoveEvent_Callback qmenu_moveevent_callback = nullptr;
    QMenu_ResizeEvent_Callback qmenu_resizeevent_callback = nullptr;
    QMenu_CloseEvent_Callback qmenu_closeevent_callback = nullptr;
    QMenu_ContextMenuEvent_Callback qmenu_contextmenuevent_callback = nullptr;
    QMenu_TabletEvent_Callback qmenu_tabletevent_callback = nullptr;
    QMenu_DragEnterEvent_Callback qmenu_dragenterevent_callback = nullptr;
    QMenu_DragMoveEvent_Callback qmenu_dragmoveevent_callback = nullptr;
    QMenu_DragLeaveEvent_Callback qmenu_dragleaveevent_callback = nullptr;
    QMenu_DropEvent_Callback qmenu_dropevent_callback = nullptr;
    QMenu_ShowEvent_Callback qmenu_showevent_callback = nullptr;
    QMenu_NativeEvent_Callback qmenu_nativeevent_callback = nullptr;
    QMenu_Metric_Callback qmenu_metric_callback = nullptr;
    QMenu_InitPainter_Callback qmenu_initpainter_callback = nullptr;
    QMenu_Redirected_Callback qmenu_redirected_callback = nullptr;
    QMenu_SharedPainter_Callback qmenu_sharedpainter_callback = nullptr;
    QMenu_InputMethodEvent_Callback qmenu_inputmethodevent_callback = nullptr;
    QMenu_InputMethodQuery_Callback qmenu_inputmethodquery_callback = nullptr;
    QMenu_EventFilter_Callback qmenu_eventfilter_callback = nullptr;
    QMenu_ChildEvent_Callback qmenu_childevent_callback = nullptr;
    QMenu_CustomEvent_Callback qmenu_customevent_callback = nullptr;
    QMenu_ConnectNotify_Callback qmenu_connectnotify_callback = nullptr;
    QMenu_DisconnectNotify_Callback qmenu_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QMenu {
        using QMenu::actionEvent;
        using QMenu::changeEvent;
        using QMenu::childEvent;
        using QMenu::closeEvent;
        using QMenu::connectNotify;
        using QMenu::contextMenuEvent;
        using QMenu::customEvent;
        using QMenu::disconnectNotify;
        using QMenu::dragEnterEvent;
        using QMenu::dragLeaveEvent;
        using QMenu::dragMoveEvent;
        using QMenu::dropEvent;
        using QMenu::enterEvent;
        using QMenu::event;
        using QMenu::focusInEvent;
        using QMenu::focusNextPrevChild;
        using QMenu::focusOutEvent;
        using QMenu::hideEvent;
        using QMenu::initPainter;
        using QMenu::initStyleOption;
        using QMenu::inputMethodEvent;
        using QMenu::keyPressEvent;
        using QMenu::keyReleaseEvent;
        using QMenu::leaveEvent;
        using QMenu::metric;
        using QMenu::mouseDoubleClickEvent;
        using QMenu::mouseMoveEvent;
        using QMenu::mousePressEvent;
        using QMenu::mouseReleaseEvent;
        using QMenu::moveEvent;
        using QMenu::nativeEvent;
        using QMenu::paintEvent;
        using QMenu::redirected;
        using QMenu::resizeEvent;
        using QMenu::sharedPainter;
        using QMenu::showEvent;
        using QMenu::tabletEvent;
        using QMenu::timerEvent;
        using QMenu::wheelEvent;
    };

    VirtualQMenu(QWidget* parent) : QMenu(parent) {};
    VirtualQMenu() : QMenu() {};
    VirtualQMenu(const QString& title) : QMenu(title) {};
    VirtualQMenu(const QString& title, QWidget* parent) : QMenu(title, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qmenu_metaobject_callback) {
            QMetaObject* callback_ret = qmenu_metaobject_callback(this);
            return callback_ret;
        }
        return QMenu::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qmenu_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qmenu_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QMenu::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmenu_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qmenu_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QMenu::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qmenu_sizehint_callback) {
            QSize* callback_ret = qmenu_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QMenu::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qmenu_changeevent_callback) {
            QEvent* cbval1 = param1;
            qmenu_changeevent_callback(this, cbval1);
            return;
        }
        QMenu::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qmenu_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qmenu_keypressevent_callback(this, cbval1);
            return;
        }
        QMenu::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qmenu_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            qmenu_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QMenu::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qmenu_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            qmenu_mousepressevent_callback(this, cbval1);
            return;
        }
        QMenu::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qmenu_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            qmenu_mousemoveevent_callback(this, cbval1);
            return;
        }
        QMenu::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qmenu_wheelevent_callback) {
            QWheelEvent* cbval1 = param1;
            qmenu_wheelevent_callback(this, cbval1);
            return;
        }
        QMenu::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* param1) override {
        if (qmenu_enterevent_callback) {
            QEnterEvent* cbval1 = param1;
            qmenu_enterevent_callback(this, cbval1);
            return;
        }
        QMenu::enterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* param1) override {
        if (qmenu_leaveevent_callback) {
            QEvent* cbval1 = param1;
            qmenu_leaveevent_callback(this, cbval1);
            return;
        }
        QMenu::leaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (qmenu_hideevent_callback) {
            QHideEvent* cbval1 = param1;
            qmenu_hideevent_callback(this, cbval1);
            return;
        }
        QMenu::hideEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qmenu_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qmenu_paintevent_callback(this, cbval1);
            return;
        }
        QMenu::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* param1) override {
        if (qmenu_actionevent_callback) {
            QActionEvent* cbval1 = param1;
            qmenu_actionevent_callback(this, cbval1);
            return;
        }
        QMenu::actionEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qmenu_timerevent_callback) {
            QTimerEvent* cbval1 = param1;
            qmenu_timerevent_callback(this, cbval1);
            return;
        }
        QMenu::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qmenu_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qmenu_event_callback(this, cbval1);
            return callback_ret;
        }
        return QMenu::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qmenu_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qmenu_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QMenu::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionMenuItem* option, const QAction* action) const override {
        if (qmenu_initstyleoption_callback) {
            QStyleOptionMenuItem* cbval1 = option;
            QAction* cbval2 = (QAction*)action;
            qmenu_initstyleoption_callback(this, cbval1, cbval2);
            return;
        }
        QMenu::initStyleOption(option, action);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qmenu_devtype_callback) {
            int callback_ret = qmenu_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QMenu::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qmenu_setvisible_callback) {
            bool cbval1 = visible;
            qmenu_setvisible_callback(this, cbval1);
            return;
        }
        QMenu::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qmenu_minimumsizehint_callback) {
            QSize* callback_ret = qmenu_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QMenu::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qmenu_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qmenu_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QMenu::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qmenu_hasheightforwidth_callback) {
            bool callback_ret = qmenu_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QMenu::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qmenu_paintengine_callback) {
            QPaintEngine* callback_ret = qmenu_paintengine_callback(this);
            return callback_ret;
        }
        return QMenu::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qmenu_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qmenu_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QMenu::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qmenu_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qmenu_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QMenu::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qmenu_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qmenu_focusinevent_callback(this, cbval1);
            return;
        }
        QMenu::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qmenu_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qmenu_focusoutevent_callback(this, cbval1);
            return;
        }
        QMenu::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qmenu_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qmenu_moveevent_callback(this, cbval1);
            return;
        }
        QMenu::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qmenu_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qmenu_resizeevent_callback(this, cbval1);
            return;
        }
        QMenu::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qmenu_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qmenu_closeevent_callback(this, cbval1);
            return;
        }
        QMenu::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qmenu_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qmenu_contextmenuevent_callback(this, cbval1);
            return;
        }
        QMenu::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qmenu_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qmenu_tabletevent_callback(this, cbval1);
            return;
        }
        QMenu::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qmenu_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qmenu_dragenterevent_callback(this, cbval1);
            return;
        }
        QMenu::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qmenu_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qmenu_dragmoveevent_callback(this, cbval1);
            return;
        }
        QMenu::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qmenu_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qmenu_dragleaveevent_callback(this, cbval1);
            return;
        }
        QMenu::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qmenu_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qmenu_dropevent_callback(this, cbval1);
            return;
        }
        QMenu::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qmenu_showevent_callback) {
            QShowEvent* cbval1 = event;
            qmenu_showevent_callback(this, cbval1);
            return;
        }
        QMenu::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qmenu_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qmenu_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QMenu::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qmenu_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qmenu_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QMenu::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qmenu_initpainter_callback) {
            QPainter* cbval1 = painter;
            qmenu_initpainter_callback(this, cbval1);
            return;
        }
        QMenu::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qmenu_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qmenu_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QMenu::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qmenu_sharedpainter_callback) {
            QPainter* callback_ret = qmenu_sharedpainter_callback(this);
            return callback_ret;
        }
        return QMenu::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qmenu_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qmenu_inputmethodevent_callback(this, cbval1);
            return;
        }
        QMenu::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qmenu_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qmenu_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QMenu::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qmenu_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qmenu_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QMenu::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qmenu_childevent_callback) {
            QChildEvent* cbval1 = event;
            qmenu_childevent_callback(this, cbval1);
            return;
        }
        QMenu::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmenu_customevent_callback) {
            QEvent* cbval1 = event;
            qmenu_customevent_callback(this, cbval1);
            return;
        }
        QMenu::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmenu_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qmenu_connectnotify_callback(this, cbval1);
            return;
        }
        QMenu::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmenu_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qmenu_disconnectnotify_callback(this, cbval1);
            return;
        }
        QMenu::disconnectNotify(signal);
    }

    // Friend functions
    friend void QMenu_SuperChangeEvent(QMenu* self, QEvent* param1);
    friend void QMenu_SuperKeyPressEvent(QMenu* self, QKeyEvent* param1);
    friend void QMenu_SuperMouseReleaseEvent(QMenu* self, QMouseEvent* param1);
    friend void QMenu_SuperMousePressEvent(QMenu* self, QMouseEvent* param1);
    friend void QMenu_SuperMouseMoveEvent(QMenu* self, QMouseEvent* param1);
    friend void QMenu_SuperWheelEvent(QMenu* self, QWheelEvent* param1);
    friend void QMenu_SuperEnterEvent(QMenu* self, QEnterEvent* param1);
    friend void QMenu_SuperLeaveEvent(QMenu* self, QEvent* param1);
    friend void QMenu_SuperHideEvent(QMenu* self, QHideEvent* param1);
    friend void QMenu_SuperPaintEvent(QMenu* self, QPaintEvent* param1);
    friend void QMenu_SuperActionEvent(QMenu* self, QActionEvent* param1);
    friend void QMenu_SuperTimerEvent(QMenu* self, QTimerEvent* param1);
    friend bool QMenu_SuperEvent(QMenu* self, QEvent* param1);
    friend bool QMenu_SuperFocusNextPrevChild(QMenu* self, bool next);
    friend void QMenu_SuperInitStyleOption(const QMenu* self, QStyleOptionMenuItem* option, const QAction* action);
    friend void QMenu_SuperMouseDoubleClickEvent(QMenu* self, QMouseEvent* event);
    friend void QMenu_SuperKeyReleaseEvent(QMenu* self, QKeyEvent* event);
    friend void QMenu_SuperFocusInEvent(QMenu* self, QFocusEvent* event);
    friend void QMenu_SuperFocusOutEvent(QMenu* self, QFocusEvent* event);
    friend void QMenu_SuperMoveEvent(QMenu* self, QMoveEvent* event);
    friend void QMenu_SuperResizeEvent(QMenu* self, QResizeEvent* event);
    friend void QMenu_SuperCloseEvent(QMenu* self, QCloseEvent* event);
    friend void QMenu_SuperContextMenuEvent(QMenu* self, QContextMenuEvent* event);
    friend void QMenu_SuperTabletEvent(QMenu* self, QTabletEvent* event);
    friend void QMenu_SuperDragEnterEvent(QMenu* self, QDragEnterEvent* event);
    friend void QMenu_SuperDragMoveEvent(QMenu* self, QDragMoveEvent* event);
    friend void QMenu_SuperDragLeaveEvent(QMenu* self, QDragLeaveEvent* event);
    friend void QMenu_SuperDropEvent(QMenu* self, QDropEvent* event);
    friend void QMenu_SuperShowEvent(QMenu* self, QShowEvent* event);
    friend bool QMenu_SuperNativeEvent(QMenu* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QMenu_SuperMetric(const QMenu* self, int param1);
    friend void QMenu_SuperInitPainter(const QMenu* self, QPainter* painter);
    friend QPaintDevice* QMenu_SuperRedirected(const QMenu* self, QPoint* offset);
    friend QPainter* QMenu_SuperSharedPainter(const QMenu* self);
    friend void QMenu_SuperInputMethodEvent(QMenu* self, QInputMethodEvent* param1);
    friend void QMenu_SuperChildEvent(QMenu* self, QChildEvent* event);
    friend void QMenu_SuperCustomEvent(QMenu* self, QEvent* event);
    friend void QMenu_SuperConnectNotify(QMenu* self, const QMetaMethod* signal);
    friend void QMenu_SuperDisconnectNotify(QMenu* self, const QMetaMethod* signal);
};

#endif
