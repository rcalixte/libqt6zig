#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBGRAMMARRESULTTEXTEDIT_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBGRAMMARRESULTTEXTEDIT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextGrammarCheck::GrammarResultTextEdit
class VirtualTextGrammarCheckGrammarResultTextEdit final : public TextGrammarCheck::GrammarResultTextEdit {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextGrammarCheck__GrammarResultTextEdit_MetaObject_Callback = QMetaObject* (*)(const TextGrammarCheck__GrammarResultTextEdit*);
    using TextGrammarCheck__GrammarResultTextEdit_Metacast_Callback = void* (*)(TextGrammarCheck__GrammarResultTextEdit*, const char*);
    using TextGrammarCheck__GrammarResultTextEdit_Metacall_Callback = int (*)(TextGrammarCheck__GrammarResultTextEdit*, int, int, void**);
    using TextGrammarCheck__GrammarResultTextEdit_ContextMenuEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QContextMenuEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_PaintEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QPaintEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_Event_Callback = bool (*)(TextGrammarCheck__GrammarResultTextEdit*, QEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_LoadResource_Callback = QVariant* (*)(TextGrammarCheck__GrammarResultTextEdit*, int, QUrl*);
    using TextGrammarCheck__GrammarResultTextEdit_InputMethodQuery_Callback = QVariant* (*)(const TextGrammarCheck__GrammarResultTextEdit*, int);
    using TextGrammarCheck__GrammarResultTextEdit_TimerEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QTimerEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_KeyPressEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QKeyEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_KeyReleaseEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QKeyEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_ResizeEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QResizeEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_MousePressEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QMouseEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_MouseMoveEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QMouseEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_MouseReleaseEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QMouseEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_MouseDoubleClickEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QMouseEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_FocusNextPrevChild_Callback = bool (*)(TextGrammarCheck__GrammarResultTextEdit*, bool);
    using TextGrammarCheck__GrammarResultTextEdit_DragEnterEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QDragEnterEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_DragLeaveEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QDragLeaveEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_DragMoveEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QDragMoveEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_DropEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QDropEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_FocusInEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QFocusEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_FocusOutEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QFocusEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_ShowEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QShowEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_ChangeEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_WheelEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QWheelEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_CreateMimeDataFromSelection_Callback = QMimeData* (*)(const TextGrammarCheck__GrammarResultTextEdit*);
    using TextGrammarCheck__GrammarResultTextEdit_CanInsertFromMimeData_Callback = bool (*)(const TextGrammarCheck__GrammarResultTextEdit*, QMimeData*);
    using TextGrammarCheck__GrammarResultTextEdit_InsertFromMimeData_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QMimeData*);
    using TextGrammarCheck__GrammarResultTextEdit_InputMethodEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QInputMethodEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_ScrollContentsBy_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, int, int);
    using TextGrammarCheck__GrammarResultTextEdit_DoSetTextCursor_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QTextCursor*);
    using TextGrammarCheck__GrammarResultTextEdit_MinimumSizeHint_Callback = QSize* (*)(const TextGrammarCheck__GrammarResultTextEdit*);
    using TextGrammarCheck__GrammarResultTextEdit_SizeHint_Callback = QSize* (*)(const TextGrammarCheck__GrammarResultTextEdit*);
    using TextGrammarCheck__GrammarResultTextEdit_SetupViewport_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QWidget*);
    using TextGrammarCheck__GrammarResultTextEdit_EventFilter_Callback = bool (*)(TextGrammarCheck__GrammarResultTextEdit*, QObject*, QEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_ViewportEvent_Callback = bool (*)(TextGrammarCheck__GrammarResultTextEdit*, QEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_ViewportSizeHint_Callback = QSize* (*)(const TextGrammarCheck__GrammarResultTextEdit*);
    using TextGrammarCheck__GrammarResultTextEdit_InitStyleOption_Callback = void (*)(const TextGrammarCheck__GrammarResultTextEdit*, QStyleOptionFrame*);
    using TextGrammarCheck__GrammarResultTextEdit_DevType_Callback = int (*)(const TextGrammarCheck__GrammarResultTextEdit*);
    using TextGrammarCheck__GrammarResultTextEdit_SetVisible_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, bool);
    using TextGrammarCheck__GrammarResultTextEdit_HeightForWidth_Callback = int (*)(const TextGrammarCheck__GrammarResultTextEdit*, int);
    using TextGrammarCheck__GrammarResultTextEdit_HasHeightForWidth_Callback = bool (*)(const TextGrammarCheck__GrammarResultTextEdit*);
    using TextGrammarCheck__GrammarResultTextEdit_PaintEngine_Callback = QPaintEngine* (*)(const TextGrammarCheck__GrammarResultTextEdit*);
    using TextGrammarCheck__GrammarResultTextEdit_EnterEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QEnterEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_LeaveEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_MoveEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QMoveEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_CloseEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QCloseEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_TabletEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QTabletEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_ActionEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QActionEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_HideEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QHideEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_NativeEvent_Callback = bool (*)(TextGrammarCheck__GrammarResultTextEdit*, libqt_string, void*, intptr_t*);
    using TextGrammarCheck__GrammarResultTextEdit_Metric_Callback = int (*)(const TextGrammarCheck__GrammarResultTextEdit*, int);
    using TextGrammarCheck__GrammarResultTextEdit_InitPainter_Callback = void (*)(const TextGrammarCheck__GrammarResultTextEdit*, QPainter*);
    using TextGrammarCheck__GrammarResultTextEdit_Redirected_Callback = QPaintDevice* (*)(const TextGrammarCheck__GrammarResultTextEdit*, QPoint*);
    using TextGrammarCheck__GrammarResultTextEdit_SharedPainter_Callback = QPainter* (*)(const TextGrammarCheck__GrammarResultTextEdit*);
    using TextGrammarCheck__GrammarResultTextEdit_ChildEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QChildEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_CustomEvent_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QEvent*);
    using TextGrammarCheck__GrammarResultTextEdit_ConnectNotify_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QMetaMethod*);
    using TextGrammarCheck__GrammarResultTextEdit_DisconnectNotify_Callback = void (*)(TextGrammarCheck__GrammarResultTextEdit*, QMetaMethod*);
    using TextGrammarCheck::GrammarResultTextEdit::create;
    using TextGrammarCheck::GrammarResultTextEdit::destroy;
    using TextGrammarCheck::GrammarResultTextEdit::drawFrame;
    using TextGrammarCheck::GrammarResultTextEdit::focusNextChild;
    using TextGrammarCheck::GrammarResultTextEdit::focusPreviousChild;
    using TextGrammarCheck::GrammarResultTextEdit::getDecodedMetricF;
    using TextGrammarCheck::GrammarResultTextEdit::isSignalConnected;
    using TextGrammarCheck::GrammarResultTextEdit::receivers;
    using TextGrammarCheck::GrammarResultTextEdit::sender;
    using TextGrammarCheck::GrammarResultTextEdit::senderSignalIndex;
    using TextGrammarCheck::GrammarResultTextEdit::setViewportMargins;
    using TextGrammarCheck::GrammarResultTextEdit::updateMicroFocus;
    using TextGrammarCheck::GrammarResultTextEdit::viewportMargins;
    using TextGrammarCheck::GrammarResultTextEdit::zoomInF;

    // Instance callback storage
    TextGrammarCheck__GrammarResultTextEdit_MetaObject_Callback textgrammarcheck__grammarresulttextedit_metaobject_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_Metacast_Callback textgrammarcheck__grammarresulttextedit_metacast_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_Metacall_Callback textgrammarcheck__grammarresulttextedit_metacall_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_ContextMenuEvent_Callback textgrammarcheck__grammarresulttextedit_contextmenuevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_PaintEvent_Callback textgrammarcheck__grammarresulttextedit_paintevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_Event_Callback textgrammarcheck__grammarresulttextedit_event_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_LoadResource_Callback textgrammarcheck__grammarresulttextedit_loadresource_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_InputMethodQuery_Callback textgrammarcheck__grammarresulttextedit_inputmethodquery_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_TimerEvent_Callback textgrammarcheck__grammarresulttextedit_timerevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_KeyPressEvent_Callback textgrammarcheck__grammarresulttextedit_keypressevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_KeyReleaseEvent_Callback textgrammarcheck__grammarresulttextedit_keyreleaseevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_ResizeEvent_Callback textgrammarcheck__grammarresulttextedit_resizeevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_MousePressEvent_Callback textgrammarcheck__grammarresulttextedit_mousepressevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_MouseMoveEvent_Callback textgrammarcheck__grammarresulttextedit_mousemoveevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_MouseReleaseEvent_Callback textgrammarcheck__grammarresulttextedit_mousereleaseevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_MouseDoubleClickEvent_Callback textgrammarcheck__grammarresulttextedit_mousedoubleclickevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_FocusNextPrevChild_Callback textgrammarcheck__grammarresulttextedit_focusnextprevchild_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_DragEnterEvent_Callback textgrammarcheck__grammarresulttextedit_dragenterevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_DragLeaveEvent_Callback textgrammarcheck__grammarresulttextedit_dragleaveevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_DragMoveEvent_Callback textgrammarcheck__grammarresulttextedit_dragmoveevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_DropEvent_Callback textgrammarcheck__grammarresulttextedit_dropevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_FocusInEvent_Callback textgrammarcheck__grammarresulttextedit_focusinevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_FocusOutEvent_Callback textgrammarcheck__grammarresulttextedit_focusoutevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_ShowEvent_Callback textgrammarcheck__grammarresulttextedit_showevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_ChangeEvent_Callback textgrammarcheck__grammarresulttextedit_changeevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_WheelEvent_Callback textgrammarcheck__grammarresulttextedit_wheelevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_CreateMimeDataFromSelection_Callback textgrammarcheck__grammarresulttextedit_createmimedatafromselection_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_CanInsertFromMimeData_Callback textgrammarcheck__grammarresulttextedit_caninsertfrommimedata_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_InsertFromMimeData_Callback textgrammarcheck__grammarresulttextedit_insertfrommimedata_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_InputMethodEvent_Callback textgrammarcheck__grammarresulttextedit_inputmethodevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_ScrollContentsBy_Callback textgrammarcheck__grammarresulttextedit_scrollcontentsby_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_DoSetTextCursor_Callback textgrammarcheck__grammarresulttextedit_dosettextcursor_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_MinimumSizeHint_Callback textgrammarcheck__grammarresulttextedit_minimumsizehint_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_SizeHint_Callback textgrammarcheck__grammarresulttextedit_sizehint_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_SetupViewport_Callback textgrammarcheck__grammarresulttextedit_setupviewport_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_EventFilter_Callback textgrammarcheck__grammarresulttextedit_eventfilter_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_ViewportEvent_Callback textgrammarcheck__grammarresulttextedit_viewportevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_ViewportSizeHint_Callback textgrammarcheck__grammarresulttextedit_viewportsizehint_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_InitStyleOption_Callback textgrammarcheck__grammarresulttextedit_initstyleoption_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_DevType_Callback textgrammarcheck__grammarresulttextedit_devtype_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_SetVisible_Callback textgrammarcheck__grammarresulttextedit_setvisible_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_HeightForWidth_Callback textgrammarcheck__grammarresulttextedit_heightforwidth_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_HasHeightForWidth_Callback textgrammarcheck__grammarresulttextedit_hasheightforwidth_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_PaintEngine_Callback textgrammarcheck__grammarresulttextedit_paintengine_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_EnterEvent_Callback textgrammarcheck__grammarresulttextedit_enterevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_LeaveEvent_Callback textgrammarcheck__grammarresulttextedit_leaveevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_MoveEvent_Callback textgrammarcheck__grammarresulttextedit_moveevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_CloseEvent_Callback textgrammarcheck__grammarresulttextedit_closeevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_TabletEvent_Callback textgrammarcheck__grammarresulttextedit_tabletevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_ActionEvent_Callback textgrammarcheck__grammarresulttextedit_actionevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_HideEvent_Callback textgrammarcheck__grammarresulttextedit_hideevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_NativeEvent_Callback textgrammarcheck__grammarresulttextedit_nativeevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_Metric_Callback textgrammarcheck__grammarresulttextedit_metric_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_InitPainter_Callback textgrammarcheck__grammarresulttextedit_initpainter_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_Redirected_Callback textgrammarcheck__grammarresulttextedit_redirected_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_SharedPainter_Callback textgrammarcheck__grammarresulttextedit_sharedpainter_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_ChildEvent_Callback textgrammarcheck__grammarresulttextedit_childevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_CustomEvent_Callback textgrammarcheck__grammarresulttextedit_customevent_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_ConnectNotify_Callback textgrammarcheck__grammarresulttextedit_connectnotify_callback = nullptr;
    TextGrammarCheck__GrammarResultTextEdit_DisconnectNotify_Callback textgrammarcheck__grammarresulttextedit_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextGrammarCheck::GrammarResultTextEdit {
        using TextGrammarCheck::GrammarResultTextEdit::actionEvent;
        using TextGrammarCheck::GrammarResultTextEdit::canInsertFromMimeData;
        using TextGrammarCheck::GrammarResultTextEdit::changeEvent;
        using TextGrammarCheck::GrammarResultTextEdit::childEvent;
        using TextGrammarCheck::GrammarResultTextEdit::closeEvent;
        using TextGrammarCheck::GrammarResultTextEdit::connectNotify;
        using TextGrammarCheck::GrammarResultTextEdit::contextMenuEvent;
        using TextGrammarCheck::GrammarResultTextEdit::createMimeDataFromSelection;
        using TextGrammarCheck::GrammarResultTextEdit::customEvent;
        using TextGrammarCheck::GrammarResultTextEdit::disconnectNotify;
        using TextGrammarCheck::GrammarResultTextEdit::doSetTextCursor;
        using TextGrammarCheck::GrammarResultTextEdit::dragEnterEvent;
        using TextGrammarCheck::GrammarResultTextEdit::dragLeaveEvent;
        using TextGrammarCheck::GrammarResultTextEdit::dragMoveEvent;
        using TextGrammarCheck::GrammarResultTextEdit::dropEvent;
        using TextGrammarCheck::GrammarResultTextEdit::enterEvent;
        using TextGrammarCheck::GrammarResultTextEdit::event;
        using TextGrammarCheck::GrammarResultTextEdit::eventFilter;
        using TextGrammarCheck::GrammarResultTextEdit::focusInEvent;
        using TextGrammarCheck::GrammarResultTextEdit::focusNextPrevChild;
        using TextGrammarCheck::GrammarResultTextEdit::focusOutEvent;
        using TextGrammarCheck::GrammarResultTextEdit::hideEvent;
        using TextGrammarCheck::GrammarResultTextEdit::initPainter;
        using TextGrammarCheck::GrammarResultTextEdit::initStyleOption;
        using TextGrammarCheck::GrammarResultTextEdit::inputMethodEvent;
        using TextGrammarCheck::GrammarResultTextEdit::insertFromMimeData;
        using TextGrammarCheck::GrammarResultTextEdit::keyPressEvent;
        using TextGrammarCheck::GrammarResultTextEdit::keyReleaseEvent;
        using TextGrammarCheck::GrammarResultTextEdit::leaveEvent;
        using TextGrammarCheck::GrammarResultTextEdit::metric;
        using TextGrammarCheck::GrammarResultTextEdit::mouseDoubleClickEvent;
        using TextGrammarCheck::GrammarResultTextEdit::mouseMoveEvent;
        using TextGrammarCheck::GrammarResultTextEdit::mousePressEvent;
        using TextGrammarCheck::GrammarResultTextEdit::mouseReleaseEvent;
        using TextGrammarCheck::GrammarResultTextEdit::moveEvent;
        using TextGrammarCheck::GrammarResultTextEdit::nativeEvent;
        using TextGrammarCheck::GrammarResultTextEdit::paintEvent;
        using TextGrammarCheck::GrammarResultTextEdit::redirected;
        using TextGrammarCheck::GrammarResultTextEdit::resizeEvent;
        using TextGrammarCheck::GrammarResultTextEdit::scrollContentsBy;
        using TextGrammarCheck::GrammarResultTextEdit::sharedPainter;
        using TextGrammarCheck::GrammarResultTextEdit::showEvent;
        using TextGrammarCheck::GrammarResultTextEdit::tabletEvent;
        using TextGrammarCheck::GrammarResultTextEdit::timerEvent;
        using TextGrammarCheck::GrammarResultTextEdit::viewportEvent;
        using TextGrammarCheck::GrammarResultTextEdit::viewportSizeHint;
        using TextGrammarCheck::GrammarResultTextEdit::wheelEvent;
    };

    VirtualTextGrammarCheckGrammarResultTextEdit(QWidget* parent) : TextGrammarCheck::GrammarResultTextEdit(parent) {};
    VirtualTextGrammarCheckGrammarResultTextEdit() : TextGrammarCheck::GrammarResultTextEdit() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textgrammarcheck__grammarresulttextedit_metaobject_callback) {
            QMetaObject* callback_ret = textgrammarcheck__grammarresulttextedit_metaobject_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textgrammarcheck__grammarresulttextedit_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textgrammarcheck__grammarresulttextedit_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textgrammarcheck__grammarresulttextedit_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textgrammarcheck__grammarresulttextedit_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammarResultTextEdit::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textgrammarcheck__grammarresulttextedit_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            textgrammarcheck__grammarresulttextedit_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textgrammarcheck__grammarresulttextedit_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            textgrammarcheck__grammarresulttextedit_paintevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* ev) override {
        if (textgrammarcheck__grammarresulttextedit_event_callback) {
            QEvent* cbval1 = ev;
            bool callback_ret = textgrammarcheck__grammarresulttextedit_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::event(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant loadResource(int typeVal, const QUrl& name) override {
        if (textgrammarcheck__grammarresulttextedit_loadresource_callback) {
            int cbval1 = typeVal;
            const QUrl& name_ret = name;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&name_ret);
            QVariant* callback_ret = textgrammarcheck__grammarresulttextedit_loadresource_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextGrammarCheck__GrammarResultTextEdit::loadResource(typeVal, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
        if (textgrammarcheck__grammarresulttextedit_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(property);
            QVariant* callback_ret = textgrammarcheck__grammarresulttextedit_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextGrammarCheck__GrammarResultTextEdit::inputMethodQuery(property);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_timerevent_callback) {
            QTimerEvent* cbval1 = e;
            textgrammarcheck__grammarresulttextedit_timerevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_keypressevent_callback) {
            QKeyEvent* cbval1 = e;
            textgrammarcheck__grammarresulttextedit_keypressevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            textgrammarcheck__grammarresulttextedit_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            textgrammarcheck__grammarresulttextedit_resizeevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            textgrammarcheck__grammarresulttextedit_mousepressevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_mousemoveevent_callback) {
            QMouseEvent* cbval1 = e;
            textgrammarcheck__grammarresulttextedit_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            textgrammarcheck__grammarresulttextedit_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = e;
            textgrammarcheck__grammarresulttextedit_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::mouseDoubleClickEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textgrammarcheck__grammarresulttextedit_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textgrammarcheck__grammarresulttextedit_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = e;
            textgrammarcheck__grammarresulttextedit_dragenterevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::dragEnterEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = e;
            textgrammarcheck__grammarresulttextedit_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = e;
            textgrammarcheck__grammarresulttextedit_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_dropevent_callback) {
            QDropEvent* cbval1 = e;
            textgrammarcheck__grammarresulttextedit_dropevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::dropEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_focusinevent_callback) {
            QFocusEvent* cbval1 = e;
            textgrammarcheck__grammarresulttextedit_focusinevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            textgrammarcheck__grammarresulttextedit_focusoutevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (textgrammarcheck__grammarresulttextedit_showevent_callback) {
            QShowEvent* cbval1 = param1;
            textgrammarcheck__grammarresulttextedit_showevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_changeevent_callback) {
            QEvent* cbval1 = e;
            textgrammarcheck__grammarresulttextedit_changeevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (textgrammarcheck__grammarresulttextedit_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            textgrammarcheck__grammarresulttextedit_wheelevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* createMimeDataFromSelection() const override {
        if (textgrammarcheck__grammarresulttextedit_createmimedatafromselection_callback) {
            QMimeData* callback_ret = textgrammarcheck__grammarresulttextedit_createmimedatafromselection_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::createMimeDataFromSelection();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (textgrammarcheck__grammarresulttextedit_caninsertfrommimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)source;
            bool callback_ret = textgrammarcheck__grammarresulttextedit_caninsertfrommimedata_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::canInsertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertFromMimeData(const QMimeData* source) override {
        if (textgrammarcheck__grammarresulttextedit_insertfrommimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)source;
            textgrammarcheck__grammarresulttextedit_insertfrommimedata_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::insertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textgrammarcheck__grammarresulttextedit_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textgrammarcheck__grammarresulttextedit_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (textgrammarcheck__grammarresulttextedit_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            textgrammarcheck__grammarresulttextedit_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetTextCursor(const QTextCursor& cursor) override {
        if (textgrammarcheck__grammarresulttextedit_dosettextcursor_callback) {
            const QTextCursor& cursor_ret = cursor;
            // Cast returned reference into pointer
            QTextCursor* cbval1 = const_cast<QTextCursor*>(&cursor_ret);
            textgrammarcheck__grammarresulttextedit_dosettextcursor_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::doSetTextCursor(cursor);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textgrammarcheck__grammarresulttextedit_minimumsizehint_callback) {
            QSize* callback_ret = textgrammarcheck__grammarresulttextedit_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextGrammarCheck__GrammarResultTextEdit::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textgrammarcheck__grammarresulttextedit_sizehint_callback) {
            QSize* callback_ret = textgrammarcheck__grammarresulttextedit_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextGrammarCheck__GrammarResultTextEdit::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (textgrammarcheck__grammarresulttextedit_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            textgrammarcheck__grammarresulttextedit_setupviewport_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (textgrammarcheck__grammarresulttextedit_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = textgrammarcheck__grammarresulttextedit_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (textgrammarcheck__grammarresulttextedit_viewportevent_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = textgrammarcheck__grammarresulttextedit_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::viewportEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (textgrammarcheck__grammarresulttextedit_viewportsizehint_callback) {
            QSize* callback_ret = textgrammarcheck__grammarresulttextedit_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextGrammarCheck__GrammarResultTextEdit::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (textgrammarcheck__grammarresulttextedit_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            textgrammarcheck__grammarresulttextedit_initstyleoption_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textgrammarcheck__grammarresulttextedit_devtype_callback) {
            int callback_ret = textgrammarcheck__grammarresulttextedit_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammarResultTextEdit::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textgrammarcheck__grammarresulttextedit_setvisible_callback) {
            bool cbval1 = visible;
            textgrammarcheck__grammarresulttextedit_setvisible_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textgrammarcheck__grammarresulttextedit_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textgrammarcheck__grammarresulttextedit_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammarResultTextEdit::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textgrammarcheck__grammarresulttextedit_hasheightforwidth_callback) {
            bool callback_ret = textgrammarcheck__grammarresulttextedit_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textgrammarcheck__grammarresulttextedit_paintengine_callback) {
            QPaintEngine* callback_ret = textgrammarcheck__grammarresulttextedit_paintengine_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textgrammarcheck__grammarresulttextedit_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textgrammarcheck__grammarresulttextedit_enterevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textgrammarcheck__grammarresulttextedit_leaveevent_callback) {
            QEvent* cbval1 = event;
            textgrammarcheck__grammarresulttextedit_leaveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textgrammarcheck__grammarresulttextedit_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textgrammarcheck__grammarresulttextedit_moveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textgrammarcheck__grammarresulttextedit_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            textgrammarcheck__grammarresulttextedit_closeevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textgrammarcheck__grammarresulttextedit_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textgrammarcheck__grammarresulttextedit_tabletevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textgrammarcheck__grammarresulttextedit_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textgrammarcheck__grammarresulttextedit_actionevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textgrammarcheck__grammarresulttextedit_hideevent_callback) {
            QHideEvent* cbval1 = event;
            textgrammarcheck__grammarresulttextedit_hideevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textgrammarcheck__grammarresulttextedit_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textgrammarcheck__grammarresulttextedit_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textgrammarcheck__grammarresulttextedit_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textgrammarcheck__grammarresulttextedit_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammarResultTextEdit::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textgrammarcheck__grammarresulttextedit_initpainter_callback) {
            QPainter* cbval1 = painter;
            textgrammarcheck__grammarresulttextedit_initpainter_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textgrammarcheck__grammarresulttextedit_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textgrammarcheck__grammarresulttextedit_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textgrammarcheck__grammarresulttextedit_sharedpainter_callback) {
            QPainter* callback_ret = textgrammarcheck__grammarresulttextedit_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultTextEdit::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textgrammarcheck__grammarresulttextedit_childevent_callback) {
            QChildEvent* cbval1 = event;
            textgrammarcheck__grammarresulttextedit_childevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textgrammarcheck__grammarresulttextedit_customevent_callback) {
            QEvent* cbval1 = event;
            textgrammarcheck__grammarresulttextedit_customevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammarresulttextedit_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textgrammarcheck__grammarresulttextedit_connectnotify_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammarresulttextedit_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textgrammarcheck__grammarresulttextedit_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultTextEdit::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperContextMenuEvent(TextGrammarCheck::GrammarResultTextEdit* self, QContextMenuEvent* event);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperPaintEvent(TextGrammarCheck::GrammarResultTextEdit* self, QPaintEvent* event);
    friend bool TextGrammarCheck__GrammarResultTextEdit_SuperEvent(TextGrammarCheck::GrammarResultTextEdit* self, QEvent* ev);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperTimerEvent(TextGrammarCheck::GrammarResultTextEdit* self, QTimerEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperKeyPressEvent(TextGrammarCheck::GrammarResultTextEdit* self, QKeyEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperKeyReleaseEvent(TextGrammarCheck::GrammarResultTextEdit* self, QKeyEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperResizeEvent(TextGrammarCheck::GrammarResultTextEdit* self, QResizeEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperMousePressEvent(TextGrammarCheck::GrammarResultTextEdit* self, QMouseEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperMouseMoveEvent(TextGrammarCheck::GrammarResultTextEdit* self, QMouseEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperMouseReleaseEvent(TextGrammarCheck::GrammarResultTextEdit* self, QMouseEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperMouseDoubleClickEvent(TextGrammarCheck::GrammarResultTextEdit* self, QMouseEvent* e);
    friend bool TextGrammarCheck__GrammarResultTextEdit_SuperFocusNextPrevChild(TextGrammarCheck::GrammarResultTextEdit* self, bool next);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperDragEnterEvent(TextGrammarCheck::GrammarResultTextEdit* self, QDragEnterEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperDragLeaveEvent(TextGrammarCheck::GrammarResultTextEdit* self, QDragLeaveEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperDragMoveEvent(TextGrammarCheck::GrammarResultTextEdit* self, QDragMoveEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperDropEvent(TextGrammarCheck::GrammarResultTextEdit* self, QDropEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperFocusInEvent(TextGrammarCheck::GrammarResultTextEdit* self, QFocusEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperFocusOutEvent(TextGrammarCheck::GrammarResultTextEdit* self, QFocusEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperShowEvent(TextGrammarCheck::GrammarResultTextEdit* self, QShowEvent* param1);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperChangeEvent(TextGrammarCheck::GrammarResultTextEdit* self, QEvent* e);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperWheelEvent(TextGrammarCheck::GrammarResultTextEdit* self, QWheelEvent* e);
    friend QMimeData* TextGrammarCheck__GrammarResultTextEdit_SuperCreateMimeDataFromSelection(const TextGrammarCheck::GrammarResultTextEdit* self);
    friend bool TextGrammarCheck__GrammarResultTextEdit_SuperCanInsertFromMimeData(const TextGrammarCheck::GrammarResultTextEdit* self, const QMimeData* source);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperInsertFromMimeData(TextGrammarCheck::GrammarResultTextEdit* self, const QMimeData* source);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperInputMethodEvent(TextGrammarCheck::GrammarResultTextEdit* self, QInputMethodEvent* param1);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperScrollContentsBy(TextGrammarCheck::GrammarResultTextEdit* self, int dx, int dy);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperDoSetTextCursor(TextGrammarCheck::GrammarResultTextEdit* self, const QTextCursor* cursor);
    friend bool TextGrammarCheck__GrammarResultTextEdit_SuperEventFilter(TextGrammarCheck::GrammarResultTextEdit* self, QObject* param1, QEvent* param2);
    friend bool TextGrammarCheck__GrammarResultTextEdit_SuperViewportEvent(TextGrammarCheck::GrammarResultTextEdit* self, QEvent* param1);
    friend QSize* TextGrammarCheck__GrammarResultTextEdit_SuperViewportSizeHint(const TextGrammarCheck::GrammarResultTextEdit* self);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperInitStyleOption(const TextGrammarCheck::GrammarResultTextEdit* self, QStyleOptionFrame* option);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperEnterEvent(TextGrammarCheck::GrammarResultTextEdit* self, QEnterEvent* event);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperLeaveEvent(TextGrammarCheck::GrammarResultTextEdit* self, QEvent* event);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperMoveEvent(TextGrammarCheck::GrammarResultTextEdit* self, QMoveEvent* event);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperCloseEvent(TextGrammarCheck::GrammarResultTextEdit* self, QCloseEvent* event);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperTabletEvent(TextGrammarCheck::GrammarResultTextEdit* self, QTabletEvent* event);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperActionEvent(TextGrammarCheck::GrammarResultTextEdit* self, QActionEvent* event);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperHideEvent(TextGrammarCheck::GrammarResultTextEdit* self, QHideEvent* event);
    friend bool TextGrammarCheck__GrammarResultTextEdit_SuperNativeEvent(TextGrammarCheck::GrammarResultTextEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int TextGrammarCheck__GrammarResultTextEdit_SuperMetric(const TextGrammarCheck::GrammarResultTextEdit* self, int param1);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperInitPainter(const TextGrammarCheck::GrammarResultTextEdit* self, QPainter* painter);
    friend QPaintDevice* TextGrammarCheck__GrammarResultTextEdit_SuperRedirected(const TextGrammarCheck::GrammarResultTextEdit* self, QPoint* offset);
    friend QPainter* TextGrammarCheck__GrammarResultTextEdit_SuperSharedPainter(const TextGrammarCheck::GrammarResultTextEdit* self);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperChildEvent(TextGrammarCheck::GrammarResultTextEdit* self, QChildEvent* event);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperCustomEvent(TextGrammarCheck::GrammarResultTextEdit* self, QEvent* event);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperConnectNotify(TextGrammarCheck::GrammarResultTextEdit* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammarResultTextEdit_SuperDisconnectNotify(TextGrammarCheck::GrammarResultTextEdit* self, const QMetaMethod* signal);
};

#endif
