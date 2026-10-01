#pragma once
#ifndef EXTRAS_KTEXTWIDGETS_LIBKRICHTEXTWIDGET_HXX
#define EXTRAS_KTEXTWIDGETS_LIBKRICHTEXTWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KRichTextWidget
class VirtualKRichTextWidget final : public KRichTextWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using KRichTextWidget_MetaObject_Callback = QMetaObject* (*)(const KRichTextWidget*);
    using KRichTextWidget_Metacast_Callback = void* (*)(KRichTextWidget*, const char*);
    using KRichTextWidget_Metacall_Callback = int (*)(KRichTextWidget*, int, int, void**);
    using KRichTextWidget_CreateActions_Callback = libqt_list /* of QAction* */ (*)(KRichTextWidget*);
    using KRichTextWidget_MouseReleaseEvent_Callback = void (*)(KRichTextWidget*, QMouseEvent*);
    using KRichTextWidget_KeyPressEvent_Callback = void (*)(KRichTextWidget*, QKeyEvent*);
    using KRichTextWidget_SetReadOnly_Callback = void (*)(KRichTextWidget*, bool);
    using KRichTextWidget_SetCheckSpellingEnabled_Callback = void (*)(KRichTextWidget*, bool);
    using KRichTextWidget_CheckSpellingEnabled_Callback = bool (*)(const KRichTextWidget*);
    using KRichTextWidget_ShouldBlockBeSpellChecked_Callback = bool (*)(const KRichTextWidget*, const char*);
    using KRichTextWidget_CreateHighlighter_Callback = void (*)(KRichTextWidget*);
    using KRichTextWidget_MousePopupMenu_Callback = QMenu* (*)(KRichTextWidget*);
    using KRichTextWidget_Event_Callback = bool (*)(KRichTextWidget*, QEvent*);
    using KRichTextWidget_FocusInEvent_Callback = void (*)(KRichTextWidget*, QFocusEvent*);
    using KRichTextWidget_DeleteWordBack_Callback = void (*)(KRichTextWidget*);
    using KRichTextWidget_DeleteWordForward_Callback = void (*)(KRichTextWidget*);
    using KRichTextWidget_ContextMenuEvent_Callback = void (*)(KRichTextWidget*, QContextMenuEvent*);
    using KRichTextWidget_LoadResource_Callback = QVariant* (*)(KRichTextWidget*, int, QUrl*);
    using KRichTextWidget_InputMethodQuery_Callback = QVariant* (*)(const KRichTextWidget*, int);
    using KRichTextWidget_TimerEvent_Callback = void (*)(KRichTextWidget*, QTimerEvent*);
    using KRichTextWidget_KeyReleaseEvent_Callback = void (*)(KRichTextWidget*, QKeyEvent*);
    using KRichTextWidget_ResizeEvent_Callback = void (*)(KRichTextWidget*, QResizeEvent*);
    using KRichTextWidget_PaintEvent_Callback = void (*)(KRichTextWidget*, QPaintEvent*);
    using KRichTextWidget_MousePressEvent_Callback = void (*)(KRichTextWidget*, QMouseEvent*);
    using KRichTextWidget_MouseMoveEvent_Callback = void (*)(KRichTextWidget*, QMouseEvent*);
    using KRichTextWidget_MouseDoubleClickEvent_Callback = void (*)(KRichTextWidget*, QMouseEvent*);
    using KRichTextWidget_FocusNextPrevChild_Callback = bool (*)(KRichTextWidget*, bool);
    using KRichTextWidget_DragEnterEvent_Callback = void (*)(KRichTextWidget*, QDragEnterEvent*);
    using KRichTextWidget_DragLeaveEvent_Callback = void (*)(KRichTextWidget*, QDragLeaveEvent*);
    using KRichTextWidget_DragMoveEvent_Callback = void (*)(KRichTextWidget*, QDragMoveEvent*);
    using KRichTextWidget_DropEvent_Callback = void (*)(KRichTextWidget*, QDropEvent*);
    using KRichTextWidget_FocusOutEvent_Callback = void (*)(KRichTextWidget*, QFocusEvent*);
    using KRichTextWidget_ShowEvent_Callback = void (*)(KRichTextWidget*, QShowEvent*);
    using KRichTextWidget_ChangeEvent_Callback = void (*)(KRichTextWidget*, QEvent*);
    using KRichTextWidget_WheelEvent_Callback = void (*)(KRichTextWidget*, QWheelEvent*);
    using KRichTextWidget_CreateMimeDataFromSelection_Callback = QMimeData* (*)(const KRichTextWidget*);
    using KRichTextWidget_CanInsertFromMimeData_Callback = bool (*)(const KRichTextWidget*, QMimeData*);
    using KRichTextWidget_InsertFromMimeData_Callback = void (*)(KRichTextWidget*, QMimeData*);
    using KRichTextWidget_InputMethodEvent_Callback = void (*)(KRichTextWidget*, QInputMethodEvent*);
    using KRichTextWidget_ScrollContentsBy_Callback = void (*)(KRichTextWidget*, int, int);
    using KRichTextWidget_DoSetTextCursor_Callback = void (*)(KRichTextWidget*, QTextCursor*);
    using KRichTextWidget_MinimumSizeHint_Callback = QSize* (*)(const KRichTextWidget*);
    using KRichTextWidget_SizeHint_Callback = QSize* (*)(const KRichTextWidget*);
    using KRichTextWidget_SetupViewport_Callback = void (*)(KRichTextWidget*, QWidget*);
    using KRichTextWidget_EventFilter_Callback = bool (*)(KRichTextWidget*, QObject*, QEvent*);
    using KRichTextWidget_ViewportEvent_Callback = bool (*)(KRichTextWidget*, QEvent*);
    using KRichTextWidget_ViewportSizeHint_Callback = QSize* (*)(const KRichTextWidget*);
    using KRichTextWidget_InitStyleOption_Callback = void (*)(const KRichTextWidget*, QStyleOptionFrame*);
    using KRichTextWidget_DevType_Callback = int (*)(const KRichTextWidget*);
    using KRichTextWidget_SetVisible_Callback = void (*)(KRichTextWidget*, bool);
    using KRichTextWidget_HeightForWidth_Callback = int (*)(const KRichTextWidget*, int);
    using KRichTextWidget_HasHeightForWidth_Callback = bool (*)(const KRichTextWidget*);
    using KRichTextWidget_PaintEngine_Callback = QPaintEngine* (*)(const KRichTextWidget*);
    using KRichTextWidget_EnterEvent_Callback = void (*)(KRichTextWidget*, QEnterEvent*);
    using KRichTextWidget_LeaveEvent_Callback = void (*)(KRichTextWidget*, QEvent*);
    using KRichTextWidget_MoveEvent_Callback = void (*)(KRichTextWidget*, QMoveEvent*);
    using KRichTextWidget_CloseEvent_Callback = void (*)(KRichTextWidget*, QCloseEvent*);
    using KRichTextWidget_TabletEvent_Callback = void (*)(KRichTextWidget*, QTabletEvent*);
    using KRichTextWidget_ActionEvent_Callback = void (*)(KRichTextWidget*, QActionEvent*);
    using KRichTextWidget_HideEvent_Callback = void (*)(KRichTextWidget*, QHideEvent*);
    using KRichTextWidget_NativeEvent_Callback = bool (*)(KRichTextWidget*, libqt_string, void*, intptr_t*);
    using KRichTextWidget_Metric_Callback = int (*)(const KRichTextWidget*, int);
    using KRichTextWidget_InitPainter_Callback = void (*)(const KRichTextWidget*, QPainter*);
    using KRichTextWidget_Redirected_Callback = QPaintDevice* (*)(const KRichTextWidget*, QPoint*);
    using KRichTextWidget_SharedPainter_Callback = QPainter* (*)(const KRichTextWidget*);
    using KRichTextWidget_ChildEvent_Callback = void (*)(KRichTextWidget*, QChildEvent*);
    using KRichTextWidget_CustomEvent_Callback = void (*)(KRichTextWidget*, QEvent*);
    using KRichTextWidget_ConnectNotify_Callback = void (*)(KRichTextWidget*, QMetaMethod*);
    using KRichTextWidget_DisconnectNotify_Callback = void (*)(KRichTextWidget*, QMetaMethod*);
    using KRichTextWidget::create;
    using KRichTextWidget::destroy;
    using KRichTextWidget::drawFrame;
    using KRichTextWidget::focusNextChild;
    using KRichTextWidget::focusPreviousChild;
    using KRichTextWidget::getDecodedMetricF;
    using KRichTextWidget::isSignalConnected;
    using KRichTextWidget::receivers;
    using KRichTextWidget::sender;
    using KRichTextWidget::senderSignalIndex;
    using KRichTextWidget::setViewportMargins;
    using KRichTextWidget::slotDoFind;
    using KRichTextWidget::slotDoReplace;
    using KRichTextWidget::slotFind;
    using KRichTextWidget::slotFindNext;
    using KRichTextWidget::slotFindPrevious;
    using KRichTextWidget::slotReplace;
    using KRichTextWidget::slotReplaceNext;
    using KRichTextWidget::slotSpeakText;
    using KRichTextWidget::updateMicroFocus;
    using KRichTextWidget::viewportMargins;
    using KRichTextWidget::zoomInF;

    // Instance callback storage
    KRichTextWidget_MetaObject_Callback krichtextwidget_metaobject_callback = nullptr;
    KRichTextWidget_Metacast_Callback krichtextwidget_metacast_callback = nullptr;
    KRichTextWidget_Metacall_Callback krichtextwidget_metacall_callback = nullptr;
    KRichTextWidget_CreateActions_Callback krichtextwidget_createactions_callback = nullptr;
    KRichTextWidget_MouseReleaseEvent_Callback krichtextwidget_mousereleaseevent_callback = nullptr;
    KRichTextWidget_KeyPressEvent_Callback krichtextwidget_keypressevent_callback = nullptr;
    KRichTextWidget_SetReadOnly_Callback krichtextwidget_setreadonly_callback = nullptr;
    KRichTextWidget_SetCheckSpellingEnabled_Callback krichtextwidget_setcheckspellingenabled_callback = nullptr;
    KRichTextWidget_CheckSpellingEnabled_Callback krichtextwidget_checkspellingenabled_callback = nullptr;
    KRichTextWidget_ShouldBlockBeSpellChecked_Callback krichtextwidget_shouldblockbespellchecked_callback = nullptr;
    KRichTextWidget_CreateHighlighter_Callback krichtextwidget_createhighlighter_callback = nullptr;
    KRichTextWidget_MousePopupMenu_Callback krichtextwidget_mousepopupmenu_callback = nullptr;
    KRichTextWidget_Event_Callback krichtextwidget_event_callback = nullptr;
    KRichTextWidget_FocusInEvent_Callback krichtextwidget_focusinevent_callback = nullptr;
    KRichTextWidget_DeleteWordBack_Callback krichtextwidget_deletewordback_callback = nullptr;
    KRichTextWidget_DeleteWordForward_Callback krichtextwidget_deletewordforward_callback = nullptr;
    KRichTextWidget_ContextMenuEvent_Callback krichtextwidget_contextmenuevent_callback = nullptr;
    KRichTextWidget_LoadResource_Callback krichtextwidget_loadresource_callback = nullptr;
    KRichTextWidget_InputMethodQuery_Callback krichtextwidget_inputmethodquery_callback = nullptr;
    KRichTextWidget_TimerEvent_Callback krichtextwidget_timerevent_callback = nullptr;
    KRichTextWidget_KeyReleaseEvent_Callback krichtextwidget_keyreleaseevent_callback = nullptr;
    KRichTextWidget_ResizeEvent_Callback krichtextwidget_resizeevent_callback = nullptr;
    KRichTextWidget_PaintEvent_Callback krichtextwidget_paintevent_callback = nullptr;
    KRichTextWidget_MousePressEvent_Callback krichtextwidget_mousepressevent_callback = nullptr;
    KRichTextWidget_MouseMoveEvent_Callback krichtextwidget_mousemoveevent_callback = nullptr;
    KRichTextWidget_MouseDoubleClickEvent_Callback krichtextwidget_mousedoubleclickevent_callback = nullptr;
    KRichTextWidget_FocusNextPrevChild_Callback krichtextwidget_focusnextprevchild_callback = nullptr;
    KRichTextWidget_DragEnterEvent_Callback krichtextwidget_dragenterevent_callback = nullptr;
    KRichTextWidget_DragLeaveEvent_Callback krichtextwidget_dragleaveevent_callback = nullptr;
    KRichTextWidget_DragMoveEvent_Callback krichtextwidget_dragmoveevent_callback = nullptr;
    KRichTextWidget_DropEvent_Callback krichtextwidget_dropevent_callback = nullptr;
    KRichTextWidget_FocusOutEvent_Callback krichtextwidget_focusoutevent_callback = nullptr;
    KRichTextWidget_ShowEvent_Callback krichtextwidget_showevent_callback = nullptr;
    KRichTextWidget_ChangeEvent_Callback krichtextwidget_changeevent_callback = nullptr;
    KRichTextWidget_WheelEvent_Callback krichtextwidget_wheelevent_callback = nullptr;
    KRichTextWidget_CreateMimeDataFromSelection_Callback krichtextwidget_createmimedatafromselection_callback = nullptr;
    KRichTextWidget_CanInsertFromMimeData_Callback krichtextwidget_caninsertfrommimedata_callback = nullptr;
    KRichTextWidget_InsertFromMimeData_Callback krichtextwidget_insertfrommimedata_callback = nullptr;
    KRichTextWidget_InputMethodEvent_Callback krichtextwidget_inputmethodevent_callback = nullptr;
    KRichTextWidget_ScrollContentsBy_Callback krichtextwidget_scrollcontentsby_callback = nullptr;
    KRichTextWidget_DoSetTextCursor_Callback krichtextwidget_dosettextcursor_callback = nullptr;
    KRichTextWidget_MinimumSizeHint_Callback krichtextwidget_minimumsizehint_callback = nullptr;
    KRichTextWidget_SizeHint_Callback krichtextwidget_sizehint_callback = nullptr;
    KRichTextWidget_SetupViewport_Callback krichtextwidget_setupviewport_callback = nullptr;
    KRichTextWidget_EventFilter_Callback krichtextwidget_eventfilter_callback = nullptr;
    KRichTextWidget_ViewportEvent_Callback krichtextwidget_viewportevent_callback = nullptr;
    KRichTextWidget_ViewportSizeHint_Callback krichtextwidget_viewportsizehint_callback = nullptr;
    KRichTextWidget_InitStyleOption_Callback krichtextwidget_initstyleoption_callback = nullptr;
    KRichTextWidget_DevType_Callback krichtextwidget_devtype_callback = nullptr;
    KRichTextWidget_SetVisible_Callback krichtextwidget_setvisible_callback = nullptr;
    KRichTextWidget_HeightForWidth_Callback krichtextwidget_heightforwidth_callback = nullptr;
    KRichTextWidget_HasHeightForWidth_Callback krichtextwidget_hasheightforwidth_callback = nullptr;
    KRichTextWidget_PaintEngine_Callback krichtextwidget_paintengine_callback = nullptr;
    KRichTextWidget_EnterEvent_Callback krichtextwidget_enterevent_callback = nullptr;
    KRichTextWidget_LeaveEvent_Callback krichtextwidget_leaveevent_callback = nullptr;
    KRichTextWidget_MoveEvent_Callback krichtextwidget_moveevent_callback = nullptr;
    KRichTextWidget_CloseEvent_Callback krichtextwidget_closeevent_callback = nullptr;
    KRichTextWidget_TabletEvent_Callback krichtextwidget_tabletevent_callback = nullptr;
    KRichTextWidget_ActionEvent_Callback krichtextwidget_actionevent_callback = nullptr;
    KRichTextWidget_HideEvent_Callback krichtextwidget_hideevent_callback = nullptr;
    KRichTextWidget_NativeEvent_Callback krichtextwidget_nativeevent_callback = nullptr;
    KRichTextWidget_Metric_Callback krichtextwidget_metric_callback = nullptr;
    KRichTextWidget_InitPainter_Callback krichtextwidget_initpainter_callback = nullptr;
    KRichTextWidget_Redirected_Callback krichtextwidget_redirected_callback = nullptr;
    KRichTextWidget_SharedPainter_Callback krichtextwidget_sharedpainter_callback = nullptr;
    KRichTextWidget_ChildEvent_Callback krichtextwidget_childevent_callback = nullptr;
    KRichTextWidget_CustomEvent_Callback krichtextwidget_customevent_callback = nullptr;
    KRichTextWidget_ConnectNotify_Callback krichtextwidget_connectnotify_callback = nullptr;
    KRichTextWidget_DisconnectNotify_Callback krichtextwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KRichTextWidget {
        using KRichTextWidget::actionEvent;
        using KRichTextWidget::canInsertFromMimeData;
        using KRichTextWidget::changeEvent;
        using KRichTextWidget::childEvent;
        using KRichTextWidget::closeEvent;
        using KRichTextWidget::connectNotify;
        using KRichTextWidget::contextMenuEvent;
        using KRichTextWidget::createMimeDataFromSelection;
        using KRichTextWidget::customEvent;
        using KRichTextWidget::deleteWordBack;
        using KRichTextWidget::deleteWordForward;
        using KRichTextWidget::disconnectNotify;
        using KRichTextWidget::doSetTextCursor;
        using KRichTextWidget::dragEnterEvent;
        using KRichTextWidget::dragLeaveEvent;
        using KRichTextWidget::dragMoveEvent;
        using KRichTextWidget::dropEvent;
        using KRichTextWidget::enterEvent;
        using KRichTextWidget::event;
        using KRichTextWidget::eventFilter;
        using KRichTextWidget::focusInEvent;
        using KRichTextWidget::focusNextPrevChild;
        using KRichTextWidget::focusOutEvent;
        using KRichTextWidget::hideEvent;
        using KRichTextWidget::initPainter;
        using KRichTextWidget::initStyleOption;
        using KRichTextWidget::inputMethodEvent;
        using KRichTextWidget::insertFromMimeData;
        using KRichTextWidget::keyPressEvent;
        using KRichTextWidget::keyReleaseEvent;
        using KRichTextWidget::leaveEvent;
        using KRichTextWidget::metric;
        using KRichTextWidget::mouseDoubleClickEvent;
        using KRichTextWidget::mouseMoveEvent;
        using KRichTextWidget::mousePressEvent;
        using KRichTextWidget::mouseReleaseEvent;
        using KRichTextWidget::moveEvent;
        using KRichTextWidget::nativeEvent;
        using KRichTextWidget::paintEvent;
        using KRichTextWidget::redirected;
        using KRichTextWidget::resizeEvent;
        using KRichTextWidget::scrollContentsBy;
        using KRichTextWidget::sharedPainter;
        using KRichTextWidget::showEvent;
        using KRichTextWidget::tabletEvent;
        using KRichTextWidget::timerEvent;
        using KRichTextWidget::viewportEvent;
        using KRichTextWidget::viewportSizeHint;
        using KRichTextWidget::wheelEvent;
    };

    VirtualKRichTextWidget(QWidget* parent) : KRichTextWidget(parent) {};
    VirtualKRichTextWidget(const QString& text) : KRichTextWidget(text) {};
    VirtualKRichTextWidget(const QString& text, QWidget* parent) : KRichTextWidget(text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (krichtextwidget_metaobject_callback) {
            QMetaObject* callback_ret = krichtextwidget_metaobject_callback(this);
            return callback_ret;
        }
        return KRichTextWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (krichtextwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = krichtextwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KRichTextWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (krichtextwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = krichtextwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KRichTextWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QAction*> createActions() override {
        if (krichtextwidget_createactions_callback) {
            libqt_list /* of QAction* */ callback_ret = krichtextwidget_createactions_callback(this);
            QList<QAction*> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QAction** callback_ret_arr = static_cast<QAction**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(callback_ret_arr[i]);
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KRichTextWidget::createActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (krichtextwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            krichtextwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KRichTextWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (krichtextwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            krichtextwidget_keypressevent_callback(this, cbval1);
            return;
        }
        KRichTextWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReadOnly(bool readOnly) override {
        if (krichtextwidget_setreadonly_callback) {
            bool cbval1 = readOnly;
            krichtextwidget_setreadonly_callback(this, cbval1);
            return;
        }
        KRichTextWidget::setReadOnly(readOnly);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCheckSpellingEnabled(bool check) override {
        if (krichtextwidget_setcheckspellingenabled_callback) {
            bool cbval1 = check;
            krichtextwidget_setcheckspellingenabled_callback(this, cbval1);
            return;
        }
        KRichTextWidget::setCheckSpellingEnabled(check);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool checkSpellingEnabled() const override {
        if (krichtextwidget_checkspellingenabled_callback) {
            bool callback_ret = krichtextwidget_checkspellingenabled_callback(this);
            return callback_ret;
        }
        return KRichTextWidget::checkSpellingEnabled();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool shouldBlockBeSpellChecked(const QString& block) const override {
        if (krichtextwidget_shouldblockbespellchecked_callback) {
            const auto block_ret = block;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray block_b = block_ret.toUtf8();
            auto block_str_len = block_b.length();
            const char* block_str = static_cast<const char*>(malloc(block_str_len + 1));
            memcpy((void*)block_str, block_b.data(), block_str_len);
            ((char*)block_str)[block_str_len] = '\0';
            const char* cbval1 = block_str;
            bool callback_ret = krichtextwidget_shouldblockbespellchecked_callback(this, cbval1);
            libqt_free(block_str);
            return callback_ret;
        }
        return KRichTextWidget::shouldBlockBeSpellChecked(block);
    }

    // Virtual method for C ABI access and custom callback
    virtual void createHighlighter() override {
        if (krichtextwidget_createhighlighter_callback) {
            krichtextwidget_createhighlighter_callback(this);
            return;
        }
        KRichTextWidget::createHighlighter();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMenu* mousePopupMenu() override {
        if (krichtextwidget_mousepopupmenu_callback) {
            QMenu* callback_ret = krichtextwidget_mousepopupmenu_callback(this);
            return callback_ret;
        }
        return KRichTextWidget::mousePopupMenu();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (krichtextwidget_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = krichtextwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return KRichTextWidget::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (krichtextwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = param1;
            krichtextwidget_focusinevent_callback(this, cbval1);
            return;
        }
        KRichTextWidget::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWordBack() override {
        if (krichtextwidget_deletewordback_callback) {
            krichtextwidget_deletewordback_callback(this);
            return;
        }
        KRichTextWidget::deleteWordBack();
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWordForward() override {
        if (krichtextwidget_deletewordforward_callback) {
            krichtextwidget_deletewordforward_callback(this);
            return;
        }
        KRichTextWidget::deleteWordForward();
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (krichtextwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            krichtextwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        KRichTextWidget::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant loadResource(int typeVal, const QUrl& name) override {
        if (krichtextwidget_loadresource_callback) {
            int cbval1 = typeVal;
            const QUrl& name_ret = name;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&name_ret);
            QVariant* callback_ret = krichtextwidget_loadresource_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRichTextWidget::loadResource(typeVal, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
        if (krichtextwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(property);
            QVariant* callback_ret = krichtextwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRichTextWidget::inputMethodQuery(property);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (krichtextwidget_timerevent_callback) {
            QTimerEvent* cbval1 = e;
            krichtextwidget_timerevent_callback(this, cbval1);
            return;
        }
        KRichTextWidget::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (krichtextwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            krichtextwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KRichTextWidget::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (krichtextwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            krichtextwidget_resizeevent_callback(this, cbval1);
            return;
        }
        KRichTextWidget::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (krichtextwidget_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            krichtextwidget_paintevent_callback(this, cbval1);
            return;
        }
        KRichTextWidget::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (krichtextwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            krichtextwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        KRichTextWidget::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (krichtextwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = e;
            krichtextwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        KRichTextWidget::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (krichtextwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = e;
            krichtextwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KRichTextWidget::mouseDoubleClickEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (krichtextwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = krichtextwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KRichTextWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (krichtextwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = e;
            krichtextwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        KRichTextWidget::dragEnterEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (krichtextwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = e;
            krichtextwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        KRichTextWidget::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (krichtextwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = e;
            krichtextwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        KRichTextWidget::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (krichtextwidget_dropevent_callback) {
            QDropEvent* cbval1 = e;
            krichtextwidget_dropevent_callback(this, cbval1);
            return;
        }
        KRichTextWidget::dropEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (krichtextwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            krichtextwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        KRichTextWidget::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (krichtextwidget_showevent_callback) {
            QShowEvent* cbval1 = param1;
            krichtextwidget_showevent_callback(this, cbval1);
            return;
        }
        KRichTextWidget::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (krichtextwidget_changeevent_callback) {
            QEvent* cbval1 = e;
            krichtextwidget_changeevent_callback(this, cbval1);
            return;
        }
        KRichTextWidget::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (krichtextwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            krichtextwidget_wheelevent_callback(this, cbval1);
            return;
        }
        KRichTextWidget::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* createMimeDataFromSelection() const override {
        if (krichtextwidget_createmimedatafromselection_callback) {
            QMimeData* callback_ret = krichtextwidget_createmimedatafromselection_callback(this);
            return callback_ret;
        }
        return KRichTextWidget::createMimeDataFromSelection();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (krichtextwidget_caninsertfrommimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)source;
            bool callback_ret = krichtextwidget_caninsertfrommimedata_callback(this, cbval1);
            return callback_ret;
        }
        return KRichTextWidget::canInsertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertFromMimeData(const QMimeData* source) override {
        if (krichtextwidget_insertfrommimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)source;
            krichtextwidget_insertfrommimedata_callback(this, cbval1);
            return;
        }
        KRichTextWidget::insertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (krichtextwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            krichtextwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        KRichTextWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (krichtextwidget_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            krichtextwidget_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        KRichTextWidget::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetTextCursor(const QTextCursor& cursor) override {
        if (krichtextwidget_dosettextcursor_callback) {
            const QTextCursor& cursor_ret = cursor;
            // Cast returned reference into pointer
            QTextCursor* cbval1 = const_cast<QTextCursor*>(&cursor_ret);
            krichtextwidget_dosettextcursor_callback(this, cbval1);
            return;
        }
        KRichTextWidget::doSetTextCursor(cursor);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (krichtextwidget_minimumsizehint_callback) {
            QSize* callback_ret = krichtextwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRichTextWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (krichtextwidget_sizehint_callback) {
            QSize* callback_ret = krichtextwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRichTextWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (krichtextwidget_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            krichtextwidget_setupviewport_callback(this, cbval1);
            return;
        }
        KRichTextWidget::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (krichtextwidget_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = krichtextwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KRichTextWidget::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (krichtextwidget_viewportevent_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = krichtextwidget_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return KRichTextWidget::viewportEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (krichtextwidget_viewportsizehint_callback) {
            QSize* callback_ret = krichtextwidget_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRichTextWidget::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (krichtextwidget_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            krichtextwidget_initstyleoption_callback(this, cbval1);
            return;
        }
        KRichTextWidget::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (krichtextwidget_devtype_callback) {
            int callback_ret = krichtextwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KRichTextWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (krichtextwidget_setvisible_callback) {
            bool cbval1 = visible;
            krichtextwidget_setvisible_callback(this, cbval1);
            return;
        }
        KRichTextWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (krichtextwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = krichtextwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KRichTextWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (krichtextwidget_hasheightforwidth_callback) {
            bool callback_ret = krichtextwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KRichTextWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (krichtextwidget_paintengine_callback) {
            QPaintEngine* callback_ret = krichtextwidget_paintengine_callback(this);
            return callback_ret;
        }
        return KRichTextWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (krichtextwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            krichtextwidget_enterevent_callback(this, cbval1);
            return;
        }
        KRichTextWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (krichtextwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            krichtextwidget_leaveevent_callback(this, cbval1);
            return;
        }
        KRichTextWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (krichtextwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            krichtextwidget_moveevent_callback(this, cbval1);
            return;
        }
        KRichTextWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (krichtextwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            krichtextwidget_closeevent_callback(this, cbval1);
            return;
        }
        KRichTextWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (krichtextwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            krichtextwidget_tabletevent_callback(this, cbval1);
            return;
        }
        KRichTextWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (krichtextwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            krichtextwidget_actionevent_callback(this, cbval1);
            return;
        }
        KRichTextWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (krichtextwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            krichtextwidget_hideevent_callback(this, cbval1);
            return;
        }
        KRichTextWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (krichtextwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = krichtextwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KRichTextWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (krichtextwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = krichtextwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KRichTextWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (krichtextwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            krichtextwidget_initpainter_callback(this, cbval1);
            return;
        }
        KRichTextWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (krichtextwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = krichtextwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KRichTextWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (krichtextwidget_sharedpainter_callback) {
            QPainter* callback_ret = krichtextwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return KRichTextWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (krichtextwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            krichtextwidget_childevent_callback(this, cbval1);
            return;
        }
        KRichTextWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (krichtextwidget_customevent_callback) {
            QEvent* cbval1 = event;
            krichtextwidget_customevent_callback(this, cbval1);
            return;
        }
        KRichTextWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (krichtextwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            krichtextwidget_connectnotify_callback(this, cbval1);
            return;
        }
        KRichTextWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (krichtextwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            krichtextwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        KRichTextWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend void KRichTextWidget_SuperMouseReleaseEvent(KRichTextWidget* self, QMouseEvent* event);
    friend void KRichTextWidget_SuperKeyPressEvent(KRichTextWidget* self, QKeyEvent* event);
    friend bool KRichTextWidget_SuperEvent(KRichTextWidget* self, QEvent* param1);
    friend void KRichTextWidget_SuperFocusInEvent(KRichTextWidget* self, QFocusEvent* param1);
    friend void KRichTextWidget_SuperDeleteWordBack(KRichTextWidget* self);
    friend void KRichTextWidget_SuperDeleteWordForward(KRichTextWidget* self);
    friend void KRichTextWidget_SuperContextMenuEvent(KRichTextWidget* self, QContextMenuEvent* param1);
    friend void KRichTextWidget_SuperTimerEvent(KRichTextWidget* self, QTimerEvent* e);
    friend void KRichTextWidget_SuperKeyReleaseEvent(KRichTextWidget* self, QKeyEvent* e);
    friend void KRichTextWidget_SuperResizeEvent(KRichTextWidget* self, QResizeEvent* e);
    friend void KRichTextWidget_SuperPaintEvent(KRichTextWidget* self, QPaintEvent* e);
    friend void KRichTextWidget_SuperMousePressEvent(KRichTextWidget* self, QMouseEvent* e);
    friend void KRichTextWidget_SuperMouseMoveEvent(KRichTextWidget* self, QMouseEvent* e);
    friend void KRichTextWidget_SuperMouseDoubleClickEvent(KRichTextWidget* self, QMouseEvent* e);
    friend bool KRichTextWidget_SuperFocusNextPrevChild(KRichTextWidget* self, bool next);
    friend void KRichTextWidget_SuperDragEnterEvent(KRichTextWidget* self, QDragEnterEvent* e);
    friend void KRichTextWidget_SuperDragLeaveEvent(KRichTextWidget* self, QDragLeaveEvent* e);
    friend void KRichTextWidget_SuperDragMoveEvent(KRichTextWidget* self, QDragMoveEvent* e);
    friend void KRichTextWidget_SuperDropEvent(KRichTextWidget* self, QDropEvent* e);
    friend void KRichTextWidget_SuperFocusOutEvent(KRichTextWidget* self, QFocusEvent* e);
    friend void KRichTextWidget_SuperShowEvent(KRichTextWidget* self, QShowEvent* param1);
    friend void KRichTextWidget_SuperChangeEvent(KRichTextWidget* self, QEvent* e);
    friend void KRichTextWidget_SuperWheelEvent(KRichTextWidget* self, QWheelEvent* e);
    friend QMimeData* KRichTextWidget_SuperCreateMimeDataFromSelection(const KRichTextWidget* self);
    friend bool KRichTextWidget_SuperCanInsertFromMimeData(const KRichTextWidget* self, const QMimeData* source);
    friend void KRichTextWidget_SuperInsertFromMimeData(KRichTextWidget* self, const QMimeData* source);
    friend void KRichTextWidget_SuperInputMethodEvent(KRichTextWidget* self, QInputMethodEvent* param1);
    friend void KRichTextWidget_SuperScrollContentsBy(KRichTextWidget* self, int dx, int dy);
    friend void KRichTextWidget_SuperDoSetTextCursor(KRichTextWidget* self, const QTextCursor* cursor);
    friend bool KRichTextWidget_SuperEventFilter(KRichTextWidget* self, QObject* param1, QEvent* param2);
    friend bool KRichTextWidget_SuperViewportEvent(KRichTextWidget* self, QEvent* param1);
    friend QSize* KRichTextWidget_SuperViewportSizeHint(const KRichTextWidget* self);
    friend void KRichTextWidget_SuperInitStyleOption(const KRichTextWidget* self, QStyleOptionFrame* option);
    friend void KRichTextWidget_SuperEnterEvent(KRichTextWidget* self, QEnterEvent* event);
    friend void KRichTextWidget_SuperLeaveEvent(KRichTextWidget* self, QEvent* event);
    friend void KRichTextWidget_SuperMoveEvent(KRichTextWidget* self, QMoveEvent* event);
    friend void KRichTextWidget_SuperCloseEvent(KRichTextWidget* self, QCloseEvent* event);
    friend void KRichTextWidget_SuperTabletEvent(KRichTextWidget* self, QTabletEvent* event);
    friend void KRichTextWidget_SuperActionEvent(KRichTextWidget* self, QActionEvent* event);
    friend void KRichTextWidget_SuperHideEvent(KRichTextWidget* self, QHideEvent* event);
    friend bool KRichTextWidget_SuperNativeEvent(KRichTextWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KRichTextWidget_SuperMetric(const KRichTextWidget* self, int param1);
    friend void KRichTextWidget_SuperInitPainter(const KRichTextWidget* self, QPainter* painter);
    friend QPaintDevice* KRichTextWidget_SuperRedirected(const KRichTextWidget* self, QPoint* offset);
    friend QPainter* KRichTextWidget_SuperSharedPainter(const KRichTextWidget* self);
    friend void KRichTextWidget_SuperChildEvent(KRichTextWidget* self, QChildEvent* event);
    friend void KRichTextWidget_SuperCustomEvent(KRichTextWidget* self, QEvent* event);
    friend void KRichTextWidget_SuperConnectNotify(KRichTextWidget* self, const QMetaMethod* signal);
    friend void KRichTextWidget_SuperDisconnectNotify(KRichTextWidget* self, const QMetaMethod* signal);
};

#endif
