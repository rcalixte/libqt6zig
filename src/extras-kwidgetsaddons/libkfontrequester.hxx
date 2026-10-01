#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKFONTREQUESTER_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKFONTREQUESTER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFontRequester
class VirtualKFontRequester final : public KFontRequester {
  public:
    // Virtual class public types (including callbacks and access types)
    using KFontRequester_MetaObject_Callback = QMetaObject* (*)(const KFontRequester*);
    using KFontRequester_Metacast_Callback = void* (*)(KFontRequester*, const char*);
    using KFontRequester_Metacall_Callback = int (*)(KFontRequester*, int, int, void**);
    using KFontRequester_SetFont_Callback = void (*)(KFontRequester*, QFont*, bool);
    using KFontRequester_SetSampleText_Callback = void (*)(KFontRequester*, const char*);
    using KFontRequester_SetTitle_Callback = void (*)(KFontRequester*, const char*);
    using KFontRequester_EventFilter_Callback = bool (*)(KFontRequester*, QObject*, QEvent*);
    using KFontRequester_DevType_Callback = int (*)(const KFontRequester*);
    using KFontRequester_SetVisible_Callback = void (*)(KFontRequester*, bool);
    using KFontRequester_SizeHint_Callback = QSize* (*)(const KFontRequester*);
    using KFontRequester_MinimumSizeHint_Callback = QSize* (*)(const KFontRequester*);
    using KFontRequester_HeightForWidth_Callback = int (*)(const KFontRequester*, int);
    using KFontRequester_HasHeightForWidth_Callback = bool (*)(const KFontRequester*);
    using KFontRequester_PaintEngine_Callback = QPaintEngine* (*)(const KFontRequester*);
    using KFontRequester_Event_Callback = bool (*)(KFontRequester*, QEvent*);
    using KFontRequester_MousePressEvent_Callback = void (*)(KFontRequester*, QMouseEvent*);
    using KFontRequester_MouseReleaseEvent_Callback = void (*)(KFontRequester*, QMouseEvent*);
    using KFontRequester_MouseDoubleClickEvent_Callback = void (*)(KFontRequester*, QMouseEvent*);
    using KFontRequester_MouseMoveEvent_Callback = void (*)(KFontRequester*, QMouseEvent*);
    using KFontRequester_WheelEvent_Callback = void (*)(KFontRequester*, QWheelEvent*);
    using KFontRequester_KeyPressEvent_Callback = void (*)(KFontRequester*, QKeyEvent*);
    using KFontRequester_KeyReleaseEvent_Callback = void (*)(KFontRequester*, QKeyEvent*);
    using KFontRequester_FocusInEvent_Callback = void (*)(KFontRequester*, QFocusEvent*);
    using KFontRequester_FocusOutEvent_Callback = void (*)(KFontRequester*, QFocusEvent*);
    using KFontRequester_EnterEvent_Callback = void (*)(KFontRequester*, QEnterEvent*);
    using KFontRequester_LeaveEvent_Callback = void (*)(KFontRequester*, QEvent*);
    using KFontRequester_PaintEvent_Callback = void (*)(KFontRequester*, QPaintEvent*);
    using KFontRequester_MoveEvent_Callback = void (*)(KFontRequester*, QMoveEvent*);
    using KFontRequester_ResizeEvent_Callback = void (*)(KFontRequester*, QResizeEvent*);
    using KFontRequester_CloseEvent_Callback = void (*)(KFontRequester*, QCloseEvent*);
    using KFontRequester_ContextMenuEvent_Callback = void (*)(KFontRequester*, QContextMenuEvent*);
    using KFontRequester_TabletEvent_Callback = void (*)(KFontRequester*, QTabletEvent*);
    using KFontRequester_ActionEvent_Callback = void (*)(KFontRequester*, QActionEvent*);
    using KFontRequester_DragEnterEvent_Callback = void (*)(KFontRequester*, QDragEnterEvent*);
    using KFontRequester_DragMoveEvent_Callback = void (*)(KFontRequester*, QDragMoveEvent*);
    using KFontRequester_DragLeaveEvent_Callback = void (*)(KFontRequester*, QDragLeaveEvent*);
    using KFontRequester_DropEvent_Callback = void (*)(KFontRequester*, QDropEvent*);
    using KFontRequester_ShowEvent_Callback = void (*)(KFontRequester*, QShowEvent*);
    using KFontRequester_HideEvent_Callback = void (*)(KFontRequester*, QHideEvent*);
    using KFontRequester_NativeEvent_Callback = bool (*)(KFontRequester*, libqt_string, void*, intptr_t*);
    using KFontRequester_ChangeEvent_Callback = void (*)(KFontRequester*, QEvent*);
    using KFontRequester_Metric_Callback = int (*)(const KFontRequester*, int);
    using KFontRequester_InitPainter_Callback = void (*)(const KFontRequester*, QPainter*);
    using KFontRequester_Redirected_Callback = QPaintDevice* (*)(const KFontRequester*, QPoint*);
    using KFontRequester_SharedPainter_Callback = QPainter* (*)(const KFontRequester*);
    using KFontRequester_InputMethodEvent_Callback = void (*)(KFontRequester*, QInputMethodEvent*);
    using KFontRequester_InputMethodQuery_Callback = QVariant* (*)(const KFontRequester*, int);
    using KFontRequester_FocusNextPrevChild_Callback = bool (*)(KFontRequester*, bool);
    using KFontRequester_TimerEvent_Callback = void (*)(KFontRequester*, QTimerEvent*);
    using KFontRequester_ChildEvent_Callback = void (*)(KFontRequester*, QChildEvent*);
    using KFontRequester_CustomEvent_Callback = void (*)(KFontRequester*, QEvent*);
    using KFontRequester_ConnectNotify_Callback = void (*)(KFontRequester*, QMetaMethod*);
    using KFontRequester_DisconnectNotify_Callback = void (*)(KFontRequester*, QMetaMethod*);
    using KFontRequester::create;
    using KFontRequester::destroy;
    using KFontRequester::focusNextChild;
    using KFontRequester::focusPreviousChild;
    using KFontRequester::getDecodedMetricF;
    using KFontRequester::isSignalConnected;
    using KFontRequester::receivers;
    using KFontRequester::sender;
    using KFontRequester::senderSignalIndex;
    using KFontRequester::updateMicroFocus;

    // Instance callback storage
    KFontRequester_MetaObject_Callback kfontrequester_metaobject_callback = nullptr;
    KFontRequester_Metacast_Callback kfontrequester_metacast_callback = nullptr;
    KFontRequester_Metacall_Callback kfontrequester_metacall_callback = nullptr;
    KFontRequester_SetFont_Callback kfontrequester_setfont_callback = nullptr;
    KFontRequester_SetSampleText_Callback kfontrequester_setsampletext_callback = nullptr;
    KFontRequester_SetTitle_Callback kfontrequester_settitle_callback = nullptr;
    KFontRequester_EventFilter_Callback kfontrequester_eventfilter_callback = nullptr;
    KFontRequester_DevType_Callback kfontrequester_devtype_callback = nullptr;
    KFontRequester_SetVisible_Callback kfontrequester_setvisible_callback = nullptr;
    KFontRequester_SizeHint_Callback kfontrequester_sizehint_callback = nullptr;
    KFontRequester_MinimumSizeHint_Callback kfontrequester_minimumsizehint_callback = nullptr;
    KFontRequester_HeightForWidth_Callback kfontrequester_heightforwidth_callback = nullptr;
    KFontRequester_HasHeightForWidth_Callback kfontrequester_hasheightforwidth_callback = nullptr;
    KFontRequester_PaintEngine_Callback kfontrequester_paintengine_callback = nullptr;
    KFontRequester_Event_Callback kfontrequester_event_callback = nullptr;
    KFontRequester_MousePressEvent_Callback kfontrequester_mousepressevent_callback = nullptr;
    KFontRequester_MouseReleaseEvent_Callback kfontrequester_mousereleaseevent_callback = nullptr;
    KFontRequester_MouseDoubleClickEvent_Callback kfontrequester_mousedoubleclickevent_callback = nullptr;
    KFontRequester_MouseMoveEvent_Callback kfontrequester_mousemoveevent_callback = nullptr;
    KFontRequester_WheelEvent_Callback kfontrequester_wheelevent_callback = nullptr;
    KFontRequester_KeyPressEvent_Callback kfontrequester_keypressevent_callback = nullptr;
    KFontRequester_KeyReleaseEvent_Callback kfontrequester_keyreleaseevent_callback = nullptr;
    KFontRequester_FocusInEvent_Callback kfontrequester_focusinevent_callback = nullptr;
    KFontRequester_FocusOutEvent_Callback kfontrequester_focusoutevent_callback = nullptr;
    KFontRequester_EnterEvent_Callback kfontrequester_enterevent_callback = nullptr;
    KFontRequester_LeaveEvent_Callback kfontrequester_leaveevent_callback = nullptr;
    KFontRequester_PaintEvent_Callback kfontrequester_paintevent_callback = nullptr;
    KFontRequester_MoveEvent_Callback kfontrequester_moveevent_callback = nullptr;
    KFontRequester_ResizeEvent_Callback kfontrequester_resizeevent_callback = nullptr;
    KFontRequester_CloseEvent_Callback kfontrequester_closeevent_callback = nullptr;
    KFontRequester_ContextMenuEvent_Callback kfontrequester_contextmenuevent_callback = nullptr;
    KFontRequester_TabletEvent_Callback kfontrequester_tabletevent_callback = nullptr;
    KFontRequester_ActionEvent_Callback kfontrequester_actionevent_callback = nullptr;
    KFontRequester_DragEnterEvent_Callback kfontrequester_dragenterevent_callback = nullptr;
    KFontRequester_DragMoveEvent_Callback kfontrequester_dragmoveevent_callback = nullptr;
    KFontRequester_DragLeaveEvent_Callback kfontrequester_dragleaveevent_callback = nullptr;
    KFontRequester_DropEvent_Callback kfontrequester_dropevent_callback = nullptr;
    KFontRequester_ShowEvent_Callback kfontrequester_showevent_callback = nullptr;
    KFontRequester_HideEvent_Callback kfontrequester_hideevent_callback = nullptr;
    KFontRequester_NativeEvent_Callback kfontrequester_nativeevent_callback = nullptr;
    KFontRequester_ChangeEvent_Callback kfontrequester_changeevent_callback = nullptr;
    KFontRequester_Metric_Callback kfontrequester_metric_callback = nullptr;
    KFontRequester_InitPainter_Callback kfontrequester_initpainter_callback = nullptr;
    KFontRequester_Redirected_Callback kfontrequester_redirected_callback = nullptr;
    KFontRequester_SharedPainter_Callback kfontrequester_sharedpainter_callback = nullptr;
    KFontRequester_InputMethodEvent_Callback kfontrequester_inputmethodevent_callback = nullptr;
    KFontRequester_InputMethodQuery_Callback kfontrequester_inputmethodquery_callback = nullptr;
    KFontRequester_FocusNextPrevChild_Callback kfontrequester_focusnextprevchild_callback = nullptr;
    KFontRequester_TimerEvent_Callback kfontrequester_timerevent_callback = nullptr;
    KFontRequester_ChildEvent_Callback kfontrequester_childevent_callback = nullptr;
    KFontRequester_CustomEvent_Callback kfontrequester_customevent_callback = nullptr;
    KFontRequester_ConnectNotify_Callback kfontrequester_connectnotify_callback = nullptr;
    KFontRequester_DisconnectNotify_Callback kfontrequester_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KFontRequester {
        using KFontRequester::actionEvent;
        using KFontRequester::changeEvent;
        using KFontRequester::childEvent;
        using KFontRequester::closeEvent;
        using KFontRequester::connectNotify;
        using KFontRequester::contextMenuEvent;
        using KFontRequester::customEvent;
        using KFontRequester::disconnectNotify;
        using KFontRequester::dragEnterEvent;
        using KFontRequester::dragLeaveEvent;
        using KFontRequester::dragMoveEvent;
        using KFontRequester::dropEvent;
        using KFontRequester::enterEvent;
        using KFontRequester::event;
        using KFontRequester::eventFilter;
        using KFontRequester::focusInEvent;
        using KFontRequester::focusNextPrevChild;
        using KFontRequester::focusOutEvent;
        using KFontRequester::hideEvent;
        using KFontRequester::initPainter;
        using KFontRequester::inputMethodEvent;
        using KFontRequester::keyPressEvent;
        using KFontRequester::keyReleaseEvent;
        using KFontRequester::leaveEvent;
        using KFontRequester::metric;
        using KFontRequester::mouseDoubleClickEvent;
        using KFontRequester::mouseMoveEvent;
        using KFontRequester::mousePressEvent;
        using KFontRequester::mouseReleaseEvent;
        using KFontRequester::moveEvent;
        using KFontRequester::nativeEvent;
        using KFontRequester::paintEvent;
        using KFontRequester::redirected;
        using KFontRequester::resizeEvent;
        using KFontRequester::sharedPainter;
        using KFontRequester::showEvent;
        using KFontRequester::tabletEvent;
        using KFontRequester::timerEvent;
        using KFontRequester::wheelEvent;
    };

    VirtualKFontRequester(QWidget* parent) : KFontRequester(parent) {};
    VirtualKFontRequester() : KFontRequester() {};
    VirtualKFontRequester(QWidget* parent, bool onlyFixed) : KFontRequester(parent, onlyFixed) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kfontrequester_metaobject_callback) {
            QMetaObject* callback_ret = kfontrequester_metaobject_callback(this);
            return callback_ret;
        }
        return KFontRequester::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kfontrequester_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kfontrequester_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KFontRequester::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfontrequester_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kfontrequester_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KFontRequester::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& font, bool onlyFixed) override {
        if (kfontrequester_setfont_callback) {
            const QFont& font_ret = font;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&font_ret);
            bool cbval2 = onlyFixed;
            kfontrequester_setfont_callback(this, cbval1, cbval2);
            return;
        }
        KFontRequester::setFont(font, onlyFixed);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSampleText(const QString& text) override {
        if (kfontrequester_setsampletext_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            kfontrequester_setsampletext_callback(this, cbval1);
            libqt_free(text_str);
            return;
        }
        KFontRequester::setSampleText(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTitle(const QString& title) override {
        if (kfontrequester_settitle_callback) {
            const auto title_ret = title;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray title_b = title_ret.toUtf8();
            auto title_str_len = title_b.length();
            const char* title_str = static_cast<const char*>(malloc(title_str_len + 1));
            memcpy((void*)title_str, title_b.data(), title_str_len);
            ((char*)title_str)[title_str_len] = '\0';
            const char* cbval1 = title_str;
            kfontrequester_settitle_callback(this, cbval1);
            libqt_free(title_str);
            return;
        }
        KFontRequester::setTitle(title);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kfontrequester_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kfontrequester_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFontRequester::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kfontrequester_devtype_callback) {
            int callback_ret = kfontrequester_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KFontRequester::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kfontrequester_setvisible_callback) {
            bool cbval1 = visible;
            kfontrequester_setvisible_callback(this, cbval1);
            return;
        }
        KFontRequester::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kfontrequester_sizehint_callback) {
            QSize* callback_ret = kfontrequester_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFontRequester::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kfontrequester_minimumsizehint_callback) {
            QSize* callback_ret = kfontrequester_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFontRequester::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kfontrequester_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kfontrequester_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFontRequester::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kfontrequester_hasheightforwidth_callback) {
            bool callback_ret = kfontrequester_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KFontRequester::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kfontrequester_paintengine_callback) {
            QPaintEngine* callback_ret = kfontrequester_paintengine_callback(this);
            return callback_ret;
        }
        return KFontRequester::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfontrequester_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kfontrequester_event_callback(this, cbval1);
            return callback_ret;
        }
        return KFontRequester::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kfontrequester_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kfontrequester_mousepressevent_callback(this, cbval1);
            return;
        }
        KFontRequester::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kfontrequester_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kfontrequester_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KFontRequester::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kfontrequester_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kfontrequester_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KFontRequester::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kfontrequester_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kfontrequester_mousemoveevent_callback(this, cbval1);
            return;
        }
        KFontRequester::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kfontrequester_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kfontrequester_wheelevent_callback(this, cbval1);
            return;
        }
        KFontRequester::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kfontrequester_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kfontrequester_keypressevent_callback(this, cbval1);
            return;
        }
        KFontRequester::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kfontrequester_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kfontrequester_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KFontRequester::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kfontrequester_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kfontrequester_focusinevent_callback(this, cbval1);
            return;
        }
        KFontRequester::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kfontrequester_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kfontrequester_focusoutevent_callback(this, cbval1);
            return;
        }
        KFontRequester::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kfontrequester_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kfontrequester_enterevent_callback(this, cbval1);
            return;
        }
        KFontRequester::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kfontrequester_leaveevent_callback) {
            QEvent* cbval1 = event;
            kfontrequester_leaveevent_callback(this, cbval1);
            return;
        }
        KFontRequester::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kfontrequester_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kfontrequester_paintevent_callback(this, cbval1);
            return;
        }
        KFontRequester::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kfontrequester_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kfontrequester_moveevent_callback(this, cbval1);
            return;
        }
        KFontRequester::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kfontrequester_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kfontrequester_resizeevent_callback(this, cbval1);
            return;
        }
        KFontRequester::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kfontrequester_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kfontrequester_closeevent_callback(this, cbval1);
            return;
        }
        KFontRequester::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kfontrequester_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kfontrequester_contextmenuevent_callback(this, cbval1);
            return;
        }
        KFontRequester::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kfontrequester_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kfontrequester_tabletevent_callback(this, cbval1);
            return;
        }
        KFontRequester::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kfontrequester_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kfontrequester_actionevent_callback(this, cbval1);
            return;
        }
        KFontRequester::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kfontrequester_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kfontrequester_dragenterevent_callback(this, cbval1);
            return;
        }
        KFontRequester::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kfontrequester_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kfontrequester_dragmoveevent_callback(this, cbval1);
            return;
        }
        KFontRequester::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kfontrequester_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kfontrequester_dragleaveevent_callback(this, cbval1);
            return;
        }
        KFontRequester::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kfontrequester_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kfontrequester_dropevent_callback(this, cbval1);
            return;
        }
        KFontRequester::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kfontrequester_showevent_callback) {
            QShowEvent* cbval1 = event;
            kfontrequester_showevent_callback(this, cbval1);
            return;
        }
        KFontRequester::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kfontrequester_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kfontrequester_hideevent_callback(this, cbval1);
            return;
        }
        KFontRequester::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kfontrequester_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kfontrequester_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KFontRequester::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kfontrequester_changeevent_callback) {
            QEvent* cbval1 = param1;
            kfontrequester_changeevent_callback(this, cbval1);
            return;
        }
        KFontRequester::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kfontrequester_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kfontrequester_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFontRequester::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kfontrequester_initpainter_callback) {
            QPainter* cbval1 = painter;
            kfontrequester_initpainter_callback(this, cbval1);
            return;
        }
        KFontRequester::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kfontrequester_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kfontrequester_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KFontRequester::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kfontrequester_sharedpainter_callback) {
            QPainter* callback_ret = kfontrequester_sharedpainter_callback(this);
            return callback_ret;
        }
        return KFontRequester::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kfontrequester_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kfontrequester_inputmethodevent_callback(this, cbval1);
            return;
        }
        KFontRequester::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kfontrequester_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kfontrequester_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFontRequester::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kfontrequester_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kfontrequester_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KFontRequester::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfontrequester_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kfontrequester_timerevent_callback(this, cbval1);
            return;
        }
        KFontRequester::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfontrequester_childevent_callback) {
            QChildEvent* cbval1 = event;
            kfontrequester_childevent_callback(this, cbval1);
            return;
        }
        KFontRequester::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfontrequester_customevent_callback) {
            QEvent* cbval1 = event;
            kfontrequester_customevent_callback(this, cbval1);
            return;
        }
        KFontRequester::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfontrequester_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfontrequester_connectnotify_callback(this, cbval1);
            return;
        }
        KFontRequester::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfontrequester_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfontrequester_disconnectnotify_callback(this, cbval1);
            return;
        }
        KFontRequester::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KFontRequester_SuperEventFilter(KFontRequester* self, QObject* watched, QEvent* event);
    friend bool KFontRequester_SuperEvent(KFontRequester* self, QEvent* event);
    friend void KFontRequester_SuperMousePressEvent(KFontRequester* self, QMouseEvent* event);
    friend void KFontRequester_SuperMouseReleaseEvent(KFontRequester* self, QMouseEvent* event);
    friend void KFontRequester_SuperMouseDoubleClickEvent(KFontRequester* self, QMouseEvent* event);
    friend void KFontRequester_SuperMouseMoveEvent(KFontRequester* self, QMouseEvent* event);
    friend void KFontRequester_SuperWheelEvent(KFontRequester* self, QWheelEvent* event);
    friend void KFontRequester_SuperKeyPressEvent(KFontRequester* self, QKeyEvent* event);
    friend void KFontRequester_SuperKeyReleaseEvent(KFontRequester* self, QKeyEvent* event);
    friend void KFontRequester_SuperFocusInEvent(KFontRequester* self, QFocusEvent* event);
    friend void KFontRequester_SuperFocusOutEvent(KFontRequester* self, QFocusEvent* event);
    friend void KFontRequester_SuperEnterEvent(KFontRequester* self, QEnterEvent* event);
    friend void KFontRequester_SuperLeaveEvent(KFontRequester* self, QEvent* event);
    friend void KFontRequester_SuperPaintEvent(KFontRequester* self, QPaintEvent* event);
    friend void KFontRequester_SuperMoveEvent(KFontRequester* self, QMoveEvent* event);
    friend void KFontRequester_SuperResizeEvent(KFontRequester* self, QResizeEvent* event);
    friend void KFontRequester_SuperCloseEvent(KFontRequester* self, QCloseEvent* event);
    friend void KFontRequester_SuperContextMenuEvent(KFontRequester* self, QContextMenuEvent* event);
    friend void KFontRequester_SuperTabletEvent(KFontRequester* self, QTabletEvent* event);
    friend void KFontRequester_SuperActionEvent(KFontRequester* self, QActionEvent* event);
    friend void KFontRequester_SuperDragEnterEvent(KFontRequester* self, QDragEnterEvent* event);
    friend void KFontRequester_SuperDragMoveEvent(KFontRequester* self, QDragMoveEvent* event);
    friend void KFontRequester_SuperDragLeaveEvent(KFontRequester* self, QDragLeaveEvent* event);
    friend void KFontRequester_SuperDropEvent(KFontRequester* self, QDropEvent* event);
    friend void KFontRequester_SuperShowEvent(KFontRequester* self, QShowEvent* event);
    friend void KFontRequester_SuperHideEvent(KFontRequester* self, QHideEvent* event);
    friend bool KFontRequester_SuperNativeEvent(KFontRequester* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KFontRequester_SuperChangeEvent(KFontRequester* self, QEvent* param1);
    friend int KFontRequester_SuperMetric(const KFontRequester* self, int param1);
    friend void KFontRequester_SuperInitPainter(const KFontRequester* self, QPainter* painter);
    friend QPaintDevice* KFontRequester_SuperRedirected(const KFontRequester* self, QPoint* offset);
    friend QPainter* KFontRequester_SuperSharedPainter(const KFontRequester* self);
    friend void KFontRequester_SuperInputMethodEvent(KFontRequester* self, QInputMethodEvent* param1);
    friend bool KFontRequester_SuperFocusNextPrevChild(KFontRequester* self, bool next);
    friend void KFontRequester_SuperTimerEvent(KFontRequester* self, QTimerEvent* event);
    friend void KFontRequester_SuperChildEvent(KFontRequester* self, QChildEvent* event);
    friend void KFontRequester_SuperCustomEvent(KFontRequester* self, QEvent* event);
    friend void KFontRequester_SuperConnectNotify(KFontRequester* self, const QMetaMethod* signal);
    friend void KFontRequester_SuperDisconnectNotify(KFontRequester* self, const QMetaMethod* signal);
};

#endif
