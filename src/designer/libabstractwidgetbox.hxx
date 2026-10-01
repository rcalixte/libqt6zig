#pragma once
#ifndef DESIGNER_LIBABSTRACTWIDGETBOX_HXX
#define DESIGNER_LIBABSTRACTWIDGETBOX_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerWidgetBoxInterface
class VirtualQDesignerWidgetBoxInterface : public QDesignerWidgetBoxInterface {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDesignerWidgetBoxInterface_MetaObject_Callback = QMetaObject* (*)(const QDesignerWidgetBoxInterface*);
    using QDesignerWidgetBoxInterface_Metacast_Callback = void* (*)(QDesignerWidgetBoxInterface*, const char*);
    using QDesignerWidgetBoxInterface_Metacall_Callback = int (*)(QDesignerWidgetBoxInterface*, int, int, void**);
    using QDesignerWidgetBoxInterface_CategoryCount_Callback = int (*)(const QDesignerWidgetBoxInterface*);
    using QDesignerWidgetBoxInterface_Category_Callback = QDesignerWidgetBoxInterface__Category* (*)(const QDesignerWidgetBoxInterface*, int);
    using QDesignerWidgetBoxInterface_AddCategory_Callback = void (*)(QDesignerWidgetBoxInterface*, QDesignerWidgetBoxInterface__Category*);
    using QDesignerWidgetBoxInterface_RemoveCategory_Callback = void (*)(QDesignerWidgetBoxInterface*, int);
    using QDesignerWidgetBoxInterface_WidgetCount_Callback = int (*)(const QDesignerWidgetBoxInterface*, int);
    using QDesignerWidgetBoxInterface_Widget_Callback = QDesignerWidgetBoxInterface__Widget* (*)(const QDesignerWidgetBoxInterface*, int, int);
    using QDesignerWidgetBoxInterface_AddWidget_Callback = void (*)(QDesignerWidgetBoxInterface*, int, QDesignerWidgetBoxInterface__Widget*);
    using QDesignerWidgetBoxInterface_RemoveWidget_Callback = void (*)(QDesignerWidgetBoxInterface*, int, int);
    using QDesignerWidgetBoxInterface_DropWidgets_Callback = void (*)(QDesignerWidgetBoxInterface*, libqt_list /* of QDesignerDnDItemInterface* */, QPoint*);
    using QDesignerWidgetBoxInterface_SetFileName_Callback = void (*)(QDesignerWidgetBoxInterface*, const char*);
    using QDesignerWidgetBoxInterface_FileName_Callback = const char* (*)(const QDesignerWidgetBoxInterface*);
    using QDesignerWidgetBoxInterface_Load_Callback = bool (*)(QDesignerWidgetBoxInterface*);
    using QDesignerWidgetBoxInterface_Save_Callback = bool (*)(QDesignerWidgetBoxInterface*);
    using QDesignerWidgetBoxInterface_DevType_Callback = int (*)(const QDesignerWidgetBoxInterface*);
    using QDesignerWidgetBoxInterface_SetVisible_Callback = void (*)(QDesignerWidgetBoxInterface*, bool);
    using QDesignerWidgetBoxInterface_SizeHint_Callback = QSize* (*)(const QDesignerWidgetBoxInterface*);
    using QDesignerWidgetBoxInterface_MinimumSizeHint_Callback = QSize* (*)(const QDesignerWidgetBoxInterface*);
    using QDesignerWidgetBoxInterface_HeightForWidth_Callback = int (*)(const QDesignerWidgetBoxInterface*, int);
    using QDesignerWidgetBoxInterface_HasHeightForWidth_Callback = bool (*)(const QDesignerWidgetBoxInterface*);
    using QDesignerWidgetBoxInterface_PaintEngine_Callback = QPaintEngine* (*)(const QDesignerWidgetBoxInterface*);
    using QDesignerWidgetBoxInterface_Event_Callback = bool (*)(QDesignerWidgetBoxInterface*, QEvent*);
    using QDesignerWidgetBoxInterface_MousePressEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QMouseEvent*);
    using QDesignerWidgetBoxInterface_MouseReleaseEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QMouseEvent*);
    using QDesignerWidgetBoxInterface_MouseDoubleClickEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QMouseEvent*);
    using QDesignerWidgetBoxInterface_MouseMoveEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QMouseEvent*);
    using QDesignerWidgetBoxInterface_WheelEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QWheelEvent*);
    using QDesignerWidgetBoxInterface_KeyPressEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QKeyEvent*);
    using QDesignerWidgetBoxInterface_KeyReleaseEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QKeyEvent*);
    using QDesignerWidgetBoxInterface_FocusInEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QFocusEvent*);
    using QDesignerWidgetBoxInterface_FocusOutEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QFocusEvent*);
    using QDesignerWidgetBoxInterface_EnterEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QEnterEvent*);
    using QDesignerWidgetBoxInterface_LeaveEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QEvent*);
    using QDesignerWidgetBoxInterface_PaintEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QPaintEvent*);
    using QDesignerWidgetBoxInterface_MoveEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QMoveEvent*);
    using QDesignerWidgetBoxInterface_ResizeEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QResizeEvent*);
    using QDesignerWidgetBoxInterface_CloseEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QCloseEvent*);
    using QDesignerWidgetBoxInterface_ContextMenuEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QContextMenuEvent*);
    using QDesignerWidgetBoxInterface_TabletEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QTabletEvent*);
    using QDesignerWidgetBoxInterface_ActionEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QActionEvent*);
    using QDesignerWidgetBoxInterface_DragEnterEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QDragEnterEvent*);
    using QDesignerWidgetBoxInterface_DragMoveEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QDragMoveEvent*);
    using QDesignerWidgetBoxInterface_DragLeaveEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QDragLeaveEvent*);
    using QDesignerWidgetBoxInterface_DropEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QDropEvent*);
    using QDesignerWidgetBoxInterface_ShowEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QShowEvent*);
    using QDesignerWidgetBoxInterface_HideEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QHideEvent*);
    using QDesignerWidgetBoxInterface_NativeEvent_Callback = bool (*)(QDesignerWidgetBoxInterface*, libqt_string, void*, intptr_t*);
    using QDesignerWidgetBoxInterface_ChangeEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QEvent*);
    using QDesignerWidgetBoxInterface_Metric_Callback = int (*)(const QDesignerWidgetBoxInterface*, int);
    using QDesignerWidgetBoxInterface_InitPainter_Callback = void (*)(const QDesignerWidgetBoxInterface*, QPainter*);
    using QDesignerWidgetBoxInterface_Redirected_Callback = QPaintDevice* (*)(const QDesignerWidgetBoxInterface*, QPoint*);
    using QDesignerWidgetBoxInterface_SharedPainter_Callback = QPainter* (*)(const QDesignerWidgetBoxInterface*);
    using QDesignerWidgetBoxInterface_InputMethodEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QInputMethodEvent*);
    using QDesignerWidgetBoxInterface_InputMethodQuery_Callback = QVariant* (*)(const QDesignerWidgetBoxInterface*, int);
    using QDesignerWidgetBoxInterface_FocusNextPrevChild_Callback = bool (*)(QDesignerWidgetBoxInterface*, bool);
    using QDesignerWidgetBoxInterface_EventFilter_Callback = bool (*)(QDesignerWidgetBoxInterface*, QObject*, QEvent*);
    using QDesignerWidgetBoxInterface_TimerEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QTimerEvent*);
    using QDesignerWidgetBoxInterface_ChildEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QChildEvent*);
    using QDesignerWidgetBoxInterface_CustomEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QEvent*);
    using QDesignerWidgetBoxInterface_ConnectNotify_Callback = void (*)(QDesignerWidgetBoxInterface*, QMetaMethod*);
    using QDesignerWidgetBoxInterface_DisconnectNotify_Callback = void (*)(QDesignerWidgetBoxInterface*, QMetaMethod*);
    using QDesignerWidgetBoxInterface::create;
    using QDesignerWidgetBoxInterface::destroy;
    using QDesignerWidgetBoxInterface::focusNextChild;
    using QDesignerWidgetBoxInterface::focusPreviousChild;
    using QDesignerWidgetBoxInterface::getDecodedMetricF;
    using QDesignerWidgetBoxInterface::isSignalConnected;
    using QDesignerWidgetBoxInterface::receivers;
    using QDesignerWidgetBoxInterface::sender;
    using QDesignerWidgetBoxInterface::senderSignalIndex;
    using QDesignerWidgetBoxInterface::updateMicroFocus;

    // Instance callback storage
    QDesignerWidgetBoxInterface_MetaObject_Callback qdesignerwidgetboxinterface_metaobject_callback = nullptr;
    QDesignerWidgetBoxInterface_Metacast_Callback qdesignerwidgetboxinterface_metacast_callback = nullptr;
    QDesignerWidgetBoxInterface_Metacall_Callback qdesignerwidgetboxinterface_metacall_callback = nullptr;
    QDesignerWidgetBoxInterface_CategoryCount_Callback qdesignerwidgetboxinterface_categorycount_callback = nullptr;
    QDesignerWidgetBoxInterface_Category_Callback qdesignerwidgetboxinterface_category_callback = nullptr;
    QDesignerWidgetBoxInterface_AddCategory_Callback qdesignerwidgetboxinterface_addcategory_callback = nullptr;
    QDesignerWidgetBoxInterface_RemoveCategory_Callback qdesignerwidgetboxinterface_removecategory_callback = nullptr;
    QDesignerWidgetBoxInterface_WidgetCount_Callback qdesignerwidgetboxinterface_widgetcount_callback = nullptr;
    QDesignerWidgetBoxInterface_Widget_Callback qdesignerwidgetboxinterface_widget_callback = nullptr;
    QDesignerWidgetBoxInterface_AddWidget_Callback qdesignerwidgetboxinterface_addwidget_callback = nullptr;
    QDesignerWidgetBoxInterface_RemoveWidget_Callback qdesignerwidgetboxinterface_removewidget_callback = nullptr;
    QDesignerWidgetBoxInterface_DropWidgets_Callback qdesignerwidgetboxinterface_dropwidgets_callback = nullptr;
    QDesignerWidgetBoxInterface_SetFileName_Callback qdesignerwidgetboxinterface_setfilename_callback = nullptr;
    QDesignerWidgetBoxInterface_FileName_Callback qdesignerwidgetboxinterface_filename_callback = nullptr;
    QDesignerWidgetBoxInterface_Load_Callback qdesignerwidgetboxinterface_load_callback = nullptr;
    QDesignerWidgetBoxInterface_Save_Callback qdesignerwidgetboxinterface_save_callback = nullptr;
    QDesignerWidgetBoxInterface_DevType_Callback qdesignerwidgetboxinterface_devtype_callback = nullptr;
    QDesignerWidgetBoxInterface_SetVisible_Callback qdesignerwidgetboxinterface_setvisible_callback = nullptr;
    QDesignerWidgetBoxInterface_SizeHint_Callback qdesignerwidgetboxinterface_sizehint_callback = nullptr;
    QDesignerWidgetBoxInterface_MinimumSizeHint_Callback qdesignerwidgetboxinterface_minimumsizehint_callback = nullptr;
    QDesignerWidgetBoxInterface_HeightForWidth_Callback qdesignerwidgetboxinterface_heightforwidth_callback = nullptr;
    QDesignerWidgetBoxInterface_HasHeightForWidth_Callback qdesignerwidgetboxinterface_hasheightforwidth_callback = nullptr;
    QDesignerWidgetBoxInterface_PaintEngine_Callback qdesignerwidgetboxinterface_paintengine_callback = nullptr;
    QDesignerWidgetBoxInterface_Event_Callback qdesignerwidgetboxinterface_event_callback = nullptr;
    QDesignerWidgetBoxInterface_MousePressEvent_Callback qdesignerwidgetboxinterface_mousepressevent_callback = nullptr;
    QDesignerWidgetBoxInterface_MouseReleaseEvent_Callback qdesignerwidgetboxinterface_mousereleaseevent_callback = nullptr;
    QDesignerWidgetBoxInterface_MouseDoubleClickEvent_Callback qdesignerwidgetboxinterface_mousedoubleclickevent_callback = nullptr;
    QDesignerWidgetBoxInterface_MouseMoveEvent_Callback qdesignerwidgetboxinterface_mousemoveevent_callback = nullptr;
    QDesignerWidgetBoxInterface_WheelEvent_Callback qdesignerwidgetboxinterface_wheelevent_callback = nullptr;
    QDesignerWidgetBoxInterface_KeyPressEvent_Callback qdesignerwidgetboxinterface_keypressevent_callback = nullptr;
    QDesignerWidgetBoxInterface_KeyReleaseEvent_Callback qdesignerwidgetboxinterface_keyreleaseevent_callback = nullptr;
    QDesignerWidgetBoxInterface_FocusInEvent_Callback qdesignerwidgetboxinterface_focusinevent_callback = nullptr;
    QDesignerWidgetBoxInterface_FocusOutEvent_Callback qdesignerwidgetboxinterface_focusoutevent_callback = nullptr;
    QDesignerWidgetBoxInterface_EnterEvent_Callback qdesignerwidgetboxinterface_enterevent_callback = nullptr;
    QDesignerWidgetBoxInterface_LeaveEvent_Callback qdesignerwidgetboxinterface_leaveevent_callback = nullptr;
    QDesignerWidgetBoxInterface_PaintEvent_Callback qdesignerwidgetboxinterface_paintevent_callback = nullptr;
    QDesignerWidgetBoxInterface_MoveEvent_Callback qdesignerwidgetboxinterface_moveevent_callback = nullptr;
    QDesignerWidgetBoxInterface_ResizeEvent_Callback qdesignerwidgetboxinterface_resizeevent_callback = nullptr;
    QDesignerWidgetBoxInterface_CloseEvent_Callback qdesignerwidgetboxinterface_closeevent_callback = nullptr;
    QDesignerWidgetBoxInterface_ContextMenuEvent_Callback qdesignerwidgetboxinterface_contextmenuevent_callback = nullptr;
    QDesignerWidgetBoxInterface_TabletEvent_Callback qdesignerwidgetboxinterface_tabletevent_callback = nullptr;
    QDesignerWidgetBoxInterface_ActionEvent_Callback qdesignerwidgetboxinterface_actionevent_callback = nullptr;
    QDesignerWidgetBoxInterface_DragEnterEvent_Callback qdesignerwidgetboxinterface_dragenterevent_callback = nullptr;
    QDesignerWidgetBoxInterface_DragMoveEvent_Callback qdesignerwidgetboxinterface_dragmoveevent_callback = nullptr;
    QDesignerWidgetBoxInterface_DragLeaveEvent_Callback qdesignerwidgetboxinterface_dragleaveevent_callback = nullptr;
    QDesignerWidgetBoxInterface_DropEvent_Callback qdesignerwidgetboxinterface_dropevent_callback = nullptr;
    QDesignerWidgetBoxInterface_ShowEvent_Callback qdesignerwidgetboxinterface_showevent_callback = nullptr;
    QDesignerWidgetBoxInterface_HideEvent_Callback qdesignerwidgetboxinterface_hideevent_callback = nullptr;
    QDesignerWidgetBoxInterface_NativeEvent_Callback qdesignerwidgetboxinterface_nativeevent_callback = nullptr;
    QDesignerWidgetBoxInterface_ChangeEvent_Callback qdesignerwidgetboxinterface_changeevent_callback = nullptr;
    QDesignerWidgetBoxInterface_Metric_Callback qdesignerwidgetboxinterface_metric_callback = nullptr;
    QDesignerWidgetBoxInterface_InitPainter_Callback qdesignerwidgetboxinterface_initpainter_callback = nullptr;
    QDesignerWidgetBoxInterface_Redirected_Callback qdesignerwidgetboxinterface_redirected_callback = nullptr;
    QDesignerWidgetBoxInterface_SharedPainter_Callback qdesignerwidgetboxinterface_sharedpainter_callback = nullptr;
    QDesignerWidgetBoxInterface_InputMethodEvent_Callback qdesignerwidgetboxinterface_inputmethodevent_callback = nullptr;
    QDesignerWidgetBoxInterface_InputMethodQuery_Callback qdesignerwidgetboxinterface_inputmethodquery_callback = nullptr;
    QDesignerWidgetBoxInterface_FocusNextPrevChild_Callback qdesignerwidgetboxinterface_focusnextprevchild_callback = nullptr;
    QDesignerWidgetBoxInterface_EventFilter_Callback qdesignerwidgetboxinterface_eventfilter_callback = nullptr;
    QDesignerWidgetBoxInterface_TimerEvent_Callback qdesignerwidgetboxinterface_timerevent_callback = nullptr;
    QDesignerWidgetBoxInterface_ChildEvent_Callback qdesignerwidgetboxinterface_childevent_callback = nullptr;
    QDesignerWidgetBoxInterface_CustomEvent_Callback qdesignerwidgetboxinterface_customevent_callback = nullptr;
    QDesignerWidgetBoxInterface_ConnectNotify_Callback qdesignerwidgetboxinterface_connectnotify_callback = nullptr;
    QDesignerWidgetBoxInterface_DisconnectNotify_Callback qdesignerwidgetboxinterface_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QDesignerWidgetBoxInterface {
        using QDesignerWidgetBoxInterface::actionEvent;
        using QDesignerWidgetBoxInterface::changeEvent;
        using QDesignerWidgetBoxInterface::childEvent;
        using QDesignerWidgetBoxInterface::closeEvent;
        using QDesignerWidgetBoxInterface::connectNotify;
        using QDesignerWidgetBoxInterface::contextMenuEvent;
        using QDesignerWidgetBoxInterface::customEvent;
        using QDesignerWidgetBoxInterface::disconnectNotify;
        using QDesignerWidgetBoxInterface::dragEnterEvent;
        using QDesignerWidgetBoxInterface::dragLeaveEvent;
        using QDesignerWidgetBoxInterface::dragMoveEvent;
        using QDesignerWidgetBoxInterface::dropEvent;
        using QDesignerWidgetBoxInterface::enterEvent;
        using QDesignerWidgetBoxInterface::event;
        using QDesignerWidgetBoxInterface::focusInEvent;
        using QDesignerWidgetBoxInterface::focusNextPrevChild;
        using QDesignerWidgetBoxInterface::focusOutEvent;
        using QDesignerWidgetBoxInterface::hideEvent;
        using QDesignerWidgetBoxInterface::initPainter;
        using QDesignerWidgetBoxInterface::inputMethodEvent;
        using QDesignerWidgetBoxInterface::keyPressEvent;
        using QDesignerWidgetBoxInterface::keyReleaseEvent;
        using QDesignerWidgetBoxInterface::leaveEvent;
        using QDesignerWidgetBoxInterface::metric;
        using QDesignerWidgetBoxInterface::mouseDoubleClickEvent;
        using QDesignerWidgetBoxInterface::mouseMoveEvent;
        using QDesignerWidgetBoxInterface::mousePressEvent;
        using QDesignerWidgetBoxInterface::mouseReleaseEvent;
        using QDesignerWidgetBoxInterface::moveEvent;
        using QDesignerWidgetBoxInterface::nativeEvent;
        using QDesignerWidgetBoxInterface::paintEvent;
        using QDesignerWidgetBoxInterface::redirected;
        using QDesignerWidgetBoxInterface::resizeEvent;
        using QDesignerWidgetBoxInterface::sharedPainter;
        using QDesignerWidgetBoxInterface::showEvent;
        using QDesignerWidgetBoxInterface::tabletEvent;
        using QDesignerWidgetBoxInterface::timerEvent;
        using QDesignerWidgetBoxInterface::wheelEvent;
    };

    VirtualQDesignerWidgetBoxInterface(QWidget* parent) : QDesignerWidgetBoxInterface(parent) {};
    VirtualQDesignerWidgetBoxInterface() : QDesignerWidgetBoxInterface() {};
    VirtualQDesignerWidgetBoxInterface(QWidget* parent, Qt::WindowFlags flags) : QDesignerWidgetBoxInterface(parent, flags) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdesignerwidgetboxinterface_metaobject_callback) {
            QMetaObject* callback_ret = qdesignerwidgetboxinterface_metaobject_callback(this);
            return callback_ret;
        }
        return QDesignerWidgetBoxInterface::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdesignerwidgetboxinterface_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdesignerwidgetboxinterface_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerWidgetBoxInterface::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdesignerwidgetboxinterface_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdesignerwidgetboxinterface_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDesignerWidgetBoxInterface::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int categoryCount() const override {
        if (qdesignerwidgetboxinterface_categorycount_callback) {
            int callback_ret = qdesignerwidgetboxinterface_categorycount_callback(this);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetBoxInterface::categoryCount called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerWidgetBoxInterface::Category category(int cat_idx) const override {
        if (qdesignerwidgetboxinterface_category_callback) {
            int cbval1 = cat_idx;
            QDesignerWidgetBoxInterface__Category* callback_ret = qdesignerwidgetboxinterface_category_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetBoxInterface::category called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void addCategory(const QDesignerWidgetBoxInterface::Category& cat) override {
        if (qdesignerwidgetboxinterface_addcategory_callback) {
            const QDesignerWidgetBoxInterface::Category& cat_ret = cat;
            // Cast returned reference into pointer
            QDesignerWidgetBoxInterface__Category* cbval1 = const_cast<QDesignerWidgetBoxInterface::Category*>(&cat_ret);
            qdesignerwidgetboxinterface_addcategory_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetBoxInterface::addCategory called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void removeCategory(int cat_idx) override {
        if (qdesignerwidgetboxinterface_removecategory_callback) {
            int cbval1 = cat_idx;
            qdesignerwidgetboxinterface_removecategory_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetBoxInterface::removeCategory called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int widgetCount(int cat_idx) const override {
        if (qdesignerwidgetboxinterface_widgetcount_callback) {
            int cbval1 = cat_idx;
            int callback_ret = qdesignerwidgetboxinterface_widgetcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetBoxInterface::widgetCount called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerWidgetBoxInterface::Widget widget(int cat_idx, int wgt_idx) const override {
        if (qdesignerwidgetboxinterface_widget_callback) {
            int cbval1 = cat_idx;
            int cbval2 = wgt_idx;
            QDesignerWidgetBoxInterface__Widget* callback_ret = qdesignerwidgetboxinterface_widget_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetBoxInterface::widget called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void addWidget(int cat_idx, const QDesignerWidgetBoxInterface::Widget& wgt) override {
        if (qdesignerwidgetboxinterface_addwidget_callback) {
            int cbval1 = cat_idx;
            const QDesignerWidgetBoxInterface::Widget& wgt_ret = wgt;
            // Cast returned reference into pointer
            QDesignerWidgetBoxInterface__Widget* cbval2 = const_cast<QDesignerWidgetBoxInterface::Widget*>(&wgt_ret);
            qdesignerwidgetboxinterface_addwidget_callback(this, cbval1, cbval2);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetBoxInterface::addWidget called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void removeWidget(int cat_idx, int wgt_idx) override {
        if (qdesignerwidgetboxinterface_removewidget_callback) {
            int cbval1 = cat_idx;
            int cbval2 = wgt_idx;
            qdesignerwidgetboxinterface_removewidget_callback(this, cbval1, cbval2);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetBoxInterface::removeWidget called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropWidgets(const QList<QDesignerDnDItemInterface*>& item_list, const QPoint& global_mouse_pos) override {
        if (qdesignerwidgetboxinterface_dropwidgets_callback) {
            const QList<QDesignerDnDItemInterface*>& item_list_ret = item_list;
            // Convert QList<> from C++ memory to manually-managed C memory
            QDesignerDnDItemInterface** item_list_arr = static_cast<QDesignerDnDItemInterface**>(malloc(sizeof(QDesignerDnDItemInterface*) * (item_list_ret.size())));
            for (qsizetype i = 0; i < item_list_ret.size(); ++i) {
                item_list_arr[i] = item_list_ret[i];
            }
            libqt_list item_list_out;
            item_list_out.len = item_list_ret.size();
            item_list_out.data = static_cast<void*>(item_list_arr);
            libqt_list /* of QDesignerDnDItemInterface* */ cbval1 = item_list_out;
            const QPoint& global_mouse_pos_ret = global_mouse_pos;
            // Cast returned reference into pointer
            QPoint* cbval2 = const_cast<QPoint*>(&global_mouse_pos_ret);
            qdesignerwidgetboxinterface_dropwidgets_callback(this, cbval1, cbval2);
            free(item_list_arr);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetBoxInterface::dropWidgets called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFileName(const QString& file_name) override {
        if (qdesignerwidgetboxinterface_setfilename_callback) {
            const auto file_name_ret = file_name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray file_name_b = file_name_ret.toUtf8();
            auto file_name_str_len = file_name_b.length();
            const char* file_name_str = static_cast<const char*>(malloc(file_name_str_len + 1));
            memcpy((void*)file_name_str, file_name_b.data(), file_name_str_len);
            ((char*)file_name_str)[file_name_str_len] = '\0';
            const char* cbval1 = file_name_str;
            qdesignerwidgetboxinterface_setfilename_callback(this, cbval1);
            libqt_free(file_name_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetBoxInterface::setFileName called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QString fileName() const override {
        if (qdesignerwidgetboxinterface_filename_callback) {
            const char* callback_ret = qdesignerwidgetboxinterface_filename_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetBoxInterface::fileName called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool load() override {
        if (qdesignerwidgetboxinterface_load_callback) {
            bool callback_ret = qdesignerwidgetboxinterface_load_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetBoxInterface::load called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool save() override {
        if (qdesignerwidgetboxinterface_save_callback) {
            bool callback_ret = qdesignerwidgetboxinterface_save_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetBoxInterface::save called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qdesignerwidgetboxinterface_devtype_callback) {
            int callback_ret = qdesignerwidgetboxinterface_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QDesignerWidgetBoxInterface::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qdesignerwidgetboxinterface_setvisible_callback) {
            bool cbval1 = visible;
            qdesignerwidgetboxinterface_setvisible_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qdesignerwidgetboxinterface_sizehint_callback) {
            QSize* callback_ret = qdesignerwidgetboxinterface_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDesignerWidgetBoxInterface::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qdesignerwidgetboxinterface_minimumsizehint_callback) {
            QSize* callback_ret = qdesignerwidgetboxinterface_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDesignerWidgetBoxInterface::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qdesignerwidgetboxinterface_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qdesignerwidgetboxinterface_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDesignerWidgetBoxInterface::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qdesignerwidgetboxinterface_hasheightforwidth_callback) {
            bool callback_ret = qdesignerwidgetboxinterface_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QDesignerWidgetBoxInterface::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qdesignerwidgetboxinterface_paintengine_callback) {
            QPaintEngine* callback_ret = qdesignerwidgetboxinterface_paintengine_callback(this);
            return callback_ret;
        }
        return QDesignerWidgetBoxInterface::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdesignerwidgetboxinterface_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdesignerwidgetboxinterface_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerWidgetBoxInterface::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qdesignerwidgetboxinterface_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qdesignerwidgetboxinterface_mousepressevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qdesignerwidgetboxinterface_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qdesignerwidgetboxinterface_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qdesignerwidgetboxinterface_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qdesignerwidgetboxinterface_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qdesignerwidgetboxinterface_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qdesignerwidgetboxinterface_mousemoveevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qdesignerwidgetboxinterface_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qdesignerwidgetboxinterface_wheelevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qdesignerwidgetboxinterface_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qdesignerwidgetboxinterface_keypressevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qdesignerwidgetboxinterface_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qdesignerwidgetboxinterface_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qdesignerwidgetboxinterface_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qdesignerwidgetboxinterface_focusinevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qdesignerwidgetboxinterface_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qdesignerwidgetboxinterface_focusoutevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qdesignerwidgetboxinterface_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qdesignerwidgetboxinterface_enterevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qdesignerwidgetboxinterface_leaveevent_callback) {
            QEvent* cbval1 = event;
            qdesignerwidgetboxinterface_leaveevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qdesignerwidgetboxinterface_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qdesignerwidgetboxinterface_paintevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qdesignerwidgetboxinterface_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qdesignerwidgetboxinterface_moveevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qdesignerwidgetboxinterface_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qdesignerwidgetboxinterface_resizeevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qdesignerwidgetboxinterface_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qdesignerwidgetboxinterface_closeevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qdesignerwidgetboxinterface_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qdesignerwidgetboxinterface_contextmenuevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qdesignerwidgetboxinterface_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qdesignerwidgetboxinterface_tabletevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qdesignerwidgetboxinterface_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qdesignerwidgetboxinterface_actionevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qdesignerwidgetboxinterface_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qdesignerwidgetboxinterface_dragenterevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qdesignerwidgetboxinterface_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qdesignerwidgetboxinterface_dragmoveevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qdesignerwidgetboxinterface_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qdesignerwidgetboxinterface_dragleaveevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qdesignerwidgetboxinterface_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qdesignerwidgetboxinterface_dropevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qdesignerwidgetboxinterface_showevent_callback) {
            QShowEvent* cbval1 = event;
            qdesignerwidgetboxinterface_showevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qdesignerwidgetboxinterface_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qdesignerwidgetboxinterface_hideevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qdesignerwidgetboxinterface_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qdesignerwidgetboxinterface_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QDesignerWidgetBoxInterface::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qdesignerwidgetboxinterface_changeevent_callback) {
            QEvent* cbval1 = param1;
            qdesignerwidgetboxinterface_changeevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qdesignerwidgetboxinterface_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qdesignerwidgetboxinterface_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDesignerWidgetBoxInterface::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qdesignerwidgetboxinterface_initpainter_callback) {
            QPainter* cbval1 = painter;
            qdesignerwidgetboxinterface_initpainter_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qdesignerwidgetboxinterface_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qdesignerwidgetboxinterface_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerWidgetBoxInterface::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qdesignerwidgetboxinterface_sharedpainter_callback) {
            QPainter* callback_ret = qdesignerwidgetboxinterface_sharedpainter_callback(this);
            return callback_ret;
        }
        return QDesignerWidgetBoxInterface::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qdesignerwidgetboxinterface_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qdesignerwidgetboxinterface_inputmethodevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qdesignerwidgetboxinterface_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qdesignerwidgetboxinterface_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDesignerWidgetBoxInterface::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qdesignerwidgetboxinterface_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qdesignerwidgetboxinterface_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerWidgetBoxInterface::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdesignerwidgetboxinterface_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdesignerwidgetboxinterface_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDesignerWidgetBoxInterface::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdesignerwidgetboxinterface_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdesignerwidgetboxinterface_timerevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdesignerwidgetboxinterface_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdesignerwidgetboxinterface_childevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdesignerwidgetboxinterface_customevent_callback) {
            QEvent* cbval1 = event;
            qdesignerwidgetboxinterface_customevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdesignerwidgetboxinterface_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdesignerwidgetboxinterface_connectnotify_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdesignerwidgetboxinterface_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdesignerwidgetboxinterface_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QDesignerWidgetBoxInterface_SuperEvent(QDesignerWidgetBoxInterface* self, QEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperMousePressEvent(QDesignerWidgetBoxInterface* self, QMouseEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperMouseReleaseEvent(QDesignerWidgetBoxInterface* self, QMouseEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperMouseDoubleClickEvent(QDesignerWidgetBoxInterface* self, QMouseEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperMouseMoveEvent(QDesignerWidgetBoxInterface* self, QMouseEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperWheelEvent(QDesignerWidgetBoxInterface* self, QWheelEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperKeyPressEvent(QDesignerWidgetBoxInterface* self, QKeyEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperKeyReleaseEvent(QDesignerWidgetBoxInterface* self, QKeyEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperFocusInEvent(QDesignerWidgetBoxInterface* self, QFocusEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperFocusOutEvent(QDesignerWidgetBoxInterface* self, QFocusEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperEnterEvent(QDesignerWidgetBoxInterface* self, QEnterEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperLeaveEvent(QDesignerWidgetBoxInterface* self, QEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperPaintEvent(QDesignerWidgetBoxInterface* self, QPaintEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperMoveEvent(QDesignerWidgetBoxInterface* self, QMoveEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperResizeEvent(QDesignerWidgetBoxInterface* self, QResizeEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperCloseEvent(QDesignerWidgetBoxInterface* self, QCloseEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperContextMenuEvent(QDesignerWidgetBoxInterface* self, QContextMenuEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperTabletEvent(QDesignerWidgetBoxInterface* self, QTabletEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperActionEvent(QDesignerWidgetBoxInterface* self, QActionEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperDragEnterEvent(QDesignerWidgetBoxInterface* self, QDragEnterEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperDragMoveEvent(QDesignerWidgetBoxInterface* self, QDragMoveEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperDragLeaveEvent(QDesignerWidgetBoxInterface* self, QDragLeaveEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperDropEvent(QDesignerWidgetBoxInterface* self, QDropEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperShowEvent(QDesignerWidgetBoxInterface* self, QShowEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperHideEvent(QDesignerWidgetBoxInterface* self, QHideEvent* event);
    friend bool QDesignerWidgetBoxInterface_SuperNativeEvent(QDesignerWidgetBoxInterface* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QDesignerWidgetBoxInterface_SuperChangeEvent(QDesignerWidgetBoxInterface* self, QEvent* param1);
    friend int QDesignerWidgetBoxInterface_SuperMetric(const QDesignerWidgetBoxInterface* self, int param1);
    friend void QDesignerWidgetBoxInterface_SuperInitPainter(const QDesignerWidgetBoxInterface* self, QPainter* painter);
    friend QPaintDevice* QDesignerWidgetBoxInterface_SuperRedirected(const QDesignerWidgetBoxInterface* self, QPoint* offset);
    friend QPainter* QDesignerWidgetBoxInterface_SuperSharedPainter(const QDesignerWidgetBoxInterface* self);
    friend void QDesignerWidgetBoxInterface_SuperInputMethodEvent(QDesignerWidgetBoxInterface* self, QInputMethodEvent* param1);
    friend bool QDesignerWidgetBoxInterface_SuperFocusNextPrevChild(QDesignerWidgetBoxInterface* self, bool next);
    friend void QDesignerWidgetBoxInterface_SuperTimerEvent(QDesignerWidgetBoxInterface* self, QTimerEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperChildEvent(QDesignerWidgetBoxInterface* self, QChildEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperCustomEvent(QDesignerWidgetBoxInterface* self, QEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperConnectNotify(QDesignerWidgetBoxInterface* self, const QMetaMethod* signal);
    friend void QDesignerWidgetBoxInterface_SuperDisconnectNotify(QDesignerWidgetBoxInterface* self, const QMetaMethod* signal);
};

#endif
