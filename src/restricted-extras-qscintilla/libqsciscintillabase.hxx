#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCISCINTILLABASE_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCISCINTILLABASE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciScintillaBase
class VirtualQsciScintillaBase final : public QsciScintillaBase {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciScintillaBase_MetaObject_Callback = QMetaObject* (*)(const QsciScintillaBase*);
    using QsciScintillaBase_Metacast_Callback = void* (*)(QsciScintillaBase*, const char*);
    using QsciScintillaBase_Metacall_Callback = int (*)(QsciScintillaBase*, int, int, void**);
    using QsciScintillaBase_CanInsertFromMimeData_Callback = bool (*)(const QsciScintillaBase*, QMimeData*);
    using QsciScintillaBase_FromMimeData_Callback = libqt_string (*)(const QsciScintillaBase*, QMimeData*, bool*);
    using QsciScintillaBase_ToMimeData_Callback = QMimeData* (*)(const QsciScintillaBase*, libqt_string, bool);
    using QsciScintillaBase_ChangeEvent_Callback = void (*)(QsciScintillaBase*, QEvent*);
    using QsciScintillaBase_ContextMenuEvent_Callback = void (*)(QsciScintillaBase*, QContextMenuEvent*);
    using QsciScintillaBase_DragEnterEvent_Callback = void (*)(QsciScintillaBase*, QDragEnterEvent*);
    using QsciScintillaBase_DragLeaveEvent_Callback = void (*)(QsciScintillaBase*, QDragLeaveEvent*);
    using QsciScintillaBase_DragMoveEvent_Callback = void (*)(QsciScintillaBase*, QDragMoveEvent*);
    using QsciScintillaBase_DropEvent_Callback = void (*)(QsciScintillaBase*, QDropEvent*);
    using QsciScintillaBase_FocusInEvent_Callback = void (*)(QsciScintillaBase*, QFocusEvent*);
    using QsciScintillaBase_FocusOutEvent_Callback = void (*)(QsciScintillaBase*, QFocusEvent*);
    using QsciScintillaBase_FocusNextPrevChild_Callback = bool (*)(QsciScintillaBase*, bool);
    using QsciScintillaBase_KeyPressEvent_Callback = void (*)(QsciScintillaBase*, QKeyEvent*);
    using QsciScintillaBase_InputMethodEvent_Callback = void (*)(QsciScintillaBase*, QInputMethodEvent*);
    using QsciScintillaBase_InputMethodQuery_Callback = QVariant* (*)(const QsciScintillaBase*, int);
    using QsciScintillaBase_MouseDoubleClickEvent_Callback = void (*)(QsciScintillaBase*, QMouseEvent*);
    using QsciScintillaBase_MouseMoveEvent_Callback = void (*)(QsciScintillaBase*, QMouseEvent*);
    using QsciScintillaBase_MousePressEvent_Callback = void (*)(QsciScintillaBase*, QMouseEvent*);
    using QsciScintillaBase_MouseReleaseEvent_Callback = void (*)(QsciScintillaBase*, QMouseEvent*);
    using QsciScintillaBase_PaintEvent_Callback = void (*)(QsciScintillaBase*, QPaintEvent*);
    using QsciScintillaBase_ResizeEvent_Callback = void (*)(QsciScintillaBase*, QResizeEvent*);
    using QsciScintillaBase_ScrollContentsBy_Callback = void (*)(QsciScintillaBase*, int, int);
    using QsciScintillaBase_MinimumSizeHint_Callback = QSize* (*)(const QsciScintillaBase*);
    using QsciScintillaBase_SizeHint_Callback = QSize* (*)(const QsciScintillaBase*);
    using QsciScintillaBase_SetupViewport_Callback = void (*)(QsciScintillaBase*, QWidget*);
    using QsciScintillaBase_EventFilter_Callback = bool (*)(QsciScintillaBase*, QObject*, QEvent*);
    using QsciScintillaBase_Event_Callback = bool (*)(QsciScintillaBase*, QEvent*);
    using QsciScintillaBase_ViewportEvent_Callback = bool (*)(QsciScintillaBase*, QEvent*);
    using QsciScintillaBase_WheelEvent_Callback = void (*)(QsciScintillaBase*, QWheelEvent*);
    using QsciScintillaBase_ViewportSizeHint_Callback = QSize* (*)(const QsciScintillaBase*);
    using QsciScintillaBase_InitStyleOption_Callback = void (*)(const QsciScintillaBase*, QStyleOptionFrame*);
    using QsciScintillaBase_DevType_Callback = int (*)(const QsciScintillaBase*);
    using QsciScintillaBase_SetVisible_Callback = void (*)(QsciScintillaBase*, bool);
    using QsciScintillaBase_HeightForWidth_Callback = int (*)(const QsciScintillaBase*, int);
    using QsciScintillaBase_HasHeightForWidth_Callback = bool (*)(const QsciScintillaBase*);
    using QsciScintillaBase_PaintEngine_Callback = QPaintEngine* (*)(const QsciScintillaBase*);
    using QsciScintillaBase_KeyReleaseEvent_Callback = void (*)(QsciScintillaBase*, QKeyEvent*);
    using QsciScintillaBase_EnterEvent_Callback = void (*)(QsciScintillaBase*, QEnterEvent*);
    using QsciScintillaBase_LeaveEvent_Callback = void (*)(QsciScintillaBase*, QEvent*);
    using QsciScintillaBase_MoveEvent_Callback = void (*)(QsciScintillaBase*, QMoveEvent*);
    using QsciScintillaBase_CloseEvent_Callback = void (*)(QsciScintillaBase*, QCloseEvent*);
    using QsciScintillaBase_TabletEvent_Callback = void (*)(QsciScintillaBase*, QTabletEvent*);
    using QsciScintillaBase_ActionEvent_Callback = void (*)(QsciScintillaBase*, QActionEvent*);
    using QsciScintillaBase_ShowEvent_Callback = void (*)(QsciScintillaBase*, QShowEvent*);
    using QsciScintillaBase_HideEvent_Callback = void (*)(QsciScintillaBase*, QHideEvent*);
    using QsciScintillaBase_NativeEvent_Callback = bool (*)(QsciScintillaBase*, libqt_string, void*, intptr_t*);
    using QsciScintillaBase_Metric_Callback = int (*)(const QsciScintillaBase*, int);
    using QsciScintillaBase_InitPainter_Callback = void (*)(const QsciScintillaBase*, QPainter*);
    using QsciScintillaBase_Redirected_Callback = QPaintDevice* (*)(const QsciScintillaBase*, QPoint*);
    using QsciScintillaBase_SharedPainter_Callback = QPainter* (*)(const QsciScintillaBase*);
    using QsciScintillaBase_TimerEvent_Callback = void (*)(QsciScintillaBase*, QTimerEvent*);
    using QsciScintillaBase_ChildEvent_Callback = void (*)(QsciScintillaBase*, QChildEvent*);
    using QsciScintillaBase_CustomEvent_Callback = void (*)(QsciScintillaBase*, QEvent*);
    using QsciScintillaBase_ConnectNotify_Callback = void (*)(QsciScintillaBase*, QMetaMethod*);
    using QsciScintillaBase_DisconnectNotify_Callback = void (*)(QsciScintillaBase*, QMetaMethod*);
    using QsciScintillaBase::bytesAsText;
    using QsciScintillaBase::contextMenuNeeded;
    using QsciScintillaBase::create;
    using QsciScintillaBase::destroy;
    using QsciScintillaBase::drawFrame;
    using QsciScintillaBase::focusNextChild;
    using QsciScintillaBase::focusPreviousChild;
    using QsciScintillaBase::getDecodedMetricF;
    using QsciScintillaBase::isSignalConnected;
    using QsciScintillaBase::receivers;
    using QsciScintillaBase::sender;
    using QsciScintillaBase::senderSignalIndex;
    using QsciScintillaBase::setScrollBars;
    using QsciScintillaBase::setViewportMargins;
    using QsciScintillaBase::textAsBytes;
    using QsciScintillaBase::updateMicroFocus;
    using QsciScintillaBase::viewportMargins;

    // Instance callback storage
    QsciScintillaBase_MetaObject_Callback qsciscintillabase_metaobject_callback = nullptr;
    QsciScintillaBase_Metacast_Callback qsciscintillabase_metacast_callback = nullptr;
    QsciScintillaBase_Metacall_Callback qsciscintillabase_metacall_callback = nullptr;
    QsciScintillaBase_CanInsertFromMimeData_Callback qsciscintillabase_caninsertfrommimedata_callback = nullptr;
    QsciScintillaBase_FromMimeData_Callback qsciscintillabase_frommimedata_callback = nullptr;
    QsciScintillaBase_ToMimeData_Callback qsciscintillabase_tomimedata_callback = nullptr;
    QsciScintillaBase_ChangeEvent_Callback qsciscintillabase_changeevent_callback = nullptr;
    QsciScintillaBase_ContextMenuEvent_Callback qsciscintillabase_contextmenuevent_callback = nullptr;
    QsciScintillaBase_DragEnterEvent_Callback qsciscintillabase_dragenterevent_callback = nullptr;
    QsciScintillaBase_DragLeaveEvent_Callback qsciscintillabase_dragleaveevent_callback = nullptr;
    QsciScintillaBase_DragMoveEvent_Callback qsciscintillabase_dragmoveevent_callback = nullptr;
    QsciScintillaBase_DropEvent_Callback qsciscintillabase_dropevent_callback = nullptr;
    QsciScintillaBase_FocusInEvent_Callback qsciscintillabase_focusinevent_callback = nullptr;
    QsciScintillaBase_FocusOutEvent_Callback qsciscintillabase_focusoutevent_callback = nullptr;
    QsciScintillaBase_FocusNextPrevChild_Callback qsciscintillabase_focusnextprevchild_callback = nullptr;
    QsciScintillaBase_KeyPressEvent_Callback qsciscintillabase_keypressevent_callback = nullptr;
    QsciScintillaBase_InputMethodEvent_Callback qsciscintillabase_inputmethodevent_callback = nullptr;
    QsciScintillaBase_InputMethodQuery_Callback qsciscintillabase_inputmethodquery_callback = nullptr;
    QsciScintillaBase_MouseDoubleClickEvent_Callback qsciscintillabase_mousedoubleclickevent_callback = nullptr;
    QsciScintillaBase_MouseMoveEvent_Callback qsciscintillabase_mousemoveevent_callback = nullptr;
    QsciScintillaBase_MousePressEvent_Callback qsciscintillabase_mousepressevent_callback = nullptr;
    QsciScintillaBase_MouseReleaseEvent_Callback qsciscintillabase_mousereleaseevent_callback = nullptr;
    QsciScintillaBase_PaintEvent_Callback qsciscintillabase_paintevent_callback = nullptr;
    QsciScintillaBase_ResizeEvent_Callback qsciscintillabase_resizeevent_callback = nullptr;
    QsciScintillaBase_ScrollContentsBy_Callback qsciscintillabase_scrollcontentsby_callback = nullptr;
    QsciScintillaBase_MinimumSizeHint_Callback qsciscintillabase_minimumsizehint_callback = nullptr;
    QsciScintillaBase_SizeHint_Callback qsciscintillabase_sizehint_callback = nullptr;
    QsciScintillaBase_SetupViewport_Callback qsciscintillabase_setupviewport_callback = nullptr;
    QsciScintillaBase_EventFilter_Callback qsciscintillabase_eventfilter_callback = nullptr;
    QsciScintillaBase_Event_Callback qsciscintillabase_event_callback = nullptr;
    QsciScintillaBase_ViewportEvent_Callback qsciscintillabase_viewportevent_callback = nullptr;
    QsciScintillaBase_WheelEvent_Callback qsciscintillabase_wheelevent_callback = nullptr;
    QsciScintillaBase_ViewportSizeHint_Callback qsciscintillabase_viewportsizehint_callback = nullptr;
    QsciScintillaBase_InitStyleOption_Callback qsciscintillabase_initstyleoption_callback = nullptr;
    QsciScintillaBase_DevType_Callback qsciscintillabase_devtype_callback = nullptr;
    QsciScintillaBase_SetVisible_Callback qsciscintillabase_setvisible_callback = nullptr;
    QsciScintillaBase_HeightForWidth_Callback qsciscintillabase_heightforwidth_callback = nullptr;
    QsciScintillaBase_HasHeightForWidth_Callback qsciscintillabase_hasheightforwidth_callback = nullptr;
    QsciScintillaBase_PaintEngine_Callback qsciscintillabase_paintengine_callback = nullptr;
    QsciScintillaBase_KeyReleaseEvent_Callback qsciscintillabase_keyreleaseevent_callback = nullptr;
    QsciScintillaBase_EnterEvent_Callback qsciscintillabase_enterevent_callback = nullptr;
    QsciScintillaBase_LeaveEvent_Callback qsciscintillabase_leaveevent_callback = nullptr;
    QsciScintillaBase_MoveEvent_Callback qsciscintillabase_moveevent_callback = nullptr;
    QsciScintillaBase_CloseEvent_Callback qsciscintillabase_closeevent_callback = nullptr;
    QsciScintillaBase_TabletEvent_Callback qsciscintillabase_tabletevent_callback = nullptr;
    QsciScintillaBase_ActionEvent_Callback qsciscintillabase_actionevent_callback = nullptr;
    QsciScintillaBase_ShowEvent_Callback qsciscintillabase_showevent_callback = nullptr;
    QsciScintillaBase_HideEvent_Callback qsciscintillabase_hideevent_callback = nullptr;
    QsciScintillaBase_NativeEvent_Callback qsciscintillabase_nativeevent_callback = nullptr;
    QsciScintillaBase_Metric_Callback qsciscintillabase_metric_callback = nullptr;
    QsciScintillaBase_InitPainter_Callback qsciscintillabase_initpainter_callback = nullptr;
    QsciScintillaBase_Redirected_Callback qsciscintillabase_redirected_callback = nullptr;
    QsciScintillaBase_SharedPainter_Callback qsciscintillabase_sharedpainter_callback = nullptr;
    QsciScintillaBase_TimerEvent_Callback qsciscintillabase_timerevent_callback = nullptr;
    QsciScintillaBase_ChildEvent_Callback qsciscintillabase_childevent_callback = nullptr;
    QsciScintillaBase_CustomEvent_Callback qsciscintillabase_customevent_callback = nullptr;
    QsciScintillaBase_ConnectNotify_Callback qsciscintillabase_connectnotify_callback = nullptr;
    QsciScintillaBase_DisconnectNotify_Callback qsciscintillabase_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciScintillaBase {
        using QsciScintillaBase::actionEvent;
        using QsciScintillaBase::canInsertFromMimeData;
        using QsciScintillaBase::changeEvent;
        using QsciScintillaBase::childEvent;
        using QsciScintillaBase::closeEvent;
        using QsciScintillaBase::connectNotify;
        using QsciScintillaBase::contextMenuEvent;
        using QsciScintillaBase::customEvent;
        using QsciScintillaBase::disconnectNotify;
        using QsciScintillaBase::dragEnterEvent;
        using QsciScintillaBase::dragLeaveEvent;
        using QsciScintillaBase::dragMoveEvent;
        using QsciScintillaBase::dropEvent;
        using QsciScintillaBase::enterEvent;
        using QsciScintillaBase::event;
        using QsciScintillaBase::eventFilter;
        using QsciScintillaBase::focusInEvent;
        using QsciScintillaBase::focusNextPrevChild;
        using QsciScintillaBase::focusOutEvent;
        using QsciScintillaBase::fromMimeData;
        using QsciScintillaBase::hideEvent;
        using QsciScintillaBase::initPainter;
        using QsciScintillaBase::initStyleOption;
        using QsciScintillaBase::inputMethodEvent;
        using QsciScintillaBase::inputMethodQuery;
        using QsciScintillaBase::keyPressEvent;
        using QsciScintillaBase::keyReleaseEvent;
        using QsciScintillaBase::leaveEvent;
        using QsciScintillaBase::metric;
        using QsciScintillaBase::mouseDoubleClickEvent;
        using QsciScintillaBase::mouseMoveEvent;
        using QsciScintillaBase::mousePressEvent;
        using QsciScintillaBase::mouseReleaseEvent;
        using QsciScintillaBase::moveEvent;
        using QsciScintillaBase::nativeEvent;
        using QsciScintillaBase::paintEvent;
        using QsciScintillaBase::redirected;
        using QsciScintillaBase::resizeEvent;
        using QsciScintillaBase::scrollContentsBy;
        using QsciScintillaBase::sharedPainter;
        using QsciScintillaBase::showEvent;
        using QsciScintillaBase::tabletEvent;
        using QsciScintillaBase::timerEvent;
        using QsciScintillaBase::toMimeData;
        using QsciScintillaBase::viewportEvent;
        using QsciScintillaBase::viewportSizeHint;
        using QsciScintillaBase::wheelEvent;
    };

    VirtualQsciScintillaBase(QWidget* parent) : QsciScintillaBase(parent) {};
    VirtualQsciScintillaBase() : QsciScintillaBase() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsciscintillabase_metaobject_callback) {
            QMetaObject* callback_ret = qsciscintillabase_metaobject_callback(this);
            return callback_ret;
        }
        return QsciScintillaBase::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsciscintillabase_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsciscintillabase_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciScintillaBase::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsciscintillabase_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsciscintillabase_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciScintillaBase::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (qsciscintillabase_caninsertfrommimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)source;
            bool callback_ret = qsciscintillabase_caninsertfrommimedata_callback(this, cbval1);
            return callback_ret;
        }
        return QsciScintillaBase::canInsertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual QByteArray fromMimeData(const QMimeData* source, bool& rectangular) const override {
        if (qsciscintillabase_frommimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)source;
            bool* cbval2 = &rectangular;
            libqt_string callback_ret = qsciscintillabase_frommimedata_callback(this, cbval1, cbval2);
            QByteArray callback_ret_QByteArray(callback_ret.data, callback_ret.len);
            return callback_ret_QByteArray;
        }
        return QsciScintillaBase::fromMimeData(source, rectangular);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* toMimeData(const QByteArray& text, bool rectangular) const override {
        if (qsciscintillabase_tomimedata_callback) {
            const QByteArray text_qb = text;
            libqt_string text_str;
            text_str.len = text_qb.length();
            text_str.data = static_cast<char*>(malloc(text_str.len));
            memcpy((void*)text_str.data, text_qb.data(), text_str.len);
            libqt_string cbval1 = text_str;
            bool cbval2 = rectangular;
            QMimeData* callback_ret = qsciscintillabase_tomimedata_callback(this, cbval1, cbval2);
            libqt_free(text_str.data);
            return callback_ret;
        }
        return QsciScintillaBase::toMimeData(text, rectangular);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qsciscintillabase_changeevent_callback) {
            QEvent* cbval1 = e;
            qsciscintillabase_changeevent_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (qsciscintillabase_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = e;
            qsciscintillabase_contextmenuevent_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::contextMenuEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (qsciscintillabase_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = e;
            qsciscintillabase_dragenterevent_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::dragEnterEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (qsciscintillabase_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = e;
            qsciscintillabase_dragleaveevent_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (qsciscintillabase_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = e;
            qsciscintillabase_dragmoveevent_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (qsciscintillabase_dropevent_callback) {
            QDropEvent* cbval1 = e;
            qsciscintillabase_dropevent_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::dropEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (qsciscintillabase_focusinevent_callback) {
            QFocusEvent* cbval1 = e;
            qsciscintillabase_focusinevent_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (qsciscintillabase_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            qsciscintillabase_focusoutevent_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qsciscintillabase_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qsciscintillabase_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QsciScintillaBase::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (qsciscintillabase_keypressevent_callback) {
            QKeyEvent* cbval1 = e;
            qsciscintillabase_keypressevent_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qsciscintillabase_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qsciscintillabase_inputmethodevent_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qsciscintillabase_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qsciscintillabase_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciScintillaBase::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (qsciscintillabase_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = e;
            qsciscintillabase_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::mouseDoubleClickEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (qsciscintillabase_mousemoveevent_callback) {
            QMouseEvent* cbval1 = e;
            qsciscintillabase_mousemoveevent_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qsciscintillabase_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            qsciscintillabase_mousepressevent_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qsciscintillabase_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            qsciscintillabase_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qsciscintillabase_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            qsciscintillabase_paintevent_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (qsciscintillabase_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            qsciscintillabase_resizeevent_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qsciscintillabase_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            qsciscintillabase_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        QsciScintillaBase::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qsciscintillabase_minimumsizehint_callback) {
            QSize* callback_ret = qsciscintillabase_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciScintillaBase::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qsciscintillabase_sizehint_callback) {
            QSize* callback_ret = qsciscintillabase_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciScintillaBase::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qsciscintillabase_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            qsciscintillabase_setupviewport_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qsciscintillabase_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qsciscintillabase_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciScintillaBase::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qsciscintillabase_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qsciscintillabase_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciScintillaBase::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (qsciscintillabase_viewportevent_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qsciscintillabase_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return QsciScintillaBase::viewportEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qsciscintillabase_wheelevent_callback) {
            QWheelEvent* cbval1 = param1;
            qsciscintillabase_wheelevent_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qsciscintillabase_viewportsizehint_callback) {
            QSize* callback_ret = qsciscintillabase_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciScintillaBase::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qsciscintillabase_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            qsciscintillabase_initstyleoption_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qsciscintillabase_devtype_callback) {
            int callback_ret = qsciscintillabase_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciScintillaBase::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qsciscintillabase_setvisible_callback) {
            bool cbval1 = visible;
            qsciscintillabase_setvisible_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qsciscintillabase_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qsciscintillabase_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciScintillaBase::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qsciscintillabase_hasheightforwidth_callback) {
            bool callback_ret = qsciscintillabase_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QsciScintillaBase::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qsciscintillabase_paintengine_callback) {
            QPaintEngine* callback_ret = qsciscintillabase_paintengine_callback(this);
            return callback_ret;
        }
        return QsciScintillaBase::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qsciscintillabase_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qsciscintillabase_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qsciscintillabase_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qsciscintillabase_enterevent_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qsciscintillabase_leaveevent_callback) {
            QEvent* cbval1 = event;
            qsciscintillabase_leaveevent_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qsciscintillabase_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qsciscintillabase_moveevent_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qsciscintillabase_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qsciscintillabase_closeevent_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qsciscintillabase_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qsciscintillabase_tabletevent_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qsciscintillabase_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qsciscintillabase_actionevent_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qsciscintillabase_showevent_callback) {
            QShowEvent* cbval1 = event;
            qsciscintillabase_showevent_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qsciscintillabase_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qsciscintillabase_hideevent_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qsciscintillabase_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qsciscintillabase_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QsciScintillaBase::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qsciscintillabase_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qsciscintillabase_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciScintillaBase::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qsciscintillabase_initpainter_callback) {
            QPainter* cbval1 = painter;
            qsciscintillabase_initpainter_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qsciscintillabase_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qsciscintillabase_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QsciScintillaBase::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qsciscintillabase_sharedpainter_callback) {
            QPainter* callback_ret = qsciscintillabase_sharedpainter_callback(this);
            return callback_ret;
        }
        return QsciScintillaBase::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsciscintillabase_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsciscintillabase_timerevent_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsciscintillabase_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsciscintillabase_childevent_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsciscintillabase_customevent_callback) {
            QEvent* cbval1 = event;
            qsciscintillabase_customevent_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsciscintillabase_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsciscintillabase_connectnotify_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsciscintillabase_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsciscintillabase_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciScintillaBase::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciScintillaBase_SuperCanInsertFromMimeData(const QsciScintillaBase* self, const QMimeData* source);
    friend libqt_string QsciScintillaBase_SuperFromMimeData(const QsciScintillaBase* self, const QMimeData* source, bool* rectangular);
    friend QMimeData* QsciScintillaBase_SuperToMimeData(const QsciScintillaBase* self, const libqt_string text, bool rectangular);
    friend void QsciScintillaBase_SuperChangeEvent(QsciScintillaBase* self, QEvent* e);
    friend void QsciScintillaBase_SuperContextMenuEvent(QsciScintillaBase* self, QContextMenuEvent* e);
    friend void QsciScintillaBase_SuperDragEnterEvent(QsciScintillaBase* self, QDragEnterEvent* e);
    friend void QsciScintillaBase_SuperDragLeaveEvent(QsciScintillaBase* self, QDragLeaveEvent* e);
    friend void QsciScintillaBase_SuperDragMoveEvent(QsciScintillaBase* self, QDragMoveEvent* e);
    friend void QsciScintillaBase_SuperDropEvent(QsciScintillaBase* self, QDropEvent* e);
    friend void QsciScintillaBase_SuperFocusInEvent(QsciScintillaBase* self, QFocusEvent* e);
    friend void QsciScintillaBase_SuperFocusOutEvent(QsciScintillaBase* self, QFocusEvent* e);
    friend bool QsciScintillaBase_SuperFocusNextPrevChild(QsciScintillaBase* self, bool next);
    friend void QsciScintillaBase_SuperKeyPressEvent(QsciScintillaBase* self, QKeyEvent* e);
    friend void QsciScintillaBase_SuperInputMethodEvent(QsciScintillaBase* self, QInputMethodEvent* event);
    friend QVariant* QsciScintillaBase_SuperInputMethodQuery(const QsciScintillaBase* self, int query);
    friend void QsciScintillaBase_SuperMouseDoubleClickEvent(QsciScintillaBase* self, QMouseEvent* e);
    friend void QsciScintillaBase_SuperMouseMoveEvent(QsciScintillaBase* self, QMouseEvent* e);
    friend void QsciScintillaBase_SuperMousePressEvent(QsciScintillaBase* self, QMouseEvent* e);
    friend void QsciScintillaBase_SuperMouseReleaseEvent(QsciScintillaBase* self, QMouseEvent* e);
    friend void QsciScintillaBase_SuperPaintEvent(QsciScintillaBase* self, QPaintEvent* e);
    friend void QsciScintillaBase_SuperResizeEvent(QsciScintillaBase* self, QResizeEvent* e);
    friend void QsciScintillaBase_SuperScrollContentsBy(QsciScintillaBase* self, int dx, int dy);
    friend bool QsciScintillaBase_SuperEventFilter(QsciScintillaBase* self, QObject* param1, QEvent* param2);
    friend bool QsciScintillaBase_SuperEvent(QsciScintillaBase* self, QEvent* param1);
    friend bool QsciScintillaBase_SuperViewportEvent(QsciScintillaBase* self, QEvent* param1);
    friend void QsciScintillaBase_SuperWheelEvent(QsciScintillaBase* self, QWheelEvent* param1);
    friend QSize* QsciScintillaBase_SuperViewportSizeHint(const QsciScintillaBase* self);
    friend void QsciScintillaBase_SuperInitStyleOption(const QsciScintillaBase* self, QStyleOptionFrame* option);
    friend void QsciScintillaBase_SuperKeyReleaseEvent(QsciScintillaBase* self, QKeyEvent* event);
    friend void QsciScintillaBase_SuperEnterEvent(QsciScintillaBase* self, QEnterEvent* event);
    friend void QsciScintillaBase_SuperLeaveEvent(QsciScintillaBase* self, QEvent* event);
    friend void QsciScintillaBase_SuperMoveEvent(QsciScintillaBase* self, QMoveEvent* event);
    friend void QsciScintillaBase_SuperCloseEvent(QsciScintillaBase* self, QCloseEvent* event);
    friend void QsciScintillaBase_SuperTabletEvent(QsciScintillaBase* self, QTabletEvent* event);
    friend void QsciScintillaBase_SuperActionEvent(QsciScintillaBase* self, QActionEvent* event);
    friend void QsciScintillaBase_SuperShowEvent(QsciScintillaBase* self, QShowEvent* event);
    friend void QsciScintillaBase_SuperHideEvent(QsciScintillaBase* self, QHideEvent* event);
    friend bool QsciScintillaBase_SuperNativeEvent(QsciScintillaBase* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QsciScintillaBase_SuperMetric(const QsciScintillaBase* self, int param1);
    friend void QsciScintillaBase_SuperInitPainter(const QsciScintillaBase* self, QPainter* painter);
    friend QPaintDevice* QsciScintillaBase_SuperRedirected(const QsciScintillaBase* self, QPoint* offset);
    friend QPainter* QsciScintillaBase_SuperSharedPainter(const QsciScintillaBase* self);
    friend void QsciScintillaBase_SuperTimerEvent(QsciScintillaBase* self, QTimerEvent* event);
    friend void QsciScintillaBase_SuperChildEvent(QsciScintillaBase* self, QChildEvent* event);
    friend void QsciScintillaBase_SuperCustomEvent(QsciScintillaBase* self, QEvent* event);
    friend void QsciScintillaBase_SuperConnectNotify(QsciScintillaBase* self, const QMetaMethod* signal);
    friend void QsciScintillaBase_SuperDisconnectNotify(QsciScintillaBase* self, const QMetaMethod* signal);
};

#endif
