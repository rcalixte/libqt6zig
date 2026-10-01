#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBTEXTEDITFINDBARBASE_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBTEXTEDITFINDBARBASE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextCustomEditor::TextEditFindBarBase
class VirtualTextCustomEditorTextEditFindBarBase : public TextCustomEditor::TextEditFindBarBase {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextCustomEditor__TextEditFindBarBase_MetaObject_Callback = QMetaObject* (*)(const TextCustomEditor__TextEditFindBarBase*);
    using TextCustomEditor__TextEditFindBarBase_Metacast_Callback = void* (*)(TextCustomEditor__TextEditFindBarBase*, const char*);
    using TextCustomEditor__TextEditFindBarBase_Metacall_Callback = int (*)(TextCustomEditor__TextEditFindBarBase*, int, int, void**);
    using TextCustomEditor__TextEditFindBarBase_ViewIsReadOnly_Callback = bool (*)(const TextCustomEditor__TextEditFindBarBase*);
    using TextCustomEditor__TextEditFindBarBase_DocumentIsEmpty_Callback = bool (*)(const TextCustomEditor__TextEditFindBarBase*);
    using TextCustomEditor__TextEditFindBarBase_SearchInDocument_Callback = bool (*)(TextCustomEditor__TextEditFindBarBase*, const char*, int);
    using TextCustomEditor__TextEditFindBarBase_SearchInDocument2_Callback = bool (*)(TextCustomEditor__TextEditFindBarBase*, QRegularExpression*, int);
    using TextCustomEditor__TextEditFindBarBase_AutoSearchMoveCursor_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*);
    using TextCustomEditor__TextEditFindBarBase_Event_Callback = bool (*)(TextCustomEditor__TextEditFindBarBase*, QEvent*);
    using TextCustomEditor__TextEditFindBarBase_SlotSearchText_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, bool, bool);
    using TextCustomEditor__TextEditFindBarBase_DevType_Callback = int (*)(const TextCustomEditor__TextEditFindBarBase*);
    using TextCustomEditor__TextEditFindBarBase_SetVisible_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, bool);
    using TextCustomEditor__TextEditFindBarBase_SizeHint_Callback = QSize* (*)(const TextCustomEditor__TextEditFindBarBase*);
    using TextCustomEditor__TextEditFindBarBase_MinimumSizeHint_Callback = QSize* (*)(const TextCustomEditor__TextEditFindBarBase*);
    using TextCustomEditor__TextEditFindBarBase_HeightForWidth_Callback = int (*)(const TextCustomEditor__TextEditFindBarBase*, int);
    using TextCustomEditor__TextEditFindBarBase_HasHeightForWidth_Callback = bool (*)(const TextCustomEditor__TextEditFindBarBase*);
    using TextCustomEditor__TextEditFindBarBase_PaintEngine_Callback = QPaintEngine* (*)(const TextCustomEditor__TextEditFindBarBase*);
    using TextCustomEditor__TextEditFindBarBase_MousePressEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QMouseEvent*);
    using TextCustomEditor__TextEditFindBarBase_MouseReleaseEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QMouseEvent*);
    using TextCustomEditor__TextEditFindBarBase_MouseDoubleClickEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QMouseEvent*);
    using TextCustomEditor__TextEditFindBarBase_MouseMoveEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QMouseEvent*);
    using TextCustomEditor__TextEditFindBarBase_WheelEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QWheelEvent*);
    using TextCustomEditor__TextEditFindBarBase_KeyPressEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QKeyEvent*);
    using TextCustomEditor__TextEditFindBarBase_KeyReleaseEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QKeyEvent*);
    using TextCustomEditor__TextEditFindBarBase_FocusInEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QFocusEvent*);
    using TextCustomEditor__TextEditFindBarBase_FocusOutEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QFocusEvent*);
    using TextCustomEditor__TextEditFindBarBase_EnterEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QEnterEvent*);
    using TextCustomEditor__TextEditFindBarBase_LeaveEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QEvent*);
    using TextCustomEditor__TextEditFindBarBase_PaintEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QPaintEvent*);
    using TextCustomEditor__TextEditFindBarBase_MoveEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QMoveEvent*);
    using TextCustomEditor__TextEditFindBarBase_ResizeEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QResizeEvent*);
    using TextCustomEditor__TextEditFindBarBase_CloseEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QCloseEvent*);
    using TextCustomEditor__TextEditFindBarBase_ContextMenuEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QContextMenuEvent*);
    using TextCustomEditor__TextEditFindBarBase_TabletEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QTabletEvent*);
    using TextCustomEditor__TextEditFindBarBase_ActionEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QActionEvent*);
    using TextCustomEditor__TextEditFindBarBase_DragEnterEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QDragEnterEvent*);
    using TextCustomEditor__TextEditFindBarBase_DragMoveEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QDragMoveEvent*);
    using TextCustomEditor__TextEditFindBarBase_DragLeaveEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QDragLeaveEvent*);
    using TextCustomEditor__TextEditFindBarBase_DropEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QDropEvent*);
    using TextCustomEditor__TextEditFindBarBase_ShowEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QShowEvent*);
    using TextCustomEditor__TextEditFindBarBase_HideEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QHideEvent*);
    using TextCustomEditor__TextEditFindBarBase_NativeEvent_Callback = bool (*)(TextCustomEditor__TextEditFindBarBase*, libqt_string, void*, intptr_t*);
    using TextCustomEditor__TextEditFindBarBase_ChangeEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QEvent*);
    using TextCustomEditor__TextEditFindBarBase_Metric_Callback = int (*)(const TextCustomEditor__TextEditFindBarBase*, int);
    using TextCustomEditor__TextEditFindBarBase_InitPainter_Callback = void (*)(const TextCustomEditor__TextEditFindBarBase*, QPainter*);
    using TextCustomEditor__TextEditFindBarBase_Redirected_Callback = QPaintDevice* (*)(const TextCustomEditor__TextEditFindBarBase*, QPoint*);
    using TextCustomEditor__TextEditFindBarBase_SharedPainter_Callback = QPainter* (*)(const TextCustomEditor__TextEditFindBarBase*);
    using TextCustomEditor__TextEditFindBarBase_InputMethodEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QInputMethodEvent*);
    using TextCustomEditor__TextEditFindBarBase_InputMethodQuery_Callback = QVariant* (*)(const TextCustomEditor__TextEditFindBarBase*, int);
    using TextCustomEditor__TextEditFindBarBase_FocusNextPrevChild_Callback = bool (*)(TextCustomEditor__TextEditFindBarBase*, bool);
    using TextCustomEditor__TextEditFindBarBase_EventFilter_Callback = bool (*)(TextCustomEditor__TextEditFindBarBase*, QObject*, QEvent*);
    using TextCustomEditor__TextEditFindBarBase_TimerEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QTimerEvent*);
    using TextCustomEditor__TextEditFindBarBase_ChildEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QChildEvent*);
    using TextCustomEditor__TextEditFindBarBase_CustomEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QEvent*);
    using TextCustomEditor__TextEditFindBarBase_ConnectNotify_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QMetaMethod*);
    using TextCustomEditor__TextEditFindBarBase_DisconnectNotify_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QMetaMethod*);
    using TextCustomEditor::TextEditFindBarBase::clearSelections;
    using TextCustomEditor::TextEditFindBarBase::create;
    using TextCustomEditor::TextEditFindBarBase::destroy;
    using TextCustomEditor::TextEditFindBarBase::focusNextChild;
    using TextCustomEditor::TextEditFindBarBase::focusPreviousChild;
    using TextCustomEditor::TextEditFindBarBase::getDecodedMetricF;
    using TextCustomEditor::TextEditFindBarBase::isSignalConnected;
    using TextCustomEditor::TextEditFindBarBase::messageInfo;
    using TextCustomEditor::TextEditFindBarBase::receivers;
    using TextCustomEditor::TextEditFindBarBase::searchText;
    using TextCustomEditor::TextEditFindBarBase::sender;
    using TextCustomEditor::TextEditFindBarBase::senderSignalIndex;
    using TextCustomEditor::TextEditFindBarBase::setFoundMatch;
    using TextCustomEditor::TextEditFindBarBase::updateMicroFocus;

    // Instance callback storage
    TextCustomEditor__TextEditFindBarBase_MetaObject_Callback textcustomeditor__texteditfindbarbase_metaobject_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_Metacast_Callback textcustomeditor__texteditfindbarbase_metacast_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_Metacall_Callback textcustomeditor__texteditfindbarbase_metacall_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_ViewIsReadOnly_Callback textcustomeditor__texteditfindbarbase_viewisreadonly_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_DocumentIsEmpty_Callback textcustomeditor__texteditfindbarbase_documentisempty_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_SearchInDocument_Callback textcustomeditor__texteditfindbarbase_searchindocument_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_SearchInDocument2_Callback textcustomeditor__texteditfindbarbase_searchindocument2_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_AutoSearchMoveCursor_Callback textcustomeditor__texteditfindbarbase_autosearchmovecursor_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_Event_Callback textcustomeditor__texteditfindbarbase_event_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_SlotSearchText_Callback textcustomeditor__texteditfindbarbase_slotsearchtext_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_DevType_Callback textcustomeditor__texteditfindbarbase_devtype_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_SetVisible_Callback textcustomeditor__texteditfindbarbase_setvisible_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_SizeHint_Callback textcustomeditor__texteditfindbarbase_sizehint_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_MinimumSizeHint_Callback textcustomeditor__texteditfindbarbase_minimumsizehint_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_HeightForWidth_Callback textcustomeditor__texteditfindbarbase_heightforwidth_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_HasHeightForWidth_Callback textcustomeditor__texteditfindbarbase_hasheightforwidth_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_PaintEngine_Callback textcustomeditor__texteditfindbarbase_paintengine_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_MousePressEvent_Callback textcustomeditor__texteditfindbarbase_mousepressevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_MouseReleaseEvent_Callback textcustomeditor__texteditfindbarbase_mousereleaseevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_MouseDoubleClickEvent_Callback textcustomeditor__texteditfindbarbase_mousedoubleclickevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_MouseMoveEvent_Callback textcustomeditor__texteditfindbarbase_mousemoveevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_WheelEvent_Callback textcustomeditor__texteditfindbarbase_wheelevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_KeyPressEvent_Callback textcustomeditor__texteditfindbarbase_keypressevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_KeyReleaseEvent_Callback textcustomeditor__texteditfindbarbase_keyreleaseevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_FocusInEvent_Callback textcustomeditor__texteditfindbarbase_focusinevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_FocusOutEvent_Callback textcustomeditor__texteditfindbarbase_focusoutevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_EnterEvent_Callback textcustomeditor__texteditfindbarbase_enterevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_LeaveEvent_Callback textcustomeditor__texteditfindbarbase_leaveevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_PaintEvent_Callback textcustomeditor__texteditfindbarbase_paintevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_MoveEvent_Callback textcustomeditor__texteditfindbarbase_moveevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_ResizeEvent_Callback textcustomeditor__texteditfindbarbase_resizeevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_CloseEvent_Callback textcustomeditor__texteditfindbarbase_closeevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_ContextMenuEvent_Callback textcustomeditor__texteditfindbarbase_contextmenuevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_TabletEvent_Callback textcustomeditor__texteditfindbarbase_tabletevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_ActionEvent_Callback textcustomeditor__texteditfindbarbase_actionevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_DragEnterEvent_Callback textcustomeditor__texteditfindbarbase_dragenterevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_DragMoveEvent_Callback textcustomeditor__texteditfindbarbase_dragmoveevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_DragLeaveEvent_Callback textcustomeditor__texteditfindbarbase_dragleaveevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_DropEvent_Callback textcustomeditor__texteditfindbarbase_dropevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_ShowEvent_Callback textcustomeditor__texteditfindbarbase_showevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_HideEvent_Callback textcustomeditor__texteditfindbarbase_hideevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_NativeEvent_Callback textcustomeditor__texteditfindbarbase_nativeevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_ChangeEvent_Callback textcustomeditor__texteditfindbarbase_changeevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_Metric_Callback textcustomeditor__texteditfindbarbase_metric_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_InitPainter_Callback textcustomeditor__texteditfindbarbase_initpainter_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_Redirected_Callback textcustomeditor__texteditfindbarbase_redirected_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_SharedPainter_Callback textcustomeditor__texteditfindbarbase_sharedpainter_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_InputMethodEvent_Callback textcustomeditor__texteditfindbarbase_inputmethodevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_InputMethodQuery_Callback textcustomeditor__texteditfindbarbase_inputmethodquery_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_FocusNextPrevChild_Callback textcustomeditor__texteditfindbarbase_focusnextprevchild_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_EventFilter_Callback textcustomeditor__texteditfindbarbase_eventfilter_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_TimerEvent_Callback textcustomeditor__texteditfindbarbase_timerevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_ChildEvent_Callback textcustomeditor__texteditfindbarbase_childevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_CustomEvent_Callback textcustomeditor__texteditfindbarbase_customevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_ConnectNotify_Callback textcustomeditor__texteditfindbarbase_connectnotify_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_DisconnectNotify_Callback textcustomeditor__texteditfindbarbase_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextCustomEditor::TextEditFindBarBase {
        using TextCustomEditor::TextEditFindBarBase::actionEvent;
        using TextCustomEditor::TextEditFindBarBase::autoSearchMoveCursor;
        using TextCustomEditor::TextEditFindBarBase::changeEvent;
        using TextCustomEditor::TextEditFindBarBase::childEvent;
        using TextCustomEditor::TextEditFindBarBase::closeEvent;
        using TextCustomEditor::TextEditFindBarBase::connectNotify;
        using TextCustomEditor::TextEditFindBarBase::contextMenuEvent;
        using TextCustomEditor::TextEditFindBarBase::customEvent;
        using TextCustomEditor::TextEditFindBarBase::disconnectNotify;
        using TextCustomEditor::TextEditFindBarBase::documentIsEmpty;
        using TextCustomEditor::TextEditFindBarBase::dragEnterEvent;
        using TextCustomEditor::TextEditFindBarBase::dragLeaveEvent;
        using TextCustomEditor::TextEditFindBarBase::dragMoveEvent;
        using TextCustomEditor::TextEditFindBarBase::dropEvent;
        using TextCustomEditor::TextEditFindBarBase::enterEvent;
        using TextCustomEditor::TextEditFindBarBase::event;
        using TextCustomEditor::TextEditFindBarBase::focusInEvent;
        using TextCustomEditor::TextEditFindBarBase::focusNextPrevChild;
        using TextCustomEditor::TextEditFindBarBase::focusOutEvent;
        using TextCustomEditor::TextEditFindBarBase::hideEvent;
        using TextCustomEditor::TextEditFindBarBase::initPainter;
        using TextCustomEditor::TextEditFindBarBase::inputMethodEvent;
        using TextCustomEditor::TextEditFindBarBase::keyPressEvent;
        using TextCustomEditor::TextEditFindBarBase::keyReleaseEvent;
        using TextCustomEditor::TextEditFindBarBase::leaveEvent;
        using TextCustomEditor::TextEditFindBarBase::metric;
        using TextCustomEditor::TextEditFindBarBase::mouseDoubleClickEvent;
        using TextCustomEditor::TextEditFindBarBase::mouseMoveEvent;
        using TextCustomEditor::TextEditFindBarBase::mousePressEvent;
        using TextCustomEditor::TextEditFindBarBase::mouseReleaseEvent;
        using TextCustomEditor::TextEditFindBarBase::moveEvent;
        using TextCustomEditor::TextEditFindBarBase::nativeEvent;
        using TextCustomEditor::TextEditFindBarBase::paintEvent;
        using TextCustomEditor::TextEditFindBarBase::redirected;
        using TextCustomEditor::TextEditFindBarBase::resizeEvent;
        using TextCustomEditor::TextEditFindBarBase::searchInDocument;
        using TextCustomEditor::TextEditFindBarBase::sharedPainter;
        using TextCustomEditor::TextEditFindBarBase::showEvent;
        using TextCustomEditor::TextEditFindBarBase::tabletEvent;
        using TextCustomEditor::TextEditFindBarBase::timerEvent;
        using TextCustomEditor::TextEditFindBarBase::viewIsReadOnly;
        using TextCustomEditor::TextEditFindBarBase::wheelEvent;
    };

    VirtualTextCustomEditorTextEditFindBarBase(QWidget* parent) : TextCustomEditor::TextEditFindBarBase(parent) {};
    VirtualTextCustomEditorTextEditFindBarBase() : TextCustomEditor::TextEditFindBarBase() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textcustomeditor__texteditfindbarbase_metaobject_callback) {
            QMetaObject* callback_ret = textcustomeditor__texteditfindbarbase_metaobject_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__TextEditFindBarBase::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textcustomeditor__texteditfindbarbase_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textcustomeditor__texteditfindbarbase_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__TextEditFindBarBase::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textcustomeditor__texteditfindbarbase_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textcustomeditor__texteditfindbarbase_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__TextEditFindBarBase::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewIsReadOnly() const override {
        if (textcustomeditor__texteditfindbarbase_viewisreadonly_callback) {
            bool callback_ret = textcustomeditor__texteditfindbarbase_viewisreadonly_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method TextCustomEditor::TextEditFindBarBase::viewIsReadOnly called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool documentIsEmpty() const override {
        if (textcustomeditor__texteditfindbarbase_documentisempty_callback) {
            bool callback_ret = textcustomeditor__texteditfindbarbase_documentisempty_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method TextCustomEditor::TextEditFindBarBase::documentIsEmpty called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool searchInDocument(const QString& text, TextCustomEditor::TextEditFindBarBase::FindFlags searchOptions) override {
        if (textcustomeditor__texteditfindbarbase_searchindocument_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            int cbval2 = static_cast<int>(searchOptions);
            bool callback_ret = textcustomeditor__texteditfindbarbase_searchindocument_callback(this, cbval1, cbval2);
            libqt_free(text_str);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method TextCustomEditor::TextEditFindBarBase::searchInDocument called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool searchInDocument(const QRegularExpression& regExp, TextCustomEditor::TextEditFindBarBase::FindFlags searchOptions) override {
        if (textcustomeditor__texteditfindbarbase_searchindocument2_callback) {
            const QRegularExpression& regExp_ret = regExp;
            // Cast returned reference into pointer
            QRegularExpression* cbval1 = const_cast<QRegularExpression*>(&regExp_ret);
            int cbval2 = static_cast<int>(searchOptions);
            bool callback_ret = textcustomeditor__texteditfindbarbase_searchindocument2_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method TextCustomEditor::TextEditFindBarBase::searchInDocument2 called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void autoSearchMoveCursor() override {
        if (textcustomeditor__texteditfindbarbase_autosearchmovecursor_callback) {
            textcustomeditor__texteditfindbarbase_autosearchmovecursor_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method TextCustomEditor::TextEditFindBarBase::autoSearchMoveCursor called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (textcustomeditor__texteditfindbarbase_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = textcustomeditor__texteditfindbarbase_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__TextEditFindBarBase::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotSearchText(bool backward, bool isAutoSearch) override {
        if (textcustomeditor__texteditfindbarbase_slotsearchtext_callback) {
            bool cbval1 = backward;
            bool cbval2 = isAutoSearch;
            textcustomeditor__texteditfindbarbase_slotsearchtext_callback(this, cbval1, cbval2);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method TextCustomEditor::TextEditFindBarBase::slotSearchText called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textcustomeditor__texteditfindbarbase_devtype_callback) {
            int callback_ret = textcustomeditor__texteditfindbarbase_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__TextEditFindBarBase::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textcustomeditor__texteditfindbarbase_setvisible_callback) {
            bool cbval1 = visible;
            textcustomeditor__texteditfindbarbase_setvisible_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textcustomeditor__texteditfindbarbase_sizehint_callback) {
            QSize* callback_ret = textcustomeditor__texteditfindbarbase_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__TextEditFindBarBase::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textcustomeditor__texteditfindbarbase_minimumsizehint_callback) {
            QSize* callback_ret = textcustomeditor__texteditfindbarbase_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__TextEditFindBarBase::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textcustomeditor__texteditfindbarbase_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textcustomeditor__texteditfindbarbase_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__TextEditFindBarBase::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textcustomeditor__texteditfindbarbase_hasheightforwidth_callback) {
            bool callback_ret = textcustomeditor__texteditfindbarbase_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__TextEditFindBarBase::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textcustomeditor__texteditfindbarbase_paintengine_callback) {
            QPaintEngine* callback_ret = textcustomeditor__texteditfindbarbase_paintengine_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__TextEditFindBarBase::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__texteditfindbarbase_mousepressevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__texteditfindbarbase_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__texteditfindbarbase_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__texteditfindbarbase_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            textcustomeditor__texteditfindbarbase_wheelevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            textcustomeditor__texteditfindbarbase_keypressevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            textcustomeditor__texteditfindbarbase_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            textcustomeditor__texteditfindbarbase_focusinevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            textcustomeditor__texteditfindbarbase_focusoutevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textcustomeditor__texteditfindbarbase_enterevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_leaveevent_callback) {
            QEvent* cbval1 = event;
            textcustomeditor__texteditfindbarbase_leaveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            textcustomeditor__texteditfindbarbase_paintevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textcustomeditor__texteditfindbarbase_moveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            textcustomeditor__texteditfindbarbase_resizeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            textcustomeditor__texteditfindbarbase_closeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            textcustomeditor__texteditfindbarbase_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textcustomeditor__texteditfindbarbase_tabletevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textcustomeditor__texteditfindbarbase_actionevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            textcustomeditor__texteditfindbarbase_dragenterevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            textcustomeditor__texteditfindbarbase_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            textcustomeditor__texteditfindbarbase_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_dropevent_callback) {
            QDropEvent* cbval1 = event;
            textcustomeditor__texteditfindbarbase_dropevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_showevent_callback) {
            QShowEvent* cbval1 = event;
            textcustomeditor__texteditfindbarbase_showevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_hideevent_callback) {
            QHideEvent* cbval1 = event;
            textcustomeditor__texteditfindbarbase_hideevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textcustomeditor__texteditfindbarbase_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textcustomeditor__texteditfindbarbase_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextCustomEditor__TextEditFindBarBase::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textcustomeditor__texteditfindbarbase_changeevent_callback) {
            QEvent* cbval1 = param1;
            textcustomeditor__texteditfindbarbase_changeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textcustomeditor__texteditfindbarbase_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textcustomeditor__texteditfindbarbase_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__TextEditFindBarBase::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textcustomeditor__texteditfindbarbase_initpainter_callback) {
            QPainter* cbval1 = painter;
            textcustomeditor__texteditfindbarbase_initpainter_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textcustomeditor__texteditfindbarbase_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textcustomeditor__texteditfindbarbase_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__TextEditFindBarBase::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textcustomeditor__texteditfindbarbase_sharedpainter_callback) {
            QPainter* callback_ret = textcustomeditor__texteditfindbarbase_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__TextEditFindBarBase::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textcustomeditor__texteditfindbarbase_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textcustomeditor__texteditfindbarbase_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textcustomeditor__texteditfindbarbase_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = textcustomeditor__texteditfindbarbase_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__TextEditFindBarBase::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textcustomeditor__texteditfindbarbase_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textcustomeditor__texteditfindbarbase_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__TextEditFindBarBase::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textcustomeditor__texteditfindbarbase_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__TextEditFindBarBase::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textcustomeditor__texteditfindbarbase_timerevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_childevent_callback) {
            QChildEvent* cbval1 = event;
            textcustomeditor__texteditfindbarbase_childevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_customevent_callback) {
            QEvent* cbval1 = event;
            textcustomeditor__texteditfindbarbase_customevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__texteditfindbarbase_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textcustomeditor__texteditfindbarbase_connectnotify_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__texteditfindbarbase_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textcustomeditor__texteditfindbarbase_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::disconnectNotify(signal);
    }

    void slotReplaceText() override {}
    void slotReplaceAllText() override {}

    // Friend functions
    friend bool TextCustomEditor__TextEditFindBarBase_SuperEvent(TextCustomEditor::TextEditFindBarBase* self, QEvent* e);
    friend void TextCustomEditor__TextEditFindBarBase_SuperMousePressEvent(TextCustomEditor::TextEditFindBarBase* self, QMouseEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperMouseReleaseEvent(TextCustomEditor::TextEditFindBarBase* self, QMouseEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperMouseDoubleClickEvent(TextCustomEditor::TextEditFindBarBase* self, QMouseEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperMouseMoveEvent(TextCustomEditor::TextEditFindBarBase* self, QMouseEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperWheelEvent(TextCustomEditor::TextEditFindBarBase* self, QWheelEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperKeyPressEvent(TextCustomEditor::TextEditFindBarBase* self, QKeyEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperKeyReleaseEvent(TextCustomEditor::TextEditFindBarBase* self, QKeyEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperFocusInEvent(TextCustomEditor::TextEditFindBarBase* self, QFocusEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperFocusOutEvent(TextCustomEditor::TextEditFindBarBase* self, QFocusEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperEnterEvent(TextCustomEditor::TextEditFindBarBase* self, QEnterEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperLeaveEvent(TextCustomEditor::TextEditFindBarBase* self, QEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperPaintEvent(TextCustomEditor::TextEditFindBarBase* self, QPaintEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperMoveEvent(TextCustomEditor::TextEditFindBarBase* self, QMoveEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperResizeEvent(TextCustomEditor::TextEditFindBarBase* self, QResizeEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperCloseEvent(TextCustomEditor::TextEditFindBarBase* self, QCloseEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperContextMenuEvent(TextCustomEditor::TextEditFindBarBase* self, QContextMenuEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperTabletEvent(TextCustomEditor::TextEditFindBarBase* self, QTabletEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperActionEvent(TextCustomEditor::TextEditFindBarBase* self, QActionEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperDragEnterEvent(TextCustomEditor::TextEditFindBarBase* self, QDragEnterEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperDragMoveEvent(TextCustomEditor::TextEditFindBarBase* self, QDragMoveEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperDragLeaveEvent(TextCustomEditor::TextEditFindBarBase* self, QDragLeaveEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperDropEvent(TextCustomEditor::TextEditFindBarBase* self, QDropEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperShowEvent(TextCustomEditor::TextEditFindBarBase* self, QShowEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperHideEvent(TextCustomEditor::TextEditFindBarBase* self, QHideEvent* event);
    friend bool TextCustomEditor__TextEditFindBarBase_SuperNativeEvent(TextCustomEditor::TextEditFindBarBase* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextCustomEditor__TextEditFindBarBase_SuperChangeEvent(TextCustomEditor::TextEditFindBarBase* self, QEvent* param1);
    friend int TextCustomEditor__TextEditFindBarBase_SuperMetric(const TextCustomEditor::TextEditFindBarBase* self, int param1);
    friend void TextCustomEditor__TextEditFindBarBase_SuperInitPainter(const TextCustomEditor::TextEditFindBarBase* self, QPainter* painter);
    friend QPaintDevice* TextCustomEditor__TextEditFindBarBase_SuperRedirected(const TextCustomEditor::TextEditFindBarBase* self, QPoint* offset);
    friend QPainter* TextCustomEditor__TextEditFindBarBase_SuperSharedPainter(const TextCustomEditor::TextEditFindBarBase* self);
    friend void TextCustomEditor__TextEditFindBarBase_SuperInputMethodEvent(TextCustomEditor::TextEditFindBarBase* self, QInputMethodEvent* param1);
    friend bool TextCustomEditor__TextEditFindBarBase_SuperFocusNextPrevChild(TextCustomEditor::TextEditFindBarBase* self, bool next);
    friend void TextCustomEditor__TextEditFindBarBase_SuperTimerEvent(TextCustomEditor::TextEditFindBarBase* self, QTimerEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperChildEvent(TextCustomEditor::TextEditFindBarBase* self, QChildEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperCustomEvent(TextCustomEditor::TextEditFindBarBase* self, QEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperConnectNotify(TextCustomEditor::TextEditFindBarBase* self, const QMetaMethod* signal);
    friend void TextCustomEditor__TextEditFindBarBase_SuperDisconnectNotify(TextCustomEditor::TextEditFindBarBase* self, const QMetaMethod* signal);
};

#endif
