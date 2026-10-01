#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBTRANSLATORCONFIGURELANGUAGELISTWIDGET_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBTRANSLATORCONFIGURELANGUAGELISTWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextTranslator::TranslatorConfigureLanguageListWidget
class VirtualTextTranslatorTranslatorConfigureLanguageListWidget final : public TextTranslator::TranslatorConfigureLanguageListWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextTranslator__TranslatorConfigureLanguageListWidget_MetaObject_Callback = QMetaObject* (*)(const TextTranslator__TranslatorConfigureLanguageListWidget*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_Metacast_Callback = void* (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, const char*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_Metacall_Callback = int (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, int, int, void**);
    using TextTranslator__TranslatorConfigureLanguageListWidget_DevType_Callback = int (*)(const TextTranslator__TranslatorConfigureLanguageListWidget*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_SetVisible_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, bool);
    using TextTranslator__TranslatorConfigureLanguageListWidget_SizeHint_Callback = QSize* (*)(const TextTranslator__TranslatorConfigureLanguageListWidget*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_MinimumSizeHint_Callback = QSize* (*)(const TextTranslator__TranslatorConfigureLanguageListWidget*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_HeightForWidth_Callback = int (*)(const TextTranslator__TranslatorConfigureLanguageListWidget*, int);
    using TextTranslator__TranslatorConfigureLanguageListWidget_HasHeightForWidth_Callback = bool (*)(const TextTranslator__TranslatorConfigureLanguageListWidget*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_PaintEngine_Callback = QPaintEngine* (*)(const TextTranslator__TranslatorConfigureLanguageListWidget*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_Event_Callback = bool (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_MousePressEvent_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QMouseEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_MouseReleaseEvent_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QMouseEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_MouseDoubleClickEvent_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QMouseEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_MouseMoveEvent_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QMouseEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_WheelEvent_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QWheelEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_KeyPressEvent_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QKeyEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_KeyReleaseEvent_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QKeyEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_FocusInEvent_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QFocusEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_FocusOutEvent_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QFocusEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_EnterEvent_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QEnterEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_LeaveEvent_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_PaintEvent_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QPaintEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_MoveEvent_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QMoveEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_ResizeEvent_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QResizeEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_CloseEvent_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QCloseEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_ContextMenuEvent_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QContextMenuEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_TabletEvent_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QTabletEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_ActionEvent_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QActionEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_DragEnterEvent_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QDragEnterEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_DragMoveEvent_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QDragMoveEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_DragLeaveEvent_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QDragLeaveEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_DropEvent_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QDropEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_ShowEvent_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QShowEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_HideEvent_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QHideEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_NativeEvent_Callback = bool (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, libqt_string, void*, intptr_t*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_ChangeEvent_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_Metric_Callback = int (*)(const TextTranslator__TranslatorConfigureLanguageListWidget*, int);
    using TextTranslator__TranslatorConfigureLanguageListWidget_InitPainter_Callback = void (*)(const TextTranslator__TranslatorConfigureLanguageListWidget*, QPainter*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_Redirected_Callback = QPaintDevice* (*)(const TextTranslator__TranslatorConfigureLanguageListWidget*, QPoint*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_SharedPainter_Callback = QPainter* (*)(const TextTranslator__TranslatorConfigureLanguageListWidget*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_InputMethodEvent_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QInputMethodEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_InputMethodQuery_Callback = QVariant* (*)(const TextTranslator__TranslatorConfigureLanguageListWidget*, int);
    using TextTranslator__TranslatorConfigureLanguageListWidget_FocusNextPrevChild_Callback = bool (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, bool);
    using TextTranslator__TranslatorConfigureLanguageListWidget_EventFilter_Callback = bool (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QObject*, QEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_TimerEvent_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QTimerEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_ChildEvent_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QChildEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_CustomEvent_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QEvent*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_ConnectNotify_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QMetaMethod*);
    using TextTranslator__TranslatorConfigureLanguageListWidget_DisconnectNotify_Callback = void (*)(TextTranslator__TranslatorConfigureLanguageListWidget*, QMetaMethod*);
    using TextTranslator::TranslatorConfigureLanguageListWidget::create;
    using TextTranslator::TranslatorConfigureLanguageListWidget::destroy;
    using TextTranslator::TranslatorConfigureLanguageListWidget::focusNextChild;
    using TextTranslator::TranslatorConfigureLanguageListWidget::focusPreviousChild;
    using TextTranslator::TranslatorConfigureLanguageListWidget::getDecodedMetricF;
    using TextTranslator::TranslatorConfigureLanguageListWidget::isSignalConnected;
    using TextTranslator::TranslatorConfigureLanguageListWidget::receivers;
    using TextTranslator::TranslatorConfigureLanguageListWidget::sender;
    using TextTranslator::TranslatorConfigureLanguageListWidget::senderSignalIndex;
    using TextTranslator::TranslatorConfigureLanguageListWidget::updateMicroFocus;

    // Instance callback storage
    TextTranslator__TranslatorConfigureLanguageListWidget_MetaObject_Callback texttranslator__translatorconfigurelanguagelistwidget_metaobject_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_Metacast_Callback texttranslator__translatorconfigurelanguagelistwidget_metacast_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_Metacall_Callback texttranslator__translatorconfigurelanguagelistwidget_metacall_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_DevType_Callback texttranslator__translatorconfigurelanguagelistwidget_devtype_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_SetVisible_Callback texttranslator__translatorconfigurelanguagelistwidget_setvisible_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_SizeHint_Callback texttranslator__translatorconfigurelanguagelistwidget_sizehint_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_MinimumSizeHint_Callback texttranslator__translatorconfigurelanguagelistwidget_minimumsizehint_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_HeightForWidth_Callback texttranslator__translatorconfigurelanguagelistwidget_heightforwidth_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_HasHeightForWidth_Callback texttranslator__translatorconfigurelanguagelistwidget_hasheightforwidth_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_PaintEngine_Callback texttranslator__translatorconfigurelanguagelistwidget_paintengine_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_Event_Callback texttranslator__translatorconfigurelanguagelistwidget_event_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_MousePressEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_mousepressevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_MouseReleaseEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_mousereleaseevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_MouseDoubleClickEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_mousedoubleclickevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_MouseMoveEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_mousemoveevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_WheelEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_wheelevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_KeyPressEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_keypressevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_KeyReleaseEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_keyreleaseevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_FocusInEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_focusinevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_FocusOutEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_focusoutevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_EnterEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_enterevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_LeaveEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_leaveevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_PaintEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_paintevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_MoveEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_moveevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_ResizeEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_resizeevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_CloseEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_closeevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_ContextMenuEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_contextmenuevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_TabletEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_tabletevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_ActionEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_actionevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_DragEnterEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_dragenterevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_DragMoveEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_dragmoveevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_DragLeaveEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_dragleaveevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_DropEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_dropevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_ShowEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_showevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_HideEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_hideevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_NativeEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_nativeevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_ChangeEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_changeevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_Metric_Callback texttranslator__translatorconfigurelanguagelistwidget_metric_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_InitPainter_Callback texttranslator__translatorconfigurelanguagelistwidget_initpainter_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_Redirected_Callback texttranslator__translatorconfigurelanguagelistwidget_redirected_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_SharedPainter_Callback texttranslator__translatorconfigurelanguagelistwidget_sharedpainter_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_InputMethodEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_inputmethodevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_InputMethodQuery_Callback texttranslator__translatorconfigurelanguagelistwidget_inputmethodquery_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_FocusNextPrevChild_Callback texttranslator__translatorconfigurelanguagelistwidget_focusnextprevchild_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_EventFilter_Callback texttranslator__translatorconfigurelanguagelistwidget_eventfilter_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_TimerEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_timerevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_ChildEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_childevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_CustomEvent_Callback texttranslator__translatorconfigurelanguagelistwidget_customevent_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_ConnectNotify_Callback texttranslator__translatorconfigurelanguagelistwidget_connectnotify_callback = nullptr;
    TextTranslator__TranslatorConfigureLanguageListWidget_DisconnectNotify_Callback texttranslator__translatorconfigurelanguagelistwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextTranslator::TranslatorConfigureLanguageListWidget {
        using TextTranslator::TranslatorConfigureLanguageListWidget::actionEvent;
        using TextTranslator::TranslatorConfigureLanguageListWidget::changeEvent;
        using TextTranslator::TranslatorConfigureLanguageListWidget::childEvent;
        using TextTranslator::TranslatorConfigureLanguageListWidget::closeEvent;
        using TextTranslator::TranslatorConfigureLanguageListWidget::connectNotify;
        using TextTranslator::TranslatorConfigureLanguageListWidget::contextMenuEvent;
        using TextTranslator::TranslatorConfigureLanguageListWidget::customEvent;
        using TextTranslator::TranslatorConfigureLanguageListWidget::disconnectNotify;
        using TextTranslator::TranslatorConfigureLanguageListWidget::dragEnterEvent;
        using TextTranslator::TranslatorConfigureLanguageListWidget::dragLeaveEvent;
        using TextTranslator::TranslatorConfigureLanguageListWidget::dragMoveEvent;
        using TextTranslator::TranslatorConfigureLanguageListWidget::dropEvent;
        using TextTranslator::TranslatorConfigureLanguageListWidget::enterEvent;
        using TextTranslator::TranslatorConfigureLanguageListWidget::event;
        using TextTranslator::TranslatorConfigureLanguageListWidget::focusInEvent;
        using TextTranslator::TranslatorConfigureLanguageListWidget::focusNextPrevChild;
        using TextTranslator::TranslatorConfigureLanguageListWidget::focusOutEvent;
        using TextTranslator::TranslatorConfigureLanguageListWidget::hideEvent;
        using TextTranslator::TranslatorConfigureLanguageListWidget::initPainter;
        using TextTranslator::TranslatorConfigureLanguageListWidget::inputMethodEvent;
        using TextTranslator::TranslatorConfigureLanguageListWidget::keyPressEvent;
        using TextTranslator::TranslatorConfigureLanguageListWidget::keyReleaseEvent;
        using TextTranslator::TranslatorConfigureLanguageListWidget::leaveEvent;
        using TextTranslator::TranslatorConfigureLanguageListWidget::metric;
        using TextTranslator::TranslatorConfigureLanguageListWidget::mouseDoubleClickEvent;
        using TextTranslator::TranslatorConfigureLanguageListWidget::mouseMoveEvent;
        using TextTranslator::TranslatorConfigureLanguageListWidget::mousePressEvent;
        using TextTranslator::TranslatorConfigureLanguageListWidget::mouseReleaseEvent;
        using TextTranslator::TranslatorConfigureLanguageListWidget::moveEvent;
        using TextTranslator::TranslatorConfigureLanguageListWidget::nativeEvent;
        using TextTranslator::TranslatorConfigureLanguageListWidget::paintEvent;
        using TextTranslator::TranslatorConfigureLanguageListWidget::redirected;
        using TextTranslator::TranslatorConfigureLanguageListWidget::resizeEvent;
        using TextTranslator::TranslatorConfigureLanguageListWidget::sharedPainter;
        using TextTranslator::TranslatorConfigureLanguageListWidget::showEvent;
        using TextTranslator::TranslatorConfigureLanguageListWidget::tabletEvent;
        using TextTranslator::TranslatorConfigureLanguageListWidget::timerEvent;
        using TextTranslator::TranslatorConfigureLanguageListWidget::wheelEvent;
    };

    VirtualTextTranslatorTranslatorConfigureLanguageListWidget(const QString& labelText) : TextTranslator::TranslatorConfigureLanguageListWidget(labelText) {};
    VirtualTextTranslatorTranslatorConfigureLanguageListWidget(const QString& labelText, QWidget* parent) : TextTranslator::TranslatorConfigureLanguageListWidget(labelText, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (texttranslator__translatorconfigurelanguagelistwidget_metaobject_callback) {
            QMetaObject* callback_ret = texttranslator__translatorconfigurelanguagelistwidget_metaobject_callback(this);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureLanguageListWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = texttranslator__translatorconfigurelanguagelistwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureLanguageListWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = texttranslator__translatorconfigurelanguagelistwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorConfigureLanguageListWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (texttranslator__translatorconfigurelanguagelistwidget_devtype_callback) {
            int callback_ret = texttranslator__translatorconfigurelanguagelistwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorConfigureLanguageListWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_setvisible_callback) {
            bool cbval1 = visible;
            texttranslator__translatorconfigurelanguagelistwidget_setvisible_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (texttranslator__translatorconfigurelanguagelistwidget_sizehint_callback) {
            QSize* callback_ret = texttranslator__translatorconfigurelanguagelistwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorConfigureLanguageListWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (texttranslator__translatorconfigurelanguagelistwidget_minimumsizehint_callback) {
            QSize* callback_ret = texttranslator__translatorconfigurelanguagelistwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorConfigureLanguageListWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (texttranslator__translatorconfigurelanguagelistwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = texttranslator__translatorconfigurelanguagelistwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorConfigureLanguageListWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (texttranslator__translatorconfigurelanguagelistwidget_hasheightforwidth_callback) {
            bool callback_ret = texttranslator__translatorconfigurelanguagelistwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureLanguageListWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (texttranslator__translatorconfigurelanguagelistwidget_paintengine_callback) {
            QPaintEngine* callback_ret = texttranslator__translatorconfigurelanguagelistwidget_paintengine_callback(this);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureLanguageListWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = texttranslator__translatorconfigurelanguagelistwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureLanguageListWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            texttranslator__translatorconfigurelanguagelistwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            texttranslator__translatorconfigurelanguagelistwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            texttranslator__translatorconfigurelanguagelistwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            texttranslator__translatorconfigurelanguagelistwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            texttranslator__translatorconfigurelanguagelistwidget_wheelevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            texttranslator__translatorconfigurelanguagelistwidget_keypressevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            texttranslator__translatorconfigurelanguagelistwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            texttranslator__translatorconfigurelanguagelistwidget_focusinevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            texttranslator__translatorconfigurelanguagelistwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            texttranslator__translatorconfigurelanguagelistwidget_enterevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            texttranslator__translatorconfigurelanguagelistwidget_leaveevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            texttranslator__translatorconfigurelanguagelistwidget_paintevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            texttranslator__translatorconfigurelanguagelistwidget_moveevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            texttranslator__translatorconfigurelanguagelistwidget_resizeevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            texttranslator__translatorconfigurelanguagelistwidget_closeevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            texttranslator__translatorconfigurelanguagelistwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            texttranslator__translatorconfigurelanguagelistwidget_tabletevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            texttranslator__translatorconfigurelanguagelistwidget_actionevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            texttranslator__translatorconfigurelanguagelistwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            texttranslator__translatorconfigurelanguagelistwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            texttranslator__translatorconfigurelanguagelistwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            texttranslator__translatorconfigurelanguagelistwidget_dropevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            texttranslator__translatorconfigurelanguagelistwidget_showevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            texttranslator__translatorconfigurelanguagelistwidget_hideevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = texttranslator__translatorconfigurelanguagelistwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureLanguageListWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            texttranslator__translatorconfigurelanguagelistwidget_changeevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (texttranslator__translatorconfigurelanguagelistwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = texttranslator__translatorconfigurelanguagelistwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorConfigureLanguageListWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (texttranslator__translatorconfigurelanguagelistwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            texttranslator__translatorconfigurelanguagelistwidget_initpainter_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (texttranslator__translatorconfigurelanguagelistwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = texttranslator__translatorconfigurelanguagelistwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureLanguageListWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (texttranslator__translatorconfigurelanguagelistwidget_sharedpainter_callback) {
            QPainter* callback_ret = texttranslator__translatorconfigurelanguagelistwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureLanguageListWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            texttranslator__translatorconfigurelanguagelistwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (texttranslator__translatorconfigurelanguagelistwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = texttranslator__translatorconfigurelanguagelistwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorConfigureLanguageListWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = texttranslator__translatorconfigurelanguagelistwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureLanguageListWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = texttranslator__translatorconfigurelanguagelistwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureLanguageListWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            texttranslator__translatorconfigurelanguagelistwidget_timerevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            texttranslator__translatorconfigurelanguagelistwidget_childevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_customevent_callback) {
            QEvent* cbval1 = event;
            texttranslator__translatorconfigurelanguagelistwidget_customevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            texttranslator__translatorconfigurelanguagelistwidget_connectnotify_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatorconfigurelanguagelistwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            texttranslator__translatorconfigurelanguagelistwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureLanguageListWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend bool TextTranslator__TranslatorConfigureLanguageListWidget_SuperEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QEvent* event);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperMousePressEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperMouseReleaseEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperMouseDoubleClickEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperMouseMoveEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperWheelEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QWheelEvent* event);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperKeyPressEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QKeyEvent* event);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperKeyReleaseEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QKeyEvent* event);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperFocusInEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QFocusEvent* event);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperFocusOutEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QFocusEvent* event);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperEnterEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QEnterEvent* event);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperLeaveEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QEvent* event);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperPaintEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QPaintEvent* event);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperMoveEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QMoveEvent* event);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperResizeEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QResizeEvent* event);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperCloseEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QCloseEvent* event);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperContextMenuEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QContextMenuEvent* event);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperTabletEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QTabletEvent* event);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperActionEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QActionEvent* event);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperDragEnterEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QDragEnterEvent* event);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperDragMoveEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QDragMoveEvent* event);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperDragLeaveEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QDragLeaveEvent* event);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperDropEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QDropEvent* event);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperShowEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QShowEvent* event);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperHideEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QHideEvent* event);
    friend bool TextTranslator__TranslatorConfigureLanguageListWidget_SuperNativeEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperChangeEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QEvent* param1);
    friend int TextTranslator__TranslatorConfigureLanguageListWidget_SuperMetric(const TextTranslator::TranslatorConfigureLanguageListWidget* self, int param1);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperInitPainter(const TextTranslator::TranslatorConfigureLanguageListWidget* self, QPainter* painter);
    friend QPaintDevice* TextTranslator__TranslatorConfigureLanguageListWidget_SuperRedirected(const TextTranslator::TranslatorConfigureLanguageListWidget* self, QPoint* offset);
    friend QPainter* TextTranslator__TranslatorConfigureLanguageListWidget_SuperSharedPainter(const TextTranslator::TranslatorConfigureLanguageListWidget* self);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperInputMethodEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QInputMethodEvent* param1);
    friend bool TextTranslator__TranslatorConfigureLanguageListWidget_SuperFocusNextPrevChild(TextTranslator::TranslatorConfigureLanguageListWidget* self, bool next);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperTimerEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QTimerEvent* event);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperChildEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QChildEvent* event);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperCustomEvent(TextTranslator::TranslatorConfigureLanguageListWidget* self, QEvent* event);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperConnectNotify(TextTranslator::TranslatorConfigureLanguageListWidget* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorConfigureLanguageListWidget_SuperDisconnectNotify(TextTranslator::TranslatorConfigureLanguageListWidget* self, const QMetaMethod* signal);
};

#endif
