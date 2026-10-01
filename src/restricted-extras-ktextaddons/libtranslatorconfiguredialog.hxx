#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBTRANSLATORCONFIGUREDIALOG_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBTRANSLATORCONFIGUREDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextTranslator::TranslatorConfigureDialog
class VirtualTextTranslatorTranslatorConfigureDialog final : public TextTranslator::TranslatorConfigureDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextTranslator__TranslatorConfigureDialog_MetaObject_Callback = QMetaObject* (*)(const TextTranslator__TranslatorConfigureDialog*);
    using TextTranslator__TranslatorConfigureDialog_Metacast_Callback = void* (*)(TextTranslator__TranslatorConfigureDialog*, const char*);
    using TextTranslator__TranslatorConfigureDialog_Metacall_Callback = int (*)(TextTranslator__TranslatorConfigureDialog*, int, int, void**);
    using TextTranslator__TranslatorConfigureDialog_SetVisible_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, bool);
    using TextTranslator__TranslatorConfigureDialog_SizeHint_Callback = QSize* (*)(const TextTranslator__TranslatorConfigureDialog*);
    using TextTranslator__TranslatorConfigureDialog_MinimumSizeHint_Callback = QSize* (*)(const TextTranslator__TranslatorConfigureDialog*);
    using TextTranslator__TranslatorConfigureDialog_Open_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*);
    using TextTranslator__TranslatorConfigureDialog_Exec_Callback = int (*)(TextTranslator__TranslatorConfigureDialog*);
    using TextTranslator__TranslatorConfigureDialog_Done_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, int);
    using TextTranslator__TranslatorConfigureDialog_Accept_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*);
    using TextTranslator__TranslatorConfigureDialog_Reject_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*);
    using TextTranslator__TranslatorConfigureDialog_KeyPressEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QKeyEvent*);
    using TextTranslator__TranslatorConfigureDialog_CloseEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QCloseEvent*);
    using TextTranslator__TranslatorConfigureDialog_ShowEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QShowEvent*);
    using TextTranslator__TranslatorConfigureDialog_ResizeEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QResizeEvent*);
    using TextTranslator__TranslatorConfigureDialog_ContextMenuEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QContextMenuEvent*);
    using TextTranslator__TranslatorConfigureDialog_EventFilter_Callback = bool (*)(TextTranslator__TranslatorConfigureDialog*, QObject*, QEvent*);
    using TextTranslator__TranslatorConfigureDialog_DevType_Callback = int (*)(const TextTranslator__TranslatorConfigureDialog*);
    using TextTranslator__TranslatorConfigureDialog_HeightForWidth_Callback = int (*)(const TextTranslator__TranslatorConfigureDialog*, int);
    using TextTranslator__TranslatorConfigureDialog_HasHeightForWidth_Callback = bool (*)(const TextTranslator__TranslatorConfigureDialog*);
    using TextTranslator__TranslatorConfigureDialog_PaintEngine_Callback = QPaintEngine* (*)(const TextTranslator__TranslatorConfigureDialog*);
    using TextTranslator__TranslatorConfigureDialog_Event_Callback = bool (*)(TextTranslator__TranslatorConfigureDialog*, QEvent*);
    using TextTranslator__TranslatorConfigureDialog_MousePressEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QMouseEvent*);
    using TextTranslator__TranslatorConfigureDialog_MouseReleaseEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QMouseEvent*);
    using TextTranslator__TranslatorConfigureDialog_MouseDoubleClickEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QMouseEvent*);
    using TextTranslator__TranslatorConfigureDialog_MouseMoveEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QMouseEvent*);
    using TextTranslator__TranslatorConfigureDialog_WheelEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QWheelEvent*);
    using TextTranslator__TranslatorConfigureDialog_KeyReleaseEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QKeyEvent*);
    using TextTranslator__TranslatorConfigureDialog_FocusInEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QFocusEvent*);
    using TextTranslator__TranslatorConfigureDialog_FocusOutEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QFocusEvent*);
    using TextTranslator__TranslatorConfigureDialog_EnterEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QEnterEvent*);
    using TextTranslator__TranslatorConfigureDialog_LeaveEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QEvent*);
    using TextTranslator__TranslatorConfigureDialog_PaintEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QPaintEvent*);
    using TextTranslator__TranslatorConfigureDialog_MoveEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QMoveEvent*);
    using TextTranslator__TranslatorConfigureDialog_TabletEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QTabletEvent*);
    using TextTranslator__TranslatorConfigureDialog_ActionEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QActionEvent*);
    using TextTranslator__TranslatorConfigureDialog_DragEnterEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QDragEnterEvent*);
    using TextTranslator__TranslatorConfigureDialog_DragMoveEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QDragMoveEvent*);
    using TextTranslator__TranslatorConfigureDialog_DragLeaveEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QDragLeaveEvent*);
    using TextTranslator__TranslatorConfigureDialog_DropEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QDropEvent*);
    using TextTranslator__TranslatorConfigureDialog_HideEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QHideEvent*);
    using TextTranslator__TranslatorConfigureDialog_NativeEvent_Callback = bool (*)(TextTranslator__TranslatorConfigureDialog*, libqt_string, void*, intptr_t*);
    using TextTranslator__TranslatorConfigureDialog_ChangeEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QEvent*);
    using TextTranslator__TranslatorConfigureDialog_Metric_Callback = int (*)(const TextTranslator__TranslatorConfigureDialog*, int);
    using TextTranslator__TranslatorConfigureDialog_InitPainter_Callback = void (*)(const TextTranslator__TranslatorConfigureDialog*, QPainter*);
    using TextTranslator__TranslatorConfigureDialog_Redirected_Callback = QPaintDevice* (*)(const TextTranslator__TranslatorConfigureDialog*, QPoint*);
    using TextTranslator__TranslatorConfigureDialog_SharedPainter_Callback = QPainter* (*)(const TextTranslator__TranslatorConfigureDialog*);
    using TextTranslator__TranslatorConfigureDialog_InputMethodEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QInputMethodEvent*);
    using TextTranslator__TranslatorConfigureDialog_InputMethodQuery_Callback = QVariant* (*)(const TextTranslator__TranslatorConfigureDialog*, int);
    using TextTranslator__TranslatorConfigureDialog_FocusNextPrevChild_Callback = bool (*)(TextTranslator__TranslatorConfigureDialog*, bool);
    using TextTranslator__TranslatorConfigureDialog_TimerEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QTimerEvent*);
    using TextTranslator__TranslatorConfigureDialog_ChildEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QChildEvent*);
    using TextTranslator__TranslatorConfigureDialog_CustomEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QEvent*);
    using TextTranslator__TranslatorConfigureDialog_ConnectNotify_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QMetaMethod*);
    using TextTranslator__TranslatorConfigureDialog_DisconnectNotify_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QMetaMethod*);
    using TextTranslator::TranslatorConfigureDialog::adjustPosition;
    using TextTranslator::TranslatorConfigureDialog::create;
    using TextTranslator::TranslatorConfigureDialog::destroy;
    using TextTranslator::TranslatorConfigureDialog::focusNextChild;
    using TextTranslator::TranslatorConfigureDialog::focusPreviousChild;
    using TextTranslator::TranslatorConfigureDialog::getDecodedMetricF;
    using TextTranslator::TranslatorConfigureDialog::isSignalConnected;
    using TextTranslator::TranslatorConfigureDialog::receivers;
    using TextTranslator::TranslatorConfigureDialog::sender;
    using TextTranslator::TranslatorConfigureDialog::senderSignalIndex;
    using TextTranslator::TranslatorConfigureDialog::updateMicroFocus;

    // Instance callback storage
    TextTranslator__TranslatorConfigureDialog_MetaObject_Callback texttranslator__translatorconfiguredialog_metaobject_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_Metacast_Callback texttranslator__translatorconfiguredialog_metacast_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_Metacall_Callback texttranslator__translatorconfiguredialog_metacall_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_SetVisible_Callback texttranslator__translatorconfiguredialog_setvisible_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_SizeHint_Callback texttranslator__translatorconfiguredialog_sizehint_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_MinimumSizeHint_Callback texttranslator__translatorconfiguredialog_minimumsizehint_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_Open_Callback texttranslator__translatorconfiguredialog_open_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_Exec_Callback texttranslator__translatorconfiguredialog_exec_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_Done_Callback texttranslator__translatorconfiguredialog_done_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_Accept_Callback texttranslator__translatorconfiguredialog_accept_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_Reject_Callback texttranslator__translatorconfiguredialog_reject_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_KeyPressEvent_Callback texttranslator__translatorconfiguredialog_keypressevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_CloseEvent_Callback texttranslator__translatorconfiguredialog_closeevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_ShowEvent_Callback texttranslator__translatorconfiguredialog_showevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_ResizeEvent_Callback texttranslator__translatorconfiguredialog_resizeevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_ContextMenuEvent_Callback texttranslator__translatorconfiguredialog_contextmenuevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_EventFilter_Callback texttranslator__translatorconfiguredialog_eventfilter_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_DevType_Callback texttranslator__translatorconfiguredialog_devtype_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_HeightForWidth_Callback texttranslator__translatorconfiguredialog_heightforwidth_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_HasHeightForWidth_Callback texttranslator__translatorconfiguredialog_hasheightforwidth_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_PaintEngine_Callback texttranslator__translatorconfiguredialog_paintengine_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_Event_Callback texttranslator__translatorconfiguredialog_event_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_MousePressEvent_Callback texttranslator__translatorconfiguredialog_mousepressevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_MouseReleaseEvent_Callback texttranslator__translatorconfiguredialog_mousereleaseevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_MouseDoubleClickEvent_Callback texttranslator__translatorconfiguredialog_mousedoubleclickevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_MouseMoveEvent_Callback texttranslator__translatorconfiguredialog_mousemoveevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_WheelEvent_Callback texttranslator__translatorconfiguredialog_wheelevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_KeyReleaseEvent_Callback texttranslator__translatorconfiguredialog_keyreleaseevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_FocusInEvent_Callback texttranslator__translatorconfiguredialog_focusinevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_FocusOutEvent_Callback texttranslator__translatorconfiguredialog_focusoutevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_EnterEvent_Callback texttranslator__translatorconfiguredialog_enterevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_LeaveEvent_Callback texttranslator__translatorconfiguredialog_leaveevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_PaintEvent_Callback texttranslator__translatorconfiguredialog_paintevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_MoveEvent_Callback texttranslator__translatorconfiguredialog_moveevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_TabletEvent_Callback texttranslator__translatorconfiguredialog_tabletevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_ActionEvent_Callback texttranslator__translatorconfiguredialog_actionevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_DragEnterEvent_Callback texttranslator__translatorconfiguredialog_dragenterevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_DragMoveEvent_Callback texttranslator__translatorconfiguredialog_dragmoveevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_DragLeaveEvent_Callback texttranslator__translatorconfiguredialog_dragleaveevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_DropEvent_Callback texttranslator__translatorconfiguredialog_dropevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_HideEvent_Callback texttranslator__translatorconfiguredialog_hideevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_NativeEvent_Callback texttranslator__translatorconfiguredialog_nativeevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_ChangeEvent_Callback texttranslator__translatorconfiguredialog_changeevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_Metric_Callback texttranslator__translatorconfiguredialog_metric_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_InitPainter_Callback texttranslator__translatorconfiguredialog_initpainter_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_Redirected_Callback texttranslator__translatorconfiguredialog_redirected_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_SharedPainter_Callback texttranslator__translatorconfiguredialog_sharedpainter_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_InputMethodEvent_Callback texttranslator__translatorconfiguredialog_inputmethodevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_InputMethodQuery_Callback texttranslator__translatorconfiguredialog_inputmethodquery_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_FocusNextPrevChild_Callback texttranslator__translatorconfiguredialog_focusnextprevchild_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_TimerEvent_Callback texttranslator__translatorconfiguredialog_timerevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_ChildEvent_Callback texttranslator__translatorconfiguredialog_childevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_CustomEvent_Callback texttranslator__translatorconfiguredialog_customevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_ConnectNotify_Callback texttranslator__translatorconfiguredialog_connectnotify_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_DisconnectNotify_Callback texttranslator__translatorconfiguredialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextTranslator::TranslatorConfigureDialog {
        using TextTranslator::TranslatorConfigureDialog::actionEvent;
        using TextTranslator::TranslatorConfigureDialog::changeEvent;
        using TextTranslator::TranslatorConfigureDialog::childEvent;
        using TextTranslator::TranslatorConfigureDialog::closeEvent;
        using TextTranslator::TranslatorConfigureDialog::connectNotify;
        using TextTranslator::TranslatorConfigureDialog::contextMenuEvent;
        using TextTranslator::TranslatorConfigureDialog::customEvent;
        using TextTranslator::TranslatorConfigureDialog::disconnectNotify;
        using TextTranslator::TranslatorConfigureDialog::dragEnterEvent;
        using TextTranslator::TranslatorConfigureDialog::dragLeaveEvent;
        using TextTranslator::TranslatorConfigureDialog::dragMoveEvent;
        using TextTranslator::TranslatorConfigureDialog::dropEvent;
        using TextTranslator::TranslatorConfigureDialog::enterEvent;
        using TextTranslator::TranslatorConfigureDialog::event;
        using TextTranslator::TranslatorConfigureDialog::eventFilter;
        using TextTranslator::TranslatorConfigureDialog::focusInEvent;
        using TextTranslator::TranslatorConfigureDialog::focusNextPrevChild;
        using TextTranslator::TranslatorConfigureDialog::focusOutEvent;
        using TextTranslator::TranslatorConfigureDialog::hideEvent;
        using TextTranslator::TranslatorConfigureDialog::initPainter;
        using TextTranslator::TranslatorConfigureDialog::inputMethodEvent;
        using TextTranslator::TranslatorConfigureDialog::keyPressEvent;
        using TextTranslator::TranslatorConfigureDialog::keyReleaseEvent;
        using TextTranslator::TranslatorConfigureDialog::leaveEvent;
        using TextTranslator::TranslatorConfigureDialog::metric;
        using TextTranslator::TranslatorConfigureDialog::mouseDoubleClickEvent;
        using TextTranslator::TranslatorConfigureDialog::mouseMoveEvent;
        using TextTranslator::TranslatorConfigureDialog::mousePressEvent;
        using TextTranslator::TranslatorConfigureDialog::mouseReleaseEvent;
        using TextTranslator::TranslatorConfigureDialog::moveEvent;
        using TextTranslator::TranslatorConfigureDialog::nativeEvent;
        using TextTranslator::TranslatorConfigureDialog::paintEvent;
        using TextTranslator::TranslatorConfigureDialog::redirected;
        using TextTranslator::TranslatorConfigureDialog::resizeEvent;
        using TextTranslator::TranslatorConfigureDialog::sharedPainter;
        using TextTranslator::TranslatorConfigureDialog::showEvent;
        using TextTranslator::TranslatorConfigureDialog::tabletEvent;
        using TextTranslator::TranslatorConfigureDialog::timerEvent;
        using TextTranslator::TranslatorConfigureDialog::wheelEvent;
    };

    VirtualTextTranslatorTranslatorConfigureDialog(QWidget* parent) : TextTranslator::TranslatorConfigureDialog(parent) {};
    VirtualTextTranslatorTranslatorConfigureDialog() : TextTranslator::TranslatorConfigureDialog() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (texttranslator__translatorconfiguredialog_metaobject_callback) {
            QMetaObject* callback_ret = texttranslator__translatorconfiguredialog_metaobject_callback(this);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (texttranslator__translatorconfiguredialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = texttranslator__translatorconfiguredialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (texttranslator__translatorconfiguredialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = texttranslator__translatorconfiguredialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorConfigureDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (texttranslator__translatorconfiguredialog_setvisible_callback) {
            bool cbval1 = visible;
            texttranslator__translatorconfiguredialog_setvisible_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (texttranslator__translatorconfiguredialog_sizehint_callback) {
            QSize* callback_ret = texttranslator__translatorconfiguredialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorConfigureDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (texttranslator__translatorconfiguredialog_minimumsizehint_callback) {
            QSize* callback_ret = texttranslator__translatorconfiguredialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorConfigureDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (texttranslator__translatorconfiguredialog_open_callback) {
            texttranslator__translatorconfiguredialog_open_callback(this);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (texttranslator__translatorconfiguredialog_exec_callback) {
            int callback_ret = texttranslator__translatorconfiguredialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorConfigureDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (texttranslator__translatorconfiguredialog_done_callback) {
            int cbval1 = param1;
            texttranslator__translatorconfiguredialog_done_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (texttranslator__translatorconfiguredialog_accept_callback) {
            texttranslator__translatorconfiguredialog_accept_callback(this);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (texttranslator__translatorconfiguredialog_reject_callback) {
            texttranslator__translatorconfiguredialog_reject_callback(this);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (texttranslator__translatorconfiguredialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            texttranslator__translatorconfiguredialog_keypressevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (texttranslator__translatorconfiguredialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            texttranslator__translatorconfiguredialog_closeevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (texttranslator__translatorconfiguredialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            texttranslator__translatorconfiguredialog_showevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (texttranslator__translatorconfiguredialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            texttranslator__translatorconfiguredialog_resizeevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (texttranslator__translatorconfiguredialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            texttranslator__translatorconfiguredialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (texttranslator__translatorconfiguredialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = texttranslator__translatorconfiguredialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (texttranslator__translatorconfiguredialog_devtype_callback) {
            int callback_ret = texttranslator__translatorconfiguredialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorConfigureDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (texttranslator__translatorconfiguredialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = texttranslator__translatorconfiguredialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorConfigureDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (texttranslator__translatorconfiguredialog_hasheightforwidth_callback) {
            bool callback_ret = texttranslator__translatorconfiguredialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (texttranslator__translatorconfiguredialog_paintengine_callback) {
            QPaintEngine* callback_ret = texttranslator__translatorconfiguredialog_paintengine_callback(this);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (texttranslator__translatorconfiguredialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = texttranslator__translatorconfiguredialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (texttranslator__translatorconfiguredialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            texttranslator__translatorconfiguredialog_mousepressevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (texttranslator__translatorconfiguredialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            texttranslator__translatorconfiguredialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (texttranslator__translatorconfiguredialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            texttranslator__translatorconfiguredialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (texttranslator__translatorconfiguredialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            texttranslator__translatorconfiguredialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (texttranslator__translatorconfiguredialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            texttranslator__translatorconfiguredialog_wheelevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (texttranslator__translatorconfiguredialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            texttranslator__translatorconfiguredialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (texttranslator__translatorconfiguredialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            texttranslator__translatorconfiguredialog_focusinevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (texttranslator__translatorconfiguredialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            texttranslator__translatorconfiguredialog_focusoutevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (texttranslator__translatorconfiguredialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            texttranslator__translatorconfiguredialog_enterevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (texttranslator__translatorconfiguredialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            texttranslator__translatorconfiguredialog_leaveevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (texttranslator__translatorconfiguredialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            texttranslator__translatorconfiguredialog_paintevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (texttranslator__translatorconfiguredialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            texttranslator__translatorconfiguredialog_moveevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (texttranslator__translatorconfiguredialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            texttranslator__translatorconfiguredialog_tabletevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (texttranslator__translatorconfiguredialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            texttranslator__translatorconfiguredialog_actionevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (texttranslator__translatorconfiguredialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            texttranslator__translatorconfiguredialog_dragenterevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (texttranslator__translatorconfiguredialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            texttranslator__translatorconfiguredialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (texttranslator__translatorconfiguredialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            texttranslator__translatorconfiguredialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (texttranslator__translatorconfiguredialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            texttranslator__translatorconfiguredialog_dropevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (texttranslator__translatorconfiguredialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            texttranslator__translatorconfiguredialog_hideevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (texttranslator__translatorconfiguredialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = texttranslator__translatorconfiguredialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (texttranslator__translatorconfiguredialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            texttranslator__translatorconfiguredialog_changeevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (texttranslator__translatorconfiguredialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = texttranslator__translatorconfiguredialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorConfigureDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (texttranslator__translatorconfiguredialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            texttranslator__translatorconfiguredialog_initpainter_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (texttranslator__translatorconfiguredialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = texttranslator__translatorconfiguredialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (texttranslator__translatorconfiguredialog_sharedpainter_callback) {
            QPainter* callback_ret = texttranslator__translatorconfiguredialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (texttranslator__translatorconfiguredialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            texttranslator__translatorconfiguredialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (texttranslator__translatorconfiguredialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = texttranslator__translatorconfiguredialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorConfigureDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (texttranslator__translatorconfiguredialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = texttranslator__translatorconfiguredialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (texttranslator__translatorconfiguredialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            texttranslator__translatorconfiguredialog_timerevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (texttranslator__translatorconfiguredialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            texttranslator__translatorconfiguredialog_childevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (texttranslator__translatorconfiguredialog_customevent_callback) {
            QEvent* cbval1 = event;
            texttranslator__translatorconfiguredialog_customevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatorconfiguredialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            texttranslator__translatorconfiguredialog_connectnotify_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatorconfiguredialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            texttranslator__translatorconfiguredialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextTranslator__TranslatorConfigureDialog_SuperKeyPressEvent(TextTranslator::TranslatorConfigureDialog* self, QKeyEvent* param1);
    friend void TextTranslator__TranslatorConfigureDialog_SuperCloseEvent(TextTranslator::TranslatorConfigureDialog* self, QCloseEvent* param1);
    friend void TextTranslator__TranslatorConfigureDialog_SuperShowEvent(TextTranslator::TranslatorConfigureDialog* self, QShowEvent* param1);
    friend void TextTranslator__TranslatorConfigureDialog_SuperResizeEvent(TextTranslator::TranslatorConfigureDialog* self, QResizeEvent* param1);
    friend void TextTranslator__TranslatorConfigureDialog_SuperContextMenuEvent(TextTranslator::TranslatorConfigureDialog* self, QContextMenuEvent* param1);
    friend bool TextTranslator__TranslatorConfigureDialog_SuperEventFilter(TextTranslator::TranslatorConfigureDialog* self, QObject* param1, QEvent* param2);
    friend bool TextTranslator__TranslatorConfigureDialog_SuperEvent(TextTranslator::TranslatorConfigureDialog* self, QEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperMousePressEvent(TextTranslator::TranslatorConfigureDialog* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperMouseReleaseEvent(TextTranslator::TranslatorConfigureDialog* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperMouseDoubleClickEvent(TextTranslator::TranslatorConfigureDialog* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperMouseMoveEvent(TextTranslator::TranslatorConfigureDialog* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperWheelEvent(TextTranslator::TranslatorConfigureDialog* self, QWheelEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperKeyReleaseEvent(TextTranslator::TranslatorConfigureDialog* self, QKeyEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperFocusInEvent(TextTranslator::TranslatorConfigureDialog* self, QFocusEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperFocusOutEvent(TextTranslator::TranslatorConfigureDialog* self, QFocusEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperEnterEvent(TextTranslator::TranslatorConfigureDialog* self, QEnterEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperLeaveEvent(TextTranslator::TranslatorConfigureDialog* self, QEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperPaintEvent(TextTranslator::TranslatorConfigureDialog* self, QPaintEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperMoveEvent(TextTranslator::TranslatorConfigureDialog* self, QMoveEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperTabletEvent(TextTranslator::TranslatorConfigureDialog* self, QTabletEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperActionEvent(TextTranslator::TranslatorConfigureDialog* self, QActionEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperDragEnterEvent(TextTranslator::TranslatorConfigureDialog* self, QDragEnterEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperDragMoveEvent(TextTranslator::TranslatorConfigureDialog* self, QDragMoveEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperDragLeaveEvent(TextTranslator::TranslatorConfigureDialog* self, QDragLeaveEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperDropEvent(TextTranslator::TranslatorConfigureDialog* self, QDropEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperHideEvent(TextTranslator::TranslatorConfigureDialog* self, QHideEvent* event);
    friend bool TextTranslator__TranslatorConfigureDialog_SuperNativeEvent(TextTranslator::TranslatorConfigureDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextTranslator__TranslatorConfigureDialog_SuperChangeEvent(TextTranslator::TranslatorConfigureDialog* self, QEvent* param1);
    friend int TextTranslator__TranslatorConfigureDialog_SuperMetric(const TextTranslator::TranslatorConfigureDialog* self, int param1);
    friend void TextTranslator__TranslatorConfigureDialog_SuperInitPainter(const TextTranslator::TranslatorConfigureDialog* self, QPainter* painter);
    friend QPaintDevice* TextTranslator__TranslatorConfigureDialog_SuperRedirected(const TextTranslator::TranslatorConfigureDialog* self, QPoint* offset);
    friend QPainter* TextTranslator__TranslatorConfigureDialog_SuperSharedPainter(const TextTranslator::TranslatorConfigureDialog* self);
    friend void TextTranslator__TranslatorConfigureDialog_SuperInputMethodEvent(TextTranslator::TranslatorConfigureDialog* self, QInputMethodEvent* param1);
    friend bool TextTranslator__TranslatorConfigureDialog_SuperFocusNextPrevChild(TextTranslator::TranslatorConfigureDialog* self, bool next);
    friend void TextTranslator__TranslatorConfigureDialog_SuperTimerEvent(TextTranslator::TranslatorConfigureDialog* self, QTimerEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperChildEvent(TextTranslator::TranslatorConfigureDialog* self, QChildEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperCustomEvent(TextTranslator::TranslatorConfigureDialog* self, QEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperConnectNotify(TextTranslator::TranslatorConfigureDialog* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorConfigureDialog_SuperDisconnectNotify(TextTranslator::TranslatorConfigureDialog* self, const QMetaMethod* signal);
};

#endif
