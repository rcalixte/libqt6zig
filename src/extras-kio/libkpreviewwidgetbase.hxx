#pragma once
#ifndef EXTRAS_KIO_LIBKPREVIEWWIDGETBASE_HXX
#define EXTRAS_KIO_LIBKPREVIEWWIDGETBASE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPreviewWidgetBase
class VirtualKPreviewWidgetBase : public KPreviewWidgetBase {
  public:
    // Virtual class public types (including callbacks and access types)
    using KPreviewWidgetBase_MetaObject_Callback = QMetaObject* (*)(const KPreviewWidgetBase*);
    using KPreviewWidgetBase_Metacast_Callback = void* (*)(KPreviewWidgetBase*, const char*);
    using KPreviewWidgetBase_Metacall_Callback = int (*)(KPreviewWidgetBase*, int, int, void**);
    using KPreviewWidgetBase_ShowPreview_Callback = void (*)(KPreviewWidgetBase*, QUrl*);
    using KPreviewWidgetBase_ClearPreview_Callback = void (*)(KPreviewWidgetBase*);
    using KPreviewWidgetBase_DevType_Callback = int (*)(const KPreviewWidgetBase*);
    using KPreviewWidgetBase_SetVisible_Callback = void (*)(KPreviewWidgetBase*, bool);
    using KPreviewWidgetBase_SizeHint_Callback = QSize* (*)(const KPreviewWidgetBase*);
    using KPreviewWidgetBase_MinimumSizeHint_Callback = QSize* (*)(const KPreviewWidgetBase*);
    using KPreviewWidgetBase_HeightForWidth_Callback = int (*)(const KPreviewWidgetBase*, int);
    using KPreviewWidgetBase_HasHeightForWidth_Callback = bool (*)(const KPreviewWidgetBase*);
    using KPreviewWidgetBase_PaintEngine_Callback = QPaintEngine* (*)(const KPreviewWidgetBase*);
    using KPreviewWidgetBase_Event_Callback = bool (*)(KPreviewWidgetBase*, QEvent*);
    using KPreviewWidgetBase_MousePressEvent_Callback = void (*)(KPreviewWidgetBase*, QMouseEvent*);
    using KPreviewWidgetBase_MouseReleaseEvent_Callback = void (*)(KPreviewWidgetBase*, QMouseEvent*);
    using KPreviewWidgetBase_MouseDoubleClickEvent_Callback = void (*)(KPreviewWidgetBase*, QMouseEvent*);
    using KPreviewWidgetBase_MouseMoveEvent_Callback = void (*)(KPreviewWidgetBase*, QMouseEvent*);
    using KPreviewWidgetBase_WheelEvent_Callback = void (*)(KPreviewWidgetBase*, QWheelEvent*);
    using KPreviewWidgetBase_KeyPressEvent_Callback = void (*)(KPreviewWidgetBase*, QKeyEvent*);
    using KPreviewWidgetBase_KeyReleaseEvent_Callback = void (*)(KPreviewWidgetBase*, QKeyEvent*);
    using KPreviewWidgetBase_FocusInEvent_Callback = void (*)(KPreviewWidgetBase*, QFocusEvent*);
    using KPreviewWidgetBase_FocusOutEvent_Callback = void (*)(KPreviewWidgetBase*, QFocusEvent*);
    using KPreviewWidgetBase_EnterEvent_Callback = void (*)(KPreviewWidgetBase*, QEnterEvent*);
    using KPreviewWidgetBase_LeaveEvent_Callback = void (*)(KPreviewWidgetBase*, QEvent*);
    using KPreviewWidgetBase_PaintEvent_Callback = void (*)(KPreviewWidgetBase*, QPaintEvent*);
    using KPreviewWidgetBase_MoveEvent_Callback = void (*)(KPreviewWidgetBase*, QMoveEvent*);
    using KPreviewWidgetBase_ResizeEvent_Callback = void (*)(KPreviewWidgetBase*, QResizeEvent*);
    using KPreviewWidgetBase_CloseEvent_Callback = void (*)(KPreviewWidgetBase*, QCloseEvent*);
    using KPreviewWidgetBase_ContextMenuEvent_Callback = void (*)(KPreviewWidgetBase*, QContextMenuEvent*);
    using KPreviewWidgetBase_TabletEvent_Callback = void (*)(KPreviewWidgetBase*, QTabletEvent*);
    using KPreviewWidgetBase_ActionEvent_Callback = void (*)(KPreviewWidgetBase*, QActionEvent*);
    using KPreviewWidgetBase_DragEnterEvent_Callback = void (*)(KPreviewWidgetBase*, QDragEnterEvent*);
    using KPreviewWidgetBase_DragMoveEvent_Callback = void (*)(KPreviewWidgetBase*, QDragMoveEvent*);
    using KPreviewWidgetBase_DragLeaveEvent_Callback = void (*)(KPreviewWidgetBase*, QDragLeaveEvent*);
    using KPreviewWidgetBase_DropEvent_Callback = void (*)(KPreviewWidgetBase*, QDropEvent*);
    using KPreviewWidgetBase_ShowEvent_Callback = void (*)(KPreviewWidgetBase*, QShowEvent*);
    using KPreviewWidgetBase_HideEvent_Callback = void (*)(KPreviewWidgetBase*, QHideEvent*);
    using KPreviewWidgetBase_NativeEvent_Callback = bool (*)(KPreviewWidgetBase*, libqt_string, void*, intptr_t*);
    using KPreviewWidgetBase_ChangeEvent_Callback = void (*)(KPreviewWidgetBase*, QEvent*);
    using KPreviewWidgetBase_Metric_Callback = int (*)(const KPreviewWidgetBase*, int);
    using KPreviewWidgetBase_InitPainter_Callback = void (*)(const KPreviewWidgetBase*, QPainter*);
    using KPreviewWidgetBase_Redirected_Callback = QPaintDevice* (*)(const KPreviewWidgetBase*, QPoint*);
    using KPreviewWidgetBase_SharedPainter_Callback = QPainter* (*)(const KPreviewWidgetBase*);
    using KPreviewWidgetBase_InputMethodEvent_Callback = void (*)(KPreviewWidgetBase*, QInputMethodEvent*);
    using KPreviewWidgetBase_InputMethodQuery_Callback = QVariant* (*)(const KPreviewWidgetBase*, int);
    using KPreviewWidgetBase_FocusNextPrevChild_Callback = bool (*)(KPreviewWidgetBase*, bool);
    using KPreviewWidgetBase_EventFilter_Callback = bool (*)(KPreviewWidgetBase*, QObject*, QEvent*);
    using KPreviewWidgetBase_TimerEvent_Callback = void (*)(KPreviewWidgetBase*, QTimerEvent*);
    using KPreviewWidgetBase_ChildEvent_Callback = void (*)(KPreviewWidgetBase*, QChildEvent*);
    using KPreviewWidgetBase_CustomEvent_Callback = void (*)(KPreviewWidgetBase*, QEvent*);
    using KPreviewWidgetBase_ConnectNotify_Callback = void (*)(KPreviewWidgetBase*, QMetaMethod*);
    using KPreviewWidgetBase_DisconnectNotify_Callback = void (*)(KPreviewWidgetBase*, QMetaMethod*);
    using KPreviewWidgetBase::create;
    using KPreviewWidgetBase::destroy;
    using KPreviewWidgetBase::focusNextChild;
    using KPreviewWidgetBase::focusPreviousChild;
    using KPreviewWidgetBase::getDecodedMetricF;
    using KPreviewWidgetBase::isSignalConnected;
    using KPreviewWidgetBase::receivers;
    using KPreviewWidgetBase::sender;
    using KPreviewWidgetBase::senderSignalIndex;
    using KPreviewWidgetBase::setSupportedMimeTypes;
    using KPreviewWidgetBase::updateMicroFocus;

    // Instance callback storage
    KPreviewWidgetBase_MetaObject_Callback kpreviewwidgetbase_metaobject_callback = nullptr;
    KPreviewWidgetBase_Metacast_Callback kpreviewwidgetbase_metacast_callback = nullptr;
    KPreviewWidgetBase_Metacall_Callback kpreviewwidgetbase_metacall_callback = nullptr;
    KPreviewWidgetBase_ShowPreview_Callback kpreviewwidgetbase_showpreview_callback = nullptr;
    KPreviewWidgetBase_ClearPreview_Callback kpreviewwidgetbase_clearpreview_callback = nullptr;
    KPreviewWidgetBase_DevType_Callback kpreviewwidgetbase_devtype_callback = nullptr;
    KPreviewWidgetBase_SetVisible_Callback kpreviewwidgetbase_setvisible_callback = nullptr;
    KPreviewWidgetBase_SizeHint_Callback kpreviewwidgetbase_sizehint_callback = nullptr;
    KPreviewWidgetBase_MinimumSizeHint_Callback kpreviewwidgetbase_minimumsizehint_callback = nullptr;
    KPreviewWidgetBase_HeightForWidth_Callback kpreviewwidgetbase_heightforwidth_callback = nullptr;
    KPreviewWidgetBase_HasHeightForWidth_Callback kpreviewwidgetbase_hasheightforwidth_callback = nullptr;
    KPreviewWidgetBase_PaintEngine_Callback kpreviewwidgetbase_paintengine_callback = nullptr;
    KPreviewWidgetBase_Event_Callback kpreviewwidgetbase_event_callback = nullptr;
    KPreviewWidgetBase_MousePressEvent_Callback kpreviewwidgetbase_mousepressevent_callback = nullptr;
    KPreviewWidgetBase_MouseReleaseEvent_Callback kpreviewwidgetbase_mousereleaseevent_callback = nullptr;
    KPreviewWidgetBase_MouseDoubleClickEvent_Callback kpreviewwidgetbase_mousedoubleclickevent_callback = nullptr;
    KPreviewWidgetBase_MouseMoveEvent_Callback kpreviewwidgetbase_mousemoveevent_callback = nullptr;
    KPreviewWidgetBase_WheelEvent_Callback kpreviewwidgetbase_wheelevent_callback = nullptr;
    KPreviewWidgetBase_KeyPressEvent_Callback kpreviewwidgetbase_keypressevent_callback = nullptr;
    KPreviewWidgetBase_KeyReleaseEvent_Callback kpreviewwidgetbase_keyreleaseevent_callback = nullptr;
    KPreviewWidgetBase_FocusInEvent_Callback kpreviewwidgetbase_focusinevent_callback = nullptr;
    KPreviewWidgetBase_FocusOutEvent_Callback kpreviewwidgetbase_focusoutevent_callback = nullptr;
    KPreviewWidgetBase_EnterEvent_Callback kpreviewwidgetbase_enterevent_callback = nullptr;
    KPreviewWidgetBase_LeaveEvent_Callback kpreviewwidgetbase_leaveevent_callback = nullptr;
    KPreviewWidgetBase_PaintEvent_Callback kpreviewwidgetbase_paintevent_callback = nullptr;
    KPreviewWidgetBase_MoveEvent_Callback kpreviewwidgetbase_moveevent_callback = nullptr;
    KPreviewWidgetBase_ResizeEvent_Callback kpreviewwidgetbase_resizeevent_callback = nullptr;
    KPreviewWidgetBase_CloseEvent_Callback kpreviewwidgetbase_closeevent_callback = nullptr;
    KPreviewWidgetBase_ContextMenuEvent_Callback kpreviewwidgetbase_contextmenuevent_callback = nullptr;
    KPreviewWidgetBase_TabletEvent_Callback kpreviewwidgetbase_tabletevent_callback = nullptr;
    KPreviewWidgetBase_ActionEvent_Callback kpreviewwidgetbase_actionevent_callback = nullptr;
    KPreviewWidgetBase_DragEnterEvent_Callback kpreviewwidgetbase_dragenterevent_callback = nullptr;
    KPreviewWidgetBase_DragMoveEvent_Callback kpreviewwidgetbase_dragmoveevent_callback = nullptr;
    KPreviewWidgetBase_DragLeaveEvent_Callback kpreviewwidgetbase_dragleaveevent_callback = nullptr;
    KPreviewWidgetBase_DropEvent_Callback kpreviewwidgetbase_dropevent_callback = nullptr;
    KPreviewWidgetBase_ShowEvent_Callback kpreviewwidgetbase_showevent_callback = nullptr;
    KPreviewWidgetBase_HideEvent_Callback kpreviewwidgetbase_hideevent_callback = nullptr;
    KPreviewWidgetBase_NativeEvent_Callback kpreviewwidgetbase_nativeevent_callback = nullptr;
    KPreviewWidgetBase_ChangeEvent_Callback kpreviewwidgetbase_changeevent_callback = nullptr;
    KPreviewWidgetBase_Metric_Callback kpreviewwidgetbase_metric_callback = nullptr;
    KPreviewWidgetBase_InitPainter_Callback kpreviewwidgetbase_initpainter_callback = nullptr;
    KPreviewWidgetBase_Redirected_Callback kpreviewwidgetbase_redirected_callback = nullptr;
    KPreviewWidgetBase_SharedPainter_Callback kpreviewwidgetbase_sharedpainter_callback = nullptr;
    KPreviewWidgetBase_InputMethodEvent_Callback kpreviewwidgetbase_inputmethodevent_callback = nullptr;
    KPreviewWidgetBase_InputMethodQuery_Callback kpreviewwidgetbase_inputmethodquery_callback = nullptr;
    KPreviewWidgetBase_FocusNextPrevChild_Callback kpreviewwidgetbase_focusnextprevchild_callback = nullptr;
    KPreviewWidgetBase_EventFilter_Callback kpreviewwidgetbase_eventfilter_callback = nullptr;
    KPreviewWidgetBase_TimerEvent_Callback kpreviewwidgetbase_timerevent_callback = nullptr;
    KPreviewWidgetBase_ChildEvent_Callback kpreviewwidgetbase_childevent_callback = nullptr;
    KPreviewWidgetBase_CustomEvent_Callback kpreviewwidgetbase_customevent_callback = nullptr;
    KPreviewWidgetBase_ConnectNotify_Callback kpreviewwidgetbase_connectnotify_callback = nullptr;
    KPreviewWidgetBase_DisconnectNotify_Callback kpreviewwidgetbase_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KPreviewWidgetBase {
        using KPreviewWidgetBase::actionEvent;
        using KPreviewWidgetBase::changeEvent;
        using KPreviewWidgetBase::childEvent;
        using KPreviewWidgetBase::closeEvent;
        using KPreviewWidgetBase::connectNotify;
        using KPreviewWidgetBase::contextMenuEvent;
        using KPreviewWidgetBase::customEvent;
        using KPreviewWidgetBase::disconnectNotify;
        using KPreviewWidgetBase::dragEnterEvent;
        using KPreviewWidgetBase::dragLeaveEvent;
        using KPreviewWidgetBase::dragMoveEvent;
        using KPreviewWidgetBase::dropEvent;
        using KPreviewWidgetBase::enterEvent;
        using KPreviewWidgetBase::event;
        using KPreviewWidgetBase::focusInEvent;
        using KPreviewWidgetBase::focusNextPrevChild;
        using KPreviewWidgetBase::focusOutEvent;
        using KPreviewWidgetBase::hideEvent;
        using KPreviewWidgetBase::initPainter;
        using KPreviewWidgetBase::inputMethodEvent;
        using KPreviewWidgetBase::keyPressEvent;
        using KPreviewWidgetBase::keyReleaseEvent;
        using KPreviewWidgetBase::leaveEvent;
        using KPreviewWidgetBase::metric;
        using KPreviewWidgetBase::mouseDoubleClickEvent;
        using KPreviewWidgetBase::mouseMoveEvent;
        using KPreviewWidgetBase::mousePressEvent;
        using KPreviewWidgetBase::mouseReleaseEvent;
        using KPreviewWidgetBase::moveEvent;
        using KPreviewWidgetBase::nativeEvent;
        using KPreviewWidgetBase::paintEvent;
        using KPreviewWidgetBase::redirected;
        using KPreviewWidgetBase::resizeEvent;
        using KPreviewWidgetBase::sharedPainter;
        using KPreviewWidgetBase::showEvent;
        using KPreviewWidgetBase::tabletEvent;
        using KPreviewWidgetBase::timerEvent;
        using KPreviewWidgetBase::wheelEvent;
    };

    VirtualKPreviewWidgetBase(QWidget* parent) : KPreviewWidgetBase(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kpreviewwidgetbase_metaobject_callback) {
            QMetaObject* callback_ret = kpreviewwidgetbase_metaobject_callback(this);
            return callback_ret;
        }
        return KPreviewWidgetBase::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kpreviewwidgetbase_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kpreviewwidgetbase_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KPreviewWidgetBase::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpreviewwidgetbase_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kpreviewwidgetbase_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KPreviewWidgetBase::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPreview(const QUrl& url) override {
        if (kpreviewwidgetbase_showpreview_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            kpreviewwidgetbase_showpreview_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KPreviewWidgetBase::showPreview called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void clearPreview() override {
        if (kpreviewwidgetbase_clearpreview_callback) {
            kpreviewwidgetbase_clearpreview_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KPreviewWidgetBase::clearPreview called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kpreviewwidgetbase_devtype_callback) {
            int callback_ret = kpreviewwidgetbase_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KPreviewWidgetBase::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kpreviewwidgetbase_setvisible_callback) {
            bool cbval1 = visible;
            kpreviewwidgetbase_setvisible_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kpreviewwidgetbase_sizehint_callback) {
            QSize* callback_ret = kpreviewwidgetbase_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPreviewWidgetBase::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kpreviewwidgetbase_minimumsizehint_callback) {
            QSize* callback_ret = kpreviewwidgetbase_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPreviewWidgetBase::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kpreviewwidgetbase_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kpreviewwidgetbase_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPreviewWidgetBase::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kpreviewwidgetbase_hasheightforwidth_callback) {
            bool callback_ret = kpreviewwidgetbase_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KPreviewWidgetBase::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kpreviewwidgetbase_paintengine_callback) {
            QPaintEngine* callback_ret = kpreviewwidgetbase_paintengine_callback(this);
            return callback_ret;
        }
        return KPreviewWidgetBase::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpreviewwidgetbase_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kpreviewwidgetbase_event_callback(this, cbval1);
            return callback_ret;
        }
        return KPreviewWidgetBase::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kpreviewwidgetbase_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kpreviewwidgetbase_mousepressevent_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kpreviewwidgetbase_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kpreviewwidgetbase_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kpreviewwidgetbase_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kpreviewwidgetbase_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kpreviewwidgetbase_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kpreviewwidgetbase_mousemoveevent_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kpreviewwidgetbase_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kpreviewwidgetbase_wheelevent_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kpreviewwidgetbase_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kpreviewwidgetbase_keypressevent_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kpreviewwidgetbase_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kpreviewwidgetbase_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kpreviewwidgetbase_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kpreviewwidgetbase_focusinevent_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kpreviewwidgetbase_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kpreviewwidgetbase_focusoutevent_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kpreviewwidgetbase_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kpreviewwidgetbase_enterevent_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kpreviewwidgetbase_leaveevent_callback) {
            QEvent* cbval1 = event;
            kpreviewwidgetbase_leaveevent_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kpreviewwidgetbase_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kpreviewwidgetbase_paintevent_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kpreviewwidgetbase_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kpreviewwidgetbase_moveevent_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kpreviewwidgetbase_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kpreviewwidgetbase_resizeevent_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kpreviewwidgetbase_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kpreviewwidgetbase_closeevent_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kpreviewwidgetbase_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kpreviewwidgetbase_contextmenuevent_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kpreviewwidgetbase_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kpreviewwidgetbase_tabletevent_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kpreviewwidgetbase_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kpreviewwidgetbase_actionevent_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kpreviewwidgetbase_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kpreviewwidgetbase_dragenterevent_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kpreviewwidgetbase_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kpreviewwidgetbase_dragmoveevent_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kpreviewwidgetbase_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kpreviewwidgetbase_dragleaveevent_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kpreviewwidgetbase_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kpreviewwidgetbase_dropevent_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kpreviewwidgetbase_showevent_callback) {
            QShowEvent* cbval1 = event;
            kpreviewwidgetbase_showevent_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kpreviewwidgetbase_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kpreviewwidgetbase_hideevent_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kpreviewwidgetbase_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kpreviewwidgetbase_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KPreviewWidgetBase::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kpreviewwidgetbase_changeevent_callback) {
            QEvent* cbval1 = param1;
            kpreviewwidgetbase_changeevent_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kpreviewwidgetbase_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kpreviewwidgetbase_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPreviewWidgetBase::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kpreviewwidgetbase_initpainter_callback) {
            QPainter* cbval1 = painter;
            kpreviewwidgetbase_initpainter_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kpreviewwidgetbase_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kpreviewwidgetbase_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KPreviewWidgetBase::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kpreviewwidgetbase_sharedpainter_callback) {
            QPainter* callback_ret = kpreviewwidgetbase_sharedpainter_callback(this);
            return callback_ret;
        }
        return KPreviewWidgetBase::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kpreviewwidgetbase_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kpreviewwidgetbase_inputmethodevent_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kpreviewwidgetbase_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kpreviewwidgetbase_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPreviewWidgetBase::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kpreviewwidgetbase_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kpreviewwidgetbase_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KPreviewWidgetBase::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kpreviewwidgetbase_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kpreviewwidgetbase_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPreviewWidgetBase::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpreviewwidgetbase_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kpreviewwidgetbase_timerevent_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpreviewwidgetbase_childevent_callback) {
            QChildEvent* cbval1 = event;
            kpreviewwidgetbase_childevent_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpreviewwidgetbase_customevent_callback) {
            QEvent* cbval1 = event;
            kpreviewwidgetbase_customevent_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpreviewwidgetbase_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpreviewwidgetbase_connectnotify_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpreviewwidgetbase_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpreviewwidgetbase_disconnectnotify_callback(this, cbval1);
            return;
        }
        KPreviewWidgetBase::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KPreviewWidgetBase_SuperEvent(KPreviewWidgetBase* self, QEvent* event);
    friend void KPreviewWidgetBase_SuperMousePressEvent(KPreviewWidgetBase* self, QMouseEvent* event);
    friend void KPreviewWidgetBase_SuperMouseReleaseEvent(KPreviewWidgetBase* self, QMouseEvent* event);
    friend void KPreviewWidgetBase_SuperMouseDoubleClickEvent(KPreviewWidgetBase* self, QMouseEvent* event);
    friend void KPreviewWidgetBase_SuperMouseMoveEvent(KPreviewWidgetBase* self, QMouseEvent* event);
    friend void KPreviewWidgetBase_SuperWheelEvent(KPreviewWidgetBase* self, QWheelEvent* event);
    friend void KPreviewWidgetBase_SuperKeyPressEvent(KPreviewWidgetBase* self, QKeyEvent* event);
    friend void KPreviewWidgetBase_SuperKeyReleaseEvent(KPreviewWidgetBase* self, QKeyEvent* event);
    friend void KPreviewWidgetBase_SuperFocusInEvent(KPreviewWidgetBase* self, QFocusEvent* event);
    friend void KPreviewWidgetBase_SuperFocusOutEvent(KPreviewWidgetBase* self, QFocusEvent* event);
    friend void KPreviewWidgetBase_SuperEnterEvent(KPreviewWidgetBase* self, QEnterEvent* event);
    friend void KPreviewWidgetBase_SuperLeaveEvent(KPreviewWidgetBase* self, QEvent* event);
    friend void KPreviewWidgetBase_SuperPaintEvent(KPreviewWidgetBase* self, QPaintEvent* event);
    friend void KPreviewWidgetBase_SuperMoveEvent(KPreviewWidgetBase* self, QMoveEvent* event);
    friend void KPreviewWidgetBase_SuperResizeEvent(KPreviewWidgetBase* self, QResizeEvent* event);
    friend void KPreviewWidgetBase_SuperCloseEvent(KPreviewWidgetBase* self, QCloseEvent* event);
    friend void KPreviewWidgetBase_SuperContextMenuEvent(KPreviewWidgetBase* self, QContextMenuEvent* event);
    friend void KPreviewWidgetBase_SuperTabletEvent(KPreviewWidgetBase* self, QTabletEvent* event);
    friend void KPreviewWidgetBase_SuperActionEvent(KPreviewWidgetBase* self, QActionEvent* event);
    friend void KPreviewWidgetBase_SuperDragEnterEvent(KPreviewWidgetBase* self, QDragEnterEvent* event);
    friend void KPreviewWidgetBase_SuperDragMoveEvent(KPreviewWidgetBase* self, QDragMoveEvent* event);
    friend void KPreviewWidgetBase_SuperDragLeaveEvent(KPreviewWidgetBase* self, QDragLeaveEvent* event);
    friend void KPreviewWidgetBase_SuperDropEvent(KPreviewWidgetBase* self, QDropEvent* event);
    friend void KPreviewWidgetBase_SuperShowEvent(KPreviewWidgetBase* self, QShowEvent* event);
    friend void KPreviewWidgetBase_SuperHideEvent(KPreviewWidgetBase* self, QHideEvent* event);
    friend bool KPreviewWidgetBase_SuperNativeEvent(KPreviewWidgetBase* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KPreviewWidgetBase_SuperChangeEvent(KPreviewWidgetBase* self, QEvent* param1);
    friend int KPreviewWidgetBase_SuperMetric(const KPreviewWidgetBase* self, int param1);
    friend void KPreviewWidgetBase_SuperInitPainter(const KPreviewWidgetBase* self, QPainter* painter);
    friend QPaintDevice* KPreviewWidgetBase_SuperRedirected(const KPreviewWidgetBase* self, QPoint* offset);
    friend QPainter* KPreviewWidgetBase_SuperSharedPainter(const KPreviewWidgetBase* self);
    friend void KPreviewWidgetBase_SuperInputMethodEvent(KPreviewWidgetBase* self, QInputMethodEvent* param1);
    friend bool KPreviewWidgetBase_SuperFocusNextPrevChild(KPreviewWidgetBase* self, bool next);
    friend void KPreviewWidgetBase_SuperTimerEvent(KPreviewWidgetBase* self, QTimerEvent* event);
    friend void KPreviewWidgetBase_SuperChildEvent(KPreviewWidgetBase* self, QChildEvent* event);
    friend void KPreviewWidgetBase_SuperCustomEvent(KPreviewWidgetBase* self, QEvent* event);
    friend void KPreviewWidgetBase_SuperConnectNotify(KPreviewWidgetBase* self, const QMetaMethod* signal);
    friend void KPreviewWidgetBase_SuperDisconnectNotify(KPreviewWidgetBase* self, const QMetaMethod* signal);
};

#endif
