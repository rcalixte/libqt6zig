#pragma once
#ifndef EXTRAS_KIO_LIBKDIROPERATOR_HXX
#define EXTRAS_KIO_LIBKDIROPERATOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KDirOperator
class VirtualKDirOperator final : public KDirOperator {
  public:
    // Virtual class public types (including callbacks and access types)
    using KDirOperator_MetaObject_Callback = QMetaObject* (*)(const KDirOperator*);
    using KDirOperator_Metacast_Callback = void* (*)(KDirOperator*, const char*);
    using KDirOperator_Metacall_Callback = int (*)(KDirOperator*, int, int, void**);
    using KDirOperator_SetShowHiddenFiles_Callback = void (*)(KDirOperator*, bool);
    using KDirOperator_SetUrl_Callback = void (*)(KDirOperator*, QUrl*, bool);
    using KDirOperator_SetMode_Callback = void (*)(KDirOperator*, int);
    using KDirOperator_SetPreviewWidget_Callback = void (*)(KDirOperator*, KPreviewWidgetBase*);
    using KDirOperator_SetViewConfig_Callback = void (*)(KDirOperator*, KConfigGroup*);
    using KDirOperator_ReadConfig_Callback = void (*)(KDirOperator*, KConfigGroup*);
    using KDirOperator_WriteConfig_Callback = void (*)(KDirOperator*, KConfigGroup*);
    using KDirOperator_Del_Callback = KIO__DeleteJob* (*)(KDirOperator*, KFileItemList*, QWidget*, bool, bool);
    using KDirOperator_SetEnableDirHighlighting_Callback = void (*)(KDirOperator*, bool);
    using KDirOperator_SetAcceptDrops_Callback = void (*)(KDirOperator*, bool);
    using KDirOperator_SetDropOptions_Callback = void (*)(KDirOperator*, int);
    using KDirOperator_Trash_Callback = KIO__CopyJob* (*)(KDirOperator*, KFileItemList*, QWidget*, bool, bool);
    using KDirOperator_CreateView_Callback = QAbstractItemView* (*)(KDirOperator*, QWidget*, int);
    using KDirOperator_SetDirLister_Callback = void (*)(KDirOperator*, KDirLister*);
    using KDirOperator_ResizeEvent_Callback = void (*)(KDirOperator*, QResizeEvent*);
    using KDirOperator_ActivatedMenu_Callback = void (*)(KDirOperator*, KFileItem*, QPoint*);
    using KDirOperator_ChangeEvent_Callback = void (*)(KDirOperator*, QEvent*);
    using KDirOperator_EventFilter_Callback = bool (*)(KDirOperator*, QObject*, QEvent*);
    using KDirOperator_Back_Callback = void (*)(KDirOperator*);
    using KDirOperator_Forward_Callback = void (*)(KDirOperator*);
    using KDirOperator_Home_Callback = void (*)(KDirOperator*);
    using KDirOperator_CdUp_Callback = void (*)(KDirOperator*);
    using KDirOperator_RereadDir_Callback = void (*)(KDirOperator*);
    using KDirOperator_Mkdir_Callback = void (*)(KDirOperator*);
    using KDirOperator_DeleteSelected_Callback = void (*)(KDirOperator*);
    using KDirOperator_TrashSelected_Callback = void (*)(KDirOperator*);
    using KDirOperator_SelectDir_Callback = void (*)(KDirOperator*, KFileItem*);
    using KDirOperator_DevType_Callback = int (*)(const KDirOperator*);
    using KDirOperator_SetVisible_Callback = void (*)(KDirOperator*, bool);
    using KDirOperator_SizeHint_Callback = QSize* (*)(const KDirOperator*);
    using KDirOperator_MinimumSizeHint_Callback = QSize* (*)(const KDirOperator*);
    using KDirOperator_HeightForWidth_Callback = int (*)(const KDirOperator*, int);
    using KDirOperator_HasHeightForWidth_Callback = bool (*)(const KDirOperator*);
    using KDirOperator_PaintEngine_Callback = QPaintEngine* (*)(const KDirOperator*);
    using KDirOperator_Event_Callback = bool (*)(KDirOperator*, QEvent*);
    using KDirOperator_MousePressEvent_Callback = void (*)(KDirOperator*, QMouseEvent*);
    using KDirOperator_MouseReleaseEvent_Callback = void (*)(KDirOperator*, QMouseEvent*);
    using KDirOperator_MouseDoubleClickEvent_Callback = void (*)(KDirOperator*, QMouseEvent*);
    using KDirOperator_MouseMoveEvent_Callback = void (*)(KDirOperator*, QMouseEvent*);
    using KDirOperator_WheelEvent_Callback = void (*)(KDirOperator*, QWheelEvent*);
    using KDirOperator_KeyPressEvent_Callback = void (*)(KDirOperator*, QKeyEvent*);
    using KDirOperator_KeyReleaseEvent_Callback = void (*)(KDirOperator*, QKeyEvent*);
    using KDirOperator_FocusInEvent_Callback = void (*)(KDirOperator*, QFocusEvent*);
    using KDirOperator_FocusOutEvent_Callback = void (*)(KDirOperator*, QFocusEvent*);
    using KDirOperator_EnterEvent_Callback = void (*)(KDirOperator*, QEnterEvent*);
    using KDirOperator_LeaveEvent_Callback = void (*)(KDirOperator*, QEvent*);
    using KDirOperator_PaintEvent_Callback = void (*)(KDirOperator*, QPaintEvent*);
    using KDirOperator_MoveEvent_Callback = void (*)(KDirOperator*, QMoveEvent*);
    using KDirOperator_CloseEvent_Callback = void (*)(KDirOperator*, QCloseEvent*);
    using KDirOperator_ContextMenuEvent_Callback = void (*)(KDirOperator*, QContextMenuEvent*);
    using KDirOperator_TabletEvent_Callback = void (*)(KDirOperator*, QTabletEvent*);
    using KDirOperator_ActionEvent_Callback = void (*)(KDirOperator*, QActionEvent*);
    using KDirOperator_DragEnterEvent_Callback = void (*)(KDirOperator*, QDragEnterEvent*);
    using KDirOperator_DragMoveEvent_Callback = void (*)(KDirOperator*, QDragMoveEvent*);
    using KDirOperator_DragLeaveEvent_Callback = void (*)(KDirOperator*, QDragLeaveEvent*);
    using KDirOperator_DropEvent_Callback = void (*)(KDirOperator*, QDropEvent*);
    using KDirOperator_ShowEvent_Callback = void (*)(KDirOperator*, QShowEvent*);
    using KDirOperator_HideEvent_Callback = void (*)(KDirOperator*, QHideEvent*);
    using KDirOperator_NativeEvent_Callback = bool (*)(KDirOperator*, libqt_string, void*, intptr_t*);
    using KDirOperator_Metric_Callback = int (*)(const KDirOperator*, int);
    using KDirOperator_InitPainter_Callback = void (*)(const KDirOperator*, QPainter*);
    using KDirOperator_Redirected_Callback = QPaintDevice* (*)(const KDirOperator*, QPoint*);
    using KDirOperator_SharedPainter_Callback = QPainter* (*)(const KDirOperator*);
    using KDirOperator_InputMethodEvent_Callback = void (*)(KDirOperator*, QInputMethodEvent*);
    using KDirOperator_InputMethodQuery_Callback = QVariant* (*)(const KDirOperator*, int);
    using KDirOperator_FocusNextPrevChild_Callback = bool (*)(KDirOperator*, bool);
    using KDirOperator_TimerEvent_Callback = void (*)(KDirOperator*, QTimerEvent*);
    using KDirOperator_ChildEvent_Callback = void (*)(KDirOperator*, QChildEvent*);
    using KDirOperator_CustomEvent_Callback = void (*)(KDirOperator*, QEvent*);
    using KDirOperator_ConnectNotify_Callback = void (*)(KDirOperator*, QMetaMethod*);
    using KDirOperator_DisconnectNotify_Callback = void (*)(KDirOperator*, QMetaMethod*);
    using KDirOperator::checkPreviewSupport;
    using KDirOperator::create;
    using KDirOperator::destroy;
    using KDirOperator::focusNextChild;
    using KDirOperator::focusPreviousChild;
    using KDirOperator::getDecodedMetricF;
    using KDirOperator::highlightFile;
    using KDirOperator::isSignalConnected;
    using KDirOperator::pathChanged;
    using KDirOperator::prepareCompletionObjects;
    using KDirOperator::receivers;
    using KDirOperator::resetCursor;
    using KDirOperator::selectFile;
    using KDirOperator::sender;
    using KDirOperator::senderSignalIndex;
    using KDirOperator::setupActions;
    using KDirOperator::setupMenu;
    using KDirOperator::slotCompletionMatch;
    using KDirOperator::sortByDate;
    using KDirOperator::sortByName;
    using KDirOperator::sortBySize;
    using KDirOperator::sortByType;
    using KDirOperator::sortReversed;
    using KDirOperator::toggleDirsFirst;
    using KDirOperator::toggleIgnoreCase;
    using KDirOperator::updateMicroFocus;
    using KDirOperator::updateSortActions;
    using KDirOperator::updateViewActions;

    // Instance callback storage
    KDirOperator_MetaObject_Callback kdiroperator_metaobject_callback = nullptr;
    KDirOperator_Metacast_Callback kdiroperator_metacast_callback = nullptr;
    KDirOperator_Metacall_Callback kdiroperator_metacall_callback = nullptr;
    KDirOperator_SetShowHiddenFiles_Callback kdiroperator_setshowhiddenfiles_callback = nullptr;
    KDirOperator_SetUrl_Callback kdiroperator_seturl_callback = nullptr;
    KDirOperator_SetMode_Callback kdiroperator_setmode_callback = nullptr;
    KDirOperator_SetPreviewWidget_Callback kdiroperator_setpreviewwidget_callback = nullptr;
    KDirOperator_SetViewConfig_Callback kdiroperator_setviewconfig_callback = nullptr;
    KDirOperator_ReadConfig_Callback kdiroperator_readconfig_callback = nullptr;
    KDirOperator_WriteConfig_Callback kdiroperator_writeconfig_callback = nullptr;
    KDirOperator_Del_Callback kdiroperator_del_callback = nullptr;
    KDirOperator_SetEnableDirHighlighting_Callback kdiroperator_setenabledirhighlighting_callback = nullptr;
    KDirOperator_SetAcceptDrops_Callback kdiroperator_setacceptdrops_callback = nullptr;
    KDirOperator_SetDropOptions_Callback kdiroperator_setdropoptions_callback = nullptr;
    KDirOperator_Trash_Callback kdiroperator_trash_callback = nullptr;
    KDirOperator_CreateView_Callback kdiroperator_createview_callback = nullptr;
    KDirOperator_SetDirLister_Callback kdiroperator_setdirlister_callback = nullptr;
    KDirOperator_ResizeEvent_Callback kdiroperator_resizeevent_callback = nullptr;
    KDirOperator_ActivatedMenu_Callback kdiroperator_activatedmenu_callback = nullptr;
    KDirOperator_ChangeEvent_Callback kdiroperator_changeevent_callback = nullptr;
    KDirOperator_EventFilter_Callback kdiroperator_eventfilter_callback = nullptr;
    KDirOperator_Back_Callback kdiroperator_back_callback = nullptr;
    KDirOperator_Forward_Callback kdiroperator_forward_callback = nullptr;
    KDirOperator_Home_Callback kdiroperator_home_callback = nullptr;
    KDirOperator_CdUp_Callback kdiroperator_cdup_callback = nullptr;
    KDirOperator_RereadDir_Callback kdiroperator_rereaddir_callback = nullptr;
    KDirOperator_Mkdir_Callback kdiroperator_mkdir_callback = nullptr;
    KDirOperator_DeleteSelected_Callback kdiroperator_deleteselected_callback = nullptr;
    KDirOperator_TrashSelected_Callback kdiroperator_trashselected_callback = nullptr;
    KDirOperator_SelectDir_Callback kdiroperator_selectdir_callback = nullptr;
    KDirOperator_DevType_Callback kdiroperator_devtype_callback = nullptr;
    KDirOperator_SetVisible_Callback kdiroperator_setvisible_callback = nullptr;
    KDirOperator_SizeHint_Callback kdiroperator_sizehint_callback = nullptr;
    KDirOperator_MinimumSizeHint_Callback kdiroperator_minimumsizehint_callback = nullptr;
    KDirOperator_HeightForWidth_Callback kdiroperator_heightforwidth_callback = nullptr;
    KDirOperator_HasHeightForWidth_Callback kdiroperator_hasheightforwidth_callback = nullptr;
    KDirOperator_PaintEngine_Callback kdiroperator_paintengine_callback = nullptr;
    KDirOperator_Event_Callback kdiroperator_event_callback = nullptr;
    KDirOperator_MousePressEvent_Callback kdiroperator_mousepressevent_callback = nullptr;
    KDirOperator_MouseReleaseEvent_Callback kdiroperator_mousereleaseevent_callback = nullptr;
    KDirOperator_MouseDoubleClickEvent_Callback kdiroperator_mousedoubleclickevent_callback = nullptr;
    KDirOperator_MouseMoveEvent_Callback kdiroperator_mousemoveevent_callback = nullptr;
    KDirOperator_WheelEvent_Callback kdiroperator_wheelevent_callback = nullptr;
    KDirOperator_KeyPressEvent_Callback kdiroperator_keypressevent_callback = nullptr;
    KDirOperator_KeyReleaseEvent_Callback kdiroperator_keyreleaseevent_callback = nullptr;
    KDirOperator_FocusInEvent_Callback kdiroperator_focusinevent_callback = nullptr;
    KDirOperator_FocusOutEvent_Callback kdiroperator_focusoutevent_callback = nullptr;
    KDirOperator_EnterEvent_Callback kdiroperator_enterevent_callback = nullptr;
    KDirOperator_LeaveEvent_Callback kdiroperator_leaveevent_callback = nullptr;
    KDirOperator_PaintEvent_Callback kdiroperator_paintevent_callback = nullptr;
    KDirOperator_MoveEvent_Callback kdiroperator_moveevent_callback = nullptr;
    KDirOperator_CloseEvent_Callback kdiroperator_closeevent_callback = nullptr;
    KDirOperator_ContextMenuEvent_Callback kdiroperator_contextmenuevent_callback = nullptr;
    KDirOperator_TabletEvent_Callback kdiroperator_tabletevent_callback = nullptr;
    KDirOperator_ActionEvent_Callback kdiroperator_actionevent_callback = nullptr;
    KDirOperator_DragEnterEvent_Callback kdiroperator_dragenterevent_callback = nullptr;
    KDirOperator_DragMoveEvent_Callback kdiroperator_dragmoveevent_callback = nullptr;
    KDirOperator_DragLeaveEvent_Callback kdiroperator_dragleaveevent_callback = nullptr;
    KDirOperator_DropEvent_Callback kdiroperator_dropevent_callback = nullptr;
    KDirOperator_ShowEvent_Callback kdiroperator_showevent_callback = nullptr;
    KDirOperator_HideEvent_Callback kdiroperator_hideevent_callback = nullptr;
    KDirOperator_NativeEvent_Callback kdiroperator_nativeevent_callback = nullptr;
    KDirOperator_Metric_Callback kdiroperator_metric_callback = nullptr;
    KDirOperator_InitPainter_Callback kdiroperator_initpainter_callback = nullptr;
    KDirOperator_Redirected_Callback kdiroperator_redirected_callback = nullptr;
    KDirOperator_SharedPainter_Callback kdiroperator_sharedpainter_callback = nullptr;
    KDirOperator_InputMethodEvent_Callback kdiroperator_inputmethodevent_callback = nullptr;
    KDirOperator_InputMethodQuery_Callback kdiroperator_inputmethodquery_callback = nullptr;
    KDirOperator_FocusNextPrevChild_Callback kdiroperator_focusnextprevchild_callback = nullptr;
    KDirOperator_TimerEvent_Callback kdiroperator_timerevent_callback = nullptr;
    KDirOperator_ChildEvent_Callback kdiroperator_childevent_callback = nullptr;
    KDirOperator_CustomEvent_Callback kdiroperator_customevent_callback = nullptr;
    KDirOperator_ConnectNotify_Callback kdiroperator_connectnotify_callback = nullptr;
    KDirOperator_DisconnectNotify_Callback kdiroperator_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KDirOperator {
        using KDirOperator::actionEvent;
        using KDirOperator::activatedMenu;
        using KDirOperator::changeEvent;
        using KDirOperator::childEvent;
        using KDirOperator::closeEvent;
        using KDirOperator::connectNotify;
        using KDirOperator::contextMenuEvent;
        using KDirOperator::createView;
        using KDirOperator::customEvent;
        using KDirOperator::disconnectNotify;
        using KDirOperator::dragEnterEvent;
        using KDirOperator::dragLeaveEvent;
        using KDirOperator::dragMoveEvent;
        using KDirOperator::dropEvent;
        using KDirOperator::enterEvent;
        using KDirOperator::event;
        using KDirOperator::eventFilter;
        using KDirOperator::focusInEvent;
        using KDirOperator::focusNextPrevChild;
        using KDirOperator::focusOutEvent;
        using KDirOperator::hideEvent;
        using KDirOperator::initPainter;
        using KDirOperator::inputMethodEvent;
        using KDirOperator::keyPressEvent;
        using KDirOperator::keyReleaseEvent;
        using KDirOperator::leaveEvent;
        using KDirOperator::metric;
        using KDirOperator::mouseDoubleClickEvent;
        using KDirOperator::mouseMoveEvent;
        using KDirOperator::mousePressEvent;
        using KDirOperator::mouseReleaseEvent;
        using KDirOperator::moveEvent;
        using KDirOperator::nativeEvent;
        using KDirOperator::paintEvent;
        using KDirOperator::redirected;
        using KDirOperator::resizeEvent;
        using KDirOperator::selectDir;
        using KDirOperator::setDirLister;
        using KDirOperator::sharedPainter;
        using KDirOperator::showEvent;
        using KDirOperator::tabletEvent;
        using KDirOperator::timerEvent;
        using KDirOperator::wheelEvent;
    };

    VirtualKDirOperator() : KDirOperator() {};
    VirtualKDirOperator(const QUrl& urlName) : KDirOperator(urlName) {};
    VirtualKDirOperator(const QUrl& urlName, QWidget* parent) : KDirOperator(urlName, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kdiroperator_metaobject_callback) {
            QMetaObject* callback_ret = kdiroperator_metaobject_callback(this);
            return callback_ret;
        }
        return KDirOperator::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kdiroperator_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kdiroperator_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KDirOperator::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kdiroperator_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kdiroperator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KDirOperator::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setShowHiddenFiles(bool s) override {
        if (kdiroperator_setshowhiddenfiles_callback) {
            bool cbval1 = s;
            kdiroperator_setshowhiddenfiles_callback(this, cbval1);
            return;
        }
        KDirOperator::setShowHiddenFiles(s);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setUrl(const QUrl& url, bool clearforward) override {
        if (kdiroperator_seturl_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            bool cbval2 = clearforward;
            kdiroperator_seturl_callback(this, cbval1, cbval2);
            return;
        }
        KDirOperator::setUrl(url, clearforward);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMode(KFile::Modes m) override {
        if (kdiroperator_setmode_callback) {
            int cbval1 = static_cast<int>(m);
            kdiroperator_setmode_callback(this, cbval1);
            return;
        }
        KDirOperator::setMode(m);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPreviewWidget(KPreviewWidgetBase* w) override {
        if (kdiroperator_setpreviewwidget_callback) {
            KPreviewWidgetBase* cbval1 = w;
            kdiroperator_setpreviewwidget_callback(this, cbval1);
            return;
        }
        KDirOperator::setPreviewWidget(w);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setViewConfig(KConfigGroup& configGroup) override {
        if (kdiroperator_setviewconfig_callback) {
            KConfigGroup& configGroup_ret = configGroup;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = &configGroup_ret;
            kdiroperator_setviewconfig_callback(this, cbval1);
            return;
        }
        KDirOperator::setViewConfig(configGroup);
    }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(const KConfigGroup& configGroup) override {
        if (kdiroperator_readconfig_callback) {
            const KConfigGroup& configGroup_ret = configGroup;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = const_cast<KConfigGroup*>(&configGroup_ret);
            kdiroperator_readconfig_callback(this, cbval1);
            return;
        }
        KDirOperator::readConfig(configGroup);
    }

    // Virtual method for C ABI access and custom callback
    virtual void writeConfig(KConfigGroup& configGroup) override {
        if (kdiroperator_writeconfig_callback) {
            KConfigGroup& configGroup_ret = configGroup;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = &configGroup_ret;
            kdiroperator_writeconfig_callback(this, cbval1);
            return;
        }
        KDirOperator::writeConfig(configGroup);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::DeleteJob* del(const KFileItemList& items, QWidget* parent, bool ask, bool showProgress) override {
        if (kdiroperator_del_callback) {
            const KFileItemList& items_ret = items;
            // Cast returned reference into pointer
            KFileItemList* cbval1 = const_cast<KFileItemList*>(&items_ret);
            QWidget* cbval2 = parent;
            bool cbval3 = ask;
            bool cbval4 = showProgress;
            KIO__DeleteJob* callback_ret = kdiroperator_del_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KDirOperator::del(items, parent, ask, showProgress);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEnableDirHighlighting(bool enable) override {
        if (kdiroperator_setenabledirhighlighting_callback) {
            bool cbval1 = enable;
            kdiroperator_setenabledirhighlighting_callback(this, cbval1);
            return;
        }
        KDirOperator::setEnableDirHighlighting(enable);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAcceptDrops(bool b) override {
        if (kdiroperator_setacceptdrops_callback) {
            bool cbval1 = b;
            kdiroperator_setacceptdrops_callback(this, cbval1);
            return;
        }
        KDirOperator::setAcceptDrops(b);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDropOptions(int options) override {
        if (kdiroperator_setdropoptions_callback) {
            int cbval1 = options;
            kdiroperator_setdropoptions_callback(this, cbval1);
            return;
        }
        KDirOperator::setDropOptions(options);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::CopyJob* trash(const KFileItemList& items, QWidget* parent, bool ask, bool showProgress) override {
        if (kdiroperator_trash_callback) {
            const KFileItemList& items_ret = items;
            // Cast returned reference into pointer
            KFileItemList* cbval1 = const_cast<KFileItemList*>(&items_ret);
            QWidget* cbval2 = parent;
            bool cbval3 = ask;
            bool cbval4 = showProgress;
            KIO__CopyJob* callback_ret = kdiroperator_trash_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KDirOperator::trash(items, parent, ask, showProgress);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemView* createView(QWidget* parent, KFile::FileView viewKind) override {
        if (kdiroperator_createview_callback) {
            QWidget* cbval1 = parent;
            int cbval2 = static_cast<int>(viewKind);
            QAbstractItemView* callback_ret = kdiroperator_createview_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KDirOperator::createView(parent, viewKind);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDirLister(KDirLister* lister) override {
        if (kdiroperator_setdirlister_callback) {
            KDirLister* cbval1 = lister;
            kdiroperator_setdirlister_callback(this, cbval1);
            return;
        }
        KDirOperator::setDirLister(lister);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kdiroperator_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kdiroperator_resizeevent_callback(this, cbval1);
            return;
        }
        KDirOperator::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void activatedMenu(const KFileItem& item, const QPoint& pos) override {
        if (kdiroperator_activatedmenu_callback) {
            const KFileItem& item_ret = item;
            // Cast returned reference into pointer
            KFileItem* cbval1 = const_cast<KFileItem*>(&item_ret);
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval2 = const_cast<QPoint*>(&pos_ret);
            kdiroperator_activatedmenu_callback(this, cbval1, cbval2);
            return;
        }
        KDirOperator::activatedMenu(item, pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (kdiroperator_changeevent_callback) {
            QEvent* cbval1 = event;
            kdiroperator_changeevent_callback(this, cbval1);
            return;
        }
        KDirOperator::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kdiroperator_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kdiroperator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KDirOperator::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void back() override {
        if (kdiroperator_back_callback) {
            kdiroperator_back_callback(this);
            return;
        }
        KDirOperator::back();
    }

    // Virtual method for C ABI access and custom callback
    virtual void forward() override {
        if (kdiroperator_forward_callback) {
            kdiroperator_forward_callback(this);
            return;
        }
        KDirOperator::forward();
    }

    // Virtual method for C ABI access and custom callback
    virtual void home() override {
        if (kdiroperator_home_callback) {
            kdiroperator_home_callback(this);
            return;
        }
        KDirOperator::home();
    }

    // Virtual method for C ABI access and custom callback
    virtual void cdUp() override {
        if (kdiroperator_cdup_callback) {
            kdiroperator_cdup_callback(this);
            return;
        }
        KDirOperator::cdUp();
    }

    // Virtual method for C ABI access and custom callback
    virtual void rereadDir() override {
        if (kdiroperator_rereaddir_callback) {
            kdiroperator_rereaddir_callback(this);
            return;
        }
        KDirOperator::rereadDir();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mkdir() override {
        if (kdiroperator_mkdir_callback) {
            kdiroperator_mkdir_callback(this);
            return;
        }
        KDirOperator::mkdir();
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteSelected() override {
        if (kdiroperator_deleteselected_callback) {
            kdiroperator_deleteselected_callback(this);
            return;
        }
        KDirOperator::deleteSelected();
    }

    // Virtual method for C ABI access and custom callback
    virtual void trashSelected() override {
        if (kdiroperator_trashselected_callback) {
            kdiroperator_trashselected_callback(this);
            return;
        }
        KDirOperator::trashSelected();
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectDir(const KFileItem& item) override {
        if (kdiroperator_selectdir_callback) {
            const KFileItem& item_ret = item;
            // Cast returned reference into pointer
            KFileItem* cbval1 = const_cast<KFileItem*>(&item_ret);
            kdiroperator_selectdir_callback(this, cbval1);
            return;
        }
        KDirOperator::selectDir(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kdiroperator_devtype_callback) {
            int callback_ret = kdiroperator_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KDirOperator::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kdiroperator_setvisible_callback) {
            bool cbval1 = visible;
            kdiroperator_setvisible_callback(this, cbval1);
            return;
        }
        KDirOperator::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kdiroperator_sizehint_callback) {
            QSize* callback_ret = kdiroperator_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDirOperator::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kdiroperator_minimumsizehint_callback) {
            QSize* callback_ret = kdiroperator_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDirOperator::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kdiroperator_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kdiroperator_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KDirOperator::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kdiroperator_hasheightforwidth_callback) {
            bool callback_ret = kdiroperator_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KDirOperator::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kdiroperator_paintengine_callback) {
            QPaintEngine* callback_ret = kdiroperator_paintengine_callback(this);
            return callback_ret;
        }
        return KDirOperator::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kdiroperator_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kdiroperator_event_callback(this, cbval1);
            return callback_ret;
        }
        return KDirOperator::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kdiroperator_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kdiroperator_mousepressevent_callback(this, cbval1);
            return;
        }
        KDirOperator::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kdiroperator_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kdiroperator_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KDirOperator::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kdiroperator_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kdiroperator_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KDirOperator::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kdiroperator_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kdiroperator_mousemoveevent_callback(this, cbval1);
            return;
        }
        KDirOperator::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kdiroperator_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kdiroperator_wheelevent_callback(this, cbval1);
            return;
        }
        KDirOperator::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kdiroperator_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kdiroperator_keypressevent_callback(this, cbval1);
            return;
        }
        KDirOperator::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kdiroperator_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kdiroperator_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KDirOperator::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kdiroperator_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kdiroperator_focusinevent_callback(this, cbval1);
            return;
        }
        KDirOperator::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kdiroperator_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kdiroperator_focusoutevent_callback(this, cbval1);
            return;
        }
        KDirOperator::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kdiroperator_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kdiroperator_enterevent_callback(this, cbval1);
            return;
        }
        KDirOperator::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kdiroperator_leaveevent_callback) {
            QEvent* cbval1 = event;
            kdiroperator_leaveevent_callback(this, cbval1);
            return;
        }
        KDirOperator::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kdiroperator_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kdiroperator_paintevent_callback(this, cbval1);
            return;
        }
        KDirOperator::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kdiroperator_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kdiroperator_moveevent_callback(this, cbval1);
            return;
        }
        KDirOperator::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kdiroperator_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kdiroperator_closeevent_callback(this, cbval1);
            return;
        }
        KDirOperator::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kdiroperator_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kdiroperator_contextmenuevent_callback(this, cbval1);
            return;
        }
        KDirOperator::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kdiroperator_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kdiroperator_tabletevent_callback(this, cbval1);
            return;
        }
        KDirOperator::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kdiroperator_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kdiroperator_actionevent_callback(this, cbval1);
            return;
        }
        KDirOperator::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kdiroperator_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kdiroperator_dragenterevent_callback(this, cbval1);
            return;
        }
        KDirOperator::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kdiroperator_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kdiroperator_dragmoveevent_callback(this, cbval1);
            return;
        }
        KDirOperator::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kdiroperator_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kdiroperator_dragleaveevent_callback(this, cbval1);
            return;
        }
        KDirOperator::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kdiroperator_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kdiroperator_dropevent_callback(this, cbval1);
            return;
        }
        KDirOperator::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kdiroperator_showevent_callback) {
            QShowEvent* cbval1 = event;
            kdiroperator_showevent_callback(this, cbval1);
            return;
        }
        KDirOperator::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kdiroperator_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kdiroperator_hideevent_callback(this, cbval1);
            return;
        }
        KDirOperator::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kdiroperator_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kdiroperator_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KDirOperator::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kdiroperator_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kdiroperator_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KDirOperator::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kdiroperator_initpainter_callback) {
            QPainter* cbval1 = painter;
            kdiroperator_initpainter_callback(this, cbval1);
            return;
        }
        KDirOperator::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kdiroperator_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kdiroperator_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KDirOperator::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kdiroperator_sharedpainter_callback) {
            QPainter* callback_ret = kdiroperator_sharedpainter_callback(this);
            return callback_ret;
        }
        return KDirOperator::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kdiroperator_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kdiroperator_inputmethodevent_callback(this, cbval1);
            return;
        }
        KDirOperator::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kdiroperator_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kdiroperator_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KDirOperator::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kdiroperator_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kdiroperator_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KDirOperator::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kdiroperator_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kdiroperator_timerevent_callback(this, cbval1);
            return;
        }
        KDirOperator::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kdiroperator_childevent_callback) {
            QChildEvent* cbval1 = event;
            kdiroperator_childevent_callback(this, cbval1);
            return;
        }
        KDirOperator::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kdiroperator_customevent_callback) {
            QEvent* cbval1 = event;
            kdiroperator_customevent_callback(this, cbval1);
            return;
        }
        KDirOperator::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kdiroperator_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kdiroperator_connectnotify_callback(this, cbval1);
            return;
        }
        KDirOperator::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kdiroperator_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kdiroperator_disconnectnotify_callback(this, cbval1);
            return;
        }
        KDirOperator::disconnectNotify(signal);
    }

    // Friend functions
    friend QAbstractItemView* KDirOperator_SuperCreateView(KDirOperator* self, QWidget* parent, int viewKind);
    friend void KDirOperator_SuperSetDirLister(KDirOperator* self, KDirLister* lister);
    friend void KDirOperator_SuperResizeEvent(KDirOperator* self, QResizeEvent* event);
    friend void KDirOperator_SuperActivatedMenu(KDirOperator* self, const KFileItem* item, const QPoint* pos);
    friend void KDirOperator_SuperChangeEvent(KDirOperator* self, QEvent* event);
    friend bool KDirOperator_SuperEventFilter(KDirOperator* self, QObject* watched, QEvent* event);
    friend void KDirOperator_SuperSelectDir(KDirOperator* self, const KFileItem* item);
    friend bool KDirOperator_SuperEvent(KDirOperator* self, QEvent* event);
    friend void KDirOperator_SuperMousePressEvent(KDirOperator* self, QMouseEvent* event);
    friend void KDirOperator_SuperMouseReleaseEvent(KDirOperator* self, QMouseEvent* event);
    friend void KDirOperator_SuperMouseDoubleClickEvent(KDirOperator* self, QMouseEvent* event);
    friend void KDirOperator_SuperMouseMoveEvent(KDirOperator* self, QMouseEvent* event);
    friend void KDirOperator_SuperWheelEvent(KDirOperator* self, QWheelEvent* event);
    friend void KDirOperator_SuperKeyPressEvent(KDirOperator* self, QKeyEvent* event);
    friend void KDirOperator_SuperKeyReleaseEvent(KDirOperator* self, QKeyEvent* event);
    friend void KDirOperator_SuperFocusInEvent(KDirOperator* self, QFocusEvent* event);
    friend void KDirOperator_SuperFocusOutEvent(KDirOperator* self, QFocusEvent* event);
    friend void KDirOperator_SuperEnterEvent(KDirOperator* self, QEnterEvent* event);
    friend void KDirOperator_SuperLeaveEvent(KDirOperator* self, QEvent* event);
    friend void KDirOperator_SuperPaintEvent(KDirOperator* self, QPaintEvent* event);
    friend void KDirOperator_SuperMoveEvent(KDirOperator* self, QMoveEvent* event);
    friend void KDirOperator_SuperCloseEvent(KDirOperator* self, QCloseEvent* event);
    friend void KDirOperator_SuperContextMenuEvent(KDirOperator* self, QContextMenuEvent* event);
    friend void KDirOperator_SuperTabletEvent(KDirOperator* self, QTabletEvent* event);
    friend void KDirOperator_SuperActionEvent(KDirOperator* self, QActionEvent* event);
    friend void KDirOperator_SuperDragEnterEvent(KDirOperator* self, QDragEnterEvent* event);
    friend void KDirOperator_SuperDragMoveEvent(KDirOperator* self, QDragMoveEvent* event);
    friend void KDirOperator_SuperDragLeaveEvent(KDirOperator* self, QDragLeaveEvent* event);
    friend void KDirOperator_SuperDropEvent(KDirOperator* self, QDropEvent* event);
    friend void KDirOperator_SuperShowEvent(KDirOperator* self, QShowEvent* event);
    friend void KDirOperator_SuperHideEvent(KDirOperator* self, QHideEvent* event);
    friend bool KDirOperator_SuperNativeEvent(KDirOperator* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KDirOperator_SuperMetric(const KDirOperator* self, int param1);
    friend void KDirOperator_SuperInitPainter(const KDirOperator* self, QPainter* painter);
    friend QPaintDevice* KDirOperator_SuperRedirected(const KDirOperator* self, QPoint* offset);
    friend QPainter* KDirOperator_SuperSharedPainter(const KDirOperator* self);
    friend void KDirOperator_SuperInputMethodEvent(KDirOperator* self, QInputMethodEvent* param1);
    friend bool KDirOperator_SuperFocusNextPrevChild(KDirOperator* self, bool next);
    friend void KDirOperator_SuperTimerEvent(KDirOperator* self, QTimerEvent* event);
    friend void KDirOperator_SuperChildEvent(KDirOperator* self, QChildEvent* event);
    friend void KDirOperator_SuperCustomEvent(KDirOperator* self, QEvent* event);
    friend void KDirOperator_SuperConnectNotify(KDirOperator* self, const QMetaMethod* signal);
    friend void KDirOperator_SuperDisconnectNotify(KDirOperator* self, const QMetaMethod* signal);
};

#endif
