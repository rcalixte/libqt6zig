#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBRICHTEXTEDITFINDBAR_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBRICHTEXTEDITFINDBAR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextCustomEditor::RichTextEditFindBar
class VirtualTextCustomEditorRichTextEditFindBar final : public TextCustomEditor::RichTextEditFindBar {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextCustomEditor__RichTextEditFindBar_MetaObject_Callback = QMetaObject* (*)(const TextCustomEditor__RichTextEditFindBar*);
    using TextCustomEditor__RichTextEditFindBar_Metacast_Callback = void* (*)(TextCustomEditor__RichTextEditFindBar*, const char*);
    using TextCustomEditor__RichTextEditFindBar_Metacall_Callback = int (*)(TextCustomEditor__RichTextEditFindBar*, int, int, void**);
    using TextCustomEditor__RichTextEditFindBar_ViewIsReadOnly_Callback = bool (*)(const TextCustomEditor__RichTextEditFindBar*);
    using TextCustomEditor__RichTextEditFindBar_DocumentIsEmpty_Callback = bool (*)(const TextCustomEditor__RichTextEditFindBar*);
    using TextCustomEditor__RichTextEditFindBar_SearchInDocument_Callback = bool (*)(TextCustomEditor__RichTextEditFindBar*, const char*, int);
    using TextCustomEditor__RichTextEditFindBar_SearchInDocument2_Callback = bool (*)(TextCustomEditor__RichTextEditFindBar*, QRegularExpression*, int);
    using TextCustomEditor__RichTextEditFindBar_AutoSearchMoveCursor_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*);
    using TextCustomEditor__RichTextEditFindBar_SlotSearchText_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, bool, bool);
    using TextCustomEditor__RichTextEditFindBar_Event_Callback = bool (*)(TextCustomEditor__RichTextEditFindBar*, QEvent*);
    using TextCustomEditor__RichTextEditFindBar_DevType_Callback = int (*)(const TextCustomEditor__RichTextEditFindBar*);
    using TextCustomEditor__RichTextEditFindBar_SetVisible_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, bool);
    using TextCustomEditor__RichTextEditFindBar_SizeHint_Callback = QSize* (*)(const TextCustomEditor__RichTextEditFindBar*);
    using TextCustomEditor__RichTextEditFindBar_MinimumSizeHint_Callback = QSize* (*)(const TextCustomEditor__RichTextEditFindBar*);
    using TextCustomEditor__RichTextEditFindBar_HeightForWidth_Callback = int (*)(const TextCustomEditor__RichTextEditFindBar*, int);
    using TextCustomEditor__RichTextEditFindBar_HasHeightForWidth_Callback = bool (*)(const TextCustomEditor__RichTextEditFindBar*);
    using TextCustomEditor__RichTextEditFindBar_PaintEngine_Callback = QPaintEngine* (*)(const TextCustomEditor__RichTextEditFindBar*);
    using TextCustomEditor__RichTextEditFindBar_MousePressEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QMouseEvent*);
    using TextCustomEditor__RichTextEditFindBar_MouseReleaseEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QMouseEvent*);
    using TextCustomEditor__RichTextEditFindBar_MouseDoubleClickEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QMouseEvent*);
    using TextCustomEditor__RichTextEditFindBar_MouseMoveEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QMouseEvent*);
    using TextCustomEditor__RichTextEditFindBar_WheelEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QWheelEvent*);
    using TextCustomEditor__RichTextEditFindBar_KeyPressEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QKeyEvent*);
    using TextCustomEditor__RichTextEditFindBar_KeyReleaseEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QKeyEvent*);
    using TextCustomEditor__RichTextEditFindBar_FocusInEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QFocusEvent*);
    using TextCustomEditor__RichTextEditFindBar_FocusOutEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QFocusEvent*);
    using TextCustomEditor__RichTextEditFindBar_EnterEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QEnterEvent*);
    using TextCustomEditor__RichTextEditFindBar_LeaveEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QEvent*);
    using TextCustomEditor__RichTextEditFindBar_PaintEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QPaintEvent*);
    using TextCustomEditor__RichTextEditFindBar_MoveEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QMoveEvent*);
    using TextCustomEditor__RichTextEditFindBar_ResizeEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QResizeEvent*);
    using TextCustomEditor__RichTextEditFindBar_CloseEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QCloseEvent*);
    using TextCustomEditor__RichTextEditFindBar_ContextMenuEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QContextMenuEvent*);
    using TextCustomEditor__RichTextEditFindBar_TabletEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QTabletEvent*);
    using TextCustomEditor__RichTextEditFindBar_ActionEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QActionEvent*);
    using TextCustomEditor__RichTextEditFindBar_DragEnterEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QDragEnterEvent*);
    using TextCustomEditor__RichTextEditFindBar_DragMoveEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QDragMoveEvent*);
    using TextCustomEditor__RichTextEditFindBar_DragLeaveEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QDragLeaveEvent*);
    using TextCustomEditor__RichTextEditFindBar_DropEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QDropEvent*);
    using TextCustomEditor__RichTextEditFindBar_ShowEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QShowEvent*);
    using TextCustomEditor__RichTextEditFindBar_HideEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QHideEvent*);
    using TextCustomEditor__RichTextEditFindBar_NativeEvent_Callback = bool (*)(TextCustomEditor__RichTextEditFindBar*, libqt_string, void*, intptr_t*);
    using TextCustomEditor__RichTextEditFindBar_ChangeEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QEvent*);
    using TextCustomEditor__RichTextEditFindBar_Metric_Callback = int (*)(const TextCustomEditor__RichTextEditFindBar*, int);
    using TextCustomEditor__RichTextEditFindBar_InitPainter_Callback = void (*)(const TextCustomEditor__RichTextEditFindBar*, QPainter*);
    using TextCustomEditor__RichTextEditFindBar_Redirected_Callback = QPaintDevice* (*)(const TextCustomEditor__RichTextEditFindBar*, QPoint*);
    using TextCustomEditor__RichTextEditFindBar_SharedPainter_Callback = QPainter* (*)(const TextCustomEditor__RichTextEditFindBar*);
    using TextCustomEditor__RichTextEditFindBar_InputMethodEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QInputMethodEvent*);
    using TextCustomEditor__RichTextEditFindBar_InputMethodQuery_Callback = QVariant* (*)(const TextCustomEditor__RichTextEditFindBar*, int);
    using TextCustomEditor__RichTextEditFindBar_FocusNextPrevChild_Callback = bool (*)(TextCustomEditor__RichTextEditFindBar*, bool);
    using TextCustomEditor__RichTextEditFindBar_EventFilter_Callback = bool (*)(TextCustomEditor__RichTextEditFindBar*, QObject*, QEvent*);
    using TextCustomEditor__RichTextEditFindBar_TimerEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QTimerEvent*);
    using TextCustomEditor__RichTextEditFindBar_ChildEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QChildEvent*);
    using TextCustomEditor__RichTextEditFindBar_CustomEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QEvent*);
    using TextCustomEditor__RichTextEditFindBar_ConnectNotify_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QMetaMethod*);
    using TextCustomEditor__RichTextEditFindBar_DisconnectNotify_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QMetaMethod*);
    using TextCustomEditor::RichTextEditFindBar::clearSelections;
    using TextCustomEditor::RichTextEditFindBar::create;
    using TextCustomEditor::RichTextEditFindBar::destroy;
    using TextCustomEditor::RichTextEditFindBar::focusNextChild;
    using TextCustomEditor::RichTextEditFindBar::focusPreviousChild;
    using TextCustomEditor::RichTextEditFindBar::getDecodedMetricF;
    using TextCustomEditor::RichTextEditFindBar::isSignalConnected;
    using TextCustomEditor::RichTextEditFindBar::messageInfo;
    using TextCustomEditor::RichTextEditFindBar::receivers;
    using TextCustomEditor::RichTextEditFindBar::searchText;
    using TextCustomEditor::RichTextEditFindBar::sender;
    using TextCustomEditor::RichTextEditFindBar::senderSignalIndex;
    using TextCustomEditor::RichTextEditFindBar::setFoundMatch;
    using TextCustomEditor::RichTextEditFindBar::updateMicroFocus;

    // Instance callback storage
    TextCustomEditor__RichTextEditFindBar_MetaObject_Callback textcustomeditor__richtexteditfindbar_metaobject_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_Metacast_Callback textcustomeditor__richtexteditfindbar_metacast_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_Metacall_Callback textcustomeditor__richtexteditfindbar_metacall_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_ViewIsReadOnly_Callback textcustomeditor__richtexteditfindbar_viewisreadonly_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_DocumentIsEmpty_Callback textcustomeditor__richtexteditfindbar_documentisempty_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_SearchInDocument_Callback textcustomeditor__richtexteditfindbar_searchindocument_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_SearchInDocument2_Callback textcustomeditor__richtexteditfindbar_searchindocument2_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_AutoSearchMoveCursor_Callback textcustomeditor__richtexteditfindbar_autosearchmovecursor_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_SlotSearchText_Callback textcustomeditor__richtexteditfindbar_slotsearchtext_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_Event_Callback textcustomeditor__richtexteditfindbar_event_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_DevType_Callback textcustomeditor__richtexteditfindbar_devtype_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_SetVisible_Callback textcustomeditor__richtexteditfindbar_setvisible_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_SizeHint_Callback textcustomeditor__richtexteditfindbar_sizehint_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_MinimumSizeHint_Callback textcustomeditor__richtexteditfindbar_minimumsizehint_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_HeightForWidth_Callback textcustomeditor__richtexteditfindbar_heightforwidth_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_HasHeightForWidth_Callback textcustomeditor__richtexteditfindbar_hasheightforwidth_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_PaintEngine_Callback textcustomeditor__richtexteditfindbar_paintengine_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_MousePressEvent_Callback textcustomeditor__richtexteditfindbar_mousepressevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_MouseReleaseEvent_Callback textcustomeditor__richtexteditfindbar_mousereleaseevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_MouseDoubleClickEvent_Callback textcustomeditor__richtexteditfindbar_mousedoubleclickevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_MouseMoveEvent_Callback textcustomeditor__richtexteditfindbar_mousemoveevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_WheelEvent_Callback textcustomeditor__richtexteditfindbar_wheelevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_KeyPressEvent_Callback textcustomeditor__richtexteditfindbar_keypressevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_KeyReleaseEvent_Callback textcustomeditor__richtexteditfindbar_keyreleaseevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_FocusInEvent_Callback textcustomeditor__richtexteditfindbar_focusinevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_FocusOutEvent_Callback textcustomeditor__richtexteditfindbar_focusoutevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_EnterEvent_Callback textcustomeditor__richtexteditfindbar_enterevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_LeaveEvent_Callback textcustomeditor__richtexteditfindbar_leaveevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_PaintEvent_Callback textcustomeditor__richtexteditfindbar_paintevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_MoveEvent_Callback textcustomeditor__richtexteditfindbar_moveevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_ResizeEvent_Callback textcustomeditor__richtexteditfindbar_resizeevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_CloseEvent_Callback textcustomeditor__richtexteditfindbar_closeevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_ContextMenuEvent_Callback textcustomeditor__richtexteditfindbar_contextmenuevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_TabletEvent_Callback textcustomeditor__richtexteditfindbar_tabletevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_ActionEvent_Callback textcustomeditor__richtexteditfindbar_actionevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_DragEnterEvent_Callback textcustomeditor__richtexteditfindbar_dragenterevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_DragMoveEvent_Callback textcustomeditor__richtexteditfindbar_dragmoveevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_DragLeaveEvent_Callback textcustomeditor__richtexteditfindbar_dragleaveevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_DropEvent_Callback textcustomeditor__richtexteditfindbar_dropevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_ShowEvent_Callback textcustomeditor__richtexteditfindbar_showevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_HideEvent_Callback textcustomeditor__richtexteditfindbar_hideevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_NativeEvent_Callback textcustomeditor__richtexteditfindbar_nativeevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_ChangeEvent_Callback textcustomeditor__richtexteditfindbar_changeevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_Metric_Callback textcustomeditor__richtexteditfindbar_metric_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_InitPainter_Callback textcustomeditor__richtexteditfindbar_initpainter_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_Redirected_Callback textcustomeditor__richtexteditfindbar_redirected_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_SharedPainter_Callback textcustomeditor__richtexteditfindbar_sharedpainter_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_InputMethodEvent_Callback textcustomeditor__richtexteditfindbar_inputmethodevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_InputMethodQuery_Callback textcustomeditor__richtexteditfindbar_inputmethodquery_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_FocusNextPrevChild_Callback textcustomeditor__richtexteditfindbar_focusnextprevchild_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_EventFilter_Callback textcustomeditor__richtexteditfindbar_eventfilter_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_TimerEvent_Callback textcustomeditor__richtexteditfindbar_timerevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_ChildEvent_Callback textcustomeditor__richtexteditfindbar_childevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_CustomEvent_Callback textcustomeditor__richtexteditfindbar_customevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_ConnectNotify_Callback textcustomeditor__richtexteditfindbar_connectnotify_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_DisconnectNotify_Callback textcustomeditor__richtexteditfindbar_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextCustomEditor::RichTextEditFindBar {
        using TextCustomEditor::RichTextEditFindBar::actionEvent;
        using TextCustomEditor::RichTextEditFindBar::autoSearchMoveCursor;
        using TextCustomEditor::RichTextEditFindBar::changeEvent;
        using TextCustomEditor::RichTextEditFindBar::childEvent;
        using TextCustomEditor::RichTextEditFindBar::closeEvent;
        using TextCustomEditor::RichTextEditFindBar::connectNotify;
        using TextCustomEditor::RichTextEditFindBar::contextMenuEvent;
        using TextCustomEditor::RichTextEditFindBar::customEvent;
        using TextCustomEditor::RichTextEditFindBar::disconnectNotify;
        using TextCustomEditor::RichTextEditFindBar::documentIsEmpty;
        using TextCustomEditor::RichTextEditFindBar::dragEnterEvent;
        using TextCustomEditor::RichTextEditFindBar::dragLeaveEvent;
        using TextCustomEditor::RichTextEditFindBar::dragMoveEvent;
        using TextCustomEditor::RichTextEditFindBar::dropEvent;
        using TextCustomEditor::RichTextEditFindBar::enterEvent;
        using TextCustomEditor::RichTextEditFindBar::event;
        using TextCustomEditor::RichTextEditFindBar::focusInEvent;
        using TextCustomEditor::RichTextEditFindBar::focusNextPrevChild;
        using TextCustomEditor::RichTextEditFindBar::focusOutEvent;
        using TextCustomEditor::RichTextEditFindBar::hideEvent;
        using TextCustomEditor::RichTextEditFindBar::initPainter;
        using TextCustomEditor::RichTextEditFindBar::inputMethodEvent;
        using TextCustomEditor::RichTextEditFindBar::keyPressEvent;
        using TextCustomEditor::RichTextEditFindBar::keyReleaseEvent;
        using TextCustomEditor::RichTextEditFindBar::leaveEvent;
        using TextCustomEditor::RichTextEditFindBar::metric;
        using TextCustomEditor::RichTextEditFindBar::mouseDoubleClickEvent;
        using TextCustomEditor::RichTextEditFindBar::mouseMoveEvent;
        using TextCustomEditor::RichTextEditFindBar::mousePressEvent;
        using TextCustomEditor::RichTextEditFindBar::mouseReleaseEvent;
        using TextCustomEditor::RichTextEditFindBar::moveEvent;
        using TextCustomEditor::RichTextEditFindBar::nativeEvent;
        using TextCustomEditor::RichTextEditFindBar::paintEvent;
        using TextCustomEditor::RichTextEditFindBar::redirected;
        using TextCustomEditor::RichTextEditFindBar::resizeEvent;
        using TextCustomEditor::RichTextEditFindBar::searchInDocument;
        using TextCustomEditor::RichTextEditFindBar::sharedPainter;
        using TextCustomEditor::RichTextEditFindBar::showEvent;
        using TextCustomEditor::RichTextEditFindBar::tabletEvent;
        using TextCustomEditor::RichTextEditFindBar::timerEvent;
        using TextCustomEditor::RichTextEditFindBar::viewIsReadOnly;
        using TextCustomEditor::RichTextEditFindBar::wheelEvent;
    };

    VirtualTextCustomEditorRichTextEditFindBar(QTextEdit* view) : TextCustomEditor::RichTextEditFindBar(view) {};
    VirtualTextCustomEditorRichTextEditFindBar(QTextEdit* view, QWidget* parent) : TextCustomEditor::RichTextEditFindBar(view, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textcustomeditor__richtexteditfindbar_metaobject_callback) {
            QMetaObject* callback_ret = textcustomeditor__richtexteditfindbar_metaobject_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textcustomeditor__richtexteditfindbar_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textcustomeditor__richtexteditfindbar_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textcustomeditor__richtexteditfindbar_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textcustomeditor__richtexteditfindbar_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditFindBar::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewIsReadOnly() const override {
        if (textcustomeditor__richtexteditfindbar_viewisreadonly_callback) {
            bool callback_ret = textcustomeditor__richtexteditfindbar_viewisreadonly_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::viewIsReadOnly();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool documentIsEmpty() const override {
        if (textcustomeditor__richtexteditfindbar_documentisempty_callback) {
            bool callback_ret = textcustomeditor__richtexteditfindbar_documentisempty_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::documentIsEmpty();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool searchInDocument(const QString& text, TextCustomEditor::TextEditFindBarBase::FindFlags searchOptions) override {
        if (textcustomeditor__richtexteditfindbar_searchindocument_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            int cbval2 = static_cast<int>(searchOptions);
            bool callback_ret = textcustomeditor__richtexteditfindbar_searchindocument_callback(this, cbval1, cbval2);
            libqt_free(text_str);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::searchInDocument(text, searchOptions);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool searchInDocument(const QRegularExpression& regExp, TextCustomEditor::TextEditFindBarBase::FindFlags searchOptions) override {
        if (textcustomeditor__richtexteditfindbar_searchindocument2_callback) {
            const QRegularExpression& regExp_ret = regExp;
            // Cast returned reference into pointer
            QRegularExpression* cbval1 = const_cast<QRegularExpression*>(&regExp_ret);
            int cbval2 = static_cast<int>(searchOptions);
            bool callback_ret = textcustomeditor__richtexteditfindbar_searchindocument2_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::searchInDocument(regExp, searchOptions);
    }

    // Virtual method for C ABI access and custom callback
    virtual void autoSearchMoveCursor() override {
        if (textcustomeditor__richtexteditfindbar_autosearchmovecursor_callback) {
            textcustomeditor__richtexteditfindbar_autosearchmovecursor_callback(this);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::autoSearchMoveCursor();
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotSearchText(bool backward, bool isAutoSearch) override {
        if (textcustomeditor__richtexteditfindbar_slotsearchtext_callback) {
            bool cbval1 = backward;
            bool cbval2 = isAutoSearch;
            textcustomeditor__richtexteditfindbar_slotsearchtext_callback(this, cbval1, cbval2);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::slotSearchText(backward, isAutoSearch);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (textcustomeditor__richtexteditfindbar_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = textcustomeditor__richtexteditfindbar_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textcustomeditor__richtexteditfindbar_devtype_callback) {
            int callback_ret = textcustomeditor__richtexteditfindbar_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditFindBar::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textcustomeditor__richtexteditfindbar_setvisible_callback) {
            bool cbval1 = visible;
            textcustomeditor__richtexteditfindbar_setvisible_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textcustomeditor__richtexteditfindbar_sizehint_callback) {
            QSize* callback_ret = textcustomeditor__richtexteditfindbar_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextEditFindBar::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textcustomeditor__richtexteditfindbar_minimumsizehint_callback) {
            QSize* callback_ret = textcustomeditor__richtexteditfindbar_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextEditFindBar::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textcustomeditor__richtexteditfindbar_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textcustomeditor__richtexteditfindbar_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditFindBar::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textcustomeditor__richtexteditfindbar_hasheightforwidth_callback) {
            bool callback_ret = textcustomeditor__richtexteditfindbar_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textcustomeditor__richtexteditfindbar_paintengine_callback) {
            QPaintEngine* callback_ret = textcustomeditor__richtexteditfindbar_paintengine_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__richtexteditfindbar_mousepressevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__richtexteditfindbar_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__richtexteditfindbar_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__richtexteditfindbar_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            textcustomeditor__richtexteditfindbar_wheelevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            textcustomeditor__richtexteditfindbar_keypressevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            textcustomeditor__richtexteditfindbar_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            textcustomeditor__richtexteditfindbar_focusinevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            textcustomeditor__richtexteditfindbar_focusoutevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textcustomeditor__richtexteditfindbar_enterevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_leaveevent_callback) {
            QEvent* cbval1 = event;
            textcustomeditor__richtexteditfindbar_leaveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            textcustomeditor__richtexteditfindbar_paintevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textcustomeditor__richtexteditfindbar_moveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            textcustomeditor__richtexteditfindbar_resizeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            textcustomeditor__richtexteditfindbar_closeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            textcustomeditor__richtexteditfindbar_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textcustomeditor__richtexteditfindbar_tabletevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textcustomeditor__richtexteditfindbar_actionevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            textcustomeditor__richtexteditfindbar_dragenterevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            textcustomeditor__richtexteditfindbar_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            textcustomeditor__richtexteditfindbar_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_dropevent_callback) {
            QDropEvent* cbval1 = event;
            textcustomeditor__richtexteditfindbar_dropevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_showevent_callback) {
            QShowEvent* cbval1 = event;
            textcustomeditor__richtexteditfindbar_showevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_hideevent_callback) {
            QHideEvent* cbval1 = event;
            textcustomeditor__richtexteditfindbar_hideevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textcustomeditor__richtexteditfindbar_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textcustomeditor__richtexteditfindbar_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textcustomeditor__richtexteditfindbar_changeevent_callback) {
            QEvent* cbval1 = param1;
            textcustomeditor__richtexteditfindbar_changeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textcustomeditor__richtexteditfindbar_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textcustomeditor__richtexteditfindbar_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditFindBar::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textcustomeditor__richtexteditfindbar_initpainter_callback) {
            QPainter* cbval1 = painter;
            textcustomeditor__richtexteditfindbar_initpainter_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textcustomeditor__richtexteditfindbar_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textcustomeditor__richtexteditfindbar_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textcustomeditor__richtexteditfindbar_sharedpainter_callback) {
            QPainter* callback_ret = textcustomeditor__richtexteditfindbar_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textcustomeditor__richtexteditfindbar_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textcustomeditor__richtexteditfindbar_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textcustomeditor__richtexteditfindbar_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = textcustomeditor__richtexteditfindbar_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextEditFindBar::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textcustomeditor__richtexteditfindbar_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textcustomeditor__richtexteditfindbar_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textcustomeditor__richtexteditfindbar_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textcustomeditor__richtexteditfindbar_timerevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_childevent_callback) {
            QChildEvent* cbval1 = event;
            textcustomeditor__richtexteditfindbar_childevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_customevent_callback) {
            QEvent* cbval1 = event;
            textcustomeditor__richtexteditfindbar_customevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__richtexteditfindbar_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textcustomeditor__richtexteditfindbar_connectnotify_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__richtexteditfindbar_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textcustomeditor__richtexteditfindbar_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::disconnectNotify(signal);
    }

    // Friend functions
    friend bool TextCustomEditor__RichTextEditFindBar_SuperViewIsReadOnly(const TextCustomEditor::RichTextEditFindBar* self);
    friend bool TextCustomEditor__RichTextEditFindBar_SuperDocumentIsEmpty(const TextCustomEditor::RichTextEditFindBar* self);
    friend bool TextCustomEditor__RichTextEditFindBar_SuperSearchInDocument(TextCustomEditor::RichTextEditFindBar* self, const libqt_string text, int searchOptions);
    friend bool TextCustomEditor__RichTextEditFindBar_SuperSearchInDocument2(TextCustomEditor::RichTextEditFindBar* self, const QRegularExpression* regExp, int searchOptions);
    friend void TextCustomEditor__RichTextEditFindBar_SuperAutoSearchMoveCursor(TextCustomEditor::RichTextEditFindBar* self);
    friend bool TextCustomEditor__RichTextEditFindBar_SuperEvent(TextCustomEditor::RichTextEditFindBar* self, QEvent* e);
    friend void TextCustomEditor__RichTextEditFindBar_SuperMousePressEvent(TextCustomEditor::RichTextEditFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperMouseReleaseEvent(TextCustomEditor::RichTextEditFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperMouseDoubleClickEvent(TextCustomEditor::RichTextEditFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperMouseMoveEvent(TextCustomEditor::RichTextEditFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperWheelEvent(TextCustomEditor::RichTextEditFindBar* self, QWheelEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperKeyPressEvent(TextCustomEditor::RichTextEditFindBar* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperKeyReleaseEvent(TextCustomEditor::RichTextEditFindBar* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperFocusInEvent(TextCustomEditor::RichTextEditFindBar* self, QFocusEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperFocusOutEvent(TextCustomEditor::RichTextEditFindBar* self, QFocusEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperEnterEvent(TextCustomEditor::RichTextEditFindBar* self, QEnterEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperLeaveEvent(TextCustomEditor::RichTextEditFindBar* self, QEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperPaintEvent(TextCustomEditor::RichTextEditFindBar* self, QPaintEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperMoveEvent(TextCustomEditor::RichTextEditFindBar* self, QMoveEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperResizeEvent(TextCustomEditor::RichTextEditFindBar* self, QResizeEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperCloseEvent(TextCustomEditor::RichTextEditFindBar* self, QCloseEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperContextMenuEvent(TextCustomEditor::RichTextEditFindBar* self, QContextMenuEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperTabletEvent(TextCustomEditor::RichTextEditFindBar* self, QTabletEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperActionEvent(TextCustomEditor::RichTextEditFindBar* self, QActionEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperDragEnterEvent(TextCustomEditor::RichTextEditFindBar* self, QDragEnterEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperDragMoveEvent(TextCustomEditor::RichTextEditFindBar* self, QDragMoveEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperDragLeaveEvent(TextCustomEditor::RichTextEditFindBar* self, QDragLeaveEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperDropEvent(TextCustomEditor::RichTextEditFindBar* self, QDropEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperShowEvent(TextCustomEditor::RichTextEditFindBar* self, QShowEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperHideEvent(TextCustomEditor::RichTextEditFindBar* self, QHideEvent* event);
    friend bool TextCustomEditor__RichTextEditFindBar_SuperNativeEvent(TextCustomEditor::RichTextEditFindBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextCustomEditor__RichTextEditFindBar_SuperChangeEvent(TextCustomEditor::RichTextEditFindBar* self, QEvent* param1);
    friend int TextCustomEditor__RichTextEditFindBar_SuperMetric(const TextCustomEditor::RichTextEditFindBar* self, int param1);
    friend void TextCustomEditor__RichTextEditFindBar_SuperInitPainter(const TextCustomEditor::RichTextEditFindBar* self, QPainter* painter);
    friend QPaintDevice* TextCustomEditor__RichTextEditFindBar_SuperRedirected(const TextCustomEditor::RichTextEditFindBar* self, QPoint* offset);
    friend QPainter* TextCustomEditor__RichTextEditFindBar_SuperSharedPainter(const TextCustomEditor::RichTextEditFindBar* self);
    friend void TextCustomEditor__RichTextEditFindBar_SuperInputMethodEvent(TextCustomEditor::RichTextEditFindBar* self, QInputMethodEvent* param1);
    friend bool TextCustomEditor__RichTextEditFindBar_SuperFocusNextPrevChild(TextCustomEditor::RichTextEditFindBar* self, bool next);
    friend void TextCustomEditor__RichTextEditFindBar_SuperTimerEvent(TextCustomEditor::RichTextEditFindBar* self, QTimerEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperChildEvent(TextCustomEditor::RichTextEditFindBar* self, QChildEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperCustomEvent(TextCustomEditor::RichTextEditFindBar* self, QEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperConnectNotify(TextCustomEditor::RichTextEditFindBar* self, const QMetaMethod* signal);
    friend void TextCustomEditor__RichTextEditFindBar_SuperDisconnectNotify(TextCustomEditor::RichTextEditFindBar* self, const QMetaMethod* signal);
};

#endif
