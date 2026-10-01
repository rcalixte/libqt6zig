#pragma once
#ifndef EXTRAS_KBOOKMARKS_LIBKBOOKMARKCONTEXTMENU_HXX
#define EXTRAS_KBOOKMARKS_LIBKBOOKMARKCONTEXTMENU_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KBookmarkContextMenu
class VirtualKBookmarkContextMenu final : public KBookmarkContextMenu {
  public:
    // Virtual class public types (including callbacks and access types)
    using KBookmarkContextMenu_MetaObject_Callback = QMetaObject* (*)(const KBookmarkContextMenu*);
    using KBookmarkContextMenu_Metacast_Callback = void* (*)(KBookmarkContextMenu*, const char*);
    using KBookmarkContextMenu_Metacall_Callback = int (*)(KBookmarkContextMenu*, int, int, void**);
    using KBookmarkContextMenu_AddActions_Callback = void (*)(KBookmarkContextMenu*);
    using KBookmarkContextMenu_SizeHint_Callback = QSize* (*)(const KBookmarkContextMenu*);
    using KBookmarkContextMenu_ChangeEvent_Callback = void (*)(KBookmarkContextMenu*, QEvent*);
    using KBookmarkContextMenu_KeyPressEvent_Callback = void (*)(KBookmarkContextMenu*, QKeyEvent*);
    using KBookmarkContextMenu_MouseReleaseEvent_Callback = void (*)(KBookmarkContextMenu*, QMouseEvent*);
    using KBookmarkContextMenu_MousePressEvent_Callback = void (*)(KBookmarkContextMenu*, QMouseEvent*);
    using KBookmarkContextMenu_MouseMoveEvent_Callback = void (*)(KBookmarkContextMenu*, QMouseEvent*);
    using KBookmarkContextMenu_WheelEvent_Callback = void (*)(KBookmarkContextMenu*, QWheelEvent*);
    using KBookmarkContextMenu_EnterEvent_Callback = void (*)(KBookmarkContextMenu*, QEnterEvent*);
    using KBookmarkContextMenu_LeaveEvent_Callback = void (*)(KBookmarkContextMenu*, QEvent*);
    using KBookmarkContextMenu_HideEvent_Callback = void (*)(KBookmarkContextMenu*, QHideEvent*);
    using KBookmarkContextMenu_PaintEvent_Callback = void (*)(KBookmarkContextMenu*, QPaintEvent*);
    using KBookmarkContextMenu_ActionEvent_Callback = void (*)(KBookmarkContextMenu*, QActionEvent*);
    using KBookmarkContextMenu_TimerEvent_Callback = void (*)(KBookmarkContextMenu*, QTimerEvent*);
    using KBookmarkContextMenu_Event_Callback = bool (*)(KBookmarkContextMenu*, QEvent*);
    using KBookmarkContextMenu_FocusNextPrevChild_Callback = bool (*)(KBookmarkContextMenu*, bool);
    using KBookmarkContextMenu_InitStyleOption_Callback = void (*)(const KBookmarkContextMenu*, QStyleOptionMenuItem*, QAction*);
    using KBookmarkContextMenu_DevType_Callback = int (*)(const KBookmarkContextMenu*);
    using KBookmarkContextMenu_SetVisible_Callback = void (*)(KBookmarkContextMenu*, bool);
    using KBookmarkContextMenu_MinimumSizeHint_Callback = QSize* (*)(const KBookmarkContextMenu*);
    using KBookmarkContextMenu_HeightForWidth_Callback = int (*)(const KBookmarkContextMenu*, int);
    using KBookmarkContextMenu_HasHeightForWidth_Callback = bool (*)(const KBookmarkContextMenu*);
    using KBookmarkContextMenu_PaintEngine_Callback = QPaintEngine* (*)(const KBookmarkContextMenu*);
    using KBookmarkContextMenu_MouseDoubleClickEvent_Callback = void (*)(KBookmarkContextMenu*, QMouseEvent*);
    using KBookmarkContextMenu_KeyReleaseEvent_Callback = void (*)(KBookmarkContextMenu*, QKeyEvent*);
    using KBookmarkContextMenu_FocusInEvent_Callback = void (*)(KBookmarkContextMenu*, QFocusEvent*);
    using KBookmarkContextMenu_FocusOutEvent_Callback = void (*)(KBookmarkContextMenu*, QFocusEvent*);
    using KBookmarkContextMenu_MoveEvent_Callback = void (*)(KBookmarkContextMenu*, QMoveEvent*);
    using KBookmarkContextMenu_ResizeEvent_Callback = void (*)(KBookmarkContextMenu*, QResizeEvent*);
    using KBookmarkContextMenu_CloseEvent_Callback = void (*)(KBookmarkContextMenu*, QCloseEvent*);
    using KBookmarkContextMenu_ContextMenuEvent_Callback = void (*)(KBookmarkContextMenu*, QContextMenuEvent*);
    using KBookmarkContextMenu_TabletEvent_Callback = void (*)(KBookmarkContextMenu*, QTabletEvent*);
    using KBookmarkContextMenu_DragEnterEvent_Callback = void (*)(KBookmarkContextMenu*, QDragEnterEvent*);
    using KBookmarkContextMenu_DragMoveEvent_Callback = void (*)(KBookmarkContextMenu*, QDragMoveEvent*);
    using KBookmarkContextMenu_DragLeaveEvent_Callback = void (*)(KBookmarkContextMenu*, QDragLeaveEvent*);
    using KBookmarkContextMenu_DropEvent_Callback = void (*)(KBookmarkContextMenu*, QDropEvent*);
    using KBookmarkContextMenu_ShowEvent_Callback = void (*)(KBookmarkContextMenu*, QShowEvent*);
    using KBookmarkContextMenu_NativeEvent_Callback = bool (*)(KBookmarkContextMenu*, libqt_string, void*, intptr_t*);
    using KBookmarkContextMenu_Metric_Callback = int (*)(const KBookmarkContextMenu*, int);
    using KBookmarkContextMenu_InitPainter_Callback = void (*)(const KBookmarkContextMenu*, QPainter*);
    using KBookmarkContextMenu_Redirected_Callback = QPaintDevice* (*)(const KBookmarkContextMenu*, QPoint*);
    using KBookmarkContextMenu_SharedPainter_Callback = QPainter* (*)(const KBookmarkContextMenu*);
    using KBookmarkContextMenu_InputMethodEvent_Callback = void (*)(KBookmarkContextMenu*, QInputMethodEvent*);
    using KBookmarkContextMenu_InputMethodQuery_Callback = QVariant* (*)(const KBookmarkContextMenu*, int);
    using KBookmarkContextMenu_EventFilter_Callback = bool (*)(KBookmarkContextMenu*, QObject*, QEvent*);
    using KBookmarkContextMenu_ChildEvent_Callback = void (*)(KBookmarkContextMenu*, QChildEvent*);
    using KBookmarkContextMenu_CustomEvent_Callback = void (*)(KBookmarkContextMenu*, QEvent*);
    using KBookmarkContextMenu_ConnectNotify_Callback = void (*)(KBookmarkContextMenu*, QMetaMethod*);
    using KBookmarkContextMenu_DisconnectNotify_Callback = void (*)(KBookmarkContextMenu*, QMetaMethod*);
    using KBookmarkContextMenu::addBookmark;
    using KBookmarkContextMenu::addBookmarkActions;
    using KBookmarkContextMenu::addFolderActions;
    using KBookmarkContextMenu::addOpenFolderInTabs;
    using KBookmarkContextMenu::addProperties;
    using KBookmarkContextMenu::bookmark;
    using KBookmarkContextMenu::columnCount;
    using KBookmarkContextMenu::create;
    using KBookmarkContextMenu::destroy;
    using KBookmarkContextMenu::focusNextChild;
    using KBookmarkContextMenu::focusPreviousChild;
    using KBookmarkContextMenu::getDecodedMetricF;
    using KBookmarkContextMenu::isSignalConnected;
    using KBookmarkContextMenu::manager;
    using KBookmarkContextMenu::owner;
    using KBookmarkContextMenu::receivers;
    using KBookmarkContextMenu::sender;
    using KBookmarkContextMenu::senderSignalIndex;
    using KBookmarkContextMenu::updateMicroFocus;

    // Instance callback storage
    KBookmarkContextMenu_MetaObject_Callback kbookmarkcontextmenu_metaobject_callback = nullptr;
    KBookmarkContextMenu_Metacast_Callback kbookmarkcontextmenu_metacast_callback = nullptr;
    KBookmarkContextMenu_Metacall_Callback kbookmarkcontextmenu_metacall_callback = nullptr;
    KBookmarkContextMenu_AddActions_Callback kbookmarkcontextmenu_addactions_callback = nullptr;
    KBookmarkContextMenu_SizeHint_Callback kbookmarkcontextmenu_sizehint_callback = nullptr;
    KBookmarkContextMenu_ChangeEvent_Callback kbookmarkcontextmenu_changeevent_callback = nullptr;
    KBookmarkContextMenu_KeyPressEvent_Callback kbookmarkcontextmenu_keypressevent_callback = nullptr;
    KBookmarkContextMenu_MouseReleaseEvent_Callback kbookmarkcontextmenu_mousereleaseevent_callback = nullptr;
    KBookmarkContextMenu_MousePressEvent_Callback kbookmarkcontextmenu_mousepressevent_callback = nullptr;
    KBookmarkContextMenu_MouseMoveEvent_Callback kbookmarkcontextmenu_mousemoveevent_callback = nullptr;
    KBookmarkContextMenu_WheelEvent_Callback kbookmarkcontextmenu_wheelevent_callback = nullptr;
    KBookmarkContextMenu_EnterEvent_Callback kbookmarkcontextmenu_enterevent_callback = nullptr;
    KBookmarkContextMenu_LeaveEvent_Callback kbookmarkcontextmenu_leaveevent_callback = nullptr;
    KBookmarkContextMenu_HideEvent_Callback kbookmarkcontextmenu_hideevent_callback = nullptr;
    KBookmarkContextMenu_PaintEvent_Callback kbookmarkcontextmenu_paintevent_callback = nullptr;
    KBookmarkContextMenu_ActionEvent_Callback kbookmarkcontextmenu_actionevent_callback = nullptr;
    KBookmarkContextMenu_TimerEvent_Callback kbookmarkcontextmenu_timerevent_callback = nullptr;
    KBookmarkContextMenu_Event_Callback kbookmarkcontextmenu_event_callback = nullptr;
    KBookmarkContextMenu_FocusNextPrevChild_Callback kbookmarkcontextmenu_focusnextprevchild_callback = nullptr;
    KBookmarkContextMenu_InitStyleOption_Callback kbookmarkcontextmenu_initstyleoption_callback = nullptr;
    KBookmarkContextMenu_DevType_Callback kbookmarkcontextmenu_devtype_callback = nullptr;
    KBookmarkContextMenu_SetVisible_Callback kbookmarkcontextmenu_setvisible_callback = nullptr;
    KBookmarkContextMenu_MinimumSizeHint_Callback kbookmarkcontextmenu_minimumsizehint_callback = nullptr;
    KBookmarkContextMenu_HeightForWidth_Callback kbookmarkcontextmenu_heightforwidth_callback = nullptr;
    KBookmarkContextMenu_HasHeightForWidth_Callback kbookmarkcontextmenu_hasheightforwidth_callback = nullptr;
    KBookmarkContextMenu_PaintEngine_Callback kbookmarkcontextmenu_paintengine_callback = nullptr;
    KBookmarkContextMenu_MouseDoubleClickEvent_Callback kbookmarkcontextmenu_mousedoubleclickevent_callback = nullptr;
    KBookmarkContextMenu_KeyReleaseEvent_Callback kbookmarkcontextmenu_keyreleaseevent_callback = nullptr;
    KBookmarkContextMenu_FocusInEvent_Callback kbookmarkcontextmenu_focusinevent_callback = nullptr;
    KBookmarkContextMenu_FocusOutEvent_Callback kbookmarkcontextmenu_focusoutevent_callback = nullptr;
    KBookmarkContextMenu_MoveEvent_Callback kbookmarkcontextmenu_moveevent_callback = nullptr;
    KBookmarkContextMenu_ResizeEvent_Callback kbookmarkcontextmenu_resizeevent_callback = nullptr;
    KBookmarkContextMenu_CloseEvent_Callback kbookmarkcontextmenu_closeevent_callback = nullptr;
    KBookmarkContextMenu_ContextMenuEvent_Callback kbookmarkcontextmenu_contextmenuevent_callback = nullptr;
    KBookmarkContextMenu_TabletEvent_Callback kbookmarkcontextmenu_tabletevent_callback = nullptr;
    KBookmarkContextMenu_DragEnterEvent_Callback kbookmarkcontextmenu_dragenterevent_callback = nullptr;
    KBookmarkContextMenu_DragMoveEvent_Callback kbookmarkcontextmenu_dragmoveevent_callback = nullptr;
    KBookmarkContextMenu_DragLeaveEvent_Callback kbookmarkcontextmenu_dragleaveevent_callback = nullptr;
    KBookmarkContextMenu_DropEvent_Callback kbookmarkcontextmenu_dropevent_callback = nullptr;
    KBookmarkContextMenu_ShowEvent_Callback kbookmarkcontextmenu_showevent_callback = nullptr;
    KBookmarkContextMenu_NativeEvent_Callback kbookmarkcontextmenu_nativeevent_callback = nullptr;
    KBookmarkContextMenu_Metric_Callback kbookmarkcontextmenu_metric_callback = nullptr;
    KBookmarkContextMenu_InitPainter_Callback kbookmarkcontextmenu_initpainter_callback = nullptr;
    KBookmarkContextMenu_Redirected_Callback kbookmarkcontextmenu_redirected_callback = nullptr;
    KBookmarkContextMenu_SharedPainter_Callback kbookmarkcontextmenu_sharedpainter_callback = nullptr;
    KBookmarkContextMenu_InputMethodEvent_Callback kbookmarkcontextmenu_inputmethodevent_callback = nullptr;
    KBookmarkContextMenu_InputMethodQuery_Callback kbookmarkcontextmenu_inputmethodquery_callback = nullptr;
    KBookmarkContextMenu_EventFilter_Callback kbookmarkcontextmenu_eventfilter_callback = nullptr;
    KBookmarkContextMenu_ChildEvent_Callback kbookmarkcontextmenu_childevent_callback = nullptr;
    KBookmarkContextMenu_CustomEvent_Callback kbookmarkcontextmenu_customevent_callback = nullptr;
    KBookmarkContextMenu_ConnectNotify_Callback kbookmarkcontextmenu_connectnotify_callback = nullptr;
    KBookmarkContextMenu_DisconnectNotify_Callback kbookmarkcontextmenu_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KBookmarkContextMenu {
        using KBookmarkContextMenu::actionEvent;
        using KBookmarkContextMenu::changeEvent;
        using KBookmarkContextMenu::childEvent;
        using KBookmarkContextMenu::closeEvent;
        using KBookmarkContextMenu::connectNotify;
        using KBookmarkContextMenu::contextMenuEvent;
        using KBookmarkContextMenu::customEvent;
        using KBookmarkContextMenu::disconnectNotify;
        using KBookmarkContextMenu::dragEnterEvent;
        using KBookmarkContextMenu::dragLeaveEvent;
        using KBookmarkContextMenu::dragMoveEvent;
        using KBookmarkContextMenu::dropEvent;
        using KBookmarkContextMenu::enterEvent;
        using KBookmarkContextMenu::event;
        using KBookmarkContextMenu::focusInEvent;
        using KBookmarkContextMenu::focusNextPrevChild;
        using KBookmarkContextMenu::focusOutEvent;
        using KBookmarkContextMenu::hideEvent;
        using KBookmarkContextMenu::initPainter;
        using KBookmarkContextMenu::initStyleOption;
        using KBookmarkContextMenu::inputMethodEvent;
        using KBookmarkContextMenu::keyPressEvent;
        using KBookmarkContextMenu::keyReleaseEvent;
        using KBookmarkContextMenu::leaveEvent;
        using KBookmarkContextMenu::metric;
        using KBookmarkContextMenu::mouseDoubleClickEvent;
        using KBookmarkContextMenu::mouseMoveEvent;
        using KBookmarkContextMenu::mousePressEvent;
        using KBookmarkContextMenu::mouseReleaseEvent;
        using KBookmarkContextMenu::moveEvent;
        using KBookmarkContextMenu::nativeEvent;
        using KBookmarkContextMenu::paintEvent;
        using KBookmarkContextMenu::redirected;
        using KBookmarkContextMenu::resizeEvent;
        using KBookmarkContextMenu::sharedPainter;
        using KBookmarkContextMenu::showEvent;
        using KBookmarkContextMenu::tabletEvent;
        using KBookmarkContextMenu::timerEvent;
        using KBookmarkContextMenu::wheelEvent;
    };

    VirtualKBookmarkContextMenu(const KBookmark& bm, KBookmarkManager* manager, KBookmarkOwner* owner) : KBookmarkContextMenu(bm, manager, owner) {};
    VirtualKBookmarkContextMenu(const KBookmark& bm, KBookmarkManager* manager, KBookmarkOwner* owner, QWidget* parent) : KBookmarkContextMenu(bm, manager, owner, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kbookmarkcontextmenu_metaobject_callback) {
            QMetaObject* callback_ret = kbookmarkcontextmenu_metaobject_callback(this);
            return callback_ret;
        }
        return KBookmarkContextMenu::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kbookmarkcontextmenu_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kbookmarkcontextmenu_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KBookmarkContextMenu::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kbookmarkcontextmenu_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kbookmarkcontextmenu_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KBookmarkContextMenu::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void addActions() override {
        if (kbookmarkcontextmenu_addactions_callback) {
            kbookmarkcontextmenu_addactions_callback(this);
            return;
        }
        KBookmarkContextMenu::addActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kbookmarkcontextmenu_sizehint_callback) {
            QSize* callback_ret = kbookmarkcontextmenu_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KBookmarkContextMenu::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kbookmarkcontextmenu_changeevent_callback) {
            QEvent* cbval1 = param1;
            kbookmarkcontextmenu_changeevent_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kbookmarkcontextmenu_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kbookmarkcontextmenu_keypressevent_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (kbookmarkcontextmenu_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            kbookmarkcontextmenu_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (kbookmarkcontextmenu_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            kbookmarkcontextmenu_mousepressevent_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (kbookmarkcontextmenu_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            kbookmarkcontextmenu_mousemoveevent_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (kbookmarkcontextmenu_wheelevent_callback) {
            QWheelEvent* cbval1 = param1;
            kbookmarkcontextmenu_wheelevent_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* param1) override {
        if (kbookmarkcontextmenu_enterevent_callback) {
            QEnterEvent* cbval1 = param1;
            kbookmarkcontextmenu_enterevent_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::enterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* param1) override {
        if (kbookmarkcontextmenu_leaveevent_callback) {
            QEvent* cbval1 = param1;
            kbookmarkcontextmenu_leaveevent_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::leaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (kbookmarkcontextmenu_hideevent_callback) {
            QHideEvent* cbval1 = param1;
            kbookmarkcontextmenu_hideevent_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::hideEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kbookmarkcontextmenu_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            kbookmarkcontextmenu_paintevent_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* param1) override {
        if (kbookmarkcontextmenu_actionevent_callback) {
            QActionEvent* cbval1 = param1;
            kbookmarkcontextmenu_actionevent_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::actionEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (kbookmarkcontextmenu_timerevent_callback) {
            QTimerEvent* cbval1 = param1;
            kbookmarkcontextmenu_timerevent_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (kbookmarkcontextmenu_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = kbookmarkcontextmenu_event_callback(this, cbval1);
            return callback_ret;
        }
        return KBookmarkContextMenu::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kbookmarkcontextmenu_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kbookmarkcontextmenu_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KBookmarkContextMenu::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionMenuItem* option, const QAction* action) const override {
        if (kbookmarkcontextmenu_initstyleoption_callback) {
            QStyleOptionMenuItem* cbval1 = option;
            QAction* cbval2 = (QAction*)action;
            kbookmarkcontextmenu_initstyleoption_callback(this, cbval1, cbval2);
            return;
        }
        KBookmarkContextMenu::initStyleOption(option, action);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kbookmarkcontextmenu_devtype_callback) {
            int callback_ret = kbookmarkcontextmenu_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KBookmarkContextMenu::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kbookmarkcontextmenu_setvisible_callback) {
            bool cbval1 = visible;
            kbookmarkcontextmenu_setvisible_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kbookmarkcontextmenu_minimumsizehint_callback) {
            QSize* callback_ret = kbookmarkcontextmenu_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KBookmarkContextMenu::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kbookmarkcontextmenu_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kbookmarkcontextmenu_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KBookmarkContextMenu::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kbookmarkcontextmenu_hasheightforwidth_callback) {
            bool callback_ret = kbookmarkcontextmenu_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KBookmarkContextMenu::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kbookmarkcontextmenu_paintengine_callback) {
            QPaintEngine* callback_ret = kbookmarkcontextmenu_paintengine_callback(this);
            return callback_ret;
        }
        return KBookmarkContextMenu::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kbookmarkcontextmenu_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kbookmarkcontextmenu_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kbookmarkcontextmenu_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kbookmarkcontextmenu_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kbookmarkcontextmenu_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kbookmarkcontextmenu_focusinevent_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kbookmarkcontextmenu_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kbookmarkcontextmenu_focusoutevent_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kbookmarkcontextmenu_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kbookmarkcontextmenu_moveevent_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kbookmarkcontextmenu_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kbookmarkcontextmenu_resizeevent_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kbookmarkcontextmenu_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kbookmarkcontextmenu_closeevent_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kbookmarkcontextmenu_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kbookmarkcontextmenu_contextmenuevent_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kbookmarkcontextmenu_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kbookmarkcontextmenu_tabletevent_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kbookmarkcontextmenu_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kbookmarkcontextmenu_dragenterevent_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kbookmarkcontextmenu_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kbookmarkcontextmenu_dragmoveevent_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kbookmarkcontextmenu_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kbookmarkcontextmenu_dragleaveevent_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kbookmarkcontextmenu_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kbookmarkcontextmenu_dropevent_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kbookmarkcontextmenu_showevent_callback) {
            QShowEvent* cbval1 = event;
            kbookmarkcontextmenu_showevent_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kbookmarkcontextmenu_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kbookmarkcontextmenu_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KBookmarkContextMenu::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kbookmarkcontextmenu_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kbookmarkcontextmenu_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KBookmarkContextMenu::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kbookmarkcontextmenu_initpainter_callback) {
            QPainter* cbval1 = painter;
            kbookmarkcontextmenu_initpainter_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kbookmarkcontextmenu_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kbookmarkcontextmenu_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KBookmarkContextMenu::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kbookmarkcontextmenu_sharedpainter_callback) {
            QPainter* callback_ret = kbookmarkcontextmenu_sharedpainter_callback(this);
            return callback_ret;
        }
        return KBookmarkContextMenu::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kbookmarkcontextmenu_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kbookmarkcontextmenu_inputmethodevent_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kbookmarkcontextmenu_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kbookmarkcontextmenu_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KBookmarkContextMenu::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kbookmarkcontextmenu_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kbookmarkcontextmenu_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KBookmarkContextMenu::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kbookmarkcontextmenu_childevent_callback) {
            QChildEvent* cbval1 = event;
            kbookmarkcontextmenu_childevent_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kbookmarkcontextmenu_customevent_callback) {
            QEvent* cbval1 = event;
            kbookmarkcontextmenu_customevent_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kbookmarkcontextmenu_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kbookmarkcontextmenu_connectnotify_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kbookmarkcontextmenu_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kbookmarkcontextmenu_disconnectnotify_callback(this, cbval1);
            return;
        }
        KBookmarkContextMenu::disconnectNotify(signal);
    }

    // Friend functions
    friend void KBookmarkContextMenu_SuperChangeEvent(KBookmarkContextMenu* self, QEvent* param1);
    friend void KBookmarkContextMenu_SuperKeyPressEvent(KBookmarkContextMenu* self, QKeyEvent* param1);
    friend void KBookmarkContextMenu_SuperMouseReleaseEvent(KBookmarkContextMenu* self, QMouseEvent* param1);
    friend void KBookmarkContextMenu_SuperMousePressEvent(KBookmarkContextMenu* self, QMouseEvent* param1);
    friend void KBookmarkContextMenu_SuperMouseMoveEvent(KBookmarkContextMenu* self, QMouseEvent* param1);
    friend void KBookmarkContextMenu_SuperWheelEvent(KBookmarkContextMenu* self, QWheelEvent* param1);
    friend void KBookmarkContextMenu_SuperEnterEvent(KBookmarkContextMenu* self, QEnterEvent* param1);
    friend void KBookmarkContextMenu_SuperLeaveEvent(KBookmarkContextMenu* self, QEvent* param1);
    friend void KBookmarkContextMenu_SuperHideEvent(KBookmarkContextMenu* self, QHideEvent* param1);
    friend void KBookmarkContextMenu_SuperPaintEvent(KBookmarkContextMenu* self, QPaintEvent* param1);
    friend void KBookmarkContextMenu_SuperActionEvent(KBookmarkContextMenu* self, QActionEvent* param1);
    friend void KBookmarkContextMenu_SuperTimerEvent(KBookmarkContextMenu* self, QTimerEvent* param1);
    friend bool KBookmarkContextMenu_SuperEvent(KBookmarkContextMenu* self, QEvent* param1);
    friend bool KBookmarkContextMenu_SuperFocusNextPrevChild(KBookmarkContextMenu* self, bool next);
    friend void KBookmarkContextMenu_SuperInitStyleOption(const KBookmarkContextMenu* self, QStyleOptionMenuItem* option, const QAction* action);
    friend void KBookmarkContextMenu_SuperMouseDoubleClickEvent(KBookmarkContextMenu* self, QMouseEvent* event);
    friend void KBookmarkContextMenu_SuperKeyReleaseEvent(KBookmarkContextMenu* self, QKeyEvent* event);
    friend void KBookmarkContextMenu_SuperFocusInEvent(KBookmarkContextMenu* self, QFocusEvent* event);
    friend void KBookmarkContextMenu_SuperFocusOutEvent(KBookmarkContextMenu* self, QFocusEvent* event);
    friend void KBookmarkContextMenu_SuperMoveEvent(KBookmarkContextMenu* self, QMoveEvent* event);
    friend void KBookmarkContextMenu_SuperResizeEvent(KBookmarkContextMenu* self, QResizeEvent* event);
    friend void KBookmarkContextMenu_SuperCloseEvent(KBookmarkContextMenu* self, QCloseEvent* event);
    friend void KBookmarkContextMenu_SuperContextMenuEvent(KBookmarkContextMenu* self, QContextMenuEvent* event);
    friend void KBookmarkContextMenu_SuperTabletEvent(KBookmarkContextMenu* self, QTabletEvent* event);
    friend void KBookmarkContextMenu_SuperDragEnterEvent(KBookmarkContextMenu* self, QDragEnterEvent* event);
    friend void KBookmarkContextMenu_SuperDragMoveEvent(KBookmarkContextMenu* self, QDragMoveEvent* event);
    friend void KBookmarkContextMenu_SuperDragLeaveEvent(KBookmarkContextMenu* self, QDragLeaveEvent* event);
    friend void KBookmarkContextMenu_SuperDropEvent(KBookmarkContextMenu* self, QDropEvent* event);
    friend void KBookmarkContextMenu_SuperShowEvent(KBookmarkContextMenu* self, QShowEvent* event);
    friend bool KBookmarkContextMenu_SuperNativeEvent(KBookmarkContextMenu* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KBookmarkContextMenu_SuperMetric(const KBookmarkContextMenu* self, int param1);
    friend void KBookmarkContextMenu_SuperInitPainter(const KBookmarkContextMenu* self, QPainter* painter);
    friend QPaintDevice* KBookmarkContextMenu_SuperRedirected(const KBookmarkContextMenu* self, QPoint* offset);
    friend QPainter* KBookmarkContextMenu_SuperSharedPainter(const KBookmarkContextMenu* self);
    friend void KBookmarkContextMenu_SuperInputMethodEvent(KBookmarkContextMenu* self, QInputMethodEvent* param1);
    friend void KBookmarkContextMenu_SuperChildEvent(KBookmarkContextMenu* self, QChildEvent* event);
    friend void KBookmarkContextMenu_SuperCustomEvent(KBookmarkContextMenu* self, QEvent* event);
    friend void KBookmarkContextMenu_SuperConnectNotify(KBookmarkContextMenu* self, const QMetaMethod* signal);
    friend void KBookmarkContextMenu_SuperDisconnectNotify(KBookmarkContextMenu* self, const QMetaMethod* signal);
};

#endif
