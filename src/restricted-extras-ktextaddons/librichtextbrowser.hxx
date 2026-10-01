#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBRICHTEXTBROWSER_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBRICHTEXTBROWSER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextCustomEditor::RichTextBrowser
class VirtualTextCustomEditorRichTextBrowser final : public TextCustomEditor::RichTextBrowser {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextCustomEditor__RichTextBrowser_MetaObject_Callback = QMetaObject* (*)(const TextCustomEditor__RichTextBrowser*);
    using TextCustomEditor__RichTextBrowser_Metacast_Callback = void* (*)(TextCustomEditor__RichTextBrowser*, const char*);
    using TextCustomEditor__RichTextBrowser_Metacall_Callback = int (*)(TextCustomEditor__RichTextBrowser*, int, int, void**);
    using TextCustomEditor__RichTextBrowser_AddExtraMenuEntry_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QMenu*, QPoint*);
    using TextCustomEditor__RichTextBrowser_ContextMenuEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QContextMenuEvent*);
    using TextCustomEditor__RichTextBrowser_Event_Callback = bool (*)(TextCustomEditor__RichTextBrowser*, QEvent*);
    using TextCustomEditor__RichTextBrowser_KeyPressEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QKeyEvent*);
    using TextCustomEditor__RichTextBrowser_WheelEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QWheelEvent*);
    using TextCustomEditor__RichTextBrowser_LoadResource_Callback = QVariant* (*)(TextCustomEditor__RichTextBrowser*, int, QUrl*);
    using TextCustomEditor__RichTextBrowser_Backward_Callback = void (*)(TextCustomEditor__RichTextBrowser*);
    using TextCustomEditor__RichTextBrowser_Forward_Callback = void (*)(TextCustomEditor__RichTextBrowser*);
    using TextCustomEditor__RichTextBrowser_Home_Callback = void (*)(TextCustomEditor__RichTextBrowser*);
    using TextCustomEditor__RichTextBrowser_Reload_Callback = void (*)(TextCustomEditor__RichTextBrowser*);
    using TextCustomEditor__RichTextBrowser_MouseMoveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QMouseEvent*);
    using TextCustomEditor__RichTextBrowser_MousePressEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QMouseEvent*);
    using TextCustomEditor__RichTextBrowser_MouseReleaseEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QMouseEvent*);
    using TextCustomEditor__RichTextBrowser_FocusOutEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QFocusEvent*);
    using TextCustomEditor__RichTextBrowser_FocusNextPrevChild_Callback = bool (*)(TextCustomEditor__RichTextBrowser*, bool);
    using TextCustomEditor__RichTextBrowser_PaintEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QPaintEvent*);
    using TextCustomEditor__RichTextBrowser_DoSetSource_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QUrl*, int);
    using TextCustomEditor__RichTextBrowser_InputMethodQuery_Callback = QVariant* (*)(const TextCustomEditor__RichTextBrowser*, int);
    using TextCustomEditor__RichTextBrowser_TimerEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QTimerEvent*);
    using TextCustomEditor__RichTextBrowser_KeyReleaseEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QKeyEvent*);
    using TextCustomEditor__RichTextBrowser_ResizeEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QResizeEvent*);
    using TextCustomEditor__RichTextBrowser_MouseDoubleClickEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QMouseEvent*);
    using TextCustomEditor__RichTextBrowser_DragEnterEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QDragEnterEvent*);
    using TextCustomEditor__RichTextBrowser_DragLeaveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QDragLeaveEvent*);
    using TextCustomEditor__RichTextBrowser_DragMoveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QDragMoveEvent*);
    using TextCustomEditor__RichTextBrowser_DropEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QDropEvent*);
    using TextCustomEditor__RichTextBrowser_FocusInEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QFocusEvent*);
    using TextCustomEditor__RichTextBrowser_ShowEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QShowEvent*);
    using TextCustomEditor__RichTextBrowser_ChangeEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QEvent*);
    using TextCustomEditor__RichTextBrowser_CreateMimeDataFromSelection_Callback = QMimeData* (*)(const TextCustomEditor__RichTextBrowser*);
    using TextCustomEditor__RichTextBrowser_CanInsertFromMimeData_Callback = bool (*)(const TextCustomEditor__RichTextBrowser*, QMimeData*);
    using TextCustomEditor__RichTextBrowser_InsertFromMimeData_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QMimeData*);
    using TextCustomEditor__RichTextBrowser_InputMethodEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QInputMethodEvent*);
    using TextCustomEditor__RichTextBrowser_ScrollContentsBy_Callback = void (*)(TextCustomEditor__RichTextBrowser*, int, int);
    using TextCustomEditor__RichTextBrowser_DoSetTextCursor_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QTextCursor*);
    using TextCustomEditor__RichTextBrowser_MinimumSizeHint_Callback = QSize* (*)(const TextCustomEditor__RichTextBrowser*);
    using TextCustomEditor__RichTextBrowser_SizeHint_Callback = QSize* (*)(const TextCustomEditor__RichTextBrowser*);
    using TextCustomEditor__RichTextBrowser_SetupViewport_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QWidget*);
    using TextCustomEditor__RichTextBrowser_EventFilter_Callback = bool (*)(TextCustomEditor__RichTextBrowser*, QObject*, QEvent*);
    using TextCustomEditor__RichTextBrowser_ViewportEvent_Callback = bool (*)(TextCustomEditor__RichTextBrowser*, QEvent*);
    using TextCustomEditor__RichTextBrowser_ViewportSizeHint_Callback = QSize* (*)(const TextCustomEditor__RichTextBrowser*);
    using TextCustomEditor__RichTextBrowser_InitStyleOption_Callback = void (*)(const TextCustomEditor__RichTextBrowser*, QStyleOptionFrame*);
    using TextCustomEditor__RichTextBrowser_DevType_Callback = int (*)(const TextCustomEditor__RichTextBrowser*);
    using TextCustomEditor__RichTextBrowser_SetVisible_Callback = void (*)(TextCustomEditor__RichTextBrowser*, bool);
    using TextCustomEditor__RichTextBrowser_HeightForWidth_Callback = int (*)(const TextCustomEditor__RichTextBrowser*, int);
    using TextCustomEditor__RichTextBrowser_HasHeightForWidth_Callback = bool (*)(const TextCustomEditor__RichTextBrowser*);
    using TextCustomEditor__RichTextBrowser_PaintEngine_Callback = QPaintEngine* (*)(const TextCustomEditor__RichTextBrowser*);
    using TextCustomEditor__RichTextBrowser_EnterEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QEnterEvent*);
    using TextCustomEditor__RichTextBrowser_LeaveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QEvent*);
    using TextCustomEditor__RichTextBrowser_MoveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QMoveEvent*);
    using TextCustomEditor__RichTextBrowser_CloseEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QCloseEvent*);
    using TextCustomEditor__RichTextBrowser_TabletEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QTabletEvent*);
    using TextCustomEditor__RichTextBrowser_ActionEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QActionEvent*);
    using TextCustomEditor__RichTextBrowser_HideEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QHideEvent*);
    using TextCustomEditor__RichTextBrowser_NativeEvent_Callback = bool (*)(TextCustomEditor__RichTextBrowser*, libqt_string, void*, intptr_t*);
    using TextCustomEditor__RichTextBrowser_Metric_Callback = int (*)(const TextCustomEditor__RichTextBrowser*, int);
    using TextCustomEditor__RichTextBrowser_InitPainter_Callback = void (*)(const TextCustomEditor__RichTextBrowser*, QPainter*);
    using TextCustomEditor__RichTextBrowser_Redirected_Callback = QPaintDevice* (*)(const TextCustomEditor__RichTextBrowser*, QPoint*);
    using TextCustomEditor__RichTextBrowser_SharedPainter_Callback = QPainter* (*)(const TextCustomEditor__RichTextBrowser*);
    using TextCustomEditor__RichTextBrowser_ChildEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QChildEvent*);
    using TextCustomEditor__RichTextBrowser_CustomEvent_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QEvent*);
    using TextCustomEditor__RichTextBrowser_ConnectNotify_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QMetaMethod*);
    using TextCustomEditor__RichTextBrowser_DisconnectNotify_Callback = void (*)(TextCustomEditor__RichTextBrowser*, QMetaMethod*);
    using TextCustomEditor::RichTextBrowser::create;
    using TextCustomEditor::RichTextBrowser::destroy;
    using TextCustomEditor::RichTextBrowser::drawFrame;
    using TextCustomEditor::RichTextBrowser::focusNextChild;
    using TextCustomEditor::RichTextBrowser::focusPreviousChild;
    using TextCustomEditor::RichTextBrowser::getDecodedMetricF;
    using TextCustomEditor::RichTextBrowser::isSignalConnected;
    using TextCustomEditor::RichTextBrowser::mousePopupMenu;
    using TextCustomEditor::RichTextBrowser::receivers;
    using TextCustomEditor::RichTextBrowser::sender;
    using TextCustomEditor::RichTextBrowser::senderSignalIndex;
    using TextCustomEditor::RichTextBrowser::setViewportMargins;
    using TextCustomEditor::RichTextBrowser::updateMicroFocus;
    using TextCustomEditor::RichTextBrowser::viewportMargins;
    using TextCustomEditor::RichTextBrowser::zoomInF;

    // Instance callback storage
    TextCustomEditor__RichTextBrowser_MetaObject_Callback textcustomeditor__richtextbrowser_metaobject_callback = nullptr;
    TextCustomEditor__RichTextBrowser_Metacast_Callback textcustomeditor__richtextbrowser_metacast_callback = nullptr;
    TextCustomEditor__RichTextBrowser_Metacall_Callback textcustomeditor__richtextbrowser_metacall_callback = nullptr;
    TextCustomEditor__RichTextBrowser_AddExtraMenuEntry_Callback textcustomeditor__richtextbrowser_addextramenuentry_callback = nullptr;
    TextCustomEditor__RichTextBrowser_ContextMenuEvent_Callback textcustomeditor__richtextbrowser_contextmenuevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_Event_Callback textcustomeditor__richtextbrowser_event_callback = nullptr;
    TextCustomEditor__RichTextBrowser_KeyPressEvent_Callback textcustomeditor__richtextbrowser_keypressevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_WheelEvent_Callback textcustomeditor__richtextbrowser_wheelevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_LoadResource_Callback textcustomeditor__richtextbrowser_loadresource_callback = nullptr;
    TextCustomEditor__RichTextBrowser_Backward_Callback textcustomeditor__richtextbrowser_backward_callback = nullptr;
    TextCustomEditor__RichTextBrowser_Forward_Callback textcustomeditor__richtextbrowser_forward_callback = nullptr;
    TextCustomEditor__RichTextBrowser_Home_Callback textcustomeditor__richtextbrowser_home_callback = nullptr;
    TextCustomEditor__RichTextBrowser_Reload_Callback textcustomeditor__richtextbrowser_reload_callback = nullptr;
    TextCustomEditor__RichTextBrowser_MouseMoveEvent_Callback textcustomeditor__richtextbrowser_mousemoveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_MousePressEvent_Callback textcustomeditor__richtextbrowser_mousepressevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_MouseReleaseEvent_Callback textcustomeditor__richtextbrowser_mousereleaseevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_FocusOutEvent_Callback textcustomeditor__richtextbrowser_focusoutevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_FocusNextPrevChild_Callback textcustomeditor__richtextbrowser_focusnextprevchild_callback = nullptr;
    TextCustomEditor__RichTextBrowser_PaintEvent_Callback textcustomeditor__richtextbrowser_paintevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_DoSetSource_Callback textcustomeditor__richtextbrowser_dosetsource_callback = nullptr;
    TextCustomEditor__RichTextBrowser_InputMethodQuery_Callback textcustomeditor__richtextbrowser_inputmethodquery_callback = nullptr;
    TextCustomEditor__RichTextBrowser_TimerEvent_Callback textcustomeditor__richtextbrowser_timerevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_KeyReleaseEvent_Callback textcustomeditor__richtextbrowser_keyreleaseevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_ResizeEvent_Callback textcustomeditor__richtextbrowser_resizeevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_MouseDoubleClickEvent_Callback textcustomeditor__richtextbrowser_mousedoubleclickevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_DragEnterEvent_Callback textcustomeditor__richtextbrowser_dragenterevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_DragLeaveEvent_Callback textcustomeditor__richtextbrowser_dragleaveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_DragMoveEvent_Callback textcustomeditor__richtextbrowser_dragmoveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_DropEvent_Callback textcustomeditor__richtextbrowser_dropevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_FocusInEvent_Callback textcustomeditor__richtextbrowser_focusinevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_ShowEvent_Callback textcustomeditor__richtextbrowser_showevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_ChangeEvent_Callback textcustomeditor__richtextbrowser_changeevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_CreateMimeDataFromSelection_Callback textcustomeditor__richtextbrowser_createmimedatafromselection_callback = nullptr;
    TextCustomEditor__RichTextBrowser_CanInsertFromMimeData_Callback textcustomeditor__richtextbrowser_caninsertfrommimedata_callback = nullptr;
    TextCustomEditor__RichTextBrowser_InsertFromMimeData_Callback textcustomeditor__richtextbrowser_insertfrommimedata_callback = nullptr;
    TextCustomEditor__RichTextBrowser_InputMethodEvent_Callback textcustomeditor__richtextbrowser_inputmethodevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_ScrollContentsBy_Callback textcustomeditor__richtextbrowser_scrollcontentsby_callback = nullptr;
    TextCustomEditor__RichTextBrowser_DoSetTextCursor_Callback textcustomeditor__richtextbrowser_dosettextcursor_callback = nullptr;
    TextCustomEditor__RichTextBrowser_MinimumSizeHint_Callback textcustomeditor__richtextbrowser_minimumsizehint_callback = nullptr;
    TextCustomEditor__RichTextBrowser_SizeHint_Callback textcustomeditor__richtextbrowser_sizehint_callback = nullptr;
    TextCustomEditor__RichTextBrowser_SetupViewport_Callback textcustomeditor__richtextbrowser_setupviewport_callback = nullptr;
    TextCustomEditor__RichTextBrowser_EventFilter_Callback textcustomeditor__richtextbrowser_eventfilter_callback = nullptr;
    TextCustomEditor__RichTextBrowser_ViewportEvent_Callback textcustomeditor__richtextbrowser_viewportevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_ViewportSizeHint_Callback textcustomeditor__richtextbrowser_viewportsizehint_callback = nullptr;
    TextCustomEditor__RichTextBrowser_InitStyleOption_Callback textcustomeditor__richtextbrowser_initstyleoption_callback = nullptr;
    TextCustomEditor__RichTextBrowser_DevType_Callback textcustomeditor__richtextbrowser_devtype_callback = nullptr;
    TextCustomEditor__RichTextBrowser_SetVisible_Callback textcustomeditor__richtextbrowser_setvisible_callback = nullptr;
    TextCustomEditor__RichTextBrowser_HeightForWidth_Callback textcustomeditor__richtextbrowser_heightforwidth_callback = nullptr;
    TextCustomEditor__RichTextBrowser_HasHeightForWidth_Callback textcustomeditor__richtextbrowser_hasheightforwidth_callback = nullptr;
    TextCustomEditor__RichTextBrowser_PaintEngine_Callback textcustomeditor__richtextbrowser_paintengine_callback = nullptr;
    TextCustomEditor__RichTextBrowser_EnterEvent_Callback textcustomeditor__richtextbrowser_enterevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_LeaveEvent_Callback textcustomeditor__richtextbrowser_leaveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_MoveEvent_Callback textcustomeditor__richtextbrowser_moveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_CloseEvent_Callback textcustomeditor__richtextbrowser_closeevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_TabletEvent_Callback textcustomeditor__richtextbrowser_tabletevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_ActionEvent_Callback textcustomeditor__richtextbrowser_actionevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_HideEvent_Callback textcustomeditor__richtextbrowser_hideevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_NativeEvent_Callback textcustomeditor__richtextbrowser_nativeevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_Metric_Callback textcustomeditor__richtextbrowser_metric_callback = nullptr;
    TextCustomEditor__RichTextBrowser_InitPainter_Callback textcustomeditor__richtextbrowser_initpainter_callback = nullptr;
    TextCustomEditor__RichTextBrowser_Redirected_Callback textcustomeditor__richtextbrowser_redirected_callback = nullptr;
    TextCustomEditor__RichTextBrowser_SharedPainter_Callback textcustomeditor__richtextbrowser_sharedpainter_callback = nullptr;
    TextCustomEditor__RichTextBrowser_ChildEvent_Callback textcustomeditor__richtextbrowser_childevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_CustomEvent_Callback textcustomeditor__richtextbrowser_customevent_callback = nullptr;
    TextCustomEditor__RichTextBrowser_ConnectNotify_Callback textcustomeditor__richtextbrowser_connectnotify_callback = nullptr;
    TextCustomEditor__RichTextBrowser_DisconnectNotify_Callback textcustomeditor__richtextbrowser_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextCustomEditor::RichTextBrowser {
        using TextCustomEditor::RichTextBrowser::actionEvent;
        using TextCustomEditor::RichTextBrowser::addExtraMenuEntry;
        using TextCustomEditor::RichTextBrowser::canInsertFromMimeData;
        using TextCustomEditor::RichTextBrowser::changeEvent;
        using TextCustomEditor::RichTextBrowser::childEvent;
        using TextCustomEditor::RichTextBrowser::closeEvent;
        using TextCustomEditor::RichTextBrowser::connectNotify;
        using TextCustomEditor::RichTextBrowser::contextMenuEvent;
        using TextCustomEditor::RichTextBrowser::createMimeDataFromSelection;
        using TextCustomEditor::RichTextBrowser::customEvent;
        using TextCustomEditor::RichTextBrowser::disconnectNotify;
        using TextCustomEditor::RichTextBrowser::doSetSource;
        using TextCustomEditor::RichTextBrowser::doSetTextCursor;
        using TextCustomEditor::RichTextBrowser::dragEnterEvent;
        using TextCustomEditor::RichTextBrowser::dragLeaveEvent;
        using TextCustomEditor::RichTextBrowser::dragMoveEvent;
        using TextCustomEditor::RichTextBrowser::dropEvent;
        using TextCustomEditor::RichTextBrowser::enterEvent;
        using TextCustomEditor::RichTextBrowser::event;
        using TextCustomEditor::RichTextBrowser::eventFilter;
        using TextCustomEditor::RichTextBrowser::focusInEvent;
        using TextCustomEditor::RichTextBrowser::focusNextPrevChild;
        using TextCustomEditor::RichTextBrowser::focusOutEvent;
        using TextCustomEditor::RichTextBrowser::hideEvent;
        using TextCustomEditor::RichTextBrowser::initPainter;
        using TextCustomEditor::RichTextBrowser::initStyleOption;
        using TextCustomEditor::RichTextBrowser::inputMethodEvent;
        using TextCustomEditor::RichTextBrowser::insertFromMimeData;
        using TextCustomEditor::RichTextBrowser::keyPressEvent;
        using TextCustomEditor::RichTextBrowser::keyReleaseEvent;
        using TextCustomEditor::RichTextBrowser::leaveEvent;
        using TextCustomEditor::RichTextBrowser::metric;
        using TextCustomEditor::RichTextBrowser::mouseDoubleClickEvent;
        using TextCustomEditor::RichTextBrowser::mouseMoveEvent;
        using TextCustomEditor::RichTextBrowser::mousePressEvent;
        using TextCustomEditor::RichTextBrowser::mouseReleaseEvent;
        using TextCustomEditor::RichTextBrowser::moveEvent;
        using TextCustomEditor::RichTextBrowser::nativeEvent;
        using TextCustomEditor::RichTextBrowser::paintEvent;
        using TextCustomEditor::RichTextBrowser::redirected;
        using TextCustomEditor::RichTextBrowser::resizeEvent;
        using TextCustomEditor::RichTextBrowser::scrollContentsBy;
        using TextCustomEditor::RichTextBrowser::sharedPainter;
        using TextCustomEditor::RichTextBrowser::showEvent;
        using TextCustomEditor::RichTextBrowser::tabletEvent;
        using TextCustomEditor::RichTextBrowser::timerEvent;
        using TextCustomEditor::RichTextBrowser::viewportEvent;
        using TextCustomEditor::RichTextBrowser::viewportSizeHint;
        using TextCustomEditor::RichTextBrowser::wheelEvent;
    };

    VirtualTextCustomEditorRichTextBrowser(QWidget* parent) : TextCustomEditor::RichTextBrowser(parent) {};
    VirtualTextCustomEditorRichTextBrowser() : TextCustomEditor::RichTextBrowser() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textcustomeditor__richtextbrowser_metaobject_callback) {
            QMetaObject* callback_ret = textcustomeditor__richtextbrowser_metaobject_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textcustomeditor__richtextbrowser_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textcustomeditor__richtextbrowser_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textcustomeditor__richtextbrowser_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textcustomeditor__richtextbrowser_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowser::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void addExtraMenuEntry(QMenu* menu, QPoint pos) override {
        if (textcustomeditor__richtextbrowser_addextramenuentry_callback) {
            QMenu* cbval1 = menu;
            QPoint* cbval2 = new QPoint(pos);
            textcustomeditor__richtextbrowser_addextramenuentry_callback(this, cbval1, cbval2);
            return;
        }
        TextCustomEditor__RichTextBrowser::addExtraMenuEntry(menu, pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textcustomeditor__richtextbrowser_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            textcustomeditor__richtextbrowser_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* ev) override {
        if (textcustomeditor__richtextbrowser_event_callback) {
            QEvent* cbval1 = ev;
            bool callback_ret = textcustomeditor__richtextbrowser_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::event(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textcustomeditor__richtextbrowser_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            textcustomeditor__richtextbrowser_keypressevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (textcustomeditor__richtextbrowser_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            textcustomeditor__richtextbrowser_wheelevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant loadResource(int typeVal, const QUrl& name) override {
        if (textcustomeditor__richtextbrowser_loadresource_callback) {
            int cbval1 = typeVal;
            const QUrl& name_ret = name;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&name_ret);
            QVariant* callback_ret = textcustomeditor__richtextbrowser_loadresource_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextBrowser::loadResource(typeVal, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual void backward() override {
        if (textcustomeditor__richtextbrowser_backward_callback) {
            textcustomeditor__richtextbrowser_backward_callback(this);
            return;
        }
        TextCustomEditor__RichTextBrowser::backward();
    }

    // Virtual method for C ABI access and custom callback
    virtual void forward() override {
        if (textcustomeditor__richtextbrowser_forward_callback) {
            textcustomeditor__richtextbrowser_forward_callback(this);
            return;
        }
        TextCustomEditor__RichTextBrowser::forward();
    }

    // Virtual method for C ABI access and custom callback
    virtual void home() override {
        if (textcustomeditor__richtextbrowser_home_callback) {
            textcustomeditor__richtextbrowser_home_callback(this);
            return;
        }
        TextCustomEditor__RichTextBrowser::home();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reload() override {
        if (textcustomeditor__richtextbrowser_reload_callback) {
            textcustomeditor__richtextbrowser_reload_callback(this);
            return;
        }
        TextCustomEditor__RichTextBrowser::reload();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* ev) override {
        if (textcustomeditor__richtextbrowser_mousemoveevent_callback) {
            QMouseEvent* cbval1 = ev;
            textcustomeditor__richtextbrowser_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::mouseMoveEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* ev) override {
        if (textcustomeditor__richtextbrowser_mousepressevent_callback) {
            QMouseEvent* cbval1 = ev;
            textcustomeditor__richtextbrowser_mousepressevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::mousePressEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* ev) override {
        if (textcustomeditor__richtextbrowser_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = ev;
            textcustomeditor__richtextbrowser_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::mouseReleaseEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* ev) override {
        if (textcustomeditor__richtextbrowser_focusoutevent_callback) {
            QFocusEvent* cbval1 = ev;
            textcustomeditor__richtextbrowser_focusoutevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::focusOutEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textcustomeditor__richtextbrowser_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textcustomeditor__richtextbrowser_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (textcustomeditor__richtextbrowser_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            textcustomeditor__richtextbrowser_paintevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetSource(const QUrl& name, QTextDocument::ResourceType typeVal) override {
        if (textcustomeditor__richtextbrowser_dosetsource_callback) {
            const QUrl& name_ret = name;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&name_ret);
            int cbval2 = static_cast<int>(typeVal);
            textcustomeditor__richtextbrowser_dosetsource_callback(this, cbval1, cbval2);
            return;
        }
        TextCustomEditor__RichTextBrowser::doSetSource(name, typeVal);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
        if (textcustomeditor__richtextbrowser_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(property);
            QVariant* callback_ret = textcustomeditor__richtextbrowser_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextBrowser::inputMethodQuery(property);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (textcustomeditor__richtextbrowser_timerevent_callback) {
            QTimerEvent* cbval1 = e;
            textcustomeditor__richtextbrowser_timerevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (textcustomeditor__richtextbrowser_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            textcustomeditor__richtextbrowser_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (textcustomeditor__richtextbrowser_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            textcustomeditor__richtextbrowser_resizeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (textcustomeditor__richtextbrowser_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = e;
            textcustomeditor__richtextbrowser_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::mouseDoubleClickEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (textcustomeditor__richtextbrowser_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = e;
            textcustomeditor__richtextbrowser_dragenterevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::dragEnterEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (textcustomeditor__richtextbrowser_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = e;
            textcustomeditor__richtextbrowser_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (textcustomeditor__richtextbrowser_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = e;
            textcustomeditor__richtextbrowser_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (textcustomeditor__richtextbrowser_dropevent_callback) {
            QDropEvent* cbval1 = e;
            textcustomeditor__richtextbrowser_dropevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::dropEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (textcustomeditor__richtextbrowser_focusinevent_callback) {
            QFocusEvent* cbval1 = e;
            textcustomeditor__richtextbrowser_focusinevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (textcustomeditor__richtextbrowser_showevent_callback) {
            QShowEvent* cbval1 = param1;
            textcustomeditor__richtextbrowser_showevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (textcustomeditor__richtextbrowser_changeevent_callback) {
            QEvent* cbval1 = e;
            textcustomeditor__richtextbrowser_changeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* createMimeDataFromSelection() const override {
        if (textcustomeditor__richtextbrowser_createmimedatafromselection_callback) {
            QMimeData* callback_ret = textcustomeditor__richtextbrowser_createmimedatafromselection_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::createMimeDataFromSelection();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (textcustomeditor__richtextbrowser_caninsertfrommimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)source;
            bool callback_ret = textcustomeditor__richtextbrowser_caninsertfrommimedata_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::canInsertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertFromMimeData(const QMimeData* source) override {
        if (textcustomeditor__richtextbrowser_insertfrommimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)source;
            textcustomeditor__richtextbrowser_insertfrommimedata_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::insertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textcustomeditor__richtextbrowser_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textcustomeditor__richtextbrowser_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (textcustomeditor__richtextbrowser_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            textcustomeditor__richtextbrowser_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        TextCustomEditor__RichTextBrowser::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetTextCursor(const QTextCursor& cursor) override {
        if (textcustomeditor__richtextbrowser_dosettextcursor_callback) {
            const QTextCursor& cursor_ret = cursor;
            // Cast returned reference into pointer
            QTextCursor* cbval1 = const_cast<QTextCursor*>(&cursor_ret);
            textcustomeditor__richtextbrowser_dosettextcursor_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::doSetTextCursor(cursor);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textcustomeditor__richtextbrowser_minimumsizehint_callback) {
            QSize* callback_ret = textcustomeditor__richtextbrowser_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextBrowser::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textcustomeditor__richtextbrowser_sizehint_callback) {
            QSize* callback_ret = textcustomeditor__richtextbrowser_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextBrowser::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (textcustomeditor__richtextbrowser_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            textcustomeditor__richtextbrowser_setupviewport_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (textcustomeditor__richtextbrowser_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = textcustomeditor__richtextbrowser_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (textcustomeditor__richtextbrowser_viewportevent_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = textcustomeditor__richtextbrowser_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::viewportEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (textcustomeditor__richtextbrowser_viewportsizehint_callback) {
            QSize* callback_ret = textcustomeditor__richtextbrowser_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextBrowser::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (textcustomeditor__richtextbrowser_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            textcustomeditor__richtextbrowser_initstyleoption_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textcustomeditor__richtextbrowser_devtype_callback) {
            int callback_ret = textcustomeditor__richtextbrowser_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowser::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textcustomeditor__richtextbrowser_setvisible_callback) {
            bool cbval1 = visible;
            textcustomeditor__richtextbrowser_setvisible_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textcustomeditor__richtextbrowser_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textcustomeditor__richtextbrowser_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowser::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textcustomeditor__richtextbrowser_hasheightforwidth_callback) {
            bool callback_ret = textcustomeditor__richtextbrowser_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textcustomeditor__richtextbrowser_paintengine_callback) {
            QPaintEngine* callback_ret = textcustomeditor__richtextbrowser_paintengine_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textcustomeditor__richtextbrowser_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textcustomeditor__richtextbrowser_enterevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textcustomeditor__richtextbrowser_leaveevent_callback) {
            QEvent* cbval1 = event;
            textcustomeditor__richtextbrowser_leaveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textcustomeditor__richtextbrowser_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textcustomeditor__richtextbrowser_moveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textcustomeditor__richtextbrowser_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            textcustomeditor__richtextbrowser_closeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textcustomeditor__richtextbrowser_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textcustomeditor__richtextbrowser_tabletevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textcustomeditor__richtextbrowser_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textcustomeditor__richtextbrowser_actionevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textcustomeditor__richtextbrowser_hideevent_callback) {
            QHideEvent* cbval1 = event;
            textcustomeditor__richtextbrowser_hideevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textcustomeditor__richtextbrowser_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textcustomeditor__richtextbrowser_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textcustomeditor__richtextbrowser_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textcustomeditor__richtextbrowser_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowser::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textcustomeditor__richtextbrowser_initpainter_callback) {
            QPainter* cbval1 = painter;
            textcustomeditor__richtextbrowser_initpainter_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textcustomeditor__richtextbrowser_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textcustomeditor__richtextbrowser_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textcustomeditor__richtextbrowser_sharedpainter_callback) {
            QPainter* callback_ret = textcustomeditor__richtextbrowser_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowser::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textcustomeditor__richtextbrowser_childevent_callback) {
            QChildEvent* cbval1 = event;
            textcustomeditor__richtextbrowser_childevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textcustomeditor__richtextbrowser_customevent_callback) {
            QEvent* cbval1 = event;
            textcustomeditor__richtextbrowser_customevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__richtextbrowser_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textcustomeditor__richtextbrowser_connectnotify_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__richtextbrowser_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textcustomeditor__richtextbrowser_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowser::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextCustomEditor__RichTextBrowser_SuperAddExtraMenuEntry(TextCustomEditor::RichTextBrowser* self, QMenu* menu, QPoint* pos);
    friend void TextCustomEditor__RichTextBrowser_SuperContextMenuEvent(TextCustomEditor::RichTextBrowser* self, QContextMenuEvent* event);
    friend bool TextCustomEditor__RichTextBrowser_SuperEvent(TextCustomEditor::RichTextBrowser* self, QEvent* ev);
    friend void TextCustomEditor__RichTextBrowser_SuperKeyPressEvent(TextCustomEditor::RichTextBrowser* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextBrowser_SuperWheelEvent(TextCustomEditor::RichTextBrowser* self, QWheelEvent* e);
    friend void TextCustomEditor__RichTextBrowser_SuperMouseMoveEvent(TextCustomEditor::RichTextBrowser* self, QMouseEvent* ev);
    friend void TextCustomEditor__RichTextBrowser_SuperMousePressEvent(TextCustomEditor::RichTextBrowser* self, QMouseEvent* ev);
    friend void TextCustomEditor__RichTextBrowser_SuperMouseReleaseEvent(TextCustomEditor::RichTextBrowser* self, QMouseEvent* ev);
    friend void TextCustomEditor__RichTextBrowser_SuperFocusOutEvent(TextCustomEditor::RichTextBrowser* self, QFocusEvent* ev);
    friend bool TextCustomEditor__RichTextBrowser_SuperFocusNextPrevChild(TextCustomEditor::RichTextBrowser* self, bool next);
    friend void TextCustomEditor__RichTextBrowser_SuperPaintEvent(TextCustomEditor::RichTextBrowser* self, QPaintEvent* e);
    friend void TextCustomEditor__RichTextBrowser_SuperDoSetSource(TextCustomEditor::RichTextBrowser* self, const QUrl* name, int typeVal);
    friend void TextCustomEditor__RichTextBrowser_SuperTimerEvent(TextCustomEditor::RichTextBrowser* self, QTimerEvent* e);
    friend void TextCustomEditor__RichTextBrowser_SuperKeyReleaseEvent(TextCustomEditor::RichTextBrowser* self, QKeyEvent* e);
    friend void TextCustomEditor__RichTextBrowser_SuperResizeEvent(TextCustomEditor::RichTextBrowser* self, QResizeEvent* e);
    friend void TextCustomEditor__RichTextBrowser_SuperMouseDoubleClickEvent(TextCustomEditor::RichTextBrowser* self, QMouseEvent* e);
    friend void TextCustomEditor__RichTextBrowser_SuperDragEnterEvent(TextCustomEditor::RichTextBrowser* self, QDragEnterEvent* e);
    friend void TextCustomEditor__RichTextBrowser_SuperDragLeaveEvent(TextCustomEditor::RichTextBrowser* self, QDragLeaveEvent* e);
    friend void TextCustomEditor__RichTextBrowser_SuperDragMoveEvent(TextCustomEditor::RichTextBrowser* self, QDragMoveEvent* e);
    friend void TextCustomEditor__RichTextBrowser_SuperDropEvent(TextCustomEditor::RichTextBrowser* self, QDropEvent* e);
    friend void TextCustomEditor__RichTextBrowser_SuperFocusInEvent(TextCustomEditor::RichTextBrowser* self, QFocusEvent* e);
    friend void TextCustomEditor__RichTextBrowser_SuperShowEvent(TextCustomEditor::RichTextBrowser* self, QShowEvent* param1);
    friend void TextCustomEditor__RichTextBrowser_SuperChangeEvent(TextCustomEditor::RichTextBrowser* self, QEvent* e);
    friend QMimeData* TextCustomEditor__RichTextBrowser_SuperCreateMimeDataFromSelection(const TextCustomEditor::RichTextBrowser* self);
    friend bool TextCustomEditor__RichTextBrowser_SuperCanInsertFromMimeData(const TextCustomEditor::RichTextBrowser* self, const QMimeData* source);
    friend void TextCustomEditor__RichTextBrowser_SuperInsertFromMimeData(TextCustomEditor::RichTextBrowser* self, const QMimeData* source);
    friend void TextCustomEditor__RichTextBrowser_SuperInputMethodEvent(TextCustomEditor::RichTextBrowser* self, QInputMethodEvent* param1);
    friend void TextCustomEditor__RichTextBrowser_SuperScrollContentsBy(TextCustomEditor::RichTextBrowser* self, int dx, int dy);
    friend void TextCustomEditor__RichTextBrowser_SuperDoSetTextCursor(TextCustomEditor::RichTextBrowser* self, const QTextCursor* cursor);
    friend bool TextCustomEditor__RichTextBrowser_SuperEventFilter(TextCustomEditor::RichTextBrowser* self, QObject* param1, QEvent* param2);
    friend bool TextCustomEditor__RichTextBrowser_SuperViewportEvent(TextCustomEditor::RichTextBrowser* self, QEvent* param1);
    friend QSize* TextCustomEditor__RichTextBrowser_SuperViewportSizeHint(const TextCustomEditor::RichTextBrowser* self);
    friend void TextCustomEditor__RichTextBrowser_SuperInitStyleOption(const TextCustomEditor::RichTextBrowser* self, QStyleOptionFrame* option);
    friend void TextCustomEditor__RichTextBrowser_SuperEnterEvent(TextCustomEditor::RichTextBrowser* self, QEnterEvent* event);
    friend void TextCustomEditor__RichTextBrowser_SuperLeaveEvent(TextCustomEditor::RichTextBrowser* self, QEvent* event);
    friend void TextCustomEditor__RichTextBrowser_SuperMoveEvent(TextCustomEditor::RichTextBrowser* self, QMoveEvent* event);
    friend void TextCustomEditor__RichTextBrowser_SuperCloseEvent(TextCustomEditor::RichTextBrowser* self, QCloseEvent* event);
    friend void TextCustomEditor__RichTextBrowser_SuperTabletEvent(TextCustomEditor::RichTextBrowser* self, QTabletEvent* event);
    friend void TextCustomEditor__RichTextBrowser_SuperActionEvent(TextCustomEditor::RichTextBrowser* self, QActionEvent* event);
    friend void TextCustomEditor__RichTextBrowser_SuperHideEvent(TextCustomEditor::RichTextBrowser* self, QHideEvent* event);
    friend bool TextCustomEditor__RichTextBrowser_SuperNativeEvent(TextCustomEditor::RichTextBrowser* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int TextCustomEditor__RichTextBrowser_SuperMetric(const TextCustomEditor::RichTextBrowser* self, int param1);
    friend void TextCustomEditor__RichTextBrowser_SuperInitPainter(const TextCustomEditor::RichTextBrowser* self, QPainter* painter);
    friend QPaintDevice* TextCustomEditor__RichTextBrowser_SuperRedirected(const TextCustomEditor::RichTextBrowser* self, QPoint* offset);
    friend QPainter* TextCustomEditor__RichTextBrowser_SuperSharedPainter(const TextCustomEditor::RichTextBrowser* self);
    friend void TextCustomEditor__RichTextBrowser_SuperChildEvent(TextCustomEditor::RichTextBrowser* self, QChildEvent* event);
    friend void TextCustomEditor__RichTextBrowser_SuperCustomEvent(TextCustomEditor::RichTextBrowser* self, QEvent* event);
    friend void TextCustomEditor__RichTextBrowser_SuperConnectNotify(TextCustomEditor::RichTextBrowser* self, const QMetaMethod* signal);
    friend void TextCustomEditor__RichTextBrowser_SuperDisconnectNotify(TextCustomEditor::RichTextBrowser* self, const QMetaMethod* signal);
};

#endif
