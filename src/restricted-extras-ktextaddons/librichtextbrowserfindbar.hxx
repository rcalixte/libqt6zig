#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBRICHTEXTBROWSERFINDBAR_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBRICHTEXTBROWSERFINDBAR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextCustomEditor::RichTextBrowserFindBar
class VirtualTextCustomEditorRichTextBrowserFindBar final : public TextCustomEditor::RichTextBrowserFindBar {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextCustomEditor__RichTextBrowserFindBar_MetaObject_Callback = QMetaObject* (*)(const TextCustomEditor__RichTextBrowserFindBar*);
    using TextCustomEditor__RichTextBrowserFindBar_Metacast_Callback = void* (*)(TextCustomEditor__RichTextBrowserFindBar*, const char*);
    using TextCustomEditor__RichTextBrowserFindBar_Metacall_Callback = int (*)(TextCustomEditor__RichTextBrowserFindBar*, int, int, void**);
    using TextCustomEditor__RichTextBrowserFindBar_ViewIsReadOnly_Callback = bool (*)(const TextCustomEditor__RichTextBrowserFindBar*);
    using TextCustomEditor__RichTextBrowserFindBar_DocumentIsEmpty_Callback = bool (*)(const TextCustomEditor__RichTextBrowserFindBar*);
    using TextCustomEditor__RichTextBrowserFindBar_SearchInDocument_Callback = bool (*)(TextCustomEditor__RichTextBrowserFindBar*, const char*, int);
    using TextCustomEditor__RichTextBrowserFindBar_SearchInDocument2_Callback = bool (*)(TextCustomEditor__RichTextBrowserFindBar*, QRegularExpression*, int);
    using TextCustomEditor__RichTextBrowserFindBar_AutoSearchMoveCursor_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*);
    using TextCustomEditor__RichTextBrowserFindBar_SlotSearchText_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, bool, bool);
    using TextCustomEditor__RichTextBrowserFindBar_Event_Callback = bool (*)(TextCustomEditor__RichTextBrowserFindBar*, QEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_DevType_Callback = int (*)(const TextCustomEditor__RichTextBrowserFindBar*);
    using TextCustomEditor__RichTextBrowserFindBar_SetVisible_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, bool);
    using TextCustomEditor__RichTextBrowserFindBar_SizeHint_Callback = QSize* (*)(const TextCustomEditor__RichTextBrowserFindBar*);
    using TextCustomEditor__RichTextBrowserFindBar_MinimumSizeHint_Callback = QSize* (*)(const TextCustomEditor__RichTextBrowserFindBar*);
    using TextCustomEditor__RichTextBrowserFindBar_HeightForWidth_Callback = int (*)(const TextCustomEditor__RichTextBrowserFindBar*, int);
    using TextCustomEditor__RichTextBrowserFindBar_HasHeightForWidth_Callback = bool (*)(const TextCustomEditor__RichTextBrowserFindBar*);
    using TextCustomEditor__RichTextBrowserFindBar_PaintEngine_Callback = QPaintEngine* (*)(const TextCustomEditor__RichTextBrowserFindBar*);
    using TextCustomEditor__RichTextBrowserFindBar_MousePressEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QMouseEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_MouseReleaseEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QMouseEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_MouseDoubleClickEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QMouseEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_MouseMoveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QMouseEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_WheelEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QWheelEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_KeyPressEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QKeyEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_KeyReleaseEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QKeyEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_FocusInEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QFocusEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_FocusOutEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QFocusEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_EnterEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QEnterEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_LeaveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_PaintEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QPaintEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_MoveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QMoveEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_ResizeEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QResizeEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_CloseEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QCloseEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_ContextMenuEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QContextMenuEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_TabletEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QTabletEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_ActionEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QActionEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_DragEnterEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QDragEnterEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_DragMoveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QDragMoveEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_DragLeaveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QDragLeaveEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_DropEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QDropEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_ShowEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QShowEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_HideEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QHideEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_NativeEvent_Callback = bool (*)(TextCustomEditor__RichTextBrowserFindBar*, libqt_string, void*, intptr_t*);
    using TextCustomEditor__RichTextBrowserFindBar_ChangeEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_Metric_Callback = int (*)(const TextCustomEditor__RichTextBrowserFindBar*, int);
    using TextCustomEditor__RichTextBrowserFindBar_InitPainter_Callback = void (*)(const TextCustomEditor__RichTextBrowserFindBar*, QPainter*);
    using TextCustomEditor__RichTextBrowserFindBar_Redirected_Callback = QPaintDevice* (*)(const TextCustomEditor__RichTextBrowserFindBar*, QPoint*);
    using TextCustomEditor__RichTextBrowserFindBar_SharedPainter_Callback = QPainter* (*)(const TextCustomEditor__RichTextBrowserFindBar*);
    using TextCustomEditor__RichTextBrowserFindBar_InputMethodEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QInputMethodEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_InputMethodQuery_Callback = QVariant* (*)(const TextCustomEditor__RichTextBrowserFindBar*, int);
    using TextCustomEditor__RichTextBrowserFindBar_FocusNextPrevChild_Callback = bool (*)(TextCustomEditor__RichTextBrowserFindBar*, bool);
    using TextCustomEditor__RichTextBrowserFindBar_EventFilter_Callback = bool (*)(TextCustomEditor__RichTextBrowserFindBar*, QObject*, QEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_TimerEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QTimerEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_ChildEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QChildEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_CustomEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_ConnectNotify_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QMetaMethod*);
    using TextCustomEditor__RichTextBrowserFindBar_DisconnectNotify_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QMetaMethod*);
    using TextCustomEditor::RichTextBrowserFindBar::clearSelections;
    using TextCustomEditor::RichTextBrowserFindBar::create;
    using TextCustomEditor::RichTextBrowserFindBar::destroy;
    using TextCustomEditor::RichTextBrowserFindBar::focusNextChild;
    using TextCustomEditor::RichTextBrowserFindBar::focusPreviousChild;
    using TextCustomEditor::RichTextBrowserFindBar::getDecodedMetricF;
    using TextCustomEditor::RichTextBrowserFindBar::isSignalConnected;
    using TextCustomEditor::RichTextBrowserFindBar::messageInfo;
    using TextCustomEditor::RichTextBrowserFindBar::receivers;
    using TextCustomEditor::RichTextBrowserFindBar::searchText;
    using TextCustomEditor::RichTextBrowserFindBar::sender;
    using TextCustomEditor::RichTextBrowserFindBar::senderSignalIndex;
    using TextCustomEditor::RichTextBrowserFindBar::setFoundMatch;
    using TextCustomEditor::RichTextBrowserFindBar::updateMicroFocus;

    // Instance callback storage
    TextCustomEditor__RichTextBrowserFindBar_MetaObject_Callback textcustomeditor__richtextbrowserfindbar_metaobject_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_Metacast_Callback textcustomeditor__richtextbrowserfindbar_metacast_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_Metacall_Callback textcustomeditor__richtextbrowserfindbar_metacall_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_ViewIsReadOnly_Callback textcustomeditor__richtextbrowserfindbar_viewisreadonly_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_DocumentIsEmpty_Callback textcustomeditor__richtextbrowserfindbar_documentisempty_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_SearchInDocument_Callback textcustomeditor__richtextbrowserfindbar_searchindocument_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_SearchInDocument2_Callback textcustomeditor__richtextbrowserfindbar_searchindocument2_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_AutoSearchMoveCursor_Callback textcustomeditor__richtextbrowserfindbar_autosearchmovecursor_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_SlotSearchText_Callback textcustomeditor__richtextbrowserfindbar_slotsearchtext_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_Event_Callback textcustomeditor__richtextbrowserfindbar_event_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_DevType_Callback textcustomeditor__richtextbrowserfindbar_devtype_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_SetVisible_Callback textcustomeditor__richtextbrowserfindbar_setvisible_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_SizeHint_Callback textcustomeditor__richtextbrowserfindbar_sizehint_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_MinimumSizeHint_Callback textcustomeditor__richtextbrowserfindbar_minimumsizehint_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_HeightForWidth_Callback textcustomeditor__richtextbrowserfindbar_heightforwidth_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_HasHeightForWidth_Callback textcustomeditor__richtextbrowserfindbar_hasheightforwidth_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_PaintEngine_Callback textcustomeditor__richtextbrowserfindbar_paintengine_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_MousePressEvent_Callback textcustomeditor__richtextbrowserfindbar_mousepressevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_MouseReleaseEvent_Callback textcustomeditor__richtextbrowserfindbar_mousereleaseevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_MouseDoubleClickEvent_Callback textcustomeditor__richtextbrowserfindbar_mousedoubleclickevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_MouseMoveEvent_Callback textcustomeditor__richtextbrowserfindbar_mousemoveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_WheelEvent_Callback textcustomeditor__richtextbrowserfindbar_wheelevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_KeyPressEvent_Callback textcustomeditor__richtextbrowserfindbar_keypressevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_KeyReleaseEvent_Callback textcustomeditor__richtextbrowserfindbar_keyreleaseevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_FocusInEvent_Callback textcustomeditor__richtextbrowserfindbar_focusinevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_FocusOutEvent_Callback textcustomeditor__richtextbrowserfindbar_focusoutevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_EnterEvent_Callback textcustomeditor__richtextbrowserfindbar_enterevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_LeaveEvent_Callback textcustomeditor__richtextbrowserfindbar_leaveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_PaintEvent_Callback textcustomeditor__richtextbrowserfindbar_paintevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_MoveEvent_Callback textcustomeditor__richtextbrowserfindbar_moveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_ResizeEvent_Callback textcustomeditor__richtextbrowserfindbar_resizeevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_CloseEvent_Callback textcustomeditor__richtextbrowserfindbar_closeevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_ContextMenuEvent_Callback textcustomeditor__richtextbrowserfindbar_contextmenuevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_TabletEvent_Callback textcustomeditor__richtextbrowserfindbar_tabletevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_ActionEvent_Callback textcustomeditor__richtextbrowserfindbar_actionevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_DragEnterEvent_Callback textcustomeditor__richtextbrowserfindbar_dragenterevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_DragMoveEvent_Callback textcustomeditor__richtextbrowserfindbar_dragmoveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_DragLeaveEvent_Callback textcustomeditor__richtextbrowserfindbar_dragleaveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_DropEvent_Callback textcustomeditor__richtextbrowserfindbar_dropevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_ShowEvent_Callback textcustomeditor__richtextbrowserfindbar_showevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_HideEvent_Callback textcustomeditor__richtextbrowserfindbar_hideevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_NativeEvent_Callback textcustomeditor__richtextbrowserfindbar_nativeevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_ChangeEvent_Callback textcustomeditor__richtextbrowserfindbar_changeevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_Metric_Callback textcustomeditor__richtextbrowserfindbar_metric_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_InitPainter_Callback textcustomeditor__richtextbrowserfindbar_initpainter_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_Redirected_Callback textcustomeditor__richtextbrowserfindbar_redirected_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_SharedPainter_Callback textcustomeditor__richtextbrowserfindbar_sharedpainter_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_InputMethodEvent_Callback textcustomeditor__richtextbrowserfindbar_inputmethodevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_InputMethodQuery_Callback textcustomeditor__richtextbrowserfindbar_inputmethodquery_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_FocusNextPrevChild_Callback textcustomeditor__richtextbrowserfindbar_focusnextprevchild_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_EventFilter_Callback textcustomeditor__richtextbrowserfindbar_eventfilter_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_TimerEvent_Callback textcustomeditor__richtextbrowserfindbar_timerevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_ChildEvent_Callback textcustomeditor__richtextbrowserfindbar_childevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_CustomEvent_Callback textcustomeditor__richtextbrowserfindbar_customevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_ConnectNotify_Callback textcustomeditor__richtextbrowserfindbar_connectnotify_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_DisconnectNotify_Callback textcustomeditor__richtextbrowserfindbar_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextCustomEditor::RichTextBrowserFindBar {
        using TextCustomEditor::RichTextBrowserFindBar::actionEvent;
        using TextCustomEditor::RichTextBrowserFindBar::autoSearchMoveCursor;
        using TextCustomEditor::RichTextBrowserFindBar::changeEvent;
        using TextCustomEditor::RichTextBrowserFindBar::childEvent;
        using TextCustomEditor::RichTextBrowserFindBar::closeEvent;
        using TextCustomEditor::RichTextBrowserFindBar::connectNotify;
        using TextCustomEditor::RichTextBrowserFindBar::contextMenuEvent;
        using TextCustomEditor::RichTextBrowserFindBar::customEvent;
        using TextCustomEditor::RichTextBrowserFindBar::disconnectNotify;
        using TextCustomEditor::RichTextBrowserFindBar::documentIsEmpty;
        using TextCustomEditor::RichTextBrowserFindBar::dragEnterEvent;
        using TextCustomEditor::RichTextBrowserFindBar::dragLeaveEvent;
        using TextCustomEditor::RichTextBrowserFindBar::dragMoveEvent;
        using TextCustomEditor::RichTextBrowserFindBar::dropEvent;
        using TextCustomEditor::RichTextBrowserFindBar::enterEvent;
        using TextCustomEditor::RichTextBrowserFindBar::event;
        using TextCustomEditor::RichTextBrowserFindBar::focusInEvent;
        using TextCustomEditor::RichTextBrowserFindBar::focusNextPrevChild;
        using TextCustomEditor::RichTextBrowserFindBar::focusOutEvent;
        using TextCustomEditor::RichTextBrowserFindBar::hideEvent;
        using TextCustomEditor::RichTextBrowserFindBar::initPainter;
        using TextCustomEditor::RichTextBrowserFindBar::inputMethodEvent;
        using TextCustomEditor::RichTextBrowserFindBar::keyPressEvent;
        using TextCustomEditor::RichTextBrowserFindBar::keyReleaseEvent;
        using TextCustomEditor::RichTextBrowserFindBar::leaveEvent;
        using TextCustomEditor::RichTextBrowserFindBar::metric;
        using TextCustomEditor::RichTextBrowserFindBar::mouseDoubleClickEvent;
        using TextCustomEditor::RichTextBrowserFindBar::mouseMoveEvent;
        using TextCustomEditor::RichTextBrowserFindBar::mousePressEvent;
        using TextCustomEditor::RichTextBrowserFindBar::mouseReleaseEvent;
        using TextCustomEditor::RichTextBrowserFindBar::moveEvent;
        using TextCustomEditor::RichTextBrowserFindBar::nativeEvent;
        using TextCustomEditor::RichTextBrowserFindBar::paintEvent;
        using TextCustomEditor::RichTextBrowserFindBar::redirected;
        using TextCustomEditor::RichTextBrowserFindBar::resizeEvent;
        using TextCustomEditor::RichTextBrowserFindBar::searchInDocument;
        using TextCustomEditor::RichTextBrowserFindBar::sharedPainter;
        using TextCustomEditor::RichTextBrowserFindBar::showEvent;
        using TextCustomEditor::RichTextBrowserFindBar::tabletEvent;
        using TextCustomEditor::RichTextBrowserFindBar::timerEvent;
        using TextCustomEditor::RichTextBrowserFindBar::viewIsReadOnly;
        using TextCustomEditor::RichTextBrowserFindBar::wheelEvent;
    };

    VirtualTextCustomEditorRichTextBrowserFindBar(QTextBrowser* view) : TextCustomEditor::RichTextBrowserFindBar(view) {};
    VirtualTextCustomEditorRichTextBrowserFindBar(QTextBrowser* view, QWidget* parent) : TextCustomEditor::RichTextBrowserFindBar(view, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textcustomeditor__richtextbrowserfindbar_metaobject_callback) {
            QMetaObject* callback_ret = textcustomeditor__richtextbrowserfindbar_metaobject_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textcustomeditor__richtextbrowserfindbar_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textcustomeditor__richtextbrowserfindbar_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textcustomeditor__richtextbrowserfindbar_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textcustomeditor__richtextbrowserfindbar_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowserFindBar::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewIsReadOnly() const override {
        if (textcustomeditor__richtextbrowserfindbar_viewisreadonly_callback) {
            bool callback_ret = textcustomeditor__richtextbrowserfindbar_viewisreadonly_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::viewIsReadOnly();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool documentIsEmpty() const override {
        if (textcustomeditor__richtextbrowserfindbar_documentisempty_callback) {
            bool callback_ret = textcustomeditor__richtextbrowserfindbar_documentisempty_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::documentIsEmpty();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool searchInDocument(const QString& text, TextCustomEditor::TextEditFindBarBase::FindFlags searchOptions) override {
        if (textcustomeditor__richtextbrowserfindbar_searchindocument_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            int cbval2 = static_cast<int>(searchOptions);
            bool callback_ret = textcustomeditor__richtextbrowserfindbar_searchindocument_callback(this, cbval1, cbval2);
            libqt_free(text_str);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::searchInDocument(text, searchOptions);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool searchInDocument(const QRegularExpression& regExp, TextCustomEditor::TextEditFindBarBase::FindFlags searchOptions) override {
        if (textcustomeditor__richtextbrowserfindbar_searchindocument2_callback) {
            const QRegularExpression& regExp_ret = regExp;
            // Cast returned reference into pointer
            QRegularExpression* cbval1 = const_cast<QRegularExpression*>(&regExp_ret);
            int cbval2 = static_cast<int>(searchOptions);
            bool callback_ret = textcustomeditor__richtextbrowserfindbar_searchindocument2_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::searchInDocument(regExp, searchOptions);
    }

    // Virtual method for C ABI access and custom callback
    virtual void autoSearchMoveCursor() override {
        if (textcustomeditor__richtextbrowserfindbar_autosearchmovecursor_callback) {
            textcustomeditor__richtextbrowserfindbar_autosearchmovecursor_callback(this);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::autoSearchMoveCursor();
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotSearchText(bool backward, bool isAutoSearch) override {
        if (textcustomeditor__richtextbrowserfindbar_slotsearchtext_callback) {
            bool cbval1 = backward;
            bool cbval2 = isAutoSearch;
            textcustomeditor__richtextbrowserfindbar_slotsearchtext_callback(this, cbval1, cbval2);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::slotSearchText(backward, isAutoSearch);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (textcustomeditor__richtextbrowserfindbar_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = textcustomeditor__richtextbrowserfindbar_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textcustomeditor__richtextbrowserfindbar_devtype_callback) {
            int callback_ret = textcustomeditor__richtextbrowserfindbar_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowserFindBar::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textcustomeditor__richtextbrowserfindbar_setvisible_callback) {
            bool cbval1 = visible;
            textcustomeditor__richtextbrowserfindbar_setvisible_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textcustomeditor__richtextbrowserfindbar_sizehint_callback) {
            QSize* callback_ret = textcustomeditor__richtextbrowserfindbar_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextBrowserFindBar::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textcustomeditor__richtextbrowserfindbar_minimumsizehint_callback) {
            QSize* callback_ret = textcustomeditor__richtextbrowserfindbar_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextBrowserFindBar::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textcustomeditor__richtextbrowserfindbar_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textcustomeditor__richtextbrowserfindbar_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowserFindBar::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textcustomeditor__richtextbrowserfindbar_hasheightforwidth_callback) {
            bool callback_ret = textcustomeditor__richtextbrowserfindbar_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textcustomeditor__richtextbrowserfindbar_paintengine_callback) {
            QPaintEngine* callback_ret = textcustomeditor__richtextbrowserfindbar_paintengine_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__richtextbrowserfindbar_mousepressevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__richtextbrowserfindbar_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__richtextbrowserfindbar_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__richtextbrowserfindbar_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            textcustomeditor__richtextbrowserfindbar_wheelevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            textcustomeditor__richtextbrowserfindbar_keypressevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            textcustomeditor__richtextbrowserfindbar_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            textcustomeditor__richtextbrowserfindbar_focusinevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            textcustomeditor__richtextbrowserfindbar_focusoutevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textcustomeditor__richtextbrowserfindbar_enterevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_leaveevent_callback) {
            QEvent* cbval1 = event;
            textcustomeditor__richtextbrowserfindbar_leaveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            textcustomeditor__richtextbrowserfindbar_paintevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textcustomeditor__richtextbrowserfindbar_moveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            textcustomeditor__richtextbrowserfindbar_resizeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            textcustomeditor__richtextbrowserfindbar_closeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            textcustomeditor__richtextbrowserfindbar_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textcustomeditor__richtextbrowserfindbar_tabletevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textcustomeditor__richtextbrowserfindbar_actionevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            textcustomeditor__richtextbrowserfindbar_dragenterevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            textcustomeditor__richtextbrowserfindbar_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            textcustomeditor__richtextbrowserfindbar_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_dropevent_callback) {
            QDropEvent* cbval1 = event;
            textcustomeditor__richtextbrowserfindbar_dropevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_showevent_callback) {
            QShowEvent* cbval1 = event;
            textcustomeditor__richtextbrowserfindbar_showevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_hideevent_callback) {
            QHideEvent* cbval1 = event;
            textcustomeditor__richtextbrowserfindbar_hideevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textcustomeditor__richtextbrowserfindbar_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textcustomeditor__richtextbrowserfindbar_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textcustomeditor__richtextbrowserfindbar_changeevent_callback) {
            QEvent* cbval1 = param1;
            textcustomeditor__richtextbrowserfindbar_changeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textcustomeditor__richtextbrowserfindbar_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textcustomeditor__richtextbrowserfindbar_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowserFindBar::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textcustomeditor__richtextbrowserfindbar_initpainter_callback) {
            QPainter* cbval1 = painter;
            textcustomeditor__richtextbrowserfindbar_initpainter_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textcustomeditor__richtextbrowserfindbar_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textcustomeditor__richtextbrowserfindbar_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textcustomeditor__richtextbrowserfindbar_sharedpainter_callback) {
            QPainter* callback_ret = textcustomeditor__richtextbrowserfindbar_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textcustomeditor__richtextbrowserfindbar_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textcustomeditor__richtextbrowserfindbar_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textcustomeditor__richtextbrowserfindbar_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = textcustomeditor__richtextbrowserfindbar_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextBrowserFindBar::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textcustomeditor__richtextbrowserfindbar_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textcustomeditor__richtextbrowserfindbar_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textcustomeditor__richtextbrowserfindbar_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textcustomeditor__richtextbrowserfindbar_timerevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_childevent_callback) {
            QChildEvent* cbval1 = event;
            textcustomeditor__richtextbrowserfindbar_childevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_customevent_callback) {
            QEvent* cbval1 = event;
            textcustomeditor__richtextbrowserfindbar_customevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__richtextbrowserfindbar_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textcustomeditor__richtextbrowserfindbar_connectnotify_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__richtextbrowserfindbar_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textcustomeditor__richtextbrowserfindbar_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::disconnectNotify(signal);
    }

    // Friend functions
    friend bool TextCustomEditor__RichTextBrowserFindBar_SuperViewIsReadOnly(const TextCustomEditor::RichTextBrowserFindBar* self);
    friend bool TextCustomEditor__RichTextBrowserFindBar_SuperDocumentIsEmpty(const TextCustomEditor::RichTextBrowserFindBar* self);
    friend bool TextCustomEditor__RichTextBrowserFindBar_SuperSearchInDocument(TextCustomEditor::RichTextBrowserFindBar* self, const libqt_string text, int searchOptions);
    friend bool TextCustomEditor__RichTextBrowserFindBar_SuperSearchInDocument2(TextCustomEditor::RichTextBrowserFindBar* self, const QRegularExpression* regExp, int searchOptions);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperAutoSearchMoveCursor(TextCustomEditor::RichTextBrowserFindBar* self);
    friend bool TextCustomEditor__RichTextBrowserFindBar_SuperEvent(TextCustomEditor::RichTextBrowserFindBar* self, QEvent* e);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperMousePressEvent(TextCustomEditor::RichTextBrowserFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperMouseReleaseEvent(TextCustomEditor::RichTextBrowserFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperMouseDoubleClickEvent(TextCustomEditor::RichTextBrowserFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperMouseMoveEvent(TextCustomEditor::RichTextBrowserFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperWheelEvent(TextCustomEditor::RichTextBrowserFindBar* self, QWheelEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperKeyPressEvent(TextCustomEditor::RichTextBrowserFindBar* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperKeyReleaseEvent(TextCustomEditor::RichTextBrowserFindBar* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperFocusInEvent(TextCustomEditor::RichTextBrowserFindBar* self, QFocusEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperFocusOutEvent(TextCustomEditor::RichTextBrowserFindBar* self, QFocusEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperEnterEvent(TextCustomEditor::RichTextBrowserFindBar* self, QEnterEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperLeaveEvent(TextCustomEditor::RichTextBrowserFindBar* self, QEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperPaintEvent(TextCustomEditor::RichTextBrowserFindBar* self, QPaintEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperMoveEvent(TextCustomEditor::RichTextBrowserFindBar* self, QMoveEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperResizeEvent(TextCustomEditor::RichTextBrowserFindBar* self, QResizeEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperCloseEvent(TextCustomEditor::RichTextBrowserFindBar* self, QCloseEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperContextMenuEvent(TextCustomEditor::RichTextBrowserFindBar* self, QContextMenuEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperTabletEvent(TextCustomEditor::RichTextBrowserFindBar* self, QTabletEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperActionEvent(TextCustomEditor::RichTextBrowserFindBar* self, QActionEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperDragEnterEvent(TextCustomEditor::RichTextBrowserFindBar* self, QDragEnterEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperDragMoveEvent(TextCustomEditor::RichTextBrowserFindBar* self, QDragMoveEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperDragLeaveEvent(TextCustomEditor::RichTextBrowserFindBar* self, QDragLeaveEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperDropEvent(TextCustomEditor::RichTextBrowserFindBar* self, QDropEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperShowEvent(TextCustomEditor::RichTextBrowserFindBar* self, QShowEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperHideEvent(TextCustomEditor::RichTextBrowserFindBar* self, QHideEvent* event);
    friend bool TextCustomEditor__RichTextBrowserFindBar_SuperNativeEvent(TextCustomEditor::RichTextBrowserFindBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperChangeEvent(TextCustomEditor::RichTextBrowserFindBar* self, QEvent* param1);
    friend int TextCustomEditor__RichTextBrowserFindBar_SuperMetric(const TextCustomEditor::RichTextBrowserFindBar* self, int param1);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperInitPainter(const TextCustomEditor::RichTextBrowserFindBar* self, QPainter* painter);
    friend QPaintDevice* TextCustomEditor__RichTextBrowserFindBar_SuperRedirected(const TextCustomEditor::RichTextBrowserFindBar* self, QPoint* offset);
    friend QPainter* TextCustomEditor__RichTextBrowserFindBar_SuperSharedPainter(const TextCustomEditor::RichTextBrowserFindBar* self);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperInputMethodEvent(TextCustomEditor::RichTextBrowserFindBar* self, QInputMethodEvent* param1);
    friend bool TextCustomEditor__RichTextBrowserFindBar_SuperFocusNextPrevChild(TextCustomEditor::RichTextBrowserFindBar* self, bool next);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperTimerEvent(TextCustomEditor::RichTextBrowserFindBar* self, QTimerEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperChildEvent(TextCustomEditor::RichTextBrowserFindBar* self, QChildEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperCustomEvent(TextCustomEditor::RichTextBrowserFindBar* self, QEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperConnectNotify(TextCustomEditor::RichTextBrowserFindBar* self, const QMetaMethod* signal);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperDisconnectNotify(TextCustomEditor::RichTextBrowserFindBar* self, const QMetaMethod* signal);
};

#endif
