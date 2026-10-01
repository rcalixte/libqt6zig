#pragma once
#ifndef EXTRAS_KXMLGUI_LIBKTOOLBAR_HXX
#define EXTRAS_KXMLGUI_LIBKTOOLBAR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KToolBar
class VirtualKToolBar final : public KToolBar {
  public:
    // Virtual class public types (including callbacks and access types)
    using KToolBar_MetaObject_Callback = QMetaObject* (*)(const KToolBar*);
    using KToolBar_Metacast_Callback = void* (*)(KToolBar*, const char*);
    using KToolBar_Metacall_Callback = int (*)(KToolBar*, int, int, void**);
    using KToolBar_EventFilter_Callback = bool (*)(KToolBar*, QObject*, QEvent*);
    using KToolBar_SlotMovableChanged_Callback = void (*)(KToolBar*, bool);
    using KToolBar_ContextMenuEvent_Callback = void (*)(KToolBar*, QContextMenuEvent*);
    using KToolBar_ActionEvent_Callback = void (*)(KToolBar*, QActionEvent*);
    using KToolBar_DragEnterEvent_Callback = void (*)(KToolBar*, QDragEnterEvent*);
    using KToolBar_DragMoveEvent_Callback = void (*)(KToolBar*, QDragMoveEvent*);
    using KToolBar_DragLeaveEvent_Callback = void (*)(KToolBar*, QDragLeaveEvent*);
    using KToolBar_DropEvent_Callback = void (*)(KToolBar*, QDropEvent*);
    using KToolBar_MousePressEvent_Callback = void (*)(KToolBar*, QMouseEvent*);
    using KToolBar_MouseMoveEvent_Callback = void (*)(KToolBar*, QMouseEvent*);
    using KToolBar_MouseReleaseEvent_Callback = void (*)(KToolBar*, QMouseEvent*);
    using KToolBar_ChangeEvent_Callback = void (*)(KToolBar*, QEvent*);
    using KToolBar_PaintEvent_Callback = void (*)(KToolBar*, QPaintEvent*);
    using KToolBar_Event_Callback = bool (*)(KToolBar*, QEvent*);
    using KToolBar_InitStyleOption_Callback = void (*)(const KToolBar*, QStyleOptionToolBar*);
    using KToolBar_DevType_Callback = int (*)(const KToolBar*);
    using KToolBar_SetVisible_Callback = void (*)(KToolBar*, bool);
    using KToolBar_SizeHint_Callback = QSize* (*)(const KToolBar*);
    using KToolBar_MinimumSizeHint_Callback = QSize* (*)(const KToolBar*);
    using KToolBar_HeightForWidth_Callback = int (*)(const KToolBar*, int);
    using KToolBar_HasHeightForWidth_Callback = bool (*)(const KToolBar*);
    using KToolBar_PaintEngine_Callback = QPaintEngine* (*)(const KToolBar*);
    using KToolBar_MouseDoubleClickEvent_Callback = void (*)(KToolBar*, QMouseEvent*);
    using KToolBar_WheelEvent_Callback = void (*)(KToolBar*, QWheelEvent*);
    using KToolBar_KeyPressEvent_Callback = void (*)(KToolBar*, QKeyEvent*);
    using KToolBar_KeyReleaseEvent_Callback = void (*)(KToolBar*, QKeyEvent*);
    using KToolBar_FocusInEvent_Callback = void (*)(KToolBar*, QFocusEvent*);
    using KToolBar_FocusOutEvent_Callback = void (*)(KToolBar*, QFocusEvent*);
    using KToolBar_EnterEvent_Callback = void (*)(KToolBar*, QEnterEvent*);
    using KToolBar_LeaveEvent_Callback = void (*)(KToolBar*, QEvent*);
    using KToolBar_MoveEvent_Callback = void (*)(KToolBar*, QMoveEvent*);
    using KToolBar_ResizeEvent_Callback = void (*)(KToolBar*, QResizeEvent*);
    using KToolBar_CloseEvent_Callback = void (*)(KToolBar*, QCloseEvent*);
    using KToolBar_TabletEvent_Callback = void (*)(KToolBar*, QTabletEvent*);
    using KToolBar_ShowEvent_Callback = void (*)(KToolBar*, QShowEvent*);
    using KToolBar_HideEvent_Callback = void (*)(KToolBar*, QHideEvent*);
    using KToolBar_NativeEvent_Callback = bool (*)(KToolBar*, libqt_string, void*, intptr_t*);
    using KToolBar_Metric_Callback = int (*)(const KToolBar*, int);
    using KToolBar_InitPainter_Callback = void (*)(const KToolBar*, QPainter*);
    using KToolBar_Redirected_Callback = QPaintDevice* (*)(const KToolBar*, QPoint*);
    using KToolBar_SharedPainter_Callback = QPainter* (*)(const KToolBar*);
    using KToolBar_InputMethodEvent_Callback = void (*)(KToolBar*, QInputMethodEvent*);
    using KToolBar_InputMethodQuery_Callback = QVariant* (*)(const KToolBar*, int);
    using KToolBar_FocusNextPrevChild_Callback = bool (*)(KToolBar*, bool);
    using KToolBar_TimerEvent_Callback = void (*)(KToolBar*, QTimerEvent*);
    using KToolBar_ChildEvent_Callback = void (*)(KToolBar*, QChildEvent*);
    using KToolBar_CustomEvent_Callback = void (*)(KToolBar*, QEvent*);
    using KToolBar_ConnectNotify_Callback = void (*)(KToolBar*, QMetaMethod*);
    using KToolBar_DisconnectNotify_Callback = void (*)(KToolBar*, QMetaMethod*);
    using KToolBar::create;
    using KToolBar::destroy;
    using KToolBar::focusNextChild;
    using KToolBar::focusPreviousChild;
    using KToolBar::getDecodedMetricF;
    using KToolBar::isSignalConnected;
    using KToolBar::receivers;
    using KToolBar::sender;
    using KToolBar::senderSignalIndex;
    using KToolBar::updateMicroFocus;

    // Instance callback storage
    KToolBar_MetaObject_Callback ktoolbar_metaobject_callback = nullptr;
    KToolBar_Metacast_Callback ktoolbar_metacast_callback = nullptr;
    KToolBar_Metacall_Callback ktoolbar_metacall_callback = nullptr;
    KToolBar_EventFilter_Callback ktoolbar_eventfilter_callback = nullptr;
    KToolBar_SlotMovableChanged_Callback ktoolbar_slotmovablechanged_callback = nullptr;
    KToolBar_ContextMenuEvent_Callback ktoolbar_contextmenuevent_callback = nullptr;
    KToolBar_ActionEvent_Callback ktoolbar_actionevent_callback = nullptr;
    KToolBar_DragEnterEvent_Callback ktoolbar_dragenterevent_callback = nullptr;
    KToolBar_DragMoveEvent_Callback ktoolbar_dragmoveevent_callback = nullptr;
    KToolBar_DragLeaveEvent_Callback ktoolbar_dragleaveevent_callback = nullptr;
    KToolBar_DropEvent_Callback ktoolbar_dropevent_callback = nullptr;
    KToolBar_MousePressEvent_Callback ktoolbar_mousepressevent_callback = nullptr;
    KToolBar_MouseMoveEvent_Callback ktoolbar_mousemoveevent_callback = nullptr;
    KToolBar_MouseReleaseEvent_Callback ktoolbar_mousereleaseevent_callback = nullptr;
    KToolBar_ChangeEvent_Callback ktoolbar_changeevent_callback = nullptr;
    KToolBar_PaintEvent_Callback ktoolbar_paintevent_callback = nullptr;
    KToolBar_Event_Callback ktoolbar_event_callback = nullptr;
    KToolBar_InitStyleOption_Callback ktoolbar_initstyleoption_callback = nullptr;
    KToolBar_DevType_Callback ktoolbar_devtype_callback = nullptr;
    KToolBar_SetVisible_Callback ktoolbar_setvisible_callback = nullptr;
    KToolBar_SizeHint_Callback ktoolbar_sizehint_callback = nullptr;
    KToolBar_MinimumSizeHint_Callback ktoolbar_minimumsizehint_callback = nullptr;
    KToolBar_HeightForWidth_Callback ktoolbar_heightforwidth_callback = nullptr;
    KToolBar_HasHeightForWidth_Callback ktoolbar_hasheightforwidth_callback = nullptr;
    KToolBar_PaintEngine_Callback ktoolbar_paintengine_callback = nullptr;
    KToolBar_MouseDoubleClickEvent_Callback ktoolbar_mousedoubleclickevent_callback = nullptr;
    KToolBar_WheelEvent_Callback ktoolbar_wheelevent_callback = nullptr;
    KToolBar_KeyPressEvent_Callback ktoolbar_keypressevent_callback = nullptr;
    KToolBar_KeyReleaseEvent_Callback ktoolbar_keyreleaseevent_callback = nullptr;
    KToolBar_FocusInEvent_Callback ktoolbar_focusinevent_callback = nullptr;
    KToolBar_FocusOutEvent_Callback ktoolbar_focusoutevent_callback = nullptr;
    KToolBar_EnterEvent_Callback ktoolbar_enterevent_callback = nullptr;
    KToolBar_LeaveEvent_Callback ktoolbar_leaveevent_callback = nullptr;
    KToolBar_MoveEvent_Callback ktoolbar_moveevent_callback = nullptr;
    KToolBar_ResizeEvent_Callback ktoolbar_resizeevent_callback = nullptr;
    KToolBar_CloseEvent_Callback ktoolbar_closeevent_callback = nullptr;
    KToolBar_TabletEvent_Callback ktoolbar_tabletevent_callback = nullptr;
    KToolBar_ShowEvent_Callback ktoolbar_showevent_callback = nullptr;
    KToolBar_HideEvent_Callback ktoolbar_hideevent_callback = nullptr;
    KToolBar_NativeEvent_Callback ktoolbar_nativeevent_callback = nullptr;
    KToolBar_Metric_Callback ktoolbar_metric_callback = nullptr;
    KToolBar_InitPainter_Callback ktoolbar_initpainter_callback = nullptr;
    KToolBar_Redirected_Callback ktoolbar_redirected_callback = nullptr;
    KToolBar_SharedPainter_Callback ktoolbar_sharedpainter_callback = nullptr;
    KToolBar_InputMethodEvent_Callback ktoolbar_inputmethodevent_callback = nullptr;
    KToolBar_InputMethodQuery_Callback ktoolbar_inputmethodquery_callback = nullptr;
    KToolBar_FocusNextPrevChild_Callback ktoolbar_focusnextprevchild_callback = nullptr;
    KToolBar_TimerEvent_Callback ktoolbar_timerevent_callback = nullptr;
    KToolBar_ChildEvent_Callback ktoolbar_childevent_callback = nullptr;
    KToolBar_CustomEvent_Callback ktoolbar_customevent_callback = nullptr;
    KToolBar_ConnectNotify_Callback ktoolbar_connectnotify_callback = nullptr;
    KToolBar_DisconnectNotify_Callback ktoolbar_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KToolBar {
        using KToolBar::actionEvent;
        using KToolBar::changeEvent;
        using KToolBar::childEvent;
        using KToolBar::closeEvent;
        using KToolBar::connectNotify;
        using KToolBar::contextMenuEvent;
        using KToolBar::customEvent;
        using KToolBar::disconnectNotify;
        using KToolBar::dragEnterEvent;
        using KToolBar::dragLeaveEvent;
        using KToolBar::dragMoveEvent;
        using KToolBar::dropEvent;
        using KToolBar::enterEvent;
        using KToolBar::event;
        using KToolBar::focusInEvent;
        using KToolBar::focusNextPrevChild;
        using KToolBar::focusOutEvent;
        using KToolBar::hideEvent;
        using KToolBar::initPainter;
        using KToolBar::initStyleOption;
        using KToolBar::inputMethodEvent;
        using KToolBar::keyPressEvent;
        using KToolBar::keyReleaseEvent;
        using KToolBar::leaveEvent;
        using KToolBar::metric;
        using KToolBar::mouseDoubleClickEvent;
        using KToolBar::mouseMoveEvent;
        using KToolBar::mousePressEvent;
        using KToolBar::mouseReleaseEvent;
        using KToolBar::moveEvent;
        using KToolBar::nativeEvent;
        using KToolBar::paintEvent;
        using KToolBar::redirected;
        using KToolBar::resizeEvent;
        using KToolBar::sharedPainter;
        using KToolBar::showEvent;
        using KToolBar::slotMovableChanged;
        using KToolBar::tabletEvent;
        using KToolBar::timerEvent;
        using KToolBar::wheelEvent;
    };

    VirtualKToolBar(QWidget* parent) : KToolBar(parent) {};
    VirtualKToolBar(const QString& objectName, QWidget* parent) : KToolBar(objectName, parent) {};
    VirtualKToolBar(const QString& objectName, QMainWindow* parentWindow, Qt::ToolBarArea area) : KToolBar(objectName, parentWindow, area) {};
    VirtualKToolBar(QWidget* parent, bool isMainToolBar) : KToolBar(parent, isMainToolBar) {};
    VirtualKToolBar(QWidget* parent, bool isMainToolBar, bool readConfig) : KToolBar(parent, isMainToolBar, readConfig) {};
    VirtualKToolBar(const QString& objectName, QWidget* parent, bool readConfig) : KToolBar(objectName, parent, readConfig) {};
    VirtualKToolBar(const QString& objectName, QMainWindow* parentWindow, Qt::ToolBarArea area, bool newLine) : KToolBar(objectName, parentWindow, area, newLine) {};
    VirtualKToolBar(const QString& objectName, QMainWindow* parentWindow, Qt::ToolBarArea area, bool newLine, bool isMainToolBar) : KToolBar(objectName, parentWindow, area, newLine, isMainToolBar) {};
    VirtualKToolBar(const QString& objectName, QMainWindow* parentWindow, Qt::ToolBarArea area, bool newLine, bool isMainToolBar, bool readConfig) : KToolBar(objectName, parentWindow, area, newLine, isMainToolBar, readConfig) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ktoolbar_metaobject_callback) {
            QMetaObject* callback_ret = ktoolbar_metaobject_callback(this);
            return callback_ret;
        }
        return KToolBar::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktoolbar_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ktoolbar_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KToolBar::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktoolbar_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ktoolbar_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KToolBar::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktoolbar_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = ktoolbar_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KToolBar::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotMovableChanged(bool movable) override {
        if (ktoolbar_slotmovablechanged_callback) {
            bool cbval1 = movable;
            ktoolbar_slotmovablechanged_callback(this, cbval1);
            return;
        }
        KToolBar::slotMovableChanged(movable);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (ktoolbar_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            ktoolbar_contextmenuevent_callback(this, cbval1);
            return;
        }
        KToolBar::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* param1) override {
        if (ktoolbar_actionevent_callback) {
            QActionEvent* cbval1 = param1;
            ktoolbar_actionevent_callback(this, cbval1);
            return;
        }
        KToolBar::actionEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (ktoolbar_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = param1;
            ktoolbar_dragenterevent_callback(this, cbval1);
            return;
        }
        KToolBar::dragEnterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* param1) override {
        if (ktoolbar_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = param1;
            ktoolbar_dragmoveevent_callback(this, cbval1);
            return;
        }
        KToolBar::dragMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
        if (ktoolbar_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = param1;
            ktoolbar_dragleaveevent_callback(this, cbval1);
            return;
        }
        KToolBar::dragLeaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (ktoolbar_dropevent_callback) {
            QDropEvent* cbval1 = param1;
            ktoolbar_dropevent_callback(this, cbval1);
            return;
        }
        KToolBar::dropEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (ktoolbar_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            ktoolbar_mousepressevent_callback(this, cbval1);
            return;
        }
        KToolBar::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (ktoolbar_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            ktoolbar_mousemoveevent_callback(this, cbval1);
            return;
        }
        KToolBar::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (ktoolbar_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            ktoolbar_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KToolBar::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (ktoolbar_changeevent_callback) {
            QEvent* cbval1 = event;
            ktoolbar_changeevent_callback(this, cbval1);
            return;
        }
        KToolBar::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (ktoolbar_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            ktoolbar_paintevent_callback(this, cbval1);
            return;
        }
        KToolBar::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktoolbar_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = ktoolbar_event_callback(this, cbval1);
            return callback_ret;
        }
        return KToolBar::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionToolBar* option) const override {
        if (ktoolbar_initstyleoption_callback) {
            QStyleOptionToolBar* cbval1 = option;
            ktoolbar_initstyleoption_callback(this, cbval1);
            return;
        }
        KToolBar::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (ktoolbar_devtype_callback) {
            int callback_ret = ktoolbar_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KToolBar::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (ktoolbar_setvisible_callback) {
            bool cbval1 = visible;
            ktoolbar_setvisible_callback(this, cbval1);
            return;
        }
        KToolBar::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (ktoolbar_sizehint_callback) {
            QSize* callback_ret = ktoolbar_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KToolBar::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (ktoolbar_minimumsizehint_callback) {
            QSize* callback_ret = ktoolbar_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KToolBar::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (ktoolbar_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = ktoolbar_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KToolBar::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (ktoolbar_hasheightforwidth_callback) {
            bool callback_ret = ktoolbar_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KToolBar::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (ktoolbar_paintengine_callback) {
            QPaintEngine* callback_ret = ktoolbar_paintengine_callback(this);
            return callback_ret;
        }
        return KToolBar::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (ktoolbar_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            ktoolbar_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KToolBar::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (ktoolbar_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            ktoolbar_wheelevent_callback(this, cbval1);
            return;
        }
        KToolBar::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (ktoolbar_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            ktoolbar_keypressevent_callback(this, cbval1);
            return;
        }
        KToolBar::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (ktoolbar_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            ktoolbar_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KToolBar::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (ktoolbar_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            ktoolbar_focusinevent_callback(this, cbval1);
            return;
        }
        KToolBar::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (ktoolbar_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            ktoolbar_focusoutevent_callback(this, cbval1);
            return;
        }
        KToolBar::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (ktoolbar_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            ktoolbar_enterevent_callback(this, cbval1);
            return;
        }
        KToolBar::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (ktoolbar_leaveevent_callback) {
            QEvent* cbval1 = event;
            ktoolbar_leaveevent_callback(this, cbval1);
            return;
        }
        KToolBar::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (ktoolbar_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            ktoolbar_moveevent_callback(this, cbval1);
            return;
        }
        KToolBar::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (ktoolbar_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            ktoolbar_resizeevent_callback(this, cbval1);
            return;
        }
        KToolBar::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (ktoolbar_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            ktoolbar_closeevent_callback(this, cbval1);
            return;
        }
        KToolBar::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (ktoolbar_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            ktoolbar_tabletevent_callback(this, cbval1);
            return;
        }
        KToolBar::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (ktoolbar_showevent_callback) {
            QShowEvent* cbval1 = event;
            ktoolbar_showevent_callback(this, cbval1);
            return;
        }
        KToolBar::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (ktoolbar_hideevent_callback) {
            QHideEvent* cbval1 = event;
            ktoolbar_hideevent_callback(this, cbval1);
            return;
        }
        KToolBar::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (ktoolbar_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = ktoolbar_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KToolBar::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (ktoolbar_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = ktoolbar_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KToolBar::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (ktoolbar_initpainter_callback) {
            QPainter* cbval1 = painter;
            ktoolbar_initpainter_callback(this, cbval1);
            return;
        }
        KToolBar::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (ktoolbar_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = ktoolbar_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KToolBar::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (ktoolbar_sharedpainter_callback) {
            QPainter* callback_ret = ktoolbar_sharedpainter_callback(this);
            return callback_ret;
        }
        return KToolBar::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (ktoolbar_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            ktoolbar_inputmethodevent_callback(this, cbval1);
            return;
        }
        KToolBar::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (ktoolbar_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = ktoolbar_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KToolBar::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (ktoolbar_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = ktoolbar_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KToolBar::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktoolbar_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ktoolbar_timerevent_callback(this, cbval1);
            return;
        }
        KToolBar::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktoolbar_childevent_callback) {
            QChildEvent* cbval1 = event;
            ktoolbar_childevent_callback(this, cbval1);
            return;
        }
        KToolBar::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktoolbar_customevent_callback) {
            QEvent* cbval1 = event;
            ktoolbar_customevent_callback(this, cbval1);
            return;
        }
        KToolBar::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktoolbar_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktoolbar_connectnotify_callback(this, cbval1);
            return;
        }
        KToolBar::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktoolbar_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktoolbar_disconnectnotify_callback(this, cbval1);
            return;
        }
        KToolBar::disconnectNotify(signal);
    }

    // Friend functions
    friend void KToolBar_SuperSlotMovableChanged(KToolBar* self, bool movable);
    friend void KToolBar_SuperContextMenuEvent(KToolBar* self, QContextMenuEvent* param1);
    friend void KToolBar_SuperActionEvent(KToolBar* self, QActionEvent* param1);
    friend void KToolBar_SuperDragEnterEvent(KToolBar* self, QDragEnterEvent* param1);
    friend void KToolBar_SuperDragMoveEvent(KToolBar* self, QDragMoveEvent* param1);
    friend void KToolBar_SuperDragLeaveEvent(KToolBar* self, QDragLeaveEvent* param1);
    friend void KToolBar_SuperDropEvent(KToolBar* self, QDropEvent* param1);
    friend void KToolBar_SuperMousePressEvent(KToolBar* self, QMouseEvent* param1);
    friend void KToolBar_SuperMouseMoveEvent(KToolBar* self, QMouseEvent* param1);
    friend void KToolBar_SuperMouseReleaseEvent(KToolBar* self, QMouseEvent* param1);
    friend void KToolBar_SuperChangeEvent(KToolBar* self, QEvent* event);
    friend void KToolBar_SuperPaintEvent(KToolBar* self, QPaintEvent* event);
    friend bool KToolBar_SuperEvent(KToolBar* self, QEvent* event);
    friend void KToolBar_SuperInitStyleOption(const KToolBar* self, QStyleOptionToolBar* option);
    friend void KToolBar_SuperMouseDoubleClickEvent(KToolBar* self, QMouseEvent* event);
    friend void KToolBar_SuperWheelEvent(KToolBar* self, QWheelEvent* event);
    friend void KToolBar_SuperKeyPressEvent(KToolBar* self, QKeyEvent* event);
    friend void KToolBar_SuperKeyReleaseEvent(KToolBar* self, QKeyEvent* event);
    friend void KToolBar_SuperFocusInEvent(KToolBar* self, QFocusEvent* event);
    friend void KToolBar_SuperFocusOutEvent(KToolBar* self, QFocusEvent* event);
    friend void KToolBar_SuperEnterEvent(KToolBar* self, QEnterEvent* event);
    friend void KToolBar_SuperLeaveEvent(KToolBar* self, QEvent* event);
    friend void KToolBar_SuperMoveEvent(KToolBar* self, QMoveEvent* event);
    friend void KToolBar_SuperResizeEvent(KToolBar* self, QResizeEvent* event);
    friend void KToolBar_SuperCloseEvent(KToolBar* self, QCloseEvent* event);
    friend void KToolBar_SuperTabletEvent(KToolBar* self, QTabletEvent* event);
    friend void KToolBar_SuperShowEvent(KToolBar* self, QShowEvent* event);
    friend void KToolBar_SuperHideEvent(KToolBar* self, QHideEvent* event);
    friend bool KToolBar_SuperNativeEvent(KToolBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KToolBar_SuperMetric(const KToolBar* self, int param1);
    friend void KToolBar_SuperInitPainter(const KToolBar* self, QPainter* painter);
    friend QPaintDevice* KToolBar_SuperRedirected(const KToolBar* self, QPoint* offset);
    friend QPainter* KToolBar_SuperSharedPainter(const KToolBar* self);
    friend void KToolBar_SuperInputMethodEvent(KToolBar* self, QInputMethodEvent* param1);
    friend bool KToolBar_SuperFocusNextPrevChild(KToolBar* self, bool next);
    friend void KToolBar_SuperTimerEvent(KToolBar* self, QTimerEvent* event);
    friend void KToolBar_SuperChildEvent(KToolBar* self, QChildEvent* event);
    friend void KToolBar_SuperCustomEvent(KToolBar* self, QEvent* event);
    friend void KToolBar_SuperConnectNotify(KToolBar* self, const QMetaMethod* signal);
    friend void KToolBar_SuperDisconnectNotify(KToolBar* self, const QMetaMethod* signal);
};

#endif
