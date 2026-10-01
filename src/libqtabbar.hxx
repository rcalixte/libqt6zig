#pragma once
#ifndef LIBQTABBAR_HXX
#define LIBQTABBAR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTabBar
class VirtualQTabBar final : public QTabBar {
  public:
    // Virtual class public types (including callbacks and access types)
    using QTabBar_MetaObject_Callback = QMetaObject* (*)(const QTabBar*);
    using QTabBar_Metacast_Callback = void* (*)(QTabBar*, const char*);
    using QTabBar_Metacall_Callback = int (*)(QTabBar*, int, int, void**);
    using QTabBar_SizeHint_Callback = QSize* (*)(const QTabBar*);
    using QTabBar_MinimumSizeHint_Callback = QSize* (*)(const QTabBar*);
    using QTabBar_TabSizeHint_Callback = QSize* (*)(const QTabBar*, int);
    using QTabBar_MinimumTabSizeHint_Callback = QSize* (*)(const QTabBar*, int);
    using QTabBar_TabInserted_Callback = void (*)(QTabBar*, int);
    using QTabBar_TabRemoved_Callback = void (*)(QTabBar*, int);
    using QTabBar_TabLayoutChange_Callback = void (*)(QTabBar*);
    using QTabBar_Event_Callback = bool (*)(QTabBar*, QEvent*);
    using QTabBar_ResizeEvent_Callback = void (*)(QTabBar*, QResizeEvent*);
    using QTabBar_ShowEvent_Callback = void (*)(QTabBar*, QShowEvent*);
    using QTabBar_HideEvent_Callback = void (*)(QTabBar*, QHideEvent*);
    using QTabBar_PaintEvent_Callback = void (*)(QTabBar*, QPaintEvent*);
    using QTabBar_MousePressEvent_Callback = void (*)(QTabBar*, QMouseEvent*);
    using QTabBar_MouseMoveEvent_Callback = void (*)(QTabBar*, QMouseEvent*);
    using QTabBar_MouseReleaseEvent_Callback = void (*)(QTabBar*, QMouseEvent*);
    using QTabBar_MouseDoubleClickEvent_Callback = void (*)(QTabBar*, QMouseEvent*);
    using QTabBar_WheelEvent_Callback = void (*)(QTabBar*, QWheelEvent*);
    using QTabBar_KeyPressEvent_Callback = void (*)(QTabBar*, QKeyEvent*);
    using QTabBar_ChangeEvent_Callback = void (*)(QTabBar*, QEvent*);
    using QTabBar_TimerEvent_Callback = void (*)(QTabBar*, QTimerEvent*);
    using QTabBar_InitStyleOption_Callback = void (*)(const QTabBar*, QStyleOptionTab*, int);
    using QTabBar_DevType_Callback = int (*)(const QTabBar*);
    using QTabBar_SetVisible_Callback = void (*)(QTabBar*, bool);
    using QTabBar_HeightForWidth_Callback = int (*)(const QTabBar*, int);
    using QTabBar_HasHeightForWidth_Callback = bool (*)(const QTabBar*);
    using QTabBar_PaintEngine_Callback = QPaintEngine* (*)(const QTabBar*);
    using QTabBar_KeyReleaseEvent_Callback = void (*)(QTabBar*, QKeyEvent*);
    using QTabBar_FocusInEvent_Callback = void (*)(QTabBar*, QFocusEvent*);
    using QTabBar_FocusOutEvent_Callback = void (*)(QTabBar*, QFocusEvent*);
    using QTabBar_EnterEvent_Callback = void (*)(QTabBar*, QEnterEvent*);
    using QTabBar_LeaveEvent_Callback = void (*)(QTabBar*, QEvent*);
    using QTabBar_MoveEvent_Callback = void (*)(QTabBar*, QMoveEvent*);
    using QTabBar_CloseEvent_Callback = void (*)(QTabBar*, QCloseEvent*);
    using QTabBar_ContextMenuEvent_Callback = void (*)(QTabBar*, QContextMenuEvent*);
    using QTabBar_TabletEvent_Callback = void (*)(QTabBar*, QTabletEvent*);
    using QTabBar_ActionEvent_Callback = void (*)(QTabBar*, QActionEvent*);
    using QTabBar_DragEnterEvent_Callback = void (*)(QTabBar*, QDragEnterEvent*);
    using QTabBar_DragMoveEvent_Callback = void (*)(QTabBar*, QDragMoveEvent*);
    using QTabBar_DragLeaveEvent_Callback = void (*)(QTabBar*, QDragLeaveEvent*);
    using QTabBar_DropEvent_Callback = void (*)(QTabBar*, QDropEvent*);
    using QTabBar_NativeEvent_Callback = bool (*)(QTabBar*, libqt_string, void*, intptr_t*);
    using QTabBar_Metric_Callback = int (*)(const QTabBar*, int);
    using QTabBar_InitPainter_Callback = void (*)(const QTabBar*, QPainter*);
    using QTabBar_Redirected_Callback = QPaintDevice* (*)(const QTabBar*, QPoint*);
    using QTabBar_SharedPainter_Callback = QPainter* (*)(const QTabBar*);
    using QTabBar_InputMethodEvent_Callback = void (*)(QTabBar*, QInputMethodEvent*);
    using QTabBar_InputMethodQuery_Callback = QVariant* (*)(const QTabBar*, int);
    using QTabBar_FocusNextPrevChild_Callback = bool (*)(QTabBar*, bool);
    using QTabBar_EventFilter_Callback = bool (*)(QTabBar*, QObject*, QEvent*);
    using QTabBar_ChildEvent_Callback = void (*)(QTabBar*, QChildEvent*);
    using QTabBar_CustomEvent_Callback = void (*)(QTabBar*, QEvent*);
    using QTabBar_ConnectNotify_Callback = void (*)(QTabBar*, QMetaMethod*);
    using QTabBar_DisconnectNotify_Callback = void (*)(QTabBar*, QMetaMethod*);
    using QTabBar::create;
    using QTabBar::destroy;
    using QTabBar::focusNextChild;
    using QTabBar::focusPreviousChild;
    using QTabBar::getDecodedMetricF;
    using QTabBar::isSignalConnected;
    using QTabBar::receivers;
    using QTabBar::sender;
    using QTabBar::senderSignalIndex;
    using QTabBar::updateMicroFocus;

    // Instance callback storage
    QTabBar_MetaObject_Callback qtabbar_metaobject_callback = nullptr;
    QTabBar_Metacast_Callback qtabbar_metacast_callback = nullptr;
    QTabBar_Metacall_Callback qtabbar_metacall_callback = nullptr;
    QTabBar_SizeHint_Callback qtabbar_sizehint_callback = nullptr;
    QTabBar_MinimumSizeHint_Callback qtabbar_minimumsizehint_callback = nullptr;
    QTabBar_TabSizeHint_Callback qtabbar_tabsizehint_callback = nullptr;
    QTabBar_MinimumTabSizeHint_Callback qtabbar_minimumtabsizehint_callback = nullptr;
    QTabBar_TabInserted_Callback qtabbar_tabinserted_callback = nullptr;
    QTabBar_TabRemoved_Callback qtabbar_tabremoved_callback = nullptr;
    QTabBar_TabLayoutChange_Callback qtabbar_tablayoutchange_callback = nullptr;
    QTabBar_Event_Callback qtabbar_event_callback = nullptr;
    QTabBar_ResizeEvent_Callback qtabbar_resizeevent_callback = nullptr;
    QTabBar_ShowEvent_Callback qtabbar_showevent_callback = nullptr;
    QTabBar_HideEvent_Callback qtabbar_hideevent_callback = nullptr;
    QTabBar_PaintEvent_Callback qtabbar_paintevent_callback = nullptr;
    QTabBar_MousePressEvent_Callback qtabbar_mousepressevent_callback = nullptr;
    QTabBar_MouseMoveEvent_Callback qtabbar_mousemoveevent_callback = nullptr;
    QTabBar_MouseReleaseEvent_Callback qtabbar_mousereleaseevent_callback = nullptr;
    QTabBar_MouseDoubleClickEvent_Callback qtabbar_mousedoubleclickevent_callback = nullptr;
    QTabBar_WheelEvent_Callback qtabbar_wheelevent_callback = nullptr;
    QTabBar_KeyPressEvent_Callback qtabbar_keypressevent_callback = nullptr;
    QTabBar_ChangeEvent_Callback qtabbar_changeevent_callback = nullptr;
    QTabBar_TimerEvent_Callback qtabbar_timerevent_callback = nullptr;
    QTabBar_InitStyleOption_Callback qtabbar_initstyleoption_callback = nullptr;
    QTabBar_DevType_Callback qtabbar_devtype_callback = nullptr;
    QTabBar_SetVisible_Callback qtabbar_setvisible_callback = nullptr;
    QTabBar_HeightForWidth_Callback qtabbar_heightforwidth_callback = nullptr;
    QTabBar_HasHeightForWidth_Callback qtabbar_hasheightforwidth_callback = nullptr;
    QTabBar_PaintEngine_Callback qtabbar_paintengine_callback = nullptr;
    QTabBar_KeyReleaseEvent_Callback qtabbar_keyreleaseevent_callback = nullptr;
    QTabBar_FocusInEvent_Callback qtabbar_focusinevent_callback = nullptr;
    QTabBar_FocusOutEvent_Callback qtabbar_focusoutevent_callback = nullptr;
    QTabBar_EnterEvent_Callback qtabbar_enterevent_callback = nullptr;
    QTabBar_LeaveEvent_Callback qtabbar_leaveevent_callback = nullptr;
    QTabBar_MoveEvent_Callback qtabbar_moveevent_callback = nullptr;
    QTabBar_CloseEvent_Callback qtabbar_closeevent_callback = nullptr;
    QTabBar_ContextMenuEvent_Callback qtabbar_contextmenuevent_callback = nullptr;
    QTabBar_TabletEvent_Callback qtabbar_tabletevent_callback = nullptr;
    QTabBar_ActionEvent_Callback qtabbar_actionevent_callback = nullptr;
    QTabBar_DragEnterEvent_Callback qtabbar_dragenterevent_callback = nullptr;
    QTabBar_DragMoveEvent_Callback qtabbar_dragmoveevent_callback = nullptr;
    QTabBar_DragLeaveEvent_Callback qtabbar_dragleaveevent_callback = nullptr;
    QTabBar_DropEvent_Callback qtabbar_dropevent_callback = nullptr;
    QTabBar_NativeEvent_Callback qtabbar_nativeevent_callback = nullptr;
    QTabBar_Metric_Callback qtabbar_metric_callback = nullptr;
    QTabBar_InitPainter_Callback qtabbar_initpainter_callback = nullptr;
    QTabBar_Redirected_Callback qtabbar_redirected_callback = nullptr;
    QTabBar_SharedPainter_Callback qtabbar_sharedpainter_callback = nullptr;
    QTabBar_InputMethodEvent_Callback qtabbar_inputmethodevent_callback = nullptr;
    QTabBar_InputMethodQuery_Callback qtabbar_inputmethodquery_callback = nullptr;
    QTabBar_FocusNextPrevChild_Callback qtabbar_focusnextprevchild_callback = nullptr;
    QTabBar_EventFilter_Callback qtabbar_eventfilter_callback = nullptr;
    QTabBar_ChildEvent_Callback qtabbar_childevent_callback = nullptr;
    QTabBar_CustomEvent_Callback qtabbar_customevent_callback = nullptr;
    QTabBar_ConnectNotify_Callback qtabbar_connectnotify_callback = nullptr;
    QTabBar_DisconnectNotify_Callback qtabbar_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QTabBar {
        using QTabBar::actionEvent;
        using QTabBar::changeEvent;
        using QTabBar::childEvent;
        using QTabBar::closeEvent;
        using QTabBar::connectNotify;
        using QTabBar::contextMenuEvent;
        using QTabBar::customEvent;
        using QTabBar::disconnectNotify;
        using QTabBar::dragEnterEvent;
        using QTabBar::dragLeaveEvent;
        using QTabBar::dragMoveEvent;
        using QTabBar::dropEvent;
        using QTabBar::enterEvent;
        using QTabBar::event;
        using QTabBar::focusInEvent;
        using QTabBar::focusNextPrevChild;
        using QTabBar::focusOutEvent;
        using QTabBar::hideEvent;
        using QTabBar::initPainter;
        using QTabBar::initStyleOption;
        using QTabBar::inputMethodEvent;
        using QTabBar::keyPressEvent;
        using QTabBar::keyReleaseEvent;
        using QTabBar::leaveEvent;
        using QTabBar::metric;
        using QTabBar::minimumTabSizeHint;
        using QTabBar::mouseDoubleClickEvent;
        using QTabBar::mouseMoveEvent;
        using QTabBar::mousePressEvent;
        using QTabBar::mouseReleaseEvent;
        using QTabBar::moveEvent;
        using QTabBar::nativeEvent;
        using QTabBar::paintEvent;
        using QTabBar::redirected;
        using QTabBar::resizeEvent;
        using QTabBar::sharedPainter;
        using QTabBar::showEvent;
        using QTabBar::tabInserted;
        using QTabBar::tabLayoutChange;
        using QTabBar::tabletEvent;
        using QTabBar::tabRemoved;
        using QTabBar::tabSizeHint;
        using QTabBar::timerEvent;
        using QTabBar::wheelEvent;
    };

    VirtualQTabBar(QWidget* parent) : QTabBar(parent) {};
    VirtualQTabBar() : QTabBar() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtabbar_metaobject_callback) {
            QMetaObject* callback_ret = qtabbar_metaobject_callback(this);
            return callback_ret;
        }
        return QTabBar::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtabbar_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qtabbar_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QTabBar::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtabbar_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qtabbar_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTabBar::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtabbar_sizehint_callback) {
            QSize* callback_ret = qtabbar_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTabBar::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtabbar_minimumsizehint_callback) {
            QSize* callback_ret = qtabbar_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTabBar::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize tabSizeHint(int index) const override {
        if (qtabbar_tabsizehint_callback) {
            int cbval1 = index;
            QSize* callback_ret = qtabbar_tabsizehint_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTabBar::tabSizeHint(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumTabSizeHint(int index) const override {
        if (qtabbar_minimumtabsizehint_callback) {
            int cbval1 = index;
            QSize* callback_ret = qtabbar_minimumtabsizehint_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTabBar::minimumTabSizeHint(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabInserted(int index) override {
        if (qtabbar_tabinserted_callback) {
            int cbval1 = index;
            qtabbar_tabinserted_callback(this, cbval1);
            return;
        }
        QTabBar::tabInserted(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabRemoved(int index) override {
        if (qtabbar_tabremoved_callback) {
            int cbval1 = index;
            qtabbar_tabremoved_callback(this, cbval1);
            return;
        }
        QTabBar::tabRemoved(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabLayoutChange() override {
        if (qtabbar_tablayoutchange_callback) {
            qtabbar_tablayoutchange_callback(this);
            return;
        }
        QTabBar::tabLayoutChange();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qtabbar_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qtabbar_event_callback(this, cbval1);
            return callback_ret;
        }
        return QTabBar::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qtabbar_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            qtabbar_resizeevent_callback(this, cbval1);
            return;
        }
        QTabBar::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qtabbar_showevent_callback) {
            QShowEvent* cbval1 = param1;
            qtabbar_showevent_callback(this, cbval1);
            return;
        }
        QTabBar::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (qtabbar_hideevent_callback) {
            QHideEvent* cbval1 = param1;
            qtabbar_hideevent_callback(this, cbval1);
            return;
        }
        QTabBar::hideEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qtabbar_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qtabbar_paintevent_callback(this, cbval1);
            return;
        }
        QTabBar::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qtabbar_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            qtabbar_mousepressevent_callback(this, cbval1);
            return;
        }
        QTabBar::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qtabbar_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            qtabbar_mousemoveevent_callback(this, cbval1);
            return;
        }
        QTabBar::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qtabbar_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            qtabbar_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QTabBar::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (qtabbar_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = param1;
            qtabbar_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QTabBar::mouseDoubleClickEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qtabbar_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qtabbar_wheelevent_callback(this, cbval1);
            return;
        }
        QTabBar::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qtabbar_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qtabbar_keypressevent_callback(this, cbval1);
            return;
        }
        QTabBar::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qtabbar_changeevent_callback) {
            QEvent* cbval1 = param1;
            qtabbar_changeevent_callback(this, cbval1);
            return;
        }
        QTabBar::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtabbar_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qtabbar_timerevent_callback(this, cbval1);
            return;
        }
        QTabBar::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionTab* option, int tabIndex) const override {
        if (qtabbar_initstyleoption_callback) {
            QStyleOptionTab* cbval1 = option;
            int cbval2 = tabIndex;
            qtabbar_initstyleoption_callback(this, cbval1, cbval2);
            return;
        }
        QTabBar::initStyleOption(option, tabIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtabbar_devtype_callback) {
            int callback_ret = qtabbar_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QTabBar::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtabbar_setvisible_callback) {
            bool cbval1 = visible;
            qtabbar_setvisible_callback(this, cbval1);
            return;
        }
        QTabBar::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtabbar_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qtabbar_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTabBar::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtabbar_hasheightforwidth_callback) {
            bool callback_ret = qtabbar_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QTabBar::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtabbar_paintengine_callback) {
            QPaintEngine* callback_ret = qtabbar_paintengine_callback(this);
            return callback_ret;
        }
        return QTabBar::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qtabbar_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qtabbar_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QTabBar::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qtabbar_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qtabbar_focusinevent_callback(this, cbval1);
            return;
        }
        QTabBar::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qtabbar_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qtabbar_focusoutevent_callback(this, cbval1);
            return;
        }
        QTabBar::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtabbar_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qtabbar_enterevent_callback(this, cbval1);
            return;
        }
        QTabBar::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtabbar_leaveevent_callback) {
            QEvent* cbval1 = event;
            qtabbar_leaveevent_callback(this, cbval1);
            return;
        }
        QTabBar::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtabbar_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qtabbar_moveevent_callback(this, cbval1);
            return;
        }
        QTabBar::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtabbar_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qtabbar_closeevent_callback(this, cbval1);
            return;
        }
        QTabBar::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qtabbar_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qtabbar_contextmenuevent_callback(this, cbval1);
            return;
        }
        QTabBar::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtabbar_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qtabbar_tabletevent_callback(this, cbval1);
            return;
        }
        QTabBar::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtabbar_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qtabbar_actionevent_callback(this, cbval1);
            return;
        }
        QTabBar::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qtabbar_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qtabbar_dragenterevent_callback(this, cbval1);
            return;
        }
        QTabBar::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qtabbar_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qtabbar_dragmoveevent_callback(this, cbval1);
            return;
        }
        QTabBar::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qtabbar_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qtabbar_dragleaveevent_callback(this, cbval1);
            return;
        }
        QTabBar::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qtabbar_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qtabbar_dropevent_callback(this, cbval1);
            return;
        }
        QTabBar::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtabbar_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qtabbar_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QTabBar::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtabbar_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qtabbar_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTabBar::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtabbar_initpainter_callback) {
            QPainter* cbval1 = painter;
            qtabbar_initpainter_callback(this, cbval1);
            return;
        }
        QTabBar::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtabbar_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qtabbar_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QTabBar::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtabbar_sharedpainter_callback) {
            QPainter* callback_ret = qtabbar_sharedpainter_callback(this);
            return callback_ret;
        }
        return QTabBar::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qtabbar_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qtabbar_inputmethodevent_callback(this, cbval1);
            return;
        }
        QTabBar::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qtabbar_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qtabbar_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTabBar::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtabbar_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qtabbar_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QTabBar::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtabbar_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qtabbar_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTabBar::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtabbar_childevent_callback) {
            QChildEvent* cbval1 = event;
            qtabbar_childevent_callback(this, cbval1);
            return;
        }
        QTabBar::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtabbar_customevent_callback) {
            QEvent* cbval1 = event;
            qtabbar_customevent_callback(this, cbval1);
            return;
        }
        QTabBar::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtabbar_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtabbar_connectnotify_callback(this, cbval1);
            return;
        }
        QTabBar::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtabbar_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtabbar_disconnectnotify_callback(this, cbval1);
            return;
        }
        QTabBar::disconnectNotify(signal);
    }

    // Friend functions
    friend QSize* QTabBar_SuperTabSizeHint(const QTabBar* self, int index);
    friend QSize* QTabBar_SuperMinimumTabSizeHint(const QTabBar* self, int index);
    friend void QTabBar_SuperTabInserted(QTabBar* self, int index);
    friend void QTabBar_SuperTabRemoved(QTabBar* self, int index);
    friend void QTabBar_SuperTabLayoutChange(QTabBar* self);
    friend bool QTabBar_SuperEvent(QTabBar* self, QEvent* param1);
    friend void QTabBar_SuperResizeEvent(QTabBar* self, QResizeEvent* param1);
    friend void QTabBar_SuperShowEvent(QTabBar* self, QShowEvent* param1);
    friend void QTabBar_SuperHideEvent(QTabBar* self, QHideEvent* param1);
    friend void QTabBar_SuperPaintEvent(QTabBar* self, QPaintEvent* param1);
    friend void QTabBar_SuperMousePressEvent(QTabBar* self, QMouseEvent* param1);
    friend void QTabBar_SuperMouseMoveEvent(QTabBar* self, QMouseEvent* param1);
    friend void QTabBar_SuperMouseReleaseEvent(QTabBar* self, QMouseEvent* param1);
    friend void QTabBar_SuperMouseDoubleClickEvent(QTabBar* self, QMouseEvent* param1);
    friend void QTabBar_SuperWheelEvent(QTabBar* self, QWheelEvent* event);
    friend void QTabBar_SuperKeyPressEvent(QTabBar* self, QKeyEvent* param1);
    friend void QTabBar_SuperChangeEvent(QTabBar* self, QEvent* param1);
    friend void QTabBar_SuperTimerEvent(QTabBar* self, QTimerEvent* event);
    friend void QTabBar_SuperInitStyleOption(const QTabBar* self, QStyleOptionTab* option, int tabIndex);
    friend void QTabBar_SuperKeyReleaseEvent(QTabBar* self, QKeyEvent* event);
    friend void QTabBar_SuperFocusInEvent(QTabBar* self, QFocusEvent* event);
    friend void QTabBar_SuperFocusOutEvent(QTabBar* self, QFocusEvent* event);
    friend void QTabBar_SuperEnterEvent(QTabBar* self, QEnterEvent* event);
    friend void QTabBar_SuperLeaveEvent(QTabBar* self, QEvent* event);
    friend void QTabBar_SuperMoveEvent(QTabBar* self, QMoveEvent* event);
    friend void QTabBar_SuperCloseEvent(QTabBar* self, QCloseEvent* event);
    friend void QTabBar_SuperContextMenuEvent(QTabBar* self, QContextMenuEvent* event);
    friend void QTabBar_SuperTabletEvent(QTabBar* self, QTabletEvent* event);
    friend void QTabBar_SuperActionEvent(QTabBar* self, QActionEvent* event);
    friend void QTabBar_SuperDragEnterEvent(QTabBar* self, QDragEnterEvent* event);
    friend void QTabBar_SuperDragMoveEvent(QTabBar* self, QDragMoveEvent* event);
    friend void QTabBar_SuperDragLeaveEvent(QTabBar* self, QDragLeaveEvent* event);
    friend void QTabBar_SuperDropEvent(QTabBar* self, QDropEvent* event);
    friend bool QTabBar_SuperNativeEvent(QTabBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QTabBar_SuperMetric(const QTabBar* self, int param1);
    friend void QTabBar_SuperInitPainter(const QTabBar* self, QPainter* painter);
    friend QPaintDevice* QTabBar_SuperRedirected(const QTabBar* self, QPoint* offset);
    friend QPainter* QTabBar_SuperSharedPainter(const QTabBar* self);
    friend void QTabBar_SuperInputMethodEvent(QTabBar* self, QInputMethodEvent* param1);
    friend bool QTabBar_SuperFocusNextPrevChild(QTabBar* self, bool next);
    friend void QTabBar_SuperChildEvent(QTabBar* self, QChildEvent* event);
    friend void QTabBar_SuperCustomEvent(QTabBar* self, QEvent* event);
    friend void QTabBar_SuperConnectNotify(QTabBar* self, const QMetaMethod* signal);
    friend void QTabBar_SuperDisconnectNotify(QTabBar* self, const QMetaMethod* signal);
};

#endif
