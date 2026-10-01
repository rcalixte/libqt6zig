#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBTRANSLATORWIDGET_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBTRANSLATORWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextTranslator::TranslatorTextEdit
class VirtualTextTranslatorTranslatorTextEdit final : public TextTranslator::TranslatorTextEdit {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextTranslator__TranslatorTextEdit_MetaObject_Callback = QMetaObject* (*)(const TextTranslator__TranslatorTextEdit*);
    using TextTranslator__TranslatorTextEdit_Metacast_Callback = void* (*)(TextTranslator__TranslatorTextEdit*, const char*);
    using TextTranslator__TranslatorTextEdit_Metacall_Callback = int (*)(TextTranslator__TranslatorTextEdit*, int, int, void**);
    using TextTranslator__TranslatorTextEdit_DropEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QDropEvent*);
    using TextTranslator__TranslatorTextEdit_LoadResource_Callback = QVariant* (*)(TextTranslator__TranslatorTextEdit*, int, QUrl*);
    using TextTranslator__TranslatorTextEdit_InputMethodQuery_Callback = QVariant* (*)(const TextTranslator__TranslatorTextEdit*, int);
    using TextTranslator__TranslatorTextEdit_Event_Callback = bool (*)(TextTranslator__TranslatorTextEdit*, QEvent*);
    using TextTranslator__TranslatorTextEdit_TimerEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QTimerEvent*);
    using TextTranslator__TranslatorTextEdit_KeyPressEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QKeyEvent*);
    using TextTranslator__TranslatorTextEdit_KeyReleaseEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QKeyEvent*);
    using TextTranslator__TranslatorTextEdit_ResizeEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QResizeEvent*);
    using TextTranslator__TranslatorTextEdit_PaintEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QPaintEvent*);
    using TextTranslator__TranslatorTextEdit_MousePressEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QMouseEvent*);
    using TextTranslator__TranslatorTextEdit_MouseMoveEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QMouseEvent*);
    using TextTranslator__TranslatorTextEdit_MouseReleaseEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QMouseEvent*);
    using TextTranslator__TranslatorTextEdit_MouseDoubleClickEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QMouseEvent*);
    using TextTranslator__TranslatorTextEdit_FocusNextPrevChild_Callback = bool (*)(TextTranslator__TranslatorTextEdit*, bool);
    using TextTranslator__TranslatorTextEdit_ContextMenuEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QContextMenuEvent*);
    using TextTranslator__TranslatorTextEdit_DragEnterEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QDragEnterEvent*);
    using TextTranslator__TranslatorTextEdit_DragLeaveEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QDragLeaveEvent*);
    using TextTranslator__TranslatorTextEdit_DragMoveEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QDragMoveEvent*);
    using TextTranslator__TranslatorTextEdit_FocusInEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QFocusEvent*);
    using TextTranslator__TranslatorTextEdit_FocusOutEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QFocusEvent*);
    using TextTranslator__TranslatorTextEdit_ShowEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QShowEvent*);
    using TextTranslator__TranslatorTextEdit_ChangeEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QEvent*);
    using TextTranslator__TranslatorTextEdit_WheelEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QWheelEvent*);
    using TextTranslator__TranslatorTextEdit_CreateMimeDataFromSelection_Callback = QMimeData* (*)(const TextTranslator__TranslatorTextEdit*);
    using TextTranslator__TranslatorTextEdit_CanInsertFromMimeData_Callback = bool (*)(const TextTranslator__TranslatorTextEdit*, QMimeData*);
    using TextTranslator__TranslatorTextEdit_InsertFromMimeData_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QMimeData*);
    using TextTranslator__TranslatorTextEdit_InputMethodEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QInputMethodEvent*);
    using TextTranslator__TranslatorTextEdit_ScrollContentsBy_Callback = void (*)(TextTranslator__TranslatorTextEdit*, int, int);
    using TextTranslator__TranslatorTextEdit_DoSetTextCursor_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QTextCursor*);
    using TextTranslator__TranslatorTextEdit_MinimumSizeHint_Callback = QSize* (*)(const TextTranslator__TranslatorTextEdit*);
    using TextTranslator__TranslatorTextEdit_SizeHint_Callback = QSize* (*)(const TextTranslator__TranslatorTextEdit*);
    using TextTranslator__TranslatorTextEdit_SetupViewport_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QWidget*);
    using TextTranslator__TranslatorTextEdit_EventFilter_Callback = bool (*)(TextTranslator__TranslatorTextEdit*, QObject*, QEvent*);
    using TextTranslator__TranslatorTextEdit_ViewportEvent_Callback = bool (*)(TextTranslator__TranslatorTextEdit*, QEvent*);
    using TextTranslator__TranslatorTextEdit_ViewportSizeHint_Callback = QSize* (*)(const TextTranslator__TranslatorTextEdit*);
    using TextTranslator__TranslatorTextEdit_InitStyleOption_Callback = void (*)(const TextTranslator__TranslatorTextEdit*, QStyleOptionFrame*);
    using TextTranslator__TranslatorTextEdit_DevType_Callback = int (*)(const TextTranslator__TranslatorTextEdit*);
    using TextTranslator__TranslatorTextEdit_SetVisible_Callback = void (*)(TextTranslator__TranslatorTextEdit*, bool);
    using TextTranslator__TranslatorTextEdit_HeightForWidth_Callback = int (*)(const TextTranslator__TranslatorTextEdit*, int);
    using TextTranslator__TranslatorTextEdit_HasHeightForWidth_Callback = bool (*)(const TextTranslator__TranslatorTextEdit*);
    using TextTranslator__TranslatorTextEdit_PaintEngine_Callback = QPaintEngine* (*)(const TextTranslator__TranslatorTextEdit*);
    using TextTranslator__TranslatorTextEdit_EnterEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QEnterEvent*);
    using TextTranslator__TranslatorTextEdit_LeaveEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QEvent*);
    using TextTranslator__TranslatorTextEdit_MoveEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QMoveEvent*);
    using TextTranslator__TranslatorTextEdit_CloseEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QCloseEvent*);
    using TextTranslator__TranslatorTextEdit_TabletEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QTabletEvent*);
    using TextTranslator__TranslatorTextEdit_ActionEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QActionEvent*);
    using TextTranslator__TranslatorTextEdit_HideEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QHideEvent*);
    using TextTranslator__TranslatorTextEdit_NativeEvent_Callback = bool (*)(TextTranslator__TranslatorTextEdit*, libqt_string, void*, intptr_t*);
    using TextTranslator__TranslatorTextEdit_Metric_Callback = int (*)(const TextTranslator__TranslatorTextEdit*, int);
    using TextTranslator__TranslatorTextEdit_InitPainter_Callback = void (*)(const TextTranslator__TranslatorTextEdit*, QPainter*);
    using TextTranslator__TranslatorTextEdit_Redirected_Callback = QPaintDevice* (*)(const TextTranslator__TranslatorTextEdit*, QPoint*);
    using TextTranslator__TranslatorTextEdit_SharedPainter_Callback = QPainter* (*)(const TextTranslator__TranslatorTextEdit*);
    using TextTranslator__TranslatorTextEdit_ChildEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QChildEvent*);
    using TextTranslator__TranslatorTextEdit_CustomEvent_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QEvent*);
    using TextTranslator__TranslatorTextEdit_ConnectNotify_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QMetaMethod*);
    using TextTranslator__TranslatorTextEdit_DisconnectNotify_Callback = void (*)(TextTranslator__TranslatorTextEdit*, QMetaMethod*);
    using TextTranslator::TranslatorTextEdit::blockBoundingGeometry;
    using TextTranslator::TranslatorTextEdit::blockBoundingRect;
    using TextTranslator::TranslatorTextEdit::contentOffset;
    using TextTranslator::TranslatorTextEdit::create;
    using TextTranslator::TranslatorTextEdit::destroy;
    using TextTranslator::TranslatorTextEdit::drawFrame;
    using TextTranslator::TranslatorTextEdit::firstVisibleBlock;
    using TextTranslator::TranslatorTextEdit::focusNextChild;
    using TextTranslator::TranslatorTextEdit::focusPreviousChild;
    using TextTranslator::TranslatorTextEdit::getDecodedMetricF;
    using TextTranslator::TranslatorTextEdit::getPaintContext;
    using TextTranslator::TranslatorTextEdit::isSignalConnected;
    using TextTranslator::TranslatorTextEdit::receivers;
    using TextTranslator::TranslatorTextEdit::sender;
    using TextTranslator::TranslatorTextEdit::senderSignalIndex;
    using TextTranslator::TranslatorTextEdit::setViewportMargins;
    using TextTranslator::TranslatorTextEdit::updateMicroFocus;
    using TextTranslator::TranslatorTextEdit::viewportMargins;
    using TextTranslator::TranslatorTextEdit::zoomInF;

    // Instance callback storage
    TextTranslator__TranslatorTextEdit_MetaObject_Callback texttranslator__translatortextedit_metaobject_callback = nullptr;
    TextTranslator__TranslatorTextEdit_Metacast_Callback texttranslator__translatortextedit_metacast_callback = nullptr;
    TextTranslator__TranslatorTextEdit_Metacall_Callback texttranslator__translatortextedit_metacall_callback = nullptr;
    TextTranslator__TranslatorTextEdit_DropEvent_Callback texttranslator__translatortextedit_dropevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_LoadResource_Callback texttranslator__translatortextedit_loadresource_callback = nullptr;
    TextTranslator__TranslatorTextEdit_InputMethodQuery_Callback texttranslator__translatortextedit_inputmethodquery_callback = nullptr;
    TextTranslator__TranslatorTextEdit_Event_Callback texttranslator__translatortextedit_event_callback = nullptr;
    TextTranslator__TranslatorTextEdit_TimerEvent_Callback texttranslator__translatortextedit_timerevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_KeyPressEvent_Callback texttranslator__translatortextedit_keypressevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_KeyReleaseEvent_Callback texttranslator__translatortextedit_keyreleaseevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_ResizeEvent_Callback texttranslator__translatortextedit_resizeevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_PaintEvent_Callback texttranslator__translatortextedit_paintevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_MousePressEvent_Callback texttranslator__translatortextedit_mousepressevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_MouseMoveEvent_Callback texttranslator__translatortextedit_mousemoveevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_MouseReleaseEvent_Callback texttranslator__translatortextedit_mousereleaseevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_MouseDoubleClickEvent_Callback texttranslator__translatortextedit_mousedoubleclickevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_FocusNextPrevChild_Callback texttranslator__translatortextedit_focusnextprevchild_callback = nullptr;
    TextTranslator__TranslatorTextEdit_ContextMenuEvent_Callback texttranslator__translatortextedit_contextmenuevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_DragEnterEvent_Callback texttranslator__translatortextedit_dragenterevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_DragLeaveEvent_Callback texttranslator__translatortextedit_dragleaveevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_DragMoveEvent_Callback texttranslator__translatortextedit_dragmoveevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_FocusInEvent_Callback texttranslator__translatortextedit_focusinevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_FocusOutEvent_Callback texttranslator__translatortextedit_focusoutevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_ShowEvent_Callback texttranslator__translatortextedit_showevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_ChangeEvent_Callback texttranslator__translatortextedit_changeevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_WheelEvent_Callback texttranslator__translatortextedit_wheelevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_CreateMimeDataFromSelection_Callback texttranslator__translatortextedit_createmimedatafromselection_callback = nullptr;
    TextTranslator__TranslatorTextEdit_CanInsertFromMimeData_Callback texttranslator__translatortextedit_caninsertfrommimedata_callback = nullptr;
    TextTranslator__TranslatorTextEdit_InsertFromMimeData_Callback texttranslator__translatortextedit_insertfrommimedata_callback = nullptr;
    TextTranslator__TranslatorTextEdit_InputMethodEvent_Callback texttranslator__translatortextedit_inputmethodevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_ScrollContentsBy_Callback texttranslator__translatortextedit_scrollcontentsby_callback = nullptr;
    TextTranslator__TranslatorTextEdit_DoSetTextCursor_Callback texttranslator__translatortextedit_dosettextcursor_callback = nullptr;
    TextTranslator__TranslatorTextEdit_MinimumSizeHint_Callback texttranslator__translatortextedit_minimumsizehint_callback = nullptr;
    TextTranslator__TranslatorTextEdit_SizeHint_Callback texttranslator__translatortextedit_sizehint_callback = nullptr;
    TextTranslator__TranslatorTextEdit_SetupViewport_Callback texttranslator__translatortextedit_setupviewport_callback = nullptr;
    TextTranslator__TranslatorTextEdit_EventFilter_Callback texttranslator__translatortextedit_eventfilter_callback = nullptr;
    TextTranslator__TranslatorTextEdit_ViewportEvent_Callback texttranslator__translatortextedit_viewportevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_ViewportSizeHint_Callback texttranslator__translatortextedit_viewportsizehint_callback = nullptr;
    TextTranslator__TranslatorTextEdit_InitStyleOption_Callback texttranslator__translatortextedit_initstyleoption_callback = nullptr;
    TextTranslator__TranslatorTextEdit_DevType_Callback texttranslator__translatortextedit_devtype_callback = nullptr;
    TextTranslator__TranslatorTextEdit_SetVisible_Callback texttranslator__translatortextedit_setvisible_callback = nullptr;
    TextTranslator__TranslatorTextEdit_HeightForWidth_Callback texttranslator__translatortextedit_heightforwidth_callback = nullptr;
    TextTranslator__TranslatorTextEdit_HasHeightForWidth_Callback texttranslator__translatortextedit_hasheightforwidth_callback = nullptr;
    TextTranslator__TranslatorTextEdit_PaintEngine_Callback texttranslator__translatortextedit_paintengine_callback = nullptr;
    TextTranslator__TranslatorTextEdit_EnterEvent_Callback texttranslator__translatortextedit_enterevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_LeaveEvent_Callback texttranslator__translatortextedit_leaveevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_MoveEvent_Callback texttranslator__translatortextedit_moveevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_CloseEvent_Callback texttranslator__translatortextedit_closeevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_TabletEvent_Callback texttranslator__translatortextedit_tabletevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_ActionEvent_Callback texttranslator__translatortextedit_actionevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_HideEvent_Callback texttranslator__translatortextedit_hideevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_NativeEvent_Callback texttranslator__translatortextedit_nativeevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_Metric_Callback texttranslator__translatortextedit_metric_callback = nullptr;
    TextTranslator__TranslatorTextEdit_InitPainter_Callback texttranslator__translatortextedit_initpainter_callback = nullptr;
    TextTranslator__TranslatorTextEdit_Redirected_Callback texttranslator__translatortextedit_redirected_callback = nullptr;
    TextTranslator__TranslatorTextEdit_SharedPainter_Callback texttranslator__translatortextedit_sharedpainter_callback = nullptr;
    TextTranslator__TranslatorTextEdit_ChildEvent_Callback texttranslator__translatortextedit_childevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_CustomEvent_Callback texttranslator__translatortextedit_customevent_callback = nullptr;
    TextTranslator__TranslatorTextEdit_ConnectNotify_Callback texttranslator__translatortextedit_connectnotify_callback = nullptr;
    TextTranslator__TranslatorTextEdit_DisconnectNotify_Callback texttranslator__translatortextedit_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextTranslator::TranslatorTextEdit {
        using TextTranslator::TranslatorTextEdit::actionEvent;
        using TextTranslator::TranslatorTextEdit::canInsertFromMimeData;
        using TextTranslator::TranslatorTextEdit::changeEvent;
        using TextTranslator::TranslatorTextEdit::childEvent;
        using TextTranslator::TranslatorTextEdit::closeEvent;
        using TextTranslator::TranslatorTextEdit::connectNotify;
        using TextTranslator::TranslatorTextEdit::contextMenuEvent;
        using TextTranslator::TranslatorTextEdit::createMimeDataFromSelection;
        using TextTranslator::TranslatorTextEdit::customEvent;
        using TextTranslator::TranslatorTextEdit::disconnectNotify;
        using TextTranslator::TranslatorTextEdit::doSetTextCursor;
        using TextTranslator::TranslatorTextEdit::dragEnterEvent;
        using TextTranslator::TranslatorTextEdit::dragLeaveEvent;
        using TextTranslator::TranslatorTextEdit::dragMoveEvent;
        using TextTranslator::TranslatorTextEdit::dropEvent;
        using TextTranslator::TranslatorTextEdit::enterEvent;
        using TextTranslator::TranslatorTextEdit::event;
        using TextTranslator::TranslatorTextEdit::eventFilter;
        using TextTranslator::TranslatorTextEdit::focusInEvent;
        using TextTranslator::TranslatorTextEdit::focusNextPrevChild;
        using TextTranslator::TranslatorTextEdit::focusOutEvent;
        using TextTranslator::TranslatorTextEdit::hideEvent;
        using TextTranslator::TranslatorTextEdit::initPainter;
        using TextTranslator::TranslatorTextEdit::initStyleOption;
        using TextTranslator::TranslatorTextEdit::inputMethodEvent;
        using TextTranslator::TranslatorTextEdit::insertFromMimeData;
        using TextTranslator::TranslatorTextEdit::keyPressEvent;
        using TextTranslator::TranslatorTextEdit::keyReleaseEvent;
        using TextTranslator::TranslatorTextEdit::leaveEvent;
        using TextTranslator::TranslatorTextEdit::metric;
        using TextTranslator::TranslatorTextEdit::mouseDoubleClickEvent;
        using TextTranslator::TranslatorTextEdit::mouseMoveEvent;
        using TextTranslator::TranslatorTextEdit::mousePressEvent;
        using TextTranslator::TranslatorTextEdit::mouseReleaseEvent;
        using TextTranslator::TranslatorTextEdit::moveEvent;
        using TextTranslator::TranslatorTextEdit::nativeEvent;
        using TextTranslator::TranslatorTextEdit::paintEvent;
        using TextTranslator::TranslatorTextEdit::redirected;
        using TextTranslator::TranslatorTextEdit::resizeEvent;
        using TextTranslator::TranslatorTextEdit::scrollContentsBy;
        using TextTranslator::TranslatorTextEdit::sharedPainter;
        using TextTranslator::TranslatorTextEdit::showEvent;
        using TextTranslator::TranslatorTextEdit::tabletEvent;
        using TextTranslator::TranslatorTextEdit::timerEvent;
        using TextTranslator::TranslatorTextEdit::viewportEvent;
        using TextTranslator::TranslatorTextEdit::viewportSizeHint;
        using TextTranslator::TranslatorTextEdit::wheelEvent;
    };

    VirtualTextTranslatorTranslatorTextEdit(QWidget* parent) : TextTranslator::TranslatorTextEdit(parent) {};
    VirtualTextTranslatorTranslatorTextEdit() : TextTranslator::TranslatorTextEdit() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (texttranslator__translatortextedit_metaobject_callback) {
            QMetaObject* callback_ret = texttranslator__translatortextedit_metaobject_callback(this);
            return callback_ret;
        }
        return TextTranslator__TranslatorTextEdit::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (texttranslator__translatortextedit_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = texttranslator__translatortextedit_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorTextEdit::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (texttranslator__translatortextedit_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = texttranslator__translatortextedit_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorTextEdit::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (texttranslator__translatortextedit_dropevent_callback) {
            QDropEvent* cbval1 = param1;
            texttranslator__translatortextedit_dropevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::dropEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant loadResource(int typeVal, const QUrl& name) override {
        if (texttranslator__translatortextedit_loadresource_callback) {
            int cbval1 = typeVal;
            const QUrl& name_ret = name;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&name_ret);
            QVariant* callback_ret = texttranslator__translatortextedit_loadresource_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorTextEdit::loadResource(typeVal, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
        if (texttranslator__translatortextedit_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(property);
            QVariant* callback_ret = texttranslator__translatortextedit_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorTextEdit::inputMethodQuery(property);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (texttranslator__translatortextedit_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = texttranslator__translatortextedit_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorTextEdit::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (texttranslator__translatortextedit_timerevent_callback) {
            QTimerEvent* cbval1 = e;
            texttranslator__translatortextedit_timerevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (texttranslator__translatortextedit_keypressevent_callback) {
            QKeyEvent* cbval1 = e;
            texttranslator__translatortextedit_keypressevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (texttranslator__translatortextedit_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            texttranslator__translatortextedit_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (texttranslator__translatortextedit_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            texttranslator__translatortextedit_resizeevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (texttranslator__translatortextedit_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            texttranslator__translatortextedit_paintevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (texttranslator__translatortextedit_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            texttranslator__translatortextedit_mousepressevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (texttranslator__translatortextedit_mousemoveevent_callback) {
            QMouseEvent* cbval1 = e;
            texttranslator__translatortextedit_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (texttranslator__translatortextedit_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            texttranslator__translatortextedit_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (texttranslator__translatortextedit_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = e;
            texttranslator__translatortextedit_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::mouseDoubleClickEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (texttranslator__translatortextedit_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = texttranslator__translatortextedit_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorTextEdit::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (texttranslator__translatortextedit_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = e;
            texttranslator__translatortextedit_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::contextMenuEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (texttranslator__translatortextedit_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = e;
            texttranslator__translatortextedit_dragenterevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::dragEnterEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (texttranslator__translatortextedit_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = e;
            texttranslator__translatortextedit_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (texttranslator__translatortextedit_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = e;
            texttranslator__translatortextedit_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (texttranslator__translatortextedit_focusinevent_callback) {
            QFocusEvent* cbval1 = e;
            texttranslator__translatortextedit_focusinevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (texttranslator__translatortextedit_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            texttranslator__translatortextedit_focusoutevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (texttranslator__translatortextedit_showevent_callback) {
            QShowEvent* cbval1 = param1;
            texttranslator__translatortextedit_showevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (texttranslator__translatortextedit_changeevent_callback) {
            QEvent* cbval1 = e;
            texttranslator__translatortextedit_changeevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (texttranslator__translatortextedit_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            texttranslator__translatortextedit_wheelevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* createMimeDataFromSelection() const override {
        if (texttranslator__translatortextedit_createmimedatafromselection_callback) {
            QMimeData* callback_ret = texttranslator__translatortextedit_createmimedatafromselection_callback(this);
            return callback_ret;
        }
        return TextTranslator__TranslatorTextEdit::createMimeDataFromSelection();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (texttranslator__translatortextedit_caninsertfrommimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)source;
            bool callback_ret = texttranslator__translatortextedit_caninsertfrommimedata_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorTextEdit::canInsertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertFromMimeData(const QMimeData* source) override {
        if (texttranslator__translatortextedit_insertfrommimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)source;
            texttranslator__translatortextedit_insertfrommimedata_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::insertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (texttranslator__translatortextedit_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            texttranslator__translatortextedit_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (texttranslator__translatortextedit_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            texttranslator__translatortextedit_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        TextTranslator__TranslatorTextEdit::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetTextCursor(const QTextCursor& cursor) override {
        if (texttranslator__translatortextedit_dosettextcursor_callback) {
            const QTextCursor& cursor_ret = cursor;
            // Cast returned reference into pointer
            QTextCursor* cbval1 = const_cast<QTextCursor*>(&cursor_ret);
            texttranslator__translatortextedit_dosettextcursor_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::doSetTextCursor(cursor);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (texttranslator__translatortextedit_minimumsizehint_callback) {
            QSize* callback_ret = texttranslator__translatortextedit_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorTextEdit::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (texttranslator__translatortextedit_sizehint_callback) {
            QSize* callback_ret = texttranslator__translatortextedit_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorTextEdit::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (texttranslator__translatortextedit_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            texttranslator__translatortextedit_setupviewport_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (texttranslator__translatortextedit_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = texttranslator__translatortextedit_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextTranslator__TranslatorTextEdit::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (texttranslator__translatortextedit_viewportevent_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = texttranslator__translatortextedit_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorTextEdit::viewportEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (texttranslator__translatortextedit_viewportsizehint_callback) {
            QSize* callback_ret = texttranslator__translatortextedit_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorTextEdit::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (texttranslator__translatortextedit_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            texttranslator__translatortextedit_initstyleoption_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (texttranslator__translatortextedit_devtype_callback) {
            int callback_ret = texttranslator__translatortextedit_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorTextEdit::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (texttranslator__translatortextedit_setvisible_callback) {
            bool cbval1 = visible;
            texttranslator__translatortextedit_setvisible_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (texttranslator__translatortextedit_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = texttranslator__translatortextedit_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorTextEdit::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (texttranslator__translatortextedit_hasheightforwidth_callback) {
            bool callback_ret = texttranslator__translatortextedit_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextTranslator__TranslatorTextEdit::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (texttranslator__translatortextedit_paintengine_callback) {
            QPaintEngine* callback_ret = texttranslator__translatortextedit_paintengine_callback(this);
            return callback_ret;
        }
        return TextTranslator__TranslatorTextEdit::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (texttranslator__translatortextedit_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            texttranslator__translatortextedit_enterevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (texttranslator__translatortextedit_leaveevent_callback) {
            QEvent* cbval1 = event;
            texttranslator__translatortextedit_leaveevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (texttranslator__translatortextedit_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            texttranslator__translatortextedit_moveevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (texttranslator__translatortextedit_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            texttranslator__translatortextedit_closeevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (texttranslator__translatortextedit_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            texttranslator__translatortextedit_tabletevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (texttranslator__translatortextedit_actionevent_callback) {
            QActionEvent* cbval1 = event;
            texttranslator__translatortextedit_actionevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (texttranslator__translatortextedit_hideevent_callback) {
            QHideEvent* cbval1 = event;
            texttranslator__translatortextedit_hideevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (texttranslator__translatortextedit_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = texttranslator__translatortextedit_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextTranslator__TranslatorTextEdit::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (texttranslator__translatortextedit_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = texttranslator__translatortextedit_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorTextEdit::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (texttranslator__translatortextedit_initpainter_callback) {
            QPainter* cbval1 = painter;
            texttranslator__translatortextedit_initpainter_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (texttranslator__translatortextedit_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = texttranslator__translatortextedit_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorTextEdit::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (texttranslator__translatortextedit_sharedpainter_callback) {
            QPainter* callback_ret = texttranslator__translatortextedit_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextTranslator__TranslatorTextEdit::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (texttranslator__translatortextedit_childevent_callback) {
            QChildEvent* cbval1 = event;
            texttranslator__translatortextedit_childevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (texttranslator__translatortextedit_customevent_callback) {
            QEvent* cbval1 = event;
            texttranslator__translatortextedit_customevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatortextedit_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            texttranslator__translatortextedit_connectnotify_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatortextedit_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            texttranslator__translatortextedit_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorTextEdit::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextTranslator__TranslatorTextEdit_SuperDropEvent(TextTranslator::TranslatorTextEdit* self, QDropEvent* param1);
    friend bool TextTranslator__TranslatorTextEdit_SuperEvent(TextTranslator::TranslatorTextEdit* self, QEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperTimerEvent(TextTranslator::TranslatorTextEdit* self, QTimerEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperKeyPressEvent(TextTranslator::TranslatorTextEdit* self, QKeyEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperKeyReleaseEvent(TextTranslator::TranslatorTextEdit* self, QKeyEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperResizeEvent(TextTranslator::TranslatorTextEdit* self, QResizeEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperPaintEvent(TextTranslator::TranslatorTextEdit* self, QPaintEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperMousePressEvent(TextTranslator::TranslatorTextEdit* self, QMouseEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperMouseMoveEvent(TextTranslator::TranslatorTextEdit* self, QMouseEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperMouseReleaseEvent(TextTranslator::TranslatorTextEdit* self, QMouseEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperMouseDoubleClickEvent(TextTranslator::TranslatorTextEdit* self, QMouseEvent* e);
    friend bool TextTranslator__TranslatorTextEdit_SuperFocusNextPrevChild(TextTranslator::TranslatorTextEdit* self, bool next);
    friend void TextTranslator__TranslatorTextEdit_SuperContextMenuEvent(TextTranslator::TranslatorTextEdit* self, QContextMenuEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperDragEnterEvent(TextTranslator::TranslatorTextEdit* self, QDragEnterEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperDragLeaveEvent(TextTranslator::TranslatorTextEdit* self, QDragLeaveEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperDragMoveEvent(TextTranslator::TranslatorTextEdit* self, QDragMoveEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperFocusInEvent(TextTranslator::TranslatorTextEdit* self, QFocusEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperFocusOutEvent(TextTranslator::TranslatorTextEdit* self, QFocusEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperShowEvent(TextTranslator::TranslatorTextEdit* self, QShowEvent* param1);
    friend void TextTranslator__TranslatorTextEdit_SuperChangeEvent(TextTranslator::TranslatorTextEdit* self, QEvent* e);
    friend void TextTranslator__TranslatorTextEdit_SuperWheelEvent(TextTranslator::TranslatorTextEdit* self, QWheelEvent* e);
    friend QMimeData* TextTranslator__TranslatorTextEdit_SuperCreateMimeDataFromSelection(const TextTranslator::TranslatorTextEdit* self);
    friend bool TextTranslator__TranslatorTextEdit_SuperCanInsertFromMimeData(const TextTranslator::TranslatorTextEdit* self, const QMimeData* source);
    friend void TextTranslator__TranslatorTextEdit_SuperInsertFromMimeData(TextTranslator::TranslatorTextEdit* self, const QMimeData* source);
    friend void TextTranslator__TranslatorTextEdit_SuperInputMethodEvent(TextTranslator::TranslatorTextEdit* self, QInputMethodEvent* param1);
    friend void TextTranslator__TranslatorTextEdit_SuperScrollContentsBy(TextTranslator::TranslatorTextEdit* self, int dx, int dy);
    friend void TextTranslator__TranslatorTextEdit_SuperDoSetTextCursor(TextTranslator::TranslatorTextEdit* self, const QTextCursor* cursor);
    friend bool TextTranslator__TranslatorTextEdit_SuperEventFilter(TextTranslator::TranslatorTextEdit* self, QObject* param1, QEvent* param2);
    friend bool TextTranslator__TranslatorTextEdit_SuperViewportEvent(TextTranslator::TranslatorTextEdit* self, QEvent* param1);
    friend QSize* TextTranslator__TranslatorTextEdit_SuperViewportSizeHint(const TextTranslator::TranslatorTextEdit* self);
    friend void TextTranslator__TranslatorTextEdit_SuperInitStyleOption(const TextTranslator::TranslatorTextEdit* self, QStyleOptionFrame* option);
    friend void TextTranslator__TranslatorTextEdit_SuperEnterEvent(TextTranslator::TranslatorTextEdit* self, QEnterEvent* event);
    friend void TextTranslator__TranslatorTextEdit_SuperLeaveEvent(TextTranslator::TranslatorTextEdit* self, QEvent* event);
    friend void TextTranslator__TranslatorTextEdit_SuperMoveEvent(TextTranslator::TranslatorTextEdit* self, QMoveEvent* event);
    friend void TextTranslator__TranslatorTextEdit_SuperCloseEvent(TextTranslator::TranslatorTextEdit* self, QCloseEvent* event);
    friend void TextTranslator__TranslatorTextEdit_SuperTabletEvent(TextTranslator::TranslatorTextEdit* self, QTabletEvent* event);
    friend void TextTranslator__TranslatorTextEdit_SuperActionEvent(TextTranslator::TranslatorTextEdit* self, QActionEvent* event);
    friend void TextTranslator__TranslatorTextEdit_SuperHideEvent(TextTranslator::TranslatorTextEdit* self, QHideEvent* event);
    friend bool TextTranslator__TranslatorTextEdit_SuperNativeEvent(TextTranslator::TranslatorTextEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int TextTranslator__TranslatorTextEdit_SuperMetric(const TextTranslator::TranslatorTextEdit* self, int param1);
    friend void TextTranslator__TranslatorTextEdit_SuperInitPainter(const TextTranslator::TranslatorTextEdit* self, QPainter* painter);
    friend QPaintDevice* TextTranslator__TranslatorTextEdit_SuperRedirected(const TextTranslator::TranslatorTextEdit* self, QPoint* offset);
    friend QPainter* TextTranslator__TranslatorTextEdit_SuperSharedPainter(const TextTranslator::TranslatorTextEdit* self);
    friend void TextTranslator__TranslatorTextEdit_SuperChildEvent(TextTranslator::TranslatorTextEdit* self, QChildEvent* event);
    friend void TextTranslator__TranslatorTextEdit_SuperCustomEvent(TextTranslator::TranslatorTextEdit* self, QEvent* event);
    friend void TextTranslator__TranslatorTextEdit_SuperConnectNotify(TextTranslator::TranslatorTextEdit* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorTextEdit_SuperDisconnectNotify(TextTranslator::TranslatorTextEdit* self, const QMetaMethod* signal);
};

// This class is a subclass of TextTranslator::TranslatorWidget
class VirtualTextTranslatorTranslatorWidget final : public TextTranslator::TranslatorWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextTranslator__TranslatorWidget_MetaObject_Callback = QMetaObject* (*)(const TextTranslator__TranslatorWidget*);
    using TextTranslator__TranslatorWidget_Metacast_Callback = void* (*)(TextTranslator__TranslatorWidget*, const char*);
    using TextTranslator__TranslatorWidget_Metacall_Callback = int (*)(TextTranslator__TranslatorWidget*, int, int, void**);
    using TextTranslator__TranslatorWidget_Event_Callback = bool (*)(TextTranslator__TranslatorWidget*, QEvent*);
    using TextTranslator__TranslatorWidget_DevType_Callback = int (*)(const TextTranslator__TranslatorWidget*);
    using TextTranslator__TranslatorWidget_SetVisible_Callback = void (*)(TextTranslator__TranslatorWidget*, bool);
    using TextTranslator__TranslatorWidget_SizeHint_Callback = QSize* (*)(const TextTranslator__TranslatorWidget*);
    using TextTranslator__TranslatorWidget_MinimumSizeHint_Callback = QSize* (*)(const TextTranslator__TranslatorWidget*);
    using TextTranslator__TranslatorWidget_HeightForWidth_Callback = int (*)(const TextTranslator__TranslatorWidget*, int);
    using TextTranslator__TranslatorWidget_HasHeightForWidth_Callback = bool (*)(const TextTranslator__TranslatorWidget*);
    using TextTranslator__TranslatorWidget_PaintEngine_Callback = QPaintEngine* (*)(const TextTranslator__TranslatorWidget*);
    using TextTranslator__TranslatorWidget_MousePressEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QMouseEvent*);
    using TextTranslator__TranslatorWidget_MouseReleaseEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QMouseEvent*);
    using TextTranslator__TranslatorWidget_MouseDoubleClickEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QMouseEvent*);
    using TextTranslator__TranslatorWidget_MouseMoveEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QMouseEvent*);
    using TextTranslator__TranslatorWidget_WheelEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QWheelEvent*);
    using TextTranslator__TranslatorWidget_KeyPressEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QKeyEvent*);
    using TextTranslator__TranslatorWidget_KeyReleaseEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QKeyEvent*);
    using TextTranslator__TranslatorWidget_FocusInEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QFocusEvent*);
    using TextTranslator__TranslatorWidget_FocusOutEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QFocusEvent*);
    using TextTranslator__TranslatorWidget_EnterEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QEnterEvent*);
    using TextTranslator__TranslatorWidget_LeaveEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QEvent*);
    using TextTranslator__TranslatorWidget_PaintEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QPaintEvent*);
    using TextTranslator__TranslatorWidget_MoveEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QMoveEvent*);
    using TextTranslator__TranslatorWidget_ResizeEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QResizeEvent*);
    using TextTranslator__TranslatorWidget_CloseEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QCloseEvent*);
    using TextTranslator__TranslatorWidget_ContextMenuEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QContextMenuEvent*);
    using TextTranslator__TranslatorWidget_TabletEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QTabletEvent*);
    using TextTranslator__TranslatorWidget_ActionEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QActionEvent*);
    using TextTranslator__TranslatorWidget_DragEnterEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QDragEnterEvent*);
    using TextTranslator__TranslatorWidget_DragMoveEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QDragMoveEvent*);
    using TextTranslator__TranslatorWidget_DragLeaveEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QDragLeaveEvent*);
    using TextTranslator__TranslatorWidget_DropEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QDropEvent*);
    using TextTranslator__TranslatorWidget_ShowEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QShowEvent*);
    using TextTranslator__TranslatorWidget_HideEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QHideEvent*);
    using TextTranslator__TranslatorWidget_NativeEvent_Callback = bool (*)(TextTranslator__TranslatorWidget*, libqt_string, void*, intptr_t*);
    using TextTranslator__TranslatorWidget_ChangeEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QEvent*);
    using TextTranslator__TranslatorWidget_Metric_Callback = int (*)(const TextTranslator__TranslatorWidget*, int);
    using TextTranslator__TranslatorWidget_InitPainter_Callback = void (*)(const TextTranslator__TranslatorWidget*, QPainter*);
    using TextTranslator__TranslatorWidget_Redirected_Callback = QPaintDevice* (*)(const TextTranslator__TranslatorWidget*, QPoint*);
    using TextTranslator__TranslatorWidget_SharedPainter_Callback = QPainter* (*)(const TextTranslator__TranslatorWidget*);
    using TextTranslator__TranslatorWidget_InputMethodEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QInputMethodEvent*);
    using TextTranslator__TranslatorWidget_InputMethodQuery_Callback = QVariant* (*)(const TextTranslator__TranslatorWidget*, int);
    using TextTranslator__TranslatorWidget_FocusNextPrevChild_Callback = bool (*)(TextTranslator__TranslatorWidget*, bool);
    using TextTranslator__TranslatorWidget_EventFilter_Callback = bool (*)(TextTranslator__TranslatorWidget*, QObject*, QEvent*);
    using TextTranslator__TranslatorWidget_TimerEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QTimerEvent*);
    using TextTranslator__TranslatorWidget_ChildEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QChildEvent*);
    using TextTranslator__TranslatorWidget_CustomEvent_Callback = void (*)(TextTranslator__TranslatorWidget*, QEvent*);
    using TextTranslator__TranslatorWidget_ConnectNotify_Callback = void (*)(TextTranslator__TranslatorWidget*, QMetaMethod*);
    using TextTranslator__TranslatorWidget_DisconnectNotify_Callback = void (*)(TextTranslator__TranslatorWidget*, QMetaMethod*);
    using TextTranslator::TranslatorWidget::create;
    using TextTranslator::TranslatorWidget::destroy;
    using TextTranslator::TranslatorWidget::focusNextChild;
    using TextTranslator::TranslatorWidget::focusPreviousChild;
    using TextTranslator::TranslatorWidget::getDecodedMetricF;
    using TextTranslator::TranslatorWidget::isSignalConnected;
    using TextTranslator::TranslatorWidget::receivers;
    using TextTranslator::TranslatorWidget::sender;
    using TextTranslator::TranslatorWidget::senderSignalIndex;
    using TextTranslator::TranslatorWidget::updateMicroFocus;

    // Instance callback storage
    TextTranslator__TranslatorWidget_MetaObject_Callback texttranslator__translatorwidget_metaobject_callback = nullptr;
    TextTranslator__TranslatorWidget_Metacast_Callback texttranslator__translatorwidget_metacast_callback = nullptr;
    TextTranslator__TranslatorWidget_Metacall_Callback texttranslator__translatorwidget_metacall_callback = nullptr;
    TextTranslator__TranslatorWidget_Event_Callback texttranslator__translatorwidget_event_callback = nullptr;
    TextTranslator__TranslatorWidget_DevType_Callback texttranslator__translatorwidget_devtype_callback = nullptr;
    TextTranslator__TranslatorWidget_SetVisible_Callback texttranslator__translatorwidget_setvisible_callback = nullptr;
    TextTranslator__TranslatorWidget_SizeHint_Callback texttranslator__translatorwidget_sizehint_callback = nullptr;
    TextTranslator__TranslatorWidget_MinimumSizeHint_Callback texttranslator__translatorwidget_minimumsizehint_callback = nullptr;
    TextTranslator__TranslatorWidget_HeightForWidth_Callback texttranslator__translatorwidget_heightforwidth_callback = nullptr;
    TextTranslator__TranslatorWidget_HasHeightForWidth_Callback texttranslator__translatorwidget_hasheightforwidth_callback = nullptr;
    TextTranslator__TranslatorWidget_PaintEngine_Callback texttranslator__translatorwidget_paintengine_callback = nullptr;
    TextTranslator__TranslatorWidget_MousePressEvent_Callback texttranslator__translatorwidget_mousepressevent_callback = nullptr;
    TextTranslator__TranslatorWidget_MouseReleaseEvent_Callback texttranslator__translatorwidget_mousereleaseevent_callback = nullptr;
    TextTranslator__TranslatorWidget_MouseDoubleClickEvent_Callback texttranslator__translatorwidget_mousedoubleclickevent_callback = nullptr;
    TextTranslator__TranslatorWidget_MouseMoveEvent_Callback texttranslator__translatorwidget_mousemoveevent_callback = nullptr;
    TextTranslator__TranslatorWidget_WheelEvent_Callback texttranslator__translatorwidget_wheelevent_callback = nullptr;
    TextTranslator__TranslatorWidget_KeyPressEvent_Callback texttranslator__translatorwidget_keypressevent_callback = nullptr;
    TextTranslator__TranslatorWidget_KeyReleaseEvent_Callback texttranslator__translatorwidget_keyreleaseevent_callback = nullptr;
    TextTranslator__TranslatorWidget_FocusInEvent_Callback texttranslator__translatorwidget_focusinevent_callback = nullptr;
    TextTranslator__TranslatorWidget_FocusOutEvent_Callback texttranslator__translatorwidget_focusoutevent_callback = nullptr;
    TextTranslator__TranslatorWidget_EnterEvent_Callback texttranslator__translatorwidget_enterevent_callback = nullptr;
    TextTranslator__TranslatorWidget_LeaveEvent_Callback texttranslator__translatorwidget_leaveevent_callback = nullptr;
    TextTranslator__TranslatorWidget_PaintEvent_Callback texttranslator__translatorwidget_paintevent_callback = nullptr;
    TextTranslator__TranslatorWidget_MoveEvent_Callback texttranslator__translatorwidget_moveevent_callback = nullptr;
    TextTranslator__TranslatorWidget_ResizeEvent_Callback texttranslator__translatorwidget_resizeevent_callback = nullptr;
    TextTranslator__TranslatorWidget_CloseEvent_Callback texttranslator__translatorwidget_closeevent_callback = nullptr;
    TextTranslator__TranslatorWidget_ContextMenuEvent_Callback texttranslator__translatorwidget_contextmenuevent_callback = nullptr;
    TextTranslator__TranslatorWidget_TabletEvent_Callback texttranslator__translatorwidget_tabletevent_callback = nullptr;
    TextTranslator__TranslatorWidget_ActionEvent_Callback texttranslator__translatorwidget_actionevent_callback = nullptr;
    TextTranslator__TranslatorWidget_DragEnterEvent_Callback texttranslator__translatorwidget_dragenterevent_callback = nullptr;
    TextTranslator__TranslatorWidget_DragMoveEvent_Callback texttranslator__translatorwidget_dragmoveevent_callback = nullptr;
    TextTranslator__TranslatorWidget_DragLeaveEvent_Callback texttranslator__translatorwidget_dragleaveevent_callback = nullptr;
    TextTranslator__TranslatorWidget_DropEvent_Callback texttranslator__translatorwidget_dropevent_callback = nullptr;
    TextTranslator__TranslatorWidget_ShowEvent_Callback texttranslator__translatorwidget_showevent_callback = nullptr;
    TextTranslator__TranslatorWidget_HideEvent_Callback texttranslator__translatorwidget_hideevent_callback = nullptr;
    TextTranslator__TranslatorWidget_NativeEvent_Callback texttranslator__translatorwidget_nativeevent_callback = nullptr;
    TextTranslator__TranslatorWidget_ChangeEvent_Callback texttranslator__translatorwidget_changeevent_callback = nullptr;
    TextTranslator__TranslatorWidget_Metric_Callback texttranslator__translatorwidget_metric_callback = nullptr;
    TextTranslator__TranslatorWidget_InitPainter_Callback texttranslator__translatorwidget_initpainter_callback = nullptr;
    TextTranslator__TranslatorWidget_Redirected_Callback texttranslator__translatorwidget_redirected_callback = nullptr;
    TextTranslator__TranslatorWidget_SharedPainter_Callback texttranslator__translatorwidget_sharedpainter_callback = nullptr;
    TextTranslator__TranslatorWidget_InputMethodEvent_Callback texttranslator__translatorwidget_inputmethodevent_callback = nullptr;
    TextTranslator__TranslatorWidget_InputMethodQuery_Callback texttranslator__translatorwidget_inputmethodquery_callback = nullptr;
    TextTranslator__TranslatorWidget_FocusNextPrevChild_Callback texttranslator__translatorwidget_focusnextprevchild_callback = nullptr;
    TextTranslator__TranslatorWidget_EventFilter_Callback texttranslator__translatorwidget_eventfilter_callback = nullptr;
    TextTranslator__TranslatorWidget_TimerEvent_Callback texttranslator__translatorwidget_timerevent_callback = nullptr;
    TextTranslator__TranslatorWidget_ChildEvent_Callback texttranslator__translatorwidget_childevent_callback = nullptr;
    TextTranslator__TranslatorWidget_CustomEvent_Callback texttranslator__translatorwidget_customevent_callback = nullptr;
    TextTranslator__TranslatorWidget_ConnectNotify_Callback texttranslator__translatorwidget_connectnotify_callback = nullptr;
    TextTranslator__TranslatorWidget_DisconnectNotify_Callback texttranslator__translatorwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextTranslator::TranslatorWidget {
        using TextTranslator::TranslatorWidget::actionEvent;
        using TextTranslator::TranslatorWidget::changeEvent;
        using TextTranslator::TranslatorWidget::childEvent;
        using TextTranslator::TranslatorWidget::closeEvent;
        using TextTranslator::TranslatorWidget::connectNotify;
        using TextTranslator::TranslatorWidget::contextMenuEvent;
        using TextTranslator::TranslatorWidget::customEvent;
        using TextTranslator::TranslatorWidget::disconnectNotify;
        using TextTranslator::TranslatorWidget::dragEnterEvent;
        using TextTranslator::TranslatorWidget::dragLeaveEvent;
        using TextTranslator::TranslatorWidget::dragMoveEvent;
        using TextTranslator::TranslatorWidget::dropEvent;
        using TextTranslator::TranslatorWidget::enterEvent;
        using TextTranslator::TranslatorWidget::event;
        using TextTranslator::TranslatorWidget::focusInEvent;
        using TextTranslator::TranslatorWidget::focusNextPrevChild;
        using TextTranslator::TranslatorWidget::focusOutEvent;
        using TextTranslator::TranslatorWidget::hideEvent;
        using TextTranslator::TranslatorWidget::initPainter;
        using TextTranslator::TranslatorWidget::inputMethodEvent;
        using TextTranslator::TranslatorWidget::keyPressEvent;
        using TextTranslator::TranslatorWidget::keyReleaseEvent;
        using TextTranslator::TranslatorWidget::leaveEvent;
        using TextTranslator::TranslatorWidget::metric;
        using TextTranslator::TranslatorWidget::mouseDoubleClickEvent;
        using TextTranslator::TranslatorWidget::mouseMoveEvent;
        using TextTranslator::TranslatorWidget::mousePressEvent;
        using TextTranslator::TranslatorWidget::mouseReleaseEvent;
        using TextTranslator::TranslatorWidget::moveEvent;
        using TextTranslator::TranslatorWidget::nativeEvent;
        using TextTranslator::TranslatorWidget::paintEvent;
        using TextTranslator::TranslatorWidget::redirected;
        using TextTranslator::TranslatorWidget::resizeEvent;
        using TextTranslator::TranslatorWidget::sharedPainter;
        using TextTranslator::TranslatorWidget::showEvent;
        using TextTranslator::TranslatorWidget::tabletEvent;
        using TextTranslator::TranslatorWidget::timerEvent;
        using TextTranslator::TranslatorWidget::wheelEvent;
    };

    VirtualTextTranslatorTranslatorWidget(QWidget* parent) : TextTranslator::TranslatorWidget(parent) {};
    VirtualTextTranslatorTranslatorWidget() : TextTranslator::TranslatorWidget() {};
    VirtualTextTranslatorTranslatorWidget(const QString& text) : TextTranslator::TranslatorWidget(text) {};
    VirtualTextTranslatorTranslatorWidget(const QString& text, QWidget* parent) : TextTranslator::TranslatorWidget(text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (texttranslator__translatorwidget_metaobject_callback) {
            QMetaObject* callback_ret = texttranslator__translatorwidget_metaobject_callback(this);
            return callback_ret;
        }
        return TextTranslator__TranslatorWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (texttranslator__translatorwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = texttranslator__translatorwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (texttranslator__translatorwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = texttranslator__translatorwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (texttranslator__translatorwidget_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = texttranslator__translatorwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorWidget::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (texttranslator__translatorwidget_devtype_callback) {
            int callback_ret = texttranslator__translatorwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (texttranslator__translatorwidget_setvisible_callback) {
            bool cbval1 = visible;
            texttranslator__translatorwidget_setvisible_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (texttranslator__translatorwidget_sizehint_callback) {
            QSize* callback_ret = texttranslator__translatorwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (texttranslator__translatorwidget_minimumsizehint_callback) {
            QSize* callback_ret = texttranslator__translatorwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (texttranslator__translatorwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = texttranslator__translatorwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (texttranslator__translatorwidget_hasheightforwidth_callback) {
            bool callback_ret = texttranslator__translatorwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextTranslator__TranslatorWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (texttranslator__translatorwidget_paintengine_callback) {
            QPaintEngine* callback_ret = texttranslator__translatorwidget_paintengine_callback(this);
            return callback_ret;
        }
        return TextTranslator__TranslatorWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (texttranslator__translatorwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            texttranslator__translatorwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (texttranslator__translatorwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            texttranslator__translatorwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (texttranslator__translatorwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            texttranslator__translatorwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (texttranslator__translatorwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            texttranslator__translatorwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (texttranslator__translatorwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            texttranslator__translatorwidget_wheelevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (texttranslator__translatorwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            texttranslator__translatorwidget_keypressevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (texttranslator__translatorwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            texttranslator__translatorwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (texttranslator__translatorwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            texttranslator__translatorwidget_focusinevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (texttranslator__translatorwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            texttranslator__translatorwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (texttranslator__translatorwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            texttranslator__translatorwidget_enterevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (texttranslator__translatorwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            texttranslator__translatorwidget_leaveevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (texttranslator__translatorwidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            texttranslator__translatorwidget_paintevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (texttranslator__translatorwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            texttranslator__translatorwidget_moveevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (texttranslator__translatorwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            texttranslator__translatorwidget_resizeevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (texttranslator__translatorwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            texttranslator__translatorwidget_closeevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (texttranslator__translatorwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            texttranslator__translatorwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (texttranslator__translatorwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            texttranslator__translatorwidget_tabletevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (texttranslator__translatorwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            texttranslator__translatorwidget_actionevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (texttranslator__translatorwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            texttranslator__translatorwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (texttranslator__translatorwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            texttranslator__translatorwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (texttranslator__translatorwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            texttranslator__translatorwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (texttranslator__translatorwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            texttranslator__translatorwidget_dropevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (texttranslator__translatorwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            texttranslator__translatorwidget_showevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (texttranslator__translatorwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            texttranslator__translatorwidget_hideevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (texttranslator__translatorwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = texttranslator__translatorwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextTranslator__TranslatorWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (texttranslator__translatorwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            texttranslator__translatorwidget_changeevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (texttranslator__translatorwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = texttranslator__translatorwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (texttranslator__translatorwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            texttranslator__translatorwidget_initpainter_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (texttranslator__translatorwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = texttranslator__translatorwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (texttranslator__translatorwidget_sharedpainter_callback) {
            QPainter* callback_ret = texttranslator__translatorwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextTranslator__TranslatorWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (texttranslator__translatorwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            texttranslator__translatorwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (texttranslator__translatorwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = texttranslator__translatorwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (texttranslator__translatorwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = texttranslator__translatorwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (texttranslator__translatorwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = texttranslator__translatorwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextTranslator__TranslatorWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (texttranslator__translatorwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            texttranslator__translatorwidget_timerevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (texttranslator__translatorwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            texttranslator__translatorwidget_childevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (texttranslator__translatorwidget_customevent_callback) {
            QEvent* cbval1 = event;
            texttranslator__translatorwidget_customevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatorwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            texttranslator__translatorwidget_connectnotify_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatorwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            texttranslator__translatorwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend bool TextTranslator__TranslatorWidget_SuperEvent(TextTranslator::TranslatorWidget* self, QEvent* e);
    friend void TextTranslator__TranslatorWidget_SuperMousePressEvent(TextTranslator::TranslatorWidget* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperMouseReleaseEvent(TextTranslator::TranslatorWidget* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperMouseDoubleClickEvent(TextTranslator::TranslatorWidget* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperMouseMoveEvent(TextTranslator::TranslatorWidget* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperWheelEvent(TextTranslator::TranslatorWidget* self, QWheelEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperKeyPressEvent(TextTranslator::TranslatorWidget* self, QKeyEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperKeyReleaseEvent(TextTranslator::TranslatorWidget* self, QKeyEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperFocusInEvent(TextTranslator::TranslatorWidget* self, QFocusEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperFocusOutEvent(TextTranslator::TranslatorWidget* self, QFocusEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperEnterEvent(TextTranslator::TranslatorWidget* self, QEnterEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperLeaveEvent(TextTranslator::TranslatorWidget* self, QEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperPaintEvent(TextTranslator::TranslatorWidget* self, QPaintEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperMoveEvent(TextTranslator::TranslatorWidget* self, QMoveEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperResizeEvent(TextTranslator::TranslatorWidget* self, QResizeEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperCloseEvent(TextTranslator::TranslatorWidget* self, QCloseEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperContextMenuEvent(TextTranslator::TranslatorWidget* self, QContextMenuEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperTabletEvent(TextTranslator::TranslatorWidget* self, QTabletEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperActionEvent(TextTranslator::TranslatorWidget* self, QActionEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperDragEnterEvent(TextTranslator::TranslatorWidget* self, QDragEnterEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperDragMoveEvent(TextTranslator::TranslatorWidget* self, QDragMoveEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperDragLeaveEvent(TextTranslator::TranslatorWidget* self, QDragLeaveEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperDropEvent(TextTranslator::TranslatorWidget* self, QDropEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperShowEvent(TextTranslator::TranslatorWidget* self, QShowEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperHideEvent(TextTranslator::TranslatorWidget* self, QHideEvent* event);
    friend bool TextTranslator__TranslatorWidget_SuperNativeEvent(TextTranslator::TranslatorWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextTranslator__TranslatorWidget_SuperChangeEvent(TextTranslator::TranslatorWidget* self, QEvent* param1);
    friend int TextTranslator__TranslatorWidget_SuperMetric(const TextTranslator::TranslatorWidget* self, int param1);
    friend void TextTranslator__TranslatorWidget_SuperInitPainter(const TextTranslator::TranslatorWidget* self, QPainter* painter);
    friend QPaintDevice* TextTranslator__TranslatorWidget_SuperRedirected(const TextTranslator::TranslatorWidget* self, QPoint* offset);
    friend QPainter* TextTranslator__TranslatorWidget_SuperSharedPainter(const TextTranslator::TranslatorWidget* self);
    friend void TextTranslator__TranslatorWidget_SuperInputMethodEvent(TextTranslator::TranslatorWidget* self, QInputMethodEvent* param1);
    friend bool TextTranslator__TranslatorWidget_SuperFocusNextPrevChild(TextTranslator::TranslatorWidget* self, bool next);
    friend void TextTranslator__TranslatorWidget_SuperTimerEvent(TextTranslator::TranslatorWidget* self, QTimerEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperChildEvent(TextTranslator::TranslatorWidget* self, QChildEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperCustomEvent(TextTranslator::TranslatorWidget* self, QEvent* event);
    friend void TextTranslator__TranslatorWidget_SuperConnectNotify(TextTranslator::TranslatorWidget* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorWidget_SuperDisconnectNotify(TextTranslator::TranslatorWidget* self, const QMetaMethod* signal);
};

#endif
