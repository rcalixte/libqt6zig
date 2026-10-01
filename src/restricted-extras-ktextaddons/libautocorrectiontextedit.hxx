#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBAUTOCORRECTIONTEXTEDIT_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBAUTOCORRECTIONTEXTEDIT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextAutoCorrectionWidgets::AutoCorrectionTextEdit
class VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit final : public TextAutoCorrectionWidgets::AutoCorrectionTextEdit {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MetaObject_Callback = QMetaObject* (*)(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Metacast_Callback = void* (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, const char*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Metacall_Callback = int (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, int, int, void**);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_KeyPressEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QKeyEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_LoadResource_Callback = QVariant* (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, int, QUrl*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InputMethodQuery_Callback = QVariant* (*)(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, int);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Event_Callback = bool (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_TimerEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QTimerEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_KeyReleaseEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QKeyEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ResizeEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QResizeEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_PaintEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QPaintEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MousePressEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QMouseEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MouseMoveEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QMouseEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MouseReleaseEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QMouseEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MouseDoubleClickEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QMouseEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusNextPrevChild_Callback = bool (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, bool);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ContextMenuEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QContextMenuEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DragEnterEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QDragEnterEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DragLeaveEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QDragLeaveEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DragMoveEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QDragMoveEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DropEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QDropEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusInEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QFocusEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusOutEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QFocusEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ShowEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QShowEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ChangeEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_WheelEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QWheelEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_CreateMimeDataFromSelection_Callback = QMimeData* (*)(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_CanInsertFromMimeData_Callback = bool (*)(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QMimeData*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InsertFromMimeData_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QMimeData*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InputMethodEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QInputMethodEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ScrollContentsBy_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, int, int);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DoSetTextCursor_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QTextCursor*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MinimumSizeHint_Callback = QSize* (*)(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SizeHint_Callback = QSize* (*)(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetupViewport_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QWidget*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_EventFilter_Callback = bool (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QObject*, QEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ViewportEvent_Callback = bool (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ViewportSizeHint_Callback = QSize* (*)(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InitStyleOption_Callback = void (*)(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QStyleOptionFrame*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DevType_Callback = int (*)(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetVisible_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, bool);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_HeightForWidth_Callback = int (*)(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, int);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_HasHeightForWidth_Callback = bool (*)(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_PaintEngine_Callback = QPaintEngine* (*)(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_EnterEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QEnterEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_LeaveEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MoveEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QMoveEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_CloseEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QCloseEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_TabletEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QTabletEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ActionEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QActionEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_HideEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QHideEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_NativeEvent_Callback = bool (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, libqt_string, void*, intptr_t*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Metric_Callback = int (*)(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, int);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InitPainter_Callback = void (*)(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QPainter*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Redirected_Callback = QPaintDevice* (*)(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QPoint*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SharedPainter_Callback = QPainter* (*)(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ChildEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QChildEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_CustomEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ConnectNotify_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QMetaMethod*);
    using TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DisconnectNotify_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionTextEdit*, QMetaMethod*);
    using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::create;
    using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::destroy;
    using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::drawFrame;
    using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::focusNextChild;
    using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::focusPreviousChild;
    using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::getDecodedMetricF;
    using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::isSignalConnected;
    using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::receivers;
    using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::sender;
    using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::senderSignalIndex;
    using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::setViewportMargins;
    using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::updateMicroFocus;
    using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::viewportMargins;
    using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::zoomInF;

    // Instance callback storage
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MetaObject_Callback textautocorrectionwidgets__autocorrectiontextedit_metaobject_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Metacast_Callback textautocorrectionwidgets__autocorrectiontextedit_metacast_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Metacall_Callback textautocorrectionwidgets__autocorrectiontextedit_metacall_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_KeyPressEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_keypressevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_LoadResource_Callback textautocorrectionwidgets__autocorrectiontextedit_loadresource_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InputMethodQuery_Callback textautocorrectionwidgets__autocorrectiontextedit_inputmethodquery_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Event_Callback textautocorrectionwidgets__autocorrectiontextedit_event_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_TimerEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_timerevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_KeyReleaseEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_keyreleaseevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ResizeEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_resizeevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_PaintEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_paintevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MousePressEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_mousepressevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MouseMoveEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_mousemoveevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MouseReleaseEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_mousereleaseevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MouseDoubleClickEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_mousedoubleclickevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusNextPrevChild_Callback textautocorrectionwidgets__autocorrectiontextedit_focusnextprevchild_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ContextMenuEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_contextmenuevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DragEnterEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_dragenterevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DragLeaveEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_dragleaveevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DragMoveEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_dragmoveevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DropEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_dropevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusInEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_focusinevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusOutEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_focusoutevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ShowEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_showevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ChangeEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_changeevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_WheelEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_wheelevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_CreateMimeDataFromSelection_Callback textautocorrectionwidgets__autocorrectiontextedit_createmimedatafromselection_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_CanInsertFromMimeData_Callback textautocorrectionwidgets__autocorrectiontextedit_caninsertfrommimedata_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InsertFromMimeData_Callback textautocorrectionwidgets__autocorrectiontextedit_insertfrommimedata_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InputMethodEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_inputmethodevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ScrollContentsBy_Callback textautocorrectionwidgets__autocorrectiontextedit_scrollcontentsby_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DoSetTextCursor_Callback textautocorrectionwidgets__autocorrectiontextedit_dosettextcursor_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MinimumSizeHint_Callback textautocorrectionwidgets__autocorrectiontextedit_minimumsizehint_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SizeHint_Callback textautocorrectionwidgets__autocorrectiontextedit_sizehint_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetupViewport_Callback textautocorrectionwidgets__autocorrectiontextedit_setupviewport_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_EventFilter_Callback textautocorrectionwidgets__autocorrectiontextedit_eventfilter_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ViewportEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_viewportevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ViewportSizeHint_Callback textautocorrectionwidgets__autocorrectiontextedit_viewportsizehint_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InitStyleOption_Callback textautocorrectionwidgets__autocorrectiontextedit_initstyleoption_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DevType_Callback textautocorrectionwidgets__autocorrectiontextedit_devtype_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetVisible_Callback textautocorrectionwidgets__autocorrectiontextedit_setvisible_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_HeightForWidth_Callback textautocorrectionwidgets__autocorrectiontextedit_heightforwidth_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_HasHeightForWidth_Callback textautocorrectionwidgets__autocorrectiontextedit_hasheightforwidth_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_PaintEngine_Callback textautocorrectionwidgets__autocorrectiontextedit_paintengine_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_EnterEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_enterevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_LeaveEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_leaveevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MoveEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_moveevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_CloseEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_closeevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_TabletEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_tabletevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ActionEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_actionevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_HideEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_hideevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_NativeEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_nativeevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Metric_Callback textautocorrectionwidgets__autocorrectiontextedit_metric_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InitPainter_Callback textautocorrectionwidgets__autocorrectiontextedit_initpainter_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Redirected_Callback textautocorrectionwidgets__autocorrectiontextedit_redirected_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SharedPainter_Callback textautocorrectionwidgets__autocorrectiontextedit_sharedpainter_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ChildEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_childevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_CustomEvent_Callback textautocorrectionwidgets__autocorrectiontextedit_customevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ConnectNotify_Callback textautocorrectionwidgets__autocorrectiontextedit_connectnotify_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DisconnectNotify_Callback textautocorrectionwidgets__autocorrectiontextedit_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextAutoCorrectionWidgets::AutoCorrectionTextEdit {
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::actionEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::canInsertFromMimeData;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::changeEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::childEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::closeEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::connectNotify;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::contextMenuEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::createMimeDataFromSelection;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::customEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::disconnectNotify;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::doSetTextCursor;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::dragEnterEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::dragLeaveEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::dragMoveEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::dropEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::enterEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::event;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::eventFilter;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::focusInEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::focusNextPrevChild;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::focusOutEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::hideEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::initPainter;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::initStyleOption;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::inputMethodEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::insertFromMimeData;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::keyPressEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::keyReleaseEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::leaveEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::metric;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::mouseDoubleClickEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::mouseMoveEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::mousePressEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::mouseReleaseEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::moveEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::nativeEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::paintEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::redirected;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::resizeEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::scrollContentsBy;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::sharedPainter;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::showEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::tabletEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::timerEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::viewportEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::viewportSizeHint;
        using TextAutoCorrectionWidgets::AutoCorrectionTextEdit::wheelEvent;
    };

    VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit(QWidget* parent) : TextAutoCorrectionWidgets::AutoCorrectionTextEdit(parent) {};
    VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit() : TextAutoCorrectionWidgets::AutoCorrectionTextEdit() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textautocorrectionwidgets__autocorrectiontextedit_metaobject_callback) {
            QMetaObject* callback_ret = textautocorrectionwidgets__autocorrectiontextedit_metaobject_callback(this);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionTextEdit::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textautocorrectionwidgets__autocorrectiontextedit_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionTextEdit::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textautocorrectionwidgets__autocorrectiontextedit_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextAutoCorrectionWidgets__AutoCorrectionTextEdit::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_keypressevent_callback) {
            QKeyEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectiontextedit_keypressevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant loadResource(int typeVal, const QUrl& name) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_loadresource_callback) {
            int cbval1 = typeVal;
            const QUrl& name_ret = name;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&name_ret);
            QVariant* callback_ret = textautocorrectionwidgets__autocorrectiontextedit_loadresource_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionTextEdit::loadResource(typeVal, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
        if (textautocorrectionwidgets__autocorrectiontextedit_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(property);
            QVariant* callback_ret = textautocorrectionwidgets__autocorrectiontextedit_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionTextEdit::inputMethodQuery(property);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = textautocorrectionwidgets__autocorrectiontextedit_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionTextEdit::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_timerevent_callback) {
            QTimerEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectiontextedit_timerevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectiontextedit_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectiontextedit_resizeevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectiontextedit_paintevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectiontextedit_mousepressevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_mousemoveevent_callback) {
            QMouseEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectiontextedit_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectiontextedit_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectiontextedit_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::mouseDoubleClickEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textautocorrectionwidgets__autocorrectiontextedit_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionTextEdit::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectiontextedit_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::contextMenuEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectiontextedit_dragenterevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::dragEnterEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectiontextedit_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectiontextedit_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_dropevent_callback) {
            QDropEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectiontextedit_dropevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::dropEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_focusinevent_callback) {
            QFocusEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectiontextedit_focusinevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectiontextedit_focusoutevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_showevent_callback) {
            QShowEvent* cbval1 = param1;
            textautocorrectionwidgets__autocorrectiontextedit_showevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_changeevent_callback) {
            QEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectiontextedit_changeevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            textautocorrectionwidgets__autocorrectiontextedit_wheelevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* createMimeDataFromSelection() const override {
        if (textautocorrectionwidgets__autocorrectiontextedit_createmimedatafromselection_callback) {
            QMimeData* callback_ret = textautocorrectionwidgets__autocorrectiontextedit_createmimedatafromselection_callback(this);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionTextEdit::createMimeDataFromSelection();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (textautocorrectionwidgets__autocorrectiontextedit_caninsertfrommimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)source;
            bool callback_ret = textautocorrectionwidgets__autocorrectiontextedit_caninsertfrommimedata_callback(this, cbval1);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionTextEdit::canInsertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertFromMimeData(const QMimeData* source) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_insertfrommimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)source;
            textautocorrectionwidgets__autocorrectiontextedit_insertfrommimedata_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::insertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textautocorrectionwidgets__autocorrectiontextedit_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            textautocorrectionwidgets__autocorrectiontextedit_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetTextCursor(const QTextCursor& cursor) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_dosettextcursor_callback) {
            const QTextCursor& cursor_ret = cursor;
            // Cast returned reference into pointer
            QTextCursor* cbval1 = const_cast<QTextCursor*>(&cursor_ret);
            textautocorrectionwidgets__autocorrectiontextedit_dosettextcursor_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::doSetTextCursor(cursor);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textautocorrectionwidgets__autocorrectiontextedit_minimumsizehint_callback) {
            QSize* callback_ret = textautocorrectionwidgets__autocorrectiontextedit_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionTextEdit::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textautocorrectionwidgets__autocorrectiontextedit_sizehint_callback) {
            QSize* callback_ret = textautocorrectionwidgets__autocorrectiontextedit_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionTextEdit::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            textautocorrectionwidgets__autocorrectiontextedit_setupviewport_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = textautocorrectionwidgets__autocorrectiontextedit_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionTextEdit::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_viewportevent_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = textautocorrectionwidgets__autocorrectiontextedit_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionTextEdit::viewportEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (textautocorrectionwidgets__autocorrectiontextedit_viewportsizehint_callback) {
            QSize* callback_ret = textautocorrectionwidgets__autocorrectiontextedit_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionTextEdit::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (textautocorrectionwidgets__autocorrectiontextedit_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            textautocorrectionwidgets__autocorrectiontextedit_initstyleoption_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textautocorrectionwidgets__autocorrectiontextedit_devtype_callback) {
            int callback_ret = textautocorrectionwidgets__autocorrectiontextedit_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextAutoCorrectionWidgets__AutoCorrectionTextEdit::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_setvisible_callback) {
            bool cbval1 = visible;
            textautocorrectionwidgets__autocorrectiontextedit_setvisible_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textautocorrectionwidgets__autocorrectiontextedit_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textautocorrectionwidgets__autocorrectiontextedit_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextAutoCorrectionWidgets__AutoCorrectionTextEdit::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textautocorrectionwidgets__autocorrectiontextedit_hasheightforwidth_callback) {
            bool callback_ret = textautocorrectionwidgets__autocorrectiontextedit_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionTextEdit::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textautocorrectionwidgets__autocorrectiontextedit_paintengine_callback) {
            QPaintEngine* callback_ret = textautocorrectionwidgets__autocorrectiontextedit_paintengine_callback(this);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionTextEdit::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectiontextedit_enterevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_leaveevent_callback) {
            QEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectiontextedit_leaveevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectiontextedit_moveevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectiontextedit_closeevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectiontextedit_tabletevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectiontextedit_actionevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_hideevent_callback) {
            QHideEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectiontextedit_hideevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textautocorrectionwidgets__autocorrectiontextedit_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionTextEdit::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textautocorrectionwidgets__autocorrectiontextedit_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textautocorrectionwidgets__autocorrectiontextedit_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextAutoCorrectionWidgets__AutoCorrectionTextEdit::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textautocorrectionwidgets__autocorrectiontextedit_initpainter_callback) {
            QPainter* cbval1 = painter;
            textautocorrectionwidgets__autocorrectiontextedit_initpainter_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textautocorrectionwidgets__autocorrectiontextedit_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textautocorrectionwidgets__autocorrectiontextedit_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionTextEdit::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textautocorrectionwidgets__autocorrectiontextedit_sharedpainter_callback) {
            QPainter* callback_ret = textautocorrectionwidgets__autocorrectiontextedit_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionTextEdit::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_childevent_callback) {
            QChildEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectiontextedit_childevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_customevent_callback) {
            QEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectiontextedit_customevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textautocorrectionwidgets__autocorrectiontextedit_connectnotify_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textautocorrectionwidgets__autocorrectiontextedit_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textautocorrectionwidgets__autocorrectiontextedit_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionTextEdit::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperKeyPressEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QKeyEvent* e);
    friend bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QEvent* e);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperTimerEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QTimerEvent* e);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperKeyReleaseEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QKeyEvent* e);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperResizeEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QResizeEvent* e);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperPaintEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QPaintEvent* e);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMousePressEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QMouseEvent* e);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMouseMoveEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QMouseEvent* e);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMouseReleaseEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QMouseEvent* e);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMouseDoubleClickEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QMouseEvent* e);
    friend bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperFocusNextPrevChild(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, bool next);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperContextMenuEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QContextMenuEvent* e);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDragEnterEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QDragEnterEvent* e);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDragLeaveEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QDragLeaveEvent* e);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDragMoveEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QDragMoveEvent* e);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDropEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QDropEvent* e);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperFocusInEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QFocusEvent* e);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperFocusOutEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QFocusEvent* e);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperShowEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QShowEvent* param1);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperChangeEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QEvent* e);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperWheelEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QWheelEvent* e);
    friend QMimeData* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperCreateMimeDataFromSelection(const TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self);
    friend bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperCanInsertFromMimeData(const TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, const QMimeData* source);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperInsertFromMimeData(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, const QMimeData* source);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperInputMethodEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QInputMethodEvent* param1);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperScrollContentsBy(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, int dx, int dy);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDoSetTextCursor(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, const QTextCursor* cursor);
    friend bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperEventFilter(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QObject* param1, QEvent* param2);
    friend bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperViewportEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QEvent* param1);
    friend QSize* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperViewportSizeHint(const TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperInitStyleOption(const TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QStyleOptionFrame* option);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperEnterEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QEnterEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperLeaveEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMoveEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QMoveEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperCloseEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QCloseEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperTabletEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QTabletEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperActionEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QActionEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperHideEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QHideEvent* event);
    friend bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperNativeEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMetric(const TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, int param1);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperInitPainter(const TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QPainter* painter);
    friend QPaintDevice* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperRedirected(const TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QPoint* offset);
    friend QPainter* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperSharedPainter(const TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperChildEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QChildEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperCustomEvent(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, QEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperConnectNotify(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, const QMetaMethod* signal);
    friend void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDisconnectNotify(TextAutoCorrectionWidgets::AutoCorrectionTextEdit* self, const QMetaMethod* signal);
};

#endif
