#include <KCompletion>
#include <KConfigGroup>
#include <KDirLister>
#include <KDirOperator>
#include <KFileItem>
#include <KFilePreviewGenerator>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__CopyJob
#include <KIO/DeleteJob>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KDirOperator_Tr(const char* s) {
    auto _ret = KDirOperator::tr(s);
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
    self->setShowHiddenFiles(s);
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
    auto _ret = self->nameFilter();
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
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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
    self->setUrl(*url, clearforward);
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
    self->setSorting(static_cast<QDir::SortFlags>(sorting));
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
    self->setMode(static_cast<KFile::Modes>(m));
}

int KDirOperator_Mode(const KDirOperator* self) {
    return static_cast<int>(self->mode());
}

void KDirOperator_SetPreviewWidget(KDirOperator* self, KPreviewWidgetBase* w) {
    self->setPreviewWidget(w);
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
    QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KDirOperator_SetViewConfig(KDirOperator* self, KConfigGroup* configGroup) {
    self->setViewConfig(*configGroup);
}

KConfigGroup* KDirOperator_ViewConfigGroup(const KDirOperator* self) {
    return self->viewConfigGroup();
}

void KDirOperator_ReadConfig(KDirOperator* self, const KConfigGroup* configGroup) {
    self->readConfig(*configGroup);
}

void KDirOperator_WriteConfig(KDirOperator* self, KConfigGroup* configGroup) {
    self->writeConfig(*configGroup);
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
    return self->del(*items, parent, ask, showProgress);
}

void KDirOperator_ClearHistory(KDirOperator* self) {
    self->clearHistory();
}

void KDirOperator_SetEnableDirHighlighting(KDirOperator* self, bool enable) {
    self->setEnableDirHighlighting(enable);
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
    self->setAcceptDrops(b);
}

void KDirOperator_SetDropOptions(KDirOperator* self, int options) {
    self->setDropOptions(static_cast<int>(options));
}

KIO__CopyJob* KDirOperator_Trash(KDirOperator* self, const KFileItemList* items, QWidget* parent, bool ask, bool showProgress) {
    return self->trash(*items, parent, ask, showProgress);
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
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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
    if (vkdiroperator) {
        return vkdiroperator->createView(parent, static_cast<KFile::FileView>(viewKind));
    }
    qFatal("Error: Protected method KDirOperator::createView called without a directly constructed type");
}

void KDirOperator_SetDirLister(KDirOperator* self, KDirLister* lister) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->setDirLister(lister);
    }
}

void KDirOperator_ResizeEvent(KDirOperator* self, QResizeEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->resizeEvent(event);
    }
}

void KDirOperator_ActivatedMenu(KDirOperator* self, const KFileItem* item, const QPoint* pos) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->activatedMenu(*item, *pos);
    }
}

void KDirOperator_ChangeEvent(KDirOperator* self, QEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->changeEvent(event);
    }
}

bool KDirOperator_EventFilter(KDirOperator* self, QObject* watched, QEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        return vkdiroperator->eventFilter(watched, event);
    }
    qFatal("Error: Protected method KDirOperator::eventFilter called without a directly constructed type");
}

void KDirOperator_Back(KDirOperator* self) {
    self->back();
}

void KDirOperator_Forward(KDirOperator* self) {
    self->forward();
}

void KDirOperator_Home(KDirOperator* self) {
    self->home();
}

void KDirOperator_CdUp(KDirOperator* self) {
    self->cdUp();
}

void KDirOperator_UpdateDir(KDirOperator* self) {
    self->updateDir();
}

void KDirOperator_RereadDir(KDirOperator* self) {
    self->rereadDir();
}

void KDirOperator_Mkdir(KDirOperator* self) {
    self->mkdir();
}

void KDirOperator_DeleteSelected(KDirOperator* self) {
    self->deleteSelected();
}

void KDirOperator_UpdateSelectionDependentActions(KDirOperator* self) {
    self->updateSelectionDependentActions();
}

libqt_string KDirOperator_MakeCompletion(KDirOperator* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    auto _ret = self->makeCompletion(param1_QString);
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
    auto _ret = self->makeDirCompletion(param1_QString);
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
    self->trashSelected();
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
    if (vkdiroperator) {
        vkdiroperator->selectDir(*item);
    }
}

void KDirOperator_UrlEntered(KDirOperator* self, const QUrl* param1) {
    self->urlEntered(*param1);
}

void KDirOperator_Connect_UrlEntered(KDirOperator* self, intptr_t slot) {
    void (*slotFunc)(KDirOperator*, QUrl*) = reinterpret_cast<void (*)(KDirOperator*, QUrl*)>(slot);
    KDirOperator::connect(self,
                          static_cast<void (KDirOperator::*)(const QUrl&)>(&KDirOperator::urlEntered),
                          [self, slotFunc](const QUrl& param1) {
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
    KDirOperator::connect(self,
                          static_cast<void (KDirOperator::*)(int, int)>(&KDirOperator::updateInformation),
                          [self, slotFunc](int files, int dirs) {
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
    KDirOperator::connect(self,
                          static_cast<void (KDirOperator::*)(const QString&)>(&KDirOperator::completion),
                          [self, slotFunc](const QString& param1) {
                              const auto param1_ret = param1;
                              // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                              QByteArray param1_b = param1_ret.toUtf8();
                              auto param1_str_len = param1_b.length();
                              const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
                              memcpy((void*)param1_str, param1_b.data(), param1_str_len);
                              ((char*)param1_str)[param1_str_len] = '\0';
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
    KDirOperator::connect(self,
                          static_cast<void (KDirOperator::*)()>(&KDirOperator::finishedLoading),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

void KDirOperator_ViewChanged(KDirOperator* self, QAbstractItemView* newView) {
    self->viewChanged(newView);
}

void KDirOperator_Connect_ViewChanged(KDirOperator* self, intptr_t slot) {
    void (*slotFunc)(KDirOperator*, QAbstractItemView*) = reinterpret_cast<void (*)(KDirOperator*, QAbstractItemView*)>(slot);
    KDirOperator::connect(self,
                          static_cast<void (KDirOperator::*)(QAbstractItemView*)>(&KDirOperator::viewChanged),
                          [self, slotFunc](QAbstractItemView* newView) {
                              QAbstractItemView* sigval1 = newView;
                              slotFunc(self, sigval1);
                          });
}

void KDirOperator_FileHighlighted(KDirOperator* self, const KFileItem* item) {
    self->fileHighlighted(*item);
}

void KDirOperator_Connect_FileHighlighted(KDirOperator* self, intptr_t slot) {
    void (*slotFunc)(KDirOperator*, KFileItem*) = reinterpret_cast<void (*)(KDirOperator*, KFileItem*)>(slot);
    KDirOperator::connect(self,
                          static_cast<void (KDirOperator::*)(const KFileItem&)>(&KDirOperator::fileHighlighted),
                          [self, slotFunc](const KFileItem& item) {
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
    KDirOperator::connect(self,
                          static_cast<void (KDirOperator::*)(const KFileItem&)>(&KDirOperator::dirActivated),
                          [self, slotFunc](const KFileItem& item) {
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
    KDirOperator::connect(self,
                          static_cast<void (KDirOperator::*)(const KFileItem&)>(&KDirOperator::fileSelected),
                          [self, slotFunc](const KFileItem& item) {
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
    void (*slotFunc)(KDirOperator*, KFileItem*, QDropEvent*, libqt_list /* of QUrl* */) = reinterpret_cast<void (*)(KDirOperator*, KFileItem*, QDropEvent*, libqt_list /* of QUrl* */)>(slot);
    KDirOperator::connect(self,
                          static_cast<void (KDirOperator::*)(const KFileItem&, QDropEvent*, const QList<QUrl>&)>(&KDirOperator::dropped),
                          [self, slotFunc](const KFileItem& item, QDropEvent* event, const QList<QUrl>& urls) {
                              const KFileItem& item_ret = item;
                              // Cast returned reference into pointer
                              KFileItem* sigval1 = const_cast<KFileItem*>(&item_ret);
                              QDropEvent* sigval2 = event;
                              const QList<QUrl>& urls_ret = urls;
                              // Convert QList<> from C++ memory to manually-managed C memory
                              QUrl** urls_arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (urls_ret.size())));
                              for (qsizetype i = 0; i < urls_ret.size(); ++i) {
                                  urls_arr[i] = new QUrl(urls_ret[i]);
                              }
                              libqt_list urls_out;
                              urls_out.len = urls_ret.size();
                              urls_out.data = static_cast<void*>(urls_arr);
                              libqt_list /* of QUrl* */ sigval3 = urls_out;
                              slotFunc(self, sigval1, sigval2, sigval3);
                              free(urls_arr);
                          });
}

void KDirOperator_ContextMenuAboutToShow(KDirOperator* self, const KFileItem* item, QMenu* menu) {
    self->contextMenuAboutToShow(*item, menu);
}

void KDirOperator_Connect_ContextMenuAboutToShow(KDirOperator* self, intptr_t slot) {
    void (*slotFunc)(KDirOperator*, KFileItem*, QMenu*) = reinterpret_cast<void (*)(KDirOperator*, KFileItem*, QMenu*)>(slot);
    KDirOperator::connect(self,
                          static_cast<void (KDirOperator::*)(const KFileItem&, QMenu*)>(&KDirOperator::contextMenuAboutToShow),
                          [self, slotFunc](const KFileItem& item, QMenu* menu) {
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
    KDirOperator::connect(self,
                          static_cast<void (KDirOperator::*)(int)>(&KDirOperator::currentIconSizeChanged),
                          [self, slotFunc](int size) {
                              int sigval1 = size;
                              slotFunc(self, sigval1);
                          });
}

void KDirOperator_KeyEnterReturnPressed(KDirOperator* self) {
    self->keyEnterReturnPressed();
}

void KDirOperator_Connect_KeyEnterReturnPressed(KDirOperator* self, intptr_t slot) {
    void (*slotFunc)(KDirOperator*) = reinterpret_cast<void (*)(KDirOperator*)>(slot);
    KDirOperator::connect(self,
                          static_cast<void (KDirOperator::*)()>(&KDirOperator::keyEnterReturnPressed),
                          [self, slotFunc]() {
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
    void (*slotFunc)(KDirOperator*, libqt_list /* of QUrl* */) = reinterpret_cast<void (*)(KDirOperator*, libqt_list /* of QUrl* */)>(slot);
    KDirOperator::connect(self,
                          static_cast<void (KDirOperator::*)(const QList<QUrl>&)>(&KDirOperator::renamingFinished),
                          [self, slotFunc](const QList<QUrl>& urls) {
                              const QList<QUrl>& urls_ret = urls;
                              // Convert QList<> from C++ memory to manually-managed C memory
                              QUrl** urls_arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (urls_ret.size())));
                              for (qsizetype i = 0; i < urls_ret.size(); ++i) {
                                  urls_arr[i] = new QUrl(urls_ret[i]);
                              }
                              libqt_list urls_out;
                              urls_out.len = urls_ret.size();
                              urls_out.data = static_cast<void*>(urls_arr);
                              libqt_list /* of QUrl* */ sigval1 = urls_out;
                              slotFunc(self, sigval1);
                              free(urls_arr);
                          });
}

libqt_string KDirOperator_Tr2(const char* s, const char* c) {
    auto _ret = KDirOperator::tr(s, c);
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
    auto _ret = KDirOperator::tr(s, c, static_cast<int>(n));
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
QMetaObject* KDirOperator_SuperMetaObject(const KDirOperator* self) {
    return (QMetaObject*)self->KDirOperator::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnMetaObject(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self)))
        vkdiroperator->kdiroperator_metaobject_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KDirOperator_SuperMetacast(KDirOperator* self, const char* param1) {
    return self->KDirOperator::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnMetacast(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_metacast_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_Metacast_Callback>(slot);
}

// Base class handler implementation
int KDirOperator_SuperMetacall(KDirOperator* self, int param1, int param2, void** param3) {
    return self->KDirOperator::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnMetacall(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_metacall_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_Metacall_Callback>(slot);
}

// Base class handler implementation
void KDirOperator_SuperSetShowHiddenFiles(KDirOperator* self, bool s) {
    self->KDirOperator::setShowHiddenFiles(s);
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSetShowHiddenFiles(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_setshowhiddenfiles_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_SetShowHiddenFiles_Callback>(slot);
}

// Base class handler implementation
void KDirOperator_SuperSetUrl(KDirOperator* self, const QUrl* url, bool clearforward) {
    self->KDirOperator::setUrl(*url, clearforward);
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSetUrl(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_seturl_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_SetUrl_Callback>(slot);
}

// Base class handler implementation
void KDirOperator_SuperSetMode(KDirOperator* self, int m) {
    self->KDirOperator::setMode(static_cast<KFile::Modes>(m));
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSetMode(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_setmode_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_SetMode_Callback>(slot);
}

// Base class handler implementation
void KDirOperator_SuperSetPreviewWidget(KDirOperator* self, KPreviewWidgetBase* w) {
    self->KDirOperator::setPreviewWidget(w);
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSetPreviewWidget(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_setpreviewwidget_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_SetPreviewWidget_Callback>(slot);
}

// Base class handler implementation
void KDirOperator_SuperSetViewConfig(KDirOperator* self, KConfigGroup* configGroup) {
    self->KDirOperator::setViewConfig(*configGroup);
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSetViewConfig(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_setviewconfig_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_SetViewConfig_Callback>(slot);
}

// Base class handler implementation
void KDirOperator_SuperReadConfig(KDirOperator* self, const KConfigGroup* configGroup) {
    self->KDirOperator::readConfig(*configGroup);
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnReadConfig(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_readconfig_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_ReadConfig_Callback>(slot);
}

// Base class handler implementation
void KDirOperator_SuperWriteConfig(KDirOperator* self, KConfigGroup* configGroup) {
    self->KDirOperator::writeConfig(*configGroup);
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnWriteConfig(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_writeconfig_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_WriteConfig_Callback>(slot);
}

// Base class handler implementation
KIO__DeleteJob* KDirOperator_SuperDel(KDirOperator* self, const KFileItemList* items, QWidget* parent, bool ask, bool showProgress) {
    return self->KDirOperator::del(*items, parent, ask, showProgress);
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnDel(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_del_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_Del_Callback>(slot);
}

// Base class handler implementation
void KDirOperator_SuperSetEnableDirHighlighting(KDirOperator* self, bool enable) {
    self->KDirOperator::setEnableDirHighlighting(enable);
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSetEnableDirHighlighting(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_setenabledirhighlighting_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_SetEnableDirHighlighting_Callback>(slot);
}

// Base class handler implementation
void KDirOperator_SuperSetAcceptDrops(KDirOperator* self, bool b) {
    self->KDirOperator::setAcceptDrops(b);
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSetAcceptDrops(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_setacceptdrops_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_SetAcceptDrops_Callback>(slot);
}

// Base class handler implementation
void KDirOperator_SuperSetDropOptions(KDirOperator* self, int options) {
    self->KDirOperator::setDropOptions(static_cast<int>(options));
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSetDropOptions(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_setdropoptions_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_SetDropOptions_Callback>(slot);
}

// Base class handler implementation
KIO__CopyJob* KDirOperator_SuperTrash(KDirOperator* self, const KFileItemList* items, QWidget* parent, bool ask, bool showProgress) {
    return self->KDirOperator::trash(*items, parent, ask, showProgress);
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnTrash(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_trash_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_Trash_Callback>(slot);
}

// Base class handler implementation
QAbstractItemView* KDirOperator_SuperCreateView(KDirOperator* self, QWidget* parent, int viewKind) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        return vkdiroperator->KDirOperator::createView(parent, static_cast<KFile::FileView>(viewKind));
    } else
        qFatal("Error: Protected virtual method KDirOperator::createView called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnCreateView(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_createview_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_CreateView_Callback>(slot);
}

// Base class handler implementation
void KDirOperator_SuperSetDirLister(KDirOperator* self, KDirLister* lister) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::setDirLister(lister);
    } else
        qFatal("Error: Protected virtual method KDirOperator::setDirLister called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSetDirLister(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_setdirlister_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_SetDirLister_Callback>(slot);
}

// Base class handler implementation
void KDirOperator_SuperResizeEvent(KDirOperator* self, QResizeEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnResizeEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_resizeevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void KDirOperator_SuperActivatedMenu(KDirOperator* self, const KFileItem* item, const QPoint* pos) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::activatedMenu(*item, *pos);
    } else
        qFatal("Error: Protected virtual method KDirOperator::activatedMenu called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnActivatedMenu(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_activatedmenu_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_ActivatedMenu_Callback>(slot);
}

// Base class handler implementation
void KDirOperator_SuperChangeEvent(KDirOperator* self, QEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::changeEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnChangeEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_changeevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
bool KDirOperator_SuperEventFilter(KDirOperator* self, QObject* watched, QEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        return vkdiroperator->KDirOperator::eventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnEventFilter(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_eventfilter_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_EventFilter_Callback>(slot);
}

// Base class handler implementation
void KDirOperator_SuperBack(KDirOperator* self) {
    self->KDirOperator::back();
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnBack(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_back_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_Back_Callback>(slot);
}

// Base class handler implementation
void KDirOperator_SuperForward(KDirOperator* self) {
    self->KDirOperator::forward();
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnForward(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_forward_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_Forward_Callback>(slot);
}

// Base class handler implementation
void KDirOperator_SuperHome(KDirOperator* self) {
    self->KDirOperator::home();
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnHome(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_home_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_Home_Callback>(slot);
}

// Base class handler implementation
void KDirOperator_SuperCdUp(KDirOperator* self) {
    self->KDirOperator::cdUp();
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnCdUp(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_cdup_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_CdUp_Callback>(slot);
}

// Base class handler implementation
void KDirOperator_SuperRereadDir(KDirOperator* self) {
    self->KDirOperator::rereadDir();
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnRereadDir(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_rereaddir_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_RereadDir_Callback>(slot);
}

// Base class handler implementation
void KDirOperator_SuperMkdir(KDirOperator* self) {
    self->KDirOperator::mkdir();
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnMkdir(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_mkdir_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_Mkdir_Callback>(slot);
}

// Base class handler implementation
void KDirOperator_SuperDeleteSelected(KDirOperator* self) {
    self->KDirOperator::deleteSelected();
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnDeleteSelected(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_deleteselected_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_DeleteSelected_Callback>(slot);
}

// Base class handler implementation
void KDirOperator_SuperTrashSelected(KDirOperator* self) {
    self->KDirOperator::trashSelected();
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnTrashSelected(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_trashselected_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_TrashSelected_Callback>(slot);
}

// Base class handler implementation
void KDirOperator_SuperSelectDir(KDirOperator* self, const KFileItem* item) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::selectDir(*item);
    } else
        qFatal("Error: Protected virtual method KDirOperator::selectDir called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSelectDir(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_selectdir_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_SelectDir_Callback>(slot);
}

// Derived class handler implementation
int KDirOperator_DevType(const KDirOperator* self) {
    return self->devType();
}

// Base class handler implementation
int KDirOperator_SuperDevType(const KDirOperator* self) {
    return self->KDirOperator::devType();
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnDevType(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self)))
        vkdiroperator->kdiroperator_devtype_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_DevType_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_SetVisible(KDirOperator* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KDirOperator_SuperSetVisible(KDirOperator* self, bool visible) {
    self->KDirOperator::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSetVisible(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_setvisible_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KDirOperator_SizeHint(const KDirOperator* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KDirOperator_SuperSizeHint(const KDirOperator* self) {
    return new QSize(self->KDirOperator::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSizeHint(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self)))
        vkdiroperator->kdiroperator_sizehint_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KDirOperator_MinimumSizeHint(const KDirOperator* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KDirOperator_SuperMinimumSizeHint(const KDirOperator* self) {
    return new QSize(self->KDirOperator::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnMinimumSizeHint(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self)))
        vkdiroperator->kdiroperator_minimumsizehint_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KDirOperator_HeightForWidth(const KDirOperator* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KDirOperator_SuperHeightForWidth(const KDirOperator* self, int param1) {
    return self->KDirOperator::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnHeightForWidth(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self)))
        vkdiroperator->kdiroperator_heightforwidth_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KDirOperator_HasHeightForWidth(const KDirOperator* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KDirOperator_SuperHasHeightForWidth(const KDirOperator* self) {
    return self->KDirOperator::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnHasHeightForWidth(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self)))
        vkdiroperator->kdiroperator_hasheightforwidth_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KDirOperator_PaintEngine(const KDirOperator* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KDirOperator_SuperPaintEngine(const KDirOperator* self) {
    return self->KDirOperator::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnPaintEngine(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self)))
        vkdiroperator->kdiroperator_paintengine_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KDirOperator_Event(KDirOperator* self, QEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        return vkdiroperator->event(event);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KDirOperator_SuperEvent(KDirOperator* self, QEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        return vkdiroperator->KDirOperator::event(event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_event_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_Event_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_MousePressEvent(KDirOperator* self, QMouseEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperMousePressEvent(KDirOperator* self, QMouseEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnMousePressEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_mousepressevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_MouseReleaseEvent(KDirOperator* self, QMouseEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperMouseReleaseEvent(KDirOperator* self, QMouseEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnMouseReleaseEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_mousereleaseevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_MouseDoubleClickEvent(KDirOperator* self, QMouseEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperMouseDoubleClickEvent(KDirOperator* self, QMouseEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnMouseDoubleClickEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_mousedoubleclickevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_MouseMoveEvent(KDirOperator* self, QMouseEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperMouseMoveEvent(KDirOperator* self, QMouseEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnMouseMoveEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_mousemoveevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_WheelEvent(KDirOperator* self, QWheelEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperWheelEvent(KDirOperator* self, QWheelEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnWheelEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_wheelevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_KeyPressEvent(KDirOperator* self, QKeyEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperKeyPressEvent(KDirOperator* self, QKeyEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnKeyPressEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_keypressevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_KeyReleaseEvent(KDirOperator* self, QKeyEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperKeyReleaseEvent(KDirOperator* self, QKeyEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnKeyReleaseEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_keyreleaseevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_FocusInEvent(KDirOperator* self, QFocusEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperFocusInEvent(KDirOperator* self, QFocusEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnFocusInEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_focusinevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_FocusOutEvent(KDirOperator* self, QFocusEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperFocusOutEvent(KDirOperator* self, QFocusEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnFocusOutEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_focusoutevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_EnterEvent(KDirOperator* self, QEnterEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperEnterEvent(KDirOperator* self, QEnterEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnEnterEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_enterevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_LeaveEvent(KDirOperator* self, QEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperLeaveEvent(KDirOperator* self, QEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnLeaveEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_leaveevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_PaintEvent(KDirOperator* self, QPaintEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperPaintEvent(KDirOperator* self, QPaintEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnPaintEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_paintevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_MoveEvent(KDirOperator* self, QMoveEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperMoveEvent(KDirOperator* self, QMoveEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnMoveEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_moveevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_CloseEvent(KDirOperator* self, QCloseEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperCloseEvent(KDirOperator* self, QCloseEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnCloseEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_closeevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_ContextMenuEvent(KDirOperator* self, QContextMenuEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperContextMenuEvent(KDirOperator* self, QContextMenuEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnContextMenuEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_contextmenuevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_TabletEvent(KDirOperator* self, QTabletEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperTabletEvent(KDirOperator* self, QTabletEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnTabletEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_tabletevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_ActionEvent(KDirOperator* self, QActionEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperActionEvent(KDirOperator* self, QActionEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnActionEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_actionevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_DragEnterEvent(KDirOperator* self, QDragEnterEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperDragEnterEvent(KDirOperator* self, QDragEnterEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnDragEnterEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_dragenterevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_DragMoveEvent(KDirOperator* self, QDragMoveEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperDragMoveEvent(KDirOperator* self, QDragMoveEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnDragMoveEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_dragmoveevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_DragLeaveEvent(KDirOperator* self, QDragLeaveEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperDragLeaveEvent(KDirOperator* self, QDragLeaveEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnDragLeaveEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_dragleaveevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_DropEvent(KDirOperator* self, QDropEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperDropEvent(KDirOperator* self, QDropEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnDropEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_dropevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_ShowEvent(KDirOperator* self, QShowEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperShowEvent(KDirOperator* self, QShowEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnShowEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_showevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_HideEvent(KDirOperator* self, QHideEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperHideEvent(KDirOperator* self, QHideEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnHideEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_hideevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KDirOperator_NativeEvent(KDirOperator* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        return vkdiroperator->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KDirOperator::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KDirOperator_SuperNativeEvent(KDirOperator* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        return vkdiroperator->KDirOperator::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KDirOperator::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnNativeEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_nativeevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KDirOperator_Metric(const KDirOperator* self, int param1) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator) {
        return vkdiroperator->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KDirOperator::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KDirOperator_SuperMetric(const KDirOperator* self, int param1) {
    if (auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self))) {
        return vkdiroperator->KDirOperator::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KDirOperator::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnMetric(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self)))
        vkdiroperator->kdiroperator_metric_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_Metric_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_InitPainter(const KDirOperator* self, QPainter* painter) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator) {
        vkdiroperator->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperInitPainter(const KDirOperator* self, QPainter* painter) {
    if (auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self))) {
        vkdiroperator->KDirOperator::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KDirOperator::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnInitPainter(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self)))
        vkdiroperator->kdiroperator_initpainter_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KDirOperator_Redirected(const KDirOperator* self, QPoint* offset) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator) {
        return vkdiroperator->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KDirOperator_SuperRedirected(const KDirOperator* self, QPoint* offset) {
    if (auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self))) {
        return vkdiroperator->KDirOperator::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KDirOperator::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnRedirected(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self)))
        vkdiroperator->kdiroperator_redirected_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KDirOperator_SharedPainter(const KDirOperator* self) {
    auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self));
    if (vkdiroperator) {
        return vkdiroperator->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KDirOperator::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KDirOperator_SuperSharedPainter(const KDirOperator* self) {
    if (auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self))) {
        return vkdiroperator->KDirOperator::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KDirOperator::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnSharedPainter(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self)))
        vkdiroperator->kdiroperator_sharedpainter_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_InputMethodEvent(KDirOperator* self, QInputMethodEvent* param1) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperInputMethodEvent(KDirOperator* self, QInputMethodEvent* param1) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KDirOperator::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnInputMethodEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_inputmethodevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KDirOperator_InputMethodQuery(const KDirOperator* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KDirOperator_SuperInputMethodQuery(const KDirOperator* self, int param1) {
    return new QVariant(self->KDirOperator::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnInputMethodQuery(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self)))
        vkdiroperator->kdiroperator_inputmethodquery_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KDirOperator_FocusNextPrevChild(KDirOperator* self, bool next) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        return vkdiroperator->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KDirOperator_SuperFocusNextPrevChild(KDirOperator* self, bool next) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        return vkdiroperator->KDirOperator::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KDirOperator::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnFocusNextPrevChild(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_focusnextprevchild_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_TimerEvent(KDirOperator* self, QTimerEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperTimerEvent(KDirOperator* self, QTimerEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnTimerEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_timerevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_ChildEvent(KDirOperator* self, QChildEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperChildEvent(KDirOperator* self, QChildEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnChildEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_childevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_CustomEvent(KDirOperator* self, QEvent* event) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperCustomEvent(KDirOperator* self, QEvent* event) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirOperator::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnCustomEvent(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_customevent_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_ConnectNotify(KDirOperator* self, const QMetaMethod* signal) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperConnectNotify(KDirOperator* self, const QMetaMethod* signal) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KDirOperator::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnConnectNotify(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_connectnotify_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KDirOperator_DisconnectNotify(KDirOperator* self, const QMetaMethod* signal) {
    auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self);
    if (vkdiroperator) {
        vkdiroperator->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KDirOperator::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirOperator_SuperDisconnectNotify(KDirOperator* self, const QMetaMethod* signal) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->KDirOperator::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KDirOperator::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirOperator_OnDisconnectNotify(KDirOperator* self, intptr_t slot) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self))
        vkdiroperator->kdiroperator_disconnectnotify_callback = reinterpret_cast<VirtualKDirOperator::KDirOperator_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KDirOperator_SetupActions(KDirOperator* self) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->VirtualKDirOperator::setupActions();
    } else
        qFatal("Error: Protected method KDirOperator::setupActions called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirOperator_UpdateSortActions(KDirOperator* self) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->VirtualKDirOperator::updateSortActions();
    } else
        qFatal("Error: Protected method KDirOperator::updateSortActions called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirOperator_UpdateViewActions(KDirOperator* self) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->VirtualKDirOperator::updateViewActions();
    } else
        qFatal("Error: Protected method KDirOperator::updateViewActions called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirOperator_SetupMenu2(KDirOperator* self) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->VirtualKDirOperator::setupMenu();
    } else
        qFatal("Error: Protected method KDirOperator::setupMenu2 called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirOperator_PrepareCompletionObjects(KDirOperator* self) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->VirtualKDirOperator::prepareCompletionObjects();
    } else
        qFatal("Error: Protected method KDirOperator::prepareCompletionObjects called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDirOperator_CheckPreviewSupport(KDirOperator* self) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        return vkdiroperator->VirtualKDirOperator::checkPreviewSupport();
    } else
        qFatal("Error: Protected method KDirOperator::checkPreviewSupport called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirOperator_ResetCursor(KDirOperator* self) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->VirtualKDirOperator::resetCursor();
    } else
        qFatal("Error: Protected method KDirOperator::resetCursor called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirOperator_PathChanged(KDirOperator* self) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->VirtualKDirOperator::pathChanged();
    } else
        qFatal("Error: Protected method KDirOperator::pathChanged called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirOperator_SelectFile(KDirOperator* self, const KFileItem* item) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->VirtualKDirOperator::selectFile(*item);
    } else
        qFatal("Error: Protected method KDirOperator::selectFile called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirOperator_HighlightFile(KDirOperator* self, const KFileItem* item) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->VirtualKDirOperator::highlightFile(*item);
    } else
        qFatal("Error: Protected method KDirOperator::highlightFile called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirOperator_SortByName(KDirOperator* self) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->VirtualKDirOperator::sortByName();
    } else
        qFatal("Error: Protected method KDirOperator::sortByName called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirOperator_SortBySize(KDirOperator* self) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->VirtualKDirOperator::sortBySize();
    } else
        qFatal("Error: Protected method KDirOperator::sortBySize called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirOperator_SortByDate(KDirOperator* self) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->VirtualKDirOperator::sortByDate();
    } else
        qFatal("Error: Protected method KDirOperator::sortByDate called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirOperator_SortByType(KDirOperator* self) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->VirtualKDirOperator::sortByType();
    } else
        qFatal("Error: Protected method KDirOperator::sortByType called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirOperator_SortReversed(KDirOperator* self) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->VirtualKDirOperator::sortReversed();
    } else
        qFatal("Error: Protected method KDirOperator::sortReversed called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirOperator_ToggleDirsFirst(KDirOperator* self) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->VirtualKDirOperator::toggleDirsFirst();
    } else
        qFatal("Error: Protected method KDirOperator::toggleDirsFirst called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirOperator_ToggleIgnoreCase(KDirOperator* self) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->VirtualKDirOperator::toggleIgnoreCase();
    } else
        qFatal("Error: Protected method KDirOperator::toggleIgnoreCase called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirOperator_SlotCompletionMatch(KDirOperator* self, const libqt_string match) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        QString match_QString = QString::fromUtf8(match.data, match.len);
        vkdiroperator->VirtualKDirOperator::slotCompletionMatch(match_QString);
    } else
        qFatal("Error: Protected method KDirOperator::slotCompletionMatch called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirOperator_UpdateMicroFocus(KDirOperator* self) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->VirtualKDirOperator::updateMicroFocus();
    } else
        qFatal("Error: Protected method KDirOperator::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirOperator_Create(KDirOperator* self) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->VirtualKDirOperator::create();
    } else
        qFatal("Error: Protected method KDirOperator::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KDirOperator_Destroy(KDirOperator* self) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        vkdiroperator->VirtualKDirOperator::destroy();
    } else
        qFatal("Error: Protected method KDirOperator::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDirOperator_FocusNextChild(KDirOperator* self) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        return vkdiroperator->VirtualKDirOperator::focusNextChild();
    } else
        qFatal("Error: Protected method KDirOperator::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDirOperator_FocusPreviousChild(KDirOperator* self) {
    if (auto* vkdiroperator = dynamic_cast<VirtualKDirOperator*>(self)) {
        return vkdiroperator->VirtualKDirOperator::focusPreviousChild();
    } else
        qFatal("Error: Protected method KDirOperator::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KDirOperator_Sender(const KDirOperator* self) {
    if (auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self))) {
        return vkdiroperator->VirtualKDirOperator::sender();
    } else
        qFatal("Error: Protected method KDirOperator::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KDirOperator_SenderSignalIndex(const KDirOperator* self) {
    if (auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self))) {
        return vkdiroperator->VirtualKDirOperator::senderSignalIndex();
    } else
        qFatal("Error: Protected method KDirOperator::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KDirOperator_Receivers(const KDirOperator* self, const char* signal) {
    if (auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self))) {
        return vkdiroperator->VirtualKDirOperator::receivers(signal);
    } else
        qFatal("Error: Protected method KDirOperator::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDirOperator_IsSignalConnected(const KDirOperator* self, const QMetaMethod* signal) {
    if (auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self))) {
        return vkdiroperator->VirtualKDirOperator::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KDirOperator::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KDirOperator_GetDecodedMetricF(const KDirOperator* self, int metricA, int metricB) {
    if (auto* vkdiroperator = const_cast<VirtualKDirOperator*>(dynamic_cast<const VirtualKDirOperator*>(self))) {
        return vkdiroperator->VirtualKDirOperator::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KDirOperator::getDecodedMetricF called without a directly constructed type");
}

void KDirOperator_Delete(KDirOperator* self) {
    delete self;
}
