#pragma once
#ifndef EXTRAS_KIO_LIBKURLCOMBOBOX_HXX
#define EXTRAS_KIO_LIBKURLCOMBOBOX_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KUrlComboBox
class VirtualKUrlComboBox final : public KUrlComboBox {
  public:
    // Virtual class public types (including callbacks and access types)
    using KUrlComboBox_MetaObject_Callback = QMetaObject* (*)(const KUrlComboBox*);
    using KUrlComboBox_Metacast_Callback = void* (*)(KUrlComboBox*, const char*);
    using KUrlComboBox_Metacall_Callback = int (*)(KUrlComboBox*, int, int, void**);
    using KUrlComboBox_SetCompletionObject_Callback = void (*)(KUrlComboBox*, KCompletion*, bool);
    using KUrlComboBox_MousePressEvent_Callback = void (*)(KUrlComboBox*, QMouseEvent*);
    using KUrlComboBox_MouseMoveEvent_Callback = void (*)(KUrlComboBox*, QMouseEvent*);
    using KUrlComboBox_SetAutoCompletion_Callback = void (*)(KUrlComboBox*, bool);
    using KUrlComboBox_SetLineEdit_Callback = void (*)(KUrlComboBox*, QLineEdit*);
    using KUrlComboBox_MinimumSizeHint_Callback = QSize* (*)(const KUrlComboBox*);
    using KUrlComboBox_SetCompletedText_Callback = void (*)(KUrlComboBox*, const char*);
    using KUrlComboBox_SetCompletedItems_Callback = void (*)(KUrlComboBox*, const char**, bool);
    using KUrlComboBox_MakeCompletion_Callback = void (*)(KUrlComboBox*, const char*);
    using KUrlComboBox_SetModel_Callback = void (*)(KUrlComboBox*, QAbstractItemModel*);
    using KUrlComboBox_SizeHint_Callback = QSize* (*)(const KUrlComboBox*);
    using KUrlComboBox_ShowPopup_Callback = void (*)(KUrlComboBox*);
    using KUrlComboBox_HidePopup_Callback = void (*)(KUrlComboBox*);
    using KUrlComboBox_Event_Callback = bool (*)(KUrlComboBox*, QEvent*);
    using KUrlComboBox_InputMethodQuery_Callback = QVariant* (*)(const KUrlComboBox*, int);
    using KUrlComboBox_FocusInEvent_Callback = void (*)(KUrlComboBox*, QFocusEvent*);
    using KUrlComboBox_FocusOutEvent_Callback = void (*)(KUrlComboBox*, QFocusEvent*);
    using KUrlComboBox_ChangeEvent_Callback = void (*)(KUrlComboBox*, QEvent*);
    using KUrlComboBox_ResizeEvent_Callback = void (*)(KUrlComboBox*, QResizeEvent*);
    using KUrlComboBox_PaintEvent_Callback = void (*)(KUrlComboBox*, QPaintEvent*);
    using KUrlComboBox_ShowEvent_Callback = void (*)(KUrlComboBox*, QShowEvent*);
    using KUrlComboBox_HideEvent_Callback = void (*)(KUrlComboBox*, QHideEvent*);
    using KUrlComboBox_MouseReleaseEvent_Callback = void (*)(KUrlComboBox*, QMouseEvent*);
    using KUrlComboBox_KeyPressEvent_Callback = void (*)(KUrlComboBox*, QKeyEvent*);
    using KUrlComboBox_KeyReleaseEvent_Callback = void (*)(KUrlComboBox*, QKeyEvent*);
    using KUrlComboBox_WheelEvent_Callback = void (*)(KUrlComboBox*, QWheelEvent*);
    using KUrlComboBox_ContextMenuEvent_Callback = void (*)(KUrlComboBox*, QContextMenuEvent*);
    using KUrlComboBox_InputMethodEvent_Callback = void (*)(KUrlComboBox*, QInputMethodEvent*);
    using KUrlComboBox_InitStyleOption_Callback = void (*)(const KUrlComboBox*, QStyleOptionComboBox*);
    using KUrlComboBox_DevType_Callback = int (*)(const KUrlComboBox*);
    using KUrlComboBox_SetVisible_Callback = void (*)(KUrlComboBox*, bool);
    using KUrlComboBox_HeightForWidth_Callback = int (*)(const KUrlComboBox*, int);
    using KUrlComboBox_HasHeightForWidth_Callback = bool (*)(const KUrlComboBox*);
    using KUrlComboBox_PaintEngine_Callback = QPaintEngine* (*)(const KUrlComboBox*);
    using KUrlComboBox_MouseDoubleClickEvent_Callback = void (*)(KUrlComboBox*, QMouseEvent*);
    using KUrlComboBox_EnterEvent_Callback = void (*)(KUrlComboBox*, QEnterEvent*);
    using KUrlComboBox_LeaveEvent_Callback = void (*)(KUrlComboBox*, QEvent*);
    using KUrlComboBox_MoveEvent_Callback = void (*)(KUrlComboBox*, QMoveEvent*);
    using KUrlComboBox_CloseEvent_Callback = void (*)(KUrlComboBox*, QCloseEvent*);
    using KUrlComboBox_TabletEvent_Callback = void (*)(KUrlComboBox*, QTabletEvent*);
    using KUrlComboBox_ActionEvent_Callback = void (*)(KUrlComboBox*, QActionEvent*);
    using KUrlComboBox_DragEnterEvent_Callback = void (*)(KUrlComboBox*, QDragEnterEvent*);
    using KUrlComboBox_DragMoveEvent_Callback = void (*)(KUrlComboBox*, QDragMoveEvent*);
    using KUrlComboBox_DragLeaveEvent_Callback = void (*)(KUrlComboBox*, QDragLeaveEvent*);
    using KUrlComboBox_DropEvent_Callback = void (*)(KUrlComboBox*, QDropEvent*);
    using KUrlComboBox_NativeEvent_Callback = bool (*)(KUrlComboBox*, libqt_string, void*, intptr_t*);
    using KUrlComboBox_Metric_Callback = int (*)(const KUrlComboBox*, int);
    using KUrlComboBox_InitPainter_Callback = void (*)(const KUrlComboBox*, QPainter*);
    using KUrlComboBox_Redirected_Callback = QPaintDevice* (*)(const KUrlComboBox*, QPoint*);
    using KUrlComboBox_SharedPainter_Callback = QPainter* (*)(const KUrlComboBox*);
    using KUrlComboBox_FocusNextPrevChild_Callback = bool (*)(KUrlComboBox*, bool);
    using KUrlComboBox_EventFilter_Callback = bool (*)(KUrlComboBox*, QObject*, QEvent*);
    using KUrlComboBox_TimerEvent_Callback = void (*)(KUrlComboBox*, QTimerEvent*);
    using KUrlComboBox_ChildEvent_Callback = void (*)(KUrlComboBox*, QChildEvent*);
    using KUrlComboBox_CustomEvent_Callback = void (*)(KUrlComboBox*, QEvent*);
    using KUrlComboBox_ConnectNotify_Callback = void (*)(KUrlComboBox*, QMetaMethod*);
    using KUrlComboBox_DisconnectNotify_Callback = void (*)(KUrlComboBox*, QMetaMethod*);
    using KUrlComboBox_SetHandleSignals_Callback = void (*)(KUrlComboBox*, bool);
    using KUrlComboBox_SetCompletionMode_Callback = void (*)(KUrlComboBox*, int);
    using KUrlComboBox_VirtualHook_Callback = void (*)(KUrlComboBox*, int, void*);
    using KUrlComboBox::create;
    using KUrlComboBox::delegate;
    using KUrlComboBox::destroy;
    using KUrlComboBox::focusNextChild;
    using KUrlComboBox::focusPreviousChild;
    using KUrlComboBox::getDecodedMetricF;
    using KUrlComboBox::isSignalConnected;
    using KUrlComboBox::keyBindingMap;
    using KUrlComboBox::receivers;
    using KUrlComboBox::sender;
    using KUrlComboBox::senderSignalIndex;
    using KUrlComboBox::setDelegate;
    using KUrlComboBox::setKeyBindingMap;
    using KUrlComboBox::updateMicroFocus;

    // Instance callback storage
    KUrlComboBox_MetaObject_Callback kurlcombobox_metaobject_callback = nullptr;
    KUrlComboBox_Metacast_Callback kurlcombobox_metacast_callback = nullptr;
    KUrlComboBox_Metacall_Callback kurlcombobox_metacall_callback = nullptr;
    KUrlComboBox_SetCompletionObject_Callback kurlcombobox_setcompletionobject_callback = nullptr;
    KUrlComboBox_MousePressEvent_Callback kurlcombobox_mousepressevent_callback = nullptr;
    KUrlComboBox_MouseMoveEvent_Callback kurlcombobox_mousemoveevent_callback = nullptr;
    KUrlComboBox_SetAutoCompletion_Callback kurlcombobox_setautocompletion_callback = nullptr;
    KUrlComboBox_SetLineEdit_Callback kurlcombobox_setlineedit_callback = nullptr;
    KUrlComboBox_MinimumSizeHint_Callback kurlcombobox_minimumsizehint_callback = nullptr;
    KUrlComboBox_SetCompletedText_Callback kurlcombobox_setcompletedtext_callback = nullptr;
    KUrlComboBox_SetCompletedItems_Callback kurlcombobox_setcompleteditems_callback = nullptr;
    KUrlComboBox_MakeCompletion_Callback kurlcombobox_makecompletion_callback = nullptr;
    KUrlComboBox_SetModel_Callback kurlcombobox_setmodel_callback = nullptr;
    KUrlComboBox_SizeHint_Callback kurlcombobox_sizehint_callback = nullptr;
    KUrlComboBox_ShowPopup_Callback kurlcombobox_showpopup_callback = nullptr;
    KUrlComboBox_HidePopup_Callback kurlcombobox_hidepopup_callback = nullptr;
    KUrlComboBox_Event_Callback kurlcombobox_event_callback = nullptr;
    KUrlComboBox_InputMethodQuery_Callback kurlcombobox_inputmethodquery_callback = nullptr;
    KUrlComboBox_FocusInEvent_Callback kurlcombobox_focusinevent_callback = nullptr;
    KUrlComboBox_FocusOutEvent_Callback kurlcombobox_focusoutevent_callback = nullptr;
    KUrlComboBox_ChangeEvent_Callback kurlcombobox_changeevent_callback = nullptr;
    KUrlComboBox_ResizeEvent_Callback kurlcombobox_resizeevent_callback = nullptr;
    KUrlComboBox_PaintEvent_Callback kurlcombobox_paintevent_callback = nullptr;
    KUrlComboBox_ShowEvent_Callback kurlcombobox_showevent_callback = nullptr;
    KUrlComboBox_HideEvent_Callback kurlcombobox_hideevent_callback = nullptr;
    KUrlComboBox_MouseReleaseEvent_Callback kurlcombobox_mousereleaseevent_callback = nullptr;
    KUrlComboBox_KeyPressEvent_Callback kurlcombobox_keypressevent_callback = nullptr;
    KUrlComboBox_KeyReleaseEvent_Callback kurlcombobox_keyreleaseevent_callback = nullptr;
    KUrlComboBox_WheelEvent_Callback kurlcombobox_wheelevent_callback = nullptr;
    KUrlComboBox_ContextMenuEvent_Callback kurlcombobox_contextmenuevent_callback = nullptr;
    KUrlComboBox_InputMethodEvent_Callback kurlcombobox_inputmethodevent_callback = nullptr;
    KUrlComboBox_InitStyleOption_Callback kurlcombobox_initstyleoption_callback = nullptr;
    KUrlComboBox_DevType_Callback kurlcombobox_devtype_callback = nullptr;
    KUrlComboBox_SetVisible_Callback kurlcombobox_setvisible_callback = nullptr;
    KUrlComboBox_HeightForWidth_Callback kurlcombobox_heightforwidth_callback = nullptr;
    KUrlComboBox_HasHeightForWidth_Callback kurlcombobox_hasheightforwidth_callback = nullptr;
    KUrlComboBox_PaintEngine_Callback kurlcombobox_paintengine_callback = nullptr;
    KUrlComboBox_MouseDoubleClickEvent_Callback kurlcombobox_mousedoubleclickevent_callback = nullptr;
    KUrlComboBox_EnterEvent_Callback kurlcombobox_enterevent_callback = nullptr;
    KUrlComboBox_LeaveEvent_Callback kurlcombobox_leaveevent_callback = nullptr;
    KUrlComboBox_MoveEvent_Callback kurlcombobox_moveevent_callback = nullptr;
    KUrlComboBox_CloseEvent_Callback kurlcombobox_closeevent_callback = nullptr;
    KUrlComboBox_TabletEvent_Callback kurlcombobox_tabletevent_callback = nullptr;
    KUrlComboBox_ActionEvent_Callback kurlcombobox_actionevent_callback = nullptr;
    KUrlComboBox_DragEnterEvent_Callback kurlcombobox_dragenterevent_callback = nullptr;
    KUrlComboBox_DragMoveEvent_Callback kurlcombobox_dragmoveevent_callback = nullptr;
    KUrlComboBox_DragLeaveEvent_Callback kurlcombobox_dragleaveevent_callback = nullptr;
    KUrlComboBox_DropEvent_Callback kurlcombobox_dropevent_callback = nullptr;
    KUrlComboBox_NativeEvent_Callback kurlcombobox_nativeevent_callback = nullptr;
    KUrlComboBox_Metric_Callback kurlcombobox_metric_callback = nullptr;
    KUrlComboBox_InitPainter_Callback kurlcombobox_initpainter_callback = nullptr;
    KUrlComboBox_Redirected_Callback kurlcombobox_redirected_callback = nullptr;
    KUrlComboBox_SharedPainter_Callback kurlcombobox_sharedpainter_callback = nullptr;
    KUrlComboBox_FocusNextPrevChild_Callback kurlcombobox_focusnextprevchild_callback = nullptr;
    KUrlComboBox_EventFilter_Callback kurlcombobox_eventfilter_callback = nullptr;
    KUrlComboBox_TimerEvent_Callback kurlcombobox_timerevent_callback = nullptr;
    KUrlComboBox_ChildEvent_Callback kurlcombobox_childevent_callback = nullptr;
    KUrlComboBox_CustomEvent_Callback kurlcombobox_customevent_callback = nullptr;
    KUrlComboBox_ConnectNotify_Callback kurlcombobox_connectnotify_callback = nullptr;
    KUrlComboBox_DisconnectNotify_Callback kurlcombobox_disconnectnotify_callback = nullptr;
    KUrlComboBox_SetHandleSignals_Callback kurlcombobox_sethandlesignals_callback = nullptr;
    KUrlComboBox_SetCompletionMode_Callback kurlcombobox_setcompletionmode_callback = nullptr;
    KUrlComboBox_VirtualHook_Callback kurlcombobox_virtualhook_callback = nullptr;

    // Access struct
    struct Base : KUrlComboBox {
        using KUrlComboBox::actionEvent;
        using KUrlComboBox::changeEvent;
        using KUrlComboBox::childEvent;
        using KUrlComboBox::closeEvent;
        using KUrlComboBox::connectNotify;
        using KUrlComboBox::contextMenuEvent;
        using KUrlComboBox::customEvent;
        using KUrlComboBox::disconnectNotify;
        using KUrlComboBox::dragEnterEvent;
        using KUrlComboBox::dragLeaveEvent;
        using KUrlComboBox::dragMoveEvent;
        using KUrlComboBox::dropEvent;
        using KUrlComboBox::enterEvent;
        using KUrlComboBox::focusInEvent;
        using KUrlComboBox::focusNextPrevChild;
        using KUrlComboBox::focusOutEvent;
        using KUrlComboBox::hideEvent;
        using KUrlComboBox::initPainter;
        using KUrlComboBox::initStyleOption;
        using KUrlComboBox::inputMethodEvent;
        using KUrlComboBox::keyPressEvent;
        using KUrlComboBox::keyReleaseEvent;
        using KUrlComboBox::leaveEvent;
        using KUrlComboBox::makeCompletion;
        using KUrlComboBox::metric;
        using KUrlComboBox::mouseDoubleClickEvent;
        using KUrlComboBox::mouseMoveEvent;
        using KUrlComboBox::mousePressEvent;
        using KUrlComboBox::mouseReleaseEvent;
        using KUrlComboBox::moveEvent;
        using KUrlComboBox::nativeEvent;
        using KUrlComboBox::paintEvent;
        using KUrlComboBox::redirected;
        using KUrlComboBox::resizeEvent;
        using KUrlComboBox::sharedPainter;
        using KUrlComboBox::showEvent;
        using KUrlComboBox::tabletEvent;
        using KUrlComboBox::timerEvent;
        using KUrlComboBox::virtual_hook;
        using KUrlComboBox::wheelEvent;
    };

    VirtualKUrlComboBox(KUrlComboBox::Mode mode) : KUrlComboBox(mode) {};
    VirtualKUrlComboBox(KUrlComboBox::Mode mode, bool rw) : KUrlComboBox(mode, rw) {};
    VirtualKUrlComboBox(KUrlComboBox::Mode mode, QWidget* parent) : KUrlComboBox(mode, parent) {};
    VirtualKUrlComboBox(KUrlComboBox::Mode mode, bool rw, QWidget* parent) : KUrlComboBox(mode, rw, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kurlcombobox_metaobject_callback) {
            QMetaObject* callback_ret = kurlcombobox_metaobject_callback(this);
            return callback_ret;
        }
        return KUrlComboBox::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kurlcombobox_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kurlcombobox_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KUrlComboBox::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kurlcombobox_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kurlcombobox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KUrlComboBox::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionObject(KCompletion* compObj, bool hsig) override {
        if (kurlcombobox_setcompletionobject_callback) {
            KCompletion* cbval1 = compObj;
            bool cbval2 = hsig;
            kurlcombobox_setcompletionobject_callback(this, cbval1, cbval2);
            return;
        }
        KUrlComboBox::setCompletionObject(compObj, hsig);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kurlcombobox_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kurlcombobox_mousepressevent_callback(this, cbval1);
            return;
        }
        KUrlComboBox::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kurlcombobox_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kurlcombobox_mousemoveevent_callback(this, cbval1);
            return;
        }
        KUrlComboBox::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoCompletion(bool autocomplete) override {
        if (kurlcombobox_setautocompletion_callback) {
            bool cbval1 = autocomplete;
            kurlcombobox_setautocompletion_callback(this, cbval1);
            return;
        }
        KUrlComboBox::setAutoCompletion(autocomplete);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLineEdit(QLineEdit* lineEdit) override {
        if (kurlcombobox_setlineedit_callback) {
            QLineEdit* cbval1 = lineEdit;
            kurlcombobox_setlineedit_callback(this, cbval1);
            return;
        }
        KUrlComboBox::setLineEdit(lineEdit);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kurlcombobox_minimumsizehint_callback) {
            QSize* callback_ret = kurlcombobox_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KUrlComboBox::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletedText(const QString& completedText) override {
        if (kurlcombobox_setcompletedtext_callback) {
            const auto completedText_ret = completedText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray completedText_b = completedText_ret.toUtf8();
            auto completedText_str_len = completedText_b.length();
            const char* completedText_str = static_cast<const char*>(malloc(completedText_str_len + 1));
            memcpy((void*)completedText_str, completedText_b.data(), completedText_str_len);
            ((char*)completedText_str)[completedText_str_len] = '\0';
            const char* cbval1 = completedText_str;
            kurlcombobox_setcompletedtext_callback(this, cbval1);
            libqt_free(completedText_str);
            return;
        }
        KUrlComboBox::setCompletedText(completedText);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletedItems(const QList<QString>& items, bool autoSuggest) override {
        if (kurlcombobox_setcompleteditems_callback) {
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
            kurlcombobox_setcompleteditems_callback(this, cbval1, cbval2);
            libqt_free(items_arr);
            return;
        }
        KUrlComboBox::setCompletedItems(items, autoSuggest);
    }

    // Virtual method for C ABI access and custom callback
    virtual void makeCompletion(const QString& param1) override {
        if (kurlcombobox_makecompletion_callback) {
            const auto param1_ret = param1;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray param1_b = param1_ret.toUtf8();
            auto param1_str_len = param1_b.length();
            const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
            memcpy((void*)param1_str, param1_b.data(), param1_str_len);
            ((char*)param1_str)[param1_str_len] = '\0';
            const char* cbval1 = param1_str;
            kurlcombobox_makecompletion_callback(this, cbval1);
            libqt_free(param1_str);
            return;
        }
        KUrlComboBox::makeCompletion(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (kurlcombobox_setmodel_callback) {
            QAbstractItemModel* cbval1 = model;
            kurlcombobox_setmodel_callback(this, cbval1);
            return;
        }
        KUrlComboBox::setModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kurlcombobox_sizehint_callback) {
            QSize* callback_ret = kurlcombobox_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KUrlComboBox::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPopup() override {
        if (kurlcombobox_showpopup_callback) {
            kurlcombobox_showpopup_callback(this);
            return;
        }
        KUrlComboBox::showPopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual void hidePopup() override {
        if (kurlcombobox_hidepopup_callback) {
            kurlcombobox_hidepopup_callback(this);
            return;
        }
        KUrlComboBox::hidePopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kurlcombobox_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kurlcombobox_event_callback(this, cbval1);
            return callback_ret;
        }
        return KUrlComboBox::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kurlcombobox_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kurlcombobox_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KUrlComboBox::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (kurlcombobox_focusinevent_callback) {
            QFocusEvent* cbval1 = e;
            kurlcombobox_focusinevent_callback(this, cbval1);
            return;
        }
        KUrlComboBox::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (kurlcombobox_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            kurlcombobox_focusoutevent_callback(this, cbval1);
            return;
        }
        KUrlComboBox::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (kurlcombobox_changeevent_callback) {
            QEvent* cbval1 = e;
            kurlcombobox_changeevent_callback(this, cbval1);
            return;
        }
        KUrlComboBox::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (kurlcombobox_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            kurlcombobox_resizeevent_callback(this, cbval1);
            return;
        }
        KUrlComboBox::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (kurlcombobox_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            kurlcombobox_paintevent_callback(this, cbval1);
            return;
        }
        KUrlComboBox::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (kurlcombobox_showevent_callback) {
            QShowEvent* cbval1 = e;
            kurlcombobox_showevent_callback(this, cbval1);
            return;
        }
        KUrlComboBox::showEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* e) override {
        if (kurlcombobox_hideevent_callback) {
            QHideEvent* cbval1 = e;
            kurlcombobox_hideevent_callback(this, cbval1);
            return;
        }
        KUrlComboBox::hideEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (kurlcombobox_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            kurlcombobox_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KUrlComboBox::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (kurlcombobox_keypressevent_callback) {
            QKeyEvent* cbval1 = e;
            kurlcombobox_keypressevent_callback(this, cbval1);
            return;
        }
        KUrlComboBox::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (kurlcombobox_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            kurlcombobox_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KUrlComboBox::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (kurlcombobox_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            kurlcombobox_wheelevent_callback(this, cbval1);
            return;
        }
        KUrlComboBox::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (kurlcombobox_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = e;
            kurlcombobox_contextmenuevent_callback(this, cbval1);
            return;
        }
        KUrlComboBox::contextMenuEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kurlcombobox_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kurlcombobox_inputmethodevent_callback(this, cbval1);
            return;
        }
        KUrlComboBox::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionComboBox* option) const override {
        if (kurlcombobox_initstyleoption_callback) {
            QStyleOptionComboBox* cbval1 = option;
            kurlcombobox_initstyleoption_callback(this, cbval1);
            return;
        }
        KUrlComboBox::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kurlcombobox_devtype_callback) {
            int callback_ret = kurlcombobox_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KUrlComboBox::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kurlcombobox_setvisible_callback) {
            bool cbval1 = visible;
            kurlcombobox_setvisible_callback(this, cbval1);
            return;
        }
        KUrlComboBox::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kurlcombobox_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kurlcombobox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KUrlComboBox::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kurlcombobox_hasheightforwidth_callback) {
            bool callback_ret = kurlcombobox_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KUrlComboBox::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kurlcombobox_paintengine_callback) {
            QPaintEngine* callback_ret = kurlcombobox_paintengine_callback(this);
            return callback_ret;
        }
        return KUrlComboBox::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kurlcombobox_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kurlcombobox_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KUrlComboBox::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kurlcombobox_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kurlcombobox_enterevent_callback(this, cbval1);
            return;
        }
        KUrlComboBox::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kurlcombobox_leaveevent_callback) {
            QEvent* cbval1 = event;
            kurlcombobox_leaveevent_callback(this, cbval1);
            return;
        }
        KUrlComboBox::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kurlcombobox_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kurlcombobox_moveevent_callback(this, cbval1);
            return;
        }
        KUrlComboBox::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kurlcombobox_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kurlcombobox_closeevent_callback(this, cbval1);
            return;
        }
        KUrlComboBox::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kurlcombobox_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kurlcombobox_tabletevent_callback(this, cbval1);
            return;
        }
        KUrlComboBox::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kurlcombobox_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kurlcombobox_actionevent_callback(this, cbval1);
            return;
        }
        KUrlComboBox::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kurlcombobox_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kurlcombobox_dragenterevent_callback(this, cbval1);
            return;
        }
        KUrlComboBox::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kurlcombobox_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kurlcombobox_dragmoveevent_callback(this, cbval1);
            return;
        }
        KUrlComboBox::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kurlcombobox_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kurlcombobox_dragleaveevent_callback(this, cbval1);
            return;
        }
        KUrlComboBox::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kurlcombobox_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kurlcombobox_dropevent_callback(this, cbval1);
            return;
        }
        KUrlComboBox::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kurlcombobox_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kurlcombobox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KUrlComboBox::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kurlcombobox_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kurlcombobox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KUrlComboBox::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kurlcombobox_initpainter_callback) {
            QPainter* cbval1 = painter;
            kurlcombobox_initpainter_callback(this, cbval1);
            return;
        }
        KUrlComboBox::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kurlcombobox_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kurlcombobox_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KUrlComboBox::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kurlcombobox_sharedpainter_callback) {
            QPainter* callback_ret = kurlcombobox_sharedpainter_callback(this);
            return callback_ret;
        }
        return KUrlComboBox::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kurlcombobox_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kurlcombobox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KUrlComboBox::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kurlcombobox_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kurlcombobox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KUrlComboBox::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kurlcombobox_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kurlcombobox_timerevent_callback(this, cbval1);
            return;
        }
        KUrlComboBox::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kurlcombobox_childevent_callback) {
            QChildEvent* cbval1 = event;
            kurlcombobox_childevent_callback(this, cbval1);
            return;
        }
        KUrlComboBox::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kurlcombobox_customevent_callback) {
            QEvent* cbval1 = event;
            kurlcombobox_customevent_callback(this, cbval1);
            return;
        }
        KUrlComboBox::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kurlcombobox_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kurlcombobox_connectnotify_callback(this, cbval1);
            return;
        }
        KUrlComboBox::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kurlcombobox_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kurlcombobox_disconnectnotify_callback(this, cbval1);
            return;
        }
        KUrlComboBox::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setHandleSignals(bool handle) override {
        if (kurlcombobox_sethandlesignals_callback) {
            bool cbval1 = handle;
            kurlcombobox_sethandlesignals_callback(this, cbval1);
            return;
        }
        KUrlComboBox::setHandleSignals(handle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionMode(KCompletion::CompletionMode mode) override {
        if (kurlcombobox_setcompletionmode_callback) {
            int cbval1 = static_cast<int>(mode);
            kurlcombobox_setcompletionmode_callback(this, cbval1);
            return;
        }
        KUrlComboBox::setCompletionMode(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kurlcombobox_virtualhook_callback) {
            int cbval1 = id;
            void* cbval2 = data;
            kurlcombobox_virtualhook_callback(this, cbval1, cbval2);
            return;
        }
        KUrlComboBox::virtual_hook(id, data);
    }

    // Friend functions
    friend void KUrlComboBox_SuperMousePressEvent(KUrlComboBox* self, QMouseEvent* event);
    friend void KUrlComboBox_SuperMouseMoveEvent(KUrlComboBox* self, QMouseEvent* event);
    friend void KUrlComboBox_SuperMakeCompletion(KUrlComboBox* self, const libqt_string param1);
    friend void KUrlComboBox_SuperFocusInEvent(KUrlComboBox* self, QFocusEvent* e);
    friend void KUrlComboBox_SuperFocusOutEvent(KUrlComboBox* self, QFocusEvent* e);
    friend void KUrlComboBox_SuperChangeEvent(KUrlComboBox* self, QEvent* e);
    friend void KUrlComboBox_SuperResizeEvent(KUrlComboBox* self, QResizeEvent* e);
    friend void KUrlComboBox_SuperPaintEvent(KUrlComboBox* self, QPaintEvent* e);
    friend void KUrlComboBox_SuperShowEvent(KUrlComboBox* self, QShowEvent* e);
    friend void KUrlComboBox_SuperHideEvent(KUrlComboBox* self, QHideEvent* e);
    friend void KUrlComboBox_SuperMouseReleaseEvent(KUrlComboBox* self, QMouseEvent* e);
    friend void KUrlComboBox_SuperKeyPressEvent(KUrlComboBox* self, QKeyEvent* e);
    friend void KUrlComboBox_SuperKeyReleaseEvent(KUrlComboBox* self, QKeyEvent* e);
    friend void KUrlComboBox_SuperWheelEvent(KUrlComboBox* self, QWheelEvent* e);
    friend void KUrlComboBox_SuperContextMenuEvent(KUrlComboBox* self, QContextMenuEvent* e);
    friend void KUrlComboBox_SuperInputMethodEvent(KUrlComboBox* self, QInputMethodEvent* param1);
    friend void KUrlComboBox_SuperInitStyleOption(const KUrlComboBox* self, QStyleOptionComboBox* option);
    friend void KUrlComboBox_SuperMouseDoubleClickEvent(KUrlComboBox* self, QMouseEvent* event);
    friend void KUrlComboBox_SuperEnterEvent(KUrlComboBox* self, QEnterEvent* event);
    friend void KUrlComboBox_SuperLeaveEvent(KUrlComboBox* self, QEvent* event);
    friend void KUrlComboBox_SuperMoveEvent(KUrlComboBox* self, QMoveEvent* event);
    friend void KUrlComboBox_SuperCloseEvent(KUrlComboBox* self, QCloseEvent* event);
    friend void KUrlComboBox_SuperTabletEvent(KUrlComboBox* self, QTabletEvent* event);
    friend void KUrlComboBox_SuperActionEvent(KUrlComboBox* self, QActionEvent* event);
    friend void KUrlComboBox_SuperDragEnterEvent(KUrlComboBox* self, QDragEnterEvent* event);
    friend void KUrlComboBox_SuperDragMoveEvent(KUrlComboBox* self, QDragMoveEvent* event);
    friend void KUrlComboBox_SuperDragLeaveEvent(KUrlComboBox* self, QDragLeaveEvent* event);
    friend void KUrlComboBox_SuperDropEvent(KUrlComboBox* self, QDropEvent* event);
    friend bool KUrlComboBox_SuperNativeEvent(KUrlComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KUrlComboBox_SuperMetric(const KUrlComboBox* self, int param1);
    friend void KUrlComboBox_SuperInitPainter(const KUrlComboBox* self, QPainter* painter);
    friend QPaintDevice* KUrlComboBox_SuperRedirected(const KUrlComboBox* self, QPoint* offset);
    friend QPainter* KUrlComboBox_SuperSharedPainter(const KUrlComboBox* self);
    friend bool KUrlComboBox_SuperFocusNextPrevChild(KUrlComboBox* self, bool next);
    friend void KUrlComboBox_SuperTimerEvent(KUrlComboBox* self, QTimerEvent* event);
    friend void KUrlComboBox_SuperChildEvent(KUrlComboBox* self, QChildEvent* event);
    friend void KUrlComboBox_SuperCustomEvent(KUrlComboBox* self, QEvent* event);
    friend void KUrlComboBox_SuperConnectNotify(KUrlComboBox* self, const QMetaMethod* signal);
    friend void KUrlComboBox_SuperDisconnectNotify(KUrlComboBox* self, const QMetaMethod* signal);
    friend void KUrlComboBox_SuperVirtualHook(KUrlComboBox* self, int id, void* data);
};

#endif
