#pragma once
#ifndef EXTRAS_KIO_LIBKFILEFILTERCOMBO_HXX
#define EXTRAS_KIO_LIBKFILEFILTERCOMBO_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFileFilterCombo
class VirtualKFileFilterCombo final : public KFileFilterCombo {
  public:
    // Virtual class public types (including callbacks and access types)
    using KFileFilterCombo_MetaObject_Callback = QMetaObject* (*)(const KFileFilterCombo*);
    using KFileFilterCombo_Metacast_Callback = void* (*)(KFileFilterCombo*, const char*);
    using KFileFilterCombo_Metacall_Callback = int (*)(KFileFilterCombo*, int, int, void**);
    using KFileFilterCombo_EventFilter_Callback = bool (*)(KFileFilterCombo*, QObject*, QEvent*);
    using KFileFilterCombo_SetAutoCompletion_Callback = void (*)(KFileFilterCombo*, bool);
    using KFileFilterCombo_SetLineEdit_Callback = void (*)(KFileFilterCombo*, QLineEdit*);
    using KFileFilterCombo_MinimumSizeHint_Callback = QSize* (*)(const KFileFilterCombo*);
    using KFileFilterCombo_SetCompletedText_Callback = void (*)(KFileFilterCombo*, const char*);
    using KFileFilterCombo_SetCompletedItems_Callback = void (*)(KFileFilterCombo*, const char**, bool);
    using KFileFilterCombo_MakeCompletion_Callback = void (*)(KFileFilterCombo*, const char*);
    using KFileFilterCombo_SetModel_Callback = void (*)(KFileFilterCombo*, QAbstractItemModel*);
    using KFileFilterCombo_SizeHint_Callback = QSize* (*)(const KFileFilterCombo*);
    using KFileFilterCombo_ShowPopup_Callback = void (*)(KFileFilterCombo*);
    using KFileFilterCombo_HidePopup_Callback = void (*)(KFileFilterCombo*);
    using KFileFilterCombo_Event_Callback = bool (*)(KFileFilterCombo*, QEvent*);
    using KFileFilterCombo_InputMethodQuery_Callback = QVariant* (*)(const KFileFilterCombo*, int);
    using KFileFilterCombo_FocusInEvent_Callback = void (*)(KFileFilterCombo*, QFocusEvent*);
    using KFileFilterCombo_FocusOutEvent_Callback = void (*)(KFileFilterCombo*, QFocusEvent*);
    using KFileFilterCombo_ChangeEvent_Callback = void (*)(KFileFilterCombo*, QEvent*);
    using KFileFilterCombo_ResizeEvent_Callback = void (*)(KFileFilterCombo*, QResizeEvent*);
    using KFileFilterCombo_PaintEvent_Callback = void (*)(KFileFilterCombo*, QPaintEvent*);
    using KFileFilterCombo_ShowEvent_Callback = void (*)(KFileFilterCombo*, QShowEvent*);
    using KFileFilterCombo_HideEvent_Callback = void (*)(KFileFilterCombo*, QHideEvent*);
    using KFileFilterCombo_MousePressEvent_Callback = void (*)(KFileFilterCombo*, QMouseEvent*);
    using KFileFilterCombo_MouseReleaseEvent_Callback = void (*)(KFileFilterCombo*, QMouseEvent*);
    using KFileFilterCombo_KeyPressEvent_Callback = void (*)(KFileFilterCombo*, QKeyEvent*);
    using KFileFilterCombo_KeyReleaseEvent_Callback = void (*)(KFileFilterCombo*, QKeyEvent*);
    using KFileFilterCombo_WheelEvent_Callback = void (*)(KFileFilterCombo*, QWheelEvent*);
    using KFileFilterCombo_ContextMenuEvent_Callback = void (*)(KFileFilterCombo*, QContextMenuEvent*);
    using KFileFilterCombo_InputMethodEvent_Callback = void (*)(KFileFilterCombo*, QInputMethodEvent*);
    using KFileFilterCombo_InitStyleOption_Callback = void (*)(const KFileFilterCombo*, QStyleOptionComboBox*);
    using KFileFilterCombo_DevType_Callback = int (*)(const KFileFilterCombo*);
    using KFileFilterCombo_SetVisible_Callback = void (*)(KFileFilterCombo*, bool);
    using KFileFilterCombo_HeightForWidth_Callback = int (*)(const KFileFilterCombo*, int);
    using KFileFilterCombo_HasHeightForWidth_Callback = bool (*)(const KFileFilterCombo*);
    using KFileFilterCombo_PaintEngine_Callback = QPaintEngine* (*)(const KFileFilterCombo*);
    using KFileFilterCombo_MouseDoubleClickEvent_Callback = void (*)(KFileFilterCombo*, QMouseEvent*);
    using KFileFilterCombo_MouseMoveEvent_Callback = void (*)(KFileFilterCombo*, QMouseEvent*);
    using KFileFilterCombo_EnterEvent_Callback = void (*)(KFileFilterCombo*, QEnterEvent*);
    using KFileFilterCombo_LeaveEvent_Callback = void (*)(KFileFilterCombo*, QEvent*);
    using KFileFilterCombo_MoveEvent_Callback = void (*)(KFileFilterCombo*, QMoveEvent*);
    using KFileFilterCombo_CloseEvent_Callback = void (*)(KFileFilterCombo*, QCloseEvent*);
    using KFileFilterCombo_TabletEvent_Callback = void (*)(KFileFilterCombo*, QTabletEvent*);
    using KFileFilterCombo_ActionEvent_Callback = void (*)(KFileFilterCombo*, QActionEvent*);
    using KFileFilterCombo_DragEnterEvent_Callback = void (*)(KFileFilterCombo*, QDragEnterEvent*);
    using KFileFilterCombo_DragMoveEvent_Callback = void (*)(KFileFilterCombo*, QDragMoveEvent*);
    using KFileFilterCombo_DragLeaveEvent_Callback = void (*)(KFileFilterCombo*, QDragLeaveEvent*);
    using KFileFilterCombo_DropEvent_Callback = void (*)(KFileFilterCombo*, QDropEvent*);
    using KFileFilterCombo_NativeEvent_Callback = bool (*)(KFileFilterCombo*, libqt_string, void*, intptr_t*);
    using KFileFilterCombo_Metric_Callback = int (*)(const KFileFilterCombo*, int);
    using KFileFilterCombo_InitPainter_Callback = void (*)(const KFileFilterCombo*, QPainter*);
    using KFileFilterCombo_Redirected_Callback = QPaintDevice* (*)(const KFileFilterCombo*, QPoint*);
    using KFileFilterCombo_SharedPainter_Callback = QPainter* (*)(const KFileFilterCombo*);
    using KFileFilterCombo_FocusNextPrevChild_Callback = bool (*)(KFileFilterCombo*, bool);
    using KFileFilterCombo_TimerEvent_Callback = void (*)(KFileFilterCombo*, QTimerEvent*);
    using KFileFilterCombo_ChildEvent_Callback = void (*)(KFileFilterCombo*, QChildEvent*);
    using KFileFilterCombo_CustomEvent_Callback = void (*)(KFileFilterCombo*, QEvent*);
    using KFileFilterCombo_ConnectNotify_Callback = void (*)(KFileFilterCombo*, QMetaMethod*);
    using KFileFilterCombo_DisconnectNotify_Callback = void (*)(KFileFilterCombo*, QMetaMethod*);
    using KFileFilterCombo_SetCompletionObject_Callback = void (*)(KFileFilterCombo*, KCompletion*, bool);
    using KFileFilterCombo_SetHandleSignals_Callback = void (*)(KFileFilterCombo*, bool);
    using KFileFilterCombo_SetCompletionMode_Callback = void (*)(KFileFilterCombo*, int);
    using KFileFilterCombo_VirtualHook_Callback = void (*)(KFileFilterCombo*, int, void*);
    using KFileFilterCombo::create;
    using KFileFilterCombo::delegate;
    using KFileFilterCombo::destroy;
    using KFileFilterCombo::focusNextChild;
    using KFileFilterCombo::focusPreviousChild;
    using KFileFilterCombo::getDecodedMetricF;
    using KFileFilterCombo::isSignalConnected;
    using KFileFilterCombo::keyBindingMap;
    using KFileFilterCombo::receivers;
    using KFileFilterCombo::sender;
    using KFileFilterCombo::senderSignalIndex;
    using KFileFilterCombo::setDelegate;
    using KFileFilterCombo::setKeyBindingMap;
    using KFileFilterCombo::updateMicroFocus;

    // Instance callback storage
    KFileFilterCombo_MetaObject_Callback kfilefiltercombo_metaobject_callback = nullptr;
    KFileFilterCombo_Metacast_Callback kfilefiltercombo_metacast_callback = nullptr;
    KFileFilterCombo_Metacall_Callback kfilefiltercombo_metacall_callback = nullptr;
    KFileFilterCombo_EventFilter_Callback kfilefiltercombo_eventfilter_callback = nullptr;
    KFileFilterCombo_SetAutoCompletion_Callback kfilefiltercombo_setautocompletion_callback = nullptr;
    KFileFilterCombo_SetLineEdit_Callback kfilefiltercombo_setlineedit_callback = nullptr;
    KFileFilterCombo_MinimumSizeHint_Callback kfilefiltercombo_minimumsizehint_callback = nullptr;
    KFileFilterCombo_SetCompletedText_Callback kfilefiltercombo_setcompletedtext_callback = nullptr;
    KFileFilterCombo_SetCompletedItems_Callback kfilefiltercombo_setcompleteditems_callback = nullptr;
    KFileFilterCombo_MakeCompletion_Callback kfilefiltercombo_makecompletion_callback = nullptr;
    KFileFilterCombo_SetModel_Callback kfilefiltercombo_setmodel_callback = nullptr;
    KFileFilterCombo_SizeHint_Callback kfilefiltercombo_sizehint_callback = nullptr;
    KFileFilterCombo_ShowPopup_Callback kfilefiltercombo_showpopup_callback = nullptr;
    KFileFilterCombo_HidePopup_Callback kfilefiltercombo_hidepopup_callback = nullptr;
    KFileFilterCombo_Event_Callback kfilefiltercombo_event_callback = nullptr;
    KFileFilterCombo_InputMethodQuery_Callback kfilefiltercombo_inputmethodquery_callback = nullptr;
    KFileFilterCombo_FocusInEvent_Callback kfilefiltercombo_focusinevent_callback = nullptr;
    KFileFilterCombo_FocusOutEvent_Callback kfilefiltercombo_focusoutevent_callback = nullptr;
    KFileFilterCombo_ChangeEvent_Callback kfilefiltercombo_changeevent_callback = nullptr;
    KFileFilterCombo_ResizeEvent_Callback kfilefiltercombo_resizeevent_callback = nullptr;
    KFileFilterCombo_PaintEvent_Callback kfilefiltercombo_paintevent_callback = nullptr;
    KFileFilterCombo_ShowEvent_Callback kfilefiltercombo_showevent_callback = nullptr;
    KFileFilterCombo_HideEvent_Callback kfilefiltercombo_hideevent_callback = nullptr;
    KFileFilterCombo_MousePressEvent_Callback kfilefiltercombo_mousepressevent_callback = nullptr;
    KFileFilterCombo_MouseReleaseEvent_Callback kfilefiltercombo_mousereleaseevent_callback = nullptr;
    KFileFilterCombo_KeyPressEvent_Callback kfilefiltercombo_keypressevent_callback = nullptr;
    KFileFilterCombo_KeyReleaseEvent_Callback kfilefiltercombo_keyreleaseevent_callback = nullptr;
    KFileFilterCombo_WheelEvent_Callback kfilefiltercombo_wheelevent_callback = nullptr;
    KFileFilterCombo_ContextMenuEvent_Callback kfilefiltercombo_contextmenuevent_callback = nullptr;
    KFileFilterCombo_InputMethodEvent_Callback kfilefiltercombo_inputmethodevent_callback = nullptr;
    KFileFilterCombo_InitStyleOption_Callback kfilefiltercombo_initstyleoption_callback = nullptr;
    KFileFilterCombo_DevType_Callback kfilefiltercombo_devtype_callback = nullptr;
    KFileFilterCombo_SetVisible_Callback kfilefiltercombo_setvisible_callback = nullptr;
    KFileFilterCombo_HeightForWidth_Callback kfilefiltercombo_heightforwidth_callback = nullptr;
    KFileFilterCombo_HasHeightForWidth_Callback kfilefiltercombo_hasheightforwidth_callback = nullptr;
    KFileFilterCombo_PaintEngine_Callback kfilefiltercombo_paintengine_callback = nullptr;
    KFileFilterCombo_MouseDoubleClickEvent_Callback kfilefiltercombo_mousedoubleclickevent_callback = nullptr;
    KFileFilterCombo_MouseMoveEvent_Callback kfilefiltercombo_mousemoveevent_callback = nullptr;
    KFileFilterCombo_EnterEvent_Callback kfilefiltercombo_enterevent_callback = nullptr;
    KFileFilterCombo_LeaveEvent_Callback kfilefiltercombo_leaveevent_callback = nullptr;
    KFileFilterCombo_MoveEvent_Callback kfilefiltercombo_moveevent_callback = nullptr;
    KFileFilterCombo_CloseEvent_Callback kfilefiltercombo_closeevent_callback = nullptr;
    KFileFilterCombo_TabletEvent_Callback kfilefiltercombo_tabletevent_callback = nullptr;
    KFileFilterCombo_ActionEvent_Callback kfilefiltercombo_actionevent_callback = nullptr;
    KFileFilterCombo_DragEnterEvent_Callback kfilefiltercombo_dragenterevent_callback = nullptr;
    KFileFilterCombo_DragMoveEvent_Callback kfilefiltercombo_dragmoveevent_callback = nullptr;
    KFileFilterCombo_DragLeaveEvent_Callback kfilefiltercombo_dragleaveevent_callback = nullptr;
    KFileFilterCombo_DropEvent_Callback kfilefiltercombo_dropevent_callback = nullptr;
    KFileFilterCombo_NativeEvent_Callback kfilefiltercombo_nativeevent_callback = nullptr;
    KFileFilterCombo_Metric_Callback kfilefiltercombo_metric_callback = nullptr;
    KFileFilterCombo_InitPainter_Callback kfilefiltercombo_initpainter_callback = nullptr;
    KFileFilterCombo_Redirected_Callback kfilefiltercombo_redirected_callback = nullptr;
    KFileFilterCombo_SharedPainter_Callback kfilefiltercombo_sharedpainter_callback = nullptr;
    KFileFilterCombo_FocusNextPrevChild_Callback kfilefiltercombo_focusnextprevchild_callback = nullptr;
    KFileFilterCombo_TimerEvent_Callback kfilefiltercombo_timerevent_callback = nullptr;
    KFileFilterCombo_ChildEvent_Callback kfilefiltercombo_childevent_callback = nullptr;
    KFileFilterCombo_CustomEvent_Callback kfilefiltercombo_customevent_callback = nullptr;
    KFileFilterCombo_ConnectNotify_Callback kfilefiltercombo_connectnotify_callback = nullptr;
    KFileFilterCombo_DisconnectNotify_Callback kfilefiltercombo_disconnectnotify_callback = nullptr;
    KFileFilterCombo_SetCompletionObject_Callback kfilefiltercombo_setcompletionobject_callback = nullptr;
    KFileFilterCombo_SetHandleSignals_Callback kfilefiltercombo_sethandlesignals_callback = nullptr;
    KFileFilterCombo_SetCompletionMode_Callback kfilefiltercombo_setcompletionmode_callback = nullptr;
    KFileFilterCombo_VirtualHook_Callback kfilefiltercombo_virtualhook_callback = nullptr;

    // Access struct
    struct Base : KFileFilterCombo {
        using KFileFilterCombo::actionEvent;
        using KFileFilterCombo::changeEvent;
        using KFileFilterCombo::childEvent;
        using KFileFilterCombo::closeEvent;
        using KFileFilterCombo::connectNotify;
        using KFileFilterCombo::contextMenuEvent;
        using KFileFilterCombo::customEvent;
        using KFileFilterCombo::disconnectNotify;
        using KFileFilterCombo::dragEnterEvent;
        using KFileFilterCombo::dragLeaveEvent;
        using KFileFilterCombo::dragMoveEvent;
        using KFileFilterCombo::dropEvent;
        using KFileFilterCombo::enterEvent;
        using KFileFilterCombo::eventFilter;
        using KFileFilterCombo::focusInEvent;
        using KFileFilterCombo::focusNextPrevChild;
        using KFileFilterCombo::focusOutEvent;
        using KFileFilterCombo::hideEvent;
        using KFileFilterCombo::initPainter;
        using KFileFilterCombo::initStyleOption;
        using KFileFilterCombo::inputMethodEvent;
        using KFileFilterCombo::keyPressEvent;
        using KFileFilterCombo::keyReleaseEvent;
        using KFileFilterCombo::leaveEvent;
        using KFileFilterCombo::makeCompletion;
        using KFileFilterCombo::metric;
        using KFileFilterCombo::mouseDoubleClickEvent;
        using KFileFilterCombo::mouseMoveEvent;
        using KFileFilterCombo::mousePressEvent;
        using KFileFilterCombo::mouseReleaseEvent;
        using KFileFilterCombo::moveEvent;
        using KFileFilterCombo::nativeEvent;
        using KFileFilterCombo::paintEvent;
        using KFileFilterCombo::redirected;
        using KFileFilterCombo::resizeEvent;
        using KFileFilterCombo::sharedPainter;
        using KFileFilterCombo::showEvent;
        using KFileFilterCombo::tabletEvent;
        using KFileFilterCombo::timerEvent;
        using KFileFilterCombo::virtual_hook;
        using KFileFilterCombo::wheelEvent;
    };

    VirtualKFileFilterCombo(QWidget* parent) : KFileFilterCombo(parent) {};
    VirtualKFileFilterCombo() : KFileFilterCombo() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kfilefiltercombo_metaobject_callback) {
            QMetaObject* callback_ret = kfilefiltercombo_metaobject_callback(this);
            return callback_ret;
        }
        return KFileFilterCombo::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kfilefiltercombo_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kfilefiltercombo_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KFileFilterCombo::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfilefiltercombo_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kfilefiltercombo_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KFileFilterCombo::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kfilefiltercombo_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = kfilefiltercombo_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFileFilterCombo::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoCompletion(bool autocomplete) override {
        if (kfilefiltercombo_setautocompletion_callback) {
            bool cbval1 = autocomplete;
            kfilefiltercombo_setautocompletion_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::setAutoCompletion(autocomplete);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLineEdit(QLineEdit* lineEdit) override {
        if (kfilefiltercombo_setlineedit_callback) {
            QLineEdit* cbval1 = lineEdit;
            kfilefiltercombo_setlineedit_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::setLineEdit(lineEdit);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kfilefiltercombo_minimumsizehint_callback) {
            QSize* callback_ret = kfilefiltercombo_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFileFilterCombo::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletedText(const QString& completedText) override {
        if (kfilefiltercombo_setcompletedtext_callback) {
            const auto completedText_ret = completedText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray completedText_b = completedText_ret.toUtf8();
            auto completedText_str_len = completedText_b.length();
            const char* completedText_str = static_cast<const char*>(malloc(completedText_str_len + 1));
            memcpy((void*)completedText_str, completedText_b.data(), completedText_str_len);
            ((char*)completedText_str)[completedText_str_len] = '\0';
            const char* cbval1 = completedText_str;
            kfilefiltercombo_setcompletedtext_callback(this, cbval1);
            libqt_free(completedText_str);
            return;
        }
        KFileFilterCombo::setCompletedText(completedText);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletedItems(const QList<QString>& items, bool autoSuggest) override {
        if (kfilefiltercombo_setcompleteditems_callback) {
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
            kfilefiltercombo_setcompleteditems_callback(this, cbval1, cbval2);
            libqt_free(items_arr);
            return;
        }
        KFileFilterCombo::setCompletedItems(items, autoSuggest);
    }

    // Virtual method for C ABI access and custom callback
    virtual void makeCompletion(const QString& param1) override {
        if (kfilefiltercombo_makecompletion_callback) {
            const auto param1_ret = param1;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray param1_b = param1_ret.toUtf8();
            auto param1_str_len = param1_b.length();
            const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
            memcpy((void*)param1_str, param1_b.data(), param1_str_len);
            ((char*)param1_str)[param1_str_len] = '\0';
            const char* cbval1 = param1_str;
            kfilefiltercombo_makecompletion_callback(this, cbval1);
            libqt_free(param1_str);
            return;
        }
        KFileFilterCombo::makeCompletion(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (kfilefiltercombo_setmodel_callback) {
            QAbstractItemModel* cbval1 = model;
            kfilefiltercombo_setmodel_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::setModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kfilefiltercombo_sizehint_callback) {
            QSize* callback_ret = kfilefiltercombo_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFileFilterCombo::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPopup() override {
        if (kfilefiltercombo_showpopup_callback) {
            kfilefiltercombo_showpopup_callback(this);
            return;
        }
        KFileFilterCombo::showPopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual void hidePopup() override {
        if (kfilefiltercombo_hidepopup_callback) {
            kfilefiltercombo_hidepopup_callback(this);
            return;
        }
        KFileFilterCombo::hidePopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfilefiltercombo_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kfilefiltercombo_event_callback(this, cbval1);
            return callback_ret;
        }
        return KFileFilterCombo::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kfilefiltercombo_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kfilefiltercombo_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFileFilterCombo::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (kfilefiltercombo_focusinevent_callback) {
            QFocusEvent* cbval1 = e;
            kfilefiltercombo_focusinevent_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (kfilefiltercombo_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            kfilefiltercombo_focusoutevent_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (kfilefiltercombo_changeevent_callback) {
            QEvent* cbval1 = e;
            kfilefiltercombo_changeevent_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (kfilefiltercombo_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            kfilefiltercombo_resizeevent_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (kfilefiltercombo_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            kfilefiltercombo_paintevent_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (kfilefiltercombo_showevent_callback) {
            QShowEvent* cbval1 = e;
            kfilefiltercombo_showevent_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::showEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* e) override {
        if (kfilefiltercombo_hideevent_callback) {
            QHideEvent* cbval1 = e;
            kfilefiltercombo_hideevent_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::hideEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (kfilefiltercombo_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            kfilefiltercombo_mousepressevent_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (kfilefiltercombo_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            kfilefiltercombo_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (kfilefiltercombo_keypressevent_callback) {
            QKeyEvent* cbval1 = e;
            kfilefiltercombo_keypressevent_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (kfilefiltercombo_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            kfilefiltercombo_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (kfilefiltercombo_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            kfilefiltercombo_wheelevent_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (kfilefiltercombo_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = e;
            kfilefiltercombo_contextmenuevent_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::contextMenuEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kfilefiltercombo_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kfilefiltercombo_inputmethodevent_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionComboBox* option) const override {
        if (kfilefiltercombo_initstyleoption_callback) {
            QStyleOptionComboBox* cbval1 = option;
            kfilefiltercombo_initstyleoption_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kfilefiltercombo_devtype_callback) {
            int callback_ret = kfilefiltercombo_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KFileFilterCombo::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kfilefiltercombo_setvisible_callback) {
            bool cbval1 = visible;
            kfilefiltercombo_setvisible_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kfilefiltercombo_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kfilefiltercombo_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFileFilterCombo::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kfilefiltercombo_hasheightforwidth_callback) {
            bool callback_ret = kfilefiltercombo_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KFileFilterCombo::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kfilefiltercombo_paintengine_callback) {
            QPaintEngine* callback_ret = kfilefiltercombo_paintengine_callback(this);
            return callback_ret;
        }
        return KFileFilterCombo::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kfilefiltercombo_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kfilefiltercombo_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kfilefiltercombo_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kfilefiltercombo_mousemoveevent_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kfilefiltercombo_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kfilefiltercombo_enterevent_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kfilefiltercombo_leaveevent_callback) {
            QEvent* cbval1 = event;
            kfilefiltercombo_leaveevent_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kfilefiltercombo_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kfilefiltercombo_moveevent_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kfilefiltercombo_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kfilefiltercombo_closeevent_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kfilefiltercombo_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kfilefiltercombo_tabletevent_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kfilefiltercombo_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kfilefiltercombo_actionevent_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kfilefiltercombo_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kfilefiltercombo_dragenterevent_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kfilefiltercombo_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kfilefiltercombo_dragmoveevent_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kfilefiltercombo_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kfilefiltercombo_dragleaveevent_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kfilefiltercombo_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kfilefiltercombo_dropevent_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kfilefiltercombo_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kfilefiltercombo_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KFileFilterCombo::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kfilefiltercombo_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kfilefiltercombo_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFileFilterCombo::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kfilefiltercombo_initpainter_callback) {
            QPainter* cbval1 = painter;
            kfilefiltercombo_initpainter_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kfilefiltercombo_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kfilefiltercombo_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KFileFilterCombo::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kfilefiltercombo_sharedpainter_callback) {
            QPainter* callback_ret = kfilefiltercombo_sharedpainter_callback(this);
            return callback_ret;
        }
        return KFileFilterCombo::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kfilefiltercombo_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kfilefiltercombo_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KFileFilterCombo::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfilefiltercombo_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kfilefiltercombo_timerevent_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfilefiltercombo_childevent_callback) {
            QChildEvent* cbval1 = event;
            kfilefiltercombo_childevent_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfilefiltercombo_customevent_callback) {
            QEvent* cbval1 = event;
            kfilefiltercombo_customevent_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfilefiltercombo_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfilefiltercombo_connectnotify_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfilefiltercombo_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfilefiltercombo_disconnectnotify_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionObject(KCompletion* completionObject, bool handleSignals) override {
        if (kfilefiltercombo_setcompletionobject_callback) {
            KCompletion* cbval1 = completionObject;
            bool cbval2 = handleSignals;
            kfilefiltercombo_setcompletionobject_callback(this, cbval1, cbval2);
            return;
        }
        KFileFilterCombo::setCompletionObject(completionObject, handleSignals);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setHandleSignals(bool handle) override {
        if (kfilefiltercombo_sethandlesignals_callback) {
            bool cbval1 = handle;
            kfilefiltercombo_sethandlesignals_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::setHandleSignals(handle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionMode(KCompletion::CompletionMode mode) override {
        if (kfilefiltercombo_setcompletionmode_callback) {
            int cbval1 = static_cast<int>(mode);
            kfilefiltercombo_setcompletionmode_callback(this, cbval1);
            return;
        }
        KFileFilterCombo::setCompletionMode(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kfilefiltercombo_virtualhook_callback) {
            int cbval1 = id;
            void* cbval2 = data;
            kfilefiltercombo_virtualhook_callback(this, cbval1, cbval2);
            return;
        }
        KFileFilterCombo::virtual_hook(id, data);
    }

    // Friend functions
    friend bool KFileFilterCombo_SuperEventFilter(KFileFilterCombo* self, QObject* param1, QEvent* param2);
    friend void KFileFilterCombo_SuperMakeCompletion(KFileFilterCombo* self, const libqt_string param1);
    friend void KFileFilterCombo_SuperFocusInEvent(KFileFilterCombo* self, QFocusEvent* e);
    friend void KFileFilterCombo_SuperFocusOutEvent(KFileFilterCombo* self, QFocusEvent* e);
    friend void KFileFilterCombo_SuperChangeEvent(KFileFilterCombo* self, QEvent* e);
    friend void KFileFilterCombo_SuperResizeEvent(KFileFilterCombo* self, QResizeEvent* e);
    friend void KFileFilterCombo_SuperPaintEvent(KFileFilterCombo* self, QPaintEvent* e);
    friend void KFileFilterCombo_SuperShowEvent(KFileFilterCombo* self, QShowEvent* e);
    friend void KFileFilterCombo_SuperHideEvent(KFileFilterCombo* self, QHideEvent* e);
    friend void KFileFilterCombo_SuperMousePressEvent(KFileFilterCombo* self, QMouseEvent* e);
    friend void KFileFilterCombo_SuperMouseReleaseEvent(KFileFilterCombo* self, QMouseEvent* e);
    friend void KFileFilterCombo_SuperKeyPressEvent(KFileFilterCombo* self, QKeyEvent* e);
    friend void KFileFilterCombo_SuperKeyReleaseEvent(KFileFilterCombo* self, QKeyEvent* e);
    friend void KFileFilterCombo_SuperWheelEvent(KFileFilterCombo* self, QWheelEvent* e);
    friend void KFileFilterCombo_SuperContextMenuEvent(KFileFilterCombo* self, QContextMenuEvent* e);
    friend void KFileFilterCombo_SuperInputMethodEvent(KFileFilterCombo* self, QInputMethodEvent* param1);
    friend void KFileFilterCombo_SuperInitStyleOption(const KFileFilterCombo* self, QStyleOptionComboBox* option);
    friend void KFileFilterCombo_SuperMouseDoubleClickEvent(KFileFilterCombo* self, QMouseEvent* event);
    friend void KFileFilterCombo_SuperMouseMoveEvent(KFileFilterCombo* self, QMouseEvent* event);
    friend void KFileFilterCombo_SuperEnterEvent(KFileFilterCombo* self, QEnterEvent* event);
    friend void KFileFilterCombo_SuperLeaveEvent(KFileFilterCombo* self, QEvent* event);
    friend void KFileFilterCombo_SuperMoveEvent(KFileFilterCombo* self, QMoveEvent* event);
    friend void KFileFilterCombo_SuperCloseEvent(KFileFilterCombo* self, QCloseEvent* event);
    friend void KFileFilterCombo_SuperTabletEvent(KFileFilterCombo* self, QTabletEvent* event);
    friend void KFileFilterCombo_SuperActionEvent(KFileFilterCombo* self, QActionEvent* event);
    friend void KFileFilterCombo_SuperDragEnterEvent(KFileFilterCombo* self, QDragEnterEvent* event);
    friend void KFileFilterCombo_SuperDragMoveEvent(KFileFilterCombo* self, QDragMoveEvent* event);
    friend void KFileFilterCombo_SuperDragLeaveEvent(KFileFilterCombo* self, QDragLeaveEvent* event);
    friend void KFileFilterCombo_SuperDropEvent(KFileFilterCombo* self, QDropEvent* event);
    friend bool KFileFilterCombo_SuperNativeEvent(KFileFilterCombo* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KFileFilterCombo_SuperMetric(const KFileFilterCombo* self, int param1);
    friend void KFileFilterCombo_SuperInitPainter(const KFileFilterCombo* self, QPainter* painter);
    friend QPaintDevice* KFileFilterCombo_SuperRedirected(const KFileFilterCombo* self, QPoint* offset);
    friend QPainter* KFileFilterCombo_SuperSharedPainter(const KFileFilterCombo* self);
    friend bool KFileFilterCombo_SuperFocusNextPrevChild(KFileFilterCombo* self, bool next);
    friend void KFileFilterCombo_SuperTimerEvent(KFileFilterCombo* self, QTimerEvent* event);
    friend void KFileFilterCombo_SuperChildEvent(KFileFilterCombo* self, QChildEvent* event);
    friend void KFileFilterCombo_SuperCustomEvent(KFileFilterCombo* self, QEvent* event);
    friend void KFileFilterCombo_SuperConnectNotify(KFileFilterCombo* self, const QMetaMethod* signal);
    friend void KFileFilterCombo_SuperDisconnectNotify(KFileFilterCombo* self, const QMetaMethod* signal);
    friend void KFileFilterCombo_SuperVirtualHook(KFileFilterCombo* self, int id, void* data);
};

#endif
