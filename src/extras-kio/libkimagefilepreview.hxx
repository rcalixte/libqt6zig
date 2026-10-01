#pragma once
#ifndef EXTRAS_KIO_LIBKIMAGEFILEPREVIEW_HXX
#define EXTRAS_KIO_LIBKIMAGEFILEPREVIEW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KImageFilePreview
class VirtualKImageFilePreview final : public KImageFilePreview {
  public:
    // Virtual class public types (including callbacks and access types)
    using KImageFilePreview_MetaObject_Callback = QMetaObject* (*)(const KImageFilePreview*);
    using KImageFilePreview_Metacast_Callback = void* (*)(KImageFilePreview*, const char*);
    using KImageFilePreview_Metacall_Callback = int (*)(KImageFilePreview*, int, int, void**);
    using KImageFilePreview_SizeHint_Callback = QSize* (*)(const KImageFilePreview*);
    using KImageFilePreview_ShowPreview_Callback = void (*)(KImageFilePreview*, QUrl*);
    using KImageFilePreview_ClearPreview_Callback = void (*)(KImageFilePreview*);
    using KImageFilePreview_GotPreview_Callback = void (*)(KImageFilePreview*, KFileItem*, QPixmap*);
    using KImageFilePreview_ResizeEvent_Callback = void (*)(KImageFilePreview*, QResizeEvent*);
    using KImageFilePreview_CreateJob_Callback = KIO__PreviewJob* (*)(KImageFilePreview*, QUrl*, int, int);
    using KImageFilePreview_DevType_Callback = int (*)(const KImageFilePreview*);
    using KImageFilePreview_SetVisible_Callback = void (*)(KImageFilePreview*, bool);
    using KImageFilePreview_MinimumSizeHint_Callback = QSize* (*)(const KImageFilePreview*);
    using KImageFilePreview_HeightForWidth_Callback = int (*)(const KImageFilePreview*, int);
    using KImageFilePreview_HasHeightForWidth_Callback = bool (*)(const KImageFilePreview*);
    using KImageFilePreview_PaintEngine_Callback = QPaintEngine* (*)(const KImageFilePreview*);
    using KImageFilePreview_Event_Callback = bool (*)(KImageFilePreview*, QEvent*);
    using KImageFilePreview_MousePressEvent_Callback = void (*)(KImageFilePreview*, QMouseEvent*);
    using KImageFilePreview_MouseReleaseEvent_Callback = void (*)(KImageFilePreview*, QMouseEvent*);
    using KImageFilePreview_MouseDoubleClickEvent_Callback = void (*)(KImageFilePreview*, QMouseEvent*);
    using KImageFilePreview_MouseMoveEvent_Callback = void (*)(KImageFilePreview*, QMouseEvent*);
    using KImageFilePreview_WheelEvent_Callback = void (*)(KImageFilePreview*, QWheelEvent*);
    using KImageFilePreview_KeyPressEvent_Callback = void (*)(KImageFilePreview*, QKeyEvent*);
    using KImageFilePreview_KeyReleaseEvent_Callback = void (*)(KImageFilePreview*, QKeyEvent*);
    using KImageFilePreview_FocusInEvent_Callback = void (*)(KImageFilePreview*, QFocusEvent*);
    using KImageFilePreview_FocusOutEvent_Callback = void (*)(KImageFilePreview*, QFocusEvent*);
    using KImageFilePreview_EnterEvent_Callback = void (*)(KImageFilePreview*, QEnterEvent*);
    using KImageFilePreview_LeaveEvent_Callback = void (*)(KImageFilePreview*, QEvent*);
    using KImageFilePreview_PaintEvent_Callback = void (*)(KImageFilePreview*, QPaintEvent*);
    using KImageFilePreview_MoveEvent_Callback = void (*)(KImageFilePreview*, QMoveEvent*);
    using KImageFilePreview_CloseEvent_Callback = void (*)(KImageFilePreview*, QCloseEvent*);
    using KImageFilePreview_ContextMenuEvent_Callback = void (*)(KImageFilePreview*, QContextMenuEvent*);
    using KImageFilePreview_TabletEvent_Callback = void (*)(KImageFilePreview*, QTabletEvent*);
    using KImageFilePreview_ActionEvent_Callback = void (*)(KImageFilePreview*, QActionEvent*);
    using KImageFilePreview_DragEnterEvent_Callback = void (*)(KImageFilePreview*, QDragEnterEvent*);
    using KImageFilePreview_DragMoveEvent_Callback = void (*)(KImageFilePreview*, QDragMoveEvent*);
    using KImageFilePreview_DragLeaveEvent_Callback = void (*)(KImageFilePreview*, QDragLeaveEvent*);
    using KImageFilePreview_DropEvent_Callback = void (*)(KImageFilePreview*, QDropEvent*);
    using KImageFilePreview_ShowEvent_Callback = void (*)(KImageFilePreview*, QShowEvent*);
    using KImageFilePreview_HideEvent_Callback = void (*)(KImageFilePreview*, QHideEvent*);
    using KImageFilePreview_NativeEvent_Callback = bool (*)(KImageFilePreview*, libqt_string, void*, intptr_t*);
    using KImageFilePreview_ChangeEvent_Callback = void (*)(KImageFilePreview*, QEvent*);
    using KImageFilePreview_Metric_Callback = int (*)(const KImageFilePreview*, int);
    using KImageFilePreview_InitPainter_Callback = void (*)(const KImageFilePreview*, QPainter*);
    using KImageFilePreview_Redirected_Callback = QPaintDevice* (*)(const KImageFilePreview*, QPoint*);
    using KImageFilePreview_SharedPainter_Callback = QPainter* (*)(const KImageFilePreview*);
    using KImageFilePreview_InputMethodEvent_Callback = void (*)(KImageFilePreview*, QInputMethodEvent*);
    using KImageFilePreview_InputMethodQuery_Callback = QVariant* (*)(const KImageFilePreview*, int);
    using KImageFilePreview_FocusNextPrevChild_Callback = bool (*)(KImageFilePreview*, bool);
    using KImageFilePreview_EventFilter_Callback = bool (*)(KImageFilePreview*, QObject*, QEvent*);
    using KImageFilePreview_TimerEvent_Callback = void (*)(KImageFilePreview*, QTimerEvent*);
    using KImageFilePreview_ChildEvent_Callback = void (*)(KImageFilePreview*, QChildEvent*);
    using KImageFilePreview_CustomEvent_Callback = void (*)(KImageFilePreview*, QEvent*);
    using KImageFilePreview_ConnectNotify_Callback = void (*)(KImageFilePreview*, QMetaMethod*);
    using KImageFilePreview_DisconnectNotify_Callback = void (*)(KImageFilePreview*, QMetaMethod*);
    using KImageFilePreview::create;
    using KImageFilePreview::destroy;
    using KImageFilePreview::focusNextChild;
    using KImageFilePreview::focusPreviousChild;
    using KImageFilePreview::getDecodedMetricF;
    using KImageFilePreview::isSignalConnected;
    using KImageFilePreview::receivers;
    using KImageFilePreview::sender;
    using KImageFilePreview::senderSignalIndex;
    using KImageFilePreview::setSupportedMimeTypes;
    using KImageFilePreview::showPreview;
    using KImageFilePreview::updateMicroFocus;

    // Instance callback storage
    KImageFilePreview_MetaObject_Callback kimagefilepreview_metaobject_callback = nullptr;
    KImageFilePreview_Metacast_Callback kimagefilepreview_metacast_callback = nullptr;
    KImageFilePreview_Metacall_Callback kimagefilepreview_metacall_callback = nullptr;
    KImageFilePreview_SizeHint_Callback kimagefilepreview_sizehint_callback = nullptr;
    KImageFilePreview_ShowPreview_Callback kimagefilepreview_showpreview_callback = nullptr;
    KImageFilePreview_ClearPreview_Callback kimagefilepreview_clearpreview_callback = nullptr;
    KImageFilePreview_GotPreview_Callback kimagefilepreview_gotpreview_callback = nullptr;
    KImageFilePreview_ResizeEvent_Callback kimagefilepreview_resizeevent_callback = nullptr;
    KImageFilePreview_CreateJob_Callback kimagefilepreview_createjob_callback = nullptr;
    KImageFilePreview_DevType_Callback kimagefilepreview_devtype_callback = nullptr;
    KImageFilePreview_SetVisible_Callback kimagefilepreview_setvisible_callback = nullptr;
    KImageFilePreview_MinimumSizeHint_Callback kimagefilepreview_minimumsizehint_callback = nullptr;
    KImageFilePreview_HeightForWidth_Callback kimagefilepreview_heightforwidth_callback = nullptr;
    KImageFilePreview_HasHeightForWidth_Callback kimagefilepreview_hasheightforwidth_callback = nullptr;
    KImageFilePreview_PaintEngine_Callback kimagefilepreview_paintengine_callback = nullptr;
    KImageFilePreview_Event_Callback kimagefilepreview_event_callback = nullptr;
    KImageFilePreview_MousePressEvent_Callback kimagefilepreview_mousepressevent_callback = nullptr;
    KImageFilePreview_MouseReleaseEvent_Callback kimagefilepreview_mousereleaseevent_callback = nullptr;
    KImageFilePreview_MouseDoubleClickEvent_Callback kimagefilepreview_mousedoubleclickevent_callback = nullptr;
    KImageFilePreview_MouseMoveEvent_Callback kimagefilepreview_mousemoveevent_callback = nullptr;
    KImageFilePreview_WheelEvent_Callback kimagefilepreview_wheelevent_callback = nullptr;
    KImageFilePreview_KeyPressEvent_Callback kimagefilepreview_keypressevent_callback = nullptr;
    KImageFilePreview_KeyReleaseEvent_Callback kimagefilepreview_keyreleaseevent_callback = nullptr;
    KImageFilePreview_FocusInEvent_Callback kimagefilepreview_focusinevent_callback = nullptr;
    KImageFilePreview_FocusOutEvent_Callback kimagefilepreview_focusoutevent_callback = nullptr;
    KImageFilePreview_EnterEvent_Callback kimagefilepreview_enterevent_callback = nullptr;
    KImageFilePreview_LeaveEvent_Callback kimagefilepreview_leaveevent_callback = nullptr;
    KImageFilePreview_PaintEvent_Callback kimagefilepreview_paintevent_callback = nullptr;
    KImageFilePreview_MoveEvent_Callback kimagefilepreview_moveevent_callback = nullptr;
    KImageFilePreview_CloseEvent_Callback kimagefilepreview_closeevent_callback = nullptr;
    KImageFilePreview_ContextMenuEvent_Callback kimagefilepreview_contextmenuevent_callback = nullptr;
    KImageFilePreview_TabletEvent_Callback kimagefilepreview_tabletevent_callback = nullptr;
    KImageFilePreview_ActionEvent_Callback kimagefilepreview_actionevent_callback = nullptr;
    KImageFilePreview_DragEnterEvent_Callback kimagefilepreview_dragenterevent_callback = nullptr;
    KImageFilePreview_DragMoveEvent_Callback kimagefilepreview_dragmoveevent_callback = nullptr;
    KImageFilePreview_DragLeaveEvent_Callback kimagefilepreview_dragleaveevent_callback = nullptr;
    KImageFilePreview_DropEvent_Callback kimagefilepreview_dropevent_callback = nullptr;
    KImageFilePreview_ShowEvent_Callback kimagefilepreview_showevent_callback = nullptr;
    KImageFilePreview_HideEvent_Callback kimagefilepreview_hideevent_callback = nullptr;
    KImageFilePreview_NativeEvent_Callback kimagefilepreview_nativeevent_callback = nullptr;
    KImageFilePreview_ChangeEvent_Callback kimagefilepreview_changeevent_callback = nullptr;
    KImageFilePreview_Metric_Callback kimagefilepreview_metric_callback = nullptr;
    KImageFilePreview_InitPainter_Callback kimagefilepreview_initpainter_callback = nullptr;
    KImageFilePreview_Redirected_Callback kimagefilepreview_redirected_callback = nullptr;
    KImageFilePreview_SharedPainter_Callback kimagefilepreview_sharedpainter_callback = nullptr;
    KImageFilePreview_InputMethodEvent_Callback kimagefilepreview_inputmethodevent_callback = nullptr;
    KImageFilePreview_InputMethodQuery_Callback kimagefilepreview_inputmethodquery_callback = nullptr;
    KImageFilePreview_FocusNextPrevChild_Callback kimagefilepreview_focusnextprevchild_callback = nullptr;
    KImageFilePreview_EventFilter_Callback kimagefilepreview_eventfilter_callback = nullptr;
    KImageFilePreview_TimerEvent_Callback kimagefilepreview_timerevent_callback = nullptr;
    KImageFilePreview_ChildEvent_Callback kimagefilepreview_childevent_callback = nullptr;
    KImageFilePreview_CustomEvent_Callback kimagefilepreview_customevent_callback = nullptr;
    KImageFilePreview_ConnectNotify_Callback kimagefilepreview_connectnotify_callback = nullptr;
    KImageFilePreview_DisconnectNotify_Callback kimagefilepreview_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KImageFilePreview {
        using KImageFilePreview::actionEvent;
        using KImageFilePreview::changeEvent;
        using KImageFilePreview::childEvent;
        using KImageFilePreview::closeEvent;
        using KImageFilePreview::connectNotify;
        using KImageFilePreview::contextMenuEvent;
        using KImageFilePreview::createJob;
        using KImageFilePreview::customEvent;
        using KImageFilePreview::disconnectNotify;
        using KImageFilePreview::dragEnterEvent;
        using KImageFilePreview::dragLeaveEvent;
        using KImageFilePreview::dragMoveEvent;
        using KImageFilePreview::dropEvent;
        using KImageFilePreview::enterEvent;
        using KImageFilePreview::event;
        using KImageFilePreview::focusInEvent;
        using KImageFilePreview::focusNextPrevChild;
        using KImageFilePreview::focusOutEvent;
        using KImageFilePreview::gotPreview;
        using KImageFilePreview::hideEvent;
        using KImageFilePreview::initPainter;
        using KImageFilePreview::inputMethodEvent;
        using KImageFilePreview::keyPressEvent;
        using KImageFilePreview::keyReleaseEvent;
        using KImageFilePreview::leaveEvent;
        using KImageFilePreview::metric;
        using KImageFilePreview::mouseDoubleClickEvent;
        using KImageFilePreview::mouseMoveEvent;
        using KImageFilePreview::mousePressEvent;
        using KImageFilePreview::mouseReleaseEvent;
        using KImageFilePreview::moveEvent;
        using KImageFilePreview::nativeEvent;
        using KImageFilePreview::paintEvent;
        using KImageFilePreview::redirected;
        using KImageFilePreview::resizeEvent;
        using KImageFilePreview::sharedPainter;
        using KImageFilePreview::showEvent;
        using KImageFilePreview::tabletEvent;
        using KImageFilePreview::timerEvent;
        using KImageFilePreview::wheelEvent;
    };

    VirtualKImageFilePreview(QWidget* parent) : KImageFilePreview(parent) {};
    VirtualKImageFilePreview() : KImageFilePreview() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kimagefilepreview_metaobject_callback) {
            QMetaObject* callback_ret = kimagefilepreview_metaobject_callback(this);
            return callback_ret;
        }
        return KImageFilePreview::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kimagefilepreview_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kimagefilepreview_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KImageFilePreview::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kimagefilepreview_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kimagefilepreview_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KImageFilePreview::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kimagefilepreview_sizehint_callback) {
            QSize* callback_ret = kimagefilepreview_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KImageFilePreview::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPreview(const QUrl& url) override {
        if (kimagefilepreview_showpreview_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            kimagefilepreview_showpreview_callback(this, cbval1);
            return;
        }
        KImageFilePreview::showPreview(url);
    }

    // Virtual method for C ABI access and custom callback
    virtual void clearPreview() override {
        if (kimagefilepreview_clearpreview_callback) {
            kimagefilepreview_clearpreview_callback(this);
            return;
        }
        KImageFilePreview::clearPreview();
    }

    // Virtual method for C ABI access and custom callback
    virtual void gotPreview(const KFileItem& param1, const QPixmap& param2) override {
        if (kimagefilepreview_gotpreview_callback) {
            const KFileItem& param1_ret = param1;
            // Cast returned reference into pointer
            KFileItem* cbval1 = const_cast<KFileItem*>(&param1_ret);
            const QPixmap& param2_ret = param2;
            // Cast returned reference into pointer
            QPixmap* cbval2 = const_cast<QPixmap*>(&param2_ret);
            kimagefilepreview_gotpreview_callback(this, cbval1, cbval2);
            return;
        }
        KImageFilePreview::gotPreview(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kimagefilepreview_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kimagefilepreview_resizeevent_callback(this, cbval1);
            return;
        }
        KImageFilePreview::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::PreviewJob* createJob(const QUrl& url, int width, int height) override {
        if (kimagefilepreview_createjob_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            int cbval2 = width;
            int cbval3 = height;
            KIO__PreviewJob* callback_ret = kimagefilepreview_createjob_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KImageFilePreview::createJob(url, width, height);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kimagefilepreview_devtype_callback) {
            int callback_ret = kimagefilepreview_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KImageFilePreview::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kimagefilepreview_setvisible_callback) {
            bool cbval1 = visible;
            kimagefilepreview_setvisible_callback(this, cbval1);
            return;
        }
        KImageFilePreview::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kimagefilepreview_minimumsizehint_callback) {
            QSize* callback_ret = kimagefilepreview_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KImageFilePreview::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kimagefilepreview_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kimagefilepreview_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KImageFilePreview::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kimagefilepreview_hasheightforwidth_callback) {
            bool callback_ret = kimagefilepreview_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KImageFilePreview::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kimagefilepreview_paintengine_callback) {
            QPaintEngine* callback_ret = kimagefilepreview_paintengine_callback(this);
            return callback_ret;
        }
        return KImageFilePreview::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kimagefilepreview_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kimagefilepreview_event_callback(this, cbval1);
            return callback_ret;
        }
        return KImageFilePreview::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kimagefilepreview_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kimagefilepreview_mousepressevent_callback(this, cbval1);
            return;
        }
        KImageFilePreview::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kimagefilepreview_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kimagefilepreview_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KImageFilePreview::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kimagefilepreview_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kimagefilepreview_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KImageFilePreview::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kimagefilepreview_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kimagefilepreview_mousemoveevent_callback(this, cbval1);
            return;
        }
        KImageFilePreview::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kimagefilepreview_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kimagefilepreview_wheelevent_callback(this, cbval1);
            return;
        }
        KImageFilePreview::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kimagefilepreview_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kimagefilepreview_keypressevent_callback(this, cbval1);
            return;
        }
        KImageFilePreview::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kimagefilepreview_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kimagefilepreview_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KImageFilePreview::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kimagefilepreview_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kimagefilepreview_focusinevent_callback(this, cbval1);
            return;
        }
        KImageFilePreview::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kimagefilepreview_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kimagefilepreview_focusoutevent_callback(this, cbval1);
            return;
        }
        KImageFilePreview::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kimagefilepreview_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kimagefilepreview_enterevent_callback(this, cbval1);
            return;
        }
        KImageFilePreview::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kimagefilepreview_leaveevent_callback) {
            QEvent* cbval1 = event;
            kimagefilepreview_leaveevent_callback(this, cbval1);
            return;
        }
        KImageFilePreview::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kimagefilepreview_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kimagefilepreview_paintevent_callback(this, cbval1);
            return;
        }
        KImageFilePreview::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kimagefilepreview_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kimagefilepreview_moveevent_callback(this, cbval1);
            return;
        }
        KImageFilePreview::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kimagefilepreview_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kimagefilepreview_closeevent_callback(this, cbval1);
            return;
        }
        KImageFilePreview::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kimagefilepreview_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kimagefilepreview_contextmenuevent_callback(this, cbval1);
            return;
        }
        KImageFilePreview::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kimagefilepreview_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kimagefilepreview_tabletevent_callback(this, cbval1);
            return;
        }
        KImageFilePreview::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kimagefilepreview_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kimagefilepreview_actionevent_callback(this, cbval1);
            return;
        }
        KImageFilePreview::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kimagefilepreview_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kimagefilepreview_dragenterevent_callback(this, cbval1);
            return;
        }
        KImageFilePreview::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kimagefilepreview_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kimagefilepreview_dragmoveevent_callback(this, cbval1);
            return;
        }
        KImageFilePreview::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kimagefilepreview_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kimagefilepreview_dragleaveevent_callback(this, cbval1);
            return;
        }
        KImageFilePreview::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kimagefilepreview_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kimagefilepreview_dropevent_callback(this, cbval1);
            return;
        }
        KImageFilePreview::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kimagefilepreview_showevent_callback) {
            QShowEvent* cbval1 = event;
            kimagefilepreview_showevent_callback(this, cbval1);
            return;
        }
        KImageFilePreview::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kimagefilepreview_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kimagefilepreview_hideevent_callback(this, cbval1);
            return;
        }
        KImageFilePreview::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kimagefilepreview_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kimagefilepreview_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KImageFilePreview::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kimagefilepreview_changeevent_callback) {
            QEvent* cbval1 = param1;
            kimagefilepreview_changeevent_callback(this, cbval1);
            return;
        }
        KImageFilePreview::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kimagefilepreview_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kimagefilepreview_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KImageFilePreview::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kimagefilepreview_initpainter_callback) {
            QPainter* cbval1 = painter;
            kimagefilepreview_initpainter_callback(this, cbval1);
            return;
        }
        KImageFilePreview::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kimagefilepreview_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kimagefilepreview_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KImageFilePreview::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kimagefilepreview_sharedpainter_callback) {
            QPainter* callback_ret = kimagefilepreview_sharedpainter_callback(this);
            return callback_ret;
        }
        return KImageFilePreview::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kimagefilepreview_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kimagefilepreview_inputmethodevent_callback(this, cbval1);
            return;
        }
        KImageFilePreview::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kimagefilepreview_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kimagefilepreview_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KImageFilePreview::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kimagefilepreview_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kimagefilepreview_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KImageFilePreview::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kimagefilepreview_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kimagefilepreview_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KImageFilePreview::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kimagefilepreview_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kimagefilepreview_timerevent_callback(this, cbval1);
            return;
        }
        KImageFilePreview::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kimagefilepreview_childevent_callback) {
            QChildEvent* cbval1 = event;
            kimagefilepreview_childevent_callback(this, cbval1);
            return;
        }
        KImageFilePreview::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kimagefilepreview_customevent_callback) {
            QEvent* cbval1 = event;
            kimagefilepreview_customevent_callback(this, cbval1);
            return;
        }
        KImageFilePreview::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kimagefilepreview_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kimagefilepreview_connectnotify_callback(this, cbval1);
            return;
        }
        KImageFilePreview::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kimagefilepreview_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kimagefilepreview_disconnectnotify_callback(this, cbval1);
            return;
        }
        KImageFilePreview::disconnectNotify(signal);
    }

    // Friend functions
    friend void KImageFilePreview_SuperGotPreview(KImageFilePreview* self, const KFileItem* param1, const QPixmap* param2);
    friend void KImageFilePreview_SuperResizeEvent(KImageFilePreview* self, QResizeEvent* event);
    friend KIO__PreviewJob* KImageFilePreview_SuperCreateJob(KImageFilePreview* self, const QUrl* url, int width, int height);
    friend bool KImageFilePreview_SuperEvent(KImageFilePreview* self, QEvent* event);
    friend void KImageFilePreview_SuperMousePressEvent(KImageFilePreview* self, QMouseEvent* event);
    friend void KImageFilePreview_SuperMouseReleaseEvent(KImageFilePreview* self, QMouseEvent* event);
    friend void KImageFilePreview_SuperMouseDoubleClickEvent(KImageFilePreview* self, QMouseEvent* event);
    friend void KImageFilePreview_SuperMouseMoveEvent(KImageFilePreview* self, QMouseEvent* event);
    friend void KImageFilePreview_SuperWheelEvent(KImageFilePreview* self, QWheelEvent* event);
    friend void KImageFilePreview_SuperKeyPressEvent(KImageFilePreview* self, QKeyEvent* event);
    friend void KImageFilePreview_SuperKeyReleaseEvent(KImageFilePreview* self, QKeyEvent* event);
    friend void KImageFilePreview_SuperFocusInEvent(KImageFilePreview* self, QFocusEvent* event);
    friend void KImageFilePreview_SuperFocusOutEvent(KImageFilePreview* self, QFocusEvent* event);
    friend void KImageFilePreview_SuperEnterEvent(KImageFilePreview* self, QEnterEvent* event);
    friend void KImageFilePreview_SuperLeaveEvent(KImageFilePreview* self, QEvent* event);
    friend void KImageFilePreview_SuperPaintEvent(KImageFilePreview* self, QPaintEvent* event);
    friend void KImageFilePreview_SuperMoveEvent(KImageFilePreview* self, QMoveEvent* event);
    friend void KImageFilePreview_SuperCloseEvent(KImageFilePreview* self, QCloseEvent* event);
    friend void KImageFilePreview_SuperContextMenuEvent(KImageFilePreview* self, QContextMenuEvent* event);
    friend void KImageFilePreview_SuperTabletEvent(KImageFilePreview* self, QTabletEvent* event);
    friend void KImageFilePreview_SuperActionEvent(KImageFilePreview* self, QActionEvent* event);
    friend void KImageFilePreview_SuperDragEnterEvent(KImageFilePreview* self, QDragEnterEvent* event);
    friend void KImageFilePreview_SuperDragMoveEvent(KImageFilePreview* self, QDragMoveEvent* event);
    friend void KImageFilePreview_SuperDragLeaveEvent(KImageFilePreview* self, QDragLeaveEvent* event);
    friend void KImageFilePreview_SuperDropEvent(KImageFilePreview* self, QDropEvent* event);
    friend void KImageFilePreview_SuperShowEvent(KImageFilePreview* self, QShowEvent* event);
    friend void KImageFilePreview_SuperHideEvent(KImageFilePreview* self, QHideEvent* event);
    friend bool KImageFilePreview_SuperNativeEvent(KImageFilePreview* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KImageFilePreview_SuperChangeEvent(KImageFilePreview* self, QEvent* param1);
    friend int KImageFilePreview_SuperMetric(const KImageFilePreview* self, int param1);
    friend void KImageFilePreview_SuperInitPainter(const KImageFilePreview* self, QPainter* painter);
    friend QPaintDevice* KImageFilePreview_SuperRedirected(const KImageFilePreview* self, QPoint* offset);
    friend QPainter* KImageFilePreview_SuperSharedPainter(const KImageFilePreview* self);
    friend void KImageFilePreview_SuperInputMethodEvent(KImageFilePreview* self, QInputMethodEvent* param1);
    friend bool KImageFilePreview_SuperFocusNextPrevChild(KImageFilePreview* self, bool next);
    friend void KImageFilePreview_SuperTimerEvent(KImageFilePreview* self, QTimerEvent* event);
    friend void KImageFilePreview_SuperChildEvent(KImageFilePreview* self, QChildEvent* event);
    friend void KImageFilePreview_SuperCustomEvent(KImageFilePreview* self, QEvent* event);
    friend void KImageFilePreview_SuperConnectNotify(KImageFilePreview* self, const QMetaMethod* signal);
    friend void KImageFilePreview_SuperDisconnectNotify(KImageFilePreview* self, const QMetaMethod* signal);
};

#endif
