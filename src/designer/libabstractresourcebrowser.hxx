#pragma once
#ifndef DESIGNER_LIBABSTRACTRESOURCEBROWSER_HXX
#define DESIGNER_LIBABSTRACTRESOURCEBROWSER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerResourceBrowserInterface
class VirtualQDesignerResourceBrowserInterface : public QDesignerResourceBrowserInterface {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDesignerResourceBrowserInterface_MetaObject_Callback = QMetaObject* (*)(const QDesignerResourceBrowserInterface*);
    using QDesignerResourceBrowserInterface_Metacast_Callback = void* (*)(QDesignerResourceBrowserInterface*, const char*);
    using QDesignerResourceBrowserInterface_Metacall_Callback = int (*)(QDesignerResourceBrowserInterface*, int, int, void**);
    using QDesignerResourceBrowserInterface_SetCurrentPath_Callback = void (*)(QDesignerResourceBrowserInterface*, const char*);
    using QDesignerResourceBrowserInterface_CurrentPath_Callback = const char* (*)(const QDesignerResourceBrowserInterface*);
    using QDesignerResourceBrowserInterface_DevType_Callback = int (*)(const QDesignerResourceBrowserInterface*);
    using QDesignerResourceBrowserInterface_SetVisible_Callback = void (*)(QDesignerResourceBrowserInterface*, bool);
    using QDesignerResourceBrowserInterface_SizeHint_Callback = QSize* (*)(const QDesignerResourceBrowserInterface*);
    using QDesignerResourceBrowserInterface_MinimumSizeHint_Callback = QSize* (*)(const QDesignerResourceBrowserInterface*);
    using QDesignerResourceBrowserInterface_HeightForWidth_Callback = int (*)(const QDesignerResourceBrowserInterface*, int);
    using QDesignerResourceBrowserInterface_HasHeightForWidth_Callback = bool (*)(const QDesignerResourceBrowserInterface*);
    using QDesignerResourceBrowserInterface_PaintEngine_Callback = QPaintEngine* (*)(const QDesignerResourceBrowserInterface*);
    using QDesignerResourceBrowserInterface_Event_Callback = bool (*)(QDesignerResourceBrowserInterface*, QEvent*);
    using QDesignerResourceBrowserInterface_MousePressEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QMouseEvent*);
    using QDesignerResourceBrowserInterface_MouseReleaseEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QMouseEvent*);
    using QDesignerResourceBrowserInterface_MouseDoubleClickEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QMouseEvent*);
    using QDesignerResourceBrowserInterface_MouseMoveEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QMouseEvent*);
    using QDesignerResourceBrowserInterface_WheelEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QWheelEvent*);
    using QDesignerResourceBrowserInterface_KeyPressEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QKeyEvent*);
    using QDesignerResourceBrowserInterface_KeyReleaseEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QKeyEvent*);
    using QDesignerResourceBrowserInterface_FocusInEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QFocusEvent*);
    using QDesignerResourceBrowserInterface_FocusOutEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QFocusEvent*);
    using QDesignerResourceBrowserInterface_EnterEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QEnterEvent*);
    using QDesignerResourceBrowserInterface_LeaveEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QEvent*);
    using QDesignerResourceBrowserInterface_PaintEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QPaintEvent*);
    using QDesignerResourceBrowserInterface_MoveEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QMoveEvent*);
    using QDesignerResourceBrowserInterface_ResizeEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QResizeEvent*);
    using QDesignerResourceBrowserInterface_CloseEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QCloseEvent*);
    using QDesignerResourceBrowserInterface_ContextMenuEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QContextMenuEvent*);
    using QDesignerResourceBrowserInterface_TabletEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QTabletEvent*);
    using QDesignerResourceBrowserInterface_ActionEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QActionEvent*);
    using QDesignerResourceBrowserInterface_DragEnterEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QDragEnterEvent*);
    using QDesignerResourceBrowserInterface_DragMoveEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QDragMoveEvent*);
    using QDesignerResourceBrowserInterface_DragLeaveEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QDragLeaveEvent*);
    using QDesignerResourceBrowserInterface_DropEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QDropEvent*);
    using QDesignerResourceBrowserInterface_ShowEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QShowEvent*);
    using QDesignerResourceBrowserInterface_HideEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QHideEvent*);
    using QDesignerResourceBrowserInterface_NativeEvent_Callback = bool (*)(QDesignerResourceBrowserInterface*, libqt_string, void*, intptr_t*);
    using QDesignerResourceBrowserInterface_ChangeEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QEvent*);
    using QDesignerResourceBrowserInterface_Metric_Callback = int (*)(const QDesignerResourceBrowserInterface*, int);
    using QDesignerResourceBrowserInterface_InitPainter_Callback = void (*)(const QDesignerResourceBrowserInterface*, QPainter*);
    using QDesignerResourceBrowserInterface_Redirected_Callback = QPaintDevice* (*)(const QDesignerResourceBrowserInterface*, QPoint*);
    using QDesignerResourceBrowserInterface_SharedPainter_Callback = QPainter* (*)(const QDesignerResourceBrowserInterface*);
    using QDesignerResourceBrowserInterface_InputMethodEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QInputMethodEvent*);
    using QDesignerResourceBrowserInterface_InputMethodQuery_Callback = QVariant* (*)(const QDesignerResourceBrowserInterface*, int);
    using QDesignerResourceBrowserInterface_FocusNextPrevChild_Callback = bool (*)(QDesignerResourceBrowserInterface*, bool);
    using QDesignerResourceBrowserInterface_EventFilter_Callback = bool (*)(QDesignerResourceBrowserInterface*, QObject*, QEvent*);
    using QDesignerResourceBrowserInterface_TimerEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QTimerEvent*);
    using QDesignerResourceBrowserInterface_ChildEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QChildEvent*);
    using QDesignerResourceBrowserInterface_CustomEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QEvent*);
    using QDesignerResourceBrowserInterface_ConnectNotify_Callback = void (*)(QDesignerResourceBrowserInterface*, QMetaMethod*);
    using QDesignerResourceBrowserInterface_DisconnectNotify_Callback = void (*)(QDesignerResourceBrowserInterface*, QMetaMethod*);
    using QDesignerResourceBrowserInterface::create;
    using QDesignerResourceBrowserInterface::destroy;
    using QDesignerResourceBrowserInterface::focusNextChild;
    using QDesignerResourceBrowserInterface::focusPreviousChild;
    using QDesignerResourceBrowserInterface::getDecodedMetricF;
    using QDesignerResourceBrowserInterface::isSignalConnected;
    using QDesignerResourceBrowserInterface::receivers;
    using QDesignerResourceBrowserInterface::sender;
    using QDesignerResourceBrowserInterface::senderSignalIndex;
    using QDesignerResourceBrowserInterface::updateMicroFocus;

    // Instance callback storage
    QDesignerResourceBrowserInterface_MetaObject_Callback qdesignerresourcebrowserinterface_metaobject_callback = nullptr;
    QDesignerResourceBrowserInterface_Metacast_Callback qdesignerresourcebrowserinterface_metacast_callback = nullptr;
    QDesignerResourceBrowserInterface_Metacall_Callback qdesignerresourcebrowserinterface_metacall_callback = nullptr;
    QDesignerResourceBrowserInterface_SetCurrentPath_Callback qdesignerresourcebrowserinterface_setcurrentpath_callback = nullptr;
    QDesignerResourceBrowserInterface_CurrentPath_Callback qdesignerresourcebrowserinterface_currentpath_callback = nullptr;
    QDesignerResourceBrowserInterface_DevType_Callback qdesignerresourcebrowserinterface_devtype_callback = nullptr;
    QDesignerResourceBrowserInterface_SetVisible_Callback qdesignerresourcebrowserinterface_setvisible_callback = nullptr;
    QDesignerResourceBrowserInterface_SizeHint_Callback qdesignerresourcebrowserinterface_sizehint_callback = nullptr;
    QDesignerResourceBrowserInterface_MinimumSizeHint_Callback qdesignerresourcebrowserinterface_minimumsizehint_callback = nullptr;
    QDesignerResourceBrowserInterface_HeightForWidth_Callback qdesignerresourcebrowserinterface_heightforwidth_callback = nullptr;
    QDesignerResourceBrowserInterface_HasHeightForWidth_Callback qdesignerresourcebrowserinterface_hasheightforwidth_callback = nullptr;
    QDesignerResourceBrowserInterface_PaintEngine_Callback qdesignerresourcebrowserinterface_paintengine_callback = nullptr;
    QDesignerResourceBrowserInterface_Event_Callback qdesignerresourcebrowserinterface_event_callback = nullptr;
    QDesignerResourceBrowserInterface_MousePressEvent_Callback qdesignerresourcebrowserinterface_mousepressevent_callback = nullptr;
    QDesignerResourceBrowserInterface_MouseReleaseEvent_Callback qdesignerresourcebrowserinterface_mousereleaseevent_callback = nullptr;
    QDesignerResourceBrowserInterface_MouseDoubleClickEvent_Callback qdesignerresourcebrowserinterface_mousedoubleclickevent_callback = nullptr;
    QDesignerResourceBrowserInterface_MouseMoveEvent_Callback qdesignerresourcebrowserinterface_mousemoveevent_callback = nullptr;
    QDesignerResourceBrowserInterface_WheelEvent_Callback qdesignerresourcebrowserinterface_wheelevent_callback = nullptr;
    QDesignerResourceBrowserInterface_KeyPressEvent_Callback qdesignerresourcebrowserinterface_keypressevent_callback = nullptr;
    QDesignerResourceBrowserInterface_KeyReleaseEvent_Callback qdesignerresourcebrowserinterface_keyreleaseevent_callback = nullptr;
    QDesignerResourceBrowserInterface_FocusInEvent_Callback qdesignerresourcebrowserinterface_focusinevent_callback = nullptr;
    QDesignerResourceBrowserInterface_FocusOutEvent_Callback qdesignerresourcebrowserinterface_focusoutevent_callback = nullptr;
    QDesignerResourceBrowserInterface_EnterEvent_Callback qdesignerresourcebrowserinterface_enterevent_callback = nullptr;
    QDesignerResourceBrowserInterface_LeaveEvent_Callback qdesignerresourcebrowserinterface_leaveevent_callback = nullptr;
    QDesignerResourceBrowserInterface_PaintEvent_Callback qdesignerresourcebrowserinterface_paintevent_callback = nullptr;
    QDesignerResourceBrowserInterface_MoveEvent_Callback qdesignerresourcebrowserinterface_moveevent_callback = nullptr;
    QDesignerResourceBrowserInterface_ResizeEvent_Callback qdesignerresourcebrowserinterface_resizeevent_callback = nullptr;
    QDesignerResourceBrowserInterface_CloseEvent_Callback qdesignerresourcebrowserinterface_closeevent_callback = nullptr;
    QDesignerResourceBrowserInterface_ContextMenuEvent_Callback qdesignerresourcebrowserinterface_contextmenuevent_callback = nullptr;
    QDesignerResourceBrowserInterface_TabletEvent_Callback qdesignerresourcebrowserinterface_tabletevent_callback = nullptr;
    QDesignerResourceBrowserInterface_ActionEvent_Callback qdesignerresourcebrowserinterface_actionevent_callback = nullptr;
    QDesignerResourceBrowserInterface_DragEnterEvent_Callback qdesignerresourcebrowserinterface_dragenterevent_callback = nullptr;
    QDesignerResourceBrowserInterface_DragMoveEvent_Callback qdesignerresourcebrowserinterface_dragmoveevent_callback = nullptr;
    QDesignerResourceBrowserInterface_DragLeaveEvent_Callback qdesignerresourcebrowserinterface_dragleaveevent_callback = nullptr;
    QDesignerResourceBrowserInterface_DropEvent_Callback qdesignerresourcebrowserinterface_dropevent_callback = nullptr;
    QDesignerResourceBrowserInterface_ShowEvent_Callback qdesignerresourcebrowserinterface_showevent_callback = nullptr;
    QDesignerResourceBrowserInterface_HideEvent_Callback qdesignerresourcebrowserinterface_hideevent_callback = nullptr;
    QDesignerResourceBrowserInterface_NativeEvent_Callback qdesignerresourcebrowserinterface_nativeevent_callback = nullptr;
    QDesignerResourceBrowserInterface_ChangeEvent_Callback qdesignerresourcebrowserinterface_changeevent_callback = nullptr;
    QDesignerResourceBrowserInterface_Metric_Callback qdesignerresourcebrowserinterface_metric_callback = nullptr;
    QDesignerResourceBrowserInterface_InitPainter_Callback qdesignerresourcebrowserinterface_initpainter_callback = nullptr;
    QDesignerResourceBrowserInterface_Redirected_Callback qdesignerresourcebrowserinterface_redirected_callback = nullptr;
    QDesignerResourceBrowserInterface_SharedPainter_Callback qdesignerresourcebrowserinterface_sharedpainter_callback = nullptr;
    QDesignerResourceBrowserInterface_InputMethodEvent_Callback qdesignerresourcebrowserinterface_inputmethodevent_callback = nullptr;
    QDesignerResourceBrowserInterface_InputMethodQuery_Callback qdesignerresourcebrowserinterface_inputmethodquery_callback = nullptr;
    QDesignerResourceBrowserInterface_FocusNextPrevChild_Callback qdesignerresourcebrowserinterface_focusnextprevchild_callback = nullptr;
    QDesignerResourceBrowserInterface_EventFilter_Callback qdesignerresourcebrowserinterface_eventfilter_callback = nullptr;
    QDesignerResourceBrowserInterface_TimerEvent_Callback qdesignerresourcebrowserinterface_timerevent_callback = nullptr;
    QDesignerResourceBrowserInterface_ChildEvent_Callback qdesignerresourcebrowserinterface_childevent_callback = nullptr;
    QDesignerResourceBrowserInterface_CustomEvent_Callback qdesignerresourcebrowserinterface_customevent_callback = nullptr;
    QDesignerResourceBrowserInterface_ConnectNotify_Callback qdesignerresourcebrowserinterface_connectnotify_callback = nullptr;
    QDesignerResourceBrowserInterface_DisconnectNotify_Callback qdesignerresourcebrowserinterface_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QDesignerResourceBrowserInterface {
        using QDesignerResourceBrowserInterface::actionEvent;
        using QDesignerResourceBrowserInterface::changeEvent;
        using QDesignerResourceBrowserInterface::childEvent;
        using QDesignerResourceBrowserInterface::closeEvent;
        using QDesignerResourceBrowserInterface::connectNotify;
        using QDesignerResourceBrowserInterface::contextMenuEvent;
        using QDesignerResourceBrowserInterface::customEvent;
        using QDesignerResourceBrowserInterface::disconnectNotify;
        using QDesignerResourceBrowserInterface::dragEnterEvent;
        using QDesignerResourceBrowserInterface::dragLeaveEvent;
        using QDesignerResourceBrowserInterface::dragMoveEvent;
        using QDesignerResourceBrowserInterface::dropEvent;
        using QDesignerResourceBrowserInterface::enterEvent;
        using QDesignerResourceBrowserInterface::event;
        using QDesignerResourceBrowserInterface::focusInEvent;
        using QDesignerResourceBrowserInterface::focusNextPrevChild;
        using QDesignerResourceBrowserInterface::focusOutEvent;
        using QDesignerResourceBrowserInterface::hideEvent;
        using QDesignerResourceBrowserInterface::initPainter;
        using QDesignerResourceBrowserInterface::inputMethodEvent;
        using QDesignerResourceBrowserInterface::keyPressEvent;
        using QDesignerResourceBrowserInterface::keyReleaseEvent;
        using QDesignerResourceBrowserInterface::leaveEvent;
        using QDesignerResourceBrowserInterface::metric;
        using QDesignerResourceBrowserInterface::mouseDoubleClickEvent;
        using QDesignerResourceBrowserInterface::mouseMoveEvent;
        using QDesignerResourceBrowserInterface::mousePressEvent;
        using QDesignerResourceBrowserInterface::mouseReleaseEvent;
        using QDesignerResourceBrowserInterface::moveEvent;
        using QDesignerResourceBrowserInterface::nativeEvent;
        using QDesignerResourceBrowserInterface::paintEvent;
        using QDesignerResourceBrowserInterface::redirected;
        using QDesignerResourceBrowserInterface::resizeEvent;
        using QDesignerResourceBrowserInterface::sharedPainter;
        using QDesignerResourceBrowserInterface::showEvent;
        using QDesignerResourceBrowserInterface::tabletEvent;
        using QDesignerResourceBrowserInterface::timerEvent;
        using QDesignerResourceBrowserInterface::wheelEvent;
    };

    VirtualQDesignerResourceBrowserInterface(QWidget* parent) : QDesignerResourceBrowserInterface(parent) {};
    VirtualQDesignerResourceBrowserInterface() : QDesignerResourceBrowserInterface() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdesignerresourcebrowserinterface_metaobject_callback) {
            QMetaObject* callback_ret = qdesignerresourcebrowserinterface_metaobject_callback(this);
            return callback_ret;
        }
        return QDesignerResourceBrowserInterface::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdesignerresourcebrowserinterface_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdesignerresourcebrowserinterface_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerResourceBrowserInterface::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdesignerresourcebrowserinterface_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdesignerresourcebrowserinterface_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDesignerResourceBrowserInterface::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCurrentPath(const QString& filePath) override {
        if (qdesignerresourcebrowserinterface_setcurrentpath_callback) {
            const auto filePath_ret = filePath;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray filePath_b = filePath_ret.toUtf8();
            auto filePath_str_len = filePath_b.length();
            const char* filePath_str = static_cast<const char*>(malloc(filePath_str_len + 1));
            memcpy((void*)filePath_str, filePath_b.data(), filePath_str_len);
            ((char*)filePath_str)[filePath_str_len] = '\0';
            const char* cbval1 = filePath_str;
            qdesignerresourcebrowserinterface_setcurrentpath_callback(this, cbval1);
            libqt_free(filePath_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerResourceBrowserInterface::setCurrentPath called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QString currentPath() const override {
        if (qdesignerresourcebrowserinterface_currentpath_callback) {
            const char* callback_ret = qdesignerresourcebrowserinterface_currentpath_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerResourceBrowserInterface::currentPath called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qdesignerresourcebrowserinterface_devtype_callback) {
            int callback_ret = qdesignerresourcebrowserinterface_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QDesignerResourceBrowserInterface::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qdesignerresourcebrowserinterface_setvisible_callback) {
            bool cbval1 = visible;
            qdesignerresourcebrowserinterface_setvisible_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qdesignerresourcebrowserinterface_sizehint_callback) {
            QSize* callback_ret = qdesignerresourcebrowserinterface_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDesignerResourceBrowserInterface::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qdesignerresourcebrowserinterface_minimumsizehint_callback) {
            QSize* callback_ret = qdesignerresourcebrowserinterface_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDesignerResourceBrowserInterface::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qdesignerresourcebrowserinterface_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qdesignerresourcebrowserinterface_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDesignerResourceBrowserInterface::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qdesignerresourcebrowserinterface_hasheightforwidth_callback) {
            bool callback_ret = qdesignerresourcebrowserinterface_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QDesignerResourceBrowserInterface::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qdesignerresourcebrowserinterface_paintengine_callback) {
            QPaintEngine* callback_ret = qdesignerresourcebrowserinterface_paintengine_callback(this);
            return callback_ret;
        }
        return QDesignerResourceBrowserInterface::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdesignerresourcebrowserinterface_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdesignerresourcebrowserinterface_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerResourceBrowserInterface::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qdesignerresourcebrowserinterface_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qdesignerresourcebrowserinterface_mousepressevent_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qdesignerresourcebrowserinterface_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qdesignerresourcebrowserinterface_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qdesignerresourcebrowserinterface_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qdesignerresourcebrowserinterface_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qdesignerresourcebrowserinterface_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qdesignerresourcebrowserinterface_mousemoveevent_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qdesignerresourcebrowserinterface_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qdesignerresourcebrowserinterface_wheelevent_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qdesignerresourcebrowserinterface_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qdesignerresourcebrowserinterface_keypressevent_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qdesignerresourcebrowserinterface_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qdesignerresourcebrowserinterface_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qdesignerresourcebrowserinterface_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qdesignerresourcebrowserinterface_focusinevent_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qdesignerresourcebrowserinterface_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qdesignerresourcebrowserinterface_focusoutevent_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qdesignerresourcebrowserinterface_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qdesignerresourcebrowserinterface_enterevent_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qdesignerresourcebrowserinterface_leaveevent_callback) {
            QEvent* cbval1 = event;
            qdesignerresourcebrowserinterface_leaveevent_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qdesignerresourcebrowserinterface_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qdesignerresourcebrowserinterface_paintevent_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qdesignerresourcebrowserinterface_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qdesignerresourcebrowserinterface_moveevent_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qdesignerresourcebrowserinterface_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qdesignerresourcebrowserinterface_resizeevent_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qdesignerresourcebrowserinterface_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qdesignerresourcebrowserinterface_closeevent_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qdesignerresourcebrowserinterface_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qdesignerresourcebrowserinterface_contextmenuevent_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qdesignerresourcebrowserinterface_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qdesignerresourcebrowserinterface_tabletevent_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qdesignerresourcebrowserinterface_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qdesignerresourcebrowserinterface_actionevent_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qdesignerresourcebrowserinterface_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qdesignerresourcebrowserinterface_dragenterevent_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qdesignerresourcebrowserinterface_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qdesignerresourcebrowserinterface_dragmoveevent_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qdesignerresourcebrowserinterface_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qdesignerresourcebrowserinterface_dragleaveevent_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qdesignerresourcebrowserinterface_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qdesignerresourcebrowserinterface_dropevent_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qdesignerresourcebrowserinterface_showevent_callback) {
            QShowEvent* cbval1 = event;
            qdesignerresourcebrowserinterface_showevent_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qdesignerresourcebrowserinterface_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qdesignerresourcebrowserinterface_hideevent_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qdesignerresourcebrowserinterface_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qdesignerresourcebrowserinterface_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QDesignerResourceBrowserInterface::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qdesignerresourcebrowserinterface_changeevent_callback) {
            QEvent* cbval1 = param1;
            qdesignerresourcebrowserinterface_changeevent_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qdesignerresourcebrowserinterface_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qdesignerresourcebrowserinterface_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDesignerResourceBrowserInterface::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qdesignerresourcebrowserinterface_initpainter_callback) {
            QPainter* cbval1 = painter;
            qdesignerresourcebrowserinterface_initpainter_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qdesignerresourcebrowserinterface_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qdesignerresourcebrowserinterface_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerResourceBrowserInterface::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qdesignerresourcebrowserinterface_sharedpainter_callback) {
            QPainter* callback_ret = qdesignerresourcebrowserinterface_sharedpainter_callback(this);
            return callback_ret;
        }
        return QDesignerResourceBrowserInterface::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qdesignerresourcebrowserinterface_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qdesignerresourcebrowserinterface_inputmethodevent_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qdesignerresourcebrowserinterface_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qdesignerresourcebrowserinterface_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDesignerResourceBrowserInterface::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qdesignerresourcebrowserinterface_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qdesignerresourcebrowserinterface_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerResourceBrowserInterface::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdesignerresourcebrowserinterface_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdesignerresourcebrowserinterface_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDesignerResourceBrowserInterface::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdesignerresourcebrowserinterface_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdesignerresourcebrowserinterface_timerevent_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdesignerresourcebrowserinterface_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdesignerresourcebrowserinterface_childevent_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdesignerresourcebrowserinterface_customevent_callback) {
            QEvent* cbval1 = event;
            qdesignerresourcebrowserinterface_customevent_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdesignerresourcebrowserinterface_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdesignerresourcebrowserinterface_connectnotify_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdesignerresourcebrowserinterface_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdesignerresourcebrowserinterface_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDesignerResourceBrowserInterface::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QDesignerResourceBrowserInterface_SuperEvent(QDesignerResourceBrowserInterface* self, QEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperMousePressEvent(QDesignerResourceBrowserInterface* self, QMouseEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperMouseReleaseEvent(QDesignerResourceBrowserInterface* self, QMouseEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperMouseDoubleClickEvent(QDesignerResourceBrowserInterface* self, QMouseEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperMouseMoveEvent(QDesignerResourceBrowserInterface* self, QMouseEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperWheelEvent(QDesignerResourceBrowserInterface* self, QWheelEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperKeyPressEvent(QDesignerResourceBrowserInterface* self, QKeyEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperKeyReleaseEvent(QDesignerResourceBrowserInterface* self, QKeyEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperFocusInEvent(QDesignerResourceBrowserInterface* self, QFocusEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperFocusOutEvent(QDesignerResourceBrowserInterface* self, QFocusEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperEnterEvent(QDesignerResourceBrowserInterface* self, QEnterEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperLeaveEvent(QDesignerResourceBrowserInterface* self, QEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperPaintEvent(QDesignerResourceBrowserInterface* self, QPaintEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperMoveEvent(QDesignerResourceBrowserInterface* self, QMoveEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperResizeEvent(QDesignerResourceBrowserInterface* self, QResizeEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperCloseEvent(QDesignerResourceBrowserInterface* self, QCloseEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperContextMenuEvent(QDesignerResourceBrowserInterface* self, QContextMenuEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperTabletEvent(QDesignerResourceBrowserInterface* self, QTabletEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperActionEvent(QDesignerResourceBrowserInterface* self, QActionEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperDragEnterEvent(QDesignerResourceBrowserInterface* self, QDragEnterEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperDragMoveEvent(QDesignerResourceBrowserInterface* self, QDragMoveEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperDragLeaveEvent(QDesignerResourceBrowserInterface* self, QDragLeaveEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperDropEvent(QDesignerResourceBrowserInterface* self, QDropEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperShowEvent(QDesignerResourceBrowserInterface* self, QShowEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperHideEvent(QDesignerResourceBrowserInterface* self, QHideEvent* event);
    friend bool QDesignerResourceBrowserInterface_SuperNativeEvent(QDesignerResourceBrowserInterface* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QDesignerResourceBrowserInterface_SuperChangeEvent(QDesignerResourceBrowserInterface* self, QEvent* param1);
    friend int QDesignerResourceBrowserInterface_SuperMetric(const QDesignerResourceBrowserInterface* self, int param1);
    friend void QDesignerResourceBrowserInterface_SuperInitPainter(const QDesignerResourceBrowserInterface* self, QPainter* painter);
    friend QPaintDevice* QDesignerResourceBrowserInterface_SuperRedirected(const QDesignerResourceBrowserInterface* self, QPoint* offset);
    friend QPainter* QDesignerResourceBrowserInterface_SuperSharedPainter(const QDesignerResourceBrowserInterface* self);
    friend void QDesignerResourceBrowserInterface_SuperInputMethodEvent(QDesignerResourceBrowserInterface* self, QInputMethodEvent* param1);
    friend bool QDesignerResourceBrowserInterface_SuperFocusNextPrevChild(QDesignerResourceBrowserInterface* self, bool next);
    friend void QDesignerResourceBrowserInterface_SuperTimerEvent(QDesignerResourceBrowserInterface* self, QTimerEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperChildEvent(QDesignerResourceBrowserInterface* self, QChildEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperCustomEvent(QDesignerResourceBrowserInterface* self, QEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperConnectNotify(QDesignerResourceBrowserInterface* self, const QMetaMethod* signal);
    friend void QDesignerResourceBrowserInterface_SuperDisconnectNotify(QDesignerResourceBrowserInterface* self, const QMetaMethod* signal);
};

#endif
