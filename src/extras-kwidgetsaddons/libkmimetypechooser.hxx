#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKMIMETYPECHOOSER_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKMIMETYPECHOOSER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KMimeTypeChooser
class VirtualKMimeTypeChooser final : public KMimeTypeChooser {
  public:
    // Virtual class public types (including callbacks and access types)
    using KMimeTypeChooser_MetaObject_Callback = QMetaObject* (*)(const KMimeTypeChooser*);
    using KMimeTypeChooser_Metacast_Callback = void* (*)(KMimeTypeChooser*, const char*);
    using KMimeTypeChooser_Metacall_Callback = int (*)(KMimeTypeChooser*, int, int, void**);
    using KMimeTypeChooser_DevType_Callback = int (*)(const KMimeTypeChooser*);
    using KMimeTypeChooser_SetVisible_Callback = void (*)(KMimeTypeChooser*, bool);
    using KMimeTypeChooser_SizeHint_Callback = QSize* (*)(const KMimeTypeChooser*);
    using KMimeTypeChooser_MinimumSizeHint_Callback = QSize* (*)(const KMimeTypeChooser*);
    using KMimeTypeChooser_HeightForWidth_Callback = int (*)(const KMimeTypeChooser*, int);
    using KMimeTypeChooser_HasHeightForWidth_Callback = bool (*)(const KMimeTypeChooser*);
    using KMimeTypeChooser_PaintEngine_Callback = QPaintEngine* (*)(const KMimeTypeChooser*);
    using KMimeTypeChooser_Event_Callback = bool (*)(KMimeTypeChooser*, QEvent*);
    using KMimeTypeChooser_MousePressEvent_Callback = void (*)(KMimeTypeChooser*, QMouseEvent*);
    using KMimeTypeChooser_MouseReleaseEvent_Callback = void (*)(KMimeTypeChooser*, QMouseEvent*);
    using KMimeTypeChooser_MouseDoubleClickEvent_Callback = void (*)(KMimeTypeChooser*, QMouseEvent*);
    using KMimeTypeChooser_MouseMoveEvent_Callback = void (*)(KMimeTypeChooser*, QMouseEvent*);
    using KMimeTypeChooser_WheelEvent_Callback = void (*)(KMimeTypeChooser*, QWheelEvent*);
    using KMimeTypeChooser_KeyPressEvent_Callback = void (*)(KMimeTypeChooser*, QKeyEvent*);
    using KMimeTypeChooser_KeyReleaseEvent_Callback = void (*)(KMimeTypeChooser*, QKeyEvent*);
    using KMimeTypeChooser_FocusInEvent_Callback = void (*)(KMimeTypeChooser*, QFocusEvent*);
    using KMimeTypeChooser_FocusOutEvent_Callback = void (*)(KMimeTypeChooser*, QFocusEvent*);
    using KMimeTypeChooser_EnterEvent_Callback = void (*)(KMimeTypeChooser*, QEnterEvent*);
    using KMimeTypeChooser_LeaveEvent_Callback = void (*)(KMimeTypeChooser*, QEvent*);
    using KMimeTypeChooser_PaintEvent_Callback = void (*)(KMimeTypeChooser*, QPaintEvent*);
    using KMimeTypeChooser_MoveEvent_Callback = void (*)(KMimeTypeChooser*, QMoveEvent*);
    using KMimeTypeChooser_ResizeEvent_Callback = void (*)(KMimeTypeChooser*, QResizeEvent*);
    using KMimeTypeChooser_CloseEvent_Callback = void (*)(KMimeTypeChooser*, QCloseEvent*);
    using KMimeTypeChooser_ContextMenuEvent_Callback = void (*)(KMimeTypeChooser*, QContextMenuEvent*);
    using KMimeTypeChooser_TabletEvent_Callback = void (*)(KMimeTypeChooser*, QTabletEvent*);
    using KMimeTypeChooser_ActionEvent_Callback = void (*)(KMimeTypeChooser*, QActionEvent*);
    using KMimeTypeChooser_DragEnterEvent_Callback = void (*)(KMimeTypeChooser*, QDragEnterEvent*);
    using KMimeTypeChooser_DragMoveEvent_Callback = void (*)(KMimeTypeChooser*, QDragMoveEvent*);
    using KMimeTypeChooser_DragLeaveEvent_Callback = void (*)(KMimeTypeChooser*, QDragLeaveEvent*);
    using KMimeTypeChooser_DropEvent_Callback = void (*)(KMimeTypeChooser*, QDropEvent*);
    using KMimeTypeChooser_ShowEvent_Callback = void (*)(KMimeTypeChooser*, QShowEvent*);
    using KMimeTypeChooser_HideEvent_Callback = void (*)(KMimeTypeChooser*, QHideEvent*);
    using KMimeTypeChooser_NativeEvent_Callback = bool (*)(KMimeTypeChooser*, libqt_string, void*, intptr_t*);
    using KMimeTypeChooser_ChangeEvent_Callback = void (*)(KMimeTypeChooser*, QEvent*);
    using KMimeTypeChooser_Metric_Callback = int (*)(const KMimeTypeChooser*, int);
    using KMimeTypeChooser_InitPainter_Callback = void (*)(const KMimeTypeChooser*, QPainter*);
    using KMimeTypeChooser_Redirected_Callback = QPaintDevice* (*)(const KMimeTypeChooser*, QPoint*);
    using KMimeTypeChooser_SharedPainter_Callback = QPainter* (*)(const KMimeTypeChooser*);
    using KMimeTypeChooser_InputMethodEvent_Callback = void (*)(KMimeTypeChooser*, QInputMethodEvent*);
    using KMimeTypeChooser_InputMethodQuery_Callback = QVariant* (*)(const KMimeTypeChooser*, int);
    using KMimeTypeChooser_FocusNextPrevChild_Callback = bool (*)(KMimeTypeChooser*, bool);
    using KMimeTypeChooser_EventFilter_Callback = bool (*)(KMimeTypeChooser*, QObject*, QEvent*);
    using KMimeTypeChooser_TimerEvent_Callback = void (*)(KMimeTypeChooser*, QTimerEvent*);
    using KMimeTypeChooser_ChildEvent_Callback = void (*)(KMimeTypeChooser*, QChildEvent*);
    using KMimeTypeChooser_CustomEvent_Callback = void (*)(KMimeTypeChooser*, QEvent*);
    using KMimeTypeChooser_ConnectNotify_Callback = void (*)(KMimeTypeChooser*, QMetaMethod*);
    using KMimeTypeChooser_DisconnectNotify_Callback = void (*)(KMimeTypeChooser*, QMetaMethod*);
    using KMimeTypeChooser::create;
    using KMimeTypeChooser::destroy;
    using KMimeTypeChooser::focusNextChild;
    using KMimeTypeChooser::focusPreviousChild;
    using KMimeTypeChooser::getDecodedMetricF;
    using KMimeTypeChooser::isSignalConnected;
    using KMimeTypeChooser::receivers;
    using KMimeTypeChooser::sender;
    using KMimeTypeChooser::senderSignalIndex;
    using KMimeTypeChooser::updateMicroFocus;

    // Instance callback storage
    KMimeTypeChooser_MetaObject_Callback kmimetypechooser_metaobject_callback = nullptr;
    KMimeTypeChooser_Metacast_Callback kmimetypechooser_metacast_callback = nullptr;
    KMimeTypeChooser_Metacall_Callback kmimetypechooser_metacall_callback = nullptr;
    KMimeTypeChooser_DevType_Callback kmimetypechooser_devtype_callback = nullptr;
    KMimeTypeChooser_SetVisible_Callback kmimetypechooser_setvisible_callback = nullptr;
    KMimeTypeChooser_SizeHint_Callback kmimetypechooser_sizehint_callback = nullptr;
    KMimeTypeChooser_MinimumSizeHint_Callback kmimetypechooser_minimumsizehint_callback = nullptr;
    KMimeTypeChooser_HeightForWidth_Callback kmimetypechooser_heightforwidth_callback = nullptr;
    KMimeTypeChooser_HasHeightForWidth_Callback kmimetypechooser_hasheightforwidth_callback = nullptr;
    KMimeTypeChooser_PaintEngine_Callback kmimetypechooser_paintengine_callback = nullptr;
    KMimeTypeChooser_Event_Callback kmimetypechooser_event_callback = nullptr;
    KMimeTypeChooser_MousePressEvent_Callback kmimetypechooser_mousepressevent_callback = nullptr;
    KMimeTypeChooser_MouseReleaseEvent_Callback kmimetypechooser_mousereleaseevent_callback = nullptr;
    KMimeTypeChooser_MouseDoubleClickEvent_Callback kmimetypechooser_mousedoubleclickevent_callback = nullptr;
    KMimeTypeChooser_MouseMoveEvent_Callback kmimetypechooser_mousemoveevent_callback = nullptr;
    KMimeTypeChooser_WheelEvent_Callback kmimetypechooser_wheelevent_callback = nullptr;
    KMimeTypeChooser_KeyPressEvent_Callback kmimetypechooser_keypressevent_callback = nullptr;
    KMimeTypeChooser_KeyReleaseEvent_Callback kmimetypechooser_keyreleaseevent_callback = nullptr;
    KMimeTypeChooser_FocusInEvent_Callback kmimetypechooser_focusinevent_callback = nullptr;
    KMimeTypeChooser_FocusOutEvent_Callback kmimetypechooser_focusoutevent_callback = nullptr;
    KMimeTypeChooser_EnterEvent_Callback kmimetypechooser_enterevent_callback = nullptr;
    KMimeTypeChooser_LeaveEvent_Callback kmimetypechooser_leaveevent_callback = nullptr;
    KMimeTypeChooser_PaintEvent_Callback kmimetypechooser_paintevent_callback = nullptr;
    KMimeTypeChooser_MoveEvent_Callback kmimetypechooser_moveevent_callback = nullptr;
    KMimeTypeChooser_ResizeEvent_Callback kmimetypechooser_resizeevent_callback = nullptr;
    KMimeTypeChooser_CloseEvent_Callback kmimetypechooser_closeevent_callback = nullptr;
    KMimeTypeChooser_ContextMenuEvent_Callback kmimetypechooser_contextmenuevent_callback = nullptr;
    KMimeTypeChooser_TabletEvent_Callback kmimetypechooser_tabletevent_callback = nullptr;
    KMimeTypeChooser_ActionEvent_Callback kmimetypechooser_actionevent_callback = nullptr;
    KMimeTypeChooser_DragEnterEvent_Callback kmimetypechooser_dragenterevent_callback = nullptr;
    KMimeTypeChooser_DragMoveEvent_Callback kmimetypechooser_dragmoveevent_callback = nullptr;
    KMimeTypeChooser_DragLeaveEvent_Callback kmimetypechooser_dragleaveevent_callback = nullptr;
    KMimeTypeChooser_DropEvent_Callback kmimetypechooser_dropevent_callback = nullptr;
    KMimeTypeChooser_ShowEvent_Callback kmimetypechooser_showevent_callback = nullptr;
    KMimeTypeChooser_HideEvent_Callback kmimetypechooser_hideevent_callback = nullptr;
    KMimeTypeChooser_NativeEvent_Callback kmimetypechooser_nativeevent_callback = nullptr;
    KMimeTypeChooser_ChangeEvent_Callback kmimetypechooser_changeevent_callback = nullptr;
    KMimeTypeChooser_Metric_Callback kmimetypechooser_metric_callback = nullptr;
    KMimeTypeChooser_InitPainter_Callback kmimetypechooser_initpainter_callback = nullptr;
    KMimeTypeChooser_Redirected_Callback kmimetypechooser_redirected_callback = nullptr;
    KMimeTypeChooser_SharedPainter_Callback kmimetypechooser_sharedpainter_callback = nullptr;
    KMimeTypeChooser_InputMethodEvent_Callback kmimetypechooser_inputmethodevent_callback = nullptr;
    KMimeTypeChooser_InputMethodQuery_Callback kmimetypechooser_inputmethodquery_callback = nullptr;
    KMimeTypeChooser_FocusNextPrevChild_Callback kmimetypechooser_focusnextprevchild_callback = nullptr;
    KMimeTypeChooser_EventFilter_Callback kmimetypechooser_eventfilter_callback = nullptr;
    KMimeTypeChooser_TimerEvent_Callback kmimetypechooser_timerevent_callback = nullptr;
    KMimeTypeChooser_ChildEvent_Callback kmimetypechooser_childevent_callback = nullptr;
    KMimeTypeChooser_CustomEvent_Callback kmimetypechooser_customevent_callback = nullptr;
    KMimeTypeChooser_ConnectNotify_Callback kmimetypechooser_connectnotify_callback = nullptr;
    KMimeTypeChooser_DisconnectNotify_Callback kmimetypechooser_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KMimeTypeChooser {
        using KMimeTypeChooser::actionEvent;
        using KMimeTypeChooser::changeEvent;
        using KMimeTypeChooser::childEvent;
        using KMimeTypeChooser::closeEvent;
        using KMimeTypeChooser::connectNotify;
        using KMimeTypeChooser::contextMenuEvent;
        using KMimeTypeChooser::customEvent;
        using KMimeTypeChooser::disconnectNotify;
        using KMimeTypeChooser::dragEnterEvent;
        using KMimeTypeChooser::dragLeaveEvent;
        using KMimeTypeChooser::dragMoveEvent;
        using KMimeTypeChooser::dropEvent;
        using KMimeTypeChooser::enterEvent;
        using KMimeTypeChooser::event;
        using KMimeTypeChooser::focusInEvent;
        using KMimeTypeChooser::focusNextPrevChild;
        using KMimeTypeChooser::focusOutEvent;
        using KMimeTypeChooser::hideEvent;
        using KMimeTypeChooser::initPainter;
        using KMimeTypeChooser::inputMethodEvent;
        using KMimeTypeChooser::keyPressEvent;
        using KMimeTypeChooser::keyReleaseEvent;
        using KMimeTypeChooser::leaveEvent;
        using KMimeTypeChooser::metric;
        using KMimeTypeChooser::mouseDoubleClickEvent;
        using KMimeTypeChooser::mouseMoveEvent;
        using KMimeTypeChooser::mousePressEvent;
        using KMimeTypeChooser::mouseReleaseEvent;
        using KMimeTypeChooser::moveEvent;
        using KMimeTypeChooser::nativeEvent;
        using KMimeTypeChooser::paintEvent;
        using KMimeTypeChooser::redirected;
        using KMimeTypeChooser::resizeEvent;
        using KMimeTypeChooser::sharedPainter;
        using KMimeTypeChooser::showEvent;
        using KMimeTypeChooser::tabletEvent;
        using KMimeTypeChooser::timerEvent;
        using KMimeTypeChooser::wheelEvent;
    };

    VirtualKMimeTypeChooser() : KMimeTypeChooser() {};
    VirtualKMimeTypeChooser(const QString& text) : KMimeTypeChooser(text) {};
    VirtualKMimeTypeChooser(const QString& text, const QList<QString>& selectedMimeTypes) : KMimeTypeChooser(text, selectedMimeTypes) {};
    VirtualKMimeTypeChooser(const QString& text, const QList<QString>& selectedMimeTypes, const QString& defaultGroup) : KMimeTypeChooser(text, selectedMimeTypes, defaultGroup) {};
    VirtualKMimeTypeChooser(const QString& text, const QList<QString>& selectedMimeTypes, const QString& defaultGroup, const QList<QString>& groupsToShow) : KMimeTypeChooser(text, selectedMimeTypes, defaultGroup, groupsToShow) {};
    VirtualKMimeTypeChooser(const QString& text, const QList<QString>& selectedMimeTypes, const QString& defaultGroup, const QList<QString>& groupsToShow, int visuals) : KMimeTypeChooser(text, selectedMimeTypes, defaultGroup, groupsToShow, visuals) {};
    VirtualKMimeTypeChooser(const QString& text, const QList<QString>& selectedMimeTypes, const QString& defaultGroup, const QList<QString>& groupsToShow, int visuals, QWidget* parent) : KMimeTypeChooser(text, selectedMimeTypes, defaultGroup, groupsToShow, visuals, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kmimetypechooser_metaobject_callback) {
            QMetaObject* callback_ret = kmimetypechooser_metaobject_callback(this);
            return callback_ret;
        }
        return KMimeTypeChooser::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kmimetypechooser_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kmimetypechooser_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KMimeTypeChooser::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kmimetypechooser_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kmimetypechooser_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KMimeTypeChooser::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kmimetypechooser_devtype_callback) {
            int callback_ret = kmimetypechooser_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KMimeTypeChooser::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kmimetypechooser_setvisible_callback) {
            bool cbval1 = visible;
            kmimetypechooser_setvisible_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kmimetypechooser_sizehint_callback) {
            QSize* callback_ret = kmimetypechooser_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KMimeTypeChooser::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kmimetypechooser_minimumsizehint_callback) {
            QSize* callback_ret = kmimetypechooser_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KMimeTypeChooser::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kmimetypechooser_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kmimetypechooser_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KMimeTypeChooser::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kmimetypechooser_hasheightforwidth_callback) {
            bool callback_ret = kmimetypechooser_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KMimeTypeChooser::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kmimetypechooser_paintengine_callback) {
            QPaintEngine* callback_ret = kmimetypechooser_paintengine_callback(this);
            return callback_ret;
        }
        return KMimeTypeChooser::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kmimetypechooser_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kmimetypechooser_event_callback(this, cbval1);
            return callback_ret;
        }
        return KMimeTypeChooser::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kmimetypechooser_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kmimetypechooser_mousepressevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kmimetypechooser_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kmimetypechooser_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kmimetypechooser_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kmimetypechooser_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kmimetypechooser_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kmimetypechooser_mousemoveevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kmimetypechooser_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kmimetypechooser_wheelevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kmimetypechooser_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kmimetypechooser_keypressevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kmimetypechooser_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kmimetypechooser_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kmimetypechooser_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kmimetypechooser_focusinevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kmimetypechooser_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kmimetypechooser_focusoutevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kmimetypechooser_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kmimetypechooser_enterevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kmimetypechooser_leaveevent_callback) {
            QEvent* cbval1 = event;
            kmimetypechooser_leaveevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kmimetypechooser_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kmimetypechooser_paintevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kmimetypechooser_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kmimetypechooser_moveevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kmimetypechooser_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kmimetypechooser_resizeevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kmimetypechooser_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kmimetypechooser_closeevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kmimetypechooser_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kmimetypechooser_contextmenuevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kmimetypechooser_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kmimetypechooser_tabletevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kmimetypechooser_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kmimetypechooser_actionevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kmimetypechooser_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kmimetypechooser_dragenterevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kmimetypechooser_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kmimetypechooser_dragmoveevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kmimetypechooser_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kmimetypechooser_dragleaveevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kmimetypechooser_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kmimetypechooser_dropevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kmimetypechooser_showevent_callback) {
            QShowEvent* cbval1 = event;
            kmimetypechooser_showevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kmimetypechooser_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kmimetypechooser_hideevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kmimetypechooser_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kmimetypechooser_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KMimeTypeChooser::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kmimetypechooser_changeevent_callback) {
            QEvent* cbval1 = param1;
            kmimetypechooser_changeevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kmimetypechooser_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kmimetypechooser_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KMimeTypeChooser::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kmimetypechooser_initpainter_callback) {
            QPainter* cbval1 = painter;
            kmimetypechooser_initpainter_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kmimetypechooser_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kmimetypechooser_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KMimeTypeChooser::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kmimetypechooser_sharedpainter_callback) {
            QPainter* callback_ret = kmimetypechooser_sharedpainter_callback(this);
            return callback_ret;
        }
        return KMimeTypeChooser::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kmimetypechooser_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kmimetypechooser_inputmethodevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kmimetypechooser_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kmimetypechooser_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KMimeTypeChooser::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kmimetypechooser_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kmimetypechooser_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KMimeTypeChooser::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kmimetypechooser_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kmimetypechooser_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KMimeTypeChooser::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kmimetypechooser_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kmimetypechooser_timerevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kmimetypechooser_childevent_callback) {
            QChildEvent* cbval1 = event;
            kmimetypechooser_childevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kmimetypechooser_customevent_callback) {
            QEvent* cbval1 = event;
            kmimetypechooser_customevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kmimetypechooser_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kmimetypechooser_connectnotify_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kmimetypechooser_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kmimetypechooser_disconnectnotify_callback(this, cbval1);
            return;
        }
        KMimeTypeChooser::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KMimeTypeChooser_SuperEvent(KMimeTypeChooser* self, QEvent* event);
    friend void KMimeTypeChooser_SuperMousePressEvent(KMimeTypeChooser* self, QMouseEvent* event);
    friend void KMimeTypeChooser_SuperMouseReleaseEvent(KMimeTypeChooser* self, QMouseEvent* event);
    friend void KMimeTypeChooser_SuperMouseDoubleClickEvent(KMimeTypeChooser* self, QMouseEvent* event);
    friend void KMimeTypeChooser_SuperMouseMoveEvent(KMimeTypeChooser* self, QMouseEvent* event);
    friend void KMimeTypeChooser_SuperWheelEvent(KMimeTypeChooser* self, QWheelEvent* event);
    friend void KMimeTypeChooser_SuperKeyPressEvent(KMimeTypeChooser* self, QKeyEvent* event);
    friend void KMimeTypeChooser_SuperKeyReleaseEvent(KMimeTypeChooser* self, QKeyEvent* event);
    friend void KMimeTypeChooser_SuperFocusInEvent(KMimeTypeChooser* self, QFocusEvent* event);
    friend void KMimeTypeChooser_SuperFocusOutEvent(KMimeTypeChooser* self, QFocusEvent* event);
    friend void KMimeTypeChooser_SuperEnterEvent(KMimeTypeChooser* self, QEnterEvent* event);
    friend void KMimeTypeChooser_SuperLeaveEvent(KMimeTypeChooser* self, QEvent* event);
    friend void KMimeTypeChooser_SuperPaintEvent(KMimeTypeChooser* self, QPaintEvent* event);
    friend void KMimeTypeChooser_SuperMoveEvent(KMimeTypeChooser* self, QMoveEvent* event);
    friend void KMimeTypeChooser_SuperResizeEvent(KMimeTypeChooser* self, QResizeEvent* event);
    friend void KMimeTypeChooser_SuperCloseEvent(KMimeTypeChooser* self, QCloseEvent* event);
    friend void KMimeTypeChooser_SuperContextMenuEvent(KMimeTypeChooser* self, QContextMenuEvent* event);
    friend void KMimeTypeChooser_SuperTabletEvent(KMimeTypeChooser* self, QTabletEvent* event);
    friend void KMimeTypeChooser_SuperActionEvent(KMimeTypeChooser* self, QActionEvent* event);
    friend void KMimeTypeChooser_SuperDragEnterEvent(KMimeTypeChooser* self, QDragEnterEvent* event);
    friend void KMimeTypeChooser_SuperDragMoveEvent(KMimeTypeChooser* self, QDragMoveEvent* event);
    friend void KMimeTypeChooser_SuperDragLeaveEvent(KMimeTypeChooser* self, QDragLeaveEvent* event);
    friend void KMimeTypeChooser_SuperDropEvent(KMimeTypeChooser* self, QDropEvent* event);
    friend void KMimeTypeChooser_SuperShowEvent(KMimeTypeChooser* self, QShowEvent* event);
    friend void KMimeTypeChooser_SuperHideEvent(KMimeTypeChooser* self, QHideEvent* event);
    friend bool KMimeTypeChooser_SuperNativeEvent(KMimeTypeChooser* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KMimeTypeChooser_SuperChangeEvent(KMimeTypeChooser* self, QEvent* param1);
    friend int KMimeTypeChooser_SuperMetric(const KMimeTypeChooser* self, int param1);
    friend void KMimeTypeChooser_SuperInitPainter(const KMimeTypeChooser* self, QPainter* painter);
    friend QPaintDevice* KMimeTypeChooser_SuperRedirected(const KMimeTypeChooser* self, QPoint* offset);
    friend QPainter* KMimeTypeChooser_SuperSharedPainter(const KMimeTypeChooser* self);
    friend void KMimeTypeChooser_SuperInputMethodEvent(KMimeTypeChooser* self, QInputMethodEvent* param1);
    friend bool KMimeTypeChooser_SuperFocusNextPrevChild(KMimeTypeChooser* self, bool next);
    friend void KMimeTypeChooser_SuperTimerEvent(KMimeTypeChooser* self, QTimerEvent* event);
    friend void KMimeTypeChooser_SuperChildEvent(KMimeTypeChooser* self, QChildEvent* event);
    friend void KMimeTypeChooser_SuperCustomEvent(KMimeTypeChooser* self, QEvent* event);
    friend void KMimeTypeChooser_SuperConnectNotify(KMimeTypeChooser* self, const QMetaMethod* signal);
    friend void KMimeTypeChooser_SuperDisconnectNotify(KMimeTypeChooser* self, const QMetaMethod* signal);
};

// This class is a subclass of KMimeTypeChooserDialog
class VirtualKMimeTypeChooserDialog final : public KMimeTypeChooserDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using KMimeTypeChooserDialog_MetaObject_Callback = QMetaObject* (*)(const KMimeTypeChooserDialog*);
    using KMimeTypeChooserDialog_Metacast_Callback = void* (*)(KMimeTypeChooserDialog*, const char*);
    using KMimeTypeChooserDialog_Metacall_Callback = int (*)(KMimeTypeChooserDialog*, int, int, void**);
    using KMimeTypeChooserDialog_SizeHint_Callback = QSize* (*)(const KMimeTypeChooserDialog*);
    using KMimeTypeChooserDialog_SetVisible_Callback = void (*)(KMimeTypeChooserDialog*, bool);
    using KMimeTypeChooserDialog_MinimumSizeHint_Callback = QSize* (*)(const KMimeTypeChooserDialog*);
    using KMimeTypeChooserDialog_Open_Callback = void (*)(KMimeTypeChooserDialog*);
    using KMimeTypeChooserDialog_Exec_Callback = int (*)(KMimeTypeChooserDialog*);
    using KMimeTypeChooserDialog_Done_Callback = void (*)(KMimeTypeChooserDialog*, int);
    using KMimeTypeChooserDialog_Accept_Callback = void (*)(KMimeTypeChooserDialog*);
    using KMimeTypeChooserDialog_Reject_Callback = void (*)(KMimeTypeChooserDialog*);
    using KMimeTypeChooserDialog_KeyPressEvent_Callback = void (*)(KMimeTypeChooserDialog*, QKeyEvent*);
    using KMimeTypeChooserDialog_CloseEvent_Callback = void (*)(KMimeTypeChooserDialog*, QCloseEvent*);
    using KMimeTypeChooserDialog_ShowEvent_Callback = void (*)(KMimeTypeChooserDialog*, QShowEvent*);
    using KMimeTypeChooserDialog_ResizeEvent_Callback = void (*)(KMimeTypeChooserDialog*, QResizeEvent*);
    using KMimeTypeChooserDialog_ContextMenuEvent_Callback = void (*)(KMimeTypeChooserDialog*, QContextMenuEvent*);
    using KMimeTypeChooserDialog_EventFilter_Callback = bool (*)(KMimeTypeChooserDialog*, QObject*, QEvent*);
    using KMimeTypeChooserDialog_DevType_Callback = int (*)(const KMimeTypeChooserDialog*);
    using KMimeTypeChooserDialog_HeightForWidth_Callback = int (*)(const KMimeTypeChooserDialog*, int);
    using KMimeTypeChooserDialog_HasHeightForWidth_Callback = bool (*)(const KMimeTypeChooserDialog*);
    using KMimeTypeChooserDialog_PaintEngine_Callback = QPaintEngine* (*)(const KMimeTypeChooserDialog*);
    using KMimeTypeChooserDialog_Event_Callback = bool (*)(KMimeTypeChooserDialog*, QEvent*);
    using KMimeTypeChooserDialog_MousePressEvent_Callback = void (*)(KMimeTypeChooserDialog*, QMouseEvent*);
    using KMimeTypeChooserDialog_MouseReleaseEvent_Callback = void (*)(KMimeTypeChooserDialog*, QMouseEvent*);
    using KMimeTypeChooserDialog_MouseDoubleClickEvent_Callback = void (*)(KMimeTypeChooserDialog*, QMouseEvent*);
    using KMimeTypeChooserDialog_MouseMoveEvent_Callback = void (*)(KMimeTypeChooserDialog*, QMouseEvent*);
    using KMimeTypeChooserDialog_WheelEvent_Callback = void (*)(KMimeTypeChooserDialog*, QWheelEvent*);
    using KMimeTypeChooserDialog_KeyReleaseEvent_Callback = void (*)(KMimeTypeChooserDialog*, QKeyEvent*);
    using KMimeTypeChooserDialog_FocusInEvent_Callback = void (*)(KMimeTypeChooserDialog*, QFocusEvent*);
    using KMimeTypeChooserDialog_FocusOutEvent_Callback = void (*)(KMimeTypeChooserDialog*, QFocusEvent*);
    using KMimeTypeChooserDialog_EnterEvent_Callback = void (*)(KMimeTypeChooserDialog*, QEnterEvent*);
    using KMimeTypeChooserDialog_LeaveEvent_Callback = void (*)(KMimeTypeChooserDialog*, QEvent*);
    using KMimeTypeChooserDialog_PaintEvent_Callback = void (*)(KMimeTypeChooserDialog*, QPaintEvent*);
    using KMimeTypeChooserDialog_MoveEvent_Callback = void (*)(KMimeTypeChooserDialog*, QMoveEvent*);
    using KMimeTypeChooserDialog_TabletEvent_Callback = void (*)(KMimeTypeChooserDialog*, QTabletEvent*);
    using KMimeTypeChooserDialog_ActionEvent_Callback = void (*)(KMimeTypeChooserDialog*, QActionEvent*);
    using KMimeTypeChooserDialog_DragEnterEvent_Callback = void (*)(KMimeTypeChooserDialog*, QDragEnterEvent*);
    using KMimeTypeChooserDialog_DragMoveEvent_Callback = void (*)(KMimeTypeChooserDialog*, QDragMoveEvent*);
    using KMimeTypeChooserDialog_DragLeaveEvent_Callback = void (*)(KMimeTypeChooserDialog*, QDragLeaveEvent*);
    using KMimeTypeChooserDialog_DropEvent_Callback = void (*)(KMimeTypeChooserDialog*, QDropEvent*);
    using KMimeTypeChooserDialog_HideEvent_Callback = void (*)(KMimeTypeChooserDialog*, QHideEvent*);
    using KMimeTypeChooserDialog_NativeEvent_Callback = bool (*)(KMimeTypeChooserDialog*, libqt_string, void*, intptr_t*);
    using KMimeTypeChooserDialog_ChangeEvent_Callback = void (*)(KMimeTypeChooserDialog*, QEvent*);
    using KMimeTypeChooserDialog_Metric_Callback = int (*)(const KMimeTypeChooserDialog*, int);
    using KMimeTypeChooserDialog_InitPainter_Callback = void (*)(const KMimeTypeChooserDialog*, QPainter*);
    using KMimeTypeChooserDialog_Redirected_Callback = QPaintDevice* (*)(const KMimeTypeChooserDialog*, QPoint*);
    using KMimeTypeChooserDialog_SharedPainter_Callback = QPainter* (*)(const KMimeTypeChooserDialog*);
    using KMimeTypeChooserDialog_InputMethodEvent_Callback = void (*)(KMimeTypeChooserDialog*, QInputMethodEvent*);
    using KMimeTypeChooserDialog_InputMethodQuery_Callback = QVariant* (*)(const KMimeTypeChooserDialog*, int);
    using KMimeTypeChooserDialog_FocusNextPrevChild_Callback = bool (*)(KMimeTypeChooserDialog*, bool);
    using KMimeTypeChooserDialog_TimerEvent_Callback = void (*)(KMimeTypeChooserDialog*, QTimerEvent*);
    using KMimeTypeChooserDialog_ChildEvent_Callback = void (*)(KMimeTypeChooserDialog*, QChildEvent*);
    using KMimeTypeChooserDialog_CustomEvent_Callback = void (*)(KMimeTypeChooserDialog*, QEvent*);
    using KMimeTypeChooserDialog_ConnectNotify_Callback = void (*)(KMimeTypeChooserDialog*, QMetaMethod*);
    using KMimeTypeChooserDialog_DisconnectNotify_Callback = void (*)(KMimeTypeChooserDialog*, QMetaMethod*);
    using KMimeTypeChooserDialog::adjustPosition;
    using KMimeTypeChooserDialog::create;
    using KMimeTypeChooserDialog::destroy;
    using KMimeTypeChooserDialog::focusNextChild;
    using KMimeTypeChooserDialog::focusPreviousChild;
    using KMimeTypeChooserDialog::getDecodedMetricF;
    using KMimeTypeChooserDialog::isSignalConnected;
    using KMimeTypeChooserDialog::receivers;
    using KMimeTypeChooserDialog::sender;
    using KMimeTypeChooserDialog::senderSignalIndex;
    using KMimeTypeChooserDialog::updateMicroFocus;

    // Instance callback storage
    KMimeTypeChooserDialog_MetaObject_Callback kmimetypechooserdialog_metaobject_callback = nullptr;
    KMimeTypeChooserDialog_Metacast_Callback kmimetypechooserdialog_metacast_callback = nullptr;
    KMimeTypeChooserDialog_Metacall_Callback kmimetypechooserdialog_metacall_callback = nullptr;
    KMimeTypeChooserDialog_SizeHint_Callback kmimetypechooserdialog_sizehint_callback = nullptr;
    KMimeTypeChooserDialog_SetVisible_Callback kmimetypechooserdialog_setvisible_callback = nullptr;
    KMimeTypeChooserDialog_MinimumSizeHint_Callback kmimetypechooserdialog_minimumsizehint_callback = nullptr;
    KMimeTypeChooserDialog_Open_Callback kmimetypechooserdialog_open_callback = nullptr;
    KMimeTypeChooserDialog_Exec_Callback kmimetypechooserdialog_exec_callback = nullptr;
    KMimeTypeChooserDialog_Done_Callback kmimetypechooserdialog_done_callback = nullptr;
    KMimeTypeChooserDialog_Accept_Callback kmimetypechooserdialog_accept_callback = nullptr;
    KMimeTypeChooserDialog_Reject_Callback kmimetypechooserdialog_reject_callback = nullptr;
    KMimeTypeChooserDialog_KeyPressEvent_Callback kmimetypechooserdialog_keypressevent_callback = nullptr;
    KMimeTypeChooserDialog_CloseEvent_Callback kmimetypechooserdialog_closeevent_callback = nullptr;
    KMimeTypeChooserDialog_ShowEvent_Callback kmimetypechooserdialog_showevent_callback = nullptr;
    KMimeTypeChooserDialog_ResizeEvent_Callback kmimetypechooserdialog_resizeevent_callback = nullptr;
    KMimeTypeChooserDialog_ContextMenuEvent_Callback kmimetypechooserdialog_contextmenuevent_callback = nullptr;
    KMimeTypeChooserDialog_EventFilter_Callback kmimetypechooserdialog_eventfilter_callback = nullptr;
    KMimeTypeChooserDialog_DevType_Callback kmimetypechooserdialog_devtype_callback = nullptr;
    KMimeTypeChooserDialog_HeightForWidth_Callback kmimetypechooserdialog_heightforwidth_callback = nullptr;
    KMimeTypeChooserDialog_HasHeightForWidth_Callback kmimetypechooserdialog_hasheightforwidth_callback = nullptr;
    KMimeTypeChooserDialog_PaintEngine_Callback kmimetypechooserdialog_paintengine_callback = nullptr;
    KMimeTypeChooserDialog_Event_Callback kmimetypechooserdialog_event_callback = nullptr;
    KMimeTypeChooserDialog_MousePressEvent_Callback kmimetypechooserdialog_mousepressevent_callback = nullptr;
    KMimeTypeChooserDialog_MouseReleaseEvent_Callback kmimetypechooserdialog_mousereleaseevent_callback = nullptr;
    KMimeTypeChooserDialog_MouseDoubleClickEvent_Callback kmimetypechooserdialog_mousedoubleclickevent_callback = nullptr;
    KMimeTypeChooserDialog_MouseMoveEvent_Callback kmimetypechooserdialog_mousemoveevent_callback = nullptr;
    KMimeTypeChooserDialog_WheelEvent_Callback kmimetypechooserdialog_wheelevent_callback = nullptr;
    KMimeTypeChooserDialog_KeyReleaseEvent_Callback kmimetypechooserdialog_keyreleaseevent_callback = nullptr;
    KMimeTypeChooserDialog_FocusInEvent_Callback kmimetypechooserdialog_focusinevent_callback = nullptr;
    KMimeTypeChooserDialog_FocusOutEvent_Callback kmimetypechooserdialog_focusoutevent_callback = nullptr;
    KMimeTypeChooserDialog_EnterEvent_Callback kmimetypechooserdialog_enterevent_callback = nullptr;
    KMimeTypeChooserDialog_LeaveEvent_Callback kmimetypechooserdialog_leaveevent_callback = nullptr;
    KMimeTypeChooserDialog_PaintEvent_Callback kmimetypechooserdialog_paintevent_callback = nullptr;
    KMimeTypeChooserDialog_MoveEvent_Callback kmimetypechooserdialog_moveevent_callback = nullptr;
    KMimeTypeChooserDialog_TabletEvent_Callback kmimetypechooserdialog_tabletevent_callback = nullptr;
    KMimeTypeChooserDialog_ActionEvent_Callback kmimetypechooserdialog_actionevent_callback = nullptr;
    KMimeTypeChooserDialog_DragEnterEvent_Callback kmimetypechooserdialog_dragenterevent_callback = nullptr;
    KMimeTypeChooserDialog_DragMoveEvent_Callback kmimetypechooserdialog_dragmoveevent_callback = nullptr;
    KMimeTypeChooserDialog_DragLeaveEvent_Callback kmimetypechooserdialog_dragleaveevent_callback = nullptr;
    KMimeTypeChooserDialog_DropEvent_Callback kmimetypechooserdialog_dropevent_callback = nullptr;
    KMimeTypeChooserDialog_HideEvent_Callback kmimetypechooserdialog_hideevent_callback = nullptr;
    KMimeTypeChooserDialog_NativeEvent_Callback kmimetypechooserdialog_nativeevent_callback = nullptr;
    KMimeTypeChooserDialog_ChangeEvent_Callback kmimetypechooserdialog_changeevent_callback = nullptr;
    KMimeTypeChooserDialog_Metric_Callback kmimetypechooserdialog_metric_callback = nullptr;
    KMimeTypeChooserDialog_InitPainter_Callback kmimetypechooserdialog_initpainter_callback = nullptr;
    KMimeTypeChooserDialog_Redirected_Callback kmimetypechooserdialog_redirected_callback = nullptr;
    KMimeTypeChooserDialog_SharedPainter_Callback kmimetypechooserdialog_sharedpainter_callback = nullptr;
    KMimeTypeChooserDialog_InputMethodEvent_Callback kmimetypechooserdialog_inputmethodevent_callback = nullptr;
    KMimeTypeChooserDialog_InputMethodQuery_Callback kmimetypechooserdialog_inputmethodquery_callback = nullptr;
    KMimeTypeChooserDialog_FocusNextPrevChild_Callback kmimetypechooserdialog_focusnextprevchild_callback = nullptr;
    KMimeTypeChooserDialog_TimerEvent_Callback kmimetypechooserdialog_timerevent_callback = nullptr;
    KMimeTypeChooserDialog_ChildEvent_Callback kmimetypechooserdialog_childevent_callback = nullptr;
    KMimeTypeChooserDialog_CustomEvent_Callback kmimetypechooserdialog_customevent_callback = nullptr;
    KMimeTypeChooserDialog_ConnectNotify_Callback kmimetypechooserdialog_connectnotify_callback = nullptr;
    KMimeTypeChooserDialog_DisconnectNotify_Callback kmimetypechooserdialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KMimeTypeChooserDialog {
        using KMimeTypeChooserDialog::actionEvent;
        using KMimeTypeChooserDialog::changeEvent;
        using KMimeTypeChooserDialog::childEvent;
        using KMimeTypeChooserDialog::closeEvent;
        using KMimeTypeChooserDialog::connectNotify;
        using KMimeTypeChooserDialog::contextMenuEvent;
        using KMimeTypeChooserDialog::customEvent;
        using KMimeTypeChooserDialog::disconnectNotify;
        using KMimeTypeChooserDialog::dragEnterEvent;
        using KMimeTypeChooserDialog::dragLeaveEvent;
        using KMimeTypeChooserDialog::dragMoveEvent;
        using KMimeTypeChooserDialog::dropEvent;
        using KMimeTypeChooserDialog::enterEvent;
        using KMimeTypeChooserDialog::event;
        using KMimeTypeChooserDialog::eventFilter;
        using KMimeTypeChooserDialog::focusInEvent;
        using KMimeTypeChooserDialog::focusNextPrevChild;
        using KMimeTypeChooserDialog::focusOutEvent;
        using KMimeTypeChooserDialog::hideEvent;
        using KMimeTypeChooserDialog::initPainter;
        using KMimeTypeChooserDialog::inputMethodEvent;
        using KMimeTypeChooserDialog::keyPressEvent;
        using KMimeTypeChooserDialog::keyReleaseEvent;
        using KMimeTypeChooserDialog::leaveEvent;
        using KMimeTypeChooserDialog::metric;
        using KMimeTypeChooserDialog::mouseDoubleClickEvent;
        using KMimeTypeChooserDialog::mouseMoveEvent;
        using KMimeTypeChooserDialog::mousePressEvent;
        using KMimeTypeChooserDialog::mouseReleaseEvent;
        using KMimeTypeChooserDialog::moveEvent;
        using KMimeTypeChooserDialog::nativeEvent;
        using KMimeTypeChooserDialog::paintEvent;
        using KMimeTypeChooserDialog::redirected;
        using KMimeTypeChooserDialog::resizeEvent;
        using KMimeTypeChooserDialog::sharedPainter;
        using KMimeTypeChooserDialog::showEvent;
        using KMimeTypeChooserDialog::tabletEvent;
        using KMimeTypeChooserDialog::timerEvent;
        using KMimeTypeChooserDialog::wheelEvent;
    };

    VirtualKMimeTypeChooserDialog() : KMimeTypeChooserDialog() {};
    VirtualKMimeTypeChooserDialog(const QString& title, const QString& text, const QList<QString>& selectedMimeTypes, const QString& defaultGroup) : KMimeTypeChooserDialog(title, text, selectedMimeTypes, defaultGroup, nullptr) {};
    VirtualKMimeTypeChooserDialog(const QString& title) : KMimeTypeChooserDialog(title) {};
    VirtualKMimeTypeChooserDialog(const QString& title, const QString& text) : KMimeTypeChooserDialog(title, text) {};
    VirtualKMimeTypeChooserDialog(const QString& title, const QString& text, const QList<QString>& selectedMimeTypes) : KMimeTypeChooserDialog(title, text, selectedMimeTypes) {};
    VirtualKMimeTypeChooserDialog(const QString& title, const QString& text, const QList<QString>& selectedMimeTypes, const QString& defaultGroup, const QList<QString>& groupsToShow) : KMimeTypeChooserDialog(title, text, selectedMimeTypes, defaultGroup, groupsToShow) {};
    VirtualKMimeTypeChooserDialog(const QString& title, const QString& text, const QList<QString>& selectedMimeTypes, const QString& defaultGroup, const QList<QString>& groupsToShow, int visuals) : KMimeTypeChooserDialog(title, text, selectedMimeTypes, defaultGroup, groupsToShow, visuals) {};
    VirtualKMimeTypeChooserDialog(const QString& title, const QString& text, const QList<QString>& selectedMimeTypes, const QString& defaultGroup, const QList<QString>& groupsToShow, int visuals, QWidget* parent) : KMimeTypeChooserDialog(title, text, selectedMimeTypes, defaultGroup, groupsToShow, visuals, parent) {};
    VirtualKMimeTypeChooserDialog(const QString& title, const QString& text, const QList<QString>& selectedMimeTypes, const QString& defaultGroup, QWidget* parent) : KMimeTypeChooserDialog(title, text, selectedMimeTypes, defaultGroup, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kmimetypechooserdialog_metaobject_callback) {
            QMetaObject* callback_ret = kmimetypechooserdialog_metaobject_callback(this);
            return callback_ret;
        }
        return KMimeTypeChooserDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kmimetypechooserdialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kmimetypechooserdialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KMimeTypeChooserDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kmimetypechooserdialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kmimetypechooserdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KMimeTypeChooserDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kmimetypechooserdialog_sizehint_callback) {
            QSize* callback_ret = kmimetypechooserdialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KMimeTypeChooserDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kmimetypechooserdialog_setvisible_callback) {
            bool cbval1 = visible;
            kmimetypechooserdialog_setvisible_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kmimetypechooserdialog_minimumsizehint_callback) {
            QSize* callback_ret = kmimetypechooserdialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KMimeTypeChooserDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kmimetypechooserdialog_open_callback) {
            kmimetypechooserdialog_open_callback(this);
            return;
        }
        KMimeTypeChooserDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kmimetypechooserdialog_exec_callback) {
            int callback_ret = kmimetypechooserdialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KMimeTypeChooserDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kmimetypechooserdialog_done_callback) {
            int cbval1 = param1;
            kmimetypechooserdialog_done_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kmimetypechooserdialog_accept_callback) {
            kmimetypechooserdialog_accept_callback(this);
            return;
        }
        KMimeTypeChooserDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kmimetypechooserdialog_reject_callback) {
            kmimetypechooserdialog_reject_callback(this);
            return;
        }
        KMimeTypeChooserDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kmimetypechooserdialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kmimetypechooserdialog_keypressevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kmimetypechooserdialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            kmimetypechooserdialog_closeevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kmimetypechooserdialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            kmimetypechooserdialog_showevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kmimetypechooserdialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kmimetypechooserdialog_resizeevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kmimetypechooserdialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            kmimetypechooserdialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kmimetypechooserdialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = kmimetypechooserdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KMimeTypeChooserDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kmimetypechooserdialog_devtype_callback) {
            int callback_ret = kmimetypechooserdialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KMimeTypeChooserDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kmimetypechooserdialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kmimetypechooserdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KMimeTypeChooserDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kmimetypechooserdialog_hasheightforwidth_callback) {
            bool callback_ret = kmimetypechooserdialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KMimeTypeChooserDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kmimetypechooserdialog_paintengine_callback) {
            QPaintEngine* callback_ret = kmimetypechooserdialog_paintengine_callback(this);
            return callback_ret;
        }
        return KMimeTypeChooserDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kmimetypechooserdialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kmimetypechooserdialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return KMimeTypeChooserDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kmimetypechooserdialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kmimetypechooserdialog_mousepressevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kmimetypechooserdialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kmimetypechooserdialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kmimetypechooserdialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kmimetypechooserdialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kmimetypechooserdialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kmimetypechooserdialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kmimetypechooserdialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kmimetypechooserdialog_wheelevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kmimetypechooserdialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kmimetypechooserdialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kmimetypechooserdialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kmimetypechooserdialog_focusinevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kmimetypechooserdialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kmimetypechooserdialog_focusoutevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kmimetypechooserdialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kmimetypechooserdialog_enterevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kmimetypechooserdialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            kmimetypechooserdialog_leaveevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kmimetypechooserdialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kmimetypechooserdialog_paintevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kmimetypechooserdialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kmimetypechooserdialog_moveevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kmimetypechooserdialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kmimetypechooserdialog_tabletevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kmimetypechooserdialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kmimetypechooserdialog_actionevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kmimetypechooserdialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kmimetypechooserdialog_dragenterevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kmimetypechooserdialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kmimetypechooserdialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kmimetypechooserdialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kmimetypechooserdialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kmimetypechooserdialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kmimetypechooserdialog_dropevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kmimetypechooserdialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kmimetypechooserdialog_hideevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kmimetypechooserdialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kmimetypechooserdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KMimeTypeChooserDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kmimetypechooserdialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            kmimetypechooserdialog_changeevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kmimetypechooserdialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kmimetypechooserdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KMimeTypeChooserDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kmimetypechooserdialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            kmimetypechooserdialog_initpainter_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kmimetypechooserdialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kmimetypechooserdialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KMimeTypeChooserDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kmimetypechooserdialog_sharedpainter_callback) {
            QPainter* callback_ret = kmimetypechooserdialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return KMimeTypeChooserDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kmimetypechooserdialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kmimetypechooserdialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kmimetypechooserdialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kmimetypechooserdialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KMimeTypeChooserDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kmimetypechooserdialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kmimetypechooserdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KMimeTypeChooserDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kmimetypechooserdialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kmimetypechooserdialog_timerevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kmimetypechooserdialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            kmimetypechooserdialog_childevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kmimetypechooserdialog_customevent_callback) {
            QEvent* cbval1 = event;
            kmimetypechooserdialog_customevent_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kmimetypechooserdialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kmimetypechooserdialog_connectnotify_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kmimetypechooserdialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kmimetypechooserdialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        KMimeTypeChooserDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void KMimeTypeChooserDialog_SuperKeyPressEvent(KMimeTypeChooserDialog* self, QKeyEvent* param1);
    friend void KMimeTypeChooserDialog_SuperCloseEvent(KMimeTypeChooserDialog* self, QCloseEvent* param1);
    friend void KMimeTypeChooserDialog_SuperShowEvent(KMimeTypeChooserDialog* self, QShowEvent* param1);
    friend void KMimeTypeChooserDialog_SuperResizeEvent(KMimeTypeChooserDialog* self, QResizeEvent* param1);
    friend void KMimeTypeChooserDialog_SuperContextMenuEvent(KMimeTypeChooserDialog* self, QContextMenuEvent* param1);
    friend bool KMimeTypeChooserDialog_SuperEventFilter(KMimeTypeChooserDialog* self, QObject* param1, QEvent* param2);
    friend bool KMimeTypeChooserDialog_SuperEvent(KMimeTypeChooserDialog* self, QEvent* event);
    friend void KMimeTypeChooserDialog_SuperMousePressEvent(KMimeTypeChooserDialog* self, QMouseEvent* event);
    friend void KMimeTypeChooserDialog_SuperMouseReleaseEvent(KMimeTypeChooserDialog* self, QMouseEvent* event);
    friend void KMimeTypeChooserDialog_SuperMouseDoubleClickEvent(KMimeTypeChooserDialog* self, QMouseEvent* event);
    friend void KMimeTypeChooserDialog_SuperMouseMoveEvent(KMimeTypeChooserDialog* self, QMouseEvent* event);
    friend void KMimeTypeChooserDialog_SuperWheelEvent(KMimeTypeChooserDialog* self, QWheelEvent* event);
    friend void KMimeTypeChooserDialog_SuperKeyReleaseEvent(KMimeTypeChooserDialog* self, QKeyEvent* event);
    friend void KMimeTypeChooserDialog_SuperFocusInEvent(KMimeTypeChooserDialog* self, QFocusEvent* event);
    friend void KMimeTypeChooserDialog_SuperFocusOutEvent(KMimeTypeChooserDialog* self, QFocusEvent* event);
    friend void KMimeTypeChooserDialog_SuperEnterEvent(KMimeTypeChooserDialog* self, QEnterEvent* event);
    friend void KMimeTypeChooserDialog_SuperLeaveEvent(KMimeTypeChooserDialog* self, QEvent* event);
    friend void KMimeTypeChooserDialog_SuperPaintEvent(KMimeTypeChooserDialog* self, QPaintEvent* event);
    friend void KMimeTypeChooserDialog_SuperMoveEvent(KMimeTypeChooserDialog* self, QMoveEvent* event);
    friend void KMimeTypeChooserDialog_SuperTabletEvent(KMimeTypeChooserDialog* self, QTabletEvent* event);
    friend void KMimeTypeChooserDialog_SuperActionEvent(KMimeTypeChooserDialog* self, QActionEvent* event);
    friend void KMimeTypeChooserDialog_SuperDragEnterEvent(KMimeTypeChooserDialog* self, QDragEnterEvent* event);
    friend void KMimeTypeChooserDialog_SuperDragMoveEvent(KMimeTypeChooserDialog* self, QDragMoveEvent* event);
    friend void KMimeTypeChooserDialog_SuperDragLeaveEvent(KMimeTypeChooserDialog* self, QDragLeaveEvent* event);
    friend void KMimeTypeChooserDialog_SuperDropEvent(KMimeTypeChooserDialog* self, QDropEvent* event);
    friend void KMimeTypeChooserDialog_SuperHideEvent(KMimeTypeChooserDialog* self, QHideEvent* event);
    friend bool KMimeTypeChooserDialog_SuperNativeEvent(KMimeTypeChooserDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KMimeTypeChooserDialog_SuperChangeEvent(KMimeTypeChooserDialog* self, QEvent* param1);
    friend int KMimeTypeChooserDialog_SuperMetric(const KMimeTypeChooserDialog* self, int param1);
    friend void KMimeTypeChooserDialog_SuperInitPainter(const KMimeTypeChooserDialog* self, QPainter* painter);
    friend QPaintDevice* KMimeTypeChooserDialog_SuperRedirected(const KMimeTypeChooserDialog* self, QPoint* offset);
    friend QPainter* KMimeTypeChooserDialog_SuperSharedPainter(const KMimeTypeChooserDialog* self);
    friend void KMimeTypeChooserDialog_SuperInputMethodEvent(KMimeTypeChooserDialog* self, QInputMethodEvent* param1);
    friend bool KMimeTypeChooserDialog_SuperFocusNextPrevChild(KMimeTypeChooserDialog* self, bool next);
    friend void KMimeTypeChooserDialog_SuperTimerEvent(KMimeTypeChooserDialog* self, QTimerEvent* event);
    friend void KMimeTypeChooserDialog_SuperChildEvent(KMimeTypeChooserDialog* self, QChildEvent* event);
    friend void KMimeTypeChooserDialog_SuperCustomEvent(KMimeTypeChooserDialog* self, QEvent* event);
    friend void KMimeTypeChooserDialog_SuperConnectNotify(KMimeTypeChooserDialog* self, const QMetaMethod* signal);
    friend void KMimeTypeChooserDialog_SuperDisconnectNotify(KMimeTypeChooserDialog* self, const QMetaMethod* signal);
};

#endif
