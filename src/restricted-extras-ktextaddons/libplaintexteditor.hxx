#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBPLAINTEXTEDITOR_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBPLAINTEXTEDITOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextCustomEditor::PlainTextEditor
class VirtualTextCustomEditorPlainTextEditor final : public TextCustomEditor::PlainTextEditor {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextCustomEditor__PlainTextEditor_MetaObject_Callback = QMetaObject* (*)(const TextCustomEditor__PlainTextEditor*);
    using TextCustomEditor__PlainTextEditor_Metacast_Callback = void* (*)(TextCustomEditor__PlainTextEditor*, const char*);
    using TextCustomEditor__PlainTextEditor_Metacall_Callback = int (*)(TextCustomEditor__PlainTextEditor*, int, int, void**);
    using TextCustomEditor__PlainTextEditor_SetReadOnly_Callback = void (*)(TextCustomEditor__PlainTextEditor*, bool);
    using TextCustomEditor__PlainTextEditor_CreateHighlighter_Callback = void (*)(TextCustomEditor__PlainTextEditor*);
    using TextCustomEditor__PlainTextEditor_AddExtraMenuEntry_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QMenu*, QPoint*);
    using TextCustomEditor__PlainTextEditor_ContextMenuEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QContextMenuEvent*);
    using TextCustomEditor__PlainTextEditor_Event_Callback = bool (*)(TextCustomEditor__PlainTextEditor*, QEvent*);
    using TextCustomEditor__PlainTextEditor_KeyPressEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QKeyEvent*);
    using TextCustomEditor__PlainTextEditor_WheelEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QWheelEvent*);
    using TextCustomEditor__PlainTextEditor_CreateSpellCheckDecorator_Callback = Sonnet__SpellCheckDecorator* (*)(TextCustomEditor__PlainTextEditor*);
    using TextCustomEditor__PlainTextEditor_FocusInEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QFocusEvent*);
    using TextCustomEditor__PlainTextEditor_UpdateHighLighter_Callback = void (*)(TextCustomEditor__PlainTextEditor*);
    using TextCustomEditor__PlainTextEditor_ClearDecorator_Callback = void (*)(TextCustomEditor__PlainTextEditor*);
    using TextCustomEditor__PlainTextEditor_LoadResource_Callback = QVariant* (*)(TextCustomEditor__PlainTextEditor*, int, QUrl*);
    using TextCustomEditor__PlainTextEditor_InputMethodQuery_Callback = QVariant* (*)(const TextCustomEditor__PlainTextEditor*, int);
    using TextCustomEditor__PlainTextEditor_TimerEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QTimerEvent*);
    using TextCustomEditor__PlainTextEditor_KeyReleaseEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QKeyEvent*);
    using TextCustomEditor__PlainTextEditor_ResizeEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QResizeEvent*);
    using TextCustomEditor__PlainTextEditor_PaintEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QPaintEvent*);
    using TextCustomEditor__PlainTextEditor_MousePressEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QMouseEvent*);
    using TextCustomEditor__PlainTextEditor_MouseMoveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QMouseEvent*);
    using TextCustomEditor__PlainTextEditor_MouseReleaseEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QMouseEvent*);
    using TextCustomEditor__PlainTextEditor_MouseDoubleClickEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QMouseEvent*);
    using TextCustomEditor__PlainTextEditor_FocusNextPrevChild_Callback = bool (*)(TextCustomEditor__PlainTextEditor*, bool);
    using TextCustomEditor__PlainTextEditor_DragEnterEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QDragEnterEvent*);
    using TextCustomEditor__PlainTextEditor_DragLeaveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QDragLeaveEvent*);
    using TextCustomEditor__PlainTextEditor_DragMoveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QDragMoveEvent*);
    using TextCustomEditor__PlainTextEditor_DropEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QDropEvent*);
    using TextCustomEditor__PlainTextEditor_FocusOutEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QFocusEvent*);
    using TextCustomEditor__PlainTextEditor_ShowEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QShowEvent*);
    using TextCustomEditor__PlainTextEditor_ChangeEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QEvent*);
    using TextCustomEditor__PlainTextEditor_CreateMimeDataFromSelection_Callback = QMimeData* (*)(const TextCustomEditor__PlainTextEditor*);
    using TextCustomEditor__PlainTextEditor_CanInsertFromMimeData_Callback = bool (*)(const TextCustomEditor__PlainTextEditor*, QMimeData*);
    using TextCustomEditor__PlainTextEditor_InsertFromMimeData_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QMimeData*);
    using TextCustomEditor__PlainTextEditor_InputMethodEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QInputMethodEvent*);
    using TextCustomEditor__PlainTextEditor_ScrollContentsBy_Callback = void (*)(TextCustomEditor__PlainTextEditor*, int, int);
    using TextCustomEditor__PlainTextEditor_DoSetTextCursor_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QTextCursor*);
    using TextCustomEditor__PlainTextEditor_MinimumSizeHint_Callback = QSize* (*)(const TextCustomEditor__PlainTextEditor*);
    using TextCustomEditor__PlainTextEditor_SizeHint_Callback = QSize* (*)(const TextCustomEditor__PlainTextEditor*);
    using TextCustomEditor__PlainTextEditor_SetupViewport_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QWidget*);
    using TextCustomEditor__PlainTextEditor_EventFilter_Callback = bool (*)(TextCustomEditor__PlainTextEditor*, QObject*, QEvent*);
    using TextCustomEditor__PlainTextEditor_ViewportEvent_Callback = bool (*)(TextCustomEditor__PlainTextEditor*, QEvent*);
    using TextCustomEditor__PlainTextEditor_ViewportSizeHint_Callback = QSize* (*)(const TextCustomEditor__PlainTextEditor*);
    using TextCustomEditor__PlainTextEditor_InitStyleOption_Callback = void (*)(const TextCustomEditor__PlainTextEditor*, QStyleOptionFrame*);
    using TextCustomEditor__PlainTextEditor_DevType_Callback = int (*)(const TextCustomEditor__PlainTextEditor*);
    using TextCustomEditor__PlainTextEditor_SetVisible_Callback = void (*)(TextCustomEditor__PlainTextEditor*, bool);
    using TextCustomEditor__PlainTextEditor_HeightForWidth_Callback = int (*)(const TextCustomEditor__PlainTextEditor*, int);
    using TextCustomEditor__PlainTextEditor_HasHeightForWidth_Callback = bool (*)(const TextCustomEditor__PlainTextEditor*);
    using TextCustomEditor__PlainTextEditor_PaintEngine_Callback = QPaintEngine* (*)(const TextCustomEditor__PlainTextEditor*);
    using TextCustomEditor__PlainTextEditor_EnterEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QEnterEvent*);
    using TextCustomEditor__PlainTextEditor_LeaveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QEvent*);
    using TextCustomEditor__PlainTextEditor_MoveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QMoveEvent*);
    using TextCustomEditor__PlainTextEditor_CloseEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QCloseEvent*);
    using TextCustomEditor__PlainTextEditor_TabletEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QTabletEvent*);
    using TextCustomEditor__PlainTextEditor_ActionEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QActionEvent*);
    using TextCustomEditor__PlainTextEditor_HideEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QHideEvent*);
    using TextCustomEditor__PlainTextEditor_NativeEvent_Callback = bool (*)(TextCustomEditor__PlainTextEditor*, libqt_string, void*, intptr_t*);
    using TextCustomEditor__PlainTextEditor_Metric_Callback = int (*)(const TextCustomEditor__PlainTextEditor*, int);
    using TextCustomEditor__PlainTextEditor_InitPainter_Callback = void (*)(const TextCustomEditor__PlainTextEditor*, QPainter*);
    using TextCustomEditor__PlainTextEditor_Redirected_Callback = QPaintDevice* (*)(const TextCustomEditor__PlainTextEditor*, QPoint*);
    using TextCustomEditor__PlainTextEditor_SharedPainter_Callback = QPainter* (*)(const TextCustomEditor__PlainTextEditor*);
    using TextCustomEditor__PlainTextEditor_ChildEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QChildEvent*);
    using TextCustomEditor__PlainTextEditor_CustomEvent_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QEvent*);
    using TextCustomEditor__PlainTextEditor_ConnectNotify_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QMetaMethod*);
    using TextCustomEditor__PlainTextEditor_DisconnectNotify_Callback = void (*)(TextCustomEditor__PlainTextEditor*, QMetaMethod*);
    using TextCustomEditor::PlainTextEditor::blockBoundingGeometry;
    using TextCustomEditor::PlainTextEditor::blockBoundingRect;
    using TextCustomEditor::PlainTextEditor::contentOffset;
    using TextCustomEditor::PlainTextEditor::create;
    using TextCustomEditor::PlainTextEditor::destroy;
    using TextCustomEditor::PlainTextEditor::drawFrame;
    using TextCustomEditor::PlainTextEditor::firstVisibleBlock;
    using TextCustomEditor::PlainTextEditor::focusNextChild;
    using TextCustomEditor::PlainTextEditor::focusPreviousChild;
    using TextCustomEditor::PlainTextEditor::getDecodedMetricF;
    using TextCustomEditor::PlainTextEditor::getPaintContext;
    using TextCustomEditor::PlainTextEditor::handleShortcut;
    using TextCustomEditor::PlainTextEditor::isSignalConnected;
    using TextCustomEditor::PlainTextEditor::overrideShortcut;
    using TextCustomEditor::PlainTextEditor::receivers;
    using TextCustomEditor::PlainTextEditor::sender;
    using TextCustomEditor::PlainTextEditor::senderSignalIndex;
    using TextCustomEditor::PlainTextEditor::setHighlighter;
    using TextCustomEditor::PlainTextEditor::setViewportMargins;
    using TextCustomEditor::PlainTextEditor::updateMicroFocus;
    using TextCustomEditor::PlainTextEditor::viewportMargins;
    using TextCustomEditor::PlainTextEditor::zoomInF;

    // Instance callback storage
    TextCustomEditor__PlainTextEditor_MetaObject_Callback textcustomeditor__plaintexteditor_metaobject_callback = nullptr;
    TextCustomEditor__PlainTextEditor_Metacast_Callback textcustomeditor__plaintexteditor_metacast_callback = nullptr;
    TextCustomEditor__PlainTextEditor_Metacall_Callback textcustomeditor__plaintexteditor_metacall_callback = nullptr;
    TextCustomEditor__PlainTextEditor_SetReadOnly_Callback textcustomeditor__plaintexteditor_setreadonly_callback = nullptr;
    TextCustomEditor__PlainTextEditor_CreateHighlighter_Callback textcustomeditor__plaintexteditor_createhighlighter_callback = nullptr;
    TextCustomEditor__PlainTextEditor_AddExtraMenuEntry_Callback textcustomeditor__plaintexteditor_addextramenuentry_callback = nullptr;
    TextCustomEditor__PlainTextEditor_ContextMenuEvent_Callback textcustomeditor__plaintexteditor_contextmenuevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_Event_Callback textcustomeditor__plaintexteditor_event_callback = nullptr;
    TextCustomEditor__PlainTextEditor_KeyPressEvent_Callback textcustomeditor__plaintexteditor_keypressevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_WheelEvent_Callback textcustomeditor__plaintexteditor_wheelevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_CreateSpellCheckDecorator_Callback textcustomeditor__plaintexteditor_createspellcheckdecorator_callback = nullptr;
    TextCustomEditor__PlainTextEditor_FocusInEvent_Callback textcustomeditor__plaintexteditor_focusinevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_UpdateHighLighter_Callback textcustomeditor__plaintexteditor_updatehighlighter_callback = nullptr;
    TextCustomEditor__PlainTextEditor_ClearDecorator_Callback textcustomeditor__plaintexteditor_cleardecorator_callback = nullptr;
    TextCustomEditor__PlainTextEditor_LoadResource_Callback textcustomeditor__plaintexteditor_loadresource_callback = nullptr;
    TextCustomEditor__PlainTextEditor_InputMethodQuery_Callback textcustomeditor__plaintexteditor_inputmethodquery_callback = nullptr;
    TextCustomEditor__PlainTextEditor_TimerEvent_Callback textcustomeditor__plaintexteditor_timerevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_KeyReleaseEvent_Callback textcustomeditor__plaintexteditor_keyreleaseevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_ResizeEvent_Callback textcustomeditor__plaintexteditor_resizeevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_PaintEvent_Callback textcustomeditor__plaintexteditor_paintevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_MousePressEvent_Callback textcustomeditor__plaintexteditor_mousepressevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_MouseMoveEvent_Callback textcustomeditor__plaintexteditor_mousemoveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_MouseReleaseEvent_Callback textcustomeditor__plaintexteditor_mousereleaseevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_MouseDoubleClickEvent_Callback textcustomeditor__plaintexteditor_mousedoubleclickevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_FocusNextPrevChild_Callback textcustomeditor__plaintexteditor_focusnextprevchild_callback = nullptr;
    TextCustomEditor__PlainTextEditor_DragEnterEvent_Callback textcustomeditor__plaintexteditor_dragenterevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_DragLeaveEvent_Callback textcustomeditor__plaintexteditor_dragleaveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_DragMoveEvent_Callback textcustomeditor__plaintexteditor_dragmoveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_DropEvent_Callback textcustomeditor__plaintexteditor_dropevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_FocusOutEvent_Callback textcustomeditor__plaintexteditor_focusoutevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_ShowEvent_Callback textcustomeditor__plaintexteditor_showevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_ChangeEvent_Callback textcustomeditor__plaintexteditor_changeevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_CreateMimeDataFromSelection_Callback textcustomeditor__plaintexteditor_createmimedatafromselection_callback = nullptr;
    TextCustomEditor__PlainTextEditor_CanInsertFromMimeData_Callback textcustomeditor__plaintexteditor_caninsertfrommimedata_callback = nullptr;
    TextCustomEditor__PlainTextEditor_InsertFromMimeData_Callback textcustomeditor__plaintexteditor_insertfrommimedata_callback = nullptr;
    TextCustomEditor__PlainTextEditor_InputMethodEvent_Callback textcustomeditor__plaintexteditor_inputmethodevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_ScrollContentsBy_Callback textcustomeditor__plaintexteditor_scrollcontentsby_callback = nullptr;
    TextCustomEditor__PlainTextEditor_DoSetTextCursor_Callback textcustomeditor__plaintexteditor_dosettextcursor_callback = nullptr;
    TextCustomEditor__PlainTextEditor_MinimumSizeHint_Callback textcustomeditor__plaintexteditor_minimumsizehint_callback = nullptr;
    TextCustomEditor__PlainTextEditor_SizeHint_Callback textcustomeditor__plaintexteditor_sizehint_callback = nullptr;
    TextCustomEditor__PlainTextEditor_SetupViewport_Callback textcustomeditor__plaintexteditor_setupviewport_callback = nullptr;
    TextCustomEditor__PlainTextEditor_EventFilter_Callback textcustomeditor__plaintexteditor_eventfilter_callback = nullptr;
    TextCustomEditor__PlainTextEditor_ViewportEvent_Callback textcustomeditor__plaintexteditor_viewportevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_ViewportSizeHint_Callback textcustomeditor__plaintexteditor_viewportsizehint_callback = nullptr;
    TextCustomEditor__PlainTextEditor_InitStyleOption_Callback textcustomeditor__plaintexteditor_initstyleoption_callback = nullptr;
    TextCustomEditor__PlainTextEditor_DevType_Callback textcustomeditor__plaintexteditor_devtype_callback = nullptr;
    TextCustomEditor__PlainTextEditor_SetVisible_Callback textcustomeditor__plaintexteditor_setvisible_callback = nullptr;
    TextCustomEditor__PlainTextEditor_HeightForWidth_Callback textcustomeditor__plaintexteditor_heightforwidth_callback = nullptr;
    TextCustomEditor__PlainTextEditor_HasHeightForWidth_Callback textcustomeditor__plaintexteditor_hasheightforwidth_callback = nullptr;
    TextCustomEditor__PlainTextEditor_PaintEngine_Callback textcustomeditor__plaintexteditor_paintengine_callback = nullptr;
    TextCustomEditor__PlainTextEditor_EnterEvent_Callback textcustomeditor__plaintexteditor_enterevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_LeaveEvent_Callback textcustomeditor__plaintexteditor_leaveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_MoveEvent_Callback textcustomeditor__plaintexteditor_moveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_CloseEvent_Callback textcustomeditor__plaintexteditor_closeevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_TabletEvent_Callback textcustomeditor__plaintexteditor_tabletevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_ActionEvent_Callback textcustomeditor__plaintexteditor_actionevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_HideEvent_Callback textcustomeditor__plaintexteditor_hideevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_NativeEvent_Callback textcustomeditor__plaintexteditor_nativeevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_Metric_Callback textcustomeditor__plaintexteditor_metric_callback = nullptr;
    TextCustomEditor__PlainTextEditor_InitPainter_Callback textcustomeditor__plaintexteditor_initpainter_callback = nullptr;
    TextCustomEditor__PlainTextEditor_Redirected_Callback textcustomeditor__plaintexteditor_redirected_callback = nullptr;
    TextCustomEditor__PlainTextEditor_SharedPainter_Callback textcustomeditor__plaintexteditor_sharedpainter_callback = nullptr;
    TextCustomEditor__PlainTextEditor_ChildEvent_Callback textcustomeditor__plaintexteditor_childevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_CustomEvent_Callback textcustomeditor__plaintexteditor_customevent_callback = nullptr;
    TextCustomEditor__PlainTextEditor_ConnectNotify_Callback textcustomeditor__plaintexteditor_connectnotify_callback = nullptr;
    TextCustomEditor__PlainTextEditor_DisconnectNotify_Callback textcustomeditor__plaintexteditor_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextCustomEditor::PlainTextEditor {
        using TextCustomEditor::PlainTextEditor::actionEvent;
        using TextCustomEditor::PlainTextEditor::addExtraMenuEntry;
        using TextCustomEditor::PlainTextEditor::canInsertFromMimeData;
        using TextCustomEditor::PlainTextEditor::changeEvent;
        using TextCustomEditor::PlainTextEditor::childEvent;
        using TextCustomEditor::PlainTextEditor::clearDecorator;
        using TextCustomEditor::PlainTextEditor::closeEvent;
        using TextCustomEditor::PlainTextEditor::connectNotify;
        using TextCustomEditor::PlainTextEditor::contextMenuEvent;
        using TextCustomEditor::PlainTextEditor::createMimeDataFromSelection;
        using TextCustomEditor::PlainTextEditor::createSpellCheckDecorator;
        using TextCustomEditor::PlainTextEditor::customEvent;
        using TextCustomEditor::PlainTextEditor::disconnectNotify;
        using TextCustomEditor::PlainTextEditor::doSetTextCursor;
        using TextCustomEditor::PlainTextEditor::dragEnterEvent;
        using TextCustomEditor::PlainTextEditor::dragLeaveEvent;
        using TextCustomEditor::PlainTextEditor::dragMoveEvent;
        using TextCustomEditor::PlainTextEditor::dropEvent;
        using TextCustomEditor::PlainTextEditor::enterEvent;
        using TextCustomEditor::PlainTextEditor::event;
        using TextCustomEditor::PlainTextEditor::eventFilter;
        using TextCustomEditor::PlainTextEditor::focusInEvent;
        using TextCustomEditor::PlainTextEditor::focusNextPrevChild;
        using TextCustomEditor::PlainTextEditor::focusOutEvent;
        using TextCustomEditor::PlainTextEditor::hideEvent;
        using TextCustomEditor::PlainTextEditor::initPainter;
        using TextCustomEditor::PlainTextEditor::initStyleOption;
        using TextCustomEditor::PlainTextEditor::inputMethodEvent;
        using TextCustomEditor::PlainTextEditor::insertFromMimeData;
        using TextCustomEditor::PlainTextEditor::keyPressEvent;
        using TextCustomEditor::PlainTextEditor::keyReleaseEvent;
        using TextCustomEditor::PlainTextEditor::leaveEvent;
        using TextCustomEditor::PlainTextEditor::metric;
        using TextCustomEditor::PlainTextEditor::mouseDoubleClickEvent;
        using TextCustomEditor::PlainTextEditor::mouseMoveEvent;
        using TextCustomEditor::PlainTextEditor::mousePressEvent;
        using TextCustomEditor::PlainTextEditor::mouseReleaseEvent;
        using TextCustomEditor::PlainTextEditor::moveEvent;
        using TextCustomEditor::PlainTextEditor::nativeEvent;
        using TextCustomEditor::PlainTextEditor::paintEvent;
        using TextCustomEditor::PlainTextEditor::redirected;
        using TextCustomEditor::PlainTextEditor::resizeEvent;
        using TextCustomEditor::PlainTextEditor::scrollContentsBy;
        using TextCustomEditor::PlainTextEditor::sharedPainter;
        using TextCustomEditor::PlainTextEditor::showEvent;
        using TextCustomEditor::PlainTextEditor::tabletEvent;
        using TextCustomEditor::PlainTextEditor::timerEvent;
        using TextCustomEditor::PlainTextEditor::updateHighLighter;
        using TextCustomEditor::PlainTextEditor::viewportEvent;
        using TextCustomEditor::PlainTextEditor::viewportSizeHint;
        using TextCustomEditor::PlainTextEditor::wheelEvent;
    };

    VirtualTextCustomEditorPlainTextEditor(QWidget* parent) : TextCustomEditor::PlainTextEditor(parent) {};
    VirtualTextCustomEditorPlainTextEditor() : TextCustomEditor::PlainTextEditor() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textcustomeditor__plaintexteditor_metaobject_callback) {
            QMetaObject* callback_ret = textcustomeditor__plaintexteditor_metaobject_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textcustomeditor__plaintexteditor_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textcustomeditor__plaintexteditor_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textcustomeditor__plaintexteditor_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textcustomeditor__plaintexteditor_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditor::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReadOnly(bool readOnly) override {
        if (textcustomeditor__plaintexteditor_setreadonly_callback) {
            bool cbval1 = readOnly;
            textcustomeditor__plaintexteditor_setreadonly_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::setReadOnly(readOnly);
    }

    // Virtual method for C ABI access and custom callback
    virtual void createHighlighter() override {
        if (textcustomeditor__plaintexteditor_createhighlighter_callback) {
            textcustomeditor__plaintexteditor_createhighlighter_callback(this);
            return;
        }
        TextCustomEditor__PlainTextEditor::createHighlighter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void addExtraMenuEntry(QMenu* menu, QPoint pos) override {
        if (textcustomeditor__plaintexteditor_addextramenuentry_callback) {
            QMenu* cbval1 = menu;
            QPoint* cbval2 = new QPoint(pos);
            textcustomeditor__plaintexteditor_addextramenuentry_callback(this, cbval1, cbval2);
            return;
        }
        TextCustomEditor__PlainTextEditor::addExtraMenuEntry(menu, pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textcustomeditor__plaintexteditor_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            textcustomeditor__plaintexteditor_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* ev) override {
        if (textcustomeditor__plaintexteditor_event_callback) {
            QEvent* cbval1 = ev;
            bool callback_ret = textcustomeditor__plaintexteditor_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::event(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textcustomeditor__plaintexteditor_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            textcustomeditor__plaintexteditor_keypressevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textcustomeditor__plaintexteditor_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            textcustomeditor__plaintexteditor_wheelevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual Sonnet::SpellCheckDecorator* createSpellCheckDecorator() override {
        if (textcustomeditor__plaintexteditor_createspellcheckdecorator_callback) {
            Sonnet__SpellCheckDecorator* callback_ret = textcustomeditor__plaintexteditor_createspellcheckdecorator_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::createSpellCheckDecorator();
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textcustomeditor__plaintexteditor_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            textcustomeditor__plaintexteditor_focusinevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateHighLighter() override {
        if (textcustomeditor__plaintexteditor_updatehighlighter_callback) {
            textcustomeditor__plaintexteditor_updatehighlighter_callback(this);
            return;
        }
        TextCustomEditor__PlainTextEditor::updateHighLighter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void clearDecorator() override {
        if (textcustomeditor__plaintexteditor_cleardecorator_callback) {
            textcustomeditor__plaintexteditor_cleardecorator_callback(this);
            return;
        }
        TextCustomEditor__PlainTextEditor::clearDecorator();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant loadResource(int typeVal, const QUrl& name) override {
        if (textcustomeditor__plaintexteditor_loadresource_callback) {
            int cbval1 = typeVal;
            const QUrl& name_ret = name;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&name_ret);
            QVariant* callback_ret = textcustomeditor__plaintexteditor_loadresource_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__PlainTextEditor::loadResource(typeVal, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
        if (textcustomeditor__plaintexteditor_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(property);
            QVariant* callback_ret = textcustomeditor__plaintexteditor_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__PlainTextEditor::inputMethodQuery(property);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (textcustomeditor__plaintexteditor_timerevent_callback) {
            QTimerEvent* cbval1 = e;
            textcustomeditor__plaintexteditor_timerevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (textcustomeditor__plaintexteditor_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            textcustomeditor__plaintexteditor_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (textcustomeditor__plaintexteditor_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            textcustomeditor__plaintexteditor_resizeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (textcustomeditor__plaintexteditor_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            textcustomeditor__plaintexteditor_paintevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (textcustomeditor__plaintexteditor_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            textcustomeditor__plaintexteditor_mousepressevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (textcustomeditor__plaintexteditor_mousemoveevent_callback) {
            QMouseEvent* cbval1 = e;
            textcustomeditor__plaintexteditor_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (textcustomeditor__plaintexteditor_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            textcustomeditor__plaintexteditor_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (textcustomeditor__plaintexteditor_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = e;
            textcustomeditor__plaintexteditor_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::mouseDoubleClickEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textcustomeditor__plaintexteditor_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textcustomeditor__plaintexteditor_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (textcustomeditor__plaintexteditor_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = e;
            textcustomeditor__plaintexteditor_dragenterevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::dragEnterEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (textcustomeditor__plaintexteditor_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = e;
            textcustomeditor__plaintexteditor_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (textcustomeditor__plaintexteditor_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = e;
            textcustomeditor__plaintexteditor_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (textcustomeditor__plaintexteditor_dropevent_callback) {
            QDropEvent* cbval1 = e;
            textcustomeditor__plaintexteditor_dropevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::dropEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (textcustomeditor__plaintexteditor_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            textcustomeditor__plaintexteditor_focusoutevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (textcustomeditor__plaintexteditor_showevent_callback) {
            QShowEvent* cbval1 = param1;
            textcustomeditor__plaintexteditor_showevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (textcustomeditor__plaintexteditor_changeevent_callback) {
            QEvent* cbval1 = e;
            textcustomeditor__plaintexteditor_changeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* createMimeDataFromSelection() const override {
        if (textcustomeditor__plaintexteditor_createmimedatafromselection_callback) {
            QMimeData* callback_ret = textcustomeditor__plaintexteditor_createmimedatafromselection_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::createMimeDataFromSelection();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (textcustomeditor__plaintexteditor_caninsertfrommimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)source;
            bool callback_ret = textcustomeditor__plaintexteditor_caninsertfrommimedata_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::canInsertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertFromMimeData(const QMimeData* source) override {
        if (textcustomeditor__plaintexteditor_insertfrommimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)source;
            textcustomeditor__plaintexteditor_insertfrommimedata_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::insertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textcustomeditor__plaintexteditor_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textcustomeditor__plaintexteditor_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (textcustomeditor__plaintexteditor_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            textcustomeditor__plaintexteditor_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        TextCustomEditor__PlainTextEditor::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetTextCursor(const QTextCursor& cursor) override {
        if (textcustomeditor__plaintexteditor_dosettextcursor_callback) {
            const QTextCursor& cursor_ret = cursor;
            // Cast returned reference into pointer
            QTextCursor* cbval1 = const_cast<QTextCursor*>(&cursor_ret);
            textcustomeditor__plaintexteditor_dosettextcursor_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::doSetTextCursor(cursor);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textcustomeditor__plaintexteditor_minimumsizehint_callback) {
            QSize* callback_ret = textcustomeditor__plaintexteditor_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__PlainTextEditor::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textcustomeditor__plaintexteditor_sizehint_callback) {
            QSize* callback_ret = textcustomeditor__plaintexteditor_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__PlainTextEditor::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (textcustomeditor__plaintexteditor_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            textcustomeditor__plaintexteditor_setupviewport_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (textcustomeditor__plaintexteditor_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = textcustomeditor__plaintexteditor_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (textcustomeditor__plaintexteditor_viewportevent_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = textcustomeditor__plaintexteditor_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::viewportEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (textcustomeditor__plaintexteditor_viewportsizehint_callback) {
            QSize* callback_ret = textcustomeditor__plaintexteditor_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__PlainTextEditor::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (textcustomeditor__plaintexteditor_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            textcustomeditor__plaintexteditor_initstyleoption_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textcustomeditor__plaintexteditor_devtype_callback) {
            int callback_ret = textcustomeditor__plaintexteditor_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditor::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textcustomeditor__plaintexteditor_setvisible_callback) {
            bool cbval1 = visible;
            textcustomeditor__plaintexteditor_setvisible_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textcustomeditor__plaintexteditor_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textcustomeditor__plaintexteditor_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditor::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textcustomeditor__plaintexteditor_hasheightforwidth_callback) {
            bool callback_ret = textcustomeditor__plaintexteditor_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textcustomeditor__plaintexteditor_paintengine_callback) {
            QPaintEngine* callback_ret = textcustomeditor__plaintexteditor_paintengine_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textcustomeditor__plaintexteditor_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textcustomeditor__plaintexteditor_enterevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textcustomeditor__plaintexteditor_leaveevent_callback) {
            QEvent* cbval1 = event;
            textcustomeditor__plaintexteditor_leaveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textcustomeditor__plaintexteditor_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textcustomeditor__plaintexteditor_moveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textcustomeditor__plaintexteditor_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            textcustomeditor__plaintexteditor_closeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textcustomeditor__plaintexteditor_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textcustomeditor__plaintexteditor_tabletevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textcustomeditor__plaintexteditor_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textcustomeditor__plaintexteditor_actionevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textcustomeditor__plaintexteditor_hideevent_callback) {
            QHideEvent* cbval1 = event;
            textcustomeditor__plaintexteditor_hideevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textcustomeditor__plaintexteditor_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textcustomeditor__plaintexteditor_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textcustomeditor__plaintexteditor_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textcustomeditor__plaintexteditor_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditor::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textcustomeditor__plaintexteditor_initpainter_callback) {
            QPainter* cbval1 = painter;
            textcustomeditor__plaintexteditor_initpainter_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textcustomeditor__plaintexteditor_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textcustomeditor__plaintexteditor_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textcustomeditor__plaintexteditor_sharedpainter_callback) {
            QPainter* callback_ret = textcustomeditor__plaintexteditor_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditor::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textcustomeditor__plaintexteditor_childevent_callback) {
            QChildEvent* cbval1 = event;
            textcustomeditor__plaintexteditor_childevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textcustomeditor__plaintexteditor_customevent_callback) {
            QEvent* cbval1 = event;
            textcustomeditor__plaintexteditor_customevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__plaintexteditor_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textcustomeditor__plaintexteditor_connectnotify_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__plaintexteditor_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textcustomeditor__plaintexteditor_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditor::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextCustomEditor__PlainTextEditor_SuperAddExtraMenuEntry(TextCustomEditor::PlainTextEditor* self, QMenu* menu, QPoint* pos);
    friend void TextCustomEditor__PlainTextEditor_SuperContextMenuEvent(TextCustomEditor::PlainTextEditor* self, QContextMenuEvent* event);
    friend bool TextCustomEditor__PlainTextEditor_SuperEvent(TextCustomEditor::PlainTextEditor* self, QEvent* ev);
    friend void TextCustomEditor__PlainTextEditor_SuperKeyPressEvent(TextCustomEditor::PlainTextEditor* self, QKeyEvent* event);
    friend void TextCustomEditor__PlainTextEditor_SuperWheelEvent(TextCustomEditor::PlainTextEditor* self, QWheelEvent* event);
    friend Sonnet__SpellCheckDecorator* TextCustomEditor__PlainTextEditor_SuperCreateSpellCheckDecorator(TextCustomEditor::PlainTextEditor* self);
    friend void TextCustomEditor__PlainTextEditor_SuperFocusInEvent(TextCustomEditor::PlainTextEditor* self, QFocusEvent* event);
    friend void TextCustomEditor__PlainTextEditor_SuperUpdateHighLighter(TextCustomEditor::PlainTextEditor* self);
    friend void TextCustomEditor__PlainTextEditor_SuperClearDecorator(TextCustomEditor::PlainTextEditor* self);
    friend void TextCustomEditor__PlainTextEditor_SuperTimerEvent(TextCustomEditor::PlainTextEditor* self, QTimerEvent* e);
    friend void TextCustomEditor__PlainTextEditor_SuperKeyReleaseEvent(TextCustomEditor::PlainTextEditor* self, QKeyEvent* e);
    friend void TextCustomEditor__PlainTextEditor_SuperResizeEvent(TextCustomEditor::PlainTextEditor* self, QResizeEvent* e);
    friend void TextCustomEditor__PlainTextEditor_SuperPaintEvent(TextCustomEditor::PlainTextEditor* self, QPaintEvent* e);
    friend void TextCustomEditor__PlainTextEditor_SuperMousePressEvent(TextCustomEditor::PlainTextEditor* self, QMouseEvent* e);
    friend void TextCustomEditor__PlainTextEditor_SuperMouseMoveEvent(TextCustomEditor::PlainTextEditor* self, QMouseEvent* e);
    friend void TextCustomEditor__PlainTextEditor_SuperMouseReleaseEvent(TextCustomEditor::PlainTextEditor* self, QMouseEvent* e);
    friend void TextCustomEditor__PlainTextEditor_SuperMouseDoubleClickEvent(TextCustomEditor::PlainTextEditor* self, QMouseEvent* e);
    friend bool TextCustomEditor__PlainTextEditor_SuperFocusNextPrevChild(TextCustomEditor::PlainTextEditor* self, bool next);
    friend void TextCustomEditor__PlainTextEditor_SuperDragEnterEvent(TextCustomEditor::PlainTextEditor* self, QDragEnterEvent* e);
    friend void TextCustomEditor__PlainTextEditor_SuperDragLeaveEvent(TextCustomEditor::PlainTextEditor* self, QDragLeaveEvent* e);
    friend void TextCustomEditor__PlainTextEditor_SuperDragMoveEvent(TextCustomEditor::PlainTextEditor* self, QDragMoveEvent* e);
    friend void TextCustomEditor__PlainTextEditor_SuperDropEvent(TextCustomEditor::PlainTextEditor* self, QDropEvent* e);
    friend void TextCustomEditor__PlainTextEditor_SuperFocusOutEvent(TextCustomEditor::PlainTextEditor* self, QFocusEvent* e);
    friend void TextCustomEditor__PlainTextEditor_SuperShowEvent(TextCustomEditor::PlainTextEditor* self, QShowEvent* param1);
    friend void TextCustomEditor__PlainTextEditor_SuperChangeEvent(TextCustomEditor::PlainTextEditor* self, QEvent* e);
    friend QMimeData* TextCustomEditor__PlainTextEditor_SuperCreateMimeDataFromSelection(const TextCustomEditor::PlainTextEditor* self);
    friend bool TextCustomEditor__PlainTextEditor_SuperCanInsertFromMimeData(const TextCustomEditor::PlainTextEditor* self, const QMimeData* source);
    friend void TextCustomEditor__PlainTextEditor_SuperInsertFromMimeData(TextCustomEditor::PlainTextEditor* self, const QMimeData* source);
    friend void TextCustomEditor__PlainTextEditor_SuperInputMethodEvent(TextCustomEditor::PlainTextEditor* self, QInputMethodEvent* param1);
    friend void TextCustomEditor__PlainTextEditor_SuperScrollContentsBy(TextCustomEditor::PlainTextEditor* self, int dx, int dy);
    friend void TextCustomEditor__PlainTextEditor_SuperDoSetTextCursor(TextCustomEditor::PlainTextEditor* self, const QTextCursor* cursor);
    friend bool TextCustomEditor__PlainTextEditor_SuperEventFilter(TextCustomEditor::PlainTextEditor* self, QObject* param1, QEvent* param2);
    friend bool TextCustomEditor__PlainTextEditor_SuperViewportEvent(TextCustomEditor::PlainTextEditor* self, QEvent* param1);
    friend QSize* TextCustomEditor__PlainTextEditor_SuperViewportSizeHint(const TextCustomEditor::PlainTextEditor* self);
    friend void TextCustomEditor__PlainTextEditor_SuperInitStyleOption(const TextCustomEditor::PlainTextEditor* self, QStyleOptionFrame* option);
    friend void TextCustomEditor__PlainTextEditor_SuperEnterEvent(TextCustomEditor::PlainTextEditor* self, QEnterEvent* event);
    friend void TextCustomEditor__PlainTextEditor_SuperLeaveEvent(TextCustomEditor::PlainTextEditor* self, QEvent* event);
    friend void TextCustomEditor__PlainTextEditor_SuperMoveEvent(TextCustomEditor::PlainTextEditor* self, QMoveEvent* event);
    friend void TextCustomEditor__PlainTextEditor_SuperCloseEvent(TextCustomEditor::PlainTextEditor* self, QCloseEvent* event);
    friend void TextCustomEditor__PlainTextEditor_SuperTabletEvent(TextCustomEditor::PlainTextEditor* self, QTabletEvent* event);
    friend void TextCustomEditor__PlainTextEditor_SuperActionEvent(TextCustomEditor::PlainTextEditor* self, QActionEvent* event);
    friend void TextCustomEditor__PlainTextEditor_SuperHideEvent(TextCustomEditor::PlainTextEditor* self, QHideEvent* event);
    friend bool TextCustomEditor__PlainTextEditor_SuperNativeEvent(TextCustomEditor::PlainTextEditor* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int TextCustomEditor__PlainTextEditor_SuperMetric(const TextCustomEditor::PlainTextEditor* self, int param1);
    friend void TextCustomEditor__PlainTextEditor_SuperInitPainter(const TextCustomEditor::PlainTextEditor* self, QPainter* painter);
    friend QPaintDevice* TextCustomEditor__PlainTextEditor_SuperRedirected(const TextCustomEditor::PlainTextEditor* self, QPoint* offset);
    friend QPainter* TextCustomEditor__PlainTextEditor_SuperSharedPainter(const TextCustomEditor::PlainTextEditor* self);
    friend void TextCustomEditor__PlainTextEditor_SuperChildEvent(TextCustomEditor::PlainTextEditor* self, QChildEvent* event);
    friend void TextCustomEditor__PlainTextEditor_SuperCustomEvent(TextCustomEditor::PlainTextEditor* self, QEvent* event);
    friend void TextCustomEditor__PlainTextEditor_SuperConnectNotify(TextCustomEditor::PlainTextEditor* self, const QMetaMethod* signal);
    friend void TextCustomEditor__PlainTextEditor_SuperDisconnectNotify(TextCustomEditor::PlainTextEditor* self, const QMetaMethod* signal);
};

#endif
