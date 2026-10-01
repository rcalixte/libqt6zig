#pragma once
#ifndef EXTRAS_KTEXTWIDGETS_LIBKRICHTEXTEDIT_HXX
#define EXTRAS_KTEXTWIDGETS_LIBKRICHTEXTEDIT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KRichTextEdit
class VirtualKRichTextEdit final : public KRichTextEdit {
  public:
    // Virtual class public types (including callbacks and access types)
    using KRichTextEdit_MetaObject_Callback = QMetaObject* (*)(const KRichTextEdit*);
    using KRichTextEdit_Metacast_Callback = void* (*)(KRichTextEdit*, const char*);
    using KRichTextEdit_Metacall_Callback = int (*)(KRichTextEdit*, int, int, void**);
    using KRichTextEdit_KeyPressEvent_Callback = void (*)(KRichTextEdit*, QKeyEvent*);
    using KRichTextEdit_SetReadOnly_Callback = void (*)(KRichTextEdit*, bool);
    using KRichTextEdit_SetCheckSpellingEnabled_Callback = void (*)(KRichTextEdit*, bool);
    using KRichTextEdit_CheckSpellingEnabled_Callback = bool (*)(const KRichTextEdit*);
    using KRichTextEdit_ShouldBlockBeSpellChecked_Callback = bool (*)(const KRichTextEdit*, const char*);
    using KRichTextEdit_CreateHighlighter_Callback = void (*)(KRichTextEdit*);
    using KRichTextEdit_MousePopupMenu_Callback = QMenu* (*)(KRichTextEdit*);
    using KRichTextEdit_Event_Callback = bool (*)(KRichTextEdit*, QEvent*);
    using KRichTextEdit_FocusInEvent_Callback = void (*)(KRichTextEdit*, QFocusEvent*);
    using KRichTextEdit_DeleteWordBack_Callback = void (*)(KRichTextEdit*);
    using KRichTextEdit_DeleteWordForward_Callback = void (*)(KRichTextEdit*);
    using KRichTextEdit_ContextMenuEvent_Callback = void (*)(KRichTextEdit*, QContextMenuEvent*);
    using KRichTextEdit_LoadResource_Callback = QVariant* (*)(KRichTextEdit*, int, QUrl*);
    using KRichTextEdit_InputMethodQuery_Callback = QVariant* (*)(const KRichTextEdit*, int);
    using KRichTextEdit_TimerEvent_Callback = void (*)(KRichTextEdit*, QTimerEvent*);
    using KRichTextEdit_KeyReleaseEvent_Callback = void (*)(KRichTextEdit*, QKeyEvent*);
    using KRichTextEdit_ResizeEvent_Callback = void (*)(KRichTextEdit*, QResizeEvent*);
    using KRichTextEdit_PaintEvent_Callback = void (*)(KRichTextEdit*, QPaintEvent*);
    using KRichTextEdit_MousePressEvent_Callback = void (*)(KRichTextEdit*, QMouseEvent*);
    using KRichTextEdit_MouseMoveEvent_Callback = void (*)(KRichTextEdit*, QMouseEvent*);
    using KRichTextEdit_MouseReleaseEvent_Callback = void (*)(KRichTextEdit*, QMouseEvent*);
    using KRichTextEdit_MouseDoubleClickEvent_Callback = void (*)(KRichTextEdit*, QMouseEvent*);
    using KRichTextEdit_FocusNextPrevChild_Callback = bool (*)(KRichTextEdit*, bool);
    using KRichTextEdit_DragEnterEvent_Callback = void (*)(KRichTextEdit*, QDragEnterEvent*);
    using KRichTextEdit_DragLeaveEvent_Callback = void (*)(KRichTextEdit*, QDragLeaveEvent*);
    using KRichTextEdit_DragMoveEvent_Callback = void (*)(KRichTextEdit*, QDragMoveEvent*);
    using KRichTextEdit_DropEvent_Callback = void (*)(KRichTextEdit*, QDropEvent*);
    using KRichTextEdit_FocusOutEvent_Callback = void (*)(KRichTextEdit*, QFocusEvent*);
    using KRichTextEdit_ShowEvent_Callback = void (*)(KRichTextEdit*, QShowEvent*);
    using KRichTextEdit_ChangeEvent_Callback = void (*)(KRichTextEdit*, QEvent*);
    using KRichTextEdit_WheelEvent_Callback = void (*)(KRichTextEdit*, QWheelEvent*);
    using KRichTextEdit_CreateMimeDataFromSelection_Callback = QMimeData* (*)(const KRichTextEdit*);
    using KRichTextEdit_CanInsertFromMimeData_Callback = bool (*)(const KRichTextEdit*, QMimeData*);
    using KRichTextEdit_InsertFromMimeData_Callback = void (*)(KRichTextEdit*, QMimeData*);
    using KRichTextEdit_InputMethodEvent_Callback = void (*)(KRichTextEdit*, QInputMethodEvent*);
    using KRichTextEdit_ScrollContentsBy_Callback = void (*)(KRichTextEdit*, int, int);
    using KRichTextEdit_DoSetTextCursor_Callback = void (*)(KRichTextEdit*, QTextCursor*);
    using KRichTextEdit_MinimumSizeHint_Callback = QSize* (*)(const KRichTextEdit*);
    using KRichTextEdit_SizeHint_Callback = QSize* (*)(const KRichTextEdit*);
    using KRichTextEdit_SetupViewport_Callback = void (*)(KRichTextEdit*, QWidget*);
    using KRichTextEdit_EventFilter_Callback = bool (*)(KRichTextEdit*, QObject*, QEvent*);
    using KRichTextEdit_ViewportEvent_Callback = bool (*)(KRichTextEdit*, QEvent*);
    using KRichTextEdit_ViewportSizeHint_Callback = QSize* (*)(const KRichTextEdit*);
    using KRichTextEdit_InitStyleOption_Callback = void (*)(const KRichTextEdit*, QStyleOptionFrame*);
    using KRichTextEdit_DevType_Callback = int (*)(const KRichTextEdit*);
    using KRichTextEdit_SetVisible_Callback = void (*)(KRichTextEdit*, bool);
    using KRichTextEdit_HeightForWidth_Callback = int (*)(const KRichTextEdit*, int);
    using KRichTextEdit_HasHeightForWidth_Callback = bool (*)(const KRichTextEdit*);
    using KRichTextEdit_PaintEngine_Callback = QPaintEngine* (*)(const KRichTextEdit*);
    using KRichTextEdit_EnterEvent_Callback = void (*)(KRichTextEdit*, QEnterEvent*);
    using KRichTextEdit_LeaveEvent_Callback = void (*)(KRichTextEdit*, QEvent*);
    using KRichTextEdit_MoveEvent_Callback = void (*)(KRichTextEdit*, QMoveEvent*);
    using KRichTextEdit_CloseEvent_Callback = void (*)(KRichTextEdit*, QCloseEvent*);
    using KRichTextEdit_TabletEvent_Callback = void (*)(KRichTextEdit*, QTabletEvent*);
    using KRichTextEdit_ActionEvent_Callback = void (*)(KRichTextEdit*, QActionEvent*);
    using KRichTextEdit_HideEvent_Callback = void (*)(KRichTextEdit*, QHideEvent*);
    using KRichTextEdit_NativeEvent_Callback = bool (*)(KRichTextEdit*, libqt_string, void*, intptr_t*);
    using KRichTextEdit_Metric_Callback = int (*)(const KRichTextEdit*, int);
    using KRichTextEdit_InitPainter_Callback = void (*)(const KRichTextEdit*, QPainter*);
    using KRichTextEdit_Redirected_Callback = QPaintDevice* (*)(const KRichTextEdit*, QPoint*);
    using KRichTextEdit_SharedPainter_Callback = QPainter* (*)(const KRichTextEdit*);
    using KRichTextEdit_ChildEvent_Callback = void (*)(KRichTextEdit*, QChildEvent*);
    using KRichTextEdit_CustomEvent_Callback = void (*)(KRichTextEdit*, QEvent*);
    using KRichTextEdit_ConnectNotify_Callback = void (*)(KRichTextEdit*, QMetaMethod*);
    using KRichTextEdit_DisconnectNotify_Callback = void (*)(KRichTextEdit*, QMetaMethod*);
    using KRichTextEdit::create;
    using KRichTextEdit::destroy;
    using KRichTextEdit::drawFrame;
    using KRichTextEdit::focusNextChild;
    using KRichTextEdit::focusPreviousChild;
    using KRichTextEdit::getDecodedMetricF;
    using KRichTextEdit::isSignalConnected;
    using KRichTextEdit::receivers;
    using KRichTextEdit::sender;
    using KRichTextEdit::senderSignalIndex;
    using KRichTextEdit::setViewportMargins;
    using KRichTextEdit::slotDoFind;
    using KRichTextEdit::slotDoReplace;
    using KRichTextEdit::slotFind;
    using KRichTextEdit::slotFindNext;
    using KRichTextEdit::slotFindPrevious;
    using KRichTextEdit::slotReplace;
    using KRichTextEdit::slotReplaceNext;
    using KRichTextEdit::slotSpeakText;
    using KRichTextEdit::updateMicroFocus;
    using KRichTextEdit::viewportMargins;
    using KRichTextEdit::zoomInF;

    // Instance callback storage
    KRichTextEdit_MetaObject_Callback krichtextedit_metaobject_callback = nullptr;
    KRichTextEdit_Metacast_Callback krichtextedit_metacast_callback = nullptr;
    KRichTextEdit_Metacall_Callback krichtextedit_metacall_callback = nullptr;
    KRichTextEdit_KeyPressEvent_Callback krichtextedit_keypressevent_callback = nullptr;
    KRichTextEdit_SetReadOnly_Callback krichtextedit_setreadonly_callback = nullptr;
    KRichTextEdit_SetCheckSpellingEnabled_Callback krichtextedit_setcheckspellingenabled_callback = nullptr;
    KRichTextEdit_CheckSpellingEnabled_Callback krichtextedit_checkspellingenabled_callback = nullptr;
    KRichTextEdit_ShouldBlockBeSpellChecked_Callback krichtextedit_shouldblockbespellchecked_callback = nullptr;
    KRichTextEdit_CreateHighlighter_Callback krichtextedit_createhighlighter_callback = nullptr;
    KRichTextEdit_MousePopupMenu_Callback krichtextedit_mousepopupmenu_callback = nullptr;
    KRichTextEdit_Event_Callback krichtextedit_event_callback = nullptr;
    KRichTextEdit_FocusInEvent_Callback krichtextedit_focusinevent_callback = nullptr;
    KRichTextEdit_DeleteWordBack_Callback krichtextedit_deletewordback_callback = nullptr;
    KRichTextEdit_DeleteWordForward_Callback krichtextedit_deletewordforward_callback = nullptr;
    KRichTextEdit_ContextMenuEvent_Callback krichtextedit_contextmenuevent_callback = nullptr;
    KRichTextEdit_LoadResource_Callback krichtextedit_loadresource_callback = nullptr;
    KRichTextEdit_InputMethodQuery_Callback krichtextedit_inputmethodquery_callback = nullptr;
    KRichTextEdit_TimerEvent_Callback krichtextedit_timerevent_callback = nullptr;
    KRichTextEdit_KeyReleaseEvent_Callback krichtextedit_keyreleaseevent_callback = nullptr;
    KRichTextEdit_ResizeEvent_Callback krichtextedit_resizeevent_callback = nullptr;
    KRichTextEdit_PaintEvent_Callback krichtextedit_paintevent_callback = nullptr;
    KRichTextEdit_MousePressEvent_Callback krichtextedit_mousepressevent_callback = nullptr;
    KRichTextEdit_MouseMoveEvent_Callback krichtextedit_mousemoveevent_callback = nullptr;
    KRichTextEdit_MouseReleaseEvent_Callback krichtextedit_mousereleaseevent_callback = nullptr;
    KRichTextEdit_MouseDoubleClickEvent_Callback krichtextedit_mousedoubleclickevent_callback = nullptr;
    KRichTextEdit_FocusNextPrevChild_Callback krichtextedit_focusnextprevchild_callback = nullptr;
    KRichTextEdit_DragEnterEvent_Callback krichtextedit_dragenterevent_callback = nullptr;
    KRichTextEdit_DragLeaveEvent_Callback krichtextedit_dragleaveevent_callback = nullptr;
    KRichTextEdit_DragMoveEvent_Callback krichtextedit_dragmoveevent_callback = nullptr;
    KRichTextEdit_DropEvent_Callback krichtextedit_dropevent_callback = nullptr;
    KRichTextEdit_FocusOutEvent_Callback krichtextedit_focusoutevent_callback = nullptr;
    KRichTextEdit_ShowEvent_Callback krichtextedit_showevent_callback = nullptr;
    KRichTextEdit_ChangeEvent_Callback krichtextedit_changeevent_callback = nullptr;
    KRichTextEdit_WheelEvent_Callback krichtextedit_wheelevent_callback = nullptr;
    KRichTextEdit_CreateMimeDataFromSelection_Callback krichtextedit_createmimedatafromselection_callback = nullptr;
    KRichTextEdit_CanInsertFromMimeData_Callback krichtextedit_caninsertfrommimedata_callback = nullptr;
    KRichTextEdit_InsertFromMimeData_Callback krichtextedit_insertfrommimedata_callback = nullptr;
    KRichTextEdit_InputMethodEvent_Callback krichtextedit_inputmethodevent_callback = nullptr;
    KRichTextEdit_ScrollContentsBy_Callback krichtextedit_scrollcontentsby_callback = nullptr;
    KRichTextEdit_DoSetTextCursor_Callback krichtextedit_dosettextcursor_callback = nullptr;
    KRichTextEdit_MinimumSizeHint_Callback krichtextedit_minimumsizehint_callback = nullptr;
    KRichTextEdit_SizeHint_Callback krichtextedit_sizehint_callback = nullptr;
    KRichTextEdit_SetupViewport_Callback krichtextedit_setupviewport_callback = nullptr;
    KRichTextEdit_EventFilter_Callback krichtextedit_eventfilter_callback = nullptr;
    KRichTextEdit_ViewportEvent_Callback krichtextedit_viewportevent_callback = nullptr;
    KRichTextEdit_ViewportSizeHint_Callback krichtextedit_viewportsizehint_callback = nullptr;
    KRichTextEdit_InitStyleOption_Callback krichtextedit_initstyleoption_callback = nullptr;
    KRichTextEdit_DevType_Callback krichtextedit_devtype_callback = nullptr;
    KRichTextEdit_SetVisible_Callback krichtextedit_setvisible_callback = nullptr;
    KRichTextEdit_HeightForWidth_Callback krichtextedit_heightforwidth_callback = nullptr;
    KRichTextEdit_HasHeightForWidth_Callback krichtextedit_hasheightforwidth_callback = nullptr;
    KRichTextEdit_PaintEngine_Callback krichtextedit_paintengine_callback = nullptr;
    KRichTextEdit_EnterEvent_Callback krichtextedit_enterevent_callback = nullptr;
    KRichTextEdit_LeaveEvent_Callback krichtextedit_leaveevent_callback = nullptr;
    KRichTextEdit_MoveEvent_Callback krichtextedit_moveevent_callback = nullptr;
    KRichTextEdit_CloseEvent_Callback krichtextedit_closeevent_callback = nullptr;
    KRichTextEdit_TabletEvent_Callback krichtextedit_tabletevent_callback = nullptr;
    KRichTextEdit_ActionEvent_Callback krichtextedit_actionevent_callback = nullptr;
    KRichTextEdit_HideEvent_Callback krichtextedit_hideevent_callback = nullptr;
    KRichTextEdit_NativeEvent_Callback krichtextedit_nativeevent_callback = nullptr;
    KRichTextEdit_Metric_Callback krichtextedit_metric_callback = nullptr;
    KRichTextEdit_InitPainter_Callback krichtextedit_initpainter_callback = nullptr;
    KRichTextEdit_Redirected_Callback krichtextedit_redirected_callback = nullptr;
    KRichTextEdit_SharedPainter_Callback krichtextedit_sharedpainter_callback = nullptr;
    KRichTextEdit_ChildEvent_Callback krichtextedit_childevent_callback = nullptr;
    KRichTextEdit_CustomEvent_Callback krichtextedit_customevent_callback = nullptr;
    KRichTextEdit_ConnectNotify_Callback krichtextedit_connectnotify_callback = nullptr;
    KRichTextEdit_DisconnectNotify_Callback krichtextedit_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KRichTextEdit {
        using KRichTextEdit::actionEvent;
        using KRichTextEdit::canInsertFromMimeData;
        using KRichTextEdit::changeEvent;
        using KRichTextEdit::childEvent;
        using KRichTextEdit::closeEvent;
        using KRichTextEdit::connectNotify;
        using KRichTextEdit::contextMenuEvent;
        using KRichTextEdit::createMimeDataFromSelection;
        using KRichTextEdit::customEvent;
        using KRichTextEdit::deleteWordBack;
        using KRichTextEdit::deleteWordForward;
        using KRichTextEdit::disconnectNotify;
        using KRichTextEdit::doSetTextCursor;
        using KRichTextEdit::dragEnterEvent;
        using KRichTextEdit::dragLeaveEvent;
        using KRichTextEdit::dragMoveEvent;
        using KRichTextEdit::dropEvent;
        using KRichTextEdit::enterEvent;
        using KRichTextEdit::event;
        using KRichTextEdit::eventFilter;
        using KRichTextEdit::focusInEvent;
        using KRichTextEdit::focusNextPrevChild;
        using KRichTextEdit::focusOutEvent;
        using KRichTextEdit::hideEvent;
        using KRichTextEdit::initPainter;
        using KRichTextEdit::initStyleOption;
        using KRichTextEdit::inputMethodEvent;
        using KRichTextEdit::insertFromMimeData;
        using KRichTextEdit::keyPressEvent;
        using KRichTextEdit::keyReleaseEvent;
        using KRichTextEdit::leaveEvent;
        using KRichTextEdit::metric;
        using KRichTextEdit::mouseDoubleClickEvent;
        using KRichTextEdit::mouseMoveEvent;
        using KRichTextEdit::mousePressEvent;
        using KRichTextEdit::mouseReleaseEvent;
        using KRichTextEdit::moveEvent;
        using KRichTextEdit::nativeEvent;
        using KRichTextEdit::paintEvent;
        using KRichTextEdit::redirected;
        using KRichTextEdit::resizeEvent;
        using KRichTextEdit::scrollContentsBy;
        using KRichTextEdit::sharedPainter;
        using KRichTextEdit::showEvent;
        using KRichTextEdit::tabletEvent;
        using KRichTextEdit::timerEvent;
        using KRichTextEdit::viewportEvent;
        using KRichTextEdit::viewportSizeHint;
        using KRichTextEdit::wheelEvent;
    };

    VirtualKRichTextEdit(QWidget* parent) : KRichTextEdit(parent) {};
    VirtualKRichTextEdit(const QString& text) : KRichTextEdit(text) {};
    VirtualKRichTextEdit() : KRichTextEdit() {};
    VirtualKRichTextEdit(const QString& text, QWidget* parent) : KRichTextEdit(text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (krichtextedit_metaobject_callback) {
            QMetaObject* callback_ret = krichtextedit_metaobject_callback(this);
            return callback_ret;
        }
        return KRichTextEdit::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (krichtextedit_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = krichtextedit_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KRichTextEdit::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (krichtextedit_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = krichtextedit_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KRichTextEdit::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (krichtextedit_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            krichtextedit_keypressevent_callback(this, cbval1);
            return;
        }
        KRichTextEdit::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReadOnly(bool readOnly) override {
        if (krichtextedit_setreadonly_callback) {
            bool cbval1 = readOnly;
            krichtextedit_setreadonly_callback(this, cbval1);
            return;
        }
        KRichTextEdit::setReadOnly(readOnly);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCheckSpellingEnabled(bool check) override {
        if (krichtextedit_setcheckspellingenabled_callback) {
            bool cbval1 = check;
            krichtextedit_setcheckspellingenabled_callback(this, cbval1);
            return;
        }
        KRichTextEdit::setCheckSpellingEnabled(check);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool checkSpellingEnabled() const override {
        if (krichtextedit_checkspellingenabled_callback) {
            bool callback_ret = krichtextedit_checkspellingenabled_callback(this);
            return callback_ret;
        }
        return KRichTextEdit::checkSpellingEnabled();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool shouldBlockBeSpellChecked(const QString& block) const override {
        if (krichtextedit_shouldblockbespellchecked_callback) {
            const auto block_ret = block;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray block_b = block_ret.toUtf8();
            auto block_str_len = block_b.length();
            const char* block_str = static_cast<const char*>(malloc(block_str_len + 1));
            memcpy((void*)block_str, block_b.data(), block_str_len);
            ((char*)block_str)[block_str_len] = '\0';
            const char* cbval1 = block_str;
            bool callback_ret = krichtextedit_shouldblockbespellchecked_callback(this, cbval1);
            libqt_free(block_str);
            return callback_ret;
        }
        return KRichTextEdit::shouldBlockBeSpellChecked(block);
    }

    // Virtual method for C ABI access and custom callback
    virtual void createHighlighter() override {
        if (krichtextedit_createhighlighter_callback) {
            krichtextedit_createhighlighter_callback(this);
            return;
        }
        KRichTextEdit::createHighlighter();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMenu* mousePopupMenu() override {
        if (krichtextedit_mousepopupmenu_callback) {
            QMenu* callback_ret = krichtextedit_mousepopupmenu_callback(this);
            return callback_ret;
        }
        return KRichTextEdit::mousePopupMenu();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (krichtextedit_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = krichtextedit_event_callback(this, cbval1);
            return callback_ret;
        }
        return KRichTextEdit::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (krichtextedit_focusinevent_callback) {
            QFocusEvent* cbval1 = param1;
            krichtextedit_focusinevent_callback(this, cbval1);
            return;
        }
        KRichTextEdit::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWordBack() override {
        if (krichtextedit_deletewordback_callback) {
            krichtextedit_deletewordback_callback(this);
            return;
        }
        KRichTextEdit::deleteWordBack();
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWordForward() override {
        if (krichtextedit_deletewordforward_callback) {
            krichtextedit_deletewordforward_callback(this);
            return;
        }
        KRichTextEdit::deleteWordForward();
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (krichtextedit_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            krichtextedit_contextmenuevent_callback(this, cbval1);
            return;
        }
        KRichTextEdit::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant loadResource(int typeVal, const QUrl& name) override {
        if (krichtextedit_loadresource_callback) {
            int cbval1 = typeVal;
            const QUrl& name_ret = name;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&name_ret);
            QVariant* callback_ret = krichtextedit_loadresource_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRichTextEdit::loadResource(typeVal, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
        if (krichtextedit_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(property);
            QVariant* callback_ret = krichtextedit_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRichTextEdit::inputMethodQuery(property);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (krichtextedit_timerevent_callback) {
            QTimerEvent* cbval1 = e;
            krichtextedit_timerevent_callback(this, cbval1);
            return;
        }
        KRichTextEdit::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (krichtextedit_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            krichtextedit_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KRichTextEdit::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (krichtextedit_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            krichtextedit_resizeevent_callback(this, cbval1);
            return;
        }
        KRichTextEdit::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (krichtextedit_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            krichtextedit_paintevent_callback(this, cbval1);
            return;
        }
        KRichTextEdit::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (krichtextedit_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            krichtextedit_mousepressevent_callback(this, cbval1);
            return;
        }
        KRichTextEdit::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (krichtextedit_mousemoveevent_callback) {
            QMouseEvent* cbval1 = e;
            krichtextedit_mousemoveevent_callback(this, cbval1);
            return;
        }
        KRichTextEdit::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (krichtextedit_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            krichtextedit_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KRichTextEdit::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (krichtextedit_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = e;
            krichtextedit_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KRichTextEdit::mouseDoubleClickEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (krichtextedit_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = krichtextedit_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KRichTextEdit::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (krichtextedit_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = e;
            krichtextedit_dragenterevent_callback(this, cbval1);
            return;
        }
        KRichTextEdit::dragEnterEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (krichtextedit_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = e;
            krichtextedit_dragleaveevent_callback(this, cbval1);
            return;
        }
        KRichTextEdit::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (krichtextedit_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = e;
            krichtextedit_dragmoveevent_callback(this, cbval1);
            return;
        }
        KRichTextEdit::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (krichtextedit_dropevent_callback) {
            QDropEvent* cbval1 = e;
            krichtextedit_dropevent_callback(this, cbval1);
            return;
        }
        KRichTextEdit::dropEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (krichtextedit_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            krichtextedit_focusoutevent_callback(this, cbval1);
            return;
        }
        KRichTextEdit::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (krichtextedit_showevent_callback) {
            QShowEvent* cbval1 = param1;
            krichtextedit_showevent_callback(this, cbval1);
            return;
        }
        KRichTextEdit::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (krichtextedit_changeevent_callback) {
            QEvent* cbval1 = e;
            krichtextedit_changeevent_callback(this, cbval1);
            return;
        }
        KRichTextEdit::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (krichtextedit_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            krichtextedit_wheelevent_callback(this, cbval1);
            return;
        }
        KRichTextEdit::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* createMimeDataFromSelection() const override {
        if (krichtextedit_createmimedatafromselection_callback) {
            QMimeData* callback_ret = krichtextedit_createmimedatafromselection_callback(this);
            return callback_ret;
        }
        return KRichTextEdit::createMimeDataFromSelection();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (krichtextedit_caninsertfrommimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)source;
            bool callback_ret = krichtextedit_caninsertfrommimedata_callback(this, cbval1);
            return callback_ret;
        }
        return KRichTextEdit::canInsertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertFromMimeData(const QMimeData* source) override {
        if (krichtextedit_insertfrommimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)source;
            krichtextedit_insertfrommimedata_callback(this, cbval1);
            return;
        }
        KRichTextEdit::insertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (krichtextedit_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            krichtextedit_inputmethodevent_callback(this, cbval1);
            return;
        }
        KRichTextEdit::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (krichtextedit_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            krichtextedit_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        KRichTextEdit::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetTextCursor(const QTextCursor& cursor) override {
        if (krichtextedit_dosettextcursor_callback) {
            const QTextCursor& cursor_ret = cursor;
            // Cast returned reference into pointer
            QTextCursor* cbval1 = const_cast<QTextCursor*>(&cursor_ret);
            krichtextedit_dosettextcursor_callback(this, cbval1);
            return;
        }
        KRichTextEdit::doSetTextCursor(cursor);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (krichtextedit_minimumsizehint_callback) {
            QSize* callback_ret = krichtextedit_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRichTextEdit::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (krichtextedit_sizehint_callback) {
            QSize* callback_ret = krichtextedit_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRichTextEdit::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (krichtextedit_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            krichtextedit_setupviewport_callback(this, cbval1);
            return;
        }
        KRichTextEdit::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (krichtextedit_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = krichtextedit_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KRichTextEdit::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (krichtextedit_viewportevent_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = krichtextedit_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return KRichTextEdit::viewportEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (krichtextedit_viewportsizehint_callback) {
            QSize* callback_ret = krichtextedit_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRichTextEdit::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (krichtextedit_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            krichtextedit_initstyleoption_callback(this, cbval1);
            return;
        }
        KRichTextEdit::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (krichtextedit_devtype_callback) {
            int callback_ret = krichtextedit_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KRichTextEdit::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (krichtextedit_setvisible_callback) {
            bool cbval1 = visible;
            krichtextedit_setvisible_callback(this, cbval1);
            return;
        }
        KRichTextEdit::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (krichtextedit_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = krichtextedit_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KRichTextEdit::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (krichtextedit_hasheightforwidth_callback) {
            bool callback_ret = krichtextedit_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KRichTextEdit::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (krichtextedit_paintengine_callback) {
            QPaintEngine* callback_ret = krichtextedit_paintengine_callback(this);
            return callback_ret;
        }
        return KRichTextEdit::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (krichtextedit_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            krichtextedit_enterevent_callback(this, cbval1);
            return;
        }
        KRichTextEdit::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (krichtextedit_leaveevent_callback) {
            QEvent* cbval1 = event;
            krichtextedit_leaveevent_callback(this, cbval1);
            return;
        }
        KRichTextEdit::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (krichtextedit_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            krichtextedit_moveevent_callback(this, cbval1);
            return;
        }
        KRichTextEdit::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (krichtextedit_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            krichtextedit_closeevent_callback(this, cbval1);
            return;
        }
        KRichTextEdit::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (krichtextedit_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            krichtextedit_tabletevent_callback(this, cbval1);
            return;
        }
        KRichTextEdit::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (krichtextedit_actionevent_callback) {
            QActionEvent* cbval1 = event;
            krichtextedit_actionevent_callback(this, cbval1);
            return;
        }
        KRichTextEdit::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (krichtextedit_hideevent_callback) {
            QHideEvent* cbval1 = event;
            krichtextedit_hideevent_callback(this, cbval1);
            return;
        }
        KRichTextEdit::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (krichtextedit_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = krichtextedit_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KRichTextEdit::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (krichtextedit_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = krichtextedit_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KRichTextEdit::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (krichtextedit_initpainter_callback) {
            QPainter* cbval1 = painter;
            krichtextedit_initpainter_callback(this, cbval1);
            return;
        }
        KRichTextEdit::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (krichtextedit_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = krichtextedit_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KRichTextEdit::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (krichtextedit_sharedpainter_callback) {
            QPainter* callback_ret = krichtextedit_sharedpainter_callback(this);
            return callback_ret;
        }
        return KRichTextEdit::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (krichtextedit_childevent_callback) {
            QChildEvent* cbval1 = event;
            krichtextedit_childevent_callback(this, cbval1);
            return;
        }
        KRichTextEdit::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (krichtextedit_customevent_callback) {
            QEvent* cbval1 = event;
            krichtextedit_customevent_callback(this, cbval1);
            return;
        }
        KRichTextEdit::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (krichtextedit_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            krichtextedit_connectnotify_callback(this, cbval1);
            return;
        }
        KRichTextEdit::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (krichtextedit_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            krichtextedit_disconnectnotify_callback(this, cbval1);
            return;
        }
        KRichTextEdit::disconnectNotify(signal);
    }

    // Friend functions
    friend void KRichTextEdit_SuperKeyPressEvent(KRichTextEdit* self, QKeyEvent* event);
    friend bool KRichTextEdit_SuperEvent(KRichTextEdit* self, QEvent* param1);
    friend void KRichTextEdit_SuperFocusInEvent(KRichTextEdit* self, QFocusEvent* param1);
    friend void KRichTextEdit_SuperDeleteWordBack(KRichTextEdit* self);
    friend void KRichTextEdit_SuperDeleteWordForward(KRichTextEdit* self);
    friend void KRichTextEdit_SuperContextMenuEvent(KRichTextEdit* self, QContextMenuEvent* param1);
    friend void KRichTextEdit_SuperTimerEvent(KRichTextEdit* self, QTimerEvent* e);
    friend void KRichTextEdit_SuperKeyReleaseEvent(KRichTextEdit* self, QKeyEvent* e);
    friend void KRichTextEdit_SuperResizeEvent(KRichTextEdit* self, QResizeEvent* e);
    friend void KRichTextEdit_SuperPaintEvent(KRichTextEdit* self, QPaintEvent* e);
    friend void KRichTextEdit_SuperMousePressEvent(KRichTextEdit* self, QMouseEvent* e);
    friend void KRichTextEdit_SuperMouseMoveEvent(KRichTextEdit* self, QMouseEvent* e);
    friend void KRichTextEdit_SuperMouseReleaseEvent(KRichTextEdit* self, QMouseEvent* e);
    friend void KRichTextEdit_SuperMouseDoubleClickEvent(KRichTextEdit* self, QMouseEvent* e);
    friend bool KRichTextEdit_SuperFocusNextPrevChild(KRichTextEdit* self, bool next);
    friend void KRichTextEdit_SuperDragEnterEvent(KRichTextEdit* self, QDragEnterEvent* e);
    friend void KRichTextEdit_SuperDragLeaveEvent(KRichTextEdit* self, QDragLeaveEvent* e);
    friend void KRichTextEdit_SuperDragMoveEvent(KRichTextEdit* self, QDragMoveEvent* e);
    friend void KRichTextEdit_SuperDropEvent(KRichTextEdit* self, QDropEvent* e);
    friend void KRichTextEdit_SuperFocusOutEvent(KRichTextEdit* self, QFocusEvent* e);
    friend void KRichTextEdit_SuperShowEvent(KRichTextEdit* self, QShowEvent* param1);
    friend void KRichTextEdit_SuperChangeEvent(KRichTextEdit* self, QEvent* e);
    friend void KRichTextEdit_SuperWheelEvent(KRichTextEdit* self, QWheelEvent* e);
    friend QMimeData* KRichTextEdit_SuperCreateMimeDataFromSelection(const KRichTextEdit* self);
    friend bool KRichTextEdit_SuperCanInsertFromMimeData(const KRichTextEdit* self, const QMimeData* source);
    friend void KRichTextEdit_SuperInsertFromMimeData(KRichTextEdit* self, const QMimeData* source);
    friend void KRichTextEdit_SuperInputMethodEvent(KRichTextEdit* self, QInputMethodEvent* param1);
    friend void KRichTextEdit_SuperScrollContentsBy(KRichTextEdit* self, int dx, int dy);
    friend void KRichTextEdit_SuperDoSetTextCursor(KRichTextEdit* self, const QTextCursor* cursor);
    friend bool KRichTextEdit_SuperEventFilter(KRichTextEdit* self, QObject* param1, QEvent* param2);
    friend bool KRichTextEdit_SuperViewportEvent(KRichTextEdit* self, QEvent* param1);
    friend QSize* KRichTextEdit_SuperViewportSizeHint(const KRichTextEdit* self);
    friend void KRichTextEdit_SuperInitStyleOption(const KRichTextEdit* self, QStyleOptionFrame* option);
    friend void KRichTextEdit_SuperEnterEvent(KRichTextEdit* self, QEnterEvent* event);
    friend void KRichTextEdit_SuperLeaveEvent(KRichTextEdit* self, QEvent* event);
    friend void KRichTextEdit_SuperMoveEvent(KRichTextEdit* self, QMoveEvent* event);
    friend void KRichTextEdit_SuperCloseEvent(KRichTextEdit* self, QCloseEvent* event);
    friend void KRichTextEdit_SuperTabletEvent(KRichTextEdit* self, QTabletEvent* event);
    friend void KRichTextEdit_SuperActionEvent(KRichTextEdit* self, QActionEvent* event);
    friend void KRichTextEdit_SuperHideEvent(KRichTextEdit* self, QHideEvent* event);
    friend bool KRichTextEdit_SuperNativeEvent(KRichTextEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KRichTextEdit_SuperMetric(const KRichTextEdit* self, int param1);
    friend void KRichTextEdit_SuperInitPainter(const KRichTextEdit* self, QPainter* painter);
    friend QPaintDevice* KRichTextEdit_SuperRedirected(const KRichTextEdit* self, QPoint* offset);
    friend QPainter* KRichTextEdit_SuperSharedPainter(const KRichTextEdit* self);
    friend void KRichTextEdit_SuperChildEvent(KRichTextEdit* self, QChildEvent* event);
    friend void KRichTextEdit_SuperCustomEvent(KRichTextEdit* self, QEvent* event);
    friend void KRichTextEdit_SuperConnectNotify(KRichTextEdit* self, const QMetaMethod* signal);
    friend void KRichTextEdit_SuperDisconnectNotify(KRichTextEdit* self, const QMetaMethod* signal);
};

#endif
