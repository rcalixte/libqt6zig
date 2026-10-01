#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKRECENTFILESMENU_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKRECENTFILESMENU_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KRecentFilesMenu
class VirtualKRecentFilesMenu final : public KRecentFilesMenu {
  public:
    // Virtual class public types (including callbacks and access types)
    using KRecentFilesMenu_MetaObject_Callback = QMetaObject* (*)(const KRecentFilesMenu*);
    using KRecentFilesMenu_Metacast_Callback = void* (*)(KRecentFilesMenu*, const char*);
    using KRecentFilesMenu_Metacall_Callback = int (*)(KRecentFilesMenu*, int, int, void**);
    using KRecentFilesMenu_SizeHint_Callback = QSize* (*)(const KRecentFilesMenu*);
    using KRecentFilesMenu_ChangeEvent_Callback = void (*)(KRecentFilesMenu*, QEvent*);
    using KRecentFilesMenu_KeyPressEvent_Callback = void (*)(KRecentFilesMenu*, QKeyEvent*);
    using KRecentFilesMenu_MouseReleaseEvent_Callback = void (*)(KRecentFilesMenu*, QMouseEvent*);
    using KRecentFilesMenu_MousePressEvent_Callback = void (*)(KRecentFilesMenu*, QMouseEvent*);
    using KRecentFilesMenu_MouseMoveEvent_Callback = void (*)(KRecentFilesMenu*, QMouseEvent*);
    using KRecentFilesMenu_WheelEvent_Callback = void (*)(KRecentFilesMenu*, QWheelEvent*);
    using KRecentFilesMenu_EnterEvent_Callback = void (*)(KRecentFilesMenu*, QEnterEvent*);
    using KRecentFilesMenu_LeaveEvent_Callback = void (*)(KRecentFilesMenu*, QEvent*);
    using KRecentFilesMenu_HideEvent_Callback = void (*)(KRecentFilesMenu*, QHideEvent*);
    using KRecentFilesMenu_PaintEvent_Callback = void (*)(KRecentFilesMenu*, QPaintEvent*);
    using KRecentFilesMenu_ActionEvent_Callback = void (*)(KRecentFilesMenu*, QActionEvent*);
    using KRecentFilesMenu_TimerEvent_Callback = void (*)(KRecentFilesMenu*, QTimerEvent*);
    using KRecentFilesMenu_Event_Callback = bool (*)(KRecentFilesMenu*, QEvent*);
    using KRecentFilesMenu_FocusNextPrevChild_Callback = bool (*)(KRecentFilesMenu*, bool);
    using KRecentFilesMenu_InitStyleOption_Callback = void (*)(const KRecentFilesMenu*, QStyleOptionMenuItem*, QAction*);
    using KRecentFilesMenu_DevType_Callback = int (*)(const KRecentFilesMenu*);
    using KRecentFilesMenu_SetVisible_Callback = void (*)(KRecentFilesMenu*, bool);
    using KRecentFilesMenu_MinimumSizeHint_Callback = QSize* (*)(const KRecentFilesMenu*);
    using KRecentFilesMenu_HeightForWidth_Callback = int (*)(const KRecentFilesMenu*, int);
    using KRecentFilesMenu_HasHeightForWidth_Callback = bool (*)(const KRecentFilesMenu*);
    using KRecentFilesMenu_PaintEngine_Callback = QPaintEngine* (*)(const KRecentFilesMenu*);
    using KRecentFilesMenu_MouseDoubleClickEvent_Callback = void (*)(KRecentFilesMenu*, QMouseEvent*);
    using KRecentFilesMenu_KeyReleaseEvent_Callback = void (*)(KRecentFilesMenu*, QKeyEvent*);
    using KRecentFilesMenu_FocusInEvent_Callback = void (*)(KRecentFilesMenu*, QFocusEvent*);
    using KRecentFilesMenu_FocusOutEvent_Callback = void (*)(KRecentFilesMenu*, QFocusEvent*);
    using KRecentFilesMenu_MoveEvent_Callback = void (*)(KRecentFilesMenu*, QMoveEvent*);
    using KRecentFilesMenu_ResizeEvent_Callback = void (*)(KRecentFilesMenu*, QResizeEvent*);
    using KRecentFilesMenu_CloseEvent_Callback = void (*)(KRecentFilesMenu*, QCloseEvent*);
    using KRecentFilesMenu_ContextMenuEvent_Callback = void (*)(KRecentFilesMenu*, QContextMenuEvent*);
    using KRecentFilesMenu_TabletEvent_Callback = void (*)(KRecentFilesMenu*, QTabletEvent*);
    using KRecentFilesMenu_DragEnterEvent_Callback = void (*)(KRecentFilesMenu*, QDragEnterEvent*);
    using KRecentFilesMenu_DragMoveEvent_Callback = void (*)(KRecentFilesMenu*, QDragMoveEvent*);
    using KRecentFilesMenu_DragLeaveEvent_Callback = void (*)(KRecentFilesMenu*, QDragLeaveEvent*);
    using KRecentFilesMenu_DropEvent_Callback = void (*)(KRecentFilesMenu*, QDropEvent*);
    using KRecentFilesMenu_ShowEvent_Callback = void (*)(KRecentFilesMenu*, QShowEvent*);
    using KRecentFilesMenu_NativeEvent_Callback = bool (*)(KRecentFilesMenu*, libqt_string, void*, intptr_t*);
    using KRecentFilesMenu_Metric_Callback = int (*)(const KRecentFilesMenu*, int);
    using KRecentFilesMenu_InitPainter_Callback = void (*)(const KRecentFilesMenu*, QPainter*);
    using KRecentFilesMenu_Redirected_Callback = QPaintDevice* (*)(const KRecentFilesMenu*, QPoint*);
    using KRecentFilesMenu_SharedPainter_Callback = QPainter* (*)(const KRecentFilesMenu*);
    using KRecentFilesMenu_InputMethodEvent_Callback = void (*)(KRecentFilesMenu*, QInputMethodEvent*);
    using KRecentFilesMenu_InputMethodQuery_Callback = QVariant* (*)(const KRecentFilesMenu*, int);
    using KRecentFilesMenu_EventFilter_Callback = bool (*)(KRecentFilesMenu*, QObject*, QEvent*);
    using KRecentFilesMenu_ChildEvent_Callback = void (*)(KRecentFilesMenu*, QChildEvent*);
    using KRecentFilesMenu_CustomEvent_Callback = void (*)(KRecentFilesMenu*, QEvent*);
    using KRecentFilesMenu_ConnectNotify_Callback = void (*)(KRecentFilesMenu*, QMetaMethod*);
    using KRecentFilesMenu_DisconnectNotify_Callback = void (*)(KRecentFilesMenu*, QMetaMethod*);
    using KRecentFilesMenu::columnCount;
    using KRecentFilesMenu::create;
    using KRecentFilesMenu::destroy;
    using KRecentFilesMenu::focusNextChild;
    using KRecentFilesMenu::focusPreviousChild;
    using KRecentFilesMenu::getDecodedMetricF;
    using KRecentFilesMenu::isSignalConnected;
    using KRecentFilesMenu::receivers;
    using KRecentFilesMenu::sender;
    using KRecentFilesMenu::senderSignalIndex;
    using KRecentFilesMenu::updateMicroFocus;

    // Instance callback storage
    KRecentFilesMenu_MetaObject_Callback krecentfilesmenu_metaobject_callback = nullptr;
    KRecentFilesMenu_Metacast_Callback krecentfilesmenu_metacast_callback = nullptr;
    KRecentFilesMenu_Metacall_Callback krecentfilesmenu_metacall_callback = nullptr;
    KRecentFilesMenu_SizeHint_Callback krecentfilesmenu_sizehint_callback = nullptr;
    KRecentFilesMenu_ChangeEvent_Callback krecentfilesmenu_changeevent_callback = nullptr;
    KRecentFilesMenu_KeyPressEvent_Callback krecentfilesmenu_keypressevent_callback = nullptr;
    KRecentFilesMenu_MouseReleaseEvent_Callback krecentfilesmenu_mousereleaseevent_callback = nullptr;
    KRecentFilesMenu_MousePressEvent_Callback krecentfilesmenu_mousepressevent_callback = nullptr;
    KRecentFilesMenu_MouseMoveEvent_Callback krecentfilesmenu_mousemoveevent_callback = nullptr;
    KRecentFilesMenu_WheelEvent_Callback krecentfilesmenu_wheelevent_callback = nullptr;
    KRecentFilesMenu_EnterEvent_Callback krecentfilesmenu_enterevent_callback = nullptr;
    KRecentFilesMenu_LeaveEvent_Callback krecentfilesmenu_leaveevent_callback = nullptr;
    KRecentFilesMenu_HideEvent_Callback krecentfilesmenu_hideevent_callback = nullptr;
    KRecentFilesMenu_PaintEvent_Callback krecentfilesmenu_paintevent_callback = nullptr;
    KRecentFilesMenu_ActionEvent_Callback krecentfilesmenu_actionevent_callback = nullptr;
    KRecentFilesMenu_TimerEvent_Callback krecentfilesmenu_timerevent_callback = nullptr;
    KRecentFilesMenu_Event_Callback krecentfilesmenu_event_callback = nullptr;
    KRecentFilesMenu_FocusNextPrevChild_Callback krecentfilesmenu_focusnextprevchild_callback = nullptr;
    KRecentFilesMenu_InitStyleOption_Callback krecentfilesmenu_initstyleoption_callback = nullptr;
    KRecentFilesMenu_DevType_Callback krecentfilesmenu_devtype_callback = nullptr;
    KRecentFilesMenu_SetVisible_Callback krecentfilesmenu_setvisible_callback = nullptr;
    KRecentFilesMenu_MinimumSizeHint_Callback krecentfilesmenu_minimumsizehint_callback = nullptr;
    KRecentFilesMenu_HeightForWidth_Callback krecentfilesmenu_heightforwidth_callback = nullptr;
    KRecentFilesMenu_HasHeightForWidth_Callback krecentfilesmenu_hasheightforwidth_callback = nullptr;
    KRecentFilesMenu_PaintEngine_Callback krecentfilesmenu_paintengine_callback = nullptr;
    KRecentFilesMenu_MouseDoubleClickEvent_Callback krecentfilesmenu_mousedoubleclickevent_callback = nullptr;
    KRecentFilesMenu_KeyReleaseEvent_Callback krecentfilesmenu_keyreleaseevent_callback = nullptr;
    KRecentFilesMenu_FocusInEvent_Callback krecentfilesmenu_focusinevent_callback = nullptr;
    KRecentFilesMenu_FocusOutEvent_Callback krecentfilesmenu_focusoutevent_callback = nullptr;
    KRecentFilesMenu_MoveEvent_Callback krecentfilesmenu_moveevent_callback = nullptr;
    KRecentFilesMenu_ResizeEvent_Callback krecentfilesmenu_resizeevent_callback = nullptr;
    KRecentFilesMenu_CloseEvent_Callback krecentfilesmenu_closeevent_callback = nullptr;
    KRecentFilesMenu_ContextMenuEvent_Callback krecentfilesmenu_contextmenuevent_callback = nullptr;
    KRecentFilesMenu_TabletEvent_Callback krecentfilesmenu_tabletevent_callback = nullptr;
    KRecentFilesMenu_DragEnterEvent_Callback krecentfilesmenu_dragenterevent_callback = nullptr;
    KRecentFilesMenu_DragMoveEvent_Callback krecentfilesmenu_dragmoveevent_callback = nullptr;
    KRecentFilesMenu_DragLeaveEvent_Callback krecentfilesmenu_dragleaveevent_callback = nullptr;
    KRecentFilesMenu_DropEvent_Callback krecentfilesmenu_dropevent_callback = nullptr;
    KRecentFilesMenu_ShowEvent_Callback krecentfilesmenu_showevent_callback = nullptr;
    KRecentFilesMenu_NativeEvent_Callback krecentfilesmenu_nativeevent_callback = nullptr;
    KRecentFilesMenu_Metric_Callback krecentfilesmenu_metric_callback = nullptr;
    KRecentFilesMenu_InitPainter_Callback krecentfilesmenu_initpainter_callback = nullptr;
    KRecentFilesMenu_Redirected_Callback krecentfilesmenu_redirected_callback = nullptr;
    KRecentFilesMenu_SharedPainter_Callback krecentfilesmenu_sharedpainter_callback = nullptr;
    KRecentFilesMenu_InputMethodEvent_Callback krecentfilesmenu_inputmethodevent_callback = nullptr;
    KRecentFilesMenu_InputMethodQuery_Callback krecentfilesmenu_inputmethodquery_callback = nullptr;
    KRecentFilesMenu_EventFilter_Callback krecentfilesmenu_eventfilter_callback = nullptr;
    KRecentFilesMenu_ChildEvent_Callback krecentfilesmenu_childevent_callback = nullptr;
    KRecentFilesMenu_CustomEvent_Callback krecentfilesmenu_customevent_callback = nullptr;
    KRecentFilesMenu_ConnectNotify_Callback krecentfilesmenu_connectnotify_callback = nullptr;
    KRecentFilesMenu_DisconnectNotify_Callback krecentfilesmenu_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KRecentFilesMenu {
        using KRecentFilesMenu::actionEvent;
        using KRecentFilesMenu::changeEvent;
        using KRecentFilesMenu::childEvent;
        using KRecentFilesMenu::closeEvent;
        using KRecentFilesMenu::connectNotify;
        using KRecentFilesMenu::contextMenuEvent;
        using KRecentFilesMenu::customEvent;
        using KRecentFilesMenu::disconnectNotify;
        using KRecentFilesMenu::dragEnterEvent;
        using KRecentFilesMenu::dragLeaveEvent;
        using KRecentFilesMenu::dragMoveEvent;
        using KRecentFilesMenu::dropEvent;
        using KRecentFilesMenu::enterEvent;
        using KRecentFilesMenu::event;
        using KRecentFilesMenu::focusInEvent;
        using KRecentFilesMenu::focusNextPrevChild;
        using KRecentFilesMenu::focusOutEvent;
        using KRecentFilesMenu::hideEvent;
        using KRecentFilesMenu::initPainter;
        using KRecentFilesMenu::initStyleOption;
        using KRecentFilesMenu::inputMethodEvent;
        using KRecentFilesMenu::keyPressEvent;
        using KRecentFilesMenu::keyReleaseEvent;
        using KRecentFilesMenu::leaveEvent;
        using KRecentFilesMenu::metric;
        using KRecentFilesMenu::mouseDoubleClickEvent;
        using KRecentFilesMenu::mouseMoveEvent;
        using KRecentFilesMenu::mousePressEvent;
        using KRecentFilesMenu::mouseReleaseEvent;
        using KRecentFilesMenu::moveEvent;
        using KRecentFilesMenu::nativeEvent;
        using KRecentFilesMenu::paintEvent;
        using KRecentFilesMenu::redirected;
        using KRecentFilesMenu::resizeEvent;
        using KRecentFilesMenu::sharedPainter;
        using KRecentFilesMenu::showEvent;
        using KRecentFilesMenu::tabletEvent;
        using KRecentFilesMenu::timerEvent;
        using KRecentFilesMenu::wheelEvent;
    };

    VirtualKRecentFilesMenu(QWidget* parent) : KRecentFilesMenu(parent) {};
    VirtualKRecentFilesMenu(const QString& title) : KRecentFilesMenu(title) {};
    VirtualKRecentFilesMenu() : KRecentFilesMenu() {};
    VirtualKRecentFilesMenu(const QString& title, QWidget* parent) : KRecentFilesMenu(title, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (krecentfilesmenu_metaobject_callback) {
            QMetaObject* callback_ret = krecentfilesmenu_metaobject_callback(this);
            return callback_ret;
        }
        return KRecentFilesMenu::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (krecentfilesmenu_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = krecentfilesmenu_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KRecentFilesMenu::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (krecentfilesmenu_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = krecentfilesmenu_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KRecentFilesMenu::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (krecentfilesmenu_sizehint_callback) {
            QSize* callback_ret = krecentfilesmenu_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRecentFilesMenu::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (krecentfilesmenu_changeevent_callback) {
            QEvent* cbval1 = param1;
            krecentfilesmenu_changeevent_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (krecentfilesmenu_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            krecentfilesmenu_keypressevent_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (krecentfilesmenu_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            krecentfilesmenu_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (krecentfilesmenu_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            krecentfilesmenu_mousepressevent_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (krecentfilesmenu_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            krecentfilesmenu_mousemoveevent_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (krecentfilesmenu_wheelevent_callback) {
            QWheelEvent* cbval1 = param1;
            krecentfilesmenu_wheelevent_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* param1) override {
        if (krecentfilesmenu_enterevent_callback) {
            QEnterEvent* cbval1 = param1;
            krecentfilesmenu_enterevent_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::enterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* param1) override {
        if (krecentfilesmenu_leaveevent_callback) {
            QEvent* cbval1 = param1;
            krecentfilesmenu_leaveevent_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::leaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (krecentfilesmenu_hideevent_callback) {
            QHideEvent* cbval1 = param1;
            krecentfilesmenu_hideevent_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::hideEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (krecentfilesmenu_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            krecentfilesmenu_paintevent_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* param1) override {
        if (krecentfilesmenu_actionevent_callback) {
            QActionEvent* cbval1 = param1;
            krecentfilesmenu_actionevent_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::actionEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (krecentfilesmenu_timerevent_callback) {
            QTimerEvent* cbval1 = param1;
            krecentfilesmenu_timerevent_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (krecentfilesmenu_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = krecentfilesmenu_event_callback(this, cbval1);
            return callback_ret;
        }
        return KRecentFilesMenu::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (krecentfilesmenu_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = krecentfilesmenu_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KRecentFilesMenu::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionMenuItem* option, const QAction* action) const override {
        if (krecentfilesmenu_initstyleoption_callback) {
            QStyleOptionMenuItem* cbval1 = option;
            QAction* cbval2 = (QAction*)action;
            krecentfilesmenu_initstyleoption_callback(this, cbval1, cbval2);
            return;
        }
        KRecentFilesMenu::initStyleOption(option, action);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (krecentfilesmenu_devtype_callback) {
            int callback_ret = krecentfilesmenu_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KRecentFilesMenu::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (krecentfilesmenu_setvisible_callback) {
            bool cbval1 = visible;
            krecentfilesmenu_setvisible_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (krecentfilesmenu_minimumsizehint_callback) {
            QSize* callback_ret = krecentfilesmenu_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRecentFilesMenu::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (krecentfilesmenu_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = krecentfilesmenu_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KRecentFilesMenu::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (krecentfilesmenu_hasheightforwidth_callback) {
            bool callback_ret = krecentfilesmenu_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KRecentFilesMenu::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (krecentfilesmenu_paintengine_callback) {
            QPaintEngine* callback_ret = krecentfilesmenu_paintengine_callback(this);
            return callback_ret;
        }
        return KRecentFilesMenu::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (krecentfilesmenu_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            krecentfilesmenu_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (krecentfilesmenu_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            krecentfilesmenu_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (krecentfilesmenu_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            krecentfilesmenu_focusinevent_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (krecentfilesmenu_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            krecentfilesmenu_focusoutevent_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (krecentfilesmenu_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            krecentfilesmenu_moveevent_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (krecentfilesmenu_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            krecentfilesmenu_resizeevent_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (krecentfilesmenu_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            krecentfilesmenu_closeevent_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (krecentfilesmenu_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            krecentfilesmenu_contextmenuevent_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (krecentfilesmenu_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            krecentfilesmenu_tabletevent_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (krecentfilesmenu_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            krecentfilesmenu_dragenterevent_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (krecentfilesmenu_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            krecentfilesmenu_dragmoveevent_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (krecentfilesmenu_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            krecentfilesmenu_dragleaveevent_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (krecentfilesmenu_dropevent_callback) {
            QDropEvent* cbval1 = event;
            krecentfilesmenu_dropevent_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (krecentfilesmenu_showevent_callback) {
            QShowEvent* cbval1 = event;
            krecentfilesmenu_showevent_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (krecentfilesmenu_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = krecentfilesmenu_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KRecentFilesMenu::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (krecentfilesmenu_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = krecentfilesmenu_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KRecentFilesMenu::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (krecentfilesmenu_initpainter_callback) {
            QPainter* cbval1 = painter;
            krecentfilesmenu_initpainter_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (krecentfilesmenu_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = krecentfilesmenu_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KRecentFilesMenu::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (krecentfilesmenu_sharedpainter_callback) {
            QPainter* callback_ret = krecentfilesmenu_sharedpainter_callback(this);
            return callback_ret;
        }
        return KRecentFilesMenu::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (krecentfilesmenu_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            krecentfilesmenu_inputmethodevent_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (krecentfilesmenu_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = krecentfilesmenu_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRecentFilesMenu::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (krecentfilesmenu_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = krecentfilesmenu_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KRecentFilesMenu::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (krecentfilesmenu_childevent_callback) {
            QChildEvent* cbval1 = event;
            krecentfilesmenu_childevent_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (krecentfilesmenu_customevent_callback) {
            QEvent* cbval1 = event;
            krecentfilesmenu_customevent_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (krecentfilesmenu_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            krecentfilesmenu_connectnotify_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (krecentfilesmenu_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            krecentfilesmenu_disconnectnotify_callback(this, cbval1);
            return;
        }
        KRecentFilesMenu::disconnectNotify(signal);
    }

    // Friend functions
    friend void KRecentFilesMenu_SuperChangeEvent(KRecentFilesMenu* self, QEvent* param1);
    friend void KRecentFilesMenu_SuperKeyPressEvent(KRecentFilesMenu* self, QKeyEvent* param1);
    friend void KRecentFilesMenu_SuperMouseReleaseEvent(KRecentFilesMenu* self, QMouseEvent* param1);
    friend void KRecentFilesMenu_SuperMousePressEvent(KRecentFilesMenu* self, QMouseEvent* param1);
    friend void KRecentFilesMenu_SuperMouseMoveEvent(KRecentFilesMenu* self, QMouseEvent* param1);
    friend void KRecentFilesMenu_SuperWheelEvent(KRecentFilesMenu* self, QWheelEvent* param1);
    friend void KRecentFilesMenu_SuperEnterEvent(KRecentFilesMenu* self, QEnterEvent* param1);
    friend void KRecentFilesMenu_SuperLeaveEvent(KRecentFilesMenu* self, QEvent* param1);
    friend void KRecentFilesMenu_SuperHideEvent(KRecentFilesMenu* self, QHideEvent* param1);
    friend void KRecentFilesMenu_SuperPaintEvent(KRecentFilesMenu* self, QPaintEvent* param1);
    friend void KRecentFilesMenu_SuperActionEvent(KRecentFilesMenu* self, QActionEvent* param1);
    friend void KRecentFilesMenu_SuperTimerEvent(KRecentFilesMenu* self, QTimerEvent* param1);
    friend bool KRecentFilesMenu_SuperEvent(KRecentFilesMenu* self, QEvent* param1);
    friend bool KRecentFilesMenu_SuperFocusNextPrevChild(KRecentFilesMenu* self, bool next);
    friend void KRecentFilesMenu_SuperInitStyleOption(const KRecentFilesMenu* self, QStyleOptionMenuItem* option, const QAction* action);
    friend void KRecentFilesMenu_SuperMouseDoubleClickEvent(KRecentFilesMenu* self, QMouseEvent* event);
    friend void KRecentFilesMenu_SuperKeyReleaseEvent(KRecentFilesMenu* self, QKeyEvent* event);
    friend void KRecentFilesMenu_SuperFocusInEvent(KRecentFilesMenu* self, QFocusEvent* event);
    friend void KRecentFilesMenu_SuperFocusOutEvent(KRecentFilesMenu* self, QFocusEvent* event);
    friend void KRecentFilesMenu_SuperMoveEvent(KRecentFilesMenu* self, QMoveEvent* event);
    friend void KRecentFilesMenu_SuperResizeEvent(KRecentFilesMenu* self, QResizeEvent* event);
    friend void KRecentFilesMenu_SuperCloseEvent(KRecentFilesMenu* self, QCloseEvent* event);
    friend void KRecentFilesMenu_SuperContextMenuEvent(KRecentFilesMenu* self, QContextMenuEvent* event);
    friend void KRecentFilesMenu_SuperTabletEvent(KRecentFilesMenu* self, QTabletEvent* event);
    friend void KRecentFilesMenu_SuperDragEnterEvent(KRecentFilesMenu* self, QDragEnterEvent* event);
    friend void KRecentFilesMenu_SuperDragMoveEvent(KRecentFilesMenu* self, QDragMoveEvent* event);
    friend void KRecentFilesMenu_SuperDragLeaveEvent(KRecentFilesMenu* self, QDragLeaveEvent* event);
    friend void KRecentFilesMenu_SuperDropEvent(KRecentFilesMenu* self, QDropEvent* event);
    friend void KRecentFilesMenu_SuperShowEvent(KRecentFilesMenu* self, QShowEvent* event);
    friend bool KRecentFilesMenu_SuperNativeEvent(KRecentFilesMenu* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KRecentFilesMenu_SuperMetric(const KRecentFilesMenu* self, int param1);
    friend void KRecentFilesMenu_SuperInitPainter(const KRecentFilesMenu* self, QPainter* painter);
    friend QPaintDevice* KRecentFilesMenu_SuperRedirected(const KRecentFilesMenu* self, QPoint* offset);
    friend QPainter* KRecentFilesMenu_SuperSharedPainter(const KRecentFilesMenu* self);
    friend void KRecentFilesMenu_SuperInputMethodEvent(KRecentFilesMenu* self, QInputMethodEvent* param1);
    friend void KRecentFilesMenu_SuperChildEvent(KRecentFilesMenu* self, QChildEvent* event);
    friend void KRecentFilesMenu_SuperCustomEvent(KRecentFilesMenu* self, QEvent* event);
    friend void KRecentFilesMenu_SuperConnectNotify(KRecentFilesMenu* self, const QMetaMethod* signal);
    friend void KRecentFilesMenu_SuperDisconnectNotify(KRecentFilesMenu* self, const QMetaMethod* signal);
};

#endif
