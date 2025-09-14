#include <KCompletion>
#include <KConfigGroup>
#include <KDirLister>
#include <KDirOperator>
#include <KFileItem>
#include <KFilePreviewGenerator>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__CopyJob
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__DeleteJob
#include <KPreviewWidgetBase>
#include <QAbstractItemView>
#include <QAction>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QProgressBar>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kdiroperator.h>
#include "libkdiroperator.h"
#include "libkdiroperator.hxx"

KDirOperator* KDirOperator_new() {
    return new VirtualKDirOperator();
}

KDirOperator* KDirOperator_new2(const QUrl* urlName) {
    return new VirtualKDirOperator(*urlName);
}

KDirOperator* KDirOperator_new3(const QUrl* urlName, QWidget* parent) {
    return new VirtualKDirOperator(*urlName, parent);
}

QMetaObject* KDirOperator_MetaObject(const KDirOperator* self) {
    return (QMetaObject*)self->metaObject();
}

void* KDirOperator_Metacast(KDirOperator* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KDirOperator_Metacall(KDirOperator* self, int param1, int param2, void** param3) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKDirOperator*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KDirOperator_Tr(const char* s) {
    QString _ret = KDirOperator::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KDirOperator_SetShowHiddenFiles(KDirOperator* self, bool s) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        self->setShowHiddenFiles(s);
    } else {
        ((VirtualKDirOperator*)self)->setShowHiddenFiles(s);
    }
}

bool KDirOperator_ShowHiddenFiles(const KDirOperator* self) {
    return self->showHiddenFiles();
}

void KDirOperator_Close(KDirOperator* self) {
    self->close();
}

void KDirOperator_SetNameFilter(KDirOperator* self, const libqt_string filter) {
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    self->setNameFilter(filter_QString);
}

libqt_string KDirOperator_NameFilter(const KDirOperator* self) {
    QString _ret = self->nameFilter();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KDirOperator_SetMimeFilter(KDirOperator* self, const libqt_list /* of libqt_string */ mimetypes) {
    QList<QString> mimetypes_QList;
    mimetypes_QList.reserve(mimetypes.len);
    libqt_string* mimetypes_arr = static_cast<libqt_string*>(mimetypes.data);
    for (size_t i = 0; i < mimetypes.len; ++i) {
        QString mimetypes_arr_i_QString = QString::fromUtf8(mimetypes_arr[i].data, mimetypes_arr[i].len);
        mimetypes_QList.push_back(mimetypes_arr_i_QString);
    }
    self->setMimeFilter(mimetypes_QList);
}

libqt_list /* of libqt_string */ KDirOperator_MimeFilter(const KDirOperator* self) {
    QList<QString> _ret = self->mimeFilter();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KDirOperator_SetNewFileMenuSupportedMimeTypes(KDirOperator* self, const libqt_list /* of libqt_string */ mime) {
    QList<QString> mime_QList;
    mime_QList.reserve(mime.len);
    libqt_string* mime_arr = static_cast<libqt_string*>(mime.data);
    for (size_t i = 0; i < mime.len; ++i) {
        QString mime_arr_i_QString = QString::fromUtf8(mime_arr[i].data, mime_arr[i].len);
        mime_QList.push_back(mime_arr_i_QString);
    }
    self->setNewFileMenuSupportedMimeTypes(mime_QList);
}

libqt_list /* of libqt_string */ KDirOperator_NewFileMenuSupportedMimeTypes(const KDirOperator* self) {
    QList<QString> _ret = self->newFileMenuSupportedMimeTypes();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KDirOperator_SetNewFileMenuSelectDirWhenAlreadyExist(KDirOperator* self, bool selectOnDirExists) {
    self->setNewFileMenuSelectDirWhenAlreadyExist(selectOnDirExists);
}

void KDirOperator_ClearFilter(KDirOperator* self) {
    self->clearFilter();
}

QUrl* KDirOperator_Url(const KDirOperator* self) {
    return new QUrl(self->url());
}

void KDirOperator_SetUrl(KDirOperator* self, const QUrl* url, bool clearforward) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        self->setUrl(*url, clearforward);
    } else {
        ((VirtualKDirOperator*)self)->setUrl(*url, clearforward);
    }
}

void KDirOperator_SetCurrentItem(KDirOperator* self, const QUrl* url) {
    self->setCurrentItem(*url);
}

void KDirOperator_SetCurrentItem2(KDirOperator* self, const KFileItem* item) {
    self->setCurrentItem(*item);
}

void KDirOperator_SetCurrentItems(KDirOperator* self, const libqt_list /* of QUrl* */ urls) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    self->setCurrentItems(urls_QList);
}

void KDirOperator_SetCurrentItems2(KDirOperator* self, const KFileItemList* items) {
    self->setCurrentItems(*items);
}

QAbstractItemView* KDirOperator_View(const KDirOperator* self) {
    return self->view();
}

void KDirOperator_SetViewMode(KDirOperator* self, int viewKind) {
    self->setViewMode(static_cast<KFile::FileView>(viewKind));
}

int KDirOperator_ViewMode(const KDirOperator* self) {
    return static_cast<int>(self->viewMode());
}

void KDirOperator_SetSorting(KDirOperator* self, int sorting) {
    self->setSorting(static_cast<QFlags<QDir::SortFlag>>(sorting));
}

int KDirOperator_Sorting(const KDirOperator* self) {
    return static_cast<int>(self->sorting());
}

bool KDirOperator_IsRoot(const KDirOperator* self) {
    return self->isRoot();
}

KDirLister* KDirOperator_DirLister(const KDirOperator* self) {
    return self->dirLister();
}

QProgressBar* KDirOperator_ProgressBar(const KDirOperator* self) {
    return self->progressBar();
}

void KDirOperator_SetMode(KDirOperator* self, int m) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        self->setMode(static_cast<KFile::Modes>(m));
    } else {
        ((VirtualKDirOperator*)self)->setMode(static_cast<KFile::Modes>(m));
    }
}

int KDirOperator_Mode(const KDirOperator* self) {
    return static_cast<int>(self->mode());
}

void KDirOperator_SetPreviewWidget(KDirOperator* self, KPreviewWidgetBase* w) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        self->setPreviewWidget(w);
    } else {
        ((VirtualKDirOperator*)self)->setPreviewWidget(w);
    }
}

KFileItemList* KDirOperator_SelectedItems(const KDirOperator* self) {
    return new KFileItemList(self->selectedItems());
}

bool KDirOperator_IsSelected(const KDirOperator* self, const KFileItem* item) {
    return self->isSelected(*item);
}

int KDirOperator_NumDirs(const KDirOperator* self) {
    return self->numDirs();
}

int KDirOperator_NumFiles(const KDirOperator* self) {
    return self->numFiles();
}

KCompletion* KDirOperator_CompletionObject(const KDirOperator* self) {
    return self->completionObject();
}

KCompletion* KDirOperator_DirCompletionObject(const KDirOperator* self) {
    return self->dirCompletionObject();
}

QAction* KDirOperator_Action(const KDirOperator* self, int action) {
    return self->action(static_cast<KDirOperator::Action>(action));
}

libqt_list /* of QAction* */ KDirOperator_AllActions(const KDirOperator* self) {
    QList<QAction*> _ret = self->allActions();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KDirOperator_SetViewConfig(KDirOperator* self, KConfigGroup* configGroup) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        self->setViewConfig(*configGroup);
    } else {
        ((VirtualKDirOperator*)self)->setViewConfig(*configGroup);
    }
}

KConfigGroup* KDirOperator_ViewConfigGroup(const KDirOperator* self) {
    return self->viewConfigGroup();
}

void KDirOperator_ReadConfig(KDirOperator* self, const KConfigGroup* configGroup) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        self->readConfig(*configGroup);
    } else {
        ((VirtualKDirOperator*)self)->readConfig(*configGroup);
    }
}

void KDirOperator_WriteConfig(KDirOperator* self, KConfigGroup* configGroup) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        self->writeConfig(*configGroup);
    } else {
        ((VirtualKDirOperator*)self)->writeConfig(*configGroup);
    }
}

void KDirOperator_SetOnlyDoubleClickSelectsFiles(KDirOperator* self, bool enable) {
    self->setOnlyDoubleClickSelectsFiles(enable);
}

bool KDirOperator_OnlyDoubleClickSelectsFiles(const KDirOperator* self) {
    return self->onlyDoubleClickSelectsFiles();
}

void KDirOperator_SetFollowNewDirectories(KDirOperator* self, bool enable) {
    self->setFollowNewDirectories(enable);
}

bool KDirOperator_FollowNewDirectories(const KDirOperator* self) {
    return self->followNewDirectories();
}

void KDirOperator_SetFollowSelectedDirectories(KDirOperator* self, bool enable) {
    self->setFollowSelectedDirectories(enable);
}

bool KDirOperator_FollowSelectedDirectories(const KDirOperator* self) {
    return self->followSelectedDirectories();
}

KIO__DeleteJob* KDirOperator_Del(KDirOperator* self, const KFileItemList* items, QWidget* parent, bool ask, bool showProgress) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        return self->del(*items, parent, ask, showProgress);
    } else {
        return ((VirtualKDirOperator*)self)->del(*items, parent, ask, showProgress);
    }
}

void KDirOperator_ClearHistory(KDirOperator* self) {
    self->clearHistory();
}

void KDirOperator_SetEnableDirHighlighting(KDirOperator* self, bool enable) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        self->setEnableDirHighlighting(enable);
    } else {
        ((VirtualKDirOperator*)self)->setEnableDirHighlighting(enable);
    }
}

bool KDirOperator_DirHighlighting(const KDirOperator* self) {
    return self->dirHighlighting();
}

bool KDirOperator_DirOnlyMode(const KDirOperator* self) {
    return self->dirOnlyMode();
}

bool KDirOperator_DirOnlyMode2(unsigned int mode) {
    return KDirOperator::dirOnlyMode(static_cast<uint>(mode));
}

void KDirOperator_SetupMenu(KDirOperator* self, int whichActions) {
    self->setupMenu(static_cast<int>(whichActions));
}

void KDirOperator_SetAcceptDrops(KDirOperator* self, bool b) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        self->setAcceptDrops(b);
    } else {
        ((VirtualKDirOperator*)self)->setAcceptDrops(b);
    }
}

void KDirOperator_SetDropOptions(KDirOperator* self, int options) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        self->setDropOptions(static_cast<int>(options));
    } else {
        ((VirtualKDirOperator*)self)->setDropOptions(static_cast<int>(options));
    }
}

KIO__CopyJob* KDirOperator_Trash(KDirOperator* self, const KFileItemList* items, QWidget* parent, bool ask, bool showProgress) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        return self->trash(*items, parent, ask, showProgress);
    } else {
        return ((VirtualKDirOperator*)self)->trash(*items, parent, ask, showProgress);
    }
}

KFilePreviewGenerator* KDirOperator_PreviewGenerator(const KDirOperator* self) {
    return self->previewGenerator();
}

void KDirOperator_SetInlinePreviewShown(KDirOperator* self, bool show) {
    self->setInlinePreviewShown(show);
}

int KDirOperator_DecorationPosition(const KDirOperator* self) {
    return static_cast<int>(self->decorationPosition());
}

void KDirOperator_SetDecorationPosition(KDirOperator* self, int position) {
    self->setDecorationPosition(static_cast<QStyleOptionViewItem::Position>(position));
}

bool KDirOperator_IsInlinePreviewShown(const KDirOperator* self) {
    return self->isInlinePreviewShown();
}

int KDirOperator_IconSize(const KDirOperator* self) {
    return self->iconSize();
}

void KDirOperator_SetIsSaving(KDirOperator* self, bool isSaving) {
    self->setIsSaving(isSaving);
}

bool KDirOperator_IsSaving(const KDirOperator* self) {
    return self->isSaving();
}

libqt_list /* of libqt_string */ KDirOperator_SupportedSchemes(const KDirOperator* self) {
    QList<QString> _ret = self->supportedSchemes();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KDirOperator_ShowOpenWithActions(KDirOperator* self, bool enable) {
    self->showOpenWithActions(enable);
}

bool KDirOperator_UsingKeyNavigation(KDirOperator* self) {
    return self->usingKeyNavigation();
}

QAbstractItemView* KDirOperator_CreateView(KDirOperator* self, QWidget* parent, int viewKind) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        return vkdiroperator->createView(parent, static_cast<KFile::FileView>(viewKind));
    }
    return {};
}

void KDirOperator_SetDirLister(KDirOperator* self, KDirLister* lister) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setDirLister(lister);
    }
}

void KDirOperator_ResizeEvent(KDirOperator* self, QResizeEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->resizeEvent(event);
    }
}

void KDirOperator_ActivatedMenu(KDirOperator* self, const KFileItem* item, const QPoint* pos) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->activatedMenu(*item, *pos);
    }
}

void KDirOperator_ChangeEvent(KDirOperator* self, QEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->changeEvent(event);
    }
}

bool KDirOperator_EventFilter(KDirOperator* self, QObject* watched, QEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        return vkdiroperator->eventFilter(watched, event);
    }
    return {};
}

void KDirOperator_Back(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        self->back();
    } else {
        ((VirtualKDirOperator*)self)->back();
    }
}

void KDirOperator_Forward(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        self->forward();
    } else {
        ((VirtualKDirOperator*)self)->forward();
    }
}

void KDirOperator_Home(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        self->home();
    } else {
        ((VirtualKDirOperator*)self)->home();
    }
}

void KDirOperator_CdUp(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        self->cdUp();
    } else {
        ((VirtualKDirOperator*)self)->cdUp();
    }
}

void KDirOperator_UpdateDir(KDirOperator* self) {
    self->updateDir();
}

void KDirOperator_RereadDir(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        self->rereadDir();
    } else {
        ((VirtualKDirOperator*)self)->rereadDir();
    }
}

void KDirOperator_Mkdir(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        self->mkdir();
    } else {
        ((VirtualKDirOperator*)self)->mkdir();
    }
}

void KDirOperator_DeleteSelected(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        self->deleteSelected();
    } else {
        ((VirtualKDirOperator*)self)->deleteSelected();
    }
}

void KDirOperator_UpdateSelectionDependentActions(KDirOperator* self) {
    self->updateSelectionDependentActions();
}

libqt_string KDirOperator_MakeCompletion(KDirOperator* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString _ret = self->makeCompletion(param1_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KDirOperator_MakeDirCompletion(KDirOperator* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString _ret = self->makeDirCompletion(param1_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KDirOperator_RenameSelected(KDirOperator* self) {
    self->renameSelected();
}

void KDirOperator_TrashSelected(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        self->trashSelected();
    } else {
        ((VirtualKDirOperator*)self)->trashSelected();
    }
}

void KDirOperator_SetIconSize(KDirOperator* self, int value) {
    self->setIconSize(static_cast<int>(value));
}

void KDirOperator_SetSupportedSchemes(KDirOperator* self, const libqt_list /* of libqt_string */ schemes) {
    QList<QString> schemes_QList;
    schemes_QList.reserve(schemes.len);
    libqt_string* schemes_arr = static_cast<libqt_string*>(schemes.data);
    for (size_t i = 0; i < schemes.len; ++i) {
        QString schemes_arr_i_QString = QString::fromUtf8(schemes_arr[i].data, schemes_arr[i].len);
        schemes_QList.push_back(schemes_arr_i_QString);
    }
    self->setSupportedSchemes(schemes_QList);
}

void KDirOperator_SelectDir(KDirOperator* self, const KFileItem* item) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->selectDir(*item);
    }
}

void KDirOperator_UrlEntered(KDirOperator* self, const QUrl* param1) {
    self->urlEntered(*param1);
}

void KDirOperator_Connect_UrlEntered(KDirOperator* self, intptr_t slot) {
    void (*slotFunc)(KDirOperator*, QUrl*) = reinterpret_cast<void (*)(KDirOperator*, QUrl*)>(slot);
    KDirOperator::connect(self, &KDirOperator::urlEntered, [self, slotFunc](const QUrl& param1) {
        const QUrl& param1_ret = param1;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
        slotFunc(self, sigval1);
    });
}

void KDirOperator_UpdateInformation(KDirOperator* self, int files, int dirs) {
    self->updateInformation(static_cast<int>(files), static_cast<int>(dirs));
}

void KDirOperator_Connect_UpdateInformation(KDirOperator* self, intptr_t slot) {
    void (*slotFunc)(KDirOperator*, int, int) = reinterpret_cast<void (*)(KDirOperator*, int, int)>(slot);
    KDirOperator::connect(self, &KDirOperator::updateInformation, [self, slotFunc](int files, int dirs) {
        int sigval1 = files;
        int sigval2 = dirs;
        slotFunc(self, sigval1, sigval2);
    });
}

void KDirOperator_Completion(KDirOperator* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->completion(param1_QString);
}

void KDirOperator_Connect_Completion(KDirOperator* self, intptr_t slot) {
    void (*slotFunc)(KDirOperator*, const char*) = reinterpret_cast<void (*)(KDirOperator*, const char*)>(slot);
    KDirOperator::connect(self, &KDirOperator::completion, [self, slotFunc](const QString& param1) {
        const QString param1_ret = param1;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray param1_b = param1_ret.toUtf8();
        const char* param1_str = static_cast<const char*>(malloc(param1_b.length() + 1));
        memcpy((void*)param1_str, param1_b.data(), param1_b.length());
        ((char*)param1_str)[param1_b.length()] = '\0';
        const char* sigval1 = param1_str;
        slotFunc(self, sigval1);
        libqt_free(param1_str);
    });
}

void KDirOperator_FinishedLoading(KDirOperator* self) {
    self->finishedLoading();
}

void KDirOperator_Connect_FinishedLoading(KDirOperator* self, intptr_t slot) {
    void (*slotFunc)(KDirOperator*) = reinterpret_cast<void (*)(KDirOperator*)>(slot);
    KDirOperator::connect(self, &KDirOperator::finishedLoading, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KDirOperator_ViewChanged(KDirOperator* self, QAbstractItemView* newView) {
    self->viewChanged(newView);
}

void KDirOperator_Connect_ViewChanged(KDirOperator* self, intptr_t slot) {
    void (*slotFunc)(KDirOperator*, QAbstractItemView*) = reinterpret_cast<void (*)(KDirOperator*, QAbstractItemView*)>(slot);
    KDirOperator::connect(self, &KDirOperator::viewChanged, [self, slotFunc](QAbstractItemView* newView) {
        QAbstractItemView* sigval1 = newView;
        slotFunc(self, sigval1);
    });
}

void KDirOperator_FileHighlighted(KDirOperator* self, const KFileItem* item) {
    self->fileHighlighted(*item);
}

void KDirOperator_Connect_FileHighlighted(KDirOperator* self, intptr_t slot) {
    void (*slotFunc)(KDirOperator*, KFileItem*) = reinterpret_cast<void (*)(KDirOperator*, KFileItem*)>(slot);
    KDirOperator::connect(self, &KDirOperator::fileHighlighted, [self, slotFunc](const KFileItem& item) {
        const KFileItem& item_ret = item;
        // Cast returned reference into pointer
        KFileItem* sigval1 = const_cast<KFileItem*>(&item_ret);
        slotFunc(self, sigval1);
    });
}

void KDirOperator_DirActivated(KDirOperator* self, const KFileItem* item) {
    self->dirActivated(*item);
}

void KDirOperator_Connect_DirActivated(KDirOperator* self, intptr_t slot) {
    void (*slotFunc)(KDirOperator*, KFileItem*) = reinterpret_cast<void (*)(KDirOperator*, KFileItem*)>(slot);
    KDirOperator::connect(self, &KDirOperator::dirActivated, [self, slotFunc](const KFileItem& item) {
        const KFileItem& item_ret = item;
        // Cast returned reference into pointer
        KFileItem* sigval1 = const_cast<KFileItem*>(&item_ret);
        slotFunc(self, sigval1);
    });
}

void KDirOperator_FileSelected(KDirOperator* self, const KFileItem* item) {
    self->fileSelected(*item);
}

void KDirOperator_Connect_FileSelected(KDirOperator* self, intptr_t slot) {
    void (*slotFunc)(KDirOperator*, KFileItem*) = reinterpret_cast<void (*)(KDirOperator*, KFileItem*)>(slot);
    KDirOperator::connect(self, &KDirOperator::fileSelected, [self, slotFunc](const KFileItem& item) {
        const KFileItem& item_ret = item;
        // Cast returned reference into pointer
        KFileItem* sigval1 = const_cast<KFileItem*>(&item_ret);
        slotFunc(self, sigval1);
    });
}

void KDirOperator_Dropped(KDirOperator* self, const KFileItem* item, QDropEvent* event, const libqt_list /* of QUrl* */ urls) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    self->dropped(*item, event, urls_QList);
}

void KDirOperator_Connect_Dropped(KDirOperator* self, intptr_t slot) {
    void (*slotFunc)(KDirOperator*, KFileItem*, QDropEvent*, QUrl**) = reinterpret_cast<void (*)(KDirOperator*, KFileItem*, QDropEvent*, QUrl**)>(slot);
    KDirOperator::connect(self, &KDirOperator::dropped, [self, slotFunc](const KFileItem& item, QDropEvent* event, const QList<QUrl>& urls) {
        const KFileItem& item_ret = item;
        // Cast returned reference into pointer
        KFileItem* sigval1 = const_cast<KFileItem*>(&item_ret);
        QDropEvent* sigval2 = event;
        const QList<QUrl>& urls_ret = urls;
        // Convert QList<> from C++ memory to manually-managed C memory
        QUrl** urls_arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (urls_ret.size() + 1)));
        for (qsizetype i = 0; i < urls_ret.size(); ++i) {
            urls_arr[i] = new QUrl(urls_ret[i]);
        }
        // Append sentinel value to the list
        urls_arr[urls_ret.size()] = nullptr;
        QUrl** sigval3 = urls_arr;
        slotFunc(self, sigval1, sigval2, sigval3);
        free(urls_arr);
    });
}

void KDirOperator_ContextMenuAboutToShow(KDirOperator* self, const KFileItem* item, QMenu* menu) {
    self->contextMenuAboutToShow(*item, menu);
}

void KDirOperator_Connect_ContextMenuAboutToShow(KDirOperator* self, intptr_t slot) {
    void (*slotFunc)(KDirOperator*, KFileItem*, QMenu*) = reinterpret_cast<void (*)(KDirOperator*, KFileItem*, QMenu*)>(slot);
    KDirOperator::connect(self, &KDirOperator::contextMenuAboutToShow, [self, slotFunc](const KFileItem& item, QMenu* menu) {
        const KFileItem& item_ret = item;
        // Cast returned reference into pointer
        KFileItem* sigval1 = const_cast<KFileItem*>(&item_ret);
        QMenu* sigval2 = menu;
        slotFunc(self, sigval1, sigval2);
    });
}

void KDirOperator_CurrentIconSizeChanged(KDirOperator* self, int size) {
    self->currentIconSizeChanged(static_cast<int>(size));
}

void KDirOperator_Connect_CurrentIconSizeChanged(KDirOperator* self, intptr_t slot) {
    void (*slotFunc)(KDirOperator*, int) = reinterpret_cast<void (*)(KDirOperator*, int)>(slot);
    KDirOperator::connect(self, &KDirOperator::currentIconSizeChanged, [self, slotFunc](int size) {
        int sigval1 = size;
        slotFunc(self, sigval1);
    });
}

void KDirOperator_KeyEnterReturnPressed(KDirOperator* self) {
    self->keyEnterReturnPressed();
}

void KDirOperator_Connect_KeyEnterReturnPressed(KDirOperator* self, intptr_t slot) {
    void (*slotFunc)(KDirOperator*) = reinterpret_cast<void (*)(KDirOperator*)>(slot);
    KDirOperator::connect(self, &KDirOperator::keyEnterReturnPressed, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KDirOperator_RenamingFinished(KDirOperator* self, const libqt_list /* of QUrl* */ urls) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    self->renamingFinished(urls_QList);
}

void KDirOperator_Connect_RenamingFinished(KDirOperator* self, intptr_t slot) {
    void (*slotFunc)(KDirOperator*, QUrl**) = reinterpret_cast<void (*)(KDirOperator*, QUrl**)>(slot);
    KDirOperator::connect(self, &KDirOperator::renamingFinished, [self, slotFunc](const QList<QUrl>& urls) {
        const QList<QUrl>& urls_ret = urls;
        // Convert QList<> from C++ memory to manually-managed C memory
        QUrl** urls_arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (urls_ret.size() + 1)));
        for (qsizetype i = 0; i < urls_ret.size(); ++i) {
            urls_arr[i] = new QUrl(urls_ret[i]);
        }
        // Append sentinel value to the list
        urls_arr[urls_ret.size()] = nullptr;
        QUrl** sigval1 = urls_arr;
        slotFunc(self, sigval1);
        free(urls_arr);
    });
}

libqt_string KDirOperator_Tr2(const char* s, const char* c) {
    QString _ret = KDirOperator::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KDirOperator_Tr3(const char* s, const char* c, int n) {
    QString _ret = KDirOperator::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
int KDirOperator_QBaseMetacall(KDirOperator* self, int param1, int param2, void** param3) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_Metacall_IsBase(true);
        return vkdiroperator->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KDirOperator::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnMetacall(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_Metacall_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KDirOperator_QBaseSetShowHiddenFiles(KDirOperator* self, bool s) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SetShowHiddenFiles_IsBase(true);
        vkdiroperator->setShowHiddenFiles(s);
    } else {
        self->KDirOperator::setShowHiddenFiles(s);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSetShowHiddenFiles(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SetShowHiddenFiles_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_SetShowHiddenFiles_Callback>(slot));
    }
}

// Base class handler implementation
void KDirOperator_QBaseSetUrl(KDirOperator* self, const QUrl* url, bool clearforward) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SetUrl_IsBase(true);
        vkdiroperator->setUrl(*url, clearforward);
    } else {
        self->KDirOperator::setUrl(*url, clearforward);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSetUrl(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SetUrl_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_SetUrl_Callback>(slot));
    }
}

// Base class handler implementation
void KDirOperator_QBaseSetMode(KDirOperator* self, int m) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SetMode_IsBase(true);
        vkdiroperator->setMode(static_cast<KFile::Modes>(m));
    } else {
        self->KDirOperator::setMode(static_cast<KFile::Modes>(m));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSetMode(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SetMode_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_SetMode_Callback>(slot));
    }
}

// Base class handler implementation
void KDirOperator_QBaseSetPreviewWidget(KDirOperator* self, KPreviewWidgetBase* w) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SetPreviewWidget_IsBase(true);
        vkdiroperator->setPreviewWidget(w);
    } else {
        self->KDirOperator::setPreviewWidget(w);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSetPreviewWidget(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SetPreviewWidget_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_SetPreviewWidget_Callback>(slot));
    }
}

// Base class handler implementation
void KDirOperator_QBaseSetViewConfig(KDirOperator* self, KConfigGroup* configGroup) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SetViewConfig_IsBase(true);
        vkdiroperator->setViewConfig(*configGroup);
    } else {
        self->KDirOperator::setViewConfig(*configGroup);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSetViewConfig(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SetViewConfig_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_SetViewConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KDirOperator_QBaseReadConfig(KDirOperator* self, const KConfigGroup* configGroup) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_ReadConfig_IsBase(true);
        vkdiroperator->readConfig(*configGroup);
    } else {
        self->KDirOperator::readConfig(*configGroup);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnReadConfig(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_ReadConfig_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_ReadConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KDirOperator_QBaseWriteConfig(KDirOperator* self, KConfigGroup* configGroup) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_WriteConfig_IsBase(true);
        vkdiroperator->writeConfig(*configGroup);
    } else {
        self->KDirOperator::writeConfig(*configGroup);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnWriteConfig(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_WriteConfig_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_WriteConfig_Callback>(slot));
    }
}

// Base class handler implementation
KIO__DeleteJob* KDirOperator_QBaseDel(KDirOperator* self, const KFileItemList* items, QWidget* parent, bool ask, bool showProgress) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_Del_IsBase(true);
        return vkdiroperator->del(*items, parent, ask, showProgress);
    } else {
        return self->KDirOperator::del(*items, parent, ask, showProgress);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnDel(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_Del_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_Del_Callback>(slot));
    }
}

// Base class handler implementation
void KDirOperator_QBaseSetEnableDirHighlighting(KDirOperator* self, bool enable) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SetEnableDirHighlighting_IsBase(true);
        vkdiroperator->setEnableDirHighlighting(enable);
    } else {
        self->KDirOperator::setEnableDirHighlighting(enable);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSetEnableDirHighlighting(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SetEnableDirHighlighting_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_SetEnableDirHighlighting_Callback>(slot));
    }
}

// Base class handler implementation
void KDirOperator_QBaseSetAcceptDrops(KDirOperator* self, bool b) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SetAcceptDrops_IsBase(true);
        vkdiroperator->setAcceptDrops(b);
    } else {
        self->KDirOperator::setAcceptDrops(b);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSetAcceptDrops(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SetAcceptDrops_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_SetAcceptDrops_Callback>(slot));
    }
}

// Base class handler implementation
void KDirOperator_QBaseSetDropOptions(KDirOperator* self, int options) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SetDropOptions_IsBase(true);
        vkdiroperator->setDropOptions(static_cast<int>(options));
    } else {
        self->KDirOperator::setDropOptions(static_cast<int>(options));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSetDropOptions(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SetDropOptions_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_SetDropOptions_Callback>(slot));
    }
}

// Base class handler implementation
KIO__CopyJob* KDirOperator_QBaseTrash(KDirOperator* self, const KFileItemList* items, QWidget* parent, bool ask, bool showProgress) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_Trash_IsBase(true);
        return vkdiroperator->trash(*items, parent, ask, showProgress);
    } else {
        return self->KDirOperator::trash(*items, parent, ask, showProgress);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnTrash(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_Trash_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_Trash_Callback>(slot));
    }
}

// Base class handler implementation
QAbstractItemView* KDirOperator_QBaseCreateView(KDirOperator* self, QWidget* parent, int viewKind) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_CreateView_IsBase(true);
        return vkdiroperator->createView(parent, static_cast<KFile::FileView>(viewKind));
    } else {
        return ((VirtualKDirOperator*)self)->createView(parent, static_cast<KFile::FileView>(viewKind));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnCreateView(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_CreateView_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_CreateView_Callback>(slot));
    }
}

// Base class handler implementation
void KDirOperator_QBaseSetDirLister(KDirOperator* self, KDirLister* lister) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SetDirLister_IsBase(true);
        vkdiroperator->setDirLister(lister);
    } else {
        ((VirtualKDirOperator*)self)->setDirLister(lister);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSetDirLister(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SetDirLister_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_SetDirLister_Callback>(slot));
    }
}

// Base class handler implementation
void KDirOperator_QBaseResizeEvent(KDirOperator* self, QResizeEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_ResizeEvent_IsBase(true);
        vkdiroperator->resizeEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnResizeEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_ResizeEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_ResizeEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KDirOperator_QBaseActivatedMenu(KDirOperator* self, const KFileItem* item, const QPoint* pos) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_ActivatedMenu_IsBase(true);
        vkdiroperator->activatedMenu(*item, *pos);
    } else {
        ((VirtualKDirOperator*)self)->activatedMenu(*item, *pos);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnActivatedMenu(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_ActivatedMenu_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_ActivatedMenu_Callback>(slot));
    }
}

// Base class handler implementation
void KDirOperator_QBaseChangeEvent(KDirOperator* self, QEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_ChangeEvent_IsBase(true);
        vkdiroperator->changeEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnChangeEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_ChangeEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_ChangeEvent_Callback>(slot));
    }
}

// Base class handler implementation
bool KDirOperator_QBaseEventFilter(KDirOperator* self, QObject* watched, QEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_EventFilter_IsBase(true);
        return vkdiroperator->eventFilter(watched, event);
    } else {
        return ((VirtualKDirOperator*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnEventFilter(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_EventFilter_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_EventFilter_Callback>(slot));
    }
}

// Base class handler implementation
void KDirOperator_QBaseBack(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_Back_IsBase(true);
        vkdiroperator->back();
    } else {
        self->KDirOperator::back();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnBack(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_Back_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_Back_Callback>(slot));
    }
}

// Base class handler implementation
void KDirOperator_QBaseForward(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_Forward_IsBase(true);
        vkdiroperator->forward();
    } else {
        self->KDirOperator::forward();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnForward(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_Forward_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_Forward_Callback>(slot));
    }
}

// Base class handler implementation
void KDirOperator_QBaseHome(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_Home_IsBase(true);
        vkdiroperator->home();
    } else {
        self->KDirOperator::home();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnHome(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_Home_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_Home_Callback>(slot));
    }
}

// Base class handler implementation
void KDirOperator_QBaseCdUp(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_CdUp_IsBase(true);
        vkdiroperator->cdUp();
    } else {
        self->KDirOperator::cdUp();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnCdUp(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_CdUp_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_CdUp_Callback>(slot));
    }
}

// Base class handler implementation
void KDirOperator_QBaseRereadDir(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_RereadDir_IsBase(true);
        vkdiroperator->rereadDir();
    } else {
        self->KDirOperator::rereadDir();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnRereadDir(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_RereadDir_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_RereadDir_Callback>(slot));
    }
}

// Base class handler implementation
void KDirOperator_QBaseMkdir(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_Mkdir_IsBase(true);
        vkdiroperator->mkdir();
    } else {
        self->KDirOperator::mkdir();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnMkdir(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_Mkdir_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_Mkdir_Callback>(slot));
    }
}

// Base class handler implementation
void KDirOperator_QBaseDeleteSelected(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_DeleteSelected_IsBase(true);
        vkdiroperator->deleteSelected();
    } else {
        self->KDirOperator::deleteSelected();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnDeleteSelected(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_DeleteSelected_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_DeleteSelected_Callback>(slot));
    }
}

// Base class handler implementation
void KDirOperator_QBaseTrashSelected(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_TrashSelected_IsBase(true);
        vkdiroperator->trashSelected();
    } else {
        self->KDirOperator::trashSelected();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnTrashSelected(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_TrashSelected_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_TrashSelected_Callback>(slot));
    }
}

// Base class handler implementation
void KDirOperator_QBaseSelectDir(KDirOperator* self, const KFileItem* item) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SelectDir_IsBase(true);
        vkdiroperator->selectDir(*item);
    } else {
        ((VirtualKDirOperator*)self)->selectDir(*item);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSelectDir(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SelectDir_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_SelectDir_Callback>(slot));
    }
}

// Derived class handler implementation
int KDirOperator_DevType(const KDirOperator* self) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        return vkdiroperator->devType();
    } else {
        return self->KDirOperator::devType();
    }
}

// Base class handler implementation
int KDirOperator_QBaseDevType(const KDirOperator* self) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_DevType_IsBase(true);
        return vkdiroperator->devType();
    } else {
        return self->KDirOperator::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnDevType(const KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_DevType_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_SetVisible(KDirOperator* self, bool visible) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setVisible(visible);
    } else {
        self->KDirOperator::setVisible(visible);
    }
}

// Base class handler implementation
void KDirOperator_QBaseSetVisible(KDirOperator* self, bool visible) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SetVisible_IsBase(true);
        vkdiroperator->setVisible(visible);
    } else {
        self->KDirOperator::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSetVisible(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SetVisible_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KDirOperator_SizeHint(const KDirOperator* self) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        return new QSize(vkdiroperator->sizeHint());
    } else {
        return new QSize(((VirtualKDirOperator*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KDirOperator_QBaseSizeHint(const KDirOperator* self) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SizeHint_IsBase(true);
        return new QSize(vkdiroperator->sizeHint());
    } else {
        return new QSize(((VirtualKDirOperator*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSizeHint(const KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SizeHint_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KDirOperator_MinimumSizeHint(const KDirOperator* self) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        return new QSize(vkdiroperator->minimumSizeHint());
    } else {
        return new QSize(((VirtualKDirOperator*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KDirOperator_QBaseMinimumSizeHint(const KDirOperator* self) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_MinimumSizeHint_IsBase(true);
        return new QSize(vkdiroperator->minimumSizeHint());
    } else {
        return new QSize(((VirtualKDirOperator*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnMinimumSizeHint(const KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_MinimumSizeHint_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KDirOperator_HeightForWidth(const KDirOperator* self, int param1) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        return vkdiroperator->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KDirOperator::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KDirOperator_QBaseHeightForWidth(const KDirOperator* self, int param1) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_HeightForWidth_IsBase(true);
        return vkdiroperator->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KDirOperator::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnHeightForWidth(const KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_HeightForWidth_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirOperator_HasHeightForWidth(const KDirOperator* self) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        return vkdiroperator->hasHeightForWidth();
    } else {
        return self->KDirOperator::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KDirOperator_QBaseHasHeightForWidth(const KDirOperator* self) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_HasHeightForWidth_IsBase(true);
        return vkdiroperator->hasHeightForWidth();
    } else {
        return self->KDirOperator::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnHasHeightForWidth(const KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_HasHeightForWidth_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KDirOperator_PaintEngine(const KDirOperator* self) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        return vkdiroperator->paintEngine();
    } else {
        return self->KDirOperator::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KDirOperator_QBasePaintEngine(const KDirOperator* self) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_PaintEngine_IsBase(true);
        return vkdiroperator->paintEngine();
    } else {
        return self->KDirOperator::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnPaintEngine(const KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_PaintEngine_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirOperator_Event(KDirOperator* self, QEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        return vkdiroperator->event(event);
    } else {
        return ((VirtualKDirOperator*)self)->event(event);
    }
}

// Base class handler implementation
bool KDirOperator_QBaseEvent(KDirOperator* self, QEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_Event_IsBase(true);
        return vkdiroperator->event(event);
    } else {
        return ((VirtualKDirOperator*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_Event_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_MousePressEvent(KDirOperator* self, QMouseEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->mousePressEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KDirOperator_QBaseMousePressEvent(KDirOperator* self, QMouseEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_MousePressEvent_IsBase(true);
        vkdiroperator->mousePressEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnMousePressEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_MousePressEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_MouseReleaseEvent(KDirOperator* self, QMouseEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->mouseReleaseEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KDirOperator_QBaseMouseReleaseEvent(KDirOperator* self, QMouseEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_MouseReleaseEvent_IsBase(true);
        vkdiroperator->mouseReleaseEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnMouseReleaseEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_MouseDoubleClickEvent(KDirOperator* self, QMouseEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KDirOperator_QBaseMouseDoubleClickEvent(KDirOperator* self, QMouseEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_MouseDoubleClickEvent_IsBase(true);
        vkdiroperator->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnMouseDoubleClickEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_MouseMoveEvent(KDirOperator* self, QMouseEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->mouseMoveEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KDirOperator_QBaseMouseMoveEvent(KDirOperator* self, QMouseEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_MouseMoveEvent_IsBase(true);
        vkdiroperator->mouseMoveEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnMouseMoveEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_MouseMoveEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_WheelEvent(KDirOperator* self, QWheelEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->wheelEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KDirOperator_QBaseWheelEvent(KDirOperator* self, QWheelEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_WheelEvent_IsBase(true);
        vkdiroperator->wheelEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnWheelEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_WheelEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_KeyPressEvent(KDirOperator* self, QKeyEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->keyPressEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KDirOperator_QBaseKeyPressEvent(KDirOperator* self, QKeyEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_KeyPressEvent_IsBase(true);
        vkdiroperator->keyPressEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnKeyPressEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_KeyPressEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_KeyReleaseEvent(KDirOperator* self, QKeyEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->keyReleaseEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KDirOperator_QBaseKeyReleaseEvent(KDirOperator* self, QKeyEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_KeyReleaseEvent_IsBase(true);
        vkdiroperator->keyReleaseEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnKeyReleaseEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_FocusInEvent(KDirOperator* self, QFocusEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->focusInEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KDirOperator_QBaseFocusInEvent(KDirOperator* self, QFocusEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_FocusInEvent_IsBase(true);
        vkdiroperator->focusInEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnFocusInEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_FocusInEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_FocusOutEvent(KDirOperator* self, QFocusEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->focusOutEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KDirOperator_QBaseFocusOutEvent(KDirOperator* self, QFocusEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_FocusOutEvent_IsBase(true);
        vkdiroperator->focusOutEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnFocusOutEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_FocusOutEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_EnterEvent(KDirOperator* self, QEnterEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->enterEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KDirOperator_QBaseEnterEvent(KDirOperator* self, QEnterEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_EnterEvent_IsBase(true);
        vkdiroperator->enterEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnEnterEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_EnterEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_LeaveEvent(KDirOperator* self, QEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->leaveEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KDirOperator_QBaseLeaveEvent(KDirOperator* self, QEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_LeaveEvent_IsBase(true);
        vkdiroperator->leaveEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnLeaveEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_LeaveEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_PaintEvent(KDirOperator* self, QPaintEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->paintEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KDirOperator_QBasePaintEvent(KDirOperator* self, QPaintEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_PaintEvent_IsBase(true);
        vkdiroperator->paintEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnPaintEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_PaintEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_MoveEvent(KDirOperator* self, QMoveEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->moveEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KDirOperator_QBaseMoveEvent(KDirOperator* self, QMoveEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_MoveEvent_IsBase(true);
        vkdiroperator->moveEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnMoveEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_MoveEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_CloseEvent(KDirOperator* self, QCloseEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->closeEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KDirOperator_QBaseCloseEvent(KDirOperator* self, QCloseEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_CloseEvent_IsBase(true);
        vkdiroperator->closeEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnCloseEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_CloseEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_ContextMenuEvent(KDirOperator* self, QContextMenuEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->contextMenuEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KDirOperator_QBaseContextMenuEvent(KDirOperator* self, QContextMenuEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_ContextMenuEvent_IsBase(true);
        vkdiroperator->contextMenuEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnContextMenuEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_ContextMenuEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_TabletEvent(KDirOperator* self, QTabletEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->tabletEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KDirOperator_QBaseTabletEvent(KDirOperator* self, QTabletEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_TabletEvent_IsBase(true);
        vkdiroperator->tabletEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnTabletEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_TabletEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_ActionEvent(KDirOperator* self, QActionEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->actionEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KDirOperator_QBaseActionEvent(KDirOperator* self, QActionEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_ActionEvent_IsBase(true);
        vkdiroperator->actionEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnActionEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_ActionEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_DragEnterEvent(KDirOperator* self, QDragEnterEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->dragEnterEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KDirOperator_QBaseDragEnterEvent(KDirOperator* self, QDragEnterEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_DragEnterEvent_IsBase(true);
        vkdiroperator->dragEnterEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnDragEnterEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_DragEnterEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_DragMoveEvent(KDirOperator* self, QDragMoveEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->dragMoveEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KDirOperator_QBaseDragMoveEvent(KDirOperator* self, QDragMoveEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_DragMoveEvent_IsBase(true);
        vkdiroperator->dragMoveEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnDragMoveEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_DragMoveEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_DragLeaveEvent(KDirOperator* self, QDragLeaveEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->dragLeaveEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KDirOperator_QBaseDragLeaveEvent(KDirOperator* self, QDragLeaveEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_DragLeaveEvent_IsBase(true);
        vkdiroperator->dragLeaveEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnDragLeaveEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_DragLeaveEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_DropEvent(KDirOperator* self, QDropEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->dropEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KDirOperator_QBaseDropEvent(KDirOperator* self, QDropEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_DropEvent_IsBase(true);
        vkdiroperator->dropEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnDropEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_DropEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_ShowEvent(KDirOperator* self, QShowEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->showEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KDirOperator_QBaseShowEvent(KDirOperator* self, QShowEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_ShowEvent_IsBase(true);
        vkdiroperator->showEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnShowEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_ShowEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_HideEvent(KDirOperator* self, QHideEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->hideEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KDirOperator_QBaseHideEvent(KDirOperator* self, QHideEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_HideEvent_IsBase(true);
        vkdiroperator->hideEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnHideEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_HideEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirOperator_NativeEvent(KDirOperator* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        return vkdiroperator->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKDirOperator*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KDirOperator_QBaseNativeEvent(KDirOperator* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_NativeEvent_IsBase(true);
        return vkdiroperator->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKDirOperator*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnNativeEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_NativeEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KDirOperator_Metric(const KDirOperator* self, int param1) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        return vkdiroperator->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKDirOperator*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KDirOperator_QBaseMetric(const KDirOperator* self, int param1) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_Metric_IsBase(true);
        return vkdiroperator->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKDirOperator*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnMetric(const KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_Metric_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_InitPainter(const KDirOperator* self, QPainter* painter) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->initPainter(painter);
    } else {
        ((VirtualKDirOperator*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KDirOperator_QBaseInitPainter(const KDirOperator* self, QPainter* painter) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_InitPainter_IsBase(true);
        vkdiroperator->initPainter(painter);
    } else {
        ((VirtualKDirOperator*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnInitPainter(const KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_InitPainter_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KDirOperator_Redirected(const KDirOperator* self, QPoint* offset) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        return vkdiroperator->redirected(offset);
    } else {
        return ((VirtualKDirOperator*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KDirOperator_QBaseRedirected(const KDirOperator* self, QPoint* offset) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_Redirected_IsBase(true);
        return vkdiroperator->redirected(offset);
    } else {
        return ((VirtualKDirOperator*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnRedirected(const KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_Redirected_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KDirOperator_SharedPainter(const KDirOperator* self) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        return vkdiroperator->sharedPainter();
    } else {
        return ((VirtualKDirOperator*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KDirOperator_QBaseSharedPainter(const KDirOperator* self) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SharedPainter_IsBase(true);
        return vkdiroperator->sharedPainter();
    } else {
        return ((VirtualKDirOperator*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSharedPainter(const KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SharedPainter_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_InputMethodEvent(KDirOperator* self, QInputMethodEvent* param1) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->inputMethodEvent(param1);
    } else {
        ((VirtualKDirOperator*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KDirOperator_QBaseInputMethodEvent(KDirOperator* self, QInputMethodEvent* param1) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_InputMethodEvent_IsBase(true);
        vkdiroperator->inputMethodEvent(param1);
    } else {
        ((VirtualKDirOperator*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnInputMethodEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_InputMethodEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KDirOperator_InputMethodQuery(const KDirOperator* self, int param1) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        return new QVariant(vkdiroperator->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKDirOperator*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KDirOperator_QBaseInputMethodQuery(const KDirOperator* self, int param1) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_InputMethodQuery_IsBase(true);
        return new QVariant(vkdiroperator->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKDirOperator*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnInputMethodQuery(const KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_InputMethodQuery_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirOperator_FocusNextPrevChild(KDirOperator* self, bool next) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        return vkdiroperator->focusNextPrevChild(next);
    } else {
        return ((VirtualKDirOperator*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KDirOperator_QBaseFocusNextPrevChild(KDirOperator* self, bool next) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_FocusNextPrevChild_IsBase(true);
        return vkdiroperator->focusNextPrevChild(next);
    } else {
        return ((VirtualKDirOperator*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnFocusNextPrevChild(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_TimerEvent(KDirOperator* self, QTimerEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->timerEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KDirOperator_QBaseTimerEvent(KDirOperator* self, QTimerEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_TimerEvent_IsBase(true);
        vkdiroperator->timerEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnTimerEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_TimerEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_ChildEvent(KDirOperator* self, QChildEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->childEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KDirOperator_QBaseChildEvent(KDirOperator* self, QChildEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_ChildEvent_IsBase(true);
        vkdiroperator->childEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnChildEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_ChildEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_CustomEvent(KDirOperator* self, QEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->customEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KDirOperator_QBaseCustomEvent(KDirOperator* self, QEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_CustomEvent_IsBase(true);
        vkdiroperator->customEvent(event);
    } else {
        ((VirtualKDirOperator*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnCustomEvent(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_CustomEvent_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_ConnectNotify(KDirOperator* self, const QMetaMethod* signal) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->connectNotify(*signal);
    } else {
        ((VirtualKDirOperator*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KDirOperator_QBaseConnectNotify(KDirOperator* self, const QMetaMethod* signal) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_ConnectNotify_IsBase(true);
        vkdiroperator->connectNotify(*signal);
    } else {
        ((VirtualKDirOperator*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnConnectNotify(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_ConnectNotify_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_DisconnectNotify(KDirOperator* self, const QMetaMethod* signal) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->disconnectNotify(*signal);
    } else {
        ((VirtualKDirOperator*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KDirOperator_QBaseDisconnectNotify(KDirOperator* self, const QMetaMethod* signal) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_DisconnectNotify_IsBase(true);
        vkdiroperator->disconnectNotify(*signal);
    } else {
        ((VirtualKDirOperator*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnDisconnectNotify(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_DisconnectNotify_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_SetupActions(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setupActions();
    } else {
        ((VirtualKDirOperator*)self)->setupActions();
    }
}

// Base class handler implementation
void KDirOperator_QBaseSetupActions(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SetupActions_IsBase(true);
        vkdiroperator->setupActions();
    } else {
        ((VirtualKDirOperator*)self)->setupActions();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSetupActions(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SetupActions_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_SetupActions_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_UpdateSortActions(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->updateSortActions();
    } else {
        ((VirtualKDirOperator*)self)->updateSortActions();
    }
}

// Base class handler implementation
void KDirOperator_QBaseUpdateSortActions(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_UpdateSortActions_IsBase(true);
        vkdiroperator->updateSortActions();
    } else {
        ((VirtualKDirOperator*)self)->updateSortActions();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnUpdateSortActions(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_UpdateSortActions_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_UpdateSortActions_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_UpdateViewActions(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->updateViewActions();
    } else {
        ((VirtualKDirOperator*)self)->updateViewActions();
    }
}

// Base class handler implementation
void KDirOperator_QBaseUpdateViewActions(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_UpdateViewActions_IsBase(true);
        vkdiroperator->updateViewActions();
    } else {
        ((VirtualKDirOperator*)self)->updateViewActions();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnUpdateViewActions(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_UpdateViewActions_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_UpdateViewActions_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_SetupMenu2(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setupMenu();
    } else {
        ((VirtualKDirOperator*)self)->setupMenu();
    }
}

// Base class handler implementation
void KDirOperator_QBaseSetupMenu2(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SetupMenu2_IsBase(true);
        vkdiroperator->setupMenu();
    } else {
        ((VirtualKDirOperator*)self)->setupMenu();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSetupMenu2(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SetupMenu2_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_SetupMenu2_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_PrepareCompletionObjects(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->prepareCompletionObjects();
    } else {
        ((VirtualKDirOperator*)self)->prepareCompletionObjects();
    }
}

// Base class handler implementation
void KDirOperator_QBasePrepareCompletionObjects(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_PrepareCompletionObjects_IsBase(true);
        vkdiroperator->prepareCompletionObjects();
    } else {
        ((VirtualKDirOperator*)self)->prepareCompletionObjects();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnPrepareCompletionObjects(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_PrepareCompletionObjects_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_PrepareCompletionObjects_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirOperator_CheckPreviewSupport(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        return vkdiroperator->checkPreviewSupport();
    } else {
        return ((VirtualKDirOperator*)self)->checkPreviewSupport();
    }
}

// Base class handler implementation
bool KDirOperator_QBaseCheckPreviewSupport(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_CheckPreviewSupport_IsBase(true);
        return vkdiroperator->checkPreviewSupport();
    } else {
        return ((VirtualKDirOperator*)self)->checkPreviewSupport();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnCheckPreviewSupport(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_CheckPreviewSupport_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_CheckPreviewSupport_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_ResetCursor(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->resetCursor();
    } else {
        ((VirtualKDirOperator*)self)->resetCursor();
    }
}

// Base class handler implementation
void KDirOperator_QBaseResetCursor(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_ResetCursor_IsBase(true);
        vkdiroperator->resetCursor();
    } else {
        ((VirtualKDirOperator*)self)->resetCursor();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnResetCursor(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_ResetCursor_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_ResetCursor_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_PathChanged(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->pathChanged();
    } else {
        ((VirtualKDirOperator*)self)->pathChanged();
    }
}

// Base class handler implementation
void KDirOperator_QBasePathChanged(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_PathChanged_IsBase(true);
        vkdiroperator->pathChanged();
    } else {
        ((VirtualKDirOperator*)self)->pathChanged();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnPathChanged(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_PathChanged_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_PathChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_SelectFile(KDirOperator* self, const KFileItem* item) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->selectFile(*item);
    } else {
        ((VirtualKDirOperator*)self)->selectFile(*item);
    }
}

// Base class handler implementation
void KDirOperator_QBaseSelectFile(KDirOperator* self, const KFileItem* item) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SelectFile_IsBase(true);
        vkdiroperator->selectFile(*item);
    } else {
        ((VirtualKDirOperator*)self)->selectFile(*item);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSelectFile(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SelectFile_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_SelectFile_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_HighlightFile(KDirOperator* self, const KFileItem* item) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->highlightFile(*item);
    } else {
        ((VirtualKDirOperator*)self)->highlightFile(*item);
    }
}

// Base class handler implementation
void KDirOperator_QBaseHighlightFile(KDirOperator* self, const KFileItem* item) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_HighlightFile_IsBase(true);
        vkdiroperator->highlightFile(*item);
    } else {
        ((VirtualKDirOperator*)self)->highlightFile(*item);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnHighlightFile(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_HighlightFile_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_HighlightFile_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_SortByName(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->sortByName();
    } else {
        ((VirtualKDirOperator*)self)->sortByName();
    }
}

// Base class handler implementation
void KDirOperator_QBaseSortByName(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SortByName_IsBase(true);
        vkdiroperator->sortByName();
    } else {
        ((VirtualKDirOperator*)self)->sortByName();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSortByName(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SortByName_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_SortByName_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_SortBySize(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->sortBySize();
    } else {
        ((VirtualKDirOperator*)self)->sortBySize();
    }
}

// Base class handler implementation
void KDirOperator_QBaseSortBySize(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SortBySize_IsBase(true);
        vkdiroperator->sortBySize();
    } else {
        ((VirtualKDirOperator*)self)->sortBySize();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSortBySize(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SortBySize_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_SortBySize_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_SortByDate(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->sortByDate();
    } else {
        ((VirtualKDirOperator*)self)->sortByDate();
    }
}

// Base class handler implementation
void KDirOperator_QBaseSortByDate(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SortByDate_IsBase(true);
        vkdiroperator->sortByDate();
    } else {
        ((VirtualKDirOperator*)self)->sortByDate();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSortByDate(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SortByDate_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_SortByDate_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_SortByType(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->sortByType();
    } else {
        ((VirtualKDirOperator*)self)->sortByType();
    }
}

// Base class handler implementation
void KDirOperator_QBaseSortByType(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SortByType_IsBase(true);
        vkdiroperator->sortByType();
    } else {
        ((VirtualKDirOperator*)self)->sortByType();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSortByType(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SortByType_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_SortByType_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_SortReversed(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->sortReversed();
    } else {
        ((VirtualKDirOperator*)self)->sortReversed();
    }
}

// Base class handler implementation
void KDirOperator_QBaseSortReversed(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SortReversed_IsBase(true);
        vkdiroperator->sortReversed();
    } else {
        ((VirtualKDirOperator*)self)->sortReversed();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSortReversed(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SortReversed_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_SortReversed_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_ToggleDirsFirst(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->toggleDirsFirst();
    } else {
        ((VirtualKDirOperator*)self)->toggleDirsFirst();
    }
}

// Base class handler implementation
void KDirOperator_QBaseToggleDirsFirst(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_ToggleDirsFirst_IsBase(true);
        vkdiroperator->toggleDirsFirst();
    } else {
        ((VirtualKDirOperator*)self)->toggleDirsFirst();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnToggleDirsFirst(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_ToggleDirsFirst_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_ToggleDirsFirst_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_ToggleIgnoreCase(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->toggleIgnoreCase();
    } else {
        ((VirtualKDirOperator*)self)->toggleIgnoreCase();
    }
}

// Base class handler implementation
void KDirOperator_QBaseToggleIgnoreCase(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_ToggleIgnoreCase_IsBase(true);
        vkdiroperator->toggleIgnoreCase();
    } else {
        ((VirtualKDirOperator*)self)->toggleIgnoreCase();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnToggleIgnoreCase(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_ToggleIgnoreCase_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_ToggleIgnoreCase_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_SlotCompletionMatch(KDirOperator* self, const libqt_string match) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    QString match_QString = QString::fromUtf8(match.data, match.len);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->slotCompletionMatch(match_QString);
    } else {
        ((VirtualKDirOperator*)self)->slotCompletionMatch(match_QString);
    }
}

// Base class handler implementation
void KDirOperator_QBaseSlotCompletionMatch(KDirOperator* self, const libqt_string match) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    QString match_QString = QString::fromUtf8(match.data, match.len);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SlotCompletionMatch_IsBase(true);
        vkdiroperator->slotCompletionMatch(match_QString);
    } else {
        ((VirtualKDirOperator*)self)->slotCompletionMatch(match_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSlotCompletionMatch(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SlotCompletionMatch_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_SlotCompletionMatch_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_UpdateMicroFocus(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->updateMicroFocus();
    } else {
        ((VirtualKDirOperator*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KDirOperator_QBaseUpdateMicroFocus(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_UpdateMicroFocus_IsBase(true);
        vkdiroperator->updateMicroFocus();
    } else {
        ((VirtualKDirOperator*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnUpdateMicroFocus(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_Create(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->create();
    } else {
        ((VirtualKDirOperator*)self)->create();
    }
}

// Base class handler implementation
void KDirOperator_QBaseCreate(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_Create_IsBase(true);
        vkdiroperator->create();
    } else {
        ((VirtualKDirOperator*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnCreate(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_Create_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirOperator_Destroy(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->destroy();
    } else {
        ((VirtualKDirOperator*)self)->destroy();
    }
}

// Base class handler implementation
void KDirOperator_QBaseDestroy(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_Destroy_IsBase(true);
        vkdiroperator->destroy();
    } else {
        ((VirtualKDirOperator*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnDestroy(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_Destroy_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirOperator_FocusNextChild(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        return vkdiroperator->focusNextChild();
    } else {
        return ((VirtualKDirOperator*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KDirOperator_QBaseFocusNextChild(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_FocusNextChild_IsBase(true);
        return vkdiroperator->focusNextChild();
    } else {
        return ((VirtualKDirOperator*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnFocusNextChild(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_FocusNextChild_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirOperator_FocusPreviousChild(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        return vkdiroperator->focusPreviousChild();
    } else {
        return ((VirtualKDirOperator*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KDirOperator_QBaseFocusPreviousChild(KDirOperator* self) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_FocusPreviousChild_IsBase(true);
        return vkdiroperator->focusPreviousChild();
    } else {
        return ((VirtualKDirOperator*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnFocusPreviousChild(KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_FocusPreviousChild_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KDirOperator_Sender(const KDirOperator* self) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        return vkdiroperator->sender();
    } else {
        return ((VirtualKDirOperator*)self)->sender();
    }
}

// Base class handler implementation
QObject* KDirOperator_QBaseSender(const KDirOperator* self) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_Sender_IsBase(true);
        return vkdiroperator->sender();
    } else {
        return ((VirtualKDirOperator*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSender(const KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_Sender_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KDirOperator_SenderSignalIndex(const KDirOperator* self) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        return vkdiroperator->senderSignalIndex();
    } else {
        return ((VirtualKDirOperator*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KDirOperator_QBaseSenderSignalIndex(const KDirOperator* self) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SenderSignalIndex_IsBase(true);
        return vkdiroperator->senderSignalIndex();
    } else {
        return ((VirtualKDirOperator*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSenderSignalIndex(const KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_SenderSignalIndex_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KDirOperator_Receivers(const KDirOperator* self, const char* signal) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        return vkdiroperator->receivers(signal);
    } else {
        return ((VirtualKDirOperator*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KDirOperator_QBaseReceivers(const KDirOperator* self, const char* signal) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_Receivers_IsBase(true);
        return vkdiroperator->receivers(signal);
    } else {
        return ((VirtualKDirOperator*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnReceivers(const KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_Receivers_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirOperator_IsSignalConnected(const KDirOperator* self, const QMetaMethod* signal) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        return vkdiroperator->isSignalConnected(*signal);
    } else {
        return ((VirtualKDirOperator*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KDirOperator_QBaseIsSignalConnected(const KDirOperator* self, const QMetaMethod* signal) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_IsSignalConnected_IsBase(true);
        return vkdiroperator->isSignalConnected(*signal);
    } else {
        return ((VirtualKDirOperator*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnIsSignalConnected(const KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_IsSignalConnected_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KDirOperator_GetDecodedMetricF(const KDirOperator* self, int metricA, int metricB) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        return vkdiroperator->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKDirOperator*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KDirOperator_QBaseGetDecodedMetricF(const KDirOperator* self, int metricA, int metricB) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_GetDecodedMetricF_IsBase(true);
        return vkdiroperator->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKDirOperator*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnGetDecodedMetricF(const KDirOperator* self, intptr_t slot) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator && vkdiroperator->isVirtualKDirOperator) {
        vkdiroperator->setKDirOperator_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKDirOperator::KDirOperator_GetDecodedMetricF_Callback>(slot));
    }
}

void KDirOperator_Delete(KDirOperator* self) {
    delete self;
}
