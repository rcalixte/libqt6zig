#pragma once
#ifndef LIBQTEXTEDIT_HXX
#define LIBQTEXTEDIT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTextEdit
class VirtualQTextEdit final : public QTextEdit {
  public:
    // Virtual class public types (including callbacks and access types)
    using QTextEdit_MetaObject_Callback = QMetaObject* (*)(const QTextEdit*);
    using QTextEdit_Metacast_Callback = void* (*)(QTextEdit*, const char*);
    using QTextEdit_Metacall_Callback = int (*)(QTextEdit*, int, int, void**);
    using QTextEdit_LoadResource_Callback = QVariant* (*)(QTextEdit*, int, QUrl*);
    using QTextEdit_InputMethodQuery_Callback = QVariant* (*)(const QTextEdit*, int);
    using QTextEdit_Event_Callback = bool (*)(QTextEdit*, QEvent*);
    using QTextEdit_TimerEvent_Callback = void (*)(QTextEdit*, QTimerEvent*);
    using QTextEdit_KeyPressEvent_Callback = void (*)(QTextEdit*, QKeyEvent*);
    using QTextEdit_KeyReleaseEvent_Callback = void (*)(QTextEdit*, QKeyEvent*);
    using QTextEdit_ResizeEvent_Callback = void (*)(QTextEdit*, QResizeEvent*);
    using QTextEdit_PaintEvent_Callback = void (*)(QTextEdit*, QPaintEvent*);
    using QTextEdit_MousePressEvent_Callback = void (*)(QTextEdit*, QMouseEvent*);
    using QTextEdit_MouseMoveEvent_Callback = void (*)(QTextEdit*, QMouseEvent*);
    using QTextEdit_MouseReleaseEvent_Callback = void (*)(QTextEdit*, QMouseEvent*);
    using QTextEdit_MouseDoubleClickEvent_Callback = void (*)(QTextEdit*, QMouseEvent*);
    using QTextEdit_FocusNextPrevChild_Callback = bool (*)(QTextEdit*, bool);
    using QTextEdit_ContextMenuEvent_Callback = void (*)(QTextEdit*, QContextMenuEvent*);
    using QTextEdit_DragEnterEvent_Callback = void (*)(QTextEdit*, QDragEnterEvent*);
    using QTextEdit_DragLeaveEvent_Callback = void (*)(QTextEdit*, QDragLeaveEvent*);
    using QTextEdit_DragMoveEvent_Callback = void (*)(QTextEdit*, QDragMoveEvent*);
    using QTextEdit_DropEvent_Callback = void (*)(QTextEdit*, QDropEvent*);
    using QTextEdit_FocusInEvent_Callback = void (*)(QTextEdit*, QFocusEvent*);
    using QTextEdit_FocusOutEvent_Callback = void (*)(QTextEdit*, QFocusEvent*);
    using QTextEdit_ShowEvent_Callback = void (*)(QTextEdit*, QShowEvent*);
    using QTextEdit_ChangeEvent_Callback = void (*)(QTextEdit*, QEvent*);
    using QTextEdit_WheelEvent_Callback = void (*)(QTextEdit*, QWheelEvent*);
    using QTextEdit_CreateMimeDataFromSelection_Callback = QMimeData* (*)(const QTextEdit*);
    using QTextEdit_CanInsertFromMimeData_Callback = bool (*)(const QTextEdit*, QMimeData*);
    using QTextEdit_InsertFromMimeData_Callback = void (*)(QTextEdit*, QMimeData*);
    using QTextEdit_InputMethodEvent_Callback = void (*)(QTextEdit*, QInputMethodEvent*);
    using QTextEdit_ScrollContentsBy_Callback = void (*)(QTextEdit*, int, int);
    using QTextEdit_DoSetTextCursor_Callback = void (*)(QTextEdit*, QTextCursor*);
    using QTextEdit_MinimumSizeHint_Callback = QSize* (*)(const QTextEdit*);
    using QTextEdit_SizeHint_Callback = QSize* (*)(const QTextEdit*);
    using QTextEdit_SetupViewport_Callback = void (*)(QTextEdit*, QWidget*);
    using QTextEdit_EventFilter_Callback = bool (*)(QTextEdit*, QObject*, QEvent*);
    using QTextEdit_ViewportEvent_Callback = bool (*)(QTextEdit*, QEvent*);
    using QTextEdit_ViewportSizeHint_Callback = QSize* (*)(const QTextEdit*);
    using QTextEdit_InitStyleOption_Callback = void (*)(const QTextEdit*, QStyleOptionFrame*);
    using QTextEdit_DevType_Callback = int (*)(const QTextEdit*);
    using QTextEdit_SetVisible_Callback = void (*)(QTextEdit*, bool);
    using QTextEdit_HeightForWidth_Callback = int (*)(const QTextEdit*, int);
    using QTextEdit_HasHeightForWidth_Callback = bool (*)(const QTextEdit*);
    using QTextEdit_PaintEngine_Callback = QPaintEngine* (*)(const QTextEdit*);
    using QTextEdit_EnterEvent_Callback = void (*)(QTextEdit*, QEnterEvent*);
    using QTextEdit_LeaveEvent_Callback = void (*)(QTextEdit*, QEvent*);
    using QTextEdit_MoveEvent_Callback = void (*)(QTextEdit*, QMoveEvent*);
    using QTextEdit_CloseEvent_Callback = void (*)(QTextEdit*, QCloseEvent*);
    using QTextEdit_TabletEvent_Callback = void (*)(QTextEdit*, QTabletEvent*);
    using QTextEdit_ActionEvent_Callback = void (*)(QTextEdit*, QActionEvent*);
    using QTextEdit_HideEvent_Callback = void (*)(QTextEdit*, QHideEvent*);
    using QTextEdit_NativeEvent_Callback = bool (*)(QTextEdit*, libqt_string, void*, intptr_t*);
    using QTextEdit_Metric_Callback = int (*)(const QTextEdit*, int);
    using QTextEdit_InitPainter_Callback = void (*)(const QTextEdit*, QPainter*);
    using QTextEdit_Redirected_Callback = QPaintDevice* (*)(const QTextEdit*, QPoint*);
    using QTextEdit_SharedPainter_Callback = QPainter* (*)(const QTextEdit*);
    using QTextEdit_ChildEvent_Callback = void (*)(QTextEdit*, QChildEvent*);
    using QTextEdit_CustomEvent_Callback = void (*)(QTextEdit*, QEvent*);
    using QTextEdit_ConnectNotify_Callback = void (*)(QTextEdit*, QMetaMethod*);
    using QTextEdit_DisconnectNotify_Callback = void (*)(QTextEdit*, QMetaMethod*);
    using QTextEdit::create;
    using QTextEdit::destroy;
    using QTextEdit::drawFrame;
    using QTextEdit::focusNextChild;
    using QTextEdit::focusPreviousChild;
    using QTextEdit::getDecodedMetricF;
    using QTextEdit::isSignalConnected;
    using QTextEdit::receivers;
    using QTextEdit::sender;
    using QTextEdit::senderSignalIndex;
    using QTextEdit::setViewportMargins;
    using QTextEdit::updateMicroFocus;
    using QTextEdit::viewportMargins;
    using QTextEdit::zoomInF;

    // Instance callback storage
    QTextEdit_MetaObject_Callback qtextedit_metaobject_callback = nullptr;
    QTextEdit_Metacast_Callback qtextedit_metacast_callback = nullptr;
    QTextEdit_Metacall_Callback qtextedit_metacall_callback = nullptr;
    QTextEdit_LoadResource_Callback qtextedit_loadresource_callback = nullptr;
    QTextEdit_InputMethodQuery_Callback qtextedit_inputmethodquery_callback = nullptr;
    QTextEdit_Event_Callback qtextedit_event_callback = nullptr;
    QTextEdit_TimerEvent_Callback qtextedit_timerevent_callback = nullptr;
    QTextEdit_KeyPressEvent_Callback qtextedit_keypressevent_callback = nullptr;
    QTextEdit_KeyReleaseEvent_Callback qtextedit_keyreleaseevent_callback = nullptr;
    QTextEdit_ResizeEvent_Callback qtextedit_resizeevent_callback = nullptr;
    QTextEdit_PaintEvent_Callback qtextedit_paintevent_callback = nullptr;
    QTextEdit_MousePressEvent_Callback qtextedit_mousepressevent_callback = nullptr;
    QTextEdit_MouseMoveEvent_Callback qtextedit_mousemoveevent_callback = nullptr;
    QTextEdit_MouseReleaseEvent_Callback qtextedit_mousereleaseevent_callback = nullptr;
    QTextEdit_MouseDoubleClickEvent_Callback qtextedit_mousedoubleclickevent_callback = nullptr;
    QTextEdit_FocusNextPrevChild_Callback qtextedit_focusnextprevchild_callback = nullptr;
    QTextEdit_ContextMenuEvent_Callback qtextedit_contextmenuevent_callback = nullptr;
    QTextEdit_DragEnterEvent_Callback qtextedit_dragenterevent_callback = nullptr;
    QTextEdit_DragLeaveEvent_Callback qtextedit_dragleaveevent_callback = nullptr;
    QTextEdit_DragMoveEvent_Callback qtextedit_dragmoveevent_callback = nullptr;
    QTextEdit_DropEvent_Callback qtextedit_dropevent_callback = nullptr;
    QTextEdit_FocusInEvent_Callback qtextedit_focusinevent_callback = nullptr;
    QTextEdit_FocusOutEvent_Callback qtextedit_focusoutevent_callback = nullptr;
    QTextEdit_ShowEvent_Callback qtextedit_showevent_callback = nullptr;
    QTextEdit_ChangeEvent_Callback qtextedit_changeevent_callback = nullptr;
    QTextEdit_WheelEvent_Callback qtextedit_wheelevent_callback = nullptr;
    QTextEdit_CreateMimeDataFromSelection_Callback qtextedit_createmimedatafromselection_callback = nullptr;
    QTextEdit_CanInsertFromMimeData_Callback qtextedit_caninsertfrommimedata_callback = nullptr;
    QTextEdit_InsertFromMimeData_Callback qtextedit_insertfrommimedata_callback = nullptr;
    QTextEdit_InputMethodEvent_Callback qtextedit_inputmethodevent_callback = nullptr;
    QTextEdit_ScrollContentsBy_Callback qtextedit_scrollcontentsby_callback = nullptr;
    QTextEdit_DoSetTextCursor_Callback qtextedit_dosettextcursor_callback = nullptr;
    QTextEdit_MinimumSizeHint_Callback qtextedit_minimumsizehint_callback = nullptr;
    QTextEdit_SizeHint_Callback qtextedit_sizehint_callback = nullptr;
    QTextEdit_SetupViewport_Callback qtextedit_setupviewport_callback = nullptr;
    QTextEdit_EventFilter_Callback qtextedit_eventfilter_callback = nullptr;
    QTextEdit_ViewportEvent_Callback qtextedit_viewportevent_callback = nullptr;
    QTextEdit_ViewportSizeHint_Callback qtextedit_viewportsizehint_callback = nullptr;
    QTextEdit_InitStyleOption_Callback qtextedit_initstyleoption_callback = nullptr;
    QTextEdit_DevType_Callback qtextedit_devtype_callback = nullptr;
    QTextEdit_SetVisible_Callback qtextedit_setvisible_callback = nullptr;
    QTextEdit_HeightForWidth_Callback qtextedit_heightforwidth_callback = nullptr;
    QTextEdit_HasHeightForWidth_Callback qtextedit_hasheightforwidth_callback = nullptr;
    QTextEdit_PaintEngine_Callback qtextedit_paintengine_callback = nullptr;
    QTextEdit_EnterEvent_Callback qtextedit_enterevent_callback = nullptr;
    QTextEdit_LeaveEvent_Callback qtextedit_leaveevent_callback = nullptr;
    QTextEdit_MoveEvent_Callback qtextedit_moveevent_callback = nullptr;
    QTextEdit_CloseEvent_Callback qtextedit_closeevent_callback = nullptr;
    QTextEdit_TabletEvent_Callback qtextedit_tabletevent_callback = nullptr;
    QTextEdit_ActionEvent_Callback qtextedit_actionevent_callback = nullptr;
    QTextEdit_HideEvent_Callback qtextedit_hideevent_callback = nullptr;
    QTextEdit_NativeEvent_Callback qtextedit_nativeevent_callback = nullptr;
    QTextEdit_Metric_Callback qtextedit_metric_callback = nullptr;
    QTextEdit_InitPainter_Callback qtextedit_initpainter_callback = nullptr;
    QTextEdit_Redirected_Callback qtextedit_redirected_callback = nullptr;
    QTextEdit_SharedPainter_Callback qtextedit_sharedpainter_callback = nullptr;
    QTextEdit_ChildEvent_Callback qtextedit_childevent_callback = nullptr;
    QTextEdit_CustomEvent_Callback qtextedit_customevent_callback = nullptr;
    QTextEdit_ConnectNotify_Callback qtextedit_connectnotify_callback = nullptr;
    QTextEdit_DisconnectNotify_Callback qtextedit_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QTextEdit {
        using QTextEdit::actionEvent;
        using QTextEdit::canInsertFromMimeData;
        using QTextEdit::changeEvent;
        using QTextEdit::childEvent;
        using QTextEdit::closeEvent;
        using QTextEdit::connectNotify;
        using QTextEdit::contextMenuEvent;
        using QTextEdit::createMimeDataFromSelection;
        using QTextEdit::customEvent;
        using QTextEdit::disconnectNotify;
        using QTextEdit::doSetTextCursor;
        using QTextEdit::dragEnterEvent;
        using QTextEdit::dragLeaveEvent;
        using QTextEdit::dragMoveEvent;
        using QTextEdit::dropEvent;
        using QTextEdit::enterEvent;
        using QTextEdit::event;
        using QTextEdit::eventFilter;
        using QTextEdit::focusInEvent;
        using QTextEdit::focusNextPrevChild;
        using QTextEdit::focusOutEvent;
        using QTextEdit::hideEvent;
        using QTextEdit::initPainter;
        using QTextEdit::initStyleOption;
        using QTextEdit::inputMethodEvent;
        using QTextEdit::insertFromMimeData;
        using QTextEdit::keyPressEvent;
        using QTextEdit::keyReleaseEvent;
        using QTextEdit::leaveEvent;
        using QTextEdit::metric;
        using QTextEdit::mouseDoubleClickEvent;
        using QTextEdit::mouseMoveEvent;
        using QTextEdit::mousePressEvent;
        using QTextEdit::mouseReleaseEvent;
        using QTextEdit::moveEvent;
        using QTextEdit::nativeEvent;
        using QTextEdit::paintEvent;
        using QTextEdit::redirected;
        using QTextEdit::resizeEvent;
        using QTextEdit::scrollContentsBy;
        using QTextEdit::sharedPainter;
        using QTextEdit::showEvent;
        using QTextEdit::tabletEvent;
        using QTextEdit::timerEvent;
        using QTextEdit::viewportEvent;
        using QTextEdit::viewportSizeHint;
        using QTextEdit::wheelEvent;
    };

    VirtualQTextEdit(QWidget* parent) : QTextEdit(parent) {};
    VirtualQTextEdit() : QTextEdit() {};
    VirtualQTextEdit(const QString& text) : QTextEdit(text) {};
    VirtualQTextEdit(const QString& text, QWidget* parent) : QTextEdit(text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtextedit_metaobject_callback) {
            QMetaObject* callback_ret = qtextedit_metaobject_callback(this);
            return callback_ret;
        }
        return QTextEdit::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtextedit_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qtextedit_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QTextEdit::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtextedit_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qtextedit_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTextEdit::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant loadResource(int typeVal, const QUrl& name) override {
        if (qtextedit_loadresource_callback) {
            int cbval1 = typeVal;
            const QUrl& name_ret = name;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&name_ret);
            QVariant* callback_ret = qtextedit_loadresource_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTextEdit::loadResource(typeVal, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
        if (qtextedit_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(property);
            QVariant* callback_ret = qtextedit_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTextEdit::inputMethodQuery(property);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qtextedit_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qtextedit_event_callback(this, cbval1);
            return callback_ret;
        }
        return QTextEdit::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qtextedit_timerevent_callback) {
            QTimerEvent* cbval1 = e;
            qtextedit_timerevent_callback(this, cbval1);
            return;
        }
        QTextEdit::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (qtextedit_keypressevent_callback) {
            QKeyEvent* cbval1 = e;
            qtextedit_keypressevent_callback(this, cbval1);
            return;
        }
        QTextEdit::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (qtextedit_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            qtextedit_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QTextEdit::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (qtextedit_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            qtextedit_resizeevent_callback(this, cbval1);
            return;
        }
        QTextEdit::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qtextedit_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            qtextedit_paintevent_callback(this, cbval1);
            return;
        }
        QTextEdit::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qtextedit_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            qtextedit_mousepressevent_callback(this, cbval1);
            return;
        }
        QTextEdit::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (qtextedit_mousemoveevent_callback) {
            QMouseEvent* cbval1 = e;
            qtextedit_mousemoveevent_callback(this, cbval1);
            return;
        }
        QTextEdit::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qtextedit_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            qtextedit_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QTextEdit::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (qtextedit_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = e;
            qtextedit_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QTextEdit::mouseDoubleClickEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtextedit_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qtextedit_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QTextEdit::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (qtextedit_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = e;
            qtextedit_contextmenuevent_callback(this, cbval1);
            return;
        }
        QTextEdit::contextMenuEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (qtextedit_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = e;
            qtextedit_dragenterevent_callback(this, cbval1);
            return;
        }
        QTextEdit::dragEnterEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (qtextedit_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = e;
            qtextedit_dragleaveevent_callback(this, cbval1);
            return;
        }
        QTextEdit::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (qtextedit_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = e;
            qtextedit_dragmoveevent_callback(this, cbval1);
            return;
        }
        QTextEdit::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (qtextedit_dropevent_callback) {
            QDropEvent* cbval1 = e;
            qtextedit_dropevent_callback(this, cbval1);
            return;
        }
        QTextEdit::dropEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (qtextedit_focusinevent_callback) {
            QFocusEvent* cbval1 = e;
            qtextedit_focusinevent_callback(this, cbval1);
            return;
        }
        QTextEdit::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (qtextedit_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            qtextedit_focusoutevent_callback(this, cbval1);
            return;
        }
        QTextEdit::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qtextedit_showevent_callback) {
            QShowEvent* cbval1 = param1;
            qtextedit_showevent_callback(this, cbval1);
            return;
        }
        QTextEdit::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qtextedit_changeevent_callback) {
            QEvent* cbval1 = e;
            qtextedit_changeevent_callback(this, cbval1);
            return;
        }
        QTextEdit::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qtextedit_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            qtextedit_wheelevent_callback(this, cbval1);
            return;
        }
        QTextEdit::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* createMimeDataFromSelection() const override {
        if (qtextedit_createmimedatafromselection_callback) {
            QMimeData* callback_ret = qtextedit_createmimedatafromselection_callback(this);
            return callback_ret;
        }
        return QTextEdit::createMimeDataFromSelection();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (qtextedit_caninsertfrommimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)source;
            bool callback_ret = qtextedit_caninsertfrommimedata_callback(this, cbval1);
            return callback_ret;
        }
        return QTextEdit::canInsertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertFromMimeData(const QMimeData* source) override {
        if (qtextedit_insertfrommimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)source;
            qtextedit_insertfrommimedata_callback(this, cbval1);
            return;
        }
        QTextEdit::insertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qtextedit_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qtextedit_inputmethodevent_callback(this, cbval1);
            return;
        }
        QTextEdit::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qtextedit_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            qtextedit_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        QTextEdit::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetTextCursor(const QTextCursor& cursor) override {
        if (qtextedit_dosettextcursor_callback) {
            const QTextCursor& cursor_ret = cursor;
            // Cast returned reference into pointer
            QTextCursor* cbval1 = const_cast<QTextCursor*>(&cursor_ret);
            qtextedit_dosettextcursor_callback(this, cbval1);
            return;
        }
        QTextEdit::doSetTextCursor(cursor);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtextedit_minimumsizehint_callback) {
            QSize* callback_ret = qtextedit_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTextEdit::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtextedit_sizehint_callback) {
            QSize* callback_ret = qtextedit_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTextEdit::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qtextedit_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            qtextedit_setupviewport_callback(this, cbval1);
            return;
        }
        QTextEdit::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qtextedit_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qtextedit_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTextEdit::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (qtextedit_viewportevent_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qtextedit_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return QTextEdit::viewportEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qtextedit_viewportsizehint_callback) {
            QSize* callback_ret = qtextedit_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTextEdit::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qtextedit_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            qtextedit_initstyleoption_callback(this, cbval1);
            return;
        }
        QTextEdit::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtextedit_devtype_callback) {
            int callback_ret = qtextedit_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QTextEdit::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtextedit_setvisible_callback) {
            bool cbval1 = visible;
            qtextedit_setvisible_callback(this, cbval1);
            return;
        }
        QTextEdit::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtextedit_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qtextedit_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTextEdit::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtextedit_hasheightforwidth_callback) {
            bool callback_ret = qtextedit_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QTextEdit::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtextedit_paintengine_callback) {
            QPaintEngine* callback_ret = qtextedit_paintengine_callback(this);
            return callback_ret;
        }
        return QTextEdit::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtextedit_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qtextedit_enterevent_callback(this, cbval1);
            return;
        }
        QTextEdit::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtextedit_leaveevent_callback) {
            QEvent* cbval1 = event;
            qtextedit_leaveevent_callback(this, cbval1);
            return;
        }
        QTextEdit::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtextedit_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qtextedit_moveevent_callback(this, cbval1);
            return;
        }
        QTextEdit::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtextedit_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qtextedit_closeevent_callback(this, cbval1);
            return;
        }
        QTextEdit::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtextedit_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qtextedit_tabletevent_callback(this, cbval1);
            return;
        }
        QTextEdit::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtextedit_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qtextedit_actionevent_callback(this, cbval1);
            return;
        }
        QTextEdit::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtextedit_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qtextedit_hideevent_callback(this, cbval1);
            return;
        }
        QTextEdit::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtextedit_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qtextedit_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QTextEdit::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtextedit_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qtextedit_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTextEdit::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtextedit_initpainter_callback) {
            QPainter* cbval1 = painter;
            qtextedit_initpainter_callback(this, cbval1);
            return;
        }
        QTextEdit::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtextedit_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qtextedit_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QTextEdit::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtextedit_sharedpainter_callback) {
            QPainter* callback_ret = qtextedit_sharedpainter_callback(this);
            return callback_ret;
        }
        return QTextEdit::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtextedit_childevent_callback) {
            QChildEvent* cbval1 = event;
            qtextedit_childevent_callback(this, cbval1);
            return;
        }
        QTextEdit::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtextedit_customevent_callback) {
            QEvent* cbval1 = event;
            qtextedit_customevent_callback(this, cbval1);
            return;
        }
        QTextEdit::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtextedit_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtextedit_connectnotify_callback(this, cbval1);
            return;
        }
        QTextEdit::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtextedit_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtextedit_disconnectnotify_callback(this, cbval1);
            return;
        }
        QTextEdit::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QTextEdit_SuperEvent(QTextEdit* self, QEvent* e);
    friend void QTextEdit_SuperTimerEvent(QTextEdit* self, QTimerEvent* e);
    friend void QTextEdit_SuperKeyPressEvent(QTextEdit* self, QKeyEvent* e);
    friend void QTextEdit_SuperKeyReleaseEvent(QTextEdit* self, QKeyEvent* e);
    friend void QTextEdit_SuperResizeEvent(QTextEdit* self, QResizeEvent* e);
    friend void QTextEdit_SuperPaintEvent(QTextEdit* self, QPaintEvent* e);
    friend void QTextEdit_SuperMousePressEvent(QTextEdit* self, QMouseEvent* e);
    friend void QTextEdit_SuperMouseMoveEvent(QTextEdit* self, QMouseEvent* e);
    friend void QTextEdit_SuperMouseReleaseEvent(QTextEdit* self, QMouseEvent* e);
    friend void QTextEdit_SuperMouseDoubleClickEvent(QTextEdit* self, QMouseEvent* e);
    friend bool QTextEdit_SuperFocusNextPrevChild(QTextEdit* self, bool next);
    friend void QTextEdit_SuperContextMenuEvent(QTextEdit* self, QContextMenuEvent* e);
    friend void QTextEdit_SuperDragEnterEvent(QTextEdit* self, QDragEnterEvent* e);
    friend void QTextEdit_SuperDragLeaveEvent(QTextEdit* self, QDragLeaveEvent* e);
    friend void QTextEdit_SuperDragMoveEvent(QTextEdit* self, QDragMoveEvent* e);
    friend void QTextEdit_SuperDropEvent(QTextEdit* self, QDropEvent* e);
    friend void QTextEdit_SuperFocusInEvent(QTextEdit* self, QFocusEvent* e);
    friend void QTextEdit_SuperFocusOutEvent(QTextEdit* self, QFocusEvent* e);
    friend void QTextEdit_SuperShowEvent(QTextEdit* self, QShowEvent* param1);
    friend void QTextEdit_SuperChangeEvent(QTextEdit* self, QEvent* e);
    friend void QTextEdit_SuperWheelEvent(QTextEdit* self, QWheelEvent* e);
    friend QMimeData* QTextEdit_SuperCreateMimeDataFromSelection(const QTextEdit* self);
    friend bool QTextEdit_SuperCanInsertFromMimeData(const QTextEdit* self, const QMimeData* source);
    friend void QTextEdit_SuperInsertFromMimeData(QTextEdit* self, const QMimeData* source);
    friend void QTextEdit_SuperInputMethodEvent(QTextEdit* self, QInputMethodEvent* param1);
    friend void QTextEdit_SuperScrollContentsBy(QTextEdit* self, int dx, int dy);
    friend void QTextEdit_SuperDoSetTextCursor(QTextEdit* self, const QTextCursor* cursor);
    friend bool QTextEdit_SuperEventFilter(QTextEdit* self, QObject* param1, QEvent* param2);
    friend bool QTextEdit_SuperViewportEvent(QTextEdit* self, QEvent* param1);
    friend QSize* QTextEdit_SuperViewportSizeHint(const QTextEdit* self);
    friend void QTextEdit_SuperInitStyleOption(const QTextEdit* self, QStyleOptionFrame* option);
    friend void QTextEdit_SuperEnterEvent(QTextEdit* self, QEnterEvent* event);
    friend void QTextEdit_SuperLeaveEvent(QTextEdit* self, QEvent* event);
    friend void QTextEdit_SuperMoveEvent(QTextEdit* self, QMoveEvent* event);
    friend void QTextEdit_SuperCloseEvent(QTextEdit* self, QCloseEvent* event);
    friend void QTextEdit_SuperTabletEvent(QTextEdit* self, QTabletEvent* event);
    friend void QTextEdit_SuperActionEvent(QTextEdit* self, QActionEvent* event);
    friend void QTextEdit_SuperHideEvent(QTextEdit* self, QHideEvent* event);
    friend bool QTextEdit_SuperNativeEvent(QTextEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QTextEdit_SuperMetric(const QTextEdit* self, int param1);
    friend void QTextEdit_SuperInitPainter(const QTextEdit* self, QPainter* painter);
    friend QPaintDevice* QTextEdit_SuperRedirected(const QTextEdit* self, QPoint* offset);
    friend QPainter* QTextEdit_SuperSharedPainter(const QTextEdit* self);
    friend void QTextEdit_SuperChildEvent(QTextEdit* self, QChildEvent* event);
    friend void QTextEdit_SuperCustomEvent(QTextEdit* self, QEvent* event);
    friend void QTextEdit_SuperConnectNotify(QTextEdit* self, const QMetaMethod* signal);
    friend void QTextEdit_SuperDisconnectNotify(QTextEdit* self, const QMetaMethod* signal);
};

#endif
