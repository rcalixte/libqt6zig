#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBRICHTEXTEDITOR_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBRICHTEXTEDITOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextCustomEditor::RichTextEditor
class VirtualTextCustomEditorRichTextEditor final : public TextCustomEditor::RichTextEditor {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextCustomEditor__RichTextEditor_MetaObject_Callback = QMetaObject* (*)(const TextCustomEditor__RichTextEditor*);
    using TextCustomEditor__RichTextEditor_Metacast_Callback = void* (*)(TextCustomEditor__RichTextEditor*, const char*);
    using TextCustomEditor__RichTextEditor_Metacall_Callback = int (*)(TextCustomEditor__RichTextEditor*, int, int, void**);
    using TextCustomEditor__RichTextEditor_SetReadOnly_Callback = void (*)(TextCustomEditor__RichTextEditor*, bool);
    using TextCustomEditor__RichTextEditor_CreateHighlighter_Callback = void (*)(TextCustomEditor__RichTextEditor*);
    using TextCustomEditor__RichTextEditor_ForceAutoCorrection_Callback = void (*)(TextCustomEditor__RichTextEditor*, bool);
    using TextCustomEditor__RichTextEditor_AddExtraMenuEntry_Callback = void (*)(TextCustomEditor__RichTextEditor*, QMenu*, QPoint*);
    using TextCustomEditor__RichTextEditor_ContextMenuEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QContextMenuEvent*);
    using TextCustomEditor__RichTextEditor_FocusInEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QFocusEvent*);
    using TextCustomEditor__RichTextEditor_Event_Callback = bool (*)(TextCustomEditor__RichTextEditor*, QEvent*);
    using TextCustomEditor__RichTextEditor_KeyPressEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QKeyEvent*);
    using TextCustomEditor__RichTextEditor_WheelEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QWheelEvent*);
    using TextCustomEditor__RichTextEditor_CreateSpellCheckDecorator_Callback = Sonnet__SpellCheckDecorator* (*)(TextCustomEditor__RichTextEditor*);
    using TextCustomEditor__RichTextEditor_UpdateHighLighter_Callback = void (*)(TextCustomEditor__RichTextEditor*);
    using TextCustomEditor__RichTextEditor_ClearDecorator_Callback = void (*)(TextCustomEditor__RichTextEditor*);
    using TextCustomEditor__RichTextEditor_LoadResource_Callback = QVariant* (*)(TextCustomEditor__RichTextEditor*, int, QUrl*);
    using TextCustomEditor__RichTextEditor_InputMethodQuery_Callback = QVariant* (*)(const TextCustomEditor__RichTextEditor*, int);
    using TextCustomEditor__RichTextEditor_TimerEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QTimerEvent*);
    using TextCustomEditor__RichTextEditor_KeyReleaseEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QKeyEvent*);
    using TextCustomEditor__RichTextEditor_ResizeEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QResizeEvent*);
    using TextCustomEditor__RichTextEditor_PaintEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QPaintEvent*);
    using TextCustomEditor__RichTextEditor_MousePressEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QMouseEvent*);
    using TextCustomEditor__RichTextEditor_MouseMoveEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QMouseEvent*);
    using TextCustomEditor__RichTextEditor_MouseReleaseEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QMouseEvent*);
    using TextCustomEditor__RichTextEditor_MouseDoubleClickEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QMouseEvent*);
    using TextCustomEditor__RichTextEditor_FocusNextPrevChild_Callback = bool (*)(TextCustomEditor__RichTextEditor*, bool);
    using TextCustomEditor__RichTextEditor_DragEnterEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QDragEnterEvent*);
    using TextCustomEditor__RichTextEditor_DragLeaveEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QDragLeaveEvent*);
    using TextCustomEditor__RichTextEditor_DragMoveEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QDragMoveEvent*);
    using TextCustomEditor__RichTextEditor_DropEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QDropEvent*);
    using TextCustomEditor__RichTextEditor_FocusOutEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QFocusEvent*);
    using TextCustomEditor__RichTextEditor_ShowEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QShowEvent*);
    using TextCustomEditor__RichTextEditor_ChangeEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QEvent*);
    using TextCustomEditor__RichTextEditor_CreateMimeDataFromSelection_Callback = QMimeData* (*)(const TextCustomEditor__RichTextEditor*);
    using TextCustomEditor__RichTextEditor_CanInsertFromMimeData_Callback = bool (*)(const TextCustomEditor__RichTextEditor*, QMimeData*);
    using TextCustomEditor__RichTextEditor_InsertFromMimeData_Callback = void (*)(TextCustomEditor__RichTextEditor*, QMimeData*);
    using TextCustomEditor__RichTextEditor_InputMethodEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QInputMethodEvent*);
    using TextCustomEditor__RichTextEditor_ScrollContentsBy_Callback = void (*)(TextCustomEditor__RichTextEditor*, int, int);
    using TextCustomEditor__RichTextEditor_DoSetTextCursor_Callback = void (*)(TextCustomEditor__RichTextEditor*, QTextCursor*);
    using TextCustomEditor__RichTextEditor_MinimumSizeHint_Callback = QSize* (*)(const TextCustomEditor__RichTextEditor*);
    using TextCustomEditor__RichTextEditor_SizeHint_Callback = QSize* (*)(const TextCustomEditor__RichTextEditor*);
    using TextCustomEditor__RichTextEditor_SetupViewport_Callback = void (*)(TextCustomEditor__RichTextEditor*, QWidget*);
    using TextCustomEditor__RichTextEditor_EventFilter_Callback = bool (*)(TextCustomEditor__RichTextEditor*, QObject*, QEvent*);
    using TextCustomEditor__RichTextEditor_ViewportEvent_Callback = bool (*)(TextCustomEditor__RichTextEditor*, QEvent*);
    using TextCustomEditor__RichTextEditor_ViewportSizeHint_Callback = QSize* (*)(const TextCustomEditor__RichTextEditor*);
    using TextCustomEditor__RichTextEditor_InitStyleOption_Callback = void (*)(const TextCustomEditor__RichTextEditor*, QStyleOptionFrame*);
    using TextCustomEditor__RichTextEditor_DevType_Callback = int (*)(const TextCustomEditor__RichTextEditor*);
    using TextCustomEditor__RichTextEditor_SetVisible_Callback = void (*)(TextCustomEditor__RichTextEditor*, bool);
    using TextCustomEditor__RichTextEditor_HeightForWidth_Callback = int (*)(const TextCustomEditor__RichTextEditor*, int);
    using TextCustomEditor__RichTextEditor_HasHeightForWidth_Callback = bool (*)(const TextCustomEditor__RichTextEditor*);
    using TextCustomEditor__RichTextEditor_PaintEngine_Callback = QPaintEngine* (*)(const TextCustomEditor__RichTextEditor*);
    using TextCustomEditor__RichTextEditor_EnterEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QEnterEvent*);
    using TextCustomEditor__RichTextEditor_LeaveEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QEvent*);
    using TextCustomEditor__RichTextEditor_MoveEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QMoveEvent*);
    using TextCustomEditor__RichTextEditor_CloseEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QCloseEvent*);
    using TextCustomEditor__RichTextEditor_TabletEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QTabletEvent*);
    using TextCustomEditor__RichTextEditor_ActionEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QActionEvent*);
    using TextCustomEditor__RichTextEditor_HideEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QHideEvent*);
    using TextCustomEditor__RichTextEditor_NativeEvent_Callback = bool (*)(TextCustomEditor__RichTextEditor*, libqt_string, void*, intptr_t*);
    using TextCustomEditor__RichTextEditor_Metric_Callback = int (*)(const TextCustomEditor__RichTextEditor*, int);
    using TextCustomEditor__RichTextEditor_InitPainter_Callback = void (*)(const TextCustomEditor__RichTextEditor*, QPainter*);
    using TextCustomEditor__RichTextEditor_Redirected_Callback = QPaintDevice* (*)(const TextCustomEditor__RichTextEditor*, QPoint*);
    using TextCustomEditor__RichTextEditor_SharedPainter_Callback = QPainter* (*)(const TextCustomEditor__RichTextEditor*);
    using TextCustomEditor__RichTextEditor_ChildEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QChildEvent*);
    using TextCustomEditor__RichTextEditor_CustomEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QEvent*);
    using TextCustomEditor__RichTextEditor_ConnectNotify_Callback = void (*)(TextCustomEditor__RichTextEditor*, QMetaMethod*);
    using TextCustomEditor__RichTextEditor_DisconnectNotify_Callback = void (*)(TextCustomEditor__RichTextEditor*, QMetaMethod*);
    using TextCustomEditor::RichTextEditor::create;
    using TextCustomEditor::RichTextEditor::destroy;
    using TextCustomEditor::RichTextEditor::drawFrame;
    using TextCustomEditor::RichTextEditor::focusNextChild;
    using TextCustomEditor::RichTextEditor::focusPreviousChild;
    using TextCustomEditor::RichTextEditor::getDecodedMetricF;
    using TextCustomEditor::RichTextEditor::isSignalConnected;
    using TextCustomEditor::RichTextEditor::mousePopupMenu;
    using TextCustomEditor::RichTextEditor::receivers;
    using TextCustomEditor::RichTextEditor::sender;
    using TextCustomEditor::RichTextEditor::senderSignalIndex;
    using TextCustomEditor::RichTextEditor::setHighlighter;
    using TextCustomEditor::RichTextEditor::setViewportMargins;
    using TextCustomEditor::RichTextEditor::updateMicroFocus;
    using TextCustomEditor::RichTextEditor::viewportMargins;
    using TextCustomEditor::RichTextEditor::zoomInF;

    // Instance callback storage
    TextCustomEditor__RichTextEditor_MetaObject_Callback textcustomeditor__richtexteditor_metaobject_callback = nullptr;
    TextCustomEditor__RichTextEditor_Metacast_Callback textcustomeditor__richtexteditor_metacast_callback = nullptr;
    TextCustomEditor__RichTextEditor_Metacall_Callback textcustomeditor__richtexteditor_metacall_callback = nullptr;
    TextCustomEditor__RichTextEditor_SetReadOnly_Callback textcustomeditor__richtexteditor_setreadonly_callback = nullptr;
    TextCustomEditor__RichTextEditor_CreateHighlighter_Callback textcustomeditor__richtexteditor_createhighlighter_callback = nullptr;
    TextCustomEditor__RichTextEditor_ForceAutoCorrection_Callback textcustomeditor__richtexteditor_forceautocorrection_callback = nullptr;
    TextCustomEditor__RichTextEditor_AddExtraMenuEntry_Callback textcustomeditor__richtexteditor_addextramenuentry_callback = nullptr;
    TextCustomEditor__RichTextEditor_ContextMenuEvent_Callback textcustomeditor__richtexteditor_contextmenuevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_FocusInEvent_Callback textcustomeditor__richtexteditor_focusinevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_Event_Callback textcustomeditor__richtexteditor_event_callback = nullptr;
    TextCustomEditor__RichTextEditor_KeyPressEvent_Callback textcustomeditor__richtexteditor_keypressevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_WheelEvent_Callback textcustomeditor__richtexteditor_wheelevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_CreateSpellCheckDecorator_Callback textcustomeditor__richtexteditor_createspellcheckdecorator_callback = nullptr;
    TextCustomEditor__RichTextEditor_UpdateHighLighter_Callback textcustomeditor__richtexteditor_updatehighlighter_callback = nullptr;
    TextCustomEditor__RichTextEditor_ClearDecorator_Callback textcustomeditor__richtexteditor_cleardecorator_callback = nullptr;
    TextCustomEditor__RichTextEditor_LoadResource_Callback textcustomeditor__richtexteditor_loadresource_callback = nullptr;
    TextCustomEditor__RichTextEditor_InputMethodQuery_Callback textcustomeditor__richtexteditor_inputmethodquery_callback = nullptr;
    TextCustomEditor__RichTextEditor_TimerEvent_Callback textcustomeditor__richtexteditor_timerevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_KeyReleaseEvent_Callback textcustomeditor__richtexteditor_keyreleaseevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_ResizeEvent_Callback textcustomeditor__richtexteditor_resizeevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_PaintEvent_Callback textcustomeditor__richtexteditor_paintevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_MousePressEvent_Callback textcustomeditor__richtexteditor_mousepressevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_MouseMoveEvent_Callback textcustomeditor__richtexteditor_mousemoveevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_MouseReleaseEvent_Callback textcustomeditor__richtexteditor_mousereleaseevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_MouseDoubleClickEvent_Callback textcustomeditor__richtexteditor_mousedoubleclickevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_FocusNextPrevChild_Callback textcustomeditor__richtexteditor_focusnextprevchild_callback = nullptr;
    TextCustomEditor__RichTextEditor_DragEnterEvent_Callback textcustomeditor__richtexteditor_dragenterevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_DragLeaveEvent_Callback textcustomeditor__richtexteditor_dragleaveevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_DragMoveEvent_Callback textcustomeditor__richtexteditor_dragmoveevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_DropEvent_Callback textcustomeditor__richtexteditor_dropevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_FocusOutEvent_Callback textcustomeditor__richtexteditor_focusoutevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_ShowEvent_Callback textcustomeditor__richtexteditor_showevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_ChangeEvent_Callback textcustomeditor__richtexteditor_changeevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_CreateMimeDataFromSelection_Callback textcustomeditor__richtexteditor_createmimedatafromselection_callback = nullptr;
    TextCustomEditor__RichTextEditor_CanInsertFromMimeData_Callback textcustomeditor__richtexteditor_caninsertfrommimedata_callback = nullptr;
    TextCustomEditor__RichTextEditor_InsertFromMimeData_Callback textcustomeditor__richtexteditor_insertfrommimedata_callback = nullptr;
    TextCustomEditor__RichTextEditor_InputMethodEvent_Callback textcustomeditor__richtexteditor_inputmethodevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_ScrollContentsBy_Callback textcustomeditor__richtexteditor_scrollcontentsby_callback = nullptr;
    TextCustomEditor__RichTextEditor_DoSetTextCursor_Callback textcustomeditor__richtexteditor_dosettextcursor_callback = nullptr;
    TextCustomEditor__RichTextEditor_MinimumSizeHint_Callback textcustomeditor__richtexteditor_minimumsizehint_callback = nullptr;
    TextCustomEditor__RichTextEditor_SizeHint_Callback textcustomeditor__richtexteditor_sizehint_callback = nullptr;
    TextCustomEditor__RichTextEditor_SetupViewport_Callback textcustomeditor__richtexteditor_setupviewport_callback = nullptr;
    TextCustomEditor__RichTextEditor_EventFilter_Callback textcustomeditor__richtexteditor_eventfilter_callback = nullptr;
    TextCustomEditor__RichTextEditor_ViewportEvent_Callback textcustomeditor__richtexteditor_viewportevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_ViewportSizeHint_Callback textcustomeditor__richtexteditor_viewportsizehint_callback = nullptr;
    TextCustomEditor__RichTextEditor_InitStyleOption_Callback textcustomeditor__richtexteditor_initstyleoption_callback = nullptr;
    TextCustomEditor__RichTextEditor_DevType_Callback textcustomeditor__richtexteditor_devtype_callback = nullptr;
    TextCustomEditor__RichTextEditor_SetVisible_Callback textcustomeditor__richtexteditor_setvisible_callback = nullptr;
    TextCustomEditor__RichTextEditor_HeightForWidth_Callback textcustomeditor__richtexteditor_heightforwidth_callback = nullptr;
    TextCustomEditor__RichTextEditor_HasHeightForWidth_Callback textcustomeditor__richtexteditor_hasheightforwidth_callback = nullptr;
    TextCustomEditor__RichTextEditor_PaintEngine_Callback textcustomeditor__richtexteditor_paintengine_callback = nullptr;
    TextCustomEditor__RichTextEditor_EnterEvent_Callback textcustomeditor__richtexteditor_enterevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_LeaveEvent_Callback textcustomeditor__richtexteditor_leaveevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_MoveEvent_Callback textcustomeditor__richtexteditor_moveevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_CloseEvent_Callback textcustomeditor__richtexteditor_closeevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_TabletEvent_Callback textcustomeditor__richtexteditor_tabletevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_ActionEvent_Callback textcustomeditor__richtexteditor_actionevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_HideEvent_Callback textcustomeditor__richtexteditor_hideevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_NativeEvent_Callback textcustomeditor__richtexteditor_nativeevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_Metric_Callback textcustomeditor__richtexteditor_metric_callback = nullptr;
    TextCustomEditor__RichTextEditor_InitPainter_Callback textcustomeditor__richtexteditor_initpainter_callback = nullptr;
    TextCustomEditor__RichTextEditor_Redirected_Callback textcustomeditor__richtexteditor_redirected_callback = nullptr;
    TextCustomEditor__RichTextEditor_SharedPainter_Callback textcustomeditor__richtexteditor_sharedpainter_callback = nullptr;
    TextCustomEditor__RichTextEditor_ChildEvent_Callback textcustomeditor__richtexteditor_childevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_CustomEvent_Callback textcustomeditor__richtexteditor_customevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_ConnectNotify_Callback textcustomeditor__richtexteditor_connectnotify_callback = nullptr;
    TextCustomEditor__RichTextEditor_DisconnectNotify_Callback textcustomeditor__richtexteditor_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextCustomEditor::RichTextEditor {
        using TextCustomEditor::RichTextEditor::actionEvent;
        using TextCustomEditor::RichTextEditor::addExtraMenuEntry;
        using TextCustomEditor::RichTextEditor::canInsertFromMimeData;
        using TextCustomEditor::RichTextEditor::changeEvent;
        using TextCustomEditor::RichTextEditor::childEvent;
        using TextCustomEditor::RichTextEditor::clearDecorator;
        using TextCustomEditor::RichTextEditor::closeEvent;
        using TextCustomEditor::RichTextEditor::connectNotify;
        using TextCustomEditor::RichTextEditor::contextMenuEvent;
        using TextCustomEditor::RichTextEditor::createMimeDataFromSelection;
        using TextCustomEditor::RichTextEditor::createSpellCheckDecorator;
        using TextCustomEditor::RichTextEditor::customEvent;
        using TextCustomEditor::RichTextEditor::disconnectNotify;
        using TextCustomEditor::RichTextEditor::doSetTextCursor;
        using TextCustomEditor::RichTextEditor::dragEnterEvent;
        using TextCustomEditor::RichTextEditor::dragLeaveEvent;
        using TextCustomEditor::RichTextEditor::dragMoveEvent;
        using TextCustomEditor::RichTextEditor::dropEvent;
        using TextCustomEditor::RichTextEditor::enterEvent;
        using TextCustomEditor::RichTextEditor::event;
        using TextCustomEditor::RichTextEditor::eventFilter;
        using TextCustomEditor::RichTextEditor::focusInEvent;
        using TextCustomEditor::RichTextEditor::focusNextPrevChild;
        using TextCustomEditor::RichTextEditor::focusOutEvent;
        using TextCustomEditor::RichTextEditor::hideEvent;
        using TextCustomEditor::RichTextEditor::initPainter;
        using TextCustomEditor::RichTextEditor::initStyleOption;
        using TextCustomEditor::RichTextEditor::inputMethodEvent;
        using TextCustomEditor::RichTextEditor::insertFromMimeData;
        using TextCustomEditor::RichTextEditor::keyPressEvent;
        using TextCustomEditor::RichTextEditor::keyReleaseEvent;
        using TextCustomEditor::RichTextEditor::leaveEvent;
        using TextCustomEditor::RichTextEditor::metric;
        using TextCustomEditor::RichTextEditor::mouseDoubleClickEvent;
        using TextCustomEditor::RichTextEditor::mouseMoveEvent;
        using TextCustomEditor::RichTextEditor::mousePressEvent;
        using TextCustomEditor::RichTextEditor::mouseReleaseEvent;
        using TextCustomEditor::RichTextEditor::moveEvent;
        using TextCustomEditor::RichTextEditor::nativeEvent;
        using TextCustomEditor::RichTextEditor::paintEvent;
        using TextCustomEditor::RichTextEditor::redirected;
        using TextCustomEditor::RichTextEditor::resizeEvent;
        using TextCustomEditor::RichTextEditor::scrollContentsBy;
        using TextCustomEditor::RichTextEditor::sharedPainter;
        using TextCustomEditor::RichTextEditor::showEvent;
        using TextCustomEditor::RichTextEditor::tabletEvent;
        using TextCustomEditor::RichTextEditor::timerEvent;
        using TextCustomEditor::RichTextEditor::updateHighLighter;
        using TextCustomEditor::RichTextEditor::viewportEvent;
        using TextCustomEditor::RichTextEditor::viewportSizeHint;
        using TextCustomEditor::RichTextEditor::wheelEvent;
    };

    VirtualTextCustomEditorRichTextEditor(QWidget* parent) : TextCustomEditor::RichTextEditor(parent) {};
    VirtualTextCustomEditorRichTextEditor() : TextCustomEditor::RichTextEditor() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textcustomeditor__richtexteditor_metaobject_callback) {
            QMetaObject* callback_ret = textcustomeditor__richtexteditor_metaobject_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textcustomeditor__richtexteditor_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textcustomeditor__richtexteditor_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textcustomeditor__richtexteditor_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textcustomeditor__richtexteditor_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditor::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReadOnly(bool readOnly) override {
        if (textcustomeditor__richtexteditor_setreadonly_callback) {
            bool cbval1 = readOnly;
            textcustomeditor__richtexteditor_setreadonly_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::setReadOnly(readOnly);
    }

    // Virtual method for C ABI access and custom callback
    virtual void createHighlighter() override {
        if (textcustomeditor__richtexteditor_createhighlighter_callback) {
            textcustomeditor__richtexteditor_createhighlighter_callback(this);
            return;
        }
        TextCustomEditor__RichTextEditor::createHighlighter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void forceAutoCorrection(bool selectedText) override {
        if (textcustomeditor__richtexteditor_forceautocorrection_callback) {
            bool cbval1 = selectedText;
            textcustomeditor__richtexteditor_forceautocorrection_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::forceAutoCorrection(selectedText);
    }

    // Virtual method for C ABI access and custom callback
    virtual void addExtraMenuEntry(QMenu* menu, QPoint pos) override {
        if (textcustomeditor__richtexteditor_addextramenuentry_callback) {
            QMenu* cbval1 = menu;
            QPoint* cbval2 = new QPoint(pos);
            textcustomeditor__richtexteditor_addextramenuentry_callback(this, cbval1, cbval2);
            return;
        }
        TextCustomEditor__RichTextEditor::addExtraMenuEntry(menu, pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textcustomeditor__richtexteditor_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            textcustomeditor__richtexteditor_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textcustomeditor__richtexteditor_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            textcustomeditor__richtexteditor_focusinevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* ev) override {
        if (textcustomeditor__richtexteditor_event_callback) {
            QEvent* cbval1 = ev;
            bool callback_ret = textcustomeditor__richtexteditor_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::event(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textcustomeditor__richtexteditor_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            textcustomeditor__richtexteditor_keypressevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (textcustomeditor__richtexteditor_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            textcustomeditor__richtexteditor_wheelevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual Sonnet::SpellCheckDecorator* createSpellCheckDecorator() override {
        if (textcustomeditor__richtexteditor_createspellcheckdecorator_callback) {
            Sonnet__SpellCheckDecorator* callback_ret = textcustomeditor__richtexteditor_createspellcheckdecorator_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::createSpellCheckDecorator();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateHighLighter() override {
        if (textcustomeditor__richtexteditor_updatehighlighter_callback) {
            textcustomeditor__richtexteditor_updatehighlighter_callback(this);
            return;
        }
        TextCustomEditor__RichTextEditor::updateHighLighter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void clearDecorator() override {
        if (textcustomeditor__richtexteditor_cleardecorator_callback) {
            textcustomeditor__richtexteditor_cleardecorator_callback(this);
            return;
        }
        TextCustomEditor__RichTextEditor::clearDecorator();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant loadResource(int typeVal, const QUrl& name) override {
        if (textcustomeditor__richtexteditor_loadresource_callback) {
            int cbval1 = typeVal;
            const QUrl& name_ret = name;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&name_ret);
            QVariant* callback_ret = textcustomeditor__richtexteditor_loadresource_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextEditor::loadResource(typeVal, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
        if (textcustomeditor__richtexteditor_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(property);
            QVariant* callback_ret = textcustomeditor__richtexteditor_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextEditor::inputMethodQuery(property);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (textcustomeditor__richtexteditor_timerevent_callback) {
            QTimerEvent* cbval1 = e;
            textcustomeditor__richtexteditor_timerevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (textcustomeditor__richtexteditor_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            textcustomeditor__richtexteditor_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (textcustomeditor__richtexteditor_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            textcustomeditor__richtexteditor_resizeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (textcustomeditor__richtexteditor_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            textcustomeditor__richtexteditor_paintevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (textcustomeditor__richtexteditor_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            textcustomeditor__richtexteditor_mousepressevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (textcustomeditor__richtexteditor_mousemoveevent_callback) {
            QMouseEvent* cbval1 = e;
            textcustomeditor__richtexteditor_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (textcustomeditor__richtexteditor_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            textcustomeditor__richtexteditor_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (textcustomeditor__richtexteditor_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = e;
            textcustomeditor__richtexteditor_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::mouseDoubleClickEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textcustomeditor__richtexteditor_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textcustomeditor__richtexteditor_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (textcustomeditor__richtexteditor_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = e;
            textcustomeditor__richtexteditor_dragenterevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::dragEnterEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (textcustomeditor__richtexteditor_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = e;
            textcustomeditor__richtexteditor_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (textcustomeditor__richtexteditor_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = e;
            textcustomeditor__richtexteditor_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (textcustomeditor__richtexteditor_dropevent_callback) {
            QDropEvent* cbval1 = e;
            textcustomeditor__richtexteditor_dropevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::dropEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (textcustomeditor__richtexteditor_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            textcustomeditor__richtexteditor_focusoutevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (textcustomeditor__richtexteditor_showevent_callback) {
            QShowEvent* cbval1 = param1;
            textcustomeditor__richtexteditor_showevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (textcustomeditor__richtexteditor_changeevent_callback) {
            QEvent* cbval1 = e;
            textcustomeditor__richtexteditor_changeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* createMimeDataFromSelection() const override {
        if (textcustomeditor__richtexteditor_createmimedatafromselection_callback) {
            QMimeData* callback_ret = textcustomeditor__richtexteditor_createmimedatafromselection_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::createMimeDataFromSelection();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (textcustomeditor__richtexteditor_caninsertfrommimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)source;
            bool callback_ret = textcustomeditor__richtexteditor_caninsertfrommimedata_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::canInsertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertFromMimeData(const QMimeData* source) override {
        if (textcustomeditor__richtexteditor_insertfrommimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)source;
            textcustomeditor__richtexteditor_insertfrommimedata_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::insertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textcustomeditor__richtexteditor_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textcustomeditor__richtexteditor_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (textcustomeditor__richtexteditor_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            textcustomeditor__richtexteditor_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        TextCustomEditor__RichTextEditor::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetTextCursor(const QTextCursor& cursor) override {
        if (textcustomeditor__richtexteditor_dosettextcursor_callback) {
            const QTextCursor& cursor_ret = cursor;
            // Cast returned reference into pointer
            QTextCursor* cbval1 = const_cast<QTextCursor*>(&cursor_ret);
            textcustomeditor__richtexteditor_dosettextcursor_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::doSetTextCursor(cursor);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textcustomeditor__richtexteditor_minimumsizehint_callback) {
            QSize* callback_ret = textcustomeditor__richtexteditor_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextEditor::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textcustomeditor__richtexteditor_sizehint_callback) {
            QSize* callback_ret = textcustomeditor__richtexteditor_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextEditor::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (textcustomeditor__richtexteditor_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            textcustomeditor__richtexteditor_setupviewport_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (textcustomeditor__richtexteditor_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = textcustomeditor__richtexteditor_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (textcustomeditor__richtexteditor_viewportevent_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = textcustomeditor__richtexteditor_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::viewportEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (textcustomeditor__richtexteditor_viewportsizehint_callback) {
            QSize* callback_ret = textcustomeditor__richtexteditor_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextEditor::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (textcustomeditor__richtexteditor_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            textcustomeditor__richtexteditor_initstyleoption_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textcustomeditor__richtexteditor_devtype_callback) {
            int callback_ret = textcustomeditor__richtexteditor_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditor::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textcustomeditor__richtexteditor_setvisible_callback) {
            bool cbval1 = visible;
            textcustomeditor__richtexteditor_setvisible_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textcustomeditor__richtexteditor_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textcustomeditor__richtexteditor_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditor::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textcustomeditor__richtexteditor_hasheightforwidth_callback) {
            bool callback_ret = textcustomeditor__richtexteditor_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textcustomeditor__richtexteditor_paintengine_callback) {
            QPaintEngine* callback_ret = textcustomeditor__richtexteditor_paintengine_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textcustomeditor__richtexteditor_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textcustomeditor__richtexteditor_enterevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textcustomeditor__richtexteditor_leaveevent_callback) {
            QEvent* cbval1 = event;
            textcustomeditor__richtexteditor_leaveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textcustomeditor__richtexteditor_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textcustomeditor__richtexteditor_moveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textcustomeditor__richtexteditor_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            textcustomeditor__richtexteditor_closeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textcustomeditor__richtexteditor_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textcustomeditor__richtexteditor_tabletevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textcustomeditor__richtexteditor_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textcustomeditor__richtexteditor_actionevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textcustomeditor__richtexteditor_hideevent_callback) {
            QHideEvent* cbval1 = event;
            textcustomeditor__richtexteditor_hideevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textcustomeditor__richtexteditor_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textcustomeditor__richtexteditor_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textcustomeditor__richtexteditor_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textcustomeditor__richtexteditor_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditor::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textcustomeditor__richtexteditor_initpainter_callback) {
            QPainter* cbval1 = painter;
            textcustomeditor__richtexteditor_initpainter_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textcustomeditor__richtexteditor_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textcustomeditor__richtexteditor_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textcustomeditor__richtexteditor_sharedpainter_callback) {
            QPainter* callback_ret = textcustomeditor__richtexteditor_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textcustomeditor__richtexteditor_childevent_callback) {
            QChildEvent* cbval1 = event;
            textcustomeditor__richtexteditor_childevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textcustomeditor__richtexteditor_customevent_callback) {
            QEvent* cbval1 = event;
            textcustomeditor__richtexteditor_customevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__richtexteditor_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textcustomeditor__richtexteditor_connectnotify_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__richtexteditor_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textcustomeditor__richtexteditor_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextCustomEditor__RichTextEditor_SuperAddExtraMenuEntry(TextCustomEditor::RichTextEditor* self, QMenu* menu, QPoint* pos);
    friend void TextCustomEditor__RichTextEditor_SuperContextMenuEvent(TextCustomEditor::RichTextEditor* self, QContextMenuEvent* event);
    friend void TextCustomEditor__RichTextEditor_SuperFocusInEvent(TextCustomEditor::RichTextEditor* self, QFocusEvent* event);
    friend bool TextCustomEditor__RichTextEditor_SuperEvent(TextCustomEditor::RichTextEditor* self, QEvent* ev);
    friend void TextCustomEditor__RichTextEditor_SuperKeyPressEvent(TextCustomEditor::RichTextEditor* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextEditor_SuperWheelEvent(TextCustomEditor::RichTextEditor* self, QWheelEvent* e);
    friend Sonnet__SpellCheckDecorator* TextCustomEditor__RichTextEditor_SuperCreateSpellCheckDecorator(TextCustomEditor::RichTextEditor* self);
    friend void TextCustomEditor__RichTextEditor_SuperUpdateHighLighter(TextCustomEditor::RichTextEditor* self);
    friend void TextCustomEditor__RichTextEditor_SuperClearDecorator(TextCustomEditor::RichTextEditor* self);
    friend void TextCustomEditor__RichTextEditor_SuperTimerEvent(TextCustomEditor::RichTextEditor* self, QTimerEvent* e);
    friend void TextCustomEditor__RichTextEditor_SuperKeyReleaseEvent(TextCustomEditor::RichTextEditor* self, QKeyEvent* e);
    friend void TextCustomEditor__RichTextEditor_SuperResizeEvent(TextCustomEditor::RichTextEditor* self, QResizeEvent* e);
    friend void TextCustomEditor__RichTextEditor_SuperPaintEvent(TextCustomEditor::RichTextEditor* self, QPaintEvent* e);
    friend void TextCustomEditor__RichTextEditor_SuperMousePressEvent(TextCustomEditor::RichTextEditor* self, QMouseEvent* e);
    friend void TextCustomEditor__RichTextEditor_SuperMouseMoveEvent(TextCustomEditor::RichTextEditor* self, QMouseEvent* e);
    friend void TextCustomEditor__RichTextEditor_SuperMouseReleaseEvent(TextCustomEditor::RichTextEditor* self, QMouseEvent* e);
    friend void TextCustomEditor__RichTextEditor_SuperMouseDoubleClickEvent(TextCustomEditor::RichTextEditor* self, QMouseEvent* e);
    friend bool TextCustomEditor__RichTextEditor_SuperFocusNextPrevChild(TextCustomEditor::RichTextEditor* self, bool next);
    friend void TextCustomEditor__RichTextEditor_SuperDragEnterEvent(TextCustomEditor::RichTextEditor* self, QDragEnterEvent* e);
    friend void TextCustomEditor__RichTextEditor_SuperDragLeaveEvent(TextCustomEditor::RichTextEditor* self, QDragLeaveEvent* e);
    friend void TextCustomEditor__RichTextEditor_SuperDragMoveEvent(TextCustomEditor::RichTextEditor* self, QDragMoveEvent* e);
    friend void TextCustomEditor__RichTextEditor_SuperDropEvent(TextCustomEditor::RichTextEditor* self, QDropEvent* e);
    friend void TextCustomEditor__RichTextEditor_SuperFocusOutEvent(TextCustomEditor::RichTextEditor* self, QFocusEvent* e);
    friend void TextCustomEditor__RichTextEditor_SuperShowEvent(TextCustomEditor::RichTextEditor* self, QShowEvent* param1);
    friend void TextCustomEditor__RichTextEditor_SuperChangeEvent(TextCustomEditor::RichTextEditor* self, QEvent* e);
    friend QMimeData* TextCustomEditor__RichTextEditor_SuperCreateMimeDataFromSelection(const TextCustomEditor::RichTextEditor* self);
    friend bool TextCustomEditor__RichTextEditor_SuperCanInsertFromMimeData(const TextCustomEditor::RichTextEditor* self, const QMimeData* source);
    friend void TextCustomEditor__RichTextEditor_SuperInsertFromMimeData(TextCustomEditor::RichTextEditor* self, const QMimeData* source);
    friend void TextCustomEditor__RichTextEditor_SuperInputMethodEvent(TextCustomEditor::RichTextEditor* self, QInputMethodEvent* param1);
    friend void TextCustomEditor__RichTextEditor_SuperScrollContentsBy(TextCustomEditor::RichTextEditor* self, int dx, int dy);
    friend void TextCustomEditor__RichTextEditor_SuperDoSetTextCursor(TextCustomEditor::RichTextEditor* self, const QTextCursor* cursor);
    friend bool TextCustomEditor__RichTextEditor_SuperEventFilter(TextCustomEditor::RichTextEditor* self, QObject* param1, QEvent* param2);
    friend bool TextCustomEditor__RichTextEditor_SuperViewportEvent(TextCustomEditor::RichTextEditor* self, QEvent* param1);
    friend QSize* TextCustomEditor__RichTextEditor_SuperViewportSizeHint(const TextCustomEditor::RichTextEditor* self);
    friend void TextCustomEditor__RichTextEditor_SuperInitStyleOption(const TextCustomEditor::RichTextEditor* self, QStyleOptionFrame* option);
    friend void TextCustomEditor__RichTextEditor_SuperEnterEvent(TextCustomEditor::RichTextEditor* self, QEnterEvent* event);
    friend void TextCustomEditor__RichTextEditor_SuperLeaveEvent(TextCustomEditor::RichTextEditor* self, QEvent* event);
    friend void TextCustomEditor__RichTextEditor_SuperMoveEvent(TextCustomEditor::RichTextEditor* self, QMoveEvent* event);
    friend void TextCustomEditor__RichTextEditor_SuperCloseEvent(TextCustomEditor::RichTextEditor* self, QCloseEvent* event);
    friend void TextCustomEditor__RichTextEditor_SuperTabletEvent(TextCustomEditor::RichTextEditor* self, QTabletEvent* event);
    friend void TextCustomEditor__RichTextEditor_SuperActionEvent(TextCustomEditor::RichTextEditor* self, QActionEvent* event);
    friend void TextCustomEditor__RichTextEditor_SuperHideEvent(TextCustomEditor::RichTextEditor* self, QHideEvent* event);
    friend bool TextCustomEditor__RichTextEditor_SuperNativeEvent(TextCustomEditor::RichTextEditor* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int TextCustomEditor__RichTextEditor_SuperMetric(const TextCustomEditor::RichTextEditor* self, int param1);
    friend void TextCustomEditor__RichTextEditor_SuperInitPainter(const TextCustomEditor::RichTextEditor* self, QPainter* painter);
    friend QPaintDevice* TextCustomEditor__RichTextEditor_SuperRedirected(const TextCustomEditor::RichTextEditor* self, QPoint* offset);
    friend QPainter* TextCustomEditor__RichTextEditor_SuperSharedPainter(const TextCustomEditor::RichTextEditor* self);
    friend void TextCustomEditor__RichTextEditor_SuperChildEvent(TextCustomEditor::RichTextEditor* self, QChildEvent* event);
    friend void TextCustomEditor__RichTextEditor_SuperCustomEvent(TextCustomEditor::RichTextEditor* self, QEvent* event);
    friend void TextCustomEditor__RichTextEditor_SuperConnectNotify(TextCustomEditor::RichTextEditor* self, const QMetaMethod* signal);
    friend void TextCustomEditor__RichTextEditor_SuperDisconnectNotify(TextCustomEditor::RichTextEditor* self, const QMetaMethod* signal);
};

#endif
