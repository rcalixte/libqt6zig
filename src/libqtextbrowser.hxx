#pragma once
#ifndef LIBQTEXTBROWSER_HXX
#define LIBQTEXTBROWSER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTextBrowser
class VirtualQTextBrowser final : public QTextBrowser {
  public:
    // Virtual class public types (including callbacks and access types)
    using QTextBrowser_MetaObject_Callback = QMetaObject* (*)(const QTextBrowser*);
    using QTextBrowser_Metacast_Callback = void* (*)(QTextBrowser*, const char*);
    using QTextBrowser_Metacall_Callback = int (*)(QTextBrowser*, int, int, void**);
    using QTextBrowser_LoadResource_Callback = QVariant* (*)(QTextBrowser*, int, QUrl*);
    using QTextBrowser_Backward_Callback = void (*)(QTextBrowser*);
    using QTextBrowser_Forward_Callback = void (*)(QTextBrowser*);
    using QTextBrowser_Home_Callback = void (*)(QTextBrowser*);
    using QTextBrowser_Reload_Callback = void (*)(QTextBrowser*);
    using QTextBrowser_Event_Callback = bool (*)(QTextBrowser*, QEvent*);
    using QTextBrowser_KeyPressEvent_Callback = void (*)(QTextBrowser*, QKeyEvent*);
    using QTextBrowser_MouseMoveEvent_Callback = void (*)(QTextBrowser*, QMouseEvent*);
    using QTextBrowser_MousePressEvent_Callback = void (*)(QTextBrowser*, QMouseEvent*);
    using QTextBrowser_MouseReleaseEvent_Callback = void (*)(QTextBrowser*, QMouseEvent*);
    using QTextBrowser_FocusOutEvent_Callback = void (*)(QTextBrowser*, QFocusEvent*);
    using QTextBrowser_FocusNextPrevChild_Callback = bool (*)(QTextBrowser*, bool);
    using QTextBrowser_PaintEvent_Callback = void (*)(QTextBrowser*, QPaintEvent*);
    using QTextBrowser_DoSetSource_Callback = void (*)(QTextBrowser*, QUrl*, int);
    using QTextBrowser_InputMethodQuery_Callback = QVariant* (*)(const QTextBrowser*, int);
    using QTextBrowser_TimerEvent_Callback = void (*)(QTextBrowser*, QTimerEvent*);
    using QTextBrowser_KeyReleaseEvent_Callback = void (*)(QTextBrowser*, QKeyEvent*);
    using QTextBrowser_ResizeEvent_Callback = void (*)(QTextBrowser*, QResizeEvent*);
    using QTextBrowser_MouseDoubleClickEvent_Callback = void (*)(QTextBrowser*, QMouseEvent*);
    using QTextBrowser_ContextMenuEvent_Callback = void (*)(QTextBrowser*, QContextMenuEvent*);
    using QTextBrowser_DragEnterEvent_Callback = void (*)(QTextBrowser*, QDragEnterEvent*);
    using QTextBrowser_DragLeaveEvent_Callback = void (*)(QTextBrowser*, QDragLeaveEvent*);
    using QTextBrowser_DragMoveEvent_Callback = void (*)(QTextBrowser*, QDragMoveEvent*);
    using QTextBrowser_DropEvent_Callback = void (*)(QTextBrowser*, QDropEvent*);
    using QTextBrowser_FocusInEvent_Callback = void (*)(QTextBrowser*, QFocusEvent*);
    using QTextBrowser_ShowEvent_Callback = void (*)(QTextBrowser*, QShowEvent*);
    using QTextBrowser_ChangeEvent_Callback = void (*)(QTextBrowser*, QEvent*);
    using QTextBrowser_WheelEvent_Callback = void (*)(QTextBrowser*, QWheelEvent*);
    using QTextBrowser_CreateMimeDataFromSelection_Callback = QMimeData* (*)(const QTextBrowser*);
    using QTextBrowser_CanInsertFromMimeData_Callback = bool (*)(const QTextBrowser*, QMimeData*);
    using QTextBrowser_InsertFromMimeData_Callback = void (*)(QTextBrowser*, QMimeData*);
    using QTextBrowser_InputMethodEvent_Callback = void (*)(QTextBrowser*, QInputMethodEvent*);
    using QTextBrowser_ScrollContentsBy_Callback = void (*)(QTextBrowser*, int, int);
    using QTextBrowser_DoSetTextCursor_Callback = void (*)(QTextBrowser*, QTextCursor*);
    using QTextBrowser_MinimumSizeHint_Callback = QSize* (*)(const QTextBrowser*);
    using QTextBrowser_SizeHint_Callback = QSize* (*)(const QTextBrowser*);
    using QTextBrowser_SetupViewport_Callback = void (*)(QTextBrowser*, QWidget*);
    using QTextBrowser_EventFilter_Callback = bool (*)(QTextBrowser*, QObject*, QEvent*);
    using QTextBrowser_ViewportEvent_Callback = bool (*)(QTextBrowser*, QEvent*);
    using QTextBrowser_ViewportSizeHint_Callback = QSize* (*)(const QTextBrowser*);
    using QTextBrowser_InitStyleOption_Callback = void (*)(const QTextBrowser*, QStyleOptionFrame*);
    using QTextBrowser_DevType_Callback = int (*)(const QTextBrowser*);
    using QTextBrowser_SetVisible_Callback = void (*)(QTextBrowser*, bool);
    using QTextBrowser_HeightForWidth_Callback = int (*)(const QTextBrowser*, int);
    using QTextBrowser_HasHeightForWidth_Callback = bool (*)(const QTextBrowser*);
    using QTextBrowser_PaintEngine_Callback = QPaintEngine* (*)(const QTextBrowser*);
    using QTextBrowser_EnterEvent_Callback = void (*)(QTextBrowser*, QEnterEvent*);
    using QTextBrowser_LeaveEvent_Callback = void (*)(QTextBrowser*, QEvent*);
    using QTextBrowser_MoveEvent_Callback = void (*)(QTextBrowser*, QMoveEvent*);
    using QTextBrowser_CloseEvent_Callback = void (*)(QTextBrowser*, QCloseEvent*);
    using QTextBrowser_TabletEvent_Callback = void (*)(QTextBrowser*, QTabletEvent*);
    using QTextBrowser_ActionEvent_Callback = void (*)(QTextBrowser*, QActionEvent*);
    using QTextBrowser_HideEvent_Callback = void (*)(QTextBrowser*, QHideEvent*);
    using QTextBrowser_NativeEvent_Callback = bool (*)(QTextBrowser*, libqt_string, void*, intptr_t*);
    using QTextBrowser_Metric_Callback = int (*)(const QTextBrowser*, int);
    using QTextBrowser_InitPainter_Callback = void (*)(const QTextBrowser*, QPainter*);
    using QTextBrowser_Redirected_Callback = QPaintDevice* (*)(const QTextBrowser*, QPoint*);
    using QTextBrowser_SharedPainter_Callback = QPainter* (*)(const QTextBrowser*);
    using QTextBrowser_ChildEvent_Callback = void (*)(QTextBrowser*, QChildEvent*);
    using QTextBrowser_CustomEvent_Callback = void (*)(QTextBrowser*, QEvent*);
    using QTextBrowser_ConnectNotify_Callback = void (*)(QTextBrowser*, QMetaMethod*);
    using QTextBrowser_DisconnectNotify_Callback = void (*)(QTextBrowser*, QMetaMethod*);
    using QTextBrowser::create;
    using QTextBrowser::destroy;
    using QTextBrowser::drawFrame;
    using QTextBrowser::focusNextChild;
    using QTextBrowser::focusPreviousChild;
    using QTextBrowser::getDecodedMetricF;
    using QTextBrowser::isSignalConnected;
    using QTextBrowser::receivers;
    using QTextBrowser::sender;
    using QTextBrowser::senderSignalIndex;
    using QTextBrowser::setViewportMargins;
    using QTextBrowser::updateMicroFocus;
    using QTextBrowser::viewportMargins;
    using QTextBrowser::zoomInF;

    // Instance callback storage
    QTextBrowser_MetaObject_Callback qtextbrowser_metaobject_callback = nullptr;
    QTextBrowser_Metacast_Callback qtextbrowser_metacast_callback = nullptr;
    QTextBrowser_Metacall_Callback qtextbrowser_metacall_callback = nullptr;
    QTextBrowser_LoadResource_Callback qtextbrowser_loadresource_callback = nullptr;
    QTextBrowser_Backward_Callback qtextbrowser_backward_callback = nullptr;
    QTextBrowser_Forward_Callback qtextbrowser_forward_callback = nullptr;
    QTextBrowser_Home_Callback qtextbrowser_home_callback = nullptr;
    QTextBrowser_Reload_Callback qtextbrowser_reload_callback = nullptr;
    QTextBrowser_Event_Callback qtextbrowser_event_callback = nullptr;
    QTextBrowser_KeyPressEvent_Callback qtextbrowser_keypressevent_callback = nullptr;
    QTextBrowser_MouseMoveEvent_Callback qtextbrowser_mousemoveevent_callback = nullptr;
    QTextBrowser_MousePressEvent_Callback qtextbrowser_mousepressevent_callback = nullptr;
    QTextBrowser_MouseReleaseEvent_Callback qtextbrowser_mousereleaseevent_callback = nullptr;
    QTextBrowser_FocusOutEvent_Callback qtextbrowser_focusoutevent_callback = nullptr;
    QTextBrowser_FocusNextPrevChild_Callback qtextbrowser_focusnextprevchild_callback = nullptr;
    QTextBrowser_PaintEvent_Callback qtextbrowser_paintevent_callback = nullptr;
    QTextBrowser_DoSetSource_Callback qtextbrowser_dosetsource_callback = nullptr;
    QTextBrowser_InputMethodQuery_Callback qtextbrowser_inputmethodquery_callback = nullptr;
    QTextBrowser_TimerEvent_Callback qtextbrowser_timerevent_callback = nullptr;
    QTextBrowser_KeyReleaseEvent_Callback qtextbrowser_keyreleaseevent_callback = nullptr;
    QTextBrowser_ResizeEvent_Callback qtextbrowser_resizeevent_callback = nullptr;
    QTextBrowser_MouseDoubleClickEvent_Callback qtextbrowser_mousedoubleclickevent_callback = nullptr;
    QTextBrowser_ContextMenuEvent_Callback qtextbrowser_contextmenuevent_callback = nullptr;
    QTextBrowser_DragEnterEvent_Callback qtextbrowser_dragenterevent_callback = nullptr;
    QTextBrowser_DragLeaveEvent_Callback qtextbrowser_dragleaveevent_callback = nullptr;
    QTextBrowser_DragMoveEvent_Callback qtextbrowser_dragmoveevent_callback = nullptr;
    QTextBrowser_DropEvent_Callback qtextbrowser_dropevent_callback = nullptr;
    QTextBrowser_FocusInEvent_Callback qtextbrowser_focusinevent_callback = nullptr;
    QTextBrowser_ShowEvent_Callback qtextbrowser_showevent_callback = nullptr;
    QTextBrowser_ChangeEvent_Callback qtextbrowser_changeevent_callback = nullptr;
    QTextBrowser_WheelEvent_Callback qtextbrowser_wheelevent_callback = nullptr;
    QTextBrowser_CreateMimeDataFromSelection_Callback qtextbrowser_createmimedatafromselection_callback = nullptr;
    QTextBrowser_CanInsertFromMimeData_Callback qtextbrowser_caninsertfrommimedata_callback = nullptr;
    QTextBrowser_InsertFromMimeData_Callback qtextbrowser_insertfrommimedata_callback = nullptr;
    QTextBrowser_InputMethodEvent_Callback qtextbrowser_inputmethodevent_callback = nullptr;
    QTextBrowser_ScrollContentsBy_Callback qtextbrowser_scrollcontentsby_callback = nullptr;
    QTextBrowser_DoSetTextCursor_Callback qtextbrowser_dosettextcursor_callback = nullptr;
    QTextBrowser_MinimumSizeHint_Callback qtextbrowser_minimumsizehint_callback = nullptr;
    QTextBrowser_SizeHint_Callback qtextbrowser_sizehint_callback = nullptr;
    QTextBrowser_SetupViewport_Callback qtextbrowser_setupviewport_callback = nullptr;
    QTextBrowser_EventFilter_Callback qtextbrowser_eventfilter_callback = nullptr;
    QTextBrowser_ViewportEvent_Callback qtextbrowser_viewportevent_callback = nullptr;
    QTextBrowser_ViewportSizeHint_Callback qtextbrowser_viewportsizehint_callback = nullptr;
    QTextBrowser_InitStyleOption_Callback qtextbrowser_initstyleoption_callback = nullptr;
    QTextBrowser_DevType_Callback qtextbrowser_devtype_callback = nullptr;
    QTextBrowser_SetVisible_Callback qtextbrowser_setvisible_callback = nullptr;
    QTextBrowser_HeightForWidth_Callback qtextbrowser_heightforwidth_callback = nullptr;
    QTextBrowser_HasHeightForWidth_Callback qtextbrowser_hasheightforwidth_callback = nullptr;
    QTextBrowser_PaintEngine_Callback qtextbrowser_paintengine_callback = nullptr;
    QTextBrowser_EnterEvent_Callback qtextbrowser_enterevent_callback = nullptr;
    QTextBrowser_LeaveEvent_Callback qtextbrowser_leaveevent_callback = nullptr;
    QTextBrowser_MoveEvent_Callback qtextbrowser_moveevent_callback = nullptr;
    QTextBrowser_CloseEvent_Callback qtextbrowser_closeevent_callback = nullptr;
    QTextBrowser_TabletEvent_Callback qtextbrowser_tabletevent_callback = nullptr;
    QTextBrowser_ActionEvent_Callback qtextbrowser_actionevent_callback = nullptr;
    QTextBrowser_HideEvent_Callback qtextbrowser_hideevent_callback = nullptr;
    QTextBrowser_NativeEvent_Callback qtextbrowser_nativeevent_callback = nullptr;
    QTextBrowser_Metric_Callback qtextbrowser_metric_callback = nullptr;
    QTextBrowser_InitPainter_Callback qtextbrowser_initpainter_callback = nullptr;
    QTextBrowser_Redirected_Callback qtextbrowser_redirected_callback = nullptr;
    QTextBrowser_SharedPainter_Callback qtextbrowser_sharedpainter_callback = nullptr;
    QTextBrowser_ChildEvent_Callback qtextbrowser_childevent_callback = nullptr;
    QTextBrowser_CustomEvent_Callback qtextbrowser_customevent_callback = nullptr;
    QTextBrowser_ConnectNotify_Callback qtextbrowser_connectnotify_callback = nullptr;
    QTextBrowser_DisconnectNotify_Callback qtextbrowser_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QTextBrowser {
        using QTextBrowser::actionEvent;
        using QTextBrowser::canInsertFromMimeData;
        using QTextBrowser::changeEvent;
        using QTextBrowser::childEvent;
        using QTextBrowser::closeEvent;
        using QTextBrowser::connectNotify;
        using QTextBrowser::contextMenuEvent;
        using QTextBrowser::createMimeDataFromSelection;
        using QTextBrowser::customEvent;
        using QTextBrowser::disconnectNotify;
        using QTextBrowser::doSetSource;
        using QTextBrowser::doSetTextCursor;
        using QTextBrowser::dragEnterEvent;
        using QTextBrowser::dragLeaveEvent;
        using QTextBrowser::dragMoveEvent;
        using QTextBrowser::dropEvent;
        using QTextBrowser::enterEvent;
        using QTextBrowser::event;
        using QTextBrowser::eventFilter;
        using QTextBrowser::focusInEvent;
        using QTextBrowser::focusNextPrevChild;
        using QTextBrowser::focusOutEvent;
        using QTextBrowser::hideEvent;
        using QTextBrowser::initPainter;
        using QTextBrowser::initStyleOption;
        using QTextBrowser::inputMethodEvent;
        using QTextBrowser::insertFromMimeData;
        using QTextBrowser::keyPressEvent;
        using QTextBrowser::keyReleaseEvent;
        using QTextBrowser::leaveEvent;
        using QTextBrowser::metric;
        using QTextBrowser::mouseDoubleClickEvent;
        using QTextBrowser::mouseMoveEvent;
        using QTextBrowser::mousePressEvent;
        using QTextBrowser::mouseReleaseEvent;
        using QTextBrowser::moveEvent;
        using QTextBrowser::nativeEvent;
        using QTextBrowser::paintEvent;
        using QTextBrowser::redirected;
        using QTextBrowser::resizeEvent;
        using QTextBrowser::scrollContentsBy;
        using QTextBrowser::sharedPainter;
        using QTextBrowser::showEvent;
        using QTextBrowser::tabletEvent;
        using QTextBrowser::timerEvent;
        using QTextBrowser::viewportEvent;
        using QTextBrowser::viewportSizeHint;
        using QTextBrowser::wheelEvent;
    };

    VirtualQTextBrowser(QWidget* parent) : QTextBrowser(parent) {};
    VirtualQTextBrowser() : QTextBrowser() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtextbrowser_metaobject_callback) {
            QMetaObject* callback_ret = qtextbrowser_metaobject_callback(this);
            return callback_ret;
        }
        return QTextBrowser::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtextbrowser_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qtextbrowser_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QTextBrowser::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtextbrowser_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qtextbrowser_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTextBrowser::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant loadResource(int typeVal, const QUrl& name) override {
        if (qtextbrowser_loadresource_callback) {
            int cbval1 = typeVal;
            const QUrl& name_ret = name;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&name_ret);
            QVariant* callback_ret = qtextbrowser_loadresource_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTextBrowser::loadResource(typeVal, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual void backward() override {
        if (qtextbrowser_backward_callback) {
            qtextbrowser_backward_callback(this);
            return;
        }
        QTextBrowser::backward();
    }

    // Virtual method for C ABI access and custom callback
    virtual void forward() override {
        if (qtextbrowser_forward_callback) {
            qtextbrowser_forward_callback(this);
            return;
        }
        QTextBrowser::forward();
    }

    // Virtual method for C ABI access and custom callback
    virtual void home() override {
        if (qtextbrowser_home_callback) {
            qtextbrowser_home_callback(this);
            return;
        }
        QTextBrowser::home();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reload() override {
        if (qtextbrowser_reload_callback) {
            qtextbrowser_reload_callback(this);
            return;
        }
        QTextBrowser::reload();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qtextbrowser_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qtextbrowser_event_callback(this, cbval1);
            return callback_ret;
        }
        return QTextBrowser::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* ev) override {
        if (qtextbrowser_keypressevent_callback) {
            QKeyEvent* cbval1 = ev;
            qtextbrowser_keypressevent_callback(this, cbval1);
            return;
        }
        QTextBrowser::keyPressEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* ev) override {
        if (qtextbrowser_mousemoveevent_callback) {
            QMouseEvent* cbval1 = ev;
            qtextbrowser_mousemoveevent_callback(this, cbval1);
            return;
        }
        QTextBrowser::mouseMoveEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* ev) override {
        if (qtextbrowser_mousepressevent_callback) {
            QMouseEvent* cbval1 = ev;
            qtextbrowser_mousepressevent_callback(this, cbval1);
            return;
        }
        QTextBrowser::mousePressEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* ev) override {
        if (qtextbrowser_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = ev;
            qtextbrowser_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QTextBrowser::mouseReleaseEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* ev) override {
        if (qtextbrowser_focusoutevent_callback) {
            QFocusEvent* cbval1 = ev;
            qtextbrowser_focusoutevent_callback(this, cbval1);
            return;
        }
        QTextBrowser::focusOutEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtextbrowser_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qtextbrowser_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QTextBrowser::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qtextbrowser_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            qtextbrowser_paintevent_callback(this, cbval1);
            return;
        }
        QTextBrowser::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetSource(const QUrl& name, QTextDocument::ResourceType typeVal) override {
        if (qtextbrowser_dosetsource_callback) {
            const QUrl& name_ret = name;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&name_ret);
            int cbval2 = static_cast<int>(typeVal);
            qtextbrowser_dosetsource_callback(this, cbval1, cbval2);
            return;
        }
        QTextBrowser::doSetSource(name, typeVal);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
        if (qtextbrowser_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(property);
            QVariant* callback_ret = qtextbrowser_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTextBrowser::inputMethodQuery(property);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qtextbrowser_timerevent_callback) {
            QTimerEvent* cbval1 = e;
            qtextbrowser_timerevent_callback(this, cbval1);
            return;
        }
        QTextBrowser::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (qtextbrowser_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            qtextbrowser_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QTextBrowser::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (qtextbrowser_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            qtextbrowser_resizeevent_callback(this, cbval1);
            return;
        }
        QTextBrowser::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (qtextbrowser_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = e;
            qtextbrowser_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QTextBrowser::mouseDoubleClickEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (qtextbrowser_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = e;
            qtextbrowser_contextmenuevent_callback(this, cbval1);
            return;
        }
        QTextBrowser::contextMenuEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (qtextbrowser_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = e;
            qtextbrowser_dragenterevent_callback(this, cbval1);
            return;
        }
        QTextBrowser::dragEnterEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (qtextbrowser_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = e;
            qtextbrowser_dragleaveevent_callback(this, cbval1);
            return;
        }
        QTextBrowser::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (qtextbrowser_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = e;
            qtextbrowser_dragmoveevent_callback(this, cbval1);
            return;
        }
        QTextBrowser::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (qtextbrowser_dropevent_callback) {
            QDropEvent* cbval1 = e;
            qtextbrowser_dropevent_callback(this, cbval1);
            return;
        }
        QTextBrowser::dropEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (qtextbrowser_focusinevent_callback) {
            QFocusEvent* cbval1 = e;
            qtextbrowser_focusinevent_callback(this, cbval1);
            return;
        }
        QTextBrowser::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qtextbrowser_showevent_callback) {
            QShowEvent* cbval1 = param1;
            qtextbrowser_showevent_callback(this, cbval1);
            return;
        }
        QTextBrowser::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qtextbrowser_changeevent_callback) {
            QEvent* cbval1 = e;
            qtextbrowser_changeevent_callback(this, cbval1);
            return;
        }
        QTextBrowser::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qtextbrowser_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            qtextbrowser_wheelevent_callback(this, cbval1);
            return;
        }
        QTextBrowser::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* createMimeDataFromSelection() const override {
        if (qtextbrowser_createmimedatafromselection_callback) {
            QMimeData* callback_ret = qtextbrowser_createmimedatafromselection_callback(this);
            return callback_ret;
        }
        return QTextBrowser::createMimeDataFromSelection();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (qtextbrowser_caninsertfrommimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)source;
            bool callback_ret = qtextbrowser_caninsertfrommimedata_callback(this, cbval1);
            return callback_ret;
        }
        return QTextBrowser::canInsertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertFromMimeData(const QMimeData* source) override {
        if (qtextbrowser_insertfrommimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)source;
            qtextbrowser_insertfrommimedata_callback(this, cbval1);
            return;
        }
        QTextBrowser::insertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qtextbrowser_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qtextbrowser_inputmethodevent_callback(this, cbval1);
            return;
        }
        QTextBrowser::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qtextbrowser_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            qtextbrowser_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        QTextBrowser::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetTextCursor(const QTextCursor& cursor) override {
        if (qtextbrowser_dosettextcursor_callback) {
            const QTextCursor& cursor_ret = cursor;
            // Cast returned reference into pointer
            QTextCursor* cbval1 = const_cast<QTextCursor*>(&cursor_ret);
            qtextbrowser_dosettextcursor_callback(this, cbval1);
            return;
        }
        QTextBrowser::doSetTextCursor(cursor);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtextbrowser_minimumsizehint_callback) {
            QSize* callback_ret = qtextbrowser_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTextBrowser::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtextbrowser_sizehint_callback) {
            QSize* callback_ret = qtextbrowser_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTextBrowser::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qtextbrowser_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            qtextbrowser_setupviewport_callback(this, cbval1);
            return;
        }
        QTextBrowser::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qtextbrowser_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qtextbrowser_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTextBrowser::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (qtextbrowser_viewportevent_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qtextbrowser_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return QTextBrowser::viewportEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qtextbrowser_viewportsizehint_callback) {
            QSize* callback_ret = qtextbrowser_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTextBrowser::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qtextbrowser_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            qtextbrowser_initstyleoption_callback(this, cbval1);
            return;
        }
        QTextBrowser::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtextbrowser_devtype_callback) {
            int callback_ret = qtextbrowser_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QTextBrowser::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtextbrowser_setvisible_callback) {
            bool cbval1 = visible;
            qtextbrowser_setvisible_callback(this, cbval1);
            return;
        }
        QTextBrowser::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtextbrowser_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qtextbrowser_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTextBrowser::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtextbrowser_hasheightforwidth_callback) {
            bool callback_ret = qtextbrowser_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QTextBrowser::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtextbrowser_paintengine_callback) {
            QPaintEngine* callback_ret = qtextbrowser_paintengine_callback(this);
            return callback_ret;
        }
        return QTextBrowser::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtextbrowser_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qtextbrowser_enterevent_callback(this, cbval1);
            return;
        }
        QTextBrowser::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtextbrowser_leaveevent_callback) {
            QEvent* cbval1 = event;
            qtextbrowser_leaveevent_callback(this, cbval1);
            return;
        }
        QTextBrowser::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtextbrowser_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qtextbrowser_moveevent_callback(this, cbval1);
            return;
        }
        QTextBrowser::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtextbrowser_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qtextbrowser_closeevent_callback(this, cbval1);
            return;
        }
        QTextBrowser::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtextbrowser_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qtextbrowser_tabletevent_callback(this, cbval1);
            return;
        }
        QTextBrowser::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtextbrowser_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qtextbrowser_actionevent_callback(this, cbval1);
            return;
        }
        QTextBrowser::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtextbrowser_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qtextbrowser_hideevent_callback(this, cbval1);
            return;
        }
        QTextBrowser::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtextbrowser_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qtextbrowser_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QTextBrowser::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtextbrowser_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qtextbrowser_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTextBrowser::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtextbrowser_initpainter_callback) {
            QPainter* cbval1 = painter;
            qtextbrowser_initpainter_callback(this, cbval1);
            return;
        }
        QTextBrowser::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtextbrowser_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qtextbrowser_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QTextBrowser::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtextbrowser_sharedpainter_callback) {
            QPainter* callback_ret = qtextbrowser_sharedpainter_callback(this);
            return callback_ret;
        }
        return QTextBrowser::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtextbrowser_childevent_callback) {
            QChildEvent* cbval1 = event;
            qtextbrowser_childevent_callback(this, cbval1);
            return;
        }
        QTextBrowser::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtextbrowser_customevent_callback) {
            QEvent* cbval1 = event;
            qtextbrowser_customevent_callback(this, cbval1);
            return;
        }
        QTextBrowser::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtextbrowser_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtextbrowser_connectnotify_callback(this, cbval1);
            return;
        }
        QTextBrowser::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtextbrowser_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtextbrowser_disconnectnotify_callback(this, cbval1);
            return;
        }
        QTextBrowser::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QTextBrowser_SuperEvent(QTextBrowser* self, QEvent* e);
    friend void QTextBrowser_SuperKeyPressEvent(QTextBrowser* self, QKeyEvent* ev);
    friend void QTextBrowser_SuperMouseMoveEvent(QTextBrowser* self, QMouseEvent* ev);
    friend void QTextBrowser_SuperMousePressEvent(QTextBrowser* self, QMouseEvent* ev);
    friend void QTextBrowser_SuperMouseReleaseEvent(QTextBrowser* self, QMouseEvent* ev);
    friend void QTextBrowser_SuperFocusOutEvent(QTextBrowser* self, QFocusEvent* ev);
    friend bool QTextBrowser_SuperFocusNextPrevChild(QTextBrowser* self, bool next);
    friend void QTextBrowser_SuperPaintEvent(QTextBrowser* self, QPaintEvent* e);
    friend void QTextBrowser_SuperDoSetSource(QTextBrowser* self, const QUrl* name, int typeVal);
    friend void QTextBrowser_SuperTimerEvent(QTextBrowser* self, QTimerEvent* e);
    friend void QTextBrowser_SuperKeyReleaseEvent(QTextBrowser* self, QKeyEvent* e);
    friend void QTextBrowser_SuperResizeEvent(QTextBrowser* self, QResizeEvent* e);
    friend void QTextBrowser_SuperMouseDoubleClickEvent(QTextBrowser* self, QMouseEvent* e);
    friend void QTextBrowser_SuperContextMenuEvent(QTextBrowser* self, QContextMenuEvent* e);
    friend void QTextBrowser_SuperDragEnterEvent(QTextBrowser* self, QDragEnterEvent* e);
    friend void QTextBrowser_SuperDragLeaveEvent(QTextBrowser* self, QDragLeaveEvent* e);
    friend void QTextBrowser_SuperDragMoveEvent(QTextBrowser* self, QDragMoveEvent* e);
    friend void QTextBrowser_SuperDropEvent(QTextBrowser* self, QDropEvent* e);
    friend void QTextBrowser_SuperFocusInEvent(QTextBrowser* self, QFocusEvent* e);
    friend void QTextBrowser_SuperShowEvent(QTextBrowser* self, QShowEvent* param1);
    friend void QTextBrowser_SuperChangeEvent(QTextBrowser* self, QEvent* e);
    friend void QTextBrowser_SuperWheelEvent(QTextBrowser* self, QWheelEvent* e);
    friend QMimeData* QTextBrowser_SuperCreateMimeDataFromSelection(const QTextBrowser* self);
    friend bool QTextBrowser_SuperCanInsertFromMimeData(const QTextBrowser* self, const QMimeData* source);
    friend void QTextBrowser_SuperInsertFromMimeData(QTextBrowser* self, const QMimeData* source);
    friend void QTextBrowser_SuperInputMethodEvent(QTextBrowser* self, QInputMethodEvent* param1);
    friend void QTextBrowser_SuperScrollContentsBy(QTextBrowser* self, int dx, int dy);
    friend void QTextBrowser_SuperDoSetTextCursor(QTextBrowser* self, const QTextCursor* cursor);
    friend bool QTextBrowser_SuperEventFilter(QTextBrowser* self, QObject* param1, QEvent* param2);
    friend bool QTextBrowser_SuperViewportEvent(QTextBrowser* self, QEvent* param1);
    friend QSize* QTextBrowser_SuperViewportSizeHint(const QTextBrowser* self);
    friend void QTextBrowser_SuperInitStyleOption(const QTextBrowser* self, QStyleOptionFrame* option);
    friend void QTextBrowser_SuperEnterEvent(QTextBrowser* self, QEnterEvent* event);
    friend void QTextBrowser_SuperLeaveEvent(QTextBrowser* self, QEvent* event);
    friend void QTextBrowser_SuperMoveEvent(QTextBrowser* self, QMoveEvent* event);
    friend void QTextBrowser_SuperCloseEvent(QTextBrowser* self, QCloseEvent* event);
    friend void QTextBrowser_SuperTabletEvent(QTextBrowser* self, QTabletEvent* event);
    friend void QTextBrowser_SuperActionEvent(QTextBrowser* self, QActionEvent* event);
    friend void QTextBrowser_SuperHideEvent(QTextBrowser* self, QHideEvent* event);
    friend bool QTextBrowser_SuperNativeEvent(QTextBrowser* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QTextBrowser_SuperMetric(const QTextBrowser* self, int param1);
    friend void QTextBrowser_SuperInitPainter(const QTextBrowser* self, QPainter* painter);
    friend QPaintDevice* QTextBrowser_SuperRedirected(const QTextBrowser* self, QPoint* offset);
    friend QPainter* QTextBrowser_SuperSharedPainter(const QTextBrowser* self);
    friend void QTextBrowser_SuperChildEvent(QTextBrowser* self, QChildEvent* event);
    friend void QTextBrowser_SuperCustomEvent(QTextBrowser* self, QEvent* event);
    friend void QTextBrowser_SuperConnectNotify(QTextBrowser* self, const QMetaMethod* signal);
    friend void QTextBrowser_SuperDisconnectNotify(QTextBrowser* self, const QMetaMethod* signal);
};

#endif
