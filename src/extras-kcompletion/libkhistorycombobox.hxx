#pragma once
#ifndef EXTRAS_KCOMPLETION_LIBKHISTORYCOMBOBOX_HXX
#define EXTRAS_KCOMPLETION_LIBKHISTORYCOMBOBOX_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KHistoryComboBox
class VirtualKHistoryComboBox final : public KHistoryComboBox {
  public:
    // Virtual class public types (including callbacks and access types)
    using KHistoryComboBox_MetaObject_Callback = QMetaObject* (*)(const KHistoryComboBox*);
    using KHistoryComboBox_Metacast_Callback = void* (*)(KHistoryComboBox*, const char*);
    using KHistoryComboBox_Metacall_Callback = int (*)(KHistoryComboBox*, int, int, void**);
    using KHistoryComboBox_KeyPressEvent_Callback = void (*)(KHistoryComboBox*, QKeyEvent*);
    using KHistoryComboBox_WheelEvent_Callback = void (*)(KHistoryComboBox*, QWheelEvent*);
    using KHistoryComboBox_SetAutoCompletion_Callback = void (*)(KHistoryComboBox*, bool);
    using KHistoryComboBox_SetLineEdit_Callback = void (*)(KHistoryComboBox*, QLineEdit*);
    using KHistoryComboBox_MinimumSizeHint_Callback = QSize* (*)(const KHistoryComboBox*);
    using KHistoryComboBox_SetCompletedText_Callback = void (*)(KHistoryComboBox*, const char*);
    using KHistoryComboBox_SetCompletedItems_Callback = void (*)(KHistoryComboBox*, const char**, bool);
    using KHistoryComboBox_MakeCompletion_Callback = void (*)(KHistoryComboBox*, const char*);
    using KHistoryComboBox_SetModel_Callback = void (*)(KHistoryComboBox*, QAbstractItemModel*);
    using KHistoryComboBox_SizeHint_Callback = QSize* (*)(const KHistoryComboBox*);
    using KHistoryComboBox_ShowPopup_Callback = void (*)(KHistoryComboBox*);
    using KHistoryComboBox_HidePopup_Callback = void (*)(KHistoryComboBox*);
    using KHistoryComboBox_Event_Callback = bool (*)(KHistoryComboBox*, QEvent*);
    using KHistoryComboBox_InputMethodQuery_Callback = QVariant* (*)(const KHistoryComboBox*, int);
    using KHistoryComboBox_FocusInEvent_Callback = void (*)(KHistoryComboBox*, QFocusEvent*);
    using KHistoryComboBox_FocusOutEvent_Callback = void (*)(KHistoryComboBox*, QFocusEvent*);
    using KHistoryComboBox_ChangeEvent_Callback = void (*)(KHistoryComboBox*, QEvent*);
    using KHistoryComboBox_ResizeEvent_Callback = void (*)(KHistoryComboBox*, QResizeEvent*);
    using KHistoryComboBox_PaintEvent_Callback = void (*)(KHistoryComboBox*, QPaintEvent*);
    using KHistoryComboBox_ShowEvent_Callback = void (*)(KHistoryComboBox*, QShowEvent*);
    using KHistoryComboBox_HideEvent_Callback = void (*)(KHistoryComboBox*, QHideEvent*);
    using KHistoryComboBox_MousePressEvent_Callback = void (*)(KHistoryComboBox*, QMouseEvent*);
    using KHistoryComboBox_MouseReleaseEvent_Callback = void (*)(KHistoryComboBox*, QMouseEvent*);
    using KHistoryComboBox_KeyReleaseEvent_Callback = void (*)(KHistoryComboBox*, QKeyEvent*);
    using KHistoryComboBox_ContextMenuEvent_Callback = void (*)(KHistoryComboBox*, QContextMenuEvent*);
    using KHistoryComboBox_InputMethodEvent_Callback = void (*)(KHistoryComboBox*, QInputMethodEvent*);
    using KHistoryComboBox_InitStyleOption_Callback = void (*)(const KHistoryComboBox*, QStyleOptionComboBox*);
    using KHistoryComboBox_DevType_Callback = int (*)(const KHistoryComboBox*);
    using KHistoryComboBox_SetVisible_Callback = void (*)(KHistoryComboBox*, bool);
    using KHistoryComboBox_HeightForWidth_Callback = int (*)(const KHistoryComboBox*, int);
    using KHistoryComboBox_HasHeightForWidth_Callback = bool (*)(const KHistoryComboBox*);
    using KHistoryComboBox_PaintEngine_Callback = QPaintEngine* (*)(const KHistoryComboBox*);
    using KHistoryComboBox_MouseDoubleClickEvent_Callback = void (*)(KHistoryComboBox*, QMouseEvent*);
    using KHistoryComboBox_MouseMoveEvent_Callback = void (*)(KHistoryComboBox*, QMouseEvent*);
    using KHistoryComboBox_EnterEvent_Callback = void (*)(KHistoryComboBox*, QEnterEvent*);
    using KHistoryComboBox_LeaveEvent_Callback = void (*)(KHistoryComboBox*, QEvent*);
    using KHistoryComboBox_MoveEvent_Callback = void (*)(KHistoryComboBox*, QMoveEvent*);
    using KHistoryComboBox_CloseEvent_Callback = void (*)(KHistoryComboBox*, QCloseEvent*);
    using KHistoryComboBox_TabletEvent_Callback = void (*)(KHistoryComboBox*, QTabletEvent*);
    using KHistoryComboBox_ActionEvent_Callback = void (*)(KHistoryComboBox*, QActionEvent*);
    using KHistoryComboBox_DragEnterEvent_Callback = void (*)(KHistoryComboBox*, QDragEnterEvent*);
    using KHistoryComboBox_DragMoveEvent_Callback = void (*)(KHistoryComboBox*, QDragMoveEvent*);
    using KHistoryComboBox_DragLeaveEvent_Callback = void (*)(KHistoryComboBox*, QDragLeaveEvent*);
    using KHistoryComboBox_DropEvent_Callback = void (*)(KHistoryComboBox*, QDropEvent*);
    using KHistoryComboBox_NativeEvent_Callback = bool (*)(KHistoryComboBox*, libqt_string, void*, intptr_t*);
    using KHistoryComboBox_Metric_Callback = int (*)(const KHistoryComboBox*, int);
    using KHistoryComboBox_InitPainter_Callback = void (*)(const KHistoryComboBox*, QPainter*);
    using KHistoryComboBox_Redirected_Callback = QPaintDevice* (*)(const KHistoryComboBox*, QPoint*);
    using KHistoryComboBox_SharedPainter_Callback = QPainter* (*)(const KHistoryComboBox*);
    using KHistoryComboBox_FocusNextPrevChild_Callback = bool (*)(KHistoryComboBox*, bool);
    using KHistoryComboBox_EventFilter_Callback = bool (*)(KHistoryComboBox*, QObject*, QEvent*);
    using KHistoryComboBox_TimerEvent_Callback = void (*)(KHistoryComboBox*, QTimerEvent*);
    using KHistoryComboBox_ChildEvent_Callback = void (*)(KHistoryComboBox*, QChildEvent*);
    using KHistoryComboBox_CustomEvent_Callback = void (*)(KHistoryComboBox*, QEvent*);
    using KHistoryComboBox_ConnectNotify_Callback = void (*)(KHistoryComboBox*, QMetaMethod*);
    using KHistoryComboBox_DisconnectNotify_Callback = void (*)(KHistoryComboBox*, QMetaMethod*);
    using KHistoryComboBox_SetCompletionObject_Callback = void (*)(KHistoryComboBox*, KCompletion*, bool);
    using KHistoryComboBox_SetHandleSignals_Callback = void (*)(KHistoryComboBox*, bool);
    using KHistoryComboBox_SetCompletionMode_Callback = void (*)(KHistoryComboBox*, int);
    using KHistoryComboBox_VirtualHook_Callback = void (*)(KHistoryComboBox*, int, void*);
    using KHistoryComboBox::create;
    using KHistoryComboBox::delegate;
    using KHistoryComboBox::destroy;
    using KHistoryComboBox::focusNextChild;
    using KHistoryComboBox::focusPreviousChild;
    using KHistoryComboBox::getDecodedMetricF;
    using KHistoryComboBox::insertItems;
    using KHistoryComboBox::isSignalConnected;
    using KHistoryComboBox::keyBindingMap;
    using KHistoryComboBox::receivers;
    using KHistoryComboBox::sender;
    using KHistoryComboBox::senderSignalIndex;
    using KHistoryComboBox::setDelegate;
    using KHistoryComboBox::setKeyBindingMap;
    using KHistoryComboBox::updateMicroFocus;
    using KHistoryComboBox::useCompletion;

    // Instance callback storage
    KHistoryComboBox_MetaObject_Callback khistorycombobox_metaobject_callback = nullptr;
    KHistoryComboBox_Metacast_Callback khistorycombobox_metacast_callback = nullptr;
    KHistoryComboBox_Metacall_Callback khistorycombobox_metacall_callback = nullptr;
    KHistoryComboBox_KeyPressEvent_Callback khistorycombobox_keypressevent_callback = nullptr;
    KHistoryComboBox_WheelEvent_Callback khistorycombobox_wheelevent_callback = nullptr;
    KHistoryComboBox_SetAutoCompletion_Callback khistorycombobox_setautocompletion_callback = nullptr;
    KHistoryComboBox_SetLineEdit_Callback khistorycombobox_setlineedit_callback = nullptr;
    KHistoryComboBox_MinimumSizeHint_Callback khistorycombobox_minimumsizehint_callback = nullptr;
    KHistoryComboBox_SetCompletedText_Callback khistorycombobox_setcompletedtext_callback = nullptr;
    KHistoryComboBox_SetCompletedItems_Callback khistorycombobox_setcompleteditems_callback = nullptr;
    KHistoryComboBox_MakeCompletion_Callback khistorycombobox_makecompletion_callback = nullptr;
    KHistoryComboBox_SetModel_Callback khistorycombobox_setmodel_callback = nullptr;
    KHistoryComboBox_SizeHint_Callback khistorycombobox_sizehint_callback = nullptr;
    KHistoryComboBox_ShowPopup_Callback khistorycombobox_showpopup_callback = nullptr;
    KHistoryComboBox_HidePopup_Callback khistorycombobox_hidepopup_callback = nullptr;
    KHistoryComboBox_Event_Callback khistorycombobox_event_callback = nullptr;
    KHistoryComboBox_InputMethodQuery_Callback khistorycombobox_inputmethodquery_callback = nullptr;
    KHistoryComboBox_FocusInEvent_Callback khistorycombobox_focusinevent_callback = nullptr;
    KHistoryComboBox_FocusOutEvent_Callback khistorycombobox_focusoutevent_callback = nullptr;
    KHistoryComboBox_ChangeEvent_Callback khistorycombobox_changeevent_callback = nullptr;
    KHistoryComboBox_ResizeEvent_Callback khistorycombobox_resizeevent_callback = nullptr;
    KHistoryComboBox_PaintEvent_Callback khistorycombobox_paintevent_callback = nullptr;
    KHistoryComboBox_ShowEvent_Callback khistorycombobox_showevent_callback = nullptr;
    KHistoryComboBox_HideEvent_Callback khistorycombobox_hideevent_callback = nullptr;
    KHistoryComboBox_MousePressEvent_Callback khistorycombobox_mousepressevent_callback = nullptr;
    KHistoryComboBox_MouseReleaseEvent_Callback khistorycombobox_mousereleaseevent_callback = nullptr;
    KHistoryComboBox_KeyReleaseEvent_Callback khistorycombobox_keyreleaseevent_callback = nullptr;
    KHistoryComboBox_ContextMenuEvent_Callback khistorycombobox_contextmenuevent_callback = nullptr;
    KHistoryComboBox_InputMethodEvent_Callback khistorycombobox_inputmethodevent_callback = nullptr;
    KHistoryComboBox_InitStyleOption_Callback khistorycombobox_initstyleoption_callback = nullptr;
    KHistoryComboBox_DevType_Callback khistorycombobox_devtype_callback = nullptr;
    KHistoryComboBox_SetVisible_Callback khistorycombobox_setvisible_callback = nullptr;
    KHistoryComboBox_HeightForWidth_Callback khistorycombobox_heightforwidth_callback = nullptr;
    KHistoryComboBox_HasHeightForWidth_Callback khistorycombobox_hasheightforwidth_callback = nullptr;
    KHistoryComboBox_PaintEngine_Callback khistorycombobox_paintengine_callback = nullptr;
    KHistoryComboBox_MouseDoubleClickEvent_Callback khistorycombobox_mousedoubleclickevent_callback = nullptr;
    KHistoryComboBox_MouseMoveEvent_Callback khistorycombobox_mousemoveevent_callback = nullptr;
    KHistoryComboBox_EnterEvent_Callback khistorycombobox_enterevent_callback = nullptr;
    KHistoryComboBox_LeaveEvent_Callback khistorycombobox_leaveevent_callback = nullptr;
    KHistoryComboBox_MoveEvent_Callback khistorycombobox_moveevent_callback = nullptr;
    KHistoryComboBox_CloseEvent_Callback khistorycombobox_closeevent_callback = nullptr;
    KHistoryComboBox_TabletEvent_Callback khistorycombobox_tabletevent_callback = nullptr;
    KHistoryComboBox_ActionEvent_Callback khistorycombobox_actionevent_callback = nullptr;
    KHistoryComboBox_DragEnterEvent_Callback khistorycombobox_dragenterevent_callback = nullptr;
    KHistoryComboBox_DragMoveEvent_Callback khistorycombobox_dragmoveevent_callback = nullptr;
    KHistoryComboBox_DragLeaveEvent_Callback khistorycombobox_dragleaveevent_callback = nullptr;
    KHistoryComboBox_DropEvent_Callback khistorycombobox_dropevent_callback = nullptr;
    KHistoryComboBox_NativeEvent_Callback khistorycombobox_nativeevent_callback = nullptr;
    KHistoryComboBox_Metric_Callback khistorycombobox_metric_callback = nullptr;
    KHistoryComboBox_InitPainter_Callback khistorycombobox_initpainter_callback = nullptr;
    KHistoryComboBox_Redirected_Callback khistorycombobox_redirected_callback = nullptr;
    KHistoryComboBox_SharedPainter_Callback khistorycombobox_sharedpainter_callback = nullptr;
    KHistoryComboBox_FocusNextPrevChild_Callback khistorycombobox_focusnextprevchild_callback = nullptr;
    KHistoryComboBox_EventFilter_Callback khistorycombobox_eventfilter_callback = nullptr;
    KHistoryComboBox_TimerEvent_Callback khistorycombobox_timerevent_callback = nullptr;
    KHistoryComboBox_ChildEvent_Callback khistorycombobox_childevent_callback = nullptr;
    KHistoryComboBox_CustomEvent_Callback khistorycombobox_customevent_callback = nullptr;
    KHistoryComboBox_ConnectNotify_Callback khistorycombobox_connectnotify_callback = nullptr;
    KHistoryComboBox_DisconnectNotify_Callback khistorycombobox_disconnectnotify_callback = nullptr;
    KHistoryComboBox_SetCompletionObject_Callback khistorycombobox_setcompletionobject_callback = nullptr;
    KHistoryComboBox_SetHandleSignals_Callback khistorycombobox_sethandlesignals_callback = nullptr;
    KHistoryComboBox_SetCompletionMode_Callback khistorycombobox_setcompletionmode_callback = nullptr;
    KHistoryComboBox_VirtualHook_Callback khistorycombobox_virtualhook_callback = nullptr;

    // Access struct
    struct Base : KHistoryComboBox {
        using KHistoryComboBox::actionEvent;
        using KHistoryComboBox::changeEvent;
        using KHistoryComboBox::childEvent;
        using KHistoryComboBox::closeEvent;
        using KHistoryComboBox::connectNotify;
        using KHistoryComboBox::contextMenuEvent;
        using KHistoryComboBox::customEvent;
        using KHistoryComboBox::disconnectNotify;
        using KHistoryComboBox::dragEnterEvent;
        using KHistoryComboBox::dragLeaveEvent;
        using KHistoryComboBox::dragMoveEvent;
        using KHistoryComboBox::dropEvent;
        using KHistoryComboBox::enterEvent;
        using KHistoryComboBox::focusInEvent;
        using KHistoryComboBox::focusNextPrevChild;
        using KHistoryComboBox::focusOutEvent;
        using KHistoryComboBox::hideEvent;
        using KHistoryComboBox::initPainter;
        using KHistoryComboBox::initStyleOption;
        using KHistoryComboBox::inputMethodEvent;
        using KHistoryComboBox::keyPressEvent;
        using KHistoryComboBox::keyReleaseEvent;
        using KHistoryComboBox::leaveEvent;
        using KHistoryComboBox::makeCompletion;
        using KHistoryComboBox::metric;
        using KHistoryComboBox::mouseDoubleClickEvent;
        using KHistoryComboBox::mouseMoveEvent;
        using KHistoryComboBox::mousePressEvent;
        using KHistoryComboBox::mouseReleaseEvent;
        using KHistoryComboBox::moveEvent;
        using KHistoryComboBox::nativeEvent;
        using KHistoryComboBox::paintEvent;
        using KHistoryComboBox::redirected;
        using KHistoryComboBox::resizeEvent;
        using KHistoryComboBox::sharedPainter;
        using KHistoryComboBox::showEvent;
        using KHistoryComboBox::tabletEvent;
        using KHistoryComboBox::timerEvent;
        using KHistoryComboBox::virtual_hook;
        using KHistoryComboBox::wheelEvent;
    };

    VirtualKHistoryComboBox(QWidget* parent) : KHistoryComboBox(parent) {};
    VirtualKHistoryComboBox() : KHistoryComboBox() {};
    VirtualKHistoryComboBox(bool useCompletion) : KHistoryComboBox(useCompletion) {};
    VirtualKHistoryComboBox(bool useCompletion, QWidget* parent) : KHistoryComboBox(useCompletion, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (khistorycombobox_metaobject_callback) {
            QMetaObject* callback_ret = khistorycombobox_metaobject_callback(this);
            return callback_ret;
        }
        return KHistoryComboBox::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (khistorycombobox_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = khistorycombobox_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KHistoryComboBox::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (khistorycombobox_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = khistorycombobox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KHistoryComboBox::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (khistorycombobox_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            khistorycombobox_keypressevent_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* ev) override {
        if (khistorycombobox_wheelevent_callback) {
            QWheelEvent* cbval1 = ev;
            khistorycombobox_wheelevent_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::wheelEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoCompletion(bool autocomplete) override {
        if (khistorycombobox_setautocompletion_callback) {
            bool cbval1 = autocomplete;
            khistorycombobox_setautocompletion_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::setAutoCompletion(autocomplete);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLineEdit(QLineEdit* lineEdit) override {
        if (khistorycombobox_setlineedit_callback) {
            QLineEdit* cbval1 = lineEdit;
            khistorycombobox_setlineedit_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::setLineEdit(lineEdit);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (khistorycombobox_minimumsizehint_callback) {
            QSize* callback_ret = khistorycombobox_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KHistoryComboBox::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletedText(const QString& completedText) override {
        if (khistorycombobox_setcompletedtext_callback) {
            const auto completedText_ret = completedText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray completedText_b = completedText_ret.toUtf8();
            auto completedText_str_len = completedText_b.length();
            const char* completedText_str = static_cast<const char*>(malloc(completedText_str_len + 1));
            memcpy((void*)completedText_str, completedText_b.data(), completedText_str_len);
            ((char*)completedText_str)[completedText_str_len] = '\0';
            const char* cbval1 = completedText_str;
            khistorycombobox_setcompletedtext_callback(this, cbval1);
            libqt_free(completedText_str);
            return;
        }
        KHistoryComboBox::setCompletedText(completedText);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletedItems(const QList<QString>& items, bool autoSuggest) override {
        if (khistorycombobox_setcompleteditems_callback) {
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
            khistorycombobox_setcompleteditems_callback(this, cbval1, cbval2);
            libqt_free(items_arr);
            return;
        }
        KHistoryComboBox::setCompletedItems(items, autoSuggest);
    }

    // Virtual method for C ABI access and custom callback
    virtual void makeCompletion(const QString& param1) override {
        if (khistorycombobox_makecompletion_callback) {
            const auto param1_ret = param1;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray param1_b = param1_ret.toUtf8();
            auto param1_str_len = param1_b.length();
            const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
            memcpy((void*)param1_str, param1_b.data(), param1_str_len);
            ((char*)param1_str)[param1_str_len] = '\0';
            const char* cbval1 = param1_str;
            khistorycombobox_makecompletion_callback(this, cbval1);
            libqt_free(param1_str);
            return;
        }
        KHistoryComboBox::makeCompletion(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (khistorycombobox_setmodel_callback) {
            QAbstractItemModel* cbval1 = model;
            khistorycombobox_setmodel_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::setModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (khistorycombobox_sizehint_callback) {
            QSize* callback_ret = khistorycombobox_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KHistoryComboBox::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPopup() override {
        if (khistorycombobox_showpopup_callback) {
            khistorycombobox_showpopup_callback(this);
            return;
        }
        KHistoryComboBox::showPopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual void hidePopup() override {
        if (khistorycombobox_hidepopup_callback) {
            khistorycombobox_hidepopup_callback(this);
            return;
        }
        KHistoryComboBox::hidePopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (khistorycombobox_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = khistorycombobox_event_callback(this, cbval1);
            return callback_ret;
        }
        return KHistoryComboBox::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (khistorycombobox_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = khistorycombobox_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KHistoryComboBox::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (khistorycombobox_focusinevent_callback) {
            QFocusEvent* cbval1 = e;
            khistorycombobox_focusinevent_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (khistorycombobox_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            khistorycombobox_focusoutevent_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (khistorycombobox_changeevent_callback) {
            QEvent* cbval1 = e;
            khistorycombobox_changeevent_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (khistorycombobox_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            khistorycombobox_resizeevent_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (khistorycombobox_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            khistorycombobox_paintevent_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (khistorycombobox_showevent_callback) {
            QShowEvent* cbval1 = e;
            khistorycombobox_showevent_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::showEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* e) override {
        if (khistorycombobox_hideevent_callback) {
            QHideEvent* cbval1 = e;
            khistorycombobox_hideevent_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::hideEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (khistorycombobox_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            khistorycombobox_mousepressevent_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (khistorycombobox_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            khistorycombobox_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (khistorycombobox_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            khistorycombobox_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (khistorycombobox_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = e;
            khistorycombobox_contextmenuevent_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::contextMenuEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (khistorycombobox_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            khistorycombobox_inputmethodevent_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionComboBox* option) const override {
        if (khistorycombobox_initstyleoption_callback) {
            QStyleOptionComboBox* cbval1 = option;
            khistorycombobox_initstyleoption_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (khistorycombobox_devtype_callback) {
            int callback_ret = khistorycombobox_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KHistoryComboBox::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (khistorycombobox_setvisible_callback) {
            bool cbval1 = visible;
            khistorycombobox_setvisible_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (khistorycombobox_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = khistorycombobox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KHistoryComboBox::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (khistorycombobox_hasheightforwidth_callback) {
            bool callback_ret = khistorycombobox_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KHistoryComboBox::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (khistorycombobox_paintengine_callback) {
            QPaintEngine* callback_ret = khistorycombobox_paintengine_callback(this);
            return callback_ret;
        }
        return KHistoryComboBox::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (khistorycombobox_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            khistorycombobox_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (khistorycombobox_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            khistorycombobox_mousemoveevent_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (khistorycombobox_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            khistorycombobox_enterevent_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (khistorycombobox_leaveevent_callback) {
            QEvent* cbval1 = event;
            khistorycombobox_leaveevent_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (khistorycombobox_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            khistorycombobox_moveevent_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (khistorycombobox_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            khistorycombobox_closeevent_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (khistorycombobox_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            khistorycombobox_tabletevent_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (khistorycombobox_actionevent_callback) {
            QActionEvent* cbval1 = event;
            khistorycombobox_actionevent_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (khistorycombobox_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            khistorycombobox_dragenterevent_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (khistorycombobox_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            khistorycombobox_dragmoveevent_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (khistorycombobox_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            khistorycombobox_dragleaveevent_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (khistorycombobox_dropevent_callback) {
            QDropEvent* cbval1 = event;
            khistorycombobox_dropevent_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (khistorycombobox_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = khistorycombobox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KHistoryComboBox::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (khistorycombobox_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = khistorycombobox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KHistoryComboBox::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (khistorycombobox_initpainter_callback) {
            QPainter* cbval1 = painter;
            khistorycombobox_initpainter_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (khistorycombobox_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = khistorycombobox_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KHistoryComboBox::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (khistorycombobox_sharedpainter_callback) {
            QPainter* callback_ret = khistorycombobox_sharedpainter_callback(this);
            return callback_ret;
        }
        return KHistoryComboBox::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (khistorycombobox_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = khistorycombobox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KHistoryComboBox::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (khistorycombobox_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = khistorycombobox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KHistoryComboBox::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (khistorycombobox_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            khistorycombobox_timerevent_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (khistorycombobox_childevent_callback) {
            QChildEvent* cbval1 = event;
            khistorycombobox_childevent_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (khistorycombobox_customevent_callback) {
            QEvent* cbval1 = event;
            khistorycombobox_customevent_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (khistorycombobox_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            khistorycombobox_connectnotify_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (khistorycombobox_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            khistorycombobox_disconnectnotify_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionObject(KCompletion* completionObject, bool handleSignals) override {
        if (khistorycombobox_setcompletionobject_callback) {
            KCompletion* cbval1 = completionObject;
            bool cbval2 = handleSignals;
            khistorycombobox_setcompletionobject_callback(this, cbval1, cbval2);
            return;
        }
        KHistoryComboBox::setCompletionObject(completionObject, handleSignals);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setHandleSignals(bool handle) override {
        if (khistorycombobox_sethandlesignals_callback) {
            bool cbval1 = handle;
            khistorycombobox_sethandlesignals_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::setHandleSignals(handle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionMode(KCompletion::CompletionMode mode) override {
        if (khistorycombobox_setcompletionmode_callback) {
            int cbval1 = static_cast<int>(mode);
            khistorycombobox_setcompletionmode_callback(this, cbval1);
            return;
        }
        KHistoryComboBox::setCompletionMode(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (khistorycombobox_virtualhook_callback) {
            int cbval1 = id;
            void* cbval2 = data;
            khistorycombobox_virtualhook_callback(this, cbval1, cbval2);
            return;
        }
        KHistoryComboBox::virtual_hook(id, data);
    }

    // Friend functions
    friend void KHistoryComboBox_SuperKeyPressEvent(KHistoryComboBox* self, QKeyEvent* param1);
    friend void KHistoryComboBox_SuperWheelEvent(KHistoryComboBox* self, QWheelEvent* ev);
    friend void KHistoryComboBox_SuperMakeCompletion(KHistoryComboBox* self, const libqt_string param1);
    friend void KHistoryComboBox_SuperFocusInEvent(KHistoryComboBox* self, QFocusEvent* e);
    friend void KHistoryComboBox_SuperFocusOutEvent(KHistoryComboBox* self, QFocusEvent* e);
    friend void KHistoryComboBox_SuperChangeEvent(KHistoryComboBox* self, QEvent* e);
    friend void KHistoryComboBox_SuperResizeEvent(KHistoryComboBox* self, QResizeEvent* e);
    friend void KHistoryComboBox_SuperPaintEvent(KHistoryComboBox* self, QPaintEvent* e);
    friend void KHistoryComboBox_SuperShowEvent(KHistoryComboBox* self, QShowEvent* e);
    friend void KHistoryComboBox_SuperHideEvent(KHistoryComboBox* self, QHideEvent* e);
    friend void KHistoryComboBox_SuperMousePressEvent(KHistoryComboBox* self, QMouseEvent* e);
    friend void KHistoryComboBox_SuperMouseReleaseEvent(KHistoryComboBox* self, QMouseEvent* e);
    friend void KHistoryComboBox_SuperKeyReleaseEvent(KHistoryComboBox* self, QKeyEvent* e);
    friend void KHistoryComboBox_SuperContextMenuEvent(KHistoryComboBox* self, QContextMenuEvent* e);
    friend void KHistoryComboBox_SuperInputMethodEvent(KHistoryComboBox* self, QInputMethodEvent* param1);
    friend void KHistoryComboBox_SuperInitStyleOption(const KHistoryComboBox* self, QStyleOptionComboBox* option);
    friend void KHistoryComboBox_SuperMouseDoubleClickEvent(KHistoryComboBox* self, QMouseEvent* event);
    friend void KHistoryComboBox_SuperMouseMoveEvent(KHistoryComboBox* self, QMouseEvent* event);
    friend void KHistoryComboBox_SuperEnterEvent(KHistoryComboBox* self, QEnterEvent* event);
    friend void KHistoryComboBox_SuperLeaveEvent(KHistoryComboBox* self, QEvent* event);
    friend void KHistoryComboBox_SuperMoveEvent(KHistoryComboBox* self, QMoveEvent* event);
    friend void KHistoryComboBox_SuperCloseEvent(KHistoryComboBox* self, QCloseEvent* event);
    friend void KHistoryComboBox_SuperTabletEvent(KHistoryComboBox* self, QTabletEvent* event);
    friend void KHistoryComboBox_SuperActionEvent(KHistoryComboBox* self, QActionEvent* event);
    friend void KHistoryComboBox_SuperDragEnterEvent(KHistoryComboBox* self, QDragEnterEvent* event);
    friend void KHistoryComboBox_SuperDragMoveEvent(KHistoryComboBox* self, QDragMoveEvent* event);
    friend void KHistoryComboBox_SuperDragLeaveEvent(KHistoryComboBox* self, QDragLeaveEvent* event);
    friend void KHistoryComboBox_SuperDropEvent(KHistoryComboBox* self, QDropEvent* event);
    friend bool KHistoryComboBox_SuperNativeEvent(KHistoryComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KHistoryComboBox_SuperMetric(const KHistoryComboBox* self, int param1);
    friend void KHistoryComboBox_SuperInitPainter(const KHistoryComboBox* self, QPainter* painter);
    friend QPaintDevice* KHistoryComboBox_SuperRedirected(const KHistoryComboBox* self, QPoint* offset);
    friend QPainter* KHistoryComboBox_SuperSharedPainter(const KHistoryComboBox* self);
    friend bool KHistoryComboBox_SuperFocusNextPrevChild(KHistoryComboBox* self, bool next);
    friend void KHistoryComboBox_SuperTimerEvent(KHistoryComboBox* self, QTimerEvent* event);
    friend void KHistoryComboBox_SuperChildEvent(KHistoryComboBox* self, QChildEvent* event);
    friend void KHistoryComboBox_SuperCustomEvent(KHistoryComboBox* self, QEvent* event);
    friend void KHistoryComboBox_SuperConnectNotify(KHistoryComboBox* self, const QMetaMethod* signal);
    friend void KHistoryComboBox_SuperDisconnectNotify(KHistoryComboBox* self, const QMetaMethod* signal);
    friend void KHistoryComboBox_SuperVirtualHook(KHistoryComboBox* self, int id, void* data);
};

#endif
