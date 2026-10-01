#pragma once
#ifndef EXTRAS_KCOMPLETION_LIBKLINEEDIT_HXX
#define EXTRAS_KCOMPLETION_LIBKLINEEDIT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KLineEdit
class VirtualKLineEdit final : public KLineEdit {
  public:
    // Virtual class public types (including callbacks and access types)
    using KLineEdit_MetaObject_Callback = QMetaObject* (*)(const KLineEdit*);
    using KLineEdit_Metacast_Callback = void* (*)(KLineEdit*, const char*);
    using KLineEdit_Metacall_Callback = int (*)(KLineEdit*, int, int, void**);
    using KLineEdit_SetCompletionMode_Callback = void (*)(KLineEdit*, int);
    using KLineEdit_CompletionBox_Callback = KCompletionBox* (*)(KLineEdit*, bool);
    using KLineEdit_SetCompletionObject_Callback = void (*)(KLineEdit*, KCompletion*, bool);
    using KLineEdit_Copy_Callback = void (*)(const KLineEdit*);
    using KLineEdit_SetReadOnly_Callback = void (*)(KLineEdit*, bool);
    using KLineEdit_SetCompletedText_Callback = void (*)(KLineEdit*, const char*);
    using KLineEdit_SetCompletedItems_Callback = void (*)(KLineEdit*, const char**, bool);
    using KLineEdit_SetText_Callback = void (*)(KLineEdit*, const char*);
    using KLineEdit_MakeCompletion_Callback = void (*)(KLineEdit*, const char*);
    using KLineEdit_Event_Callback = bool (*)(KLineEdit*, QEvent*);
    using KLineEdit_ResizeEvent_Callback = void (*)(KLineEdit*, QResizeEvent*);
    using KLineEdit_KeyPressEvent_Callback = void (*)(KLineEdit*, QKeyEvent*);
    using KLineEdit_MousePressEvent_Callback = void (*)(KLineEdit*, QMouseEvent*);
    using KLineEdit_MouseReleaseEvent_Callback = void (*)(KLineEdit*, QMouseEvent*);
    using KLineEdit_MouseDoubleClickEvent_Callback = void (*)(KLineEdit*, QMouseEvent*);
    using KLineEdit_ContextMenuEvent_Callback = void (*)(KLineEdit*, QContextMenuEvent*);
    using KLineEdit_SetCompletedText2_Callback = void (*)(KLineEdit*, const char*, bool);
    using KLineEdit_PaintEvent_Callback = void (*)(KLineEdit*, QPaintEvent*);
    using KLineEdit_SizeHint_Callback = QSize* (*)(const KLineEdit*);
    using KLineEdit_MinimumSizeHint_Callback = QSize* (*)(const KLineEdit*);
    using KLineEdit_MouseMoveEvent_Callback = void (*)(KLineEdit*, QMouseEvent*);
    using KLineEdit_KeyReleaseEvent_Callback = void (*)(KLineEdit*, QKeyEvent*);
    using KLineEdit_FocusInEvent_Callback = void (*)(KLineEdit*, QFocusEvent*);
    using KLineEdit_FocusOutEvent_Callback = void (*)(KLineEdit*, QFocusEvent*);
    using KLineEdit_DragEnterEvent_Callback = void (*)(KLineEdit*, QDragEnterEvent*);
    using KLineEdit_DragMoveEvent_Callback = void (*)(KLineEdit*, QDragMoveEvent*);
    using KLineEdit_DragLeaveEvent_Callback = void (*)(KLineEdit*, QDragLeaveEvent*);
    using KLineEdit_DropEvent_Callback = void (*)(KLineEdit*, QDropEvent*);
    using KLineEdit_ChangeEvent_Callback = void (*)(KLineEdit*, QEvent*);
    using KLineEdit_InputMethodEvent_Callback = void (*)(KLineEdit*, QInputMethodEvent*);
    using KLineEdit_InitStyleOption_Callback = void (*)(const KLineEdit*, QStyleOptionFrame*);
    using KLineEdit_InputMethodQuery_Callback = QVariant* (*)(const KLineEdit*, int);
    using KLineEdit_TimerEvent_Callback = void (*)(KLineEdit*, QTimerEvent*);
    using KLineEdit_DevType_Callback = int (*)(const KLineEdit*);
    using KLineEdit_SetVisible_Callback = void (*)(KLineEdit*, bool);
    using KLineEdit_HeightForWidth_Callback = int (*)(const KLineEdit*, int);
    using KLineEdit_HasHeightForWidth_Callback = bool (*)(const KLineEdit*);
    using KLineEdit_PaintEngine_Callback = QPaintEngine* (*)(const KLineEdit*);
    using KLineEdit_WheelEvent_Callback = void (*)(KLineEdit*, QWheelEvent*);
    using KLineEdit_EnterEvent_Callback = void (*)(KLineEdit*, QEnterEvent*);
    using KLineEdit_LeaveEvent_Callback = void (*)(KLineEdit*, QEvent*);
    using KLineEdit_MoveEvent_Callback = void (*)(KLineEdit*, QMoveEvent*);
    using KLineEdit_CloseEvent_Callback = void (*)(KLineEdit*, QCloseEvent*);
    using KLineEdit_TabletEvent_Callback = void (*)(KLineEdit*, QTabletEvent*);
    using KLineEdit_ActionEvent_Callback = void (*)(KLineEdit*, QActionEvent*);
    using KLineEdit_ShowEvent_Callback = void (*)(KLineEdit*, QShowEvent*);
    using KLineEdit_HideEvent_Callback = void (*)(KLineEdit*, QHideEvent*);
    using KLineEdit_NativeEvent_Callback = bool (*)(KLineEdit*, libqt_string, void*, intptr_t*);
    using KLineEdit_Metric_Callback = int (*)(const KLineEdit*, int);
    using KLineEdit_InitPainter_Callback = void (*)(const KLineEdit*, QPainter*);
    using KLineEdit_Redirected_Callback = QPaintDevice* (*)(const KLineEdit*, QPoint*);
    using KLineEdit_SharedPainter_Callback = QPainter* (*)(const KLineEdit*);
    using KLineEdit_FocusNextPrevChild_Callback = bool (*)(KLineEdit*, bool);
    using KLineEdit_EventFilter_Callback = bool (*)(KLineEdit*, QObject*, QEvent*);
    using KLineEdit_ChildEvent_Callback = void (*)(KLineEdit*, QChildEvent*);
    using KLineEdit_CustomEvent_Callback = void (*)(KLineEdit*, QEvent*);
    using KLineEdit_ConnectNotify_Callback = void (*)(KLineEdit*, QMetaMethod*);
    using KLineEdit_DisconnectNotify_Callback = void (*)(KLineEdit*, QMetaMethod*);
    using KLineEdit_SetHandleSignals_Callback = void (*)(KLineEdit*, bool);
    using KLineEdit_VirtualHook_Callback = void (*)(KLineEdit*, int, void*);
    using KLineEdit::autoSuggest;
    using KLineEdit::create;
    using KLineEdit::createStandardContextMenu;
    using KLineEdit::cursorRect;
    using KLineEdit::delegate;
    using KLineEdit::destroy;
    using KLineEdit::focusNextChild;
    using KLineEdit::focusPreviousChild;
    using KLineEdit::getDecodedMetricF;
    using KLineEdit::isSignalConnected;
    using KLineEdit::keyBindingMap;
    using KLineEdit::receivers;
    using KLineEdit::sender;
    using KLineEdit::senderSignalIndex;
    using KLineEdit::setDelegate;
    using KLineEdit::setKeyBindingMap;
    using KLineEdit::setUserSelection;
    using KLineEdit::updateMicroFocus;
    using KLineEdit::userCancelled;

    // Instance callback storage
    KLineEdit_MetaObject_Callback klineedit_metaobject_callback = nullptr;
    KLineEdit_Metacast_Callback klineedit_metacast_callback = nullptr;
    KLineEdit_Metacall_Callback klineedit_metacall_callback = nullptr;
    KLineEdit_SetCompletionMode_Callback klineedit_setcompletionmode_callback = nullptr;
    KLineEdit_CompletionBox_Callback klineedit_completionbox_callback = nullptr;
    KLineEdit_SetCompletionObject_Callback klineedit_setcompletionobject_callback = nullptr;
    KLineEdit_Copy_Callback klineedit_copy_callback = nullptr;
    KLineEdit_SetReadOnly_Callback klineedit_setreadonly_callback = nullptr;
    KLineEdit_SetCompletedText_Callback klineedit_setcompletedtext_callback = nullptr;
    KLineEdit_SetCompletedItems_Callback klineedit_setcompleteditems_callback = nullptr;
    KLineEdit_SetText_Callback klineedit_settext_callback = nullptr;
    KLineEdit_MakeCompletion_Callback klineedit_makecompletion_callback = nullptr;
    KLineEdit_Event_Callback klineedit_event_callback = nullptr;
    KLineEdit_ResizeEvent_Callback klineedit_resizeevent_callback = nullptr;
    KLineEdit_KeyPressEvent_Callback klineedit_keypressevent_callback = nullptr;
    KLineEdit_MousePressEvent_Callback klineedit_mousepressevent_callback = nullptr;
    KLineEdit_MouseReleaseEvent_Callback klineedit_mousereleaseevent_callback = nullptr;
    KLineEdit_MouseDoubleClickEvent_Callback klineedit_mousedoubleclickevent_callback = nullptr;
    KLineEdit_ContextMenuEvent_Callback klineedit_contextmenuevent_callback = nullptr;
    KLineEdit_SetCompletedText2_Callback klineedit_setcompletedtext2_callback = nullptr;
    KLineEdit_PaintEvent_Callback klineedit_paintevent_callback = nullptr;
    KLineEdit_SizeHint_Callback klineedit_sizehint_callback = nullptr;
    KLineEdit_MinimumSizeHint_Callback klineedit_minimumsizehint_callback = nullptr;
    KLineEdit_MouseMoveEvent_Callback klineedit_mousemoveevent_callback = nullptr;
    KLineEdit_KeyReleaseEvent_Callback klineedit_keyreleaseevent_callback = nullptr;
    KLineEdit_FocusInEvent_Callback klineedit_focusinevent_callback = nullptr;
    KLineEdit_FocusOutEvent_Callback klineedit_focusoutevent_callback = nullptr;
    KLineEdit_DragEnterEvent_Callback klineedit_dragenterevent_callback = nullptr;
    KLineEdit_DragMoveEvent_Callback klineedit_dragmoveevent_callback = nullptr;
    KLineEdit_DragLeaveEvent_Callback klineedit_dragleaveevent_callback = nullptr;
    KLineEdit_DropEvent_Callback klineedit_dropevent_callback = nullptr;
    KLineEdit_ChangeEvent_Callback klineedit_changeevent_callback = nullptr;
    KLineEdit_InputMethodEvent_Callback klineedit_inputmethodevent_callback = nullptr;
    KLineEdit_InitStyleOption_Callback klineedit_initstyleoption_callback = nullptr;
    KLineEdit_InputMethodQuery_Callback klineedit_inputmethodquery_callback = nullptr;
    KLineEdit_TimerEvent_Callback klineedit_timerevent_callback = nullptr;
    KLineEdit_DevType_Callback klineedit_devtype_callback = nullptr;
    KLineEdit_SetVisible_Callback klineedit_setvisible_callback = nullptr;
    KLineEdit_HeightForWidth_Callback klineedit_heightforwidth_callback = nullptr;
    KLineEdit_HasHeightForWidth_Callback klineedit_hasheightforwidth_callback = nullptr;
    KLineEdit_PaintEngine_Callback klineedit_paintengine_callback = nullptr;
    KLineEdit_WheelEvent_Callback klineedit_wheelevent_callback = nullptr;
    KLineEdit_EnterEvent_Callback klineedit_enterevent_callback = nullptr;
    KLineEdit_LeaveEvent_Callback klineedit_leaveevent_callback = nullptr;
    KLineEdit_MoveEvent_Callback klineedit_moveevent_callback = nullptr;
    KLineEdit_CloseEvent_Callback klineedit_closeevent_callback = nullptr;
    KLineEdit_TabletEvent_Callback klineedit_tabletevent_callback = nullptr;
    KLineEdit_ActionEvent_Callback klineedit_actionevent_callback = nullptr;
    KLineEdit_ShowEvent_Callback klineedit_showevent_callback = nullptr;
    KLineEdit_HideEvent_Callback klineedit_hideevent_callback = nullptr;
    KLineEdit_NativeEvent_Callback klineedit_nativeevent_callback = nullptr;
    KLineEdit_Metric_Callback klineedit_metric_callback = nullptr;
    KLineEdit_InitPainter_Callback klineedit_initpainter_callback = nullptr;
    KLineEdit_Redirected_Callback klineedit_redirected_callback = nullptr;
    KLineEdit_SharedPainter_Callback klineedit_sharedpainter_callback = nullptr;
    KLineEdit_FocusNextPrevChild_Callback klineedit_focusnextprevchild_callback = nullptr;
    KLineEdit_EventFilter_Callback klineedit_eventfilter_callback = nullptr;
    KLineEdit_ChildEvent_Callback klineedit_childevent_callback = nullptr;
    KLineEdit_CustomEvent_Callback klineedit_customevent_callback = nullptr;
    KLineEdit_ConnectNotify_Callback klineedit_connectnotify_callback = nullptr;
    KLineEdit_DisconnectNotify_Callback klineedit_disconnectnotify_callback = nullptr;
    KLineEdit_SetHandleSignals_Callback klineedit_sethandlesignals_callback = nullptr;
    KLineEdit_VirtualHook_Callback klineedit_virtualhook_callback = nullptr;

    // Access struct
    struct Base : KLineEdit {
        using KLineEdit::actionEvent;
        using KLineEdit::changeEvent;
        using KLineEdit::childEvent;
        using KLineEdit::closeEvent;
        using KLineEdit::connectNotify;
        using KLineEdit::contextMenuEvent;
        using KLineEdit::customEvent;
        using KLineEdit::disconnectNotify;
        using KLineEdit::dragEnterEvent;
        using KLineEdit::dragLeaveEvent;
        using KLineEdit::dragMoveEvent;
        using KLineEdit::dropEvent;
        using KLineEdit::enterEvent;
        using KLineEdit::event;
        using KLineEdit::focusInEvent;
        using KLineEdit::focusNextPrevChild;
        using KLineEdit::focusOutEvent;
        using KLineEdit::hideEvent;
        using KLineEdit::initPainter;
        using KLineEdit::initStyleOption;
        using KLineEdit::inputMethodEvent;
        using KLineEdit::keyPressEvent;
        using KLineEdit::keyReleaseEvent;
        using KLineEdit::leaveEvent;
        using KLineEdit::makeCompletion;
        using KLineEdit::metric;
        using KLineEdit::mouseDoubleClickEvent;
        using KLineEdit::mouseMoveEvent;
        using KLineEdit::mousePressEvent;
        using KLineEdit::mouseReleaseEvent;
        using KLineEdit::moveEvent;
        using KLineEdit::nativeEvent;
        using KLineEdit::paintEvent;
        using KLineEdit::redirected;
        using KLineEdit::resizeEvent;
        using KLineEdit::setCompletedText;
        using KLineEdit::sharedPainter;
        using KLineEdit::showEvent;
        using KLineEdit::tabletEvent;
        using KLineEdit::virtual_hook;
        using KLineEdit::wheelEvent;
    };

    VirtualKLineEdit(QWidget* parent) : KLineEdit(parent) {};
    VirtualKLineEdit(const QString& string) : KLineEdit(string) {};
    VirtualKLineEdit() : KLineEdit() {};
    VirtualKLineEdit(const QString& string, QWidget* parent) : KLineEdit(string, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (klineedit_metaobject_callback) {
            QMetaObject* callback_ret = klineedit_metaobject_callback(this);
            return callback_ret;
        }
        return KLineEdit::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (klineedit_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = klineedit_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KLineEdit::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (klineedit_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = klineedit_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KLineEdit::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionMode(KCompletion::CompletionMode mode) override {
        if (klineedit_setcompletionmode_callback) {
            int cbval1 = static_cast<int>(mode);
            klineedit_setcompletionmode_callback(this, cbval1);
            return;
        }
        KLineEdit::setCompletionMode(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual KCompletionBox* completionBox(bool create) override {
        if (klineedit_completionbox_callback) {
            bool cbval1 = create;
            KCompletionBox* callback_ret = klineedit_completionbox_callback(this, cbval1);
            return callback_ret;
        }
        return KLineEdit::completionBox(create);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionObject(KCompletion* param1, bool handle) override {
        if (klineedit_setcompletionobject_callback) {
            KCompletion* cbval1 = param1;
            bool cbval2 = handle;
            klineedit_setcompletionobject_callback(this, cbval1, cbval2);
            return;
        }
        KLineEdit::setCompletionObject(param1, handle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void copy() const override {
        if (klineedit_copy_callback) {
            klineedit_copy_callback(this);
            return;
        }
        KLineEdit::copy();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReadOnly(bool readOnly) override {
        if (klineedit_setreadonly_callback) {
            bool cbval1 = readOnly;
            klineedit_setreadonly_callback(this, cbval1);
            return;
        }
        KLineEdit::setReadOnly(readOnly);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletedText(const QString& completedText) override {
        if (klineedit_setcompletedtext_callback) {
            const auto completedText_ret = completedText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray completedText_b = completedText_ret.toUtf8();
            auto completedText_str_len = completedText_b.length();
            const char* completedText_str = static_cast<const char*>(malloc(completedText_str_len + 1));
            memcpy((void*)completedText_str, completedText_b.data(), completedText_str_len);
            ((char*)completedText_str)[completedText_str_len] = '\0';
            const char* cbval1 = completedText_str;
            klineedit_setcompletedtext_callback(this, cbval1);
            libqt_free(completedText_str);
            return;
        }
        KLineEdit::setCompletedText(completedText);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletedItems(const QList<QString>& items, bool autoSuggest) override {
        if (klineedit_setcompleteditems_callback) {
            const QList<QString>& items_ret = items;
            // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
            const char** items_arr = static_cast<const char**>(malloc(sizeof(const char*) * (items_ret.size() + 1)));
            for (qsizetype i = 0; i < items_ret.size(); ++i) {
                QByteArray items_b = items_ret[i].toUtf8();
                auto items_str_len = items_b.length();
                char* items_str = static_cast<char*>(malloc(items_str_len + 1));
                memcpy(items_str, items_b.data(), items_str_len);
                items_str[items_str_len] = '\0';
                items_arr[i] = items_str;
            }
            // Append sentinel null terminator to the list
            items_arr[items_ret.size()] = nullptr;
            const char** cbval1 = items_arr;
            bool cbval2 = autoSuggest;
            klineedit_setcompleteditems_callback(this, cbval1, cbval2);
            libqt_free(items_arr);
            return;
        }
        KLineEdit::setCompletedItems(items, autoSuggest);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setText(const QString& text) override {
        if (klineedit_settext_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            klineedit_settext_callback(this, cbval1);
            libqt_free(text_str);
            return;
        }
        KLineEdit::setText(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual void makeCompletion(const QString& param1) override {
        if (klineedit_makecompletion_callback) {
            const auto param1_ret = param1;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray param1_b = param1_ret.toUtf8();
            auto param1_str_len = param1_b.length();
            const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
            memcpy((void*)param1_str, param1_b.data(), param1_str_len);
            ((char*)param1_str)[param1_str_len] = '\0';
            const char* cbval1 = param1_str;
            klineedit_makecompletion_callback(this, cbval1);
            libqt_free(param1_str);
            return;
        }
        KLineEdit::makeCompletion(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (klineedit_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = klineedit_event_callback(this, cbval1);
            return callback_ret;
        }
        return KLineEdit::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (klineedit_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            klineedit_resizeevent_callback(this, cbval1);
            return;
        }
        KLineEdit::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (klineedit_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            klineedit_keypressevent_callback(this, cbval1);
            return;
        }
        KLineEdit::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (klineedit_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            klineedit_mousepressevent_callback(this, cbval1);
            return;
        }
        KLineEdit::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (klineedit_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            klineedit_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KLineEdit::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (klineedit_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = param1;
            klineedit_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KLineEdit::mouseDoubleClickEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (klineedit_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            klineedit_contextmenuevent_callback(this, cbval1);
            return;
        }
        KLineEdit::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletedText(const QString& param1, bool param2) override {
        if (klineedit_setcompletedtext2_callback) {
            const auto param1_ret = param1;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray param1_b = param1_ret.toUtf8();
            auto param1_str_len = param1_b.length();
            const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
            memcpy((void*)param1_str, param1_b.data(), param1_str_len);
            ((char*)param1_str)[param1_str_len] = '\0';
            const char* cbval1 = param1_str;
            bool cbval2 = param2;
            klineedit_setcompletedtext2_callback(this, cbval1, cbval2);
            libqt_free(param1_str);
            return;
        }
        KLineEdit::setCompletedText(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* ev) override {
        if (klineedit_paintevent_callback) {
            QPaintEvent* cbval1 = ev;
            klineedit_paintevent_callback(this, cbval1);
            return;
        }
        KLineEdit::paintEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (klineedit_sizehint_callback) {
            QSize* callback_ret = klineedit_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KLineEdit::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (klineedit_minimumsizehint_callback) {
            QSize* callback_ret = klineedit_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KLineEdit::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (klineedit_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            klineedit_mousemoveevent_callback(this, cbval1);
            return;
        }
        KLineEdit::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* param1) override {
        if (klineedit_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = param1;
            klineedit_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KLineEdit::keyReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (klineedit_focusinevent_callback) {
            QFocusEvent* cbval1 = param1;
            klineedit_focusinevent_callback(this, cbval1);
            return;
        }
        KLineEdit::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (klineedit_focusoutevent_callback) {
            QFocusEvent* cbval1 = param1;
            klineedit_focusoutevent_callback(this, cbval1);
            return;
        }
        KLineEdit::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (klineedit_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = param1;
            klineedit_dragenterevent_callback(this, cbval1);
            return;
        }
        KLineEdit::dragEnterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (klineedit_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = e;
            klineedit_dragmoveevent_callback(this, cbval1);
            return;
        }
        KLineEdit::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (klineedit_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = e;
            klineedit_dragleaveevent_callback(this, cbval1);
            return;
        }
        KLineEdit::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (klineedit_dropevent_callback) {
            QDropEvent* cbval1 = param1;
            klineedit_dropevent_callback(this, cbval1);
            return;
        }
        KLineEdit::dropEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (klineedit_changeevent_callback) {
            QEvent* cbval1 = param1;
            klineedit_changeevent_callback(this, cbval1);
            return;
        }
        KLineEdit::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (klineedit_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            klineedit_inputmethodevent_callback(this, cbval1);
            return;
        }
        KLineEdit::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (klineedit_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            klineedit_initstyleoption_callback(this, cbval1);
            return;
        }
        KLineEdit::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (klineedit_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = klineedit_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KLineEdit::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (klineedit_timerevent_callback) {
            QTimerEvent* cbval1 = param1;
            klineedit_timerevent_callback(this, cbval1);
            return;
        }
        KLineEdit::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (klineedit_devtype_callback) {
            int callback_ret = klineedit_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KLineEdit::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (klineedit_setvisible_callback) {
            bool cbval1 = visible;
            klineedit_setvisible_callback(this, cbval1);
            return;
        }
        KLineEdit::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (klineedit_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = klineedit_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KLineEdit::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (klineedit_hasheightforwidth_callback) {
            bool callback_ret = klineedit_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KLineEdit::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (klineedit_paintengine_callback) {
            QPaintEngine* callback_ret = klineedit_paintengine_callback(this);
            return callback_ret;
        }
        return KLineEdit::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (klineedit_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            klineedit_wheelevent_callback(this, cbval1);
            return;
        }
        KLineEdit::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (klineedit_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            klineedit_enterevent_callback(this, cbval1);
            return;
        }
        KLineEdit::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (klineedit_leaveevent_callback) {
            QEvent* cbval1 = event;
            klineedit_leaveevent_callback(this, cbval1);
            return;
        }
        KLineEdit::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (klineedit_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            klineedit_moveevent_callback(this, cbval1);
            return;
        }
        KLineEdit::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (klineedit_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            klineedit_closeevent_callback(this, cbval1);
            return;
        }
        KLineEdit::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (klineedit_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            klineedit_tabletevent_callback(this, cbval1);
            return;
        }
        KLineEdit::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (klineedit_actionevent_callback) {
            QActionEvent* cbval1 = event;
            klineedit_actionevent_callback(this, cbval1);
            return;
        }
        KLineEdit::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (klineedit_showevent_callback) {
            QShowEvent* cbval1 = event;
            klineedit_showevent_callback(this, cbval1);
            return;
        }
        KLineEdit::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (klineedit_hideevent_callback) {
            QHideEvent* cbval1 = event;
            klineedit_hideevent_callback(this, cbval1);
            return;
        }
        KLineEdit::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (klineedit_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = klineedit_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KLineEdit::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (klineedit_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = klineedit_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KLineEdit::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (klineedit_initpainter_callback) {
            QPainter* cbval1 = painter;
            klineedit_initpainter_callback(this, cbval1);
            return;
        }
        KLineEdit::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (klineedit_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = klineedit_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KLineEdit::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (klineedit_sharedpainter_callback) {
            QPainter* callback_ret = klineedit_sharedpainter_callback(this);
            return callback_ret;
        }
        return KLineEdit::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (klineedit_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = klineedit_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KLineEdit::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (klineedit_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = klineedit_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KLineEdit::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (klineedit_childevent_callback) {
            QChildEvent* cbval1 = event;
            klineedit_childevent_callback(this, cbval1);
            return;
        }
        KLineEdit::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (klineedit_customevent_callback) {
            QEvent* cbval1 = event;
            klineedit_customevent_callback(this, cbval1);
            return;
        }
        KLineEdit::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (klineedit_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            klineedit_connectnotify_callback(this, cbval1);
            return;
        }
        KLineEdit::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (klineedit_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            klineedit_disconnectnotify_callback(this, cbval1);
            return;
        }
        KLineEdit::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setHandleSignals(bool handle) override {
        if (klineedit_sethandlesignals_callback) {
            bool cbval1 = handle;
            klineedit_sethandlesignals_callback(this, cbval1);
            return;
        }
        KLineEdit::setHandleSignals(handle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (klineedit_virtualhook_callback) {
            int cbval1 = id;
            void* cbval2 = data;
            klineedit_virtualhook_callback(this, cbval1, cbval2);
            return;
        }
        KLineEdit::virtual_hook(id, data);
    }

    // Friend functions
    friend void KLineEdit_SuperMakeCompletion(KLineEdit* self, const libqt_string param1);
    friend bool KLineEdit_SuperEvent(KLineEdit* self, QEvent* param1);
    friend void KLineEdit_SuperResizeEvent(KLineEdit* self, QResizeEvent* param1);
    friend void KLineEdit_SuperKeyPressEvent(KLineEdit* self, QKeyEvent* param1);
    friend void KLineEdit_SuperMousePressEvent(KLineEdit* self, QMouseEvent* param1);
    friend void KLineEdit_SuperMouseReleaseEvent(KLineEdit* self, QMouseEvent* param1);
    friend void KLineEdit_SuperMouseDoubleClickEvent(KLineEdit* self, QMouseEvent* param1);
    friend void KLineEdit_SuperContextMenuEvent(KLineEdit* self, QContextMenuEvent* param1);
    friend void KLineEdit_SuperSetCompletedText2(KLineEdit* self, const libqt_string param1, bool param2);
    friend void KLineEdit_SuperPaintEvent(KLineEdit* self, QPaintEvent* ev);
    friend void KLineEdit_SuperMouseMoveEvent(KLineEdit* self, QMouseEvent* param1);
    friend void KLineEdit_SuperKeyReleaseEvent(KLineEdit* self, QKeyEvent* param1);
    friend void KLineEdit_SuperFocusInEvent(KLineEdit* self, QFocusEvent* param1);
    friend void KLineEdit_SuperFocusOutEvent(KLineEdit* self, QFocusEvent* param1);
    friend void KLineEdit_SuperDragEnterEvent(KLineEdit* self, QDragEnterEvent* param1);
    friend void KLineEdit_SuperDragMoveEvent(KLineEdit* self, QDragMoveEvent* e);
    friend void KLineEdit_SuperDragLeaveEvent(KLineEdit* self, QDragLeaveEvent* e);
    friend void KLineEdit_SuperDropEvent(KLineEdit* self, QDropEvent* param1);
    friend void KLineEdit_SuperChangeEvent(KLineEdit* self, QEvent* param1);
    friend void KLineEdit_SuperInputMethodEvent(KLineEdit* self, QInputMethodEvent* param1);
    friend void KLineEdit_SuperInitStyleOption(const KLineEdit* self, QStyleOptionFrame* option);
    friend void KLineEdit_SuperWheelEvent(KLineEdit* self, QWheelEvent* event);
    friend void KLineEdit_SuperEnterEvent(KLineEdit* self, QEnterEvent* event);
    friend void KLineEdit_SuperLeaveEvent(KLineEdit* self, QEvent* event);
    friend void KLineEdit_SuperMoveEvent(KLineEdit* self, QMoveEvent* event);
    friend void KLineEdit_SuperCloseEvent(KLineEdit* self, QCloseEvent* event);
    friend void KLineEdit_SuperTabletEvent(KLineEdit* self, QTabletEvent* event);
    friend void KLineEdit_SuperActionEvent(KLineEdit* self, QActionEvent* event);
    friend void KLineEdit_SuperShowEvent(KLineEdit* self, QShowEvent* event);
    friend void KLineEdit_SuperHideEvent(KLineEdit* self, QHideEvent* event);
    friend bool KLineEdit_SuperNativeEvent(KLineEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KLineEdit_SuperMetric(const KLineEdit* self, int param1);
    friend void KLineEdit_SuperInitPainter(const KLineEdit* self, QPainter* painter);
    friend QPaintDevice* KLineEdit_SuperRedirected(const KLineEdit* self, QPoint* offset);
    friend QPainter* KLineEdit_SuperSharedPainter(const KLineEdit* self);
    friend bool KLineEdit_SuperFocusNextPrevChild(KLineEdit* self, bool next);
    friend void KLineEdit_SuperChildEvent(KLineEdit* self, QChildEvent* event);
    friend void KLineEdit_SuperCustomEvent(KLineEdit* self, QEvent* event);
    friend void KLineEdit_SuperConnectNotify(KLineEdit* self, const QMetaMethod* signal);
    friend void KLineEdit_SuperDisconnectNotify(KLineEdit* self, const QMetaMethod* signal);
    friend void KLineEdit_SuperVirtualHook(KLineEdit* self, int id, void* data);
};

#endif
