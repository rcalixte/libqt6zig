#pragma once
#ifndef EXTRAS_KCOMPLETION_LIBKCOMBOBOX_HXX
#define EXTRAS_KCOMPLETION_LIBKCOMBOBOX_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KComboBox
class VirtualKComboBox final : public KComboBox {
  public:
    // Virtual class public types (including callbacks and access types)
    using KComboBox_MetaObject_Callback = QMetaObject* (*)(const KComboBox*);
    using KComboBox_Metacast_Callback = void* (*)(KComboBox*, const char*);
    using KComboBox_Metacall_Callback = int (*)(KComboBox*, int, int, void**);
    using KComboBox_SetAutoCompletion_Callback = void (*)(KComboBox*, bool);
    using KComboBox_SetLineEdit_Callback = void (*)(KComboBox*, QLineEdit*);
    using KComboBox_MinimumSizeHint_Callback = QSize* (*)(const KComboBox*);
    using KComboBox_SetCompletedText_Callback = void (*)(KComboBox*, const char*);
    using KComboBox_SetCompletedItems_Callback = void (*)(KComboBox*, const char**, bool);
    using KComboBox_MakeCompletion_Callback = void (*)(KComboBox*, const char*);
    using KComboBox_SetCompletedText2_Callback = void (*)(KComboBox*, const char*, bool);
    using KComboBox_SetModel_Callback = void (*)(KComboBox*, QAbstractItemModel*);
    using KComboBox_SizeHint_Callback = QSize* (*)(const KComboBox*);
    using KComboBox_ShowPopup_Callback = void (*)(KComboBox*);
    using KComboBox_HidePopup_Callback = void (*)(KComboBox*);
    using KComboBox_Event_Callback = bool (*)(KComboBox*, QEvent*);
    using KComboBox_InputMethodQuery_Callback = QVariant* (*)(const KComboBox*, int);
    using KComboBox_FocusInEvent_Callback = void (*)(KComboBox*, QFocusEvent*);
    using KComboBox_FocusOutEvent_Callback = void (*)(KComboBox*, QFocusEvent*);
    using KComboBox_ChangeEvent_Callback = void (*)(KComboBox*, QEvent*);
    using KComboBox_ResizeEvent_Callback = void (*)(KComboBox*, QResizeEvent*);
    using KComboBox_PaintEvent_Callback = void (*)(KComboBox*, QPaintEvent*);
    using KComboBox_ShowEvent_Callback = void (*)(KComboBox*, QShowEvent*);
    using KComboBox_HideEvent_Callback = void (*)(KComboBox*, QHideEvent*);
    using KComboBox_MousePressEvent_Callback = void (*)(KComboBox*, QMouseEvent*);
    using KComboBox_MouseReleaseEvent_Callback = void (*)(KComboBox*, QMouseEvent*);
    using KComboBox_KeyPressEvent_Callback = void (*)(KComboBox*, QKeyEvent*);
    using KComboBox_KeyReleaseEvent_Callback = void (*)(KComboBox*, QKeyEvent*);
    using KComboBox_WheelEvent_Callback = void (*)(KComboBox*, QWheelEvent*);
    using KComboBox_ContextMenuEvent_Callback = void (*)(KComboBox*, QContextMenuEvent*);
    using KComboBox_InputMethodEvent_Callback = void (*)(KComboBox*, QInputMethodEvent*);
    using KComboBox_InitStyleOption_Callback = void (*)(const KComboBox*, QStyleOptionComboBox*);
    using KComboBox_DevType_Callback = int (*)(const KComboBox*);
    using KComboBox_SetVisible_Callback = void (*)(KComboBox*, bool);
    using KComboBox_HeightForWidth_Callback = int (*)(const KComboBox*, int);
    using KComboBox_HasHeightForWidth_Callback = bool (*)(const KComboBox*);
    using KComboBox_PaintEngine_Callback = QPaintEngine* (*)(const KComboBox*);
    using KComboBox_MouseDoubleClickEvent_Callback = void (*)(KComboBox*, QMouseEvent*);
    using KComboBox_MouseMoveEvent_Callback = void (*)(KComboBox*, QMouseEvent*);
    using KComboBox_EnterEvent_Callback = void (*)(KComboBox*, QEnterEvent*);
    using KComboBox_LeaveEvent_Callback = void (*)(KComboBox*, QEvent*);
    using KComboBox_MoveEvent_Callback = void (*)(KComboBox*, QMoveEvent*);
    using KComboBox_CloseEvent_Callback = void (*)(KComboBox*, QCloseEvent*);
    using KComboBox_TabletEvent_Callback = void (*)(KComboBox*, QTabletEvent*);
    using KComboBox_ActionEvent_Callback = void (*)(KComboBox*, QActionEvent*);
    using KComboBox_DragEnterEvent_Callback = void (*)(KComboBox*, QDragEnterEvent*);
    using KComboBox_DragMoveEvent_Callback = void (*)(KComboBox*, QDragMoveEvent*);
    using KComboBox_DragLeaveEvent_Callback = void (*)(KComboBox*, QDragLeaveEvent*);
    using KComboBox_DropEvent_Callback = void (*)(KComboBox*, QDropEvent*);
    using KComboBox_NativeEvent_Callback = bool (*)(KComboBox*, libqt_string, void*, intptr_t*);
    using KComboBox_Metric_Callback = int (*)(const KComboBox*, int);
    using KComboBox_InitPainter_Callback = void (*)(const KComboBox*, QPainter*);
    using KComboBox_Redirected_Callback = QPaintDevice* (*)(const KComboBox*, QPoint*);
    using KComboBox_SharedPainter_Callback = QPainter* (*)(const KComboBox*);
    using KComboBox_FocusNextPrevChild_Callback = bool (*)(KComboBox*, bool);
    using KComboBox_EventFilter_Callback = bool (*)(KComboBox*, QObject*, QEvent*);
    using KComboBox_TimerEvent_Callback = void (*)(KComboBox*, QTimerEvent*);
    using KComboBox_ChildEvent_Callback = void (*)(KComboBox*, QChildEvent*);
    using KComboBox_CustomEvent_Callback = void (*)(KComboBox*, QEvent*);
    using KComboBox_ConnectNotify_Callback = void (*)(KComboBox*, QMetaMethod*);
    using KComboBox_DisconnectNotify_Callback = void (*)(KComboBox*, QMetaMethod*);
    using KComboBox_SetCompletionObject_Callback = void (*)(KComboBox*, KCompletion*, bool);
    using KComboBox_SetHandleSignals_Callback = void (*)(KComboBox*, bool);
    using KComboBox_SetCompletionMode_Callback = void (*)(KComboBox*, int);
    using KComboBox_VirtualHook_Callback = void (*)(KComboBox*, int, void*);
    using KComboBox::create;
    using KComboBox::delegate;
    using KComboBox::destroy;
    using KComboBox::focusNextChild;
    using KComboBox::focusPreviousChild;
    using KComboBox::getDecodedMetricF;
    using KComboBox::isSignalConnected;
    using KComboBox::keyBindingMap;
    using KComboBox::receivers;
    using KComboBox::sender;
    using KComboBox::senderSignalIndex;
    using KComboBox::setDelegate;
    using KComboBox::setKeyBindingMap;
    using KComboBox::updateMicroFocus;

    // Instance callback storage
    KComboBox_MetaObject_Callback kcombobox_metaobject_callback = nullptr;
    KComboBox_Metacast_Callback kcombobox_metacast_callback = nullptr;
    KComboBox_Metacall_Callback kcombobox_metacall_callback = nullptr;
    KComboBox_SetAutoCompletion_Callback kcombobox_setautocompletion_callback = nullptr;
    KComboBox_SetLineEdit_Callback kcombobox_setlineedit_callback = nullptr;
    KComboBox_MinimumSizeHint_Callback kcombobox_minimumsizehint_callback = nullptr;
    KComboBox_SetCompletedText_Callback kcombobox_setcompletedtext_callback = nullptr;
    KComboBox_SetCompletedItems_Callback kcombobox_setcompleteditems_callback = nullptr;
    KComboBox_MakeCompletion_Callback kcombobox_makecompletion_callback = nullptr;
    KComboBox_SetCompletedText2_Callback kcombobox_setcompletedtext2_callback = nullptr;
    KComboBox_SetModel_Callback kcombobox_setmodel_callback = nullptr;
    KComboBox_SizeHint_Callback kcombobox_sizehint_callback = nullptr;
    KComboBox_ShowPopup_Callback kcombobox_showpopup_callback = nullptr;
    KComboBox_HidePopup_Callback kcombobox_hidepopup_callback = nullptr;
    KComboBox_Event_Callback kcombobox_event_callback = nullptr;
    KComboBox_InputMethodQuery_Callback kcombobox_inputmethodquery_callback = nullptr;
    KComboBox_FocusInEvent_Callback kcombobox_focusinevent_callback = nullptr;
    KComboBox_FocusOutEvent_Callback kcombobox_focusoutevent_callback = nullptr;
    KComboBox_ChangeEvent_Callback kcombobox_changeevent_callback = nullptr;
    KComboBox_ResizeEvent_Callback kcombobox_resizeevent_callback = nullptr;
    KComboBox_PaintEvent_Callback kcombobox_paintevent_callback = nullptr;
    KComboBox_ShowEvent_Callback kcombobox_showevent_callback = nullptr;
    KComboBox_HideEvent_Callback kcombobox_hideevent_callback = nullptr;
    KComboBox_MousePressEvent_Callback kcombobox_mousepressevent_callback = nullptr;
    KComboBox_MouseReleaseEvent_Callback kcombobox_mousereleaseevent_callback = nullptr;
    KComboBox_KeyPressEvent_Callback kcombobox_keypressevent_callback = nullptr;
    KComboBox_KeyReleaseEvent_Callback kcombobox_keyreleaseevent_callback = nullptr;
    KComboBox_WheelEvent_Callback kcombobox_wheelevent_callback = nullptr;
    KComboBox_ContextMenuEvent_Callback kcombobox_contextmenuevent_callback = nullptr;
    KComboBox_InputMethodEvent_Callback kcombobox_inputmethodevent_callback = nullptr;
    KComboBox_InitStyleOption_Callback kcombobox_initstyleoption_callback = nullptr;
    KComboBox_DevType_Callback kcombobox_devtype_callback = nullptr;
    KComboBox_SetVisible_Callback kcombobox_setvisible_callback = nullptr;
    KComboBox_HeightForWidth_Callback kcombobox_heightforwidth_callback = nullptr;
    KComboBox_HasHeightForWidth_Callback kcombobox_hasheightforwidth_callback = nullptr;
    KComboBox_PaintEngine_Callback kcombobox_paintengine_callback = nullptr;
    KComboBox_MouseDoubleClickEvent_Callback kcombobox_mousedoubleclickevent_callback = nullptr;
    KComboBox_MouseMoveEvent_Callback kcombobox_mousemoveevent_callback = nullptr;
    KComboBox_EnterEvent_Callback kcombobox_enterevent_callback = nullptr;
    KComboBox_LeaveEvent_Callback kcombobox_leaveevent_callback = nullptr;
    KComboBox_MoveEvent_Callback kcombobox_moveevent_callback = nullptr;
    KComboBox_CloseEvent_Callback kcombobox_closeevent_callback = nullptr;
    KComboBox_TabletEvent_Callback kcombobox_tabletevent_callback = nullptr;
    KComboBox_ActionEvent_Callback kcombobox_actionevent_callback = nullptr;
    KComboBox_DragEnterEvent_Callback kcombobox_dragenterevent_callback = nullptr;
    KComboBox_DragMoveEvent_Callback kcombobox_dragmoveevent_callback = nullptr;
    KComboBox_DragLeaveEvent_Callback kcombobox_dragleaveevent_callback = nullptr;
    KComboBox_DropEvent_Callback kcombobox_dropevent_callback = nullptr;
    KComboBox_NativeEvent_Callback kcombobox_nativeevent_callback = nullptr;
    KComboBox_Metric_Callback kcombobox_metric_callback = nullptr;
    KComboBox_InitPainter_Callback kcombobox_initpainter_callback = nullptr;
    KComboBox_Redirected_Callback kcombobox_redirected_callback = nullptr;
    KComboBox_SharedPainter_Callback kcombobox_sharedpainter_callback = nullptr;
    KComboBox_FocusNextPrevChild_Callback kcombobox_focusnextprevchild_callback = nullptr;
    KComboBox_EventFilter_Callback kcombobox_eventfilter_callback = nullptr;
    KComboBox_TimerEvent_Callback kcombobox_timerevent_callback = nullptr;
    KComboBox_ChildEvent_Callback kcombobox_childevent_callback = nullptr;
    KComboBox_CustomEvent_Callback kcombobox_customevent_callback = nullptr;
    KComboBox_ConnectNotify_Callback kcombobox_connectnotify_callback = nullptr;
    KComboBox_DisconnectNotify_Callback kcombobox_disconnectnotify_callback = nullptr;
    KComboBox_SetCompletionObject_Callback kcombobox_setcompletionobject_callback = nullptr;
    KComboBox_SetHandleSignals_Callback kcombobox_sethandlesignals_callback = nullptr;
    KComboBox_SetCompletionMode_Callback kcombobox_setcompletionmode_callback = nullptr;
    KComboBox_VirtualHook_Callback kcombobox_virtualhook_callback = nullptr;

    // Access struct
    struct Base : KComboBox {
        using KComboBox::actionEvent;
        using KComboBox::changeEvent;
        using KComboBox::childEvent;
        using KComboBox::closeEvent;
        using KComboBox::connectNotify;
        using KComboBox::contextMenuEvent;
        using KComboBox::customEvent;
        using KComboBox::disconnectNotify;
        using KComboBox::dragEnterEvent;
        using KComboBox::dragLeaveEvent;
        using KComboBox::dragMoveEvent;
        using KComboBox::dropEvent;
        using KComboBox::enterEvent;
        using KComboBox::focusInEvent;
        using KComboBox::focusNextPrevChild;
        using KComboBox::focusOutEvent;
        using KComboBox::hideEvent;
        using KComboBox::initPainter;
        using KComboBox::initStyleOption;
        using KComboBox::inputMethodEvent;
        using KComboBox::keyPressEvent;
        using KComboBox::keyReleaseEvent;
        using KComboBox::leaveEvent;
        using KComboBox::makeCompletion;
        using KComboBox::metric;
        using KComboBox::mouseDoubleClickEvent;
        using KComboBox::mouseMoveEvent;
        using KComboBox::mousePressEvent;
        using KComboBox::mouseReleaseEvent;
        using KComboBox::moveEvent;
        using KComboBox::nativeEvent;
        using KComboBox::paintEvent;
        using KComboBox::redirected;
        using KComboBox::resizeEvent;
        using KComboBox::setCompletedText;
        using KComboBox::sharedPainter;
        using KComboBox::showEvent;
        using KComboBox::tabletEvent;
        using KComboBox::timerEvent;
        using KComboBox::virtual_hook;
        using KComboBox::wheelEvent;
    };

    VirtualKComboBox(QWidget* parent) : KComboBox(parent) {};
    VirtualKComboBox() : KComboBox() {};
    VirtualKComboBox(bool rw) : KComboBox(rw) {};
    VirtualKComboBox(bool rw, QWidget* parent) : KComboBox(rw, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcombobox_metaobject_callback) {
            QMetaObject* callback_ret = kcombobox_metaobject_callback(this);
            return callback_ret;
        }
        return KComboBox::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcombobox_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kcombobox_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KComboBox::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcombobox_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kcombobox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KComboBox::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoCompletion(bool autocomplete) override {
        if (kcombobox_setautocompletion_callback) {
            bool cbval1 = autocomplete;
            kcombobox_setautocompletion_callback(this, cbval1);
            return;
        }
        KComboBox::setAutoCompletion(autocomplete);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLineEdit(QLineEdit* lineEdit) override {
        if (kcombobox_setlineedit_callback) {
            QLineEdit* cbval1 = lineEdit;
            kcombobox_setlineedit_callback(this, cbval1);
            return;
        }
        KComboBox::setLineEdit(lineEdit);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kcombobox_minimumsizehint_callback) {
            QSize* callback_ret = kcombobox_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KComboBox::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletedText(const QString& completedText) override {
        if (kcombobox_setcompletedtext_callback) {
            const auto completedText_ret = completedText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray completedText_b = completedText_ret.toUtf8();
            auto completedText_str_len = completedText_b.length();
            const char* completedText_str = static_cast<const char*>(malloc(completedText_str_len + 1));
            memcpy((void*)completedText_str, completedText_b.data(), completedText_str_len);
            ((char*)completedText_str)[completedText_str_len] = '\0';
            const char* cbval1 = completedText_str;
            kcombobox_setcompletedtext_callback(this, cbval1);
            libqt_free(completedText_str);
            return;
        }
        KComboBox::setCompletedText(completedText);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletedItems(const QList<QString>& items, bool autoSuggest) override {
        if (kcombobox_setcompleteditems_callback) {
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
            kcombobox_setcompleteditems_callback(this, cbval1, cbval2);
            libqt_free(items_arr);
            return;
        }
        KComboBox::setCompletedItems(items, autoSuggest);
    }

    // Virtual method for C ABI access and custom callback
    virtual void makeCompletion(const QString& param1) override {
        if (kcombobox_makecompletion_callback) {
            const auto param1_ret = param1;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray param1_b = param1_ret.toUtf8();
            auto param1_str_len = param1_b.length();
            const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
            memcpy((void*)param1_str, param1_b.data(), param1_str_len);
            ((char*)param1_str)[param1_str_len] = '\0';
            const char* cbval1 = param1_str;
            kcombobox_makecompletion_callback(this, cbval1);
            libqt_free(param1_str);
            return;
        }
        KComboBox::makeCompletion(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletedText(const QString& text, bool marked) override {
        if (kcombobox_setcompletedtext2_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            bool cbval2 = marked;
            kcombobox_setcompletedtext2_callback(this, cbval1, cbval2);
            libqt_free(text_str);
            return;
        }
        KComboBox::setCompletedText(text, marked);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (kcombobox_setmodel_callback) {
            QAbstractItemModel* cbval1 = model;
            kcombobox_setmodel_callback(this, cbval1);
            return;
        }
        KComboBox::setModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kcombobox_sizehint_callback) {
            QSize* callback_ret = kcombobox_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KComboBox::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPopup() override {
        if (kcombobox_showpopup_callback) {
            kcombobox_showpopup_callback(this);
            return;
        }
        KComboBox::showPopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual void hidePopup() override {
        if (kcombobox_hidepopup_callback) {
            kcombobox_hidepopup_callback(this);
            return;
        }
        KComboBox::hidePopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcombobox_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kcombobox_event_callback(this, cbval1);
            return callback_ret;
        }
        return KComboBox::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kcombobox_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kcombobox_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KComboBox::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (kcombobox_focusinevent_callback) {
            QFocusEvent* cbval1 = e;
            kcombobox_focusinevent_callback(this, cbval1);
            return;
        }
        KComboBox::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (kcombobox_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            kcombobox_focusoutevent_callback(this, cbval1);
            return;
        }
        KComboBox::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (kcombobox_changeevent_callback) {
            QEvent* cbval1 = e;
            kcombobox_changeevent_callback(this, cbval1);
            return;
        }
        KComboBox::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (kcombobox_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            kcombobox_resizeevent_callback(this, cbval1);
            return;
        }
        KComboBox::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (kcombobox_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            kcombobox_paintevent_callback(this, cbval1);
            return;
        }
        KComboBox::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (kcombobox_showevent_callback) {
            QShowEvent* cbval1 = e;
            kcombobox_showevent_callback(this, cbval1);
            return;
        }
        KComboBox::showEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* e) override {
        if (kcombobox_hideevent_callback) {
            QHideEvent* cbval1 = e;
            kcombobox_hideevent_callback(this, cbval1);
            return;
        }
        KComboBox::hideEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (kcombobox_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            kcombobox_mousepressevent_callback(this, cbval1);
            return;
        }
        KComboBox::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (kcombobox_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            kcombobox_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KComboBox::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (kcombobox_keypressevent_callback) {
            QKeyEvent* cbval1 = e;
            kcombobox_keypressevent_callback(this, cbval1);
            return;
        }
        KComboBox::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (kcombobox_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            kcombobox_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KComboBox::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (kcombobox_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            kcombobox_wheelevent_callback(this, cbval1);
            return;
        }
        KComboBox::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (kcombobox_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = e;
            kcombobox_contextmenuevent_callback(this, cbval1);
            return;
        }
        KComboBox::contextMenuEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kcombobox_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kcombobox_inputmethodevent_callback(this, cbval1);
            return;
        }
        KComboBox::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionComboBox* option) const override {
        if (kcombobox_initstyleoption_callback) {
            QStyleOptionComboBox* cbval1 = option;
            kcombobox_initstyleoption_callback(this, cbval1);
            return;
        }
        KComboBox::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kcombobox_devtype_callback) {
            int callback_ret = kcombobox_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KComboBox::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kcombobox_setvisible_callback) {
            bool cbval1 = visible;
            kcombobox_setvisible_callback(this, cbval1);
            return;
        }
        KComboBox::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kcombobox_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kcombobox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KComboBox::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kcombobox_hasheightforwidth_callback) {
            bool callback_ret = kcombobox_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KComboBox::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kcombobox_paintengine_callback) {
            QPaintEngine* callback_ret = kcombobox_paintengine_callback(this);
            return callback_ret;
        }
        return KComboBox::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kcombobox_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kcombobox_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KComboBox::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kcombobox_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kcombobox_mousemoveevent_callback(this, cbval1);
            return;
        }
        KComboBox::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kcombobox_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kcombobox_enterevent_callback(this, cbval1);
            return;
        }
        KComboBox::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kcombobox_leaveevent_callback) {
            QEvent* cbval1 = event;
            kcombobox_leaveevent_callback(this, cbval1);
            return;
        }
        KComboBox::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kcombobox_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kcombobox_moveevent_callback(this, cbval1);
            return;
        }
        KComboBox::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kcombobox_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kcombobox_closeevent_callback(this, cbval1);
            return;
        }
        KComboBox::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kcombobox_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kcombobox_tabletevent_callback(this, cbval1);
            return;
        }
        KComboBox::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kcombobox_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kcombobox_actionevent_callback(this, cbval1);
            return;
        }
        KComboBox::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kcombobox_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kcombobox_dragenterevent_callback(this, cbval1);
            return;
        }
        KComboBox::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kcombobox_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kcombobox_dragmoveevent_callback(this, cbval1);
            return;
        }
        KComboBox::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kcombobox_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kcombobox_dragleaveevent_callback(this, cbval1);
            return;
        }
        KComboBox::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kcombobox_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kcombobox_dropevent_callback(this, cbval1);
            return;
        }
        KComboBox::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kcombobox_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kcombobox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KComboBox::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kcombobox_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kcombobox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KComboBox::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kcombobox_initpainter_callback) {
            QPainter* cbval1 = painter;
            kcombobox_initpainter_callback(this, cbval1);
            return;
        }
        KComboBox::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kcombobox_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kcombobox_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KComboBox::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kcombobox_sharedpainter_callback) {
            QPainter* callback_ret = kcombobox_sharedpainter_callback(this);
            return callback_ret;
        }
        return KComboBox::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kcombobox_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kcombobox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KComboBox::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcombobox_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kcombobox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KComboBox::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcombobox_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kcombobox_timerevent_callback(this, cbval1);
            return;
        }
        KComboBox::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcombobox_childevent_callback) {
            QChildEvent* cbval1 = event;
            kcombobox_childevent_callback(this, cbval1);
            return;
        }
        KComboBox::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcombobox_customevent_callback) {
            QEvent* cbval1 = event;
            kcombobox_customevent_callback(this, cbval1);
            return;
        }
        KComboBox::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcombobox_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcombobox_connectnotify_callback(this, cbval1);
            return;
        }
        KComboBox::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcombobox_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcombobox_disconnectnotify_callback(this, cbval1);
            return;
        }
        KComboBox::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionObject(KCompletion* completionObject, bool handleSignals) override {
        if (kcombobox_setcompletionobject_callback) {
            KCompletion* cbval1 = completionObject;
            bool cbval2 = handleSignals;
            kcombobox_setcompletionobject_callback(this, cbval1, cbval2);
            return;
        }
        KComboBox::setCompletionObject(completionObject, handleSignals);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setHandleSignals(bool handle) override {
        if (kcombobox_sethandlesignals_callback) {
            bool cbval1 = handle;
            kcombobox_sethandlesignals_callback(this, cbval1);
            return;
        }
        KComboBox::setHandleSignals(handle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionMode(KCompletion::CompletionMode mode) override {
        if (kcombobox_setcompletionmode_callback) {
            int cbval1 = static_cast<int>(mode);
            kcombobox_setcompletionmode_callback(this, cbval1);
            return;
        }
        KComboBox::setCompletionMode(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kcombobox_virtualhook_callback) {
            int cbval1 = id;
            void* cbval2 = data;
            kcombobox_virtualhook_callback(this, cbval1, cbval2);
            return;
        }
        KComboBox::virtual_hook(id, data);
    }

    // Friend functions
    friend void KComboBox_SuperMakeCompletion(KComboBox* self, const libqt_string param1);
    friend void KComboBox_SuperSetCompletedText2(KComboBox* self, const libqt_string text, bool marked);
    friend void KComboBox_SuperFocusInEvent(KComboBox* self, QFocusEvent* e);
    friend void KComboBox_SuperFocusOutEvent(KComboBox* self, QFocusEvent* e);
    friend void KComboBox_SuperChangeEvent(KComboBox* self, QEvent* e);
    friend void KComboBox_SuperResizeEvent(KComboBox* self, QResizeEvent* e);
    friend void KComboBox_SuperPaintEvent(KComboBox* self, QPaintEvent* e);
    friend void KComboBox_SuperShowEvent(KComboBox* self, QShowEvent* e);
    friend void KComboBox_SuperHideEvent(KComboBox* self, QHideEvent* e);
    friend void KComboBox_SuperMousePressEvent(KComboBox* self, QMouseEvent* e);
    friend void KComboBox_SuperMouseReleaseEvent(KComboBox* self, QMouseEvent* e);
    friend void KComboBox_SuperKeyPressEvent(KComboBox* self, QKeyEvent* e);
    friend void KComboBox_SuperKeyReleaseEvent(KComboBox* self, QKeyEvent* e);
    friend void KComboBox_SuperWheelEvent(KComboBox* self, QWheelEvent* e);
    friend void KComboBox_SuperContextMenuEvent(KComboBox* self, QContextMenuEvent* e);
    friend void KComboBox_SuperInputMethodEvent(KComboBox* self, QInputMethodEvent* param1);
    friend void KComboBox_SuperInitStyleOption(const KComboBox* self, QStyleOptionComboBox* option);
    friend void KComboBox_SuperMouseDoubleClickEvent(KComboBox* self, QMouseEvent* event);
    friend void KComboBox_SuperMouseMoveEvent(KComboBox* self, QMouseEvent* event);
    friend void KComboBox_SuperEnterEvent(KComboBox* self, QEnterEvent* event);
    friend void KComboBox_SuperLeaveEvent(KComboBox* self, QEvent* event);
    friend void KComboBox_SuperMoveEvent(KComboBox* self, QMoveEvent* event);
    friend void KComboBox_SuperCloseEvent(KComboBox* self, QCloseEvent* event);
    friend void KComboBox_SuperTabletEvent(KComboBox* self, QTabletEvent* event);
    friend void KComboBox_SuperActionEvent(KComboBox* self, QActionEvent* event);
    friend void KComboBox_SuperDragEnterEvent(KComboBox* self, QDragEnterEvent* event);
    friend void KComboBox_SuperDragMoveEvent(KComboBox* self, QDragMoveEvent* event);
    friend void KComboBox_SuperDragLeaveEvent(KComboBox* self, QDragLeaveEvent* event);
    friend void KComboBox_SuperDropEvent(KComboBox* self, QDropEvent* event);
    friend bool KComboBox_SuperNativeEvent(KComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KComboBox_SuperMetric(const KComboBox* self, int param1);
    friend void KComboBox_SuperInitPainter(const KComboBox* self, QPainter* painter);
    friend QPaintDevice* KComboBox_SuperRedirected(const KComboBox* self, QPoint* offset);
    friend QPainter* KComboBox_SuperSharedPainter(const KComboBox* self);
    friend bool KComboBox_SuperFocusNextPrevChild(KComboBox* self, bool next);
    friend void KComboBox_SuperTimerEvent(KComboBox* self, QTimerEvent* event);
    friend void KComboBox_SuperChildEvent(KComboBox* self, QChildEvent* event);
    friend void KComboBox_SuperCustomEvent(KComboBox* self, QEvent* event);
    friend void KComboBox_SuperConnectNotify(KComboBox* self, const QMetaMethod* signal);
    friend void KComboBox_SuperDisconnectNotify(KComboBox* self, const QMetaMethod* signal);
    friend void KComboBox_SuperVirtualHook(KComboBox* self, int id, void* data);
};

#endif
