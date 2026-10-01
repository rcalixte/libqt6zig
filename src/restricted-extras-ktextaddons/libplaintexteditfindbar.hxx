#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBPLAINTEXTEDITFINDBAR_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBPLAINTEXTEDITFINDBAR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextCustomEditor::PlainTextEditFindBar
class VirtualTextCustomEditorPlainTextEditFindBar final : public TextCustomEditor::PlainTextEditFindBar {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextCustomEditor__PlainTextEditFindBar_MetaObject_Callback = QMetaObject* (*)(const TextCustomEditor__PlainTextEditFindBar*);
    using TextCustomEditor__PlainTextEditFindBar_Metacast_Callback = void* (*)(TextCustomEditor__PlainTextEditFindBar*, const char*);
    using TextCustomEditor__PlainTextEditFindBar_Metacall_Callback = int (*)(TextCustomEditor__PlainTextEditFindBar*, int, int, void**);
    using TextCustomEditor__PlainTextEditFindBar_ViewIsReadOnly_Callback = bool (*)(const TextCustomEditor__PlainTextEditFindBar*);
    using TextCustomEditor__PlainTextEditFindBar_DocumentIsEmpty_Callback = bool (*)(const TextCustomEditor__PlainTextEditFindBar*);
    using TextCustomEditor__PlainTextEditFindBar_SearchInDocument_Callback = bool (*)(TextCustomEditor__PlainTextEditFindBar*, const char*, int);
    using TextCustomEditor__PlainTextEditFindBar_SearchInDocument2_Callback = bool (*)(TextCustomEditor__PlainTextEditFindBar*, QRegularExpression*, int);
    using TextCustomEditor__PlainTextEditFindBar_AutoSearchMoveCursor_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*);
    using TextCustomEditor__PlainTextEditFindBar_SlotSearchText_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, bool, bool);
    using TextCustomEditor__PlainTextEditFindBar_Event_Callback = bool (*)(TextCustomEditor__PlainTextEditFindBar*, QEvent*);
    using TextCustomEditor__PlainTextEditFindBar_DevType_Callback = int (*)(const TextCustomEditor__PlainTextEditFindBar*);
    using TextCustomEditor__PlainTextEditFindBar_SetVisible_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, bool);
    using TextCustomEditor__PlainTextEditFindBar_SizeHint_Callback = QSize* (*)(const TextCustomEditor__PlainTextEditFindBar*);
    using TextCustomEditor__PlainTextEditFindBar_MinimumSizeHint_Callback = QSize* (*)(const TextCustomEditor__PlainTextEditFindBar*);
    using TextCustomEditor__PlainTextEditFindBar_HeightForWidth_Callback = int (*)(const TextCustomEditor__PlainTextEditFindBar*, int);
    using TextCustomEditor__PlainTextEditFindBar_HasHeightForWidth_Callback = bool (*)(const TextCustomEditor__PlainTextEditFindBar*);
    using TextCustomEditor__PlainTextEditFindBar_PaintEngine_Callback = QPaintEngine* (*)(const TextCustomEditor__PlainTextEditFindBar*);
    using TextCustomEditor__PlainTextEditFindBar_MousePressEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QMouseEvent*);
    using TextCustomEditor__PlainTextEditFindBar_MouseReleaseEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QMouseEvent*);
    using TextCustomEditor__PlainTextEditFindBar_MouseDoubleClickEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QMouseEvent*);
    using TextCustomEditor__PlainTextEditFindBar_MouseMoveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QMouseEvent*);
    using TextCustomEditor__PlainTextEditFindBar_WheelEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QWheelEvent*);
    using TextCustomEditor__PlainTextEditFindBar_KeyPressEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QKeyEvent*);
    using TextCustomEditor__PlainTextEditFindBar_KeyReleaseEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QKeyEvent*);
    using TextCustomEditor__PlainTextEditFindBar_FocusInEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QFocusEvent*);
    using TextCustomEditor__PlainTextEditFindBar_FocusOutEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QFocusEvent*);
    using TextCustomEditor__PlainTextEditFindBar_EnterEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QEnterEvent*);
    using TextCustomEditor__PlainTextEditFindBar_LeaveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QEvent*);
    using TextCustomEditor__PlainTextEditFindBar_PaintEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QPaintEvent*);
    using TextCustomEditor__PlainTextEditFindBar_MoveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QMoveEvent*);
    using TextCustomEditor__PlainTextEditFindBar_ResizeEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QResizeEvent*);
    using TextCustomEditor__PlainTextEditFindBar_CloseEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QCloseEvent*);
    using TextCustomEditor__PlainTextEditFindBar_ContextMenuEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QContextMenuEvent*);
    using TextCustomEditor__PlainTextEditFindBar_TabletEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QTabletEvent*);
    using TextCustomEditor__PlainTextEditFindBar_ActionEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QActionEvent*);
    using TextCustomEditor__PlainTextEditFindBar_DragEnterEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QDragEnterEvent*);
    using TextCustomEditor__PlainTextEditFindBar_DragMoveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QDragMoveEvent*);
    using TextCustomEditor__PlainTextEditFindBar_DragLeaveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QDragLeaveEvent*);
    using TextCustomEditor__PlainTextEditFindBar_DropEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QDropEvent*);
    using TextCustomEditor__PlainTextEditFindBar_ShowEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QShowEvent*);
    using TextCustomEditor__PlainTextEditFindBar_HideEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QHideEvent*);
    using TextCustomEditor__PlainTextEditFindBar_NativeEvent_Callback = bool (*)(TextCustomEditor__PlainTextEditFindBar*, libqt_string, void*, intptr_t*);
    using TextCustomEditor__PlainTextEditFindBar_ChangeEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QEvent*);
    using TextCustomEditor__PlainTextEditFindBar_Metric_Callback = int (*)(const TextCustomEditor__PlainTextEditFindBar*, int);
    using TextCustomEditor__PlainTextEditFindBar_InitPainter_Callback = void (*)(const TextCustomEditor__PlainTextEditFindBar*, QPainter*);
    using TextCustomEditor__PlainTextEditFindBar_Redirected_Callback = QPaintDevice* (*)(const TextCustomEditor__PlainTextEditFindBar*, QPoint*);
    using TextCustomEditor__PlainTextEditFindBar_SharedPainter_Callback = QPainter* (*)(const TextCustomEditor__PlainTextEditFindBar*);
    using TextCustomEditor__PlainTextEditFindBar_InputMethodEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QInputMethodEvent*);
    using TextCustomEditor__PlainTextEditFindBar_InputMethodQuery_Callback = QVariant* (*)(const TextCustomEditor__PlainTextEditFindBar*, int);
    using TextCustomEditor__PlainTextEditFindBar_FocusNextPrevChild_Callback = bool (*)(TextCustomEditor__PlainTextEditFindBar*, bool);
    using TextCustomEditor__PlainTextEditFindBar_EventFilter_Callback = bool (*)(TextCustomEditor__PlainTextEditFindBar*, QObject*, QEvent*);
    using TextCustomEditor__PlainTextEditFindBar_TimerEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QTimerEvent*);
    using TextCustomEditor__PlainTextEditFindBar_ChildEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QChildEvent*);
    using TextCustomEditor__PlainTextEditFindBar_CustomEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QEvent*);
    using TextCustomEditor__PlainTextEditFindBar_ConnectNotify_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QMetaMethod*);
    using TextCustomEditor__PlainTextEditFindBar_DisconnectNotify_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QMetaMethod*);
    using TextCustomEditor::PlainTextEditFindBar::clearSelections;
    using TextCustomEditor::PlainTextEditFindBar::create;
    using TextCustomEditor::PlainTextEditFindBar::destroy;
    using TextCustomEditor::PlainTextEditFindBar::focusNextChild;
    using TextCustomEditor::PlainTextEditFindBar::focusPreviousChild;
    using TextCustomEditor::PlainTextEditFindBar::getDecodedMetricF;
    using TextCustomEditor::PlainTextEditFindBar::isSignalConnected;
    using TextCustomEditor::PlainTextEditFindBar::messageInfo;
    using TextCustomEditor::PlainTextEditFindBar::receivers;
    using TextCustomEditor::PlainTextEditFindBar::searchText;
    using TextCustomEditor::PlainTextEditFindBar::sender;
    using TextCustomEditor::PlainTextEditFindBar::senderSignalIndex;
    using TextCustomEditor::PlainTextEditFindBar::setFoundMatch;
    using TextCustomEditor::PlainTextEditFindBar::updateMicroFocus;

    // Instance callback storage
    TextCustomEditor__PlainTextEditFindBar_MetaObject_Callback textcustomeditor__plaintexteditfindbar_metaobject_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_Metacast_Callback textcustomeditor__plaintexteditfindbar_metacast_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_Metacall_Callback textcustomeditor__plaintexteditfindbar_metacall_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_ViewIsReadOnly_Callback textcustomeditor__plaintexteditfindbar_viewisreadonly_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_DocumentIsEmpty_Callback textcustomeditor__plaintexteditfindbar_documentisempty_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_SearchInDocument_Callback textcustomeditor__plaintexteditfindbar_searchindocument_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_SearchInDocument2_Callback textcustomeditor__plaintexteditfindbar_searchindocument2_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_AutoSearchMoveCursor_Callback textcustomeditor__plaintexteditfindbar_autosearchmovecursor_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_SlotSearchText_Callback textcustomeditor__plaintexteditfindbar_slotsearchtext_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_Event_Callback textcustomeditor__plaintexteditfindbar_event_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_DevType_Callback textcustomeditor__plaintexteditfindbar_devtype_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_SetVisible_Callback textcustomeditor__plaintexteditfindbar_setvisible_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_SizeHint_Callback textcustomeditor__plaintexteditfindbar_sizehint_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_MinimumSizeHint_Callback textcustomeditor__plaintexteditfindbar_minimumsizehint_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_HeightForWidth_Callback textcustomeditor__plaintexteditfindbar_heightforwidth_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_HasHeightForWidth_Callback textcustomeditor__plaintexteditfindbar_hasheightforwidth_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_PaintEngine_Callback textcustomeditor__plaintexteditfindbar_paintengine_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_MousePressEvent_Callback textcustomeditor__plaintexteditfindbar_mousepressevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_MouseReleaseEvent_Callback textcustomeditor__plaintexteditfindbar_mousereleaseevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_MouseDoubleClickEvent_Callback textcustomeditor__plaintexteditfindbar_mousedoubleclickevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_MouseMoveEvent_Callback textcustomeditor__plaintexteditfindbar_mousemoveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_WheelEvent_Callback textcustomeditor__plaintexteditfindbar_wheelevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_KeyPressEvent_Callback textcustomeditor__plaintexteditfindbar_keypressevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_KeyReleaseEvent_Callback textcustomeditor__plaintexteditfindbar_keyreleaseevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_FocusInEvent_Callback textcustomeditor__plaintexteditfindbar_focusinevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_FocusOutEvent_Callback textcustomeditor__plaintexteditfindbar_focusoutevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_EnterEvent_Callback textcustomeditor__plaintexteditfindbar_enterevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_LeaveEvent_Callback textcustomeditor__plaintexteditfindbar_leaveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_PaintEvent_Callback textcustomeditor__plaintexteditfindbar_paintevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_MoveEvent_Callback textcustomeditor__plaintexteditfindbar_moveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_ResizeEvent_Callback textcustomeditor__plaintexteditfindbar_resizeevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_CloseEvent_Callback textcustomeditor__plaintexteditfindbar_closeevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_ContextMenuEvent_Callback textcustomeditor__plaintexteditfindbar_contextmenuevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_TabletEvent_Callback textcustomeditor__plaintexteditfindbar_tabletevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_ActionEvent_Callback textcustomeditor__plaintexteditfindbar_actionevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_DragEnterEvent_Callback textcustomeditor__plaintexteditfindbar_dragenterevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_DragMoveEvent_Callback textcustomeditor__plaintexteditfindbar_dragmoveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_DragLeaveEvent_Callback textcustomeditor__plaintexteditfindbar_dragleaveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_DropEvent_Callback textcustomeditor__plaintexteditfindbar_dropevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_ShowEvent_Callback textcustomeditor__plaintexteditfindbar_showevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_HideEvent_Callback textcustomeditor__plaintexteditfindbar_hideevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_NativeEvent_Callback textcustomeditor__plaintexteditfindbar_nativeevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_ChangeEvent_Callback textcustomeditor__plaintexteditfindbar_changeevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_Metric_Callback textcustomeditor__plaintexteditfindbar_metric_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_InitPainter_Callback textcustomeditor__plaintexteditfindbar_initpainter_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_Redirected_Callback textcustomeditor__plaintexteditfindbar_redirected_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_SharedPainter_Callback textcustomeditor__plaintexteditfindbar_sharedpainter_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_InputMethodEvent_Callback textcustomeditor__plaintexteditfindbar_inputmethodevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_InputMethodQuery_Callback textcustomeditor__plaintexteditfindbar_inputmethodquery_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_FocusNextPrevChild_Callback textcustomeditor__plaintexteditfindbar_focusnextprevchild_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_EventFilter_Callback textcustomeditor__plaintexteditfindbar_eventfilter_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_TimerEvent_Callback textcustomeditor__plaintexteditfindbar_timerevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_ChildEvent_Callback textcustomeditor__plaintexteditfindbar_childevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_CustomEvent_Callback textcustomeditor__plaintexteditfindbar_customevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_ConnectNotify_Callback textcustomeditor__plaintexteditfindbar_connectnotify_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_DisconnectNotify_Callback textcustomeditor__plaintexteditfindbar_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextCustomEditor::PlainTextEditFindBar {
        using TextCustomEditor::PlainTextEditFindBar::actionEvent;
        using TextCustomEditor::PlainTextEditFindBar::autoSearchMoveCursor;
        using TextCustomEditor::PlainTextEditFindBar::changeEvent;
        using TextCustomEditor::PlainTextEditFindBar::childEvent;
        using TextCustomEditor::PlainTextEditFindBar::closeEvent;
        using TextCustomEditor::PlainTextEditFindBar::connectNotify;
        using TextCustomEditor::PlainTextEditFindBar::contextMenuEvent;
        using TextCustomEditor::PlainTextEditFindBar::customEvent;
        using TextCustomEditor::PlainTextEditFindBar::disconnectNotify;
        using TextCustomEditor::PlainTextEditFindBar::documentIsEmpty;
        using TextCustomEditor::PlainTextEditFindBar::dragEnterEvent;
        using TextCustomEditor::PlainTextEditFindBar::dragLeaveEvent;
        using TextCustomEditor::PlainTextEditFindBar::dragMoveEvent;
        using TextCustomEditor::PlainTextEditFindBar::dropEvent;
        using TextCustomEditor::PlainTextEditFindBar::enterEvent;
        using TextCustomEditor::PlainTextEditFindBar::event;
        using TextCustomEditor::PlainTextEditFindBar::focusInEvent;
        using TextCustomEditor::PlainTextEditFindBar::focusNextPrevChild;
        using TextCustomEditor::PlainTextEditFindBar::focusOutEvent;
        using TextCustomEditor::PlainTextEditFindBar::hideEvent;
        using TextCustomEditor::PlainTextEditFindBar::initPainter;
        using TextCustomEditor::PlainTextEditFindBar::inputMethodEvent;
        using TextCustomEditor::PlainTextEditFindBar::keyPressEvent;
        using TextCustomEditor::PlainTextEditFindBar::keyReleaseEvent;
        using TextCustomEditor::PlainTextEditFindBar::leaveEvent;
        using TextCustomEditor::PlainTextEditFindBar::metric;
        using TextCustomEditor::PlainTextEditFindBar::mouseDoubleClickEvent;
        using TextCustomEditor::PlainTextEditFindBar::mouseMoveEvent;
        using TextCustomEditor::PlainTextEditFindBar::mousePressEvent;
        using TextCustomEditor::PlainTextEditFindBar::mouseReleaseEvent;
        using TextCustomEditor::PlainTextEditFindBar::moveEvent;
        using TextCustomEditor::PlainTextEditFindBar::nativeEvent;
        using TextCustomEditor::PlainTextEditFindBar::paintEvent;
        using TextCustomEditor::PlainTextEditFindBar::redirected;
        using TextCustomEditor::PlainTextEditFindBar::resizeEvent;
        using TextCustomEditor::PlainTextEditFindBar::searchInDocument;
        using TextCustomEditor::PlainTextEditFindBar::sharedPainter;
        using TextCustomEditor::PlainTextEditFindBar::showEvent;
        using TextCustomEditor::PlainTextEditFindBar::tabletEvent;
        using TextCustomEditor::PlainTextEditFindBar::timerEvent;
        using TextCustomEditor::PlainTextEditFindBar::viewIsReadOnly;
        using TextCustomEditor::PlainTextEditFindBar::wheelEvent;
    };

    VirtualTextCustomEditorPlainTextEditFindBar(QPlainTextEdit* view) : TextCustomEditor::PlainTextEditFindBar(view) {};
    VirtualTextCustomEditorPlainTextEditFindBar(QPlainTextEdit* view, QWidget* parent) : TextCustomEditor::PlainTextEditFindBar(view, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textcustomeditor__plaintexteditfindbar_metaobject_callback) {
            QMetaObject* callback_ret = textcustomeditor__plaintexteditfindbar_metaobject_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textcustomeditor__plaintexteditfindbar_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textcustomeditor__plaintexteditfindbar_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textcustomeditor__plaintexteditfindbar_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textcustomeditor__plaintexteditfindbar_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditFindBar::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewIsReadOnly() const override {
        if (textcustomeditor__plaintexteditfindbar_viewisreadonly_callback) {
            bool callback_ret = textcustomeditor__plaintexteditfindbar_viewisreadonly_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::viewIsReadOnly();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool documentIsEmpty() const override {
        if (textcustomeditor__plaintexteditfindbar_documentisempty_callback) {
            bool callback_ret = textcustomeditor__plaintexteditfindbar_documentisempty_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::documentIsEmpty();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool searchInDocument(const QString& text, TextCustomEditor::TextEditFindBarBase::FindFlags searchOptions) override {
        if (textcustomeditor__plaintexteditfindbar_searchindocument_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            int cbval2 = static_cast<int>(searchOptions);
            bool callback_ret = textcustomeditor__plaintexteditfindbar_searchindocument_callback(this, cbval1, cbval2);
            libqt_free(text_str);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::searchInDocument(text, searchOptions);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool searchInDocument(const QRegularExpression& regExp, TextCustomEditor::TextEditFindBarBase::FindFlags searchOptions) override {
        if (textcustomeditor__plaintexteditfindbar_searchindocument2_callback) {
            const QRegularExpression& regExp_ret = regExp;
            // Cast returned reference into pointer
            QRegularExpression* cbval1 = const_cast<QRegularExpression*>(&regExp_ret);
            int cbval2 = static_cast<int>(searchOptions);
            bool callback_ret = textcustomeditor__plaintexteditfindbar_searchindocument2_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::searchInDocument(regExp, searchOptions);
    }

    // Virtual method for C ABI access and custom callback
    virtual void autoSearchMoveCursor() override {
        if (textcustomeditor__plaintexteditfindbar_autosearchmovecursor_callback) {
            textcustomeditor__plaintexteditfindbar_autosearchmovecursor_callback(this);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::autoSearchMoveCursor();
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotSearchText(bool backward, bool isAutoSearch) override {
        if (textcustomeditor__plaintexteditfindbar_slotsearchtext_callback) {
            bool cbval1 = backward;
            bool cbval2 = isAutoSearch;
            textcustomeditor__plaintexteditfindbar_slotsearchtext_callback(this, cbval1, cbval2);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::slotSearchText(backward, isAutoSearch);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (textcustomeditor__plaintexteditfindbar_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = textcustomeditor__plaintexteditfindbar_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textcustomeditor__plaintexteditfindbar_devtype_callback) {
            int callback_ret = textcustomeditor__plaintexteditfindbar_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditFindBar::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textcustomeditor__plaintexteditfindbar_setvisible_callback) {
            bool cbval1 = visible;
            textcustomeditor__plaintexteditfindbar_setvisible_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textcustomeditor__plaintexteditfindbar_sizehint_callback) {
            QSize* callback_ret = textcustomeditor__plaintexteditfindbar_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__PlainTextEditFindBar::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textcustomeditor__plaintexteditfindbar_minimumsizehint_callback) {
            QSize* callback_ret = textcustomeditor__plaintexteditfindbar_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__PlainTextEditFindBar::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textcustomeditor__plaintexteditfindbar_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textcustomeditor__plaintexteditfindbar_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditFindBar::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textcustomeditor__plaintexteditfindbar_hasheightforwidth_callback) {
            bool callback_ret = textcustomeditor__plaintexteditfindbar_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textcustomeditor__plaintexteditfindbar_paintengine_callback) {
            QPaintEngine* callback_ret = textcustomeditor__plaintexteditfindbar_paintengine_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__plaintexteditfindbar_mousepressevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__plaintexteditfindbar_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__plaintexteditfindbar_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__plaintexteditfindbar_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            textcustomeditor__plaintexteditfindbar_wheelevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            textcustomeditor__plaintexteditfindbar_keypressevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            textcustomeditor__plaintexteditfindbar_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            textcustomeditor__plaintexteditfindbar_focusinevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            textcustomeditor__plaintexteditfindbar_focusoutevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textcustomeditor__plaintexteditfindbar_enterevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_leaveevent_callback) {
            QEvent* cbval1 = event;
            textcustomeditor__plaintexteditfindbar_leaveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            textcustomeditor__plaintexteditfindbar_paintevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textcustomeditor__plaintexteditfindbar_moveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            textcustomeditor__plaintexteditfindbar_resizeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            textcustomeditor__plaintexteditfindbar_closeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            textcustomeditor__plaintexteditfindbar_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textcustomeditor__plaintexteditfindbar_tabletevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textcustomeditor__plaintexteditfindbar_actionevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            textcustomeditor__plaintexteditfindbar_dragenterevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            textcustomeditor__plaintexteditfindbar_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            textcustomeditor__plaintexteditfindbar_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_dropevent_callback) {
            QDropEvent* cbval1 = event;
            textcustomeditor__plaintexteditfindbar_dropevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_showevent_callback) {
            QShowEvent* cbval1 = event;
            textcustomeditor__plaintexteditfindbar_showevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_hideevent_callback) {
            QHideEvent* cbval1 = event;
            textcustomeditor__plaintexteditfindbar_hideevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textcustomeditor__plaintexteditfindbar_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textcustomeditor__plaintexteditfindbar_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textcustomeditor__plaintexteditfindbar_changeevent_callback) {
            QEvent* cbval1 = param1;
            textcustomeditor__plaintexteditfindbar_changeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textcustomeditor__plaintexteditfindbar_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textcustomeditor__plaintexteditfindbar_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditFindBar::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textcustomeditor__plaintexteditfindbar_initpainter_callback) {
            QPainter* cbval1 = painter;
            textcustomeditor__plaintexteditfindbar_initpainter_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textcustomeditor__plaintexteditfindbar_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textcustomeditor__plaintexteditfindbar_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textcustomeditor__plaintexteditfindbar_sharedpainter_callback) {
            QPainter* callback_ret = textcustomeditor__plaintexteditfindbar_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textcustomeditor__plaintexteditfindbar_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textcustomeditor__plaintexteditfindbar_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textcustomeditor__plaintexteditfindbar_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = textcustomeditor__plaintexteditfindbar_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__PlainTextEditFindBar::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textcustomeditor__plaintexteditfindbar_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textcustomeditor__plaintexteditfindbar_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textcustomeditor__plaintexteditfindbar_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textcustomeditor__plaintexteditfindbar_timerevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_childevent_callback) {
            QChildEvent* cbval1 = event;
            textcustomeditor__plaintexteditfindbar_childevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_customevent_callback) {
            QEvent* cbval1 = event;
            textcustomeditor__plaintexteditfindbar_customevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__plaintexteditfindbar_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textcustomeditor__plaintexteditfindbar_connectnotify_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__plaintexteditfindbar_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textcustomeditor__plaintexteditfindbar_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::disconnectNotify(signal);
    }

    // Friend functions
    friend bool TextCustomEditor__PlainTextEditFindBar_SuperViewIsReadOnly(const TextCustomEditor::PlainTextEditFindBar* self);
    friend bool TextCustomEditor__PlainTextEditFindBar_SuperDocumentIsEmpty(const TextCustomEditor::PlainTextEditFindBar* self);
    friend bool TextCustomEditor__PlainTextEditFindBar_SuperSearchInDocument(TextCustomEditor::PlainTextEditFindBar* self, const libqt_string text, int searchOptions);
    friend bool TextCustomEditor__PlainTextEditFindBar_SuperSearchInDocument2(TextCustomEditor::PlainTextEditFindBar* self, const QRegularExpression* regExp, int searchOptions);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperAutoSearchMoveCursor(TextCustomEditor::PlainTextEditFindBar* self);
    friend bool TextCustomEditor__PlainTextEditFindBar_SuperEvent(TextCustomEditor::PlainTextEditFindBar* self, QEvent* e);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperMousePressEvent(TextCustomEditor::PlainTextEditFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperMouseReleaseEvent(TextCustomEditor::PlainTextEditFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperMouseDoubleClickEvent(TextCustomEditor::PlainTextEditFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperMouseMoveEvent(TextCustomEditor::PlainTextEditFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperWheelEvent(TextCustomEditor::PlainTextEditFindBar* self, QWheelEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperKeyPressEvent(TextCustomEditor::PlainTextEditFindBar* self, QKeyEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperKeyReleaseEvent(TextCustomEditor::PlainTextEditFindBar* self, QKeyEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperFocusInEvent(TextCustomEditor::PlainTextEditFindBar* self, QFocusEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperFocusOutEvent(TextCustomEditor::PlainTextEditFindBar* self, QFocusEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperEnterEvent(TextCustomEditor::PlainTextEditFindBar* self, QEnterEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperLeaveEvent(TextCustomEditor::PlainTextEditFindBar* self, QEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperPaintEvent(TextCustomEditor::PlainTextEditFindBar* self, QPaintEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperMoveEvent(TextCustomEditor::PlainTextEditFindBar* self, QMoveEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperResizeEvent(TextCustomEditor::PlainTextEditFindBar* self, QResizeEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperCloseEvent(TextCustomEditor::PlainTextEditFindBar* self, QCloseEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperContextMenuEvent(TextCustomEditor::PlainTextEditFindBar* self, QContextMenuEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperTabletEvent(TextCustomEditor::PlainTextEditFindBar* self, QTabletEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperActionEvent(TextCustomEditor::PlainTextEditFindBar* self, QActionEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperDragEnterEvent(TextCustomEditor::PlainTextEditFindBar* self, QDragEnterEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperDragMoveEvent(TextCustomEditor::PlainTextEditFindBar* self, QDragMoveEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperDragLeaveEvent(TextCustomEditor::PlainTextEditFindBar* self, QDragLeaveEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperDropEvent(TextCustomEditor::PlainTextEditFindBar* self, QDropEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperShowEvent(TextCustomEditor::PlainTextEditFindBar* self, QShowEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperHideEvent(TextCustomEditor::PlainTextEditFindBar* self, QHideEvent* event);
    friend bool TextCustomEditor__PlainTextEditFindBar_SuperNativeEvent(TextCustomEditor::PlainTextEditFindBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperChangeEvent(TextCustomEditor::PlainTextEditFindBar* self, QEvent* param1);
    friend int TextCustomEditor__PlainTextEditFindBar_SuperMetric(const TextCustomEditor::PlainTextEditFindBar* self, int param1);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperInitPainter(const TextCustomEditor::PlainTextEditFindBar* self, QPainter* painter);
    friend QPaintDevice* TextCustomEditor__PlainTextEditFindBar_SuperRedirected(const TextCustomEditor::PlainTextEditFindBar* self, QPoint* offset);
    friend QPainter* TextCustomEditor__PlainTextEditFindBar_SuperSharedPainter(const TextCustomEditor::PlainTextEditFindBar* self);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperInputMethodEvent(TextCustomEditor::PlainTextEditFindBar* self, QInputMethodEvent* param1);
    friend bool TextCustomEditor__PlainTextEditFindBar_SuperFocusNextPrevChild(TextCustomEditor::PlainTextEditFindBar* self, bool next);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperTimerEvent(TextCustomEditor::PlainTextEditFindBar* self, QTimerEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperChildEvent(TextCustomEditor::PlainTextEditFindBar* self, QChildEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperCustomEvent(TextCustomEditor::PlainTextEditFindBar* self, QEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperConnectNotify(TextCustomEditor::PlainTextEditFindBar* self, const QMetaMethod* signal);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperDisconnectNotify(TextCustomEditor::PlainTextEditFindBar* self, const QMetaMethod* signal);
};

#endif
