#pragma once
#ifndef EXTRAS_KTEXTWIDGETS_LIBKTEXTEDIT_HXX
#define EXTRAS_KTEXTWIDGETS_LIBKTEXTEDIT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTextEdit
class VirtualKTextEdit final : public KTextEdit {
  public:
    // Virtual class public types (including callbacks and access types)
    using KTextEdit_MetaObject_Callback = QMetaObject* (*)(const KTextEdit*);
    using KTextEdit_Metacast_Callback = void* (*)(KTextEdit*, const char*);
    using KTextEdit_Metacall_Callback = int (*)(KTextEdit*, int, int, void**);
    using KTextEdit_SetReadOnly_Callback = void (*)(KTextEdit*, bool);
    using KTextEdit_SetCheckSpellingEnabled_Callback = void (*)(KTextEdit*, bool);
    using KTextEdit_CheckSpellingEnabled_Callback = bool (*)(const KTextEdit*);
    using KTextEdit_ShouldBlockBeSpellChecked_Callback = bool (*)(const KTextEdit*, const char*);
    using KTextEdit_CreateHighlighter_Callback = void (*)(KTextEdit*);
    using KTextEdit_MousePopupMenu_Callback = QMenu* (*)(KTextEdit*);
    using KTextEdit_Event_Callback = bool (*)(KTextEdit*, QEvent*);
    using KTextEdit_KeyPressEvent_Callback = void (*)(KTextEdit*, QKeyEvent*);
    using KTextEdit_FocusInEvent_Callback = void (*)(KTextEdit*, QFocusEvent*);
    using KTextEdit_DeleteWordBack_Callback = void (*)(KTextEdit*);
    using KTextEdit_DeleteWordForward_Callback = void (*)(KTextEdit*);
    using KTextEdit_ContextMenuEvent_Callback = void (*)(KTextEdit*, QContextMenuEvent*);
    using KTextEdit_LoadResource_Callback = QVariant* (*)(KTextEdit*, int, QUrl*);
    using KTextEdit_InputMethodQuery_Callback = QVariant* (*)(const KTextEdit*, int);
    using KTextEdit_TimerEvent_Callback = void (*)(KTextEdit*, QTimerEvent*);
    using KTextEdit_KeyReleaseEvent_Callback = void (*)(KTextEdit*, QKeyEvent*);
    using KTextEdit_ResizeEvent_Callback = void (*)(KTextEdit*, QResizeEvent*);
    using KTextEdit_PaintEvent_Callback = void (*)(KTextEdit*, QPaintEvent*);
    using KTextEdit_MousePressEvent_Callback = void (*)(KTextEdit*, QMouseEvent*);
    using KTextEdit_MouseMoveEvent_Callback = void (*)(KTextEdit*, QMouseEvent*);
    using KTextEdit_MouseReleaseEvent_Callback = void (*)(KTextEdit*, QMouseEvent*);
    using KTextEdit_MouseDoubleClickEvent_Callback = void (*)(KTextEdit*, QMouseEvent*);
    using KTextEdit_FocusNextPrevChild_Callback = bool (*)(KTextEdit*, bool);
    using KTextEdit_DragEnterEvent_Callback = void (*)(KTextEdit*, QDragEnterEvent*);
    using KTextEdit_DragLeaveEvent_Callback = void (*)(KTextEdit*, QDragLeaveEvent*);
    using KTextEdit_DragMoveEvent_Callback = void (*)(KTextEdit*, QDragMoveEvent*);
    using KTextEdit_DropEvent_Callback = void (*)(KTextEdit*, QDropEvent*);
    using KTextEdit_FocusOutEvent_Callback = void (*)(KTextEdit*, QFocusEvent*);
    using KTextEdit_ShowEvent_Callback = void (*)(KTextEdit*, QShowEvent*);
    using KTextEdit_ChangeEvent_Callback = void (*)(KTextEdit*, QEvent*);
    using KTextEdit_WheelEvent_Callback = void (*)(KTextEdit*, QWheelEvent*);
    using KTextEdit_CreateMimeDataFromSelection_Callback = QMimeData* (*)(const KTextEdit*);
    using KTextEdit_CanInsertFromMimeData_Callback = bool (*)(const KTextEdit*, QMimeData*);
    using KTextEdit_InsertFromMimeData_Callback = void (*)(KTextEdit*, QMimeData*);
    using KTextEdit_InputMethodEvent_Callback = void (*)(KTextEdit*, QInputMethodEvent*);
    using KTextEdit_ScrollContentsBy_Callback = void (*)(KTextEdit*, int, int);
    using KTextEdit_DoSetTextCursor_Callback = void (*)(KTextEdit*, QTextCursor*);
    using KTextEdit_MinimumSizeHint_Callback = QSize* (*)(const KTextEdit*);
    using KTextEdit_SizeHint_Callback = QSize* (*)(const KTextEdit*);
    using KTextEdit_SetupViewport_Callback = void (*)(KTextEdit*, QWidget*);
    using KTextEdit_EventFilter_Callback = bool (*)(KTextEdit*, QObject*, QEvent*);
    using KTextEdit_ViewportEvent_Callback = bool (*)(KTextEdit*, QEvent*);
    using KTextEdit_ViewportSizeHint_Callback = QSize* (*)(const KTextEdit*);
    using KTextEdit_InitStyleOption_Callback = void (*)(const KTextEdit*, QStyleOptionFrame*);
    using KTextEdit_DevType_Callback = int (*)(const KTextEdit*);
    using KTextEdit_SetVisible_Callback = void (*)(KTextEdit*, bool);
    using KTextEdit_HeightForWidth_Callback = int (*)(const KTextEdit*, int);
    using KTextEdit_HasHeightForWidth_Callback = bool (*)(const KTextEdit*);
    using KTextEdit_PaintEngine_Callback = QPaintEngine* (*)(const KTextEdit*);
    using KTextEdit_EnterEvent_Callback = void (*)(KTextEdit*, QEnterEvent*);
    using KTextEdit_LeaveEvent_Callback = void (*)(KTextEdit*, QEvent*);
    using KTextEdit_MoveEvent_Callback = void (*)(KTextEdit*, QMoveEvent*);
    using KTextEdit_CloseEvent_Callback = void (*)(KTextEdit*, QCloseEvent*);
    using KTextEdit_TabletEvent_Callback = void (*)(KTextEdit*, QTabletEvent*);
    using KTextEdit_ActionEvent_Callback = void (*)(KTextEdit*, QActionEvent*);
    using KTextEdit_HideEvent_Callback = void (*)(KTextEdit*, QHideEvent*);
    using KTextEdit_NativeEvent_Callback = bool (*)(KTextEdit*, libqt_string, void*, intptr_t*);
    using KTextEdit_Metric_Callback = int (*)(const KTextEdit*, int);
    using KTextEdit_InitPainter_Callback = void (*)(const KTextEdit*, QPainter*);
    using KTextEdit_Redirected_Callback = QPaintDevice* (*)(const KTextEdit*, QPoint*);
    using KTextEdit_SharedPainter_Callback = QPainter* (*)(const KTextEdit*);
    using KTextEdit_ChildEvent_Callback = void (*)(KTextEdit*, QChildEvent*);
    using KTextEdit_CustomEvent_Callback = void (*)(KTextEdit*, QEvent*);
    using KTextEdit_ConnectNotify_Callback = void (*)(KTextEdit*, QMetaMethod*);
    using KTextEdit_DisconnectNotify_Callback = void (*)(KTextEdit*, QMetaMethod*);
    using KTextEdit::create;
    using KTextEdit::destroy;
    using KTextEdit::drawFrame;
    using KTextEdit::focusNextChild;
    using KTextEdit::focusPreviousChild;
    using KTextEdit::getDecodedMetricF;
    using KTextEdit::isSignalConnected;
    using KTextEdit::receivers;
    using KTextEdit::sender;
    using KTextEdit::senderSignalIndex;
    using KTextEdit::setViewportMargins;
    using KTextEdit::slotDoFind;
    using KTextEdit::slotDoReplace;
    using KTextEdit::slotFind;
    using KTextEdit::slotFindNext;
    using KTextEdit::slotFindPrevious;
    using KTextEdit::slotReplace;
    using KTextEdit::slotReplaceNext;
    using KTextEdit::slotSpeakText;
    using KTextEdit::updateMicroFocus;
    using KTextEdit::viewportMargins;
    using KTextEdit::zoomInF;

    // Instance callback storage
    KTextEdit_MetaObject_Callback ktextedit_metaobject_callback = nullptr;
    KTextEdit_Metacast_Callback ktextedit_metacast_callback = nullptr;
    KTextEdit_Metacall_Callback ktextedit_metacall_callback = nullptr;
    KTextEdit_SetReadOnly_Callback ktextedit_setreadonly_callback = nullptr;
    KTextEdit_SetCheckSpellingEnabled_Callback ktextedit_setcheckspellingenabled_callback = nullptr;
    KTextEdit_CheckSpellingEnabled_Callback ktextedit_checkspellingenabled_callback = nullptr;
    KTextEdit_ShouldBlockBeSpellChecked_Callback ktextedit_shouldblockbespellchecked_callback = nullptr;
    KTextEdit_CreateHighlighter_Callback ktextedit_createhighlighter_callback = nullptr;
    KTextEdit_MousePopupMenu_Callback ktextedit_mousepopupmenu_callback = nullptr;
    KTextEdit_Event_Callback ktextedit_event_callback = nullptr;
    KTextEdit_KeyPressEvent_Callback ktextedit_keypressevent_callback = nullptr;
    KTextEdit_FocusInEvent_Callback ktextedit_focusinevent_callback = nullptr;
    KTextEdit_DeleteWordBack_Callback ktextedit_deletewordback_callback = nullptr;
    KTextEdit_DeleteWordForward_Callback ktextedit_deletewordforward_callback = nullptr;
    KTextEdit_ContextMenuEvent_Callback ktextedit_contextmenuevent_callback = nullptr;
    KTextEdit_LoadResource_Callback ktextedit_loadresource_callback = nullptr;
    KTextEdit_InputMethodQuery_Callback ktextedit_inputmethodquery_callback = nullptr;
    KTextEdit_TimerEvent_Callback ktextedit_timerevent_callback = nullptr;
    KTextEdit_KeyReleaseEvent_Callback ktextedit_keyreleaseevent_callback = nullptr;
    KTextEdit_ResizeEvent_Callback ktextedit_resizeevent_callback = nullptr;
    KTextEdit_PaintEvent_Callback ktextedit_paintevent_callback = nullptr;
    KTextEdit_MousePressEvent_Callback ktextedit_mousepressevent_callback = nullptr;
    KTextEdit_MouseMoveEvent_Callback ktextedit_mousemoveevent_callback = nullptr;
    KTextEdit_MouseReleaseEvent_Callback ktextedit_mousereleaseevent_callback = nullptr;
    KTextEdit_MouseDoubleClickEvent_Callback ktextedit_mousedoubleclickevent_callback = nullptr;
    KTextEdit_FocusNextPrevChild_Callback ktextedit_focusnextprevchild_callback = nullptr;
    KTextEdit_DragEnterEvent_Callback ktextedit_dragenterevent_callback = nullptr;
    KTextEdit_DragLeaveEvent_Callback ktextedit_dragleaveevent_callback = nullptr;
    KTextEdit_DragMoveEvent_Callback ktextedit_dragmoveevent_callback = nullptr;
    KTextEdit_DropEvent_Callback ktextedit_dropevent_callback = nullptr;
    KTextEdit_FocusOutEvent_Callback ktextedit_focusoutevent_callback = nullptr;
    KTextEdit_ShowEvent_Callback ktextedit_showevent_callback = nullptr;
    KTextEdit_ChangeEvent_Callback ktextedit_changeevent_callback = nullptr;
    KTextEdit_WheelEvent_Callback ktextedit_wheelevent_callback = nullptr;
    KTextEdit_CreateMimeDataFromSelection_Callback ktextedit_createmimedatafromselection_callback = nullptr;
    KTextEdit_CanInsertFromMimeData_Callback ktextedit_caninsertfrommimedata_callback = nullptr;
    KTextEdit_InsertFromMimeData_Callback ktextedit_insertfrommimedata_callback = nullptr;
    KTextEdit_InputMethodEvent_Callback ktextedit_inputmethodevent_callback = nullptr;
    KTextEdit_ScrollContentsBy_Callback ktextedit_scrollcontentsby_callback = nullptr;
    KTextEdit_DoSetTextCursor_Callback ktextedit_dosettextcursor_callback = nullptr;
    KTextEdit_MinimumSizeHint_Callback ktextedit_minimumsizehint_callback = nullptr;
    KTextEdit_SizeHint_Callback ktextedit_sizehint_callback = nullptr;
    KTextEdit_SetupViewport_Callback ktextedit_setupviewport_callback = nullptr;
    KTextEdit_EventFilter_Callback ktextedit_eventfilter_callback = nullptr;
    KTextEdit_ViewportEvent_Callback ktextedit_viewportevent_callback = nullptr;
    KTextEdit_ViewportSizeHint_Callback ktextedit_viewportsizehint_callback = nullptr;
    KTextEdit_InitStyleOption_Callback ktextedit_initstyleoption_callback = nullptr;
    KTextEdit_DevType_Callback ktextedit_devtype_callback = nullptr;
    KTextEdit_SetVisible_Callback ktextedit_setvisible_callback = nullptr;
    KTextEdit_HeightForWidth_Callback ktextedit_heightforwidth_callback = nullptr;
    KTextEdit_HasHeightForWidth_Callback ktextedit_hasheightforwidth_callback = nullptr;
    KTextEdit_PaintEngine_Callback ktextedit_paintengine_callback = nullptr;
    KTextEdit_EnterEvent_Callback ktextedit_enterevent_callback = nullptr;
    KTextEdit_LeaveEvent_Callback ktextedit_leaveevent_callback = nullptr;
    KTextEdit_MoveEvent_Callback ktextedit_moveevent_callback = nullptr;
    KTextEdit_CloseEvent_Callback ktextedit_closeevent_callback = nullptr;
    KTextEdit_TabletEvent_Callback ktextedit_tabletevent_callback = nullptr;
    KTextEdit_ActionEvent_Callback ktextedit_actionevent_callback = nullptr;
    KTextEdit_HideEvent_Callback ktextedit_hideevent_callback = nullptr;
    KTextEdit_NativeEvent_Callback ktextedit_nativeevent_callback = nullptr;
    KTextEdit_Metric_Callback ktextedit_metric_callback = nullptr;
    KTextEdit_InitPainter_Callback ktextedit_initpainter_callback = nullptr;
    KTextEdit_Redirected_Callback ktextedit_redirected_callback = nullptr;
    KTextEdit_SharedPainter_Callback ktextedit_sharedpainter_callback = nullptr;
    KTextEdit_ChildEvent_Callback ktextedit_childevent_callback = nullptr;
    KTextEdit_CustomEvent_Callback ktextedit_customevent_callback = nullptr;
    KTextEdit_ConnectNotify_Callback ktextedit_connectnotify_callback = nullptr;
    KTextEdit_DisconnectNotify_Callback ktextedit_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KTextEdit {
        using KTextEdit::actionEvent;
        using KTextEdit::canInsertFromMimeData;
        using KTextEdit::changeEvent;
        using KTextEdit::childEvent;
        using KTextEdit::closeEvent;
        using KTextEdit::connectNotify;
        using KTextEdit::contextMenuEvent;
        using KTextEdit::createMimeDataFromSelection;
        using KTextEdit::customEvent;
        using KTextEdit::deleteWordBack;
        using KTextEdit::deleteWordForward;
        using KTextEdit::disconnectNotify;
        using KTextEdit::doSetTextCursor;
        using KTextEdit::dragEnterEvent;
        using KTextEdit::dragLeaveEvent;
        using KTextEdit::dragMoveEvent;
        using KTextEdit::dropEvent;
        using KTextEdit::enterEvent;
        using KTextEdit::event;
        using KTextEdit::eventFilter;
        using KTextEdit::focusInEvent;
        using KTextEdit::focusNextPrevChild;
        using KTextEdit::focusOutEvent;
        using KTextEdit::hideEvent;
        using KTextEdit::initPainter;
        using KTextEdit::initStyleOption;
        using KTextEdit::inputMethodEvent;
        using KTextEdit::insertFromMimeData;
        using KTextEdit::keyPressEvent;
        using KTextEdit::keyReleaseEvent;
        using KTextEdit::leaveEvent;
        using KTextEdit::metric;
        using KTextEdit::mouseDoubleClickEvent;
        using KTextEdit::mouseMoveEvent;
        using KTextEdit::mousePressEvent;
        using KTextEdit::mouseReleaseEvent;
        using KTextEdit::moveEvent;
        using KTextEdit::nativeEvent;
        using KTextEdit::paintEvent;
        using KTextEdit::redirected;
        using KTextEdit::resizeEvent;
        using KTextEdit::scrollContentsBy;
        using KTextEdit::sharedPainter;
        using KTextEdit::showEvent;
        using KTextEdit::tabletEvent;
        using KTextEdit::timerEvent;
        using KTextEdit::viewportEvent;
        using KTextEdit::viewportSizeHint;
        using KTextEdit::wheelEvent;
    };

    VirtualKTextEdit(QWidget* parent) : KTextEdit(parent) {};
    VirtualKTextEdit(const QString& text) : KTextEdit(text) {};
    VirtualKTextEdit() : KTextEdit() {};
    VirtualKTextEdit(const QString& text, QWidget* parent) : KTextEdit(text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ktextedit_metaobject_callback) {
            QMetaObject* callback_ret = ktextedit_metaobject_callback(this);
            return callback_ret;
        }
        return KTextEdit::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktextedit_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ktextedit_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KTextEdit::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktextedit_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ktextedit_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KTextEdit::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReadOnly(bool readOnly) override {
        if (ktextedit_setreadonly_callback) {
            bool cbval1 = readOnly;
            ktextedit_setreadonly_callback(this, cbval1);
            return;
        }
        KTextEdit::setReadOnly(readOnly);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCheckSpellingEnabled(bool check) override {
        if (ktextedit_setcheckspellingenabled_callback) {
            bool cbval1 = check;
            ktextedit_setcheckspellingenabled_callback(this, cbval1);
            return;
        }
        KTextEdit::setCheckSpellingEnabled(check);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool checkSpellingEnabled() const override {
        if (ktextedit_checkspellingenabled_callback) {
            bool callback_ret = ktextedit_checkspellingenabled_callback(this);
            return callback_ret;
        }
        return KTextEdit::checkSpellingEnabled();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool shouldBlockBeSpellChecked(const QString& block) const override {
        if (ktextedit_shouldblockbespellchecked_callback) {
            const auto block_ret = block;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray block_b = block_ret.toUtf8();
            auto block_str_len = block_b.length();
            const char* block_str = static_cast<const char*>(malloc(block_str_len + 1));
            memcpy((void*)block_str, block_b.data(), block_str_len);
            ((char*)block_str)[block_str_len] = '\0';
            const char* cbval1 = block_str;
            bool callback_ret = ktextedit_shouldblockbespellchecked_callback(this, cbval1);
            libqt_free(block_str);
            return callback_ret;
        }
        return KTextEdit::shouldBlockBeSpellChecked(block);
    }

    // Virtual method for C ABI access and custom callback
    virtual void createHighlighter() override {
        if (ktextedit_createhighlighter_callback) {
            ktextedit_createhighlighter_callback(this);
            return;
        }
        KTextEdit::createHighlighter();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMenu* mousePopupMenu() override {
        if (ktextedit_mousepopupmenu_callback) {
            QMenu* callback_ret = ktextedit_mousepopupmenu_callback(this);
            return callback_ret;
        }
        return KTextEdit::mousePopupMenu();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (ktextedit_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = ktextedit_event_callback(this, cbval1);
            return callback_ret;
        }
        return KTextEdit::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (ktextedit_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            ktextedit_keypressevent_callback(this, cbval1);
            return;
        }
        KTextEdit::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (ktextedit_focusinevent_callback) {
            QFocusEvent* cbval1 = param1;
            ktextedit_focusinevent_callback(this, cbval1);
            return;
        }
        KTextEdit::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWordBack() override {
        if (ktextedit_deletewordback_callback) {
            ktextedit_deletewordback_callback(this);
            return;
        }
        KTextEdit::deleteWordBack();
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWordForward() override {
        if (ktextedit_deletewordforward_callback) {
            ktextedit_deletewordforward_callback(this);
            return;
        }
        KTextEdit::deleteWordForward();
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (ktextedit_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            ktextedit_contextmenuevent_callback(this, cbval1);
            return;
        }
        KTextEdit::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant loadResource(int typeVal, const QUrl& name) override {
        if (ktextedit_loadresource_callback) {
            int cbval1 = typeVal;
            const QUrl& name_ret = name;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&name_ret);
            QVariant* callback_ret = ktextedit_loadresource_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KTextEdit::loadResource(typeVal, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
        if (ktextedit_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(property);
            QVariant* callback_ret = ktextedit_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KTextEdit::inputMethodQuery(property);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (ktextedit_timerevent_callback) {
            QTimerEvent* cbval1 = e;
            ktextedit_timerevent_callback(this, cbval1);
            return;
        }
        KTextEdit::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (ktextedit_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            ktextedit_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KTextEdit::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (ktextedit_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            ktextedit_resizeevent_callback(this, cbval1);
            return;
        }
        KTextEdit::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (ktextedit_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            ktextedit_paintevent_callback(this, cbval1);
            return;
        }
        KTextEdit::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (ktextedit_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            ktextedit_mousepressevent_callback(this, cbval1);
            return;
        }
        KTextEdit::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (ktextedit_mousemoveevent_callback) {
            QMouseEvent* cbval1 = e;
            ktextedit_mousemoveevent_callback(this, cbval1);
            return;
        }
        KTextEdit::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (ktextedit_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            ktextedit_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KTextEdit::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (ktextedit_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = e;
            ktextedit_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KTextEdit::mouseDoubleClickEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (ktextedit_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = ktextedit_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KTextEdit::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (ktextedit_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = e;
            ktextedit_dragenterevent_callback(this, cbval1);
            return;
        }
        KTextEdit::dragEnterEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (ktextedit_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = e;
            ktextedit_dragleaveevent_callback(this, cbval1);
            return;
        }
        KTextEdit::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (ktextedit_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = e;
            ktextedit_dragmoveevent_callback(this, cbval1);
            return;
        }
        KTextEdit::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (ktextedit_dropevent_callback) {
            QDropEvent* cbval1 = e;
            ktextedit_dropevent_callback(this, cbval1);
            return;
        }
        KTextEdit::dropEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (ktextedit_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            ktextedit_focusoutevent_callback(this, cbval1);
            return;
        }
        KTextEdit::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (ktextedit_showevent_callback) {
            QShowEvent* cbval1 = param1;
            ktextedit_showevent_callback(this, cbval1);
            return;
        }
        KTextEdit::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (ktextedit_changeevent_callback) {
            QEvent* cbval1 = e;
            ktextedit_changeevent_callback(this, cbval1);
            return;
        }
        KTextEdit::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (ktextedit_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            ktextedit_wheelevent_callback(this, cbval1);
            return;
        }
        KTextEdit::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* createMimeDataFromSelection() const override {
        if (ktextedit_createmimedatafromselection_callback) {
            QMimeData* callback_ret = ktextedit_createmimedatafromselection_callback(this);
            return callback_ret;
        }
        return KTextEdit::createMimeDataFromSelection();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (ktextedit_caninsertfrommimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)source;
            bool callback_ret = ktextedit_caninsertfrommimedata_callback(this, cbval1);
            return callback_ret;
        }
        return KTextEdit::canInsertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertFromMimeData(const QMimeData* source) override {
        if (ktextedit_insertfrommimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)source;
            ktextedit_insertfrommimedata_callback(this, cbval1);
            return;
        }
        KTextEdit::insertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (ktextedit_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            ktextedit_inputmethodevent_callback(this, cbval1);
            return;
        }
        KTextEdit::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (ktextedit_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            ktextedit_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        KTextEdit::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetTextCursor(const QTextCursor& cursor) override {
        if (ktextedit_dosettextcursor_callback) {
            const QTextCursor& cursor_ret = cursor;
            // Cast returned reference into pointer
            QTextCursor* cbval1 = const_cast<QTextCursor*>(&cursor_ret);
            ktextedit_dosettextcursor_callback(this, cbval1);
            return;
        }
        KTextEdit::doSetTextCursor(cursor);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (ktextedit_minimumsizehint_callback) {
            QSize* callback_ret = ktextedit_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KTextEdit::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (ktextedit_sizehint_callback) {
            QSize* callback_ret = ktextedit_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KTextEdit::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (ktextedit_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            ktextedit_setupviewport_callback(this, cbval1);
            return;
        }
        KTextEdit::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (ktextedit_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = ktextedit_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KTextEdit::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (ktextedit_viewportevent_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = ktextedit_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return KTextEdit::viewportEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (ktextedit_viewportsizehint_callback) {
            QSize* callback_ret = ktextedit_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KTextEdit::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (ktextedit_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            ktextedit_initstyleoption_callback(this, cbval1);
            return;
        }
        KTextEdit::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (ktextedit_devtype_callback) {
            int callback_ret = ktextedit_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KTextEdit::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (ktextedit_setvisible_callback) {
            bool cbval1 = visible;
            ktextedit_setvisible_callback(this, cbval1);
            return;
        }
        KTextEdit::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (ktextedit_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = ktextedit_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KTextEdit::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (ktextedit_hasheightforwidth_callback) {
            bool callback_ret = ktextedit_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KTextEdit::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (ktextedit_paintengine_callback) {
            QPaintEngine* callback_ret = ktextedit_paintengine_callback(this);
            return callback_ret;
        }
        return KTextEdit::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (ktextedit_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            ktextedit_enterevent_callback(this, cbval1);
            return;
        }
        KTextEdit::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (ktextedit_leaveevent_callback) {
            QEvent* cbval1 = event;
            ktextedit_leaveevent_callback(this, cbval1);
            return;
        }
        KTextEdit::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (ktextedit_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            ktextedit_moveevent_callback(this, cbval1);
            return;
        }
        KTextEdit::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (ktextedit_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            ktextedit_closeevent_callback(this, cbval1);
            return;
        }
        KTextEdit::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (ktextedit_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            ktextedit_tabletevent_callback(this, cbval1);
            return;
        }
        KTextEdit::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (ktextedit_actionevent_callback) {
            QActionEvent* cbval1 = event;
            ktextedit_actionevent_callback(this, cbval1);
            return;
        }
        KTextEdit::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (ktextedit_hideevent_callback) {
            QHideEvent* cbval1 = event;
            ktextedit_hideevent_callback(this, cbval1);
            return;
        }
        KTextEdit::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (ktextedit_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = ktextedit_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KTextEdit::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (ktextedit_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = ktextedit_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KTextEdit::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (ktextedit_initpainter_callback) {
            QPainter* cbval1 = painter;
            ktextedit_initpainter_callback(this, cbval1);
            return;
        }
        KTextEdit::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (ktextedit_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = ktextedit_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KTextEdit::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (ktextedit_sharedpainter_callback) {
            QPainter* callback_ret = ktextedit_sharedpainter_callback(this);
            return callback_ret;
        }
        return KTextEdit::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktextedit_childevent_callback) {
            QChildEvent* cbval1 = event;
            ktextedit_childevent_callback(this, cbval1);
            return;
        }
        KTextEdit::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktextedit_customevent_callback) {
            QEvent* cbval1 = event;
            ktextedit_customevent_callback(this, cbval1);
            return;
        }
        KTextEdit::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktextedit_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktextedit_connectnotify_callback(this, cbval1);
            return;
        }
        KTextEdit::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktextedit_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktextedit_disconnectnotify_callback(this, cbval1);
            return;
        }
        KTextEdit::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KTextEdit_SuperEvent(KTextEdit* self, QEvent* param1);
    friend void KTextEdit_SuperKeyPressEvent(KTextEdit* self, QKeyEvent* param1);
    friend void KTextEdit_SuperFocusInEvent(KTextEdit* self, QFocusEvent* param1);
    friend void KTextEdit_SuperDeleteWordBack(KTextEdit* self);
    friend void KTextEdit_SuperDeleteWordForward(KTextEdit* self);
    friend void KTextEdit_SuperContextMenuEvent(KTextEdit* self, QContextMenuEvent* param1);
    friend void KTextEdit_SuperTimerEvent(KTextEdit* self, QTimerEvent* e);
    friend void KTextEdit_SuperKeyReleaseEvent(KTextEdit* self, QKeyEvent* e);
    friend void KTextEdit_SuperResizeEvent(KTextEdit* self, QResizeEvent* e);
    friend void KTextEdit_SuperPaintEvent(KTextEdit* self, QPaintEvent* e);
    friend void KTextEdit_SuperMousePressEvent(KTextEdit* self, QMouseEvent* e);
    friend void KTextEdit_SuperMouseMoveEvent(KTextEdit* self, QMouseEvent* e);
    friend void KTextEdit_SuperMouseReleaseEvent(KTextEdit* self, QMouseEvent* e);
    friend void KTextEdit_SuperMouseDoubleClickEvent(KTextEdit* self, QMouseEvent* e);
    friend bool KTextEdit_SuperFocusNextPrevChild(KTextEdit* self, bool next);
    friend void KTextEdit_SuperDragEnterEvent(KTextEdit* self, QDragEnterEvent* e);
    friend void KTextEdit_SuperDragLeaveEvent(KTextEdit* self, QDragLeaveEvent* e);
    friend void KTextEdit_SuperDragMoveEvent(KTextEdit* self, QDragMoveEvent* e);
    friend void KTextEdit_SuperDropEvent(KTextEdit* self, QDropEvent* e);
    friend void KTextEdit_SuperFocusOutEvent(KTextEdit* self, QFocusEvent* e);
    friend void KTextEdit_SuperShowEvent(KTextEdit* self, QShowEvent* param1);
    friend void KTextEdit_SuperChangeEvent(KTextEdit* self, QEvent* e);
    friend void KTextEdit_SuperWheelEvent(KTextEdit* self, QWheelEvent* e);
    friend QMimeData* KTextEdit_SuperCreateMimeDataFromSelection(const KTextEdit* self);
    friend bool KTextEdit_SuperCanInsertFromMimeData(const KTextEdit* self, const QMimeData* source);
    friend void KTextEdit_SuperInsertFromMimeData(KTextEdit* self, const QMimeData* source);
    friend void KTextEdit_SuperInputMethodEvent(KTextEdit* self, QInputMethodEvent* param1);
    friend void KTextEdit_SuperScrollContentsBy(KTextEdit* self, int dx, int dy);
    friend void KTextEdit_SuperDoSetTextCursor(KTextEdit* self, const QTextCursor* cursor);
    friend bool KTextEdit_SuperEventFilter(KTextEdit* self, QObject* param1, QEvent* param2);
    friend bool KTextEdit_SuperViewportEvent(KTextEdit* self, QEvent* param1);
    friend QSize* KTextEdit_SuperViewportSizeHint(const KTextEdit* self);
    friend void KTextEdit_SuperInitStyleOption(const KTextEdit* self, QStyleOptionFrame* option);
    friend void KTextEdit_SuperEnterEvent(KTextEdit* self, QEnterEvent* event);
    friend void KTextEdit_SuperLeaveEvent(KTextEdit* self, QEvent* event);
    friend void KTextEdit_SuperMoveEvent(KTextEdit* self, QMoveEvent* event);
    friend void KTextEdit_SuperCloseEvent(KTextEdit* self, QCloseEvent* event);
    friend void KTextEdit_SuperTabletEvent(KTextEdit* self, QTabletEvent* event);
    friend void KTextEdit_SuperActionEvent(KTextEdit* self, QActionEvent* event);
    friend void KTextEdit_SuperHideEvent(KTextEdit* self, QHideEvent* event);
    friend bool KTextEdit_SuperNativeEvent(KTextEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KTextEdit_SuperMetric(const KTextEdit* self, int param1);
    friend void KTextEdit_SuperInitPainter(const KTextEdit* self, QPainter* painter);
    friend QPaintDevice* KTextEdit_SuperRedirected(const KTextEdit* self, QPoint* offset);
    friend QPainter* KTextEdit_SuperSharedPainter(const KTextEdit* self);
    friend void KTextEdit_SuperChildEvent(KTextEdit* self, QChildEvent* event);
    friend void KTextEdit_SuperCustomEvent(KTextEdit* self, QEvent* event);
    friend void KTextEdit_SuperConnectNotify(KTextEdit* self, const QMetaMethod* signal);
    friend void KTextEdit_SuperDisconnectNotify(KTextEdit* self, const QMetaMethod* signal);
};

#endif
