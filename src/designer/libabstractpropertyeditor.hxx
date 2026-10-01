#pragma once
#ifndef DESIGNER_LIBABSTRACTPROPERTYEDITOR_HXX
#define DESIGNER_LIBABSTRACTPROPERTYEDITOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerPropertyEditorInterface
class VirtualQDesignerPropertyEditorInterface : public QDesignerPropertyEditorInterface {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDesignerPropertyEditorInterface_MetaObject_Callback = QMetaObject* (*)(const QDesignerPropertyEditorInterface*);
    using QDesignerPropertyEditorInterface_Metacast_Callback = void* (*)(QDesignerPropertyEditorInterface*, const char*);
    using QDesignerPropertyEditorInterface_Metacall_Callback = int (*)(QDesignerPropertyEditorInterface*, int, int, void**);
    using QDesignerPropertyEditorInterface_Core_Callback = QDesignerFormEditorInterface* (*)(const QDesignerPropertyEditorInterface*);
    using QDesignerPropertyEditorInterface_IsReadOnly_Callback = bool (*)(const QDesignerPropertyEditorInterface*);
    using QDesignerPropertyEditorInterface_Object_Callback = QObject* (*)(const QDesignerPropertyEditorInterface*);
    using QDesignerPropertyEditorInterface_CurrentPropertyName_Callback = const char* (*)(const QDesignerPropertyEditorInterface*);
    using QDesignerPropertyEditorInterface_SetObject_Callback = void (*)(QDesignerPropertyEditorInterface*, QObject*);
    using QDesignerPropertyEditorInterface_SetPropertyValue_Callback = void (*)(QDesignerPropertyEditorInterface*, const char*, QVariant*, bool);
    using QDesignerPropertyEditorInterface_SetReadOnly_Callback = void (*)(QDesignerPropertyEditorInterface*, bool);
    using QDesignerPropertyEditorInterface_DevType_Callback = int (*)(const QDesignerPropertyEditorInterface*);
    using QDesignerPropertyEditorInterface_SetVisible_Callback = void (*)(QDesignerPropertyEditorInterface*, bool);
    using QDesignerPropertyEditorInterface_SizeHint_Callback = QSize* (*)(const QDesignerPropertyEditorInterface*);
    using QDesignerPropertyEditorInterface_MinimumSizeHint_Callback = QSize* (*)(const QDesignerPropertyEditorInterface*);
    using QDesignerPropertyEditorInterface_HeightForWidth_Callback = int (*)(const QDesignerPropertyEditorInterface*, int);
    using QDesignerPropertyEditorInterface_HasHeightForWidth_Callback = bool (*)(const QDesignerPropertyEditorInterface*);
    using QDesignerPropertyEditorInterface_PaintEngine_Callback = QPaintEngine* (*)(const QDesignerPropertyEditorInterface*);
    using QDesignerPropertyEditorInterface_Event_Callback = bool (*)(QDesignerPropertyEditorInterface*, QEvent*);
    using QDesignerPropertyEditorInterface_MousePressEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QMouseEvent*);
    using QDesignerPropertyEditorInterface_MouseReleaseEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QMouseEvent*);
    using QDesignerPropertyEditorInterface_MouseDoubleClickEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QMouseEvent*);
    using QDesignerPropertyEditorInterface_MouseMoveEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QMouseEvent*);
    using QDesignerPropertyEditorInterface_WheelEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QWheelEvent*);
    using QDesignerPropertyEditorInterface_KeyPressEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QKeyEvent*);
    using QDesignerPropertyEditorInterface_KeyReleaseEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QKeyEvent*);
    using QDesignerPropertyEditorInterface_FocusInEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QFocusEvent*);
    using QDesignerPropertyEditorInterface_FocusOutEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QFocusEvent*);
    using QDesignerPropertyEditorInterface_EnterEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QEnterEvent*);
    using QDesignerPropertyEditorInterface_LeaveEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QEvent*);
    using QDesignerPropertyEditorInterface_PaintEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QPaintEvent*);
    using QDesignerPropertyEditorInterface_MoveEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QMoveEvent*);
    using QDesignerPropertyEditorInterface_ResizeEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QResizeEvent*);
    using QDesignerPropertyEditorInterface_CloseEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QCloseEvent*);
    using QDesignerPropertyEditorInterface_ContextMenuEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QContextMenuEvent*);
    using QDesignerPropertyEditorInterface_TabletEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QTabletEvent*);
    using QDesignerPropertyEditorInterface_ActionEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QActionEvent*);
    using QDesignerPropertyEditorInterface_DragEnterEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QDragEnterEvent*);
    using QDesignerPropertyEditorInterface_DragMoveEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QDragMoveEvent*);
    using QDesignerPropertyEditorInterface_DragLeaveEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QDragLeaveEvent*);
    using QDesignerPropertyEditorInterface_DropEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QDropEvent*);
    using QDesignerPropertyEditorInterface_ShowEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QShowEvent*);
    using QDesignerPropertyEditorInterface_HideEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QHideEvent*);
    using QDesignerPropertyEditorInterface_NativeEvent_Callback = bool (*)(QDesignerPropertyEditorInterface*, libqt_string, void*, intptr_t*);
    using QDesignerPropertyEditorInterface_ChangeEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QEvent*);
    using QDesignerPropertyEditorInterface_Metric_Callback = int (*)(const QDesignerPropertyEditorInterface*, int);
    using QDesignerPropertyEditorInterface_InitPainter_Callback = void (*)(const QDesignerPropertyEditorInterface*, QPainter*);
    using QDesignerPropertyEditorInterface_Redirected_Callback = QPaintDevice* (*)(const QDesignerPropertyEditorInterface*, QPoint*);
    using QDesignerPropertyEditorInterface_SharedPainter_Callback = QPainter* (*)(const QDesignerPropertyEditorInterface*);
    using QDesignerPropertyEditorInterface_InputMethodEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QInputMethodEvent*);
    using QDesignerPropertyEditorInterface_InputMethodQuery_Callback = QVariant* (*)(const QDesignerPropertyEditorInterface*, int);
    using QDesignerPropertyEditorInterface_FocusNextPrevChild_Callback = bool (*)(QDesignerPropertyEditorInterface*, bool);
    using QDesignerPropertyEditorInterface_EventFilter_Callback = bool (*)(QDesignerPropertyEditorInterface*, QObject*, QEvent*);
    using QDesignerPropertyEditorInterface_TimerEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QTimerEvent*);
    using QDesignerPropertyEditorInterface_ChildEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QChildEvent*);
    using QDesignerPropertyEditorInterface_CustomEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QEvent*);
    using QDesignerPropertyEditorInterface_ConnectNotify_Callback = void (*)(QDesignerPropertyEditorInterface*, QMetaMethod*);
    using QDesignerPropertyEditorInterface_DisconnectNotify_Callback = void (*)(QDesignerPropertyEditorInterface*, QMetaMethod*);
    using QDesignerPropertyEditorInterface::create;
    using QDesignerPropertyEditorInterface::destroy;
    using QDesignerPropertyEditorInterface::focusNextChild;
    using QDesignerPropertyEditorInterface::focusPreviousChild;
    using QDesignerPropertyEditorInterface::getDecodedMetricF;
    using QDesignerPropertyEditorInterface::isSignalConnected;
    using QDesignerPropertyEditorInterface::receivers;
    using QDesignerPropertyEditorInterface::sender;
    using QDesignerPropertyEditorInterface::senderSignalIndex;
    using QDesignerPropertyEditorInterface::updateMicroFocus;

    // Instance callback storage
    QDesignerPropertyEditorInterface_MetaObject_Callback qdesignerpropertyeditorinterface_metaobject_callback = nullptr;
    QDesignerPropertyEditorInterface_Metacast_Callback qdesignerpropertyeditorinterface_metacast_callback = nullptr;
    QDesignerPropertyEditorInterface_Metacall_Callback qdesignerpropertyeditorinterface_metacall_callback = nullptr;
    QDesignerPropertyEditorInterface_Core_Callback qdesignerpropertyeditorinterface_core_callback = nullptr;
    QDesignerPropertyEditorInterface_IsReadOnly_Callback qdesignerpropertyeditorinterface_isreadonly_callback = nullptr;
    QDesignerPropertyEditorInterface_Object_Callback qdesignerpropertyeditorinterface_object_callback = nullptr;
    QDesignerPropertyEditorInterface_CurrentPropertyName_Callback qdesignerpropertyeditorinterface_currentpropertyname_callback = nullptr;
    QDesignerPropertyEditorInterface_SetObject_Callback qdesignerpropertyeditorinterface_setobject_callback = nullptr;
    QDesignerPropertyEditorInterface_SetPropertyValue_Callback qdesignerpropertyeditorinterface_setpropertyvalue_callback = nullptr;
    QDesignerPropertyEditorInterface_SetReadOnly_Callback qdesignerpropertyeditorinterface_setreadonly_callback = nullptr;
    QDesignerPropertyEditorInterface_DevType_Callback qdesignerpropertyeditorinterface_devtype_callback = nullptr;
    QDesignerPropertyEditorInterface_SetVisible_Callback qdesignerpropertyeditorinterface_setvisible_callback = nullptr;
    QDesignerPropertyEditorInterface_SizeHint_Callback qdesignerpropertyeditorinterface_sizehint_callback = nullptr;
    QDesignerPropertyEditorInterface_MinimumSizeHint_Callback qdesignerpropertyeditorinterface_minimumsizehint_callback = nullptr;
    QDesignerPropertyEditorInterface_HeightForWidth_Callback qdesignerpropertyeditorinterface_heightforwidth_callback = nullptr;
    QDesignerPropertyEditorInterface_HasHeightForWidth_Callback qdesignerpropertyeditorinterface_hasheightforwidth_callback = nullptr;
    QDesignerPropertyEditorInterface_PaintEngine_Callback qdesignerpropertyeditorinterface_paintengine_callback = nullptr;
    QDesignerPropertyEditorInterface_Event_Callback qdesignerpropertyeditorinterface_event_callback = nullptr;
    QDesignerPropertyEditorInterface_MousePressEvent_Callback qdesignerpropertyeditorinterface_mousepressevent_callback = nullptr;
    QDesignerPropertyEditorInterface_MouseReleaseEvent_Callback qdesignerpropertyeditorinterface_mousereleaseevent_callback = nullptr;
    QDesignerPropertyEditorInterface_MouseDoubleClickEvent_Callback qdesignerpropertyeditorinterface_mousedoubleclickevent_callback = nullptr;
    QDesignerPropertyEditorInterface_MouseMoveEvent_Callback qdesignerpropertyeditorinterface_mousemoveevent_callback = nullptr;
    QDesignerPropertyEditorInterface_WheelEvent_Callback qdesignerpropertyeditorinterface_wheelevent_callback = nullptr;
    QDesignerPropertyEditorInterface_KeyPressEvent_Callback qdesignerpropertyeditorinterface_keypressevent_callback = nullptr;
    QDesignerPropertyEditorInterface_KeyReleaseEvent_Callback qdesignerpropertyeditorinterface_keyreleaseevent_callback = nullptr;
    QDesignerPropertyEditorInterface_FocusInEvent_Callback qdesignerpropertyeditorinterface_focusinevent_callback = nullptr;
    QDesignerPropertyEditorInterface_FocusOutEvent_Callback qdesignerpropertyeditorinterface_focusoutevent_callback = nullptr;
    QDesignerPropertyEditorInterface_EnterEvent_Callback qdesignerpropertyeditorinterface_enterevent_callback = nullptr;
    QDesignerPropertyEditorInterface_LeaveEvent_Callback qdesignerpropertyeditorinterface_leaveevent_callback = nullptr;
    QDesignerPropertyEditorInterface_PaintEvent_Callback qdesignerpropertyeditorinterface_paintevent_callback = nullptr;
    QDesignerPropertyEditorInterface_MoveEvent_Callback qdesignerpropertyeditorinterface_moveevent_callback = nullptr;
    QDesignerPropertyEditorInterface_ResizeEvent_Callback qdesignerpropertyeditorinterface_resizeevent_callback = nullptr;
    QDesignerPropertyEditorInterface_CloseEvent_Callback qdesignerpropertyeditorinterface_closeevent_callback = nullptr;
    QDesignerPropertyEditorInterface_ContextMenuEvent_Callback qdesignerpropertyeditorinterface_contextmenuevent_callback = nullptr;
    QDesignerPropertyEditorInterface_TabletEvent_Callback qdesignerpropertyeditorinterface_tabletevent_callback = nullptr;
    QDesignerPropertyEditorInterface_ActionEvent_Callback qdesignerpropertyeditorinterface_actionevent_callback = nullptr;
    QDesignerPropertyEditorInterface_DragEnterEvent_Callback qdesignerpropertyeditorinterface_dragenterevent_callback = nullptr;
    QDesignerPropertyEditorInterface_DragMoveEvent_Callback qdesignerpropertyeditorinterface_dragmoveevent_callback = nullptr;
    QDesignerPropertyEditorInterface_DragLeaveEvent_Callback qdesignerpropertyeditorinterface_dragleaveevent_callback = nullptr;
    QDesignerPropertyEditorInterface_DropEvent_Callback qdesignerpropertyeditorinterface_dropevent_callback = nullptr;
    QDesignerPropertyEditorInterface_ShowEvent_Callback qdesignerpropertyeditorinterface_showevent_callback = nullptr;
    QDesignerPropertyEditorInterface_HideEvent_Callback qdesignerpropertyeditorinterface_hideevent_callback = nullptr;
    QDesignerPropertyEditorInterface_NativeEvent_Callback qdesignerpropertyeditorinterface_nativeevent_callback = nullptr;
    QDesignerPropertyEditorInterface_ChangeEvent_Callback qdesignerpropertyeditorinterface_changeevent_callback = nullptr;
    QDesignerPropertyEditorInterface_Metric_Callback qdesignerpropertyeditorinterface_metric_callback = nullptr;
    QDesignerPropertyEditorInterface_InitPainter_Callback qdesignerpropertyeditorinterface_initpainter_callback = nullptr;
    QDesignerPropertyEditorInterface_Redirected_Callback qdesignerpropertyeditorinterface_redirected_callback = nullptr;
    QDesignerPropertyEditorInterface_SharedPainter_Callback qdesignerpropertyeditorinterface_sharedpainter_callback = nullptr;
    QDesignerPropertyEditorInterface_InputMethodEvent_Callback qdesignerpropertyeditorinterface_inputmethodevent_callback = nullptr;
    QDesignerPropertyEditorInterface_InputMethodQuery_Callback qdesignerpropertyeditorinterface_inputmethodquery_callback = nullptr;
    QDesignerPropertyEditorInterface_FocusNextPrevChild_Callback qdesignerpropertyeditorinterface_focusnextprevchild_callback = nullptr;
    QDesignerPropertyEditorInterface_EventFilter_Callback qdesignerpropertyeditorinterface_eventfilter_callback = nullptr;
    QDesignerPropertyEditorInterface_TimerEvent_Callback qdesignerpropertyeditorinterface_timerevent_callback = nullptr;
    QDesignerPropertyEditorInterface_ChildEvent_Callback qdesignerpropertyeditorinterface_childevent_callback = nullptr;
    QDesignerPropertyEditorInterface_CustomEvent_Callback qdesignerpropertyeditorinterface_customevent_callback = nullptr;
    QDesignerPropertyEditorInterface_ConnectNotify_Callback qdesignerpropertyeditorinterface_connectnotify_callback = nullptr;
    QDesignerPropertyEditorInterface_DisconnectNotify_Callback qdesignerpropertyeditorinterface_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QDesignerPropertyEditorInterface {
        using QDesignerPropertyEditorInterface::actionEvent;
        using QDesignerPropertyEditorInterface::changeEvent;
        using QDesignerPropertyEditorInterface::childEvent;
        using QDesignerPropertyEditorInterface::closeEvent;
        using QDesignerPropertyEditorInterface::connectNotify;
        using QDesignerPropertyEditorInterface::contextMenuEvent;
        using QDesignerPropertyEditorInterface::customEvent;
        using QDesignerPropertyEditorInterface::disconnectNotify;
        using QDesignerPropertyEditorInterface::dragEnterEvent;
        using QDesignerPropertyEditorInterface::dragLeaveEvent;
        using QDesignerPropertyEditorInterface::dragMoveEvent;
        using QDesignerPropertyEditorInterface::dropEvent;
        using QDesignerPropertyEditorInterface::enterEvent;
        using QDesignerPropertyEditorInterface::event;
        using QDesignerPropertyEditorInterface::focusInEvent;
        using QDesignerPropertyEditorInterface::focusNextPrevChild;
        using QDesignerPropertyEditorInterface::focusOutEvent;
        using QDesignerPropertyEditorInterface::hideEvent;
        using QDesignerPropertyEditorInterface::initPainter;
        using QDesignerPropertyEditorInterface::inputMethodEvent;
        using QDesignerPropertyEditorInterface::keyPressEvent;
        using QDesignerPropertyEditorInterface::keyReleaseEvent;
        using QDesignerPropertyEditorInterface::leaveEvent;
        using QDesignerPropertyEditorInterface::metric;
        using QDesignerPropertyEditorInterface::mouseDoubleClickEvent;
        using QDesignerPropertyEditorInterface::mouseMoveEvent;
        using QDesignerPropertyEditorInterface::mousePressEvent;
        using QDesignerPropertyEditorInterface::mouseReleaseEvent;
        using QDesignerPropertyEditorInterface::moveEvent;
        using QDesignerPropertyEditorInterface::nativeEvent;
        using QDesignerPropertyEditorInterface::paintEvent;
        using QDesignerPropertyEditorInterface::redirected;
        using QDesignerPropertyEditorInterface::resizeEvent;
        using QDesignerPropertyEditorInterface::sharedPainter;
        using QDesignerPropertyEditorInterface::showEvent;
        using QDesignerPropertyEditorInterface::tabletEvent;
        using QDesignerPropertyEditorInterface::timerEvent;
        using QDesignerPropertyEditorInterface::wheelEvent;
    };

    VirtualQDesignerPropertyEditorInterface(QWidget* parent) : QDesignerPropertyEditorInterface(parent) {};
    VirtualQDesignerPropertyEditorInterface(QWidget* parent, Qt::WindowFlags flags) : QDesignerPropertyEditorInterface(parent, flags) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdesignerpropertyeditorinterface_metaobject_callback) {
            QMetaObject* callback_ret = qdesignerpropertyeditorinterface_metaobject_callback(this);
            return callback_ret;
        }
        return QDesignerPropertyEditorInterface::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdesignerpropertyeditorinterface_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdesignerpropertyeditorinterface_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerPropertyEditorInterface::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdesignerpropertyeditorinterface_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdesignerpropertyeditorinterface_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDesignerPropertyEditorInterface::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormEditorInterface* core() const override {
        if (qdesignerpropertyeditorinterface_core_callback) {
            QDesignerFormEditorInterface* callback_ret = qdesignerpropertyeditorinterface_core_callback(this);
            return callback_ret;
        }
        return QDesignerPropertyEditorInterface::core();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isReadOnly() const override {
        if (qdesignerpropertyeditorinterface_isreadonly_callback) {
            bool callback_ret = qdesignerpropertyeditorinterface_isreadonly_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerPropertyEditorInterface::isReadOnly called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* object() const override {
        if (qdesignerpropertyeditorinterface_object_callback) {
            QObject* callback_ret = qdesignerpropertyeditorinterface_object_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerPropertyEditorInterface::object called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QString currentPropertyName() const override {
        if (qdesignerpropertyeditorinterface_currentpropertyname_callback) {
            const char* callback_ret = qdesignerpropertyeditorinterface_currentpropertyname_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerPropertyEditorInterface::currentPropertyName called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setObject(QObject* object) override {
        if (qdesignerpropertyeditorinterface_setobject_callback) {
            QObject* cbval1 = object;
            qdesignerpropertyeditorinterface_setobject_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerPropertyEditorInterface::setObject called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPropertyValue(const QString& name, const QVariant& value, bool changed) override {
        if (qdesignerpropertyeditorinterface_setpropertyvalue_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            bool cbval3 = changed;
            qdesignerpropertyeditorinterface_setpropertyvalue_callback(this, cbval1, cbval2, cbval3);
            libqt_free(name_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerPropertyEditorInterface::setPropertyValue called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReadOnly(bool readOnly) override {
        if (qdesignerpropertyeditorinterface_setreadonly_callback) {
            bool cbval1 = readOnly;
            qdesignerpropertyeditorinterface_setreadonly_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerPropertyEditorInterface::setReadOnly called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qdesignerpropertyeditorinterface_devtype_callback) {
            int callback_ret = qdesignerpropertyeditorinterface_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QDesignerPropertyEditorInterface::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qdesignerpropertyeditorinterface_setvisible_callback) {
            bool cbval1 = visible;
            qdesignerpropertyeditorinterface_setvisible_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qdesignerpropertyeditorinterface_sizehint_callback) {
            QSize* callback_ret = qdesignerpropertyeditorinterface_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDesignerPropertyEditorInterface::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qdesignerpropertyeditorinterface_minimumsizehint_callback) {
            QSize* callback_ret = qdesignerpropertyeditorinterface_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDesignerPropertyEditorInterface::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qdesignerpropertyeditorinterface_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qdesignerpropertyeditorinterface_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDesignerPropertyEditorInterface::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qdesignerpropertyeditorinterface_hasheightforwidth_callback) {
            bool callback_ret = qdesignerpropertyeditorinterface_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QDesignerPropertyEditorInterface::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qdesignerpropertyeditorinterface_paintengine_callback) {
            QPaintEngine* callback_ret = qdesignerpropertyeditorinterface_paintengine_callback(this);
            return callback_ret;
        }
        return QDesignerPropertyEditorInterface::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdesignerpropertyeditorinterface_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdesignerpropertyeditorinterface_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerPropertyEditorInterface::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qdesignerpropertyeditorinterface_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qdesignerpropertyeditorinterface_mousepressevent_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qdesignerpropertyeditorinterface_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qdesignerpropertyeditorinterface_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qdesignerpropertyeditorinterface_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qdesignerpropertyeditorinterface_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qdesignerpropertyeditorinterface_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qdesignerpropertyeditorinterface_mousemoveevent_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qdesignerpropertyeditorinterface_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qdesignerpropertyeditorinterface_wheelevent_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qdesignerpropertyeditorinterface_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qdesignerpropertyeditorinterface_keypressevent_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qdesignerpropertyeditorinterface_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qdesignerpropertyeditorinterface_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qdesignerpropertyeditorinterface_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qdesignerpropertyeditorinterface_focusinevent_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qdesignerpropertyeditorinterface_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qdesignerpropertyeditorinterface_focusoutevent_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qdesignerpropertyeditorinterface_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qdesignerpropertyeditorinterface_enterevent_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qdesignerpropertyeditorinterface_leaveevent_callback) {
            QEvent* cbval1 = event;
            qdesignerpropertyeditorinterface_leaveevent_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qdesignerpropertyeditorinterface_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qdesignerpropertyeditorinterface_paintevent_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qdesignerpropertyeditorinterface_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qdesignerpropertyeditorinterface_moveevent_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qdesignerpropertyeditorinterface_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qdesignerpropertyeditorinterface_resizeevent_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qdesignerpropertyeditorinterface_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qdesignerpropertyeditorinterface_closeevent_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qdesignerpropertyeditorinterface_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qdesignerpropertyeditorinterface_contextmenuevent_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qdesignerpropertyeditorinterface_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qdesignerpropertyeditorinterface_tabletevent_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qdesignerpropertyeditorinterface_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qdesignerpropertyeditorinterface_actionevent_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qdesignerpropertyeditorinterface_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qdesignerpropertyeditorinterface_dragenterevent_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qdesignerpropertyeditorinterface_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qdesignerpropertyeditorinterface_dragmoveevent_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qdesignerpropertyeditorinterface_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qdesignerpropertyeditorinterface_dragleaveevent_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qdesignerpropertyeditorinterface_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qdesignerpropertyeditorinterface_dropevent_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qdesignerpropertyeditorinterface_showevent_callback) {
            QShowEvent* cbval1 = event;
            qdesignerpropertyeditorinterface_showevent_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qdesignerpropertyeditorinterface_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qdesignerpropertyeditorinterface_hideevent_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qdesignerpropertyeditorinterface_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qdesignerpropertyeditorinterface_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QDesignerPropertyEditorInterface::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qdesignerpropertyeditorinterface_changeevent_callback) {
            QEvent* cbval1 = param1;
            qdesignerpropertyeditorinterface_changeevent_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qdesignerpropertyeditorinterface_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qdesignerpropertyeditorinterface_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDesignerPropertyEditorInterface::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qdesignerpropertyeditorinterface_initpainter_callback) {
            QPainter* cbval1 = painter;
            qdesignerpropertyeditorinterface_initpainter_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qdesignerpropertyeditorinterface_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qdesignerpropertyeditorinterface_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerPropertyEditorInterface::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qdesignerpropertyeditorinterface_sharedpainter_callback) {
            QPainter* callback_ret = qdesignerpropertyeditorinterface_sharedpainter_callback(this);
            return callback_ret;
        }
        return QDesignerPropertyEditorInterface::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qdesignerpropertyeditorinterface_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qdesignerpropertyeditorinterface_inputmethodevent_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qdesignerpropertyeditorinterface_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qdesignerpropertyeditorinterface_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDesignerPropertyEditorInterface::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qdesignerpropertyeditorinterface_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qdesignerpropertyeditorinterface_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerPropertyEditorInterface::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdesignerpropertyeditorinterface_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdesignerpropertyeditorinterface_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDesignerPropertyEditorInterface::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdesignerpropertyeditorinterface_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdesignerpropertyeditorinterface_timerevent_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdesignerpropertyeditorinterface_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdesignerpropertyeditorinterface_childevent_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdesignerpropertyeditorinterface_customevent_callback) {
            QEvent* cbval1 = event;
            qdesignerpropertyeditorinterface_customevent_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdesignerpropertyeditorinterface_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdesignerpropertyeditorinterface_connectnotify_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdesignerpropertyeditorinterface_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdesignerpropertyeditorinterface_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QDesignerPropertyEditorInterface_SuperEvent(QDesignerPropertyEditorInterface* self, QEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperMousePressEvent(QDesignerPropertyEditorInterface* self, QMouseEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperMouseReleaseEvent(QDesignerPropertyEditorInterface* self, QMouseEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperMouseDoubleClickEvent(QDesignerPropertyEditorInterface* self, QMouseEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperMouseMoveEvent(QDesignerPropertyEditorInterface* self, QMouseEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperWheelEvent(QDesignerPropertyEditorInterface* self, QWheelEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperKeyPressEvent(QDesignerPropertyEditorInterface* self, QKeyEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperKeyReleaseEvent(QDesignerPropertyEditorInterface* self, QKeyEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperFocusInEvent(QDesignerPropertyEditorInterface* self, QFocusEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperFocusOutEvent(QDesignerPropertyEditorInterface* self, QFocusEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperEnterEvent(QDesignerPropertyEditorInterface* self, QEnterEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperLeaveEvent(QDesignerPropertyEditorInterface* self, QEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperPaintEvent(QDesignerPropertyEditorInterface* self, QPaintEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperMoveEvent(QDesignerPropertyEditorInterface* self, QMoveEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperResizeEvent(QDesignerPropertyEditorInterface* self, QResizeEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperCloseEvent(QDesignerPropertyEditorInterface* self, QCloseEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperContextMenuEvent(QDesignerPropertyEditorInterface* self, QContextMenuEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperTabletEvent(QDesignerPropertyEditorInterface* self, QTabletEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperActionEvent(QDesignerPropertyEditorInterface* self, QActionEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperDragEnterEvent(QDesignerPropertyEditorInterface* self, QDragEnterEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperDragMoveEvent(QDesignerPropertyEditorInterface* self, QDragMoveEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperDragLeaveEvent(QDesignerPropertyEditorInterface* self, QDragLeaveEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperDropEvent(QDesignerPropertyEditorInterface* self, QDropEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperShowEvent(QDesignerPropertyEditorInterface* self, QShowEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperHideEvent(QDesignerPropertyEditorInterface* self, QHideEvent* event);
    friend bool QDesignerPropertyEditorInterface_SuperNativeEvent(QDesignerPropertyEditorInterface* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QDesignerPropertyEditorInterface_SuperChangeEvent(QDesignerPropertyEditorInterface* self, QEvent* param1);
    friend int QDesignerPropertyEditorInterface_SuperMetric(const QDesignerPropertyEditorInterface* self, int param1);
    friend void QDesignerPropertyEditorInterface_SuperInitPainter(const QDesignerPropertyEditorInterface* self, QPainter* painter);
    friend QPaintDevice* QDesignerPropertyEditorInterface_SuperRedirected(const QDesignerPropertyEditorInterface* self, QPoint* offset);
    friend QPainter* QDesignerPropertyEditorInterface_SuperSharedPainter(const QDesignerPropertyEditorInterface* self);
    friend void QDesignerPropertyEditorInterface_SuperInputMethodEvent(QDesignerPropertyEditorInterface* self, QInputMethodEvent* param1);
    friend bool QDesignerPropertyEditorInterface_SuperFocusNextPrevChild(QDesignerPropertyEditorInterface* self, bool next);
    friend void QDesignerPropertyEditorInterface_SuperTimerEvent(QDesignerPropertyEditorInterface* self, QTimerEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperChildEvent(QDesignerPropertyEditorInterface* self, QChildEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperCustomEvent(QDesignerPropertyEditorInterface* self, QEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperConnectNotify(QDesignerPropertyEditorInterface* self, const QMetaMethod* signal);
    friend void QDesignerPropertyEditorInterface_SuperDisconnectNotify(QDesignerPropertyEditorInterface* self, const QMetaMethod* signal);
};

#endif
