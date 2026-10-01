#pragma once
#ifndef EXTRAS_KITEMVIEWS_LIBKTREEWIDGETSEARCHLINE_HXX
#define EXTRAS_KITEMVIEWS_LIBKTREEWIDGETSEARCHLINE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTreeWidgetSearchLine
class VirtualKTreeWidgetSearchLine final : public KTreeWidgetSearchLine {
  public:
    // Virtual class public types (including callbacks and access types)
    using KTreeWidgetSearchLine_MetaObject_Callback = QMetaObject* (*)(const KTreeWidgetSearchLine*);
    using KTreeWidgetSearchLine_Metacast_Callback = void* (*)(KTreeWidgetSearchLine*, const char*);
    using KTreeWidgetSearchLine_Metacall_Callback = int (*)(KTreeWidgetSearchLine*, int, int, void**);
    using KTreeWidgetSearchLine_UpdateSearch_Callback = void (*)(KTreeWidgetSearchLine*, const char*);
    using KTreeWidgetSearchLine_ItemMatches_Callback = bool (*)(const KTreeWidgetSearchLine*, QTreeWidgetItem*, const char*);
    using KTreeWidgetSearchLine_ContextMenuEvent_Callback = void (*)(KTreeWidgetSearchLine*, QContextMenuEvent*);
    using KTreeWidgetSearchLine_UpdateSearch2_Callback = void (*)(KTreeWidgetSearchLine*, QTreeWidget*);
    using KTreeWidgetSearchLine_ConnectTreeWidget_Callback = void (*)(KTreeWidgetSearchLine*, QTreeWidget*);
    using KTreeWidgetSearchLine_DisconnectTreeWidget_Callback = void (*)(KTreeWidgetSearchLine*, QTreeWidget*);
    using KTreeWidgetSearchLine_CanChooseColumnsCheck_Callback = bool (*)(KTreeWidgetSearchLine*);
    using KTreeWidgetSearchLine_Event_Callback = bool (*)(KTreeWidgetSearchLine*, QEvent*);
    using KTreeWidgetSearchLine_SizeHint_Callback = QSize* (*)(const KTreeWidgetSearchLine*);
    using KTreeWidgetSearchLine_MinimumSizeHint_Callback = QSize* (*)(const KTreeWidgetSearchLine*);
    using KTreeWidgetSearchLine_MousePressEvent_Callback = void (*)(KTreeWidgetSearchLine*, QMouseEvent*);
    using KTreeWidgetSearchLine_MouseMoveEvent_Callback = void (*)(KTreeWidgetSearchLine*, QMouseEvent*);
    using KTreeWidgetSearchLine_MouseReleaseEvent_Callback = void (*)(KTreeWidgetSearchLine*, QMouseEvent*);
    using KTreeWidgetSearchLine_MouseDoubleClickEvent_Callback = void (*)(KTreeWidgetSearchLine*, QMouseEvent*);
    using KTreeWidgetSearchLine_KeyPressEvent_Callback = void (*)(KTreeWidgetSearchLine*, QKeyEvent*);
    using KTreeWidgetSearchLine_KeyReleaseEvent_Callback = void (*)(KTreeWidgetSearchLine*, QKeyEvent*);
    using KTreeWidgetSearchLine_FocusInEvent_Callback = void (*)(KTreeWidgetSearchLine*, QFocusEvent*);
    using KTreeWidgetSearchLine_FocusOutEvent_Callback = void (*)(KTreeWidgetSearchLine*, QFocusEvent*);
    using KTreeWidgetSearchLine_PaintEvent_Callback = void (*)(KTreeWidgetSearchLine*, QPaintEvent*);
    using KTreeWidgetSearchLine_DragEnterEvent_Callback = void (*)(KTreeWidgetSearchLine*, QDragEnterEvent*);
    using KTreeWidgetSearchLine_DragMoveEvent_Callback = void (*)(KTreeWidgetSearchLine*, QDragMoveEvent*);
    using KTreeWidgetSearchLine_DragLeaveEvent_Callback = void (*)(KTreeWidgetSearchLine*, QDragLeaveEvent*);
    using KTreeWidgetSearchLine_DropEvent_Callback = void (*)(KTreeWidgetSearchLine*, QDropEvent*);
    using KTreeWidgetSearchLine_ChangeEvent_Callback = void (*)(KTreeWidgetSearchLine*, QEvent*);
    using KTreeWidgetSearchLine_InputMethodEvent_Callback = void (*)(KTreeWidgetSearchLine*, QInputMethodEvent*);
    using KTreeWidgetSearchLine_InitStyleOption_Callback = void (*)(const KTreeWidgetSearchLine*, QStyleOptionFrame*);
    using KTreeWidgetSearchLine_InputMethodQuery_Callback = QVariant* (*)(const KTreeWidgetSearchLine*, int);
    using KTreeWidgetSearchLine_TimerEvent_Callback = void (*)(KTreeWidgetSearchLine*, QTimerEvent*);
    using KTreeWidgetSearchLine_DevType_Callback = int (*)(const KTreeWidgetSearchLine*);
    using KTreeWidgetSearchLine_SetVisible_Callback = void (*)(KTreeWidgetSearchLine*, bool);
    using KTreeWidgetSearchLine_HeightForWidth_Callback = int (*)(const KTreeWidgetSearchLine*, int);
    using KTreeWidgetSearchLine_HasHeightForWidth_Callback = bool (*)(const KTreeWidgetSearchLine*);
    using KTreeWidgetSearchLine_PaintEngine_Callback = QPaintEngine* (*)(const KTreeWidgetSearchLine*);
    using KTreeWidgetSearchLine_WheelEvent_Callback = void (*)(KTreeWidgetSearchLine*, QWheelEvent*);
    using KTreeWidgetSearchLine_EnterEvent_Callback = void (*)(KTreeWidgetSearchLine*, QEnterEvent*);
    using KTreeWidgetSearchLine_LeaveEvent_Callback = void (*)(KTreeWidgetSearchLine*, QEvent*);
    using KTreeWidgetSearchLine_MoveEvent_Callback = void (*)(KTreeWidgetSearchLine*, QMoveEvent*);
    using KTreeWidgetSearchLine_ResizeEvent_Callback = void (*)(KTreeWidgetSearchLine*, QResizeEvent*);
    using KTreeWidgetSearchLine_CloseEvent_Callback = void (*)(KTreeWidgetSearchLine*, QCloseEvent*);
    using KTreeWidgetSearchLine_TabletEvent_Callback = void (*)(KTreeWidgetSearchLine*, QTabletEvent*);
    using KTreeWidgetSearchLine_ActionEvent_Callback = void (*)(KTreeWidgetSearchLine*, QActionEvent*);
    using KTreeWidgetSearchLine_ShowEvent_Callback = void (*)(KTreeWidgetSearchLine*, QShowEvent*);
    using KTreeWidgetSearchLine_HideEvent_Callback = void (*)(KTreeWidgetSearchLine*, QHideEvent*);
    using KTreeWidgetSearchLine_NativeEvent_Callback = bool (*)(KTreeWidgetSearchLine*, libqt_string, void*, intptr_t*);
    using KTreeWidgetSearchLine_Metric_Callback = int (*)(const KTreeWidgetSearchLine*, int);
    using KTreeWidgetSearchLine_InitPainter_Callback = void (*)(const KTreeWidgetSearchLine*, QPainter*);
    using KTreeWidgetSearchLine_Redirected_Callback = QPaintDevice* (*)(const KTreeWidgetSearchLine*, QPoint*);
    using KTreeWidgetSearchLine_SharedPainter_Callback = QPainter* (*)(const KTreeWidgetSearchLine*);
    using KTreeWidgetSearchLine_FocusNextPrevChild_Callback = bool (*)(KTreeWidgetSearchLine*, bool);
    using KTreeWidgetSearchLine_EventFilter_Callback = bool (*)(KTreeWidgetSearchLine*, QObject*, QEvent*);
    using KTreeWidgetSearchLine_ChildEvent_Callback = void (*)(KTreeWidgetSearchLine*, QChildEvent*);
    using KTreeWidgetSearchLine_CustomEvent_Callback = void (*)(KTreeWidgetSearchLine*, QEvent*);
    using KTreeWidgetSearchLine_ConnectNotify_Callback = void (*)(KTreeWidgetSearchLine*, QMetaMethod*);
    using KTreeWidgetSearchLine_DisconnectNotify_Callback = void (*)(KTreeWidgetSearchLine*, QMetaMethod*);
    using KTreeWidgetSearchLine::create;
    using KTreeWidgetSearchLine::cursorRect;
    using KTreeWidgetSearchLine::destroy;
    using KTreeWidgetSearchLine::focusNextChild;
    using KTreeWidgetSearchLine::focusPreviousChild;
    using KTreeWidgetSearchLine::getDecodedMetricF;
    using KTreeWidgetSearchLine::isSignalConnected;
    using KTreeWidgetSearchLine::receivers;
    using KTreeWidgetSearchLine::sender;
    using KTreeWidgetSearchLine::senderSignalIndex;
    using KTreeWidgetSearchLine::updateMicroFocus;

    // Instance callback storage
    KTreeWidgetSearchLine_MetaObject_Callback ktreewidgetsearchline_metaobject_callback = nullptr;
    KTreeWidgetSearchLine_Metacast_Callback ktreewidgetsearchline_metacast_callback = nullptr;
    KTreeWidgetSearchLine_Metacall_Callback ktreewidgetsearchline_metacall_callback = nullptr;
    KTreeWidgetSearchLine_UpdateSearch_Callback ktreewidgetsearchline_updatesearch_callback = nullptr;
    KTreeWidgetSearchLine_ItemMatches_Callback ktreewidgetsearchline_itemmatches_callback = nullptr;
    KTreeWidgetSearchLine_ContextMenuEvent_Callback ktreewidgetsearchline_contextmenuevent_callback = nullptr;
    KTreeWidgetSearchLine_UpdateSearch2_Callback ktreewidgetsearchline_updatesearch2_callback = nullptr;
    KTreeWidgetSearchLine_ConnectTreeWidget_Callback ktreewidgetsearchline_connecttreewidget_callback = nullptr;
    KTreeWidgetSearchLine_DisconnectTreeWidget_Callback ktreewidgetsearchline_disconnecttreewidget_callback = nullptr;
    KTreeWidgetSearchLine_CanChooseColumnsCheck_Callback ktreewidgetsearchline_canchoosecolumnscheck_callback = nullptr;
    KTreeWidgetSearchLine_Event_Callback ktreewidgetsearchline_event_callback = nullptr;
    KTreeWidgetSearchLine_SizeHint_Callback ktreewidgetsearchline_sizehint_callback = nullptr;
    KTreeWidgetSearchLine_MinimumSizeHint_Callback ktreewidgetsearchline_minimumsizehint_callback = nullptr;
    KTreeWidgetSearchLine_MousePressEvent_Callback ktreewidgetsearchline_mousepressevent_callback = nullptr;
    KTreeWidgetSearchLine_MouseMoveEvent_Callback ktreewidgetsearchline_mousemoveevent_callback = nullptr;
    KTreeWidgetSearchLine_MouseReleaseEvent_Callback ktreewidgetsearchline_mousereleaseevent_callback = nullptr;
    KTreeWidgetSearchLine_MouseDoubleClickEvent_Callback ktreewidgetsearchline_mousedoubleclickevent_callback = nullptr;
    KTreeWidgetSearchLine_KeyPressEvent_Callback ktreewidgetsearchline_keypressevent_callback = nullptr;
    KTreeWidgetSearchLine_KeyReleaseEvent_Callback ktreewidgetsearchline_keyreleaseevent_callback = nullptr;
    KTreeWidgetSearchLine_FocusInEvent_Callback ktreewidgetsearchline_focusinevent_callback = nullptr;
    KTreeWidgetSearchLine_FocusOutEvent_Callback ktreewidgetsearchline_focusoutevent_callback = nullptr;
    KTreeWidgetSearchLine_PaintEvent_Callback ktreewidgetsearchline_paintevent_callback = nullptr;
    KTreeWidgetSearchLine_DragEnterEvent_Callback ktreewidgetsearchline_dragenterevent_callback = nullptr;
    KTreeWidgetSearchLine_DragMoveEvent_Callback ktreewidgetsearchline_dragmoveevent_callback = nullptr;
    KTreeWidgetSearchLine_DragLeaveEvent_Callback ktreewidgetsearchline_dragleaveevent_callback = nullptr;
    KTreeWidgetSearchLine_DropEvent_Callback ktreewidgetsearchline_dropevent_callback = nullptr;
    KTreeWidgetSearchLine_ChangeEvent_Callback ktreewidgetsearchline_changeevent_callback = nullptr;
    KTreeWidgetSearchLine_InputMethodEvent_Callback ktreewidgetsearchline_inputmethodevent_callback = nullptr;
    KTreeWidgetSearchLine_InitStyleOption_Callback ktreewidgetsearchline_initstyleoption_callback = nullptr;
    KTreeWidgetSearchLine_InputMethodQuery_Callback ktreewidgetsearchline_inputmethodquery_callback = nullptr;
    KTreeWidgetSearchLine_TimerEvent_Callback ktreewidgetsearchline_timerevent_callback = nullptr;
    KTreeWidgetSearchLine_DevType_Callback ktreewidgetsearchline_devtype_callback = nullptr;
    KTreeWidgetSearchLine_SetVisible_Callback ktreewidgetsearchline_setvisible_callback = nullptr;
    KTreeWidgetSearchLine_HeightForWidth_Callback ktreewidgetsearchline_heightforwidth_callback = nullptr;
    KTreeWidgetSearchLine_HasHeightForWidth_Callback ktreewidgetsearchline_hasheightforwidth_callback = nullptr;
    KTreeWidgetSearchLine_PaintEngine_Callback ktreewidgetsearchline_paintengine_callback = nullptr;
    KTreeWidgetSearchLine_WheelEvent_Callback ktreewidgetsearchline_wheelevent_callback = nullptr;
    KTreeWidgetSearchLine_EnterEvent_Callback ktreewidgetsearchline_enterevent_callback = nullptr;
    KTreeWidgetSearchLine_LeaveEvent_Callback ktreewidgetsearchline_leaveevent_callback = nullptr;
    KTreeWidgetSearchLine_MoveEvent_Callback ktreewidgetsearchline_moveevent_callback = nullptr;
    KTreeWidgetSearchLine_ResizeEvent_Callback ktreewidgetsearchline_resizeevent_callback = nullptr;
    KTreeWidgetSearchLine_CloseEvent_Callback ktreewidgetsearchline_closeevent_callback = nullptr;
    KTreeWidgetSearchLine_TabletEvent_Callback ktreewidgetsearchline_tabletevent_callback = nullptr;
    KTreeWidgetSearchLine_ActionEvent_Callback ktreewidgetsearchline_actionevent_callback = nullptr;
    KTreeWidgetSearchLine_ShowEvent_Callback ktreewidgetsearchline_showevent_callback = nullptr;
    KTreeWidgetSearchLine_HideEvent_Callback ktreewidgetsearchline_hideevent_callback = nullptr;
    KTreeWidgetSearchLine_NativeEvent_Callback ktreewidgetsearchline_nativeevent_callback = nullptr;
    KTreeWidgetSearchLine_Metric_Callback ktreewidgetsearchline_metric_callback = nullptr;
    KTreeWidgetSearchLine_InitPainter_Callback ktreewidgetsearchline_initpainter_callback = nullptr;
    KTreeWidgetSearchLine_Redirected_Callback ktreewidgetsearchline_redirected_callback = nullptr;
    KTreeWidgetSearchLine_SharedPainter_Callback ktreewidgetsearchline_sharedpainter_callback = nullptr;
    KTreeWidgetSearchLine_FocusNextPrevChild_Callback ktreewidgetsearchline_focusnextprevchild_callback = nullptr;
    KTreeWidgetSearchLine_EventFilter_Callback ktreewidgetsearchline_eventfilter_callback = nullptr;
    KTreeWidgetSearchLine_ChildEvent_Callback ktreewidgetsearchline_childevent_callback = nullptr;
    KTreeWidgetSearchLine_CustomEvent_Callback ktreewidgetsearchline_customevent_callback = nullptr;
    KTreeWidgetSearchLine_ConnectNotify_Callback ktreewidgetsearchline_connectnotify_callback = nullptr;
    KTreeWidgetSearchLine_DisconnectNotify_Callback ktreewidgetsearchline_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KTreeWidgetSearchLine {
        using KTreeWidgetSearchLine::actionEvent;
        using KTreeWidgetSearchLine::canChooseColumnsCheck;
        using KTreeWidgetSearchLine::changeEvent;
        using KTreeWidgetSearchLine::childEvent;
        using KTreeWidgetSearchLine::closeEvent;
        using KTreeWidgetSearchLine::connectNotify;
        using KTreeWidgetSearchLine::connectTreeWidget;
        using KTreeWidgetSearchLine::contextMenuEvent;
        using KTreeWidgetSearchLine::customEvent;
        using KTreeWidgetSearchLine::disconnectNotify;
        using KTreeWidgetSearchLine::disconnectTreeWidget;
        using KTreeWidgetSearchLine::dragEnterEvent;
        using KTreeWidgetSearchLine::dragLeaveEvent;
        using KTreeWidgetSearchLine::dragMoveEvent;
        using KTreeWidgetSearchLine::dropEvent;
        using KTreeWidgetSearchLine::enterEvent;
        using KTreeWidgetSearchLine::event;
        using KTreeWidgetSearchLine::focusInEvent;
        using KTreeWidgetSearchLine::focusNextPrevChild;
        using KTreeWidgetSearchLine::focusOutEvent;
        using KTreeWidgetSearchLine::hideEvent;
        using KTreeWidgetSearchLine::initPainter;
        using KTreeWidgetSearchLine::initStyleOption;
        using KTreeWidgetSearchLine::inputMethodEvent;
        using KTreeWidgetSearchLine::itemMatches;
        using KTreeWidgetSearchLine::keyPressEvent;
        using KTreeWidgetSearchLine::keyReleaseEvent;
        using KTreeWidgetSearchLine::leaveEvent;
        using KTreeWidgetSearchLine::metric;
        using KTreeWidgetSearchLine::mouseDoubleClickEvent;
        using KTreeWidgetSearchLine::mouseMoveEvent;
        using KTreeWidgetSearchLine::mousePressEvent;
        using KTreeWidgetSearchLine::mouseReleaseEvent;
        using KTreeWidgetSearchLine::moveEvent;
        using KTreeWidgetSearchLine::nativeEvent;
        using KTreeWidgetSearchLine::paintEvent;
        using KTreeWidgetSearchLine::redirected;
        using KTreeWidgetSearchLine::resizeEvent;
        using KTreeWidgetSearchLine::sharedPainter;
        using KTreeWidgetSearchLine::showEvent;
        using KTreeWidgetSearchLine::tabletEvent;
        using KTreeWidgetSearchLine::updateSearch;
        using KTreeWidgetSearchLine::wheelEvent;
    };

    VirtualKTreeWidgetSearchLine(QWidget* parent) : KTreeWidgetSearchLine(parent) {};
    VirtualKTreeWidgetSearchLine() : KTreeWidgetSearchLine() {};
    VirtualKTreeWidgetSearchLine(QWidget* parent, const QList<QTreeWidget*>& treeWidgets) : KTreeWidgetSearchLine(parent, treeWidgets) {};
    VirtualKTreeWidgetSearchLine(QWidget* parent, QTreeWidget* treeWidget) : KTreeWidgetSearchLine(parent, treeWidget) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ktreewidgetsearchline_metaobject_callback) {
            QMetaObject* callback_ret = ktreewidgetsearchline_metaobject_callback(this);
            return callback_ret;
        }
        return KTreeWidgetSearchLine::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktreewidgetsearchline_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ktreewidgetsearchline_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KTreeWidgetSearchLine::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktreewidgetsearchline_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ktreewidgetsearchline_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KTreeWidgetSearchLine::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateSearch(const QString& pattern) override {
        if (ktreewidgetsearchline_updatesearch_callback) {
            const auto pattern_ret = pattern;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray pattern_b = pattern_ret.toUtf8();
            auto pattern_str_len = pattern_b.length();
            const char* pattern_str = static_cast<const char*>(malloc(pattern_str_len + 1));
            memcpy((void*)pattern_str, pattern_b.data(), pattern_str_len);
            ((char*)pattern_str)[pattern_str_len] = '\0';
            const char* cbval1 = pattern_str;
            ktreewidgetsearchline_updatesearch_callback(this, cbval1);
            libqt_free(pattern_str);
            return;
        }
        KTreeWidgetSearchLine::updateSearch(pattern);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool itemMatches(const QTreeWidgetItem* item, const QString& pattern) const override {
        if (ktreewidgetsearchline_itemmatches_callback) {
            QTreeWidgetItem* cbval1 = (QTreeWidgetItem*)item;
            const auto pattern_ret = pattern;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray pattern_b = pattern_ret.toUtf8();
            auto pattern_str_len = pattern_b.length();
            const char* pattern_str = static_cast<const char*>(malloc(pattern_str_len + 1));
            memcpy((void*)pattern_str, pattern_b.data(), pattern_str_len);
            ((char*)pattern_str)[pattern_str_len] = '\0';
            const char* cbval2 = pattern_str;
            bool callback_ret = ktreewidgetsearchline_itemmatches_callback(this, cbval1, cbval2);
            libqt_free(pattern_str);
            return callback_ret;
        }
        return KTreeWidgetSearchLine::itemMatches(item, pattern);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (ktreewidgetsearchline_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            ktreewidgetsearchline_contextmenuevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateSearch(QTreeWidget* treeWidget) override {
        if (ktreewidgetsearchline_updatesearch2_callback) {
            QTreeWidget* cbval1 = treeWidget;
            ktreewidgetsearchline_updatesearch2_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::updateSearch(treeWidget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectTreeWidget(QTreeWidget* param1) override {
        if (ktreewidgetsearchline_connecttreewidget_callback) {
            QTreeWidget* cbval1 = param1;
            ktreewidgetsearchline_connecttreewidget_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::connectTreeWidget(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectTreeWidget(QTreeWidget* param1) override {
        if (ktreewidgetsearchline_disconnecttreewidget_callback) {
            QTreeWidget* cbval1 = param1;
            ktreewidgetsearchline_disconnecttreewidget_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::disconnectTreeWidget(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canChooseColumnsCheck() override {
        if (ktreewidgetsearchline_canchoosecolumnscheck_callback) {
            bool callback_ret = ktreewidgetsearchline_canchoosecolumnscheck_callback(this);
            return callback_ret;
        }
        return KTreeWidgetSearchLine::canChooseColumnsCheck();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktreewidgetsearchline_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = ktreewidgetsearchline_event_callback(this, cbval1);
            return callback_ret;
        }
        return KTreeWidgetSearchLine::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (ktreewidgetsearchline_sizehint_callback) {
            QSize* callback_ret = ktreewidgetsearchline_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KTreeWidgetSearchLine::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (ktreewidgetsearchline_minimumsizehint_callback) {
            QSize* callback_ret = ktreewidgetsearchline_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KTreeWidgetSearchLine::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (ktreewidgetsearchline_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            ktreewidgetsearchline_mousepressevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (ktreewidgetsearchline_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            ktreewidgetsearchline_mousemoveevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (ktreewidgetsearchline_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            ktreewidgetsearchline_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (ktreewidgetsearchline_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = param1;
            ktreewidgetsearchline_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::mouseDoubleClickEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (ktreewidgetsearchline_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            ktreewidgetsearchline_keypressevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* param1) override {
        if (ktreewidgetsearchline_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = param1;
            ktreewidgetsearchline_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::keyReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (ktreewidgetsearchline_focusinevent_callback) {
            QFocusEvent* cbval1 = param1;
            ktreewidgetsearchline_focusinevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (ktreewidgetsearchline_focusoutevent_callback) {
            QFocusEvent* cbval1 = param1;
            ktreewidgetsearchline_focusoutevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (ktreewidgetsearchline_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            ktreewidgetsearchline_paintevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (ktreewidgetsearchline_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = param1;
            ktreewidgetsearchline_dragenterevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::dragEnterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (ktreewidgetsearchline_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = e;
            ktreewidgetsearchline_dragmoveevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (ktreewidgetsearchline_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = e;
            ktreewidgetsearchline_dragleaveevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (ktreewidgetsearchline_dropevent_callback) {
            QDropEvent* cbval1 = param1;
            ktreewidgetsearchline_dropevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::dropEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (ktreewidgetsearchline_changeevent_callback) {
            QEvent* cbval1 = param1;
            ktreewidgetsearchline_changeevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (ktreewidgetsearchline_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            ktreewidgetsearchline_inputmethodevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (ktreewidgetsearchline_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            ktreewidgetsearchline_initstyleoption_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (ktreewidgetsearchline_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = ktreewidgetsearchline_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KTreeWidgetSearchLine::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (ktreewidgetsearchline_timerevent_callback) {
            QTimerEvent* cbval1 = param1;
            ktreewidgetsearchline_timerevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (ktreewidgetsearchline_devtype_callback) {
            int callback_ret = ktreewidgetsearchline_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KTreeWidgetSearchLine::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (ktreewidgetsearchline_setvisible_callback) {
            bool cbval1 = visible;
            ktreewidgetsearchline_setvisible_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (ktreewidgetsearchline_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = ktreewidgetsearchline_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KTreeWidgetSearchLine::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (ktreewidgetsearchline_hasheightforwidth_callback) {
            bool callback_ret = ktreewidgetsearchline_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KTreeWidgetSearchLine::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (ktreewidgetsearchline_paintengine_callback) {
            QPaintEngine* callback_ret = ktreewidgetsearchline_paintengine_callback(this);
            return callback_ret;
        }
        return KTreeWidgetSearchLine::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (ktreewidgetsearchline_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            ktreewidgetsearchline_wheelevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (ktreewidgetsearchline_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            ktreewidgetsearchline_enterevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (ktreewidgetsearchline_leaveevent_callback) {
            QEvent* cbval1 = event;
            ktreewidgetsearchline_leaveevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (ktreewidgetsearchline_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            ktreewidgetsearchline_moveevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (ktreewidgetsearchline_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            ktreewidgetsearchline_resizeevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (ktreewidgetsearchline_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            ktreewidgetsearchline_closeevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (ktreewidgetsearchline_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            ktreewidgetsearchline_tabletevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (ktreewidgetsearchline_actionevent_callback) {
            QActionEvent* cbval1 = event;
            ktreewidgetsearchline_actionevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (ktreewidgetsearchline_showevent_callback) {
            QShowEvent* cbval1 = event;
            ktreewidgetsearchline_showevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (ktreewidgetsearchline_hideevent_callback) {
            QHideEvent* cbval1 = event;
            ktreewidgetsearchline_hideevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (ktreewidgetsearchline_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = ktreewidgetsearchline_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KTreeWidgetSearchLine::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (ktreewidgetsearchline_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = ktreewidgetsearchline_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KTreeWidgetSearchLine::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (ktreewidgetsearchline_initpainter_callback) {
            QPainter* cbval1 = painter;
            ktreewidgetsearchline_initpainter_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (ktreewidgetsearchline_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = ktreewidgetsearchline_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KTreeWidgetSearchLine::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (ktreewidgetsearchline_sharedpainter_callback) {
            QPainter* callback_ret = ktreewidgetsearchline_sharedpainter_callback(this);
            return callback_ret;
        }
        return KTreeWidgetSearchLine::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (ktreewidgetsearchline_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = ktreewidgetsearchline_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KTreeWidgetSearchLine::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktreewidgetsearchline_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = ktreewidgetsearchline_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KTreeWidgetSearchLine::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktreewidgetsearchline_childevent_callback) {
            QChildEvent* cbval1 = event;
            ktreewidgetsearchline_childevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktreewidgetsearchline_customevent_callback) {
            QEvent* cbval1 = event;
            ktreewidgetsearchline_customevent_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktreewidgetsearchline_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktreewidgetsearchline_connectnotify_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktreewidgetsearchline_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktreewidgetsearchline_disconnectnotify_callback(this, cbval1);
            return;
        }
        KTreeWidgetSearchLine::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KTreeWidgetSearchLine_SuperItemMatches(const KTreeWidgetSearchLine* self, const QTreeWidgetItem* item, const libqt_string pattern);
    friend void KTreeWidgetSearchLine_SuperContextMenuEvent(KTreeWidgetSearchLine* self, QContextMenuEvent* param1);
    friend void KTreeWidgetSearchLine_SuperUpdateSearch2(KTreeWidgetSearchLine* self, QTreeWidget* treeWidget);
    friend void KTreeWidgetSearchLine_SuperConnectTreeWidget(KTreeWidgetSearchLine* self, QTreeWidget* param1);
    friend void KTreeWidgetSearchLine_SuperDisconnectTreeWidget(KTreeWidgetSearchLine* self, QTreeWidget* param1);
    friend bool KTreeWidgetSearchLine_SuperCanChooseColumnsCheck(KTreeWidgetSearchLine* self);
    friend bool KTreeWidgetSearchLine_SuperEvent(KTreeWidgetSearchLine* self, QEvent* event);
    friend void KTreeWidgetSearchLine_SuperMousePressEvent(KTreeWidgetSearchLine* self, QMouseEvent* param1);
    friend void KTreeWidgetSearchLine_SuperMouseMoveEvent(KTreeWidgetSearchLine* self, QMouseEvent* param1);
    friend void KTreeWidgetSearchLine_SuperMouseReleaseEvent(KTreeWidgetSearchLine* self, QMouseEvent* param1);
    friend void KTreeWidgetSearchLine_SuperMouseDoubleClickEvent(KTreeWidgetSearchLine* self, QMouseEvent* param1);
    friend void KTreeWidgetSearchLine_SuperKeyPressEvent(KTreeWidgetSearchLine* self, QKeyEvent* param1);
    friend void KTreeWidgetSearchLine_SuperKeyReleaseEvent(KTreeWidgetSearchLine* self, QKeyEvent* param1);
    friend void KTreeWidgetSearchLine_SuperFocusInEvent(KTreeWidgetSearchLine* self, QFocusEvent* param1);
    friend void KTreeWidgetSearchLine_SuperFocusOutEvent(KTreeWidgetSearchLine* self, QFocusEvent* param1);
    friend void KTreeWidgetSearchLine_SuperPaintEvent(KTreeWidgetSearchLine* self, QPaintEvent* param1);
    friend void KTreeWidgetSearchLine_SuperDragEnterEvent(KTreeWidgetSearchLine* self, QDragEnterEvent* param1);
    friend void KTreeWidgetSearchLine_SuperDragMoveEvent(KTreeWidgetSearchLine* self, QDragMoveEvent* e);
    friend void KTreeWidgetSearchLine_SuperDragLeaveEvent(KTreeWidgetSearchLine* self, QDragLeaveEvent* e);
    friend void KTreeWidgetSearchLine_SuperDropEvent(KTreeWidgetSearchLine* self, QDropEvent* param1);
    friend void KTreeWidgetSearchLine_SuperChangeEvent(KTreeWidgetSearchLine* self, QEvent* param1);
    friend void KTreeWidgetSearchLine_SuperInputMethodEvent(KTreeWidgetSearchLine* self, QInputMethodEvent* param1);
    friend void KTreeWidgetSearchLine_SuperInitStyleOption(const KTreeWidgetSearchLine* self, QStyleOptionFrame* option);
    friend void KTreeWidgetSearchLine_SuperWheelEvent(KTreeWidgetSearchLine* self, QWheelEvent* event);
    friend void KTreeWidgetSearchLine_SuperEnterEvent(KTreeWidgetSearchLine* self, QEnterEvent* event);
    friend void KTreeWidgetSearchLine_SuperLeaveEvent(KTreeWidgetSearchLine* self, QEvent* event);
    friend void KTreeWidgetSearchLine_SuperMoveEvent(KTreeWidgetSearchLine* self, QMoveEvent* event);
    friend void KTreeWidgetSearchLine_SuperResizeEvent(KTreeWidgetSearchLine* self, QResizeEvent* event);
    friend void KTreeWidgetSearchLine_SuperCloseEvent(KTreeWidgetSearchLine* self, QCloseEvent* event);
    friend void KTreeWidgetSearchLine_SuperTabletEvent(KTreeWidgetSearchLine* self, QTabletEvent* event);
    friend void KTreeWidgetSearchLine_SuperActionEvent(KTreeWidgetSearchLine* self, QActionEvent* event);
    friend void KTreeWidgetSearchLine_SuperShowEvent(KTreeWidgetSearchLine* self, QShowEvent* event);
    friend void KTreeWidgetSearchLine_SuperHideEvent(KTreeWidgetSearchLine* self, QHideEvent* event);
    friend bool KTreeWidgetSearchLine_SuperNativeEvent(KTreeWidgetSearchLine* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KTreeWidgetSearchLine_SuperMetric(const KTreeWidgetSearchLine* self, int param1);
    friend void KTreeWidgetSearchLine_SuperInitPainter(const KTreeWidgetSearchLine* self, QPainter* painter);
    friend QPaintDevice* KTreeWidgetSearchLine_SuperRedirected(const KTreeWidgetSearchLine* self, QPoint* offset);
    friend QPainter* KTreeWidgetSearchLine_SuperSharedPainter(const KTreeWidgetSearchLine* self);
    friend bool KTreeWidgetSearchLine_SuperFocusNextPrevChild(KTreeWidgetSearchLine* self, bool next);
    friend void KTreeWidgetSearchLine_SuperChildEvent(KTreeWidgetSearchLine* self, QChildEvent* event);
    friend void KTreeWidgetSearchLine_SuperCustomEvent(KTreeWidgetSearchLine* self, QEvent* event);
    friend void KTreeWidgetSearchLine_SuperConnectNotify(KTreeWidgetSearchLine* self, const QMetaMethod* signal);
    friend void KTreeWidgetSearchLine_SuperDisconnectNotify(KTreeWidgetSearchLine* self, const QMetaMethod* signal);
};

#endif
