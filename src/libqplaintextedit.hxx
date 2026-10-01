#pragma once
#ifndef LIBQPLAINTEXTEDIT_HXX
#define LIBQPLAINTEXTEDIT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QPlainTextEdit
class VirtualQPlainTextEdit final : public QPlainTextEdit {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPlainTextEdit_MetaObject_Callback = QMetaObject* (*)(const QPlainTextEdit*);
    using QPlainTextEdit_Metacast_Callback = void* (*)(QPlainTextEdit*, const char*);
    using QPlainTextEdit_Metacall_Callback = int (*)(QPlainTextEdit*, int, int, void**);
    using QPlainTextEdit_LoadResource_Callback = QVariant* (*)(QPlainTextEdit*, int, QUrl*);
    using QPlainTextEdit_InputMethodQuery_Callback = QVariant* (*)(const QPlainTextEdit*, int);
    using QPlainTextEdit_Event_Callback = bool (*)(QPlainTextEdit*, QEvent*);
    using QPlainTextEdit_TimerEvent_Callback = void (*)(QPlainTextEdit*, QTimerEvent*);
    using QPlainTextEdit_KeyPressEvent_Callback = void (*)(QPlainTextEdit*, QKeyEvent*);
    using QPlainTextEdit_KeyReleaseEvent_Callback = void (*)(QPlainTextEdit*, QKeyEvent*);
    using QPlainTextEdit_ResizeEvent_Callback = void (*)(QPlainTextEdit*, QResizeEvent*);
    using QPlainTextEdit_PaintEvent_Callback = void (*)(QPlainTextEdit*, QPaintEvent*);
    using QPlainTextEdit_MousePressEvent_Callback = void (*)(QPlainTextEdit*, QMouseEvent*);
    using QPlainTextEdit_MouseMoveEvent_Callback = void (*)(QPlainTextEdit*, QMouseEvent*);
    using QPlainTextEdit_MouseReleaseEvent_Callback = void (*)(QPlainTextEdit*, QMouseEvent*);
    using QPlainTextEdit_MouseDoubleClickEvent_Callback = void (*)(QPlainTextEdit*, QMouseEvent*);
    using QPlainTextEdit_FocusNextPrevChild_Callback = bool (*)(QPlainTextEdit*, bool);
    using QPlainTextEdit_ContextMenuEvent_Callback = void (*)(QPlainTextEdit*, QContextMenuEvent*);
    using QPlainTextEdit_DragEnterEvent_Callback = void (*)(QPlainTextEdit*, QDragEnterEvent*);
    using QPlainTextEdit_DragLeaveEvent_Callback = void (*)(QPlainTextEdit*, QDragLeaveEvent*);
    using QPlainTextEdit_DragMoveEvent_Callback = void (*)(QPlainTextEdit*, QDragMoveEvent*);
    using QPlainTextEdit_DropEvent_Callback = void (*)(QPlainTextEdit*, QDropEvent*);
    using QPlainTextEdit_FocusInEvent_Callback = void (*)(QPlainTextEdit*, QFocusEvent*);
    using QPlainTextEdit_FocusOutEvent_Callback = void (*)(QPlainTextEdit*, QFocusEvent*);
    using QPlainTextEdit_ShowEvent_Callback = void (*)(QPlainTextEdit*, QShowEvent*);
    using QPlainTextEdit_ChangeEvent_Callback = void (*)(QPlainTextEdit*, QEvent*);
    using QPlainTextEdit_WheelEvent_Callback = void (*)(QPlainTextEdit*, QWheelEvent*);
    using QPlainTextEdit_CreateMimeDataFromSelection_Callback = QMimeData* (*)(const QPlainTextEdit*);
    using QPlainTextEdit_CanInsertFromMimeData_Callback = bool (*)(const QPlainTextEdit*, QMimeData*);
    using QPlainTextEdit_InsertFromMimeData_Callback = void (*)(QPlainTextEdit*, QMimeData*);
    using QPlainTextEdit_InputMethodEvent_Callback = void (*)(QPlainTextEdit*, QInputMethodEvent*);
    using QPlainTextEdit_ScrollContentsBy_Callback = void (*)(QPlainTextEdit*, int, int);
    using QPlainTextEdit_DoSetTextCursor_Callback = void (*)(QPlainTextEdit*, QTextCursor*);
    using QPlainTextEdit_MinimumSizeHint_Callback = QSize* (*)(const QPlainTextEdit*);
    using QPlainTextEdit_SizeHint_Callback = QSize* (*)(const QPlainTextEdit*);
    using QPlainTextEdit_SetupViewport_Callback = void (*)(QPlainTextEdit*, QWidget*);
    using QPlainTextEdit_EventFilter_Callback = bool (*)(QPlainTextEdit*, QObject*, QEvent*);
    using QPlainTextEdit_ViewportEvent_Callback = bool (*)(QPlainTextEdit*, QEvent*);
    using QPlainTextEdit_ViewportSizeHint_Callback = QSize* (*)(const QPlainTextEdit*);
    using QPlainTextEdit_InitStyleOption_Callback = void (*)(const QPlainTextEdit*, QStyleOptionFrame*);
    using QPlainTextEdit_DevType_Callback = int (*)(const QPlainTextEdit*);
    using QPlainTextEdit_SetVisible_Callback = void (*)(QPlainTextEdit*, bool);
    using QPlainTextEdit_HeightForWidth_Callback = int (*)(const QPlainTextEdit*, int);
    using QPlainTextEdit_HasHeightForWidth_Callback = bool (*)(const QPlainTextEdit*);
    using QPlainTextEdit_PaintEngine_Callback = QPaintEngine* (*)(const QPlainTextEdit*);
    using QPlainTextEdit_EnterEvent_Callback = void (*)(QPlainTextEdit*, QEnterEvent*);
    using QPlainTextEdit_LeaveEvent_Callback = void (*)(QPlainTextEdit*, QEvent*);
    using QPlainTextEdit_MoveEvent_Callback = void (*)(QPlainTextEdit*, QMoveEvent*);
    using QPlainTextEdit_CloseEvent_Callback = void (*)(QPlainTextEdit*, QCloseEvent*);
    using QPlainTextEdit_TabletEvent_Callback = void (*)(QPlainTextEdit*, QTabletEvent*);
    using QPlainTextEdit_ActionEvent_Callback = void (*)(QPlainTextEdit*, QActionEvent*);
    using QPlainTextEdit_HideEvent_Callback = void (*)(QPlainTextEdit*, QHideEvent*);
    using QPlainTextEdit_NativeEvent_Callback = bool (*)(QPlainTextEdit*, libqt_string, void*, intptr_t*);
    using QPlainTextEdit_Metric_Callback = int (*)(const QPlainTextEdit*, int);
    using QPlainTextEdit_InitPainter_Callback = void (*)(const QPlainTextEdit*, QPainter*);
    using QPlainTextEdit_Redirected_Callback = QPaintDevice* (*)(const QPlainTextEdit*, QPoint*);
    using QPlainTextEdit_SharedPainter_Callback = QPainter* (*)(const QPlainTextEdit*);
    using QPlainTextEdit_ChildEvent_Callback = void (*)(QPlainTextEdit*, QChildEvent*);
    using QPlainTextEdit_CustomEvent_Callback = void (*)(QPlainTextEdit*, QEvent*);
    using QPlainTextEdit_ConnectNotify_Callback = void (*)(QPlainTextEdit*, QMetaMethod*);
    using QPlainTextEdit_DisconnectNotify_Callback = void (*)(QPlainTextEdit*, QMetaMethod*);
    using QPlainTextEdit::blockBoundingGeometry;
    using QPlainTextEdit::blockBoundingRect;
    using QPlainTextEdit::contentOffset;
    using QPlainTextEdit::create;
    using QPlainTextEdit::destroy;
    using QPlainTextEdit::drawFrame;
    using QPlainTextEdit::firstVisibleBlock;
    using QPlainTextEdit::focusNextChild;
    using QPlainTextEdit::focusPreviousChild;
    using QPlainTextEdit::getDecodedMetricF;
    using QPlainTextEdit::getPaintContext;
    using QPlainTextEdit::isSignalConnected;
    using QPlainTextEdit::receivers;
    using QPlainTextEdit::sender;
    using QPlainTextEdit::senderSignalIndex;
    using QPlainTextEdit::setViewportMargins;
    using QPlainTextEdit::updateMicroFocus;
    using QPlainTextEdit::viewportMargins;
    using QPlainTextEdit::zoomInF;

    // Instance callback storage
    QPlainTextEdit_MetaObject_Callback qplaintextedit_metaobject_callback = nullptr;
    QPlainTextEdit_Metacast_Callback qplaintextedit_metacast_callback = nullptr;
    QPlainTextEdit_Metacall_Callback qplaintextedit_metacall_callback = nullptr;
    QPlainTextEdit_LoadResource_Callback qplaintextedit_loadresource_callback = nullptr;
    QPlainTextEdit_InputMethodQuery_Callback qplaintextedit_inputmethodquery_callback = nullptr;
    QPlainTextEdit_Event_Callback qplaintextedit_event_callback = nullptr;
    QPlainTextEdit_TimerEvent_Callback qplaintextedit_timerevent_callback = nullptr;
    QPlainTextEdit_KeyPressEvent_Callback qplaintextedit_keypressevent_callback = nullptr;
    QPlainTextEdit_KeyReleaseEvent_Callback qplaintextedit_keyreleaseevent_callback = nullptr;
    QPlainTextEdit_ResizeEvent_Callback qplaintextedit_resizeevent_callback = nullptr;
    QPlainTextEdit_PaintEvent_Callback qplaintextedit_paintevent_callback = nullptr;
    QPlainTextEdit_MousePressEvent_Callback qplaintextedit_mousepressevent_callback = nullptr;
    QPlainTextEdit_MouseMoveEvent_Callback qplaintextedit_mousemoveevent_callback = nullptr;
    QPlainTextEdit_MouseReleaseEvent_Callback qplaintextedit_mousereleaseevent_callback = nullptr;
    QPlainTextEdit_MouseDoubleClickEvent_Callback qplaintextedit_mousedoubleclickevent_callback = nullptr;
    QPlainTextEdit_FocusNextPrevChild_Callback qplaintextedit_focusnextprevchild_callback = nullptr;
    QPlainTextEdit_ContextMenuEvent_Callback qplaintextedit_contextmenuevent_callback = nullptr;
    QPlainTextEdit_DragEnterEvent_Callback qplaintextedit_dragenterevent_callback = nullptr;
    QPlainTextEdit_DragLeaveEvent_Callback qplaintextedit_dragleaveevent_callback = nullptr;
    QPlainTextEdit_DragMoveEvent_Callback qplaintextedit_dragmoveevent_callback = nullptr;
    QPlainTextEdit_DropEvent_Callback qplaintextedit_dropevent_callback = nullptr;
    QPlainTextEdit_FocusInEvent_Callback qplaintextedit_focusinevent_callback = nullptr;
    QPlainTextEdit_FocusOutEvent_Callback qplaintextedit_focusoutevent_callback = nullptr;
    QPlainTextEdit_ShowEvent_Callback qplaintextedit_showevent_callback = nullptr;
    QPlainTextEdit_ChangeEvent_Callback qplaintextedit_changeevent_callback = nullptr;
    QPlainTextEdit_WheelEvent_Callback qplaintextedit_wheelevent_callback = nullptr;
    QPlainTextEdit_CreateMimeDataFromSelection_Callback qplaintextedit_createmimedatafromselection_callback = nullptr;
    QPlainTextEdit_CanInsertFromMimeData_Callback qplaintextedit_caninsertfrommimedata_callback = nullptr;
    QPlainTextEdit_InsertFromMimeData_Callback qplaintextedit_insertfrommimedata_callback = nullptr;
    QPlainTextEdit_InputMethodEvent_Callback qplaintextedit_inputmethodevent_callback = nullptr;
    QPlainTextEdit_ScrollContentsBy_Callback qplaintextedit_scrollcontentsby_callback = nullptr;
    QPlainTextEdit_DoSetTextCursor_Callback qplaintextedit_dosettextcursor_callback = nullptr;
    QPlainTextEdit_MinimumSizeHint_Callback qplaintextedit_minimumsizehint_callback = nullptr;
    QPlainTextEdit_SizeHint_Callback qplaintextedit_sizehint_callback = nullptr;
    QPlainTextEdit_SetupViewport_Callback qplaintextedit_setupviewport_callback = nullptr;
    QPlainTextEdit_EventFilter_Callback qplaintextedit_eventfilter_callback = nullptr;
    QPlainTextEdit_ViewportEvent_Callback qplaintextedit_viewportevent_callback = nullptr;
    QPlainTextEdit_ViewportSizeHint_Callback qplaintextedit_viewportsizehint_callback = nullptr;
    QPlainTextEdit_InitStyleOption_Callback qplaintextedit_initstyleoption_callback = nullptr;
    QPlainTextEdit_DevType_Callback qplaintextedit_devtype_callback = nullptr;
    QPlainTextEdit_SetVisible_Callback qplaintextedit_setvisible_callback = nullptr;
    QPlainTextEdit_HeightForWidth_Callback qplaintextedit_heightforwidth_callback = nullptr;
    QPlainTextEdit_HasHeightForWidth_Callback qplaintextedit_hasheightforwidth_callback = nullptr;
    QPlainTextEdit_PaintEngine_Callback qplaintextedit_paintengine_callback = nullptr;
    QPlainTextEdit_EnterEvent_Callback qplaintextedit_enterevent_callback = nullptr;
    QPlainTextEdit_LeaveEvent_Callback qplaintextedit_leaveevent_callback = nullptr;
    QPlainTextEdit_MoveEvent_Callback qplaintextedit_moveevent_callback = nullptr;
    QPlainTextEdit_CloseEvent_Callback qplaintextedit_closeevent_callback = nullptr;
    QPlainTextEdit_TabletEvent_Callback qplaintextedit_tabletevent_callback = nullptr;
    QPlainTextEdit_ActionEvent_Callback qplaintextedit_actionevent_callback = nullptr;
    QPlainTextEdit_HideEvent_Callback qplaintextedit_hideevent_callback = nullptr;
    QPlainTextEdit_NativeEvent_Callback qplaintextedit_nativeevent_callback = nullptr;
    QPlainTextEdit_Metric_Callback qplaintextedit_metric_callback = nullptr;
    QPlainTextEdit_InitPainter_Callback qplaintextedit_initpainter_callback = nullptr;
    QPlainTextEdit_Redirected_Callback qplaintextedit_redirected_callback = nullptr;
    QPlainTextEdit_SharedPainter_Callback qplaintextedit_sharedpainter_callback = nullptr;
    QPlainTextEdit_ChildEvent_Callback qplaintextedit_childevent_callback = nullptr;
    QPlainTextEdit_CustomEvent_Callback qplaintextedit_customevent_callback = nullptr;
    QPlainTextEdit_ConnectNotify_Callback qplaintextedit_connectnotify_callback = nullptr;
    QPlainTextEdit_DisconnectNotify_Callback qplaintextedit_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPlainTextEdit {
        using QPlainTextEdit::actionEvent;
        using QPlainTextEdit::canInsertFromMimeData;
        using QPlainTextEdit::changeEvent;
        using QPlainTextEdit::childEvent;
        using QPlainTextEdit::closeEvent;
        using QPlainTextEdit::connectNotify;
        using QPlainTextEdit::contextMenuEvent;
        using QPlainTextEdit::createMimeDataFromSelection;
        using QPlainTextEdit::customEvent;
        using QPlainTextEdit::disconnectNotify;
        using QPlainTextEdit::doSetTextCursor;
        using QPlainTextEdit::dragEnterEvent;
        using QPlainTextEdit::dragLeaveEvent;
        using QPlainTextEdit::dragMoveEvent;
        using QPlainTextEdit::dropEvent;
        using QPlainTextEdit::enterEvent;
        using QPlainTextEdit::event;
        using QPlainTextEdit::eventFilter;
        using QPlainTextEdit::focusInEvent;
        using QPlainTextEdit::focusNextPrevChild;
        using QPlainTextEdit::focusOutEvent;
        using QPlainTextEdit::hideEvent;
        using QPlainTextEdit::initPainter;
        using QPlainTextEdit::initStyleOption;
        using QPlainTextEdit::inputMethodEvent;
        using QPlainTextEdit::insertFromMimeData;
        using QPlainTextEdit::keyPressEvent;
        using QPlainTextEdit::keyReleaseEvent;
        using QPlainTextEdit::leaveEvent;
        using QPlainTextEdit::metric;
        using QPlainTextEdit::mouseDoubleClickEvent;
        using QPlainTextEdit::mouseMoveEvent;
        using QPlainTextEdit::mousePressEvent;
        using QPlainTextEdit::mouseReleaseEvent;
        using QPlainTextEdit::moveEvent;
        using QPlainTextEdit::nativeEvent;
        using QPlainTextEdit::paintEvent;
        using QPlainTextEdit::redirected;
        using QPlainTextEdit::resizeEvent;
        using QPlainTextEdit::scrollContentsBy;
        using QPlainTextEdit::sharedPainter;
        using QPlainTextEdit::showEvent;
        using QPlainTextEdit::tabletEvent;
        using QPlainTextEdit::timerEvent;
        using QPlainTextEdit::viewportEvent;
        using QPlainTextEdit::viewportSizeHint;
        using QPlainTextEdit::wheelEvent;
    };

    VirtualQPlainTextEdit(QWidget* parent) : QPlainTextEdit(parent) {};
    VirtualQPlainTextEdit() : QPlainTextEdit() {};
    VirtualQPlainTextEdit(const QString& text) : QPlainTextEdit(text) {};
    VirtualQPlainTextEdit(const QString& text, QWidget* parent) : QPlainTextEdit(text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qplaintextedit_metaobject_callback) {
            QMetaObject* callback_ret = qplaintextedit_metaobject_callback(this);
            return callback_ret;
        }
        return QPlainTextEdit::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qplaintextedit_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qplaintextedit_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPlainTextEdit::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qplaintextedit_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qplaintextedit_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPlainTextEdit::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant loadResource(int typeVal, const QUrl& name) override {
        if (qplaintextedit_loadresource_callback) {
            int cbval1 = typeVal;
            const QUrl& name_ret = name;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&name_ret);
            QVariant* callback_ret = qplaintextedit_loadresource_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPlainTextEdit::loadResource(typeVal, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
        if (qplaintextedit_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(property);
            QVariant* callback_ret = qplaintextedit_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPlainTextEdit::inputMethodQuery(property);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qplaintextedit_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qplaintextedit_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPlainTextEdit::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qplaintextedit_timerevent_callback) {
            QTimerEvent* cbval1 = e;
            qplaintextedit_timerevent_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (qplaintextedit_keypressevent_callback) {
            QKeyEvent* cbval1 = e;
            qplaintextedit_keypressevent_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (qplaintextedit_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            qplaintextedit_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (qplaintextedit_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            qplaintextedit_resizeevent_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qplaintextedit_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            qplaintextedit_paintevent_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qplaintextedit_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            qplaintextedit_mousepressevent_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (qplaintextedit_mousemoveevent_callback) {
            QMouseEvent* cbval1 = e;
            qplaintextedit_mousemoveevent_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qplaintextedit_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            qplaintextedit_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (qplaintextedit_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = e;
            qplaintextedit_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::mouseDoubleClickEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qplaintextedit_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qplaintextedit_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QPlainTextEdit::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (qplaintextedit_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = e;
            qplaintextedit_contextmenuevent_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::contextMenuEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (qplaintextedit_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = e;
            qplaintextedit_dragenterevent_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::dragEnterEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (qplaintextedit_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = e;
            qplaintextedit_dragleaveevent_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (qplaintextedit_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = e;
            qplaintextedit_dragmoveevent_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (qplaintextedit_dropevent_callback) {
            QDropEvent* cbval1 = e;
            qplaintextedit_dropevent_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::dropEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (qplaintextedit_focusinevent_callback) {
            QFocusEvent* cbval1 = e;
            qplaintextedit_focusinevent_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (qplaintextedit_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            qplaintextedit_focusoutevent_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qplaintextedit_showevent_callback) {
            QShowEvent* cbval1 = param1;
            qplaintextedit_showevent_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qplaintextedit_changeevent_callback) {
            QEvent* cbval1 = e;
            qplaintextedit_changeevent_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qplaintextedit_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            qplaintextedit_wheelevent_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* createMimeDataFromSelection() const override {
        if (qplaintextedit_createmimedatafromselection_callback) {
            QMimeData* callback_ret = qplaintextedit_createmimedatafromselection_callback(this);
            return callback_ret;
        }
        return QPlainTextEdit::createMimeDataFromSelection();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (qplaintextedit_caninsertfrommimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)source;
            bool callback_ret = qplaintextedit_caninsertfrommimedata_callback(this, cbval1);
            return callback_ret;
        }
        return QPlainTextEdit::canInsertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertFromMimeData(const QMimeData* source) override {
        if (qplaintextedit_insertfrommimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)source;
            qplaintextedit_insertfrommimedata_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::insertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qplaintextedit_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qplaintextedit_inputmethodevent_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qplaintextedit_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            qplaintextedit_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        QPlainTextEdit::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetTextCursor(const QTextCursor& cursor) override {
        if (qplaintextedit_dosettextcursor_callback) {
            const QTextCursor& cursor_ret = cursor;
            // Cast returned reference into pointer
            QTextCursor* cbval1 = const_cast<QTextCursor*>(&cursor_ret);
            qplaintextedit_dosettextcursor_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::doSetTextCursor(cursor);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qplaintextedit_minimumsizehint_callback) {
            QSize* callback_ret = qplaintextedit_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPlainTextEdit::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qplaintextedit_sizehint_callback) {
            QSize* callback_ret = qplaintextedit_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPlainTextEdit::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qplaintextedit_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            qplaintextedit_setupviewport_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qplaintextedit_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qplaintextedit_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPlainTextEdit::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (qplaintextedit_viewportevent_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qplaintextedit_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return QPlainTextEdit::viewportEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qplaintextedit_viewportsizehint_callback) {
            QSize* callback_ret = qplaintextedit_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPlainTextEdit::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qplaintextedit_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            qplaintextedit_initstyleoption_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qplaintextedit_devtype_callback) {
            int callback_ret = qplaintextedit_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QPlainTextEdit::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qplaintextedit_setvisible_callback) {
            bool cbval1 = visible;
            qplaintextedit_setvisible_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qplaintextedit_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qplaintextedit_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPlainTextEdit::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qplaintextedit_hasheightforwidth_callback) {
            bool callback_ret = qplaintextedit_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QPlainTextEdit::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qplaintextedit_paintengine_callback) {
            QPaintEngine* callback_ret = qplaintextedit_paintengine_callback(this);
            return callback_ret;
        }
        return QPlainTextEdit::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qplaintextedit_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qplaintextedit_enterevent_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qplaintextedit_leaveevent_callback) {
            QEvent* cbval1 = event;
            qplaintextedit_leaveevent_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qplaintextedit_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qplaintextedit_moveevent_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qplaintextedit_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qplaintextedit_closeevent_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qplaintextedit_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qplaintextedit_tabletevent_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qplaintextedit_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qplaintextedit_actionevent_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qplaintextedit_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qplaintextedit_hideevent_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qplaintextedit_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qplaintextedit_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QPlainTextEdit::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qplaintextedit_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qplaintextedit_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPlainTextEdit::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qplaintextedit_initpainter_callback) {
            QPainter* cbval1 = painter;
            qplaintextedit_initpainter_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qplaintextedit_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qplaintextedit_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QPlainTextEdit::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qplaintextedit_sharedpainter_callback) {
            QPainter* callback_ret = qplaintextedit_sharedpainter_callback(this);
            return callback_ret;
        }
        return QPlainTextEdit::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qplaintextedit_childevent_callback) {
            QChildEvent* cbval1 = event;
            qplaintextedit_childevent_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qplaintextedit_customevent_callback) {
            QEvent* cbval1 = event;
            qplaintextedit_customevent_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qplaintextedit_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qplaintextedit_connectnotify_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qplaintextedit_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qplaintextedit_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPlainTextEdit::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QPlainTextEdit_SuperEvent(QPlainTextEdit* self, QEvent* e);
    friend void QPlainTextEdit_SuperTimerEvent(QPlainTextEdit* self, QTimerEvent* e);
    friend void QPlainTextEdit_SuperKeyPressEvent(QPlainTextEdit* self, QKeyEvent* e);
    friend void QPlainTextEdit_SuperKeyReleaseEvent(QPlainTextEdit* self, QKeyEvent* e);
    friend void QPlainTextEdit_SuperResizeEvent(QPlainTextEdit* self, QResizeEvent* e);
    friend void QPlainTextEdit_SuperPaintEvent(QPlainTextEdit* self, QPaintEvent* e);
    friend void QPlainTextEdit_SuperMousePressEvent(QPlainTextEdit* self, QMouseEvent* e);
    friend void QPlainTextEdit_SuperMouseMoveEvent(QPlainTextEdit* self, QMouseEvent* e);
    friend void QPlainTextEdit_SuperMouseReleaseEvent(QPlainTextEdit* self, QMouseEvent* e);
    friend void QPlainTextEdit_SuperMouseDoubleClickEvent(QPlainTextEdit* self, QMouseEvent* e);
    friend bool QPlainTextEdit_SuperFocusNextPrevChild(QPlainTextEdit* self, bool next);
    friend void QPlainTextEdit_SuperContextMenuEvent(QPlainTextEdit* self, QContextMenuEvent* e);
    friend void QPlainTextEdit_SuperDragEnterEvent(QPlainTextEdit* self, QDragEnterEvent* e);
    friend void QPlainTextEdit_SuperDragLeaveEvent(QPlainTextEdit* self, QDragLeaveEvent* e);
    friend void QPlainTextEdit_SuperDragMoveEvent(QPlainTextEdit* self, QDragMoveEvent* e);
    friend void QPlainTextEdit_SuperDropEvent(QPlainTextEdit* self, QDropEvent* e);
    friend void QPlainTextEdit_SuperFocusInEvent(QPlainTextEdit* self, QFocusEvent* e);
    friend void QPlainTextEdit_SuperFocusOutEvent(QPlainTextEdit* self, QFocusEvent* e);
    friend void QPlainTextEdit_SuperShowEvent(QPlainTextEdit* self, QShowEvent* param1);
    friend void QPlainTextEdit_SuperChangeEvent(QPlainTextEdit* self, QEvent* e);
    friend void QPlainTextEdit_SuperWheelEvent(QPlainTextEdit* self, QWheelEvent* e);
    friend QMimeData* QPlainTextEdit_SuperCreateMimeDataFromSelection(const QPlainTextEdit* self);
    friend bool QPlainTextEdit_SuperCanInsertFromMimeData(const QPlainTextEdit* self, const QMimeData* source);
    friend void QPlainTextEdit_SuperInsertFromMimeData(QPlainTextEdit* self, const QMimeData* source);
    friend void QPlainTextEdit_SuperInputMethodEvent(QPlainTextEdit* self, QInputMethodEvent* param1);
    friend void QPlainTextEdit_SuperScrollContentsBy(QPlainTextEdit* self, int dx, int dy);
    friend void QPlainTextEdit_SuperDoSetTextCursor(QPlainTextEdit* self, const QTextCursor* cursor);
    friend bool QPlainTextEdit_SuperEventFilter(QPlainTextEdit* self, QObject* param1, QEvent* param2);
    friend bool QPlainTextEdit_SuperViewportEvent(QPlainTextEdit* self, QEvent* param1);
    friend QSize* QPlainTextEdit_SuperViewportSizeHint(const QPlainTextEdit* self);
    friend void QPlainTextEdit_SuperInitStyleOption(const QPlainTextEdit* self, QStyleOptionFrame* option);
    friend void QPlainTextEdit_SuperEnterEvent(QPlainTextEdit* self, QEnterEvent* event);
    friend void QPlainTextEdit_SuperLeaveEvent(QPlainTextEdit* self, QEvent* event);
    friend void QPlainTextEdit_SuperMoveEvent(QPlainTextEdit* self, QMoveEvent* event);
    friend void QPlainTextEdit_SuperCloseEvent(QPlainTextEdit* self, QCloseEvent* event);
    friend void QPlainTextEdit_SuperTabletEvent(QPlainTextEdit* self, QTabletEvent* event);
    friend void QPlainTextEdit_SuperActionEvent(QPlainTextEdit* self, QActionEvent* event);
    friend void QPlainTextEdit_SuperHideEvent(QPlainTextEdit* self, QHideEvent* event);
    friend bool QPlainTextEdit_SuperNativeEvent(QPlainTextEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QPlainTextEdit_SuperMetric(const QPlainTextEdit* self, int param1);
    friend void QPlainTextEdit_SuperInitPainter(const QPlainTextEdit* self, QPainter* painter);
    friend QPaintDevice* QPlainTextEdit_SuperRedirected(const QPlainTextEdit* self, QPoint* offset);
    friend QPainter* QPlainTextEdit_SuperSharedPainter(const QPlainTextEdit* self);
    friend void QPlainTextEdit_SuperChildEvent(QPlainTextEdit* self, QChildEvent* event);
    friend void QPlainTextEdit_SuperCustomEvent(QPlainTextEdit* self, QEvent* event);
    friend void QPlainTextEdit_SuperConnectNotify(QPlainTextEdit* self, const QMetaMethod* signal);
    friend void QPlainTextEdit_SuperDisconnectNotify(QPlainTextEdit* self, const QMetaMethod* signal);
};

// This class is a subclass of QPlainTextDocumentLayout
class VirtualQPlainTextDocumentLayout final : public QPlainTextDocumentLayout {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPlainTextDocumentLayout_MetaObject_Callback = QMetaObject* (*)(const QPlainTextDocumentLayout*);
    using QPlainTextDocumentLayout_Metacast_Callback = void* (*)(QPlainTextDocumentLayout*, const char*);
    using QPlainTextDocumentLayout_Metacall_Callback = int (*)(QPlainTextDocumentLayout*, int, int, void**);
    using QPlainTextDocumentLayout_Draw_Callback = void (*)(QPlainTextDocumentLayout*, QPainter*, QAbstractTextDocumentLayout__PaintContext*);
    using QPlainTextDocumentLayout_HitTest_Callback = int (*)(const QPlainTextDocumentLayout*, QPointF*, int);
    using QPlainTextDocumentLayout_PageCount_Callback = int (*)(const QPlainTextDocumentLayout*);
    using QPlainTextDocumentLayout_DocumentSize_Callback = QSizeF* (*)(const QPlainTextDocumentLayout*);
    using QPlainTextDocumentLayout_FrameBoundingRect_Callback = QRectF* (*)(const QPlainTextDocumentLayout*, QTextFrame*);
    using QPlainTextDocumentLayout_BlockBoundingRect_Callback = QRectF* (*)(const QPlainTextDocumentLayout*, QTextBlock*);
    using QPlainTextDocumentLayout_DocumentChanged_Callback = void (*)(QPlainTextDocumentLayout*, int, int, int);
    using QPlainTextDocumentLayout_ResizeInlineObject_Callback = void (*)(QPlainTextDocumentLayout*, QTextInlineObject*, int, QTextFormat*);
    using QPlainTextDocumentLayout_PositionInlineObject_Callback = void (*)(QPlainTextDocumentLayout*, QTextInlineObject*, int, QTextFormat*);
    using QPlainTextDocumentLayout_DrawInlineObject_Callback = void (*)(QPlainTextDocumentLayout*, QPainter*, QRectF*, QTextInlineObject*, int, QTextFormat*);
    using QPlainTextDocumentLayout_Event_Callback = bool (*)(QPlainTextDocumentLayout*, QEvent*);
    using QPlainTextDocumentLayout_EventFilter_Callback = bool (*)(QPlainTextDocumentLayout*, QObject*, QEvent*);
    using QPlainTextDocumentLayout_TimerEvent_Callback = void (*)(QPlainTextDocumentLayout*, QTimerEvent*);
    using QPlainTextDocumentLayout_ChildEvent_Callback = void (*)(QPlainTextDocumentLayout*, QChildEvent*);
    using QPlainTextDocumentLayout_CustomEvent_Callback = void (*)(QPlainTextDocumentLayout*, QEvent*);
    using QPlainTextDocumentLayout_ConnectNotify_Callback = void (*)(QPlainTextDocumentLayout*, QMetaMethod*);
    using QPlainTextDocumentLayout_DisconnectNotify_Callback = void (*)(QPlainTextDocumentLayout*, QMetaMethod*);
    using QPlainTextDocumentLayout::format;
    using QPlainTextDocumentLayout::formatIndex;
    using QPlainTextDocumentLayout::isSignalConnected;
    using QPlainTextDocumentLayout::receivers;
    using QPlainTextDocumentLayout::sender;
    using QPlainTextDocumentLayout::senderSignalIndex;

    // Instance callback storage
    QPlainTextDocumentLayout_MetaObject_Callback qplaintextdocumentlayout_metaobject_callback = nullptr;
    QPlainTextDocumentLayout_Metacast_Callback qplaintextdocumentlayout_metacast_callback = nullptr;
    QPlainTextDocumentLayout_Metacall_Callback qplaintextdocumentlayout_metacall_callback = nullptr;
    QPlainTextDocumentLayout_Draw_Callback qplaintextdocumentlayout_draw_callback = nullptr;
    QPlainTextDocumentLayout_HitTest_Callback qplaintextdocumentlayout_hittest_callback = nullptr;
    QPlainTextDocumentLayout_PageCount_Callback qplaintextdocumentlayout_pagecount_callback = nullptr;
    QPlainTextDocumentLayout_DocumentSize_Callback qplaintextdocumentlayout_documentsize_callback = nullptr;
    QPlainTextDocumentLayout_FrameBoundingRect_Callback qplaintextdocumentlayout_frameboundingrect_callback = nullptr;
    QPlainTextDocumentLayout_BlockBoundingRect_Callback qplaintextdocumentlayout_blockboundingrect_callback = nullptr;
    QPlainTextDocumentLayout_DocumentChanged_Callback qplaintextdocumentlayout_documentchanged_callback = nullptr;
    QPlainTextDocumentLayout_ResizeInlineObject_Callback qplaintextdocumentlayout_resizeinlineobject_callback = nullptr;
    QPlainTextDocumentLayout_PositionInlineObject_Callback qplaintextdocumentlayout_positioninlineobject_callback = nullptr;
    QPlainTextDocumentLayout_DrawInlineObject_Callback qplaintextdocumentlayout_drawinlineobject_callback = nullptr;
    QPlainTextDocumentLayout_Event_Callback qplaintextdocumentlayout_event_callback = nullptr;
    QPlainTextDocumentLayout_EventFilter_Callback qplaintextdocumentlayout_eventfilter_callback = nullptr;
    QPlainTextDocumentLayout_TimerEvent_Callback qplaintextdocumentlayout_timerevent_callback = nullptr;
    QPlainTextDocumentLayout_ChildEvent_Callback qplaintextdocumentlayout_childevent_callback = nullptr;
    QPlainTextDocumentLayout_CustomEvent_Callback qplaintextdocumentlayout_customevent_callback = nullptr;
    QPlainTextDocumentLayout_ConnectNotify_Callback qplaintextdocumentlayout_connectnotify_callback = nullptr;
    QPlainTextDocumentLayout_DisconnectNotify_Callback qplaintextdocumentlayout_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPlainTextDocumentLayout {
        using QPlainTextDocumentLayout::childEvent;
        using QPlainTextDocumentLayout::connectNotify;
        using QPlainTextDocumentLayout::customEvent;
        using QPlainTextDocumentLayout::disconnectNotify;
        using QPlainTextDocumentLayout::documentChanged;
        using QPlainTextDocumentLayout::drawInlineObject;
        using QPlainTextDocumentLayout::positionInlineObject;
        using QPlainTextDocumentLayout::resizeInlineObject;
        using QPlainTextDocumentLayout::timerEvent;
    };

    VirtualQPlainTextDocumentLayout(QTextDocument* document) : QPlainTextDocumentLayout(document) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qplaintextdocumentlayout_metaobject_callback) {
            QMetaObject* callback_ret = qplaintextdocumentlayout_metaobject_callback(this);
            return callback_ret;
        }
        return QPlainTextDocumentLayout::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qplaintextdocumentlayout_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qplaintextdocumentlayout_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPlainTextDocumentLayout::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qplaintextdocumentlayout_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qplaintextdocumentlayout_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPlainTextDocumentLayout::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void draw(QPainter* param1, const QAbstractTextDocumentLayout::PaintContext& param2) override {
        if (qplaintextdocumentlayout_draw_callback) {
            QPainter* cbval1 = param1;
            const QAbstractTextDocumentLayout::PaintContext& param2_ret = param2;
            // Cast returned reference into pointer
            QAbstractTextDocumentLayout__PaintContext* cbval2 = const_cast<QAbstractTextDocumentLayout::PaintContext*>(&param2_ret);
            qplaintextdocumentlayout_draw_callback(this, cbval1, cbval2);
            return;
        }
        QPlainTextDocumentLayout::draw(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int hitTest(const QPointF& param1, Qt::HitTestAccuracy param2) const override {
        if (qplaintextdocumentlayout_hittest_callback) {
            const QPointF& param1_ret = param1;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&param1_ret);
            int cbval2 = static_cast<int>(param2);
            int callback_ret = qplaintextdocumentlayout_hittest_callback(this, cbval1, cbval2);
            return static_cast<int>(callback_ret);
        }
        return QPlainTextDocumentLayout::hitTest(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int pageCount() const override {
        if (qplaintextdocumentlayout_pagecount_callback) {
            int callback_ret = qplaintextdocumentlayout_pagecount_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QPlainTextDocumentLayout::pageCount();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizeF documentSize() const override {
        if (qplaintextdocumentlayout_documentsize_callback) {
            QSizeF* callback_ret = qplaintextdocumentlayout_documentsize_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPlainTextDocumentLayout::documentSize();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF frameBoundingRect(QTextFrame* param1) const override {
        if (qplaintextdocumentlayout_frameboundingrect_callback) {
            QTextFrame* cbval1 = param1;
            QRectF* callback_ret = qplaintextdocumentlayout_frameboundingrect_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPlainTextDocumentLayout::frameBoundingRect(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF blockBoundingRect(const QTextBlock& block) const override {
        if (qplaintextdocumentlayout_blockboundingrect_callback) {
            const QTextBlock& block_ret = block;
            // Cast returned reference into pointer
            QTextBlock* cbval1 = const_cast<QTextBlock*>(&block_ret);
            QRectF* callback_ret = qplaintextdocumentlayout_blockboundingrect_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPlainTextDocumentLayout::blockBoundingRect(block);
    }

    // Virtual method for C ABI access and custom callback
    virtual void documentChanged(int from, int param2, int charsAdded) override {
        if (qplaintextdocumentlayout_documentchanged_callback) {
            int cbval1 = from;
            int cbval2 = param2;
            int cbval3 = charsAdded;
            qplaintextdocumentlayout_documentchanged_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QPlainTextDocumentLayout::documentChanged(from, param2, charsAdded);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat& format) override {
        if (qplaintextdocumentlayout_resizeinlineobject_callback) {
            QTextInlineObject* cbval1 = new QTextInlineObject(item);
            int cbval2 = posInDocument;
            const QTextFormat& format_ret = format;
            // Cast returned reference into pointer
            QTextFormat* cbval3 = const_cast<QTextFormat*>(&format_ret);
            qplaintextdocumentlayout_resizeinlineobject_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QPlainTextDocumentLayout::resizeInlineObject(item, posInDocument, format);
    }

    // Virtual method for C ABI access and custom callback
    virtual void positionInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat& format) override {
        if (qplaintextdocumentlayout_positioninlineobject_callback) {
            QTextInlineObject* cbval1 = new QTextInlineObject(item);
            int cbval2 = posInDocument;
            const QTextFormat& format_ret = format;
            // Cast returned reference into pointer
            QTextFormat* cbval3 = const_cast<QTextFormat*>(&format_ret);
            qplaintextdocumentlayout_positioninlineobject_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QPlainTextDocumentLayout::positionInlineObject(item, posInDocument, format);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawInlineObject(QPainter* painter, const QRectF& rect, QTextInlineObject object, int posInDocument, const QTextFormat& format) override {
        if (qplaintextdocumentlayout_drawinlineobject_callback) {
            QPainter* cbval1 = painter;
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval2 = const_cast<QRectF*>(&rect_ret);
            QTextInlineObject* cbval3 = new QTextInlineObject(object);
            int cbval4 = posInDocument;
            const QTextFormat& format_ret = format;
            // Cast returned reference into pointer
            QTextFormat* cbval5 = const_cast<QTextFormat*>(&format_ret);
            qplaintextdocumentlayout_drawinlineobject_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return;
        }
        QPlainTextDocumentLayout::drawInlineObject(painter, rect, object, posInDocument, format);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qplaintextdocumentlayout_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qplaintextdocumentlayout_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPlainTextDocumentLayout::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qplaintextdocumentlayout_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qplaintextdocumentlayout_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPlainTextDocumentLayout::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qplaintextdocumentlayout_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qplaintextdocumentlayout_timerevent_callback(this, cbval1);
            return;
        }
        QPlainTextDocumentLayout::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qplaintextdocumentlayout_childevent_callback) {
            QChildEvent* cbval1 = event;
            qplaintextdocumentlayout_childevent_callback(this, cbval1);
            return;
        }
        QPlainTextDocumentLayout::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qplaintextdocumentlayout_customevent_callback) {
            QEvent* cbval1 = event;
            qplaintextdocumentlayout_customevent_callback(this, cbval1);
            return;
        }
        QPlainTextDocumentLayout::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qplaintextdocumentlayout_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qplaintextdocumentlayout_connectnotify_callback(this, cbval1);
            return;
        }
        QPlainTextDocumentLayout::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qplaintextdocumentlayout_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qplaintextdocumentlayout_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPlainTextDocumentLayout::disconnectNotify(signal);
    }

    // Friend functions
    friend void QPlainTextDocumentLayout_SuperDocumentChanged(QPlainTextDocumentLayout* self, int from, int param2, int charsAdded);
    friend void QPlainTextDocumentLayout_SuperResizeInlineObject(QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, const QTextFormat* format);
    friend void QPlainTextDocumentLayout_SuperPositionInlineObject(QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, const QTextFormat* format);
    friend void QPlainTextDocumentLayout_SuperDrawInlineObject(QPlainTextDocumentLayout* self, QPainter* painter, const QRectF* rect, QTextInlineObject* object, int posInDocument, const QTextFormat* format);
    friend void QPlainTextDocumentLayout_SuperTimerEvent(QPlainTextDocumentLayout* self, QTimerEvent* event);
    friend void QPlainTextDocumentLayout_SuperChildEvent(QPlainTextDocumentLayout* self, QChildEvent* event);
    friend void QPlainTextDocumentLayout_SuperCustomEvent(QPlainTextDocumentLayout* self, QEvent* event);
    friend void QPlainTextDocumentLayout_SuperConnectNotify(QPlainTextDocumentLayout* self, const QMetaMethod* signal);
    friend void QPlainTextDocumentLayout_SuperDisconnectNotify(QPlainTextDocumentLayout* self, const QMetaMethod* signal);
};

#endif
