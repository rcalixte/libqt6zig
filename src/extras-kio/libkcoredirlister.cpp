#include <KCoreDirLister>
#include <KFileItem>
#include <KIO/Job>
#include <KIO/ListJob>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPair>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <kcoredirlister.h>
#include "libkcoredirlister.h"
#include "libkcoredirlister.hxx"

KCoreDirLister* KCoreDirLister_new() {
    return new VirtualKCoreDirLister();
}

KCoreDirLister* KCoreDirLister_new2(QObject* parent) {
    return new VirtualKCoreDirLister(parent);
}

QMetaObject* KCoreDirLister_MetaObject(const KCoreDirLister* self) {
    return (QMetaObject*)self->metaObject();
}

void* KCoreDirLister_Metacast(KCoreDirLister* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KCoreDirLister_Metacall(KCoreDirLister* self, int param1, int param2, void** param3) {
    auto* vkcoredirlister = dynamic_cast<VirtualKCoreDirLister*>(self);
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKCoreDirLister*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KCoreDirLister_Tr(const char* s) {
    QString _ret = KCoreDirLister::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KCoreDirLister_OpenUrl(KCoreDirLister* self, const QUrl* dirUrl) {
    return self->openUrl(*dirUrl);
}

void KCoreDirLister_Stop(KCoreDirLister* self) {
    self->stop();
}

void KCoreDirLister_Stop2(KCoreDirLister* self, const QUrl* dirUrl) {
    self->stop(*dirUrl);
}

void KCoreDirLister_ForgetDirs(KCoreDirLister* self, const QUrl* dirUrl) {
    self->forgetDirs(*dirUrl);
}

bool KCoreDirLister_DelayedMimeTypes(const KCoreDirLister* self) {
    return self->delayedMimeTypes();
}

void KCoreDirLister_SetDelayedMimeTypes(KCoreDirLister* self, bool delayedMimeTypes) {
    self->setDelayedMimeTypes(delayedMimeTypes);
}

bool KCoreDirLister_AutoUpdate(const KCoreDirLister* self) {
    return self->autoUpdate();
}

void KCoreDirLister_SetAutoUpdate(KCoreDirLister* self, bool enable) {
    self->setAutoUpdate(enable);
}

bool KCoreDirLister_ShowHiddenFiles(const KCoreDirLister* self) {
    return self->showHiddenFiles();
}

void KCoreDirLister_SetShowHiddenFiles(KCoreDirLister* self, bool showHiddenFiles) {
    self->setShowHiddenFiles(showHiddenFiles);
}

bool KCoreDirLister_DirOnlyMode(const KCoreDirLister* self) {
    return self->dirOnlyMode();
}

void KCoreDirLister_SetDirOnlyMode(KCoreDirLister* self, bool dirsOnly) {
    self->setDirOnlyMode(dirsOnly);
}

bool KCoreDirLister_RequestMimeTypeWhileListing(const KCoreDirLister* self) {
    return self->requestMimeTypeWhileListing();
}

void KCoreDirLister_SetRequestMimeTypeWhileListing(KCoreDirLister* self, bool request) {
    self->setRequestMimeTypeWhileListing(request);
}

QUrl* KCoreDirLister_Url(const KCoreDirLister* self) {
    return new QUrl(self->url());
}

libqt_list /* of QUrl* */ KCoreDirLister_Directories(const KCoreDirLister* self) {
    QList<QUrl> _ret = self->directories();
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KCoreDirLister_EmitChanges(KCoreDirLister* self) {
    self->emitChanges();
}

void KCoreDirLister_UpdateDirectory(KCoreDirLister* self, const QUrl* dirUrl) {
    self->updateDirectory(*dirUrl);
}

bool KCoreDirLister_IsFinished(const KCoreDirLister* self) {
    return self->isFinished();
}

KFileItem* KCoreDirLister_RootItem(const KCoreDirLister* self) {
    return new KFileItem(self->rootItem());
}

KFileItem* KCoreDirLister_FindByUrl(const KCoreDirLister* self, const QUrl* url) {
    return new KFileItem(self->findByUrl(*url));
}

KFileItem* KCoreDirLister_FindByName(const KCoreDirLister* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new KFileItem(self->findByName(name_QString));
}

void KCoreDirLister_SetNameFilter(KCoreDirLister* self, const libqt_string filter) {
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    self->setNameFilter(filter_QString);
}

libqt_string KCoreDirLister_NameFilter(const KCoreDirLister* self) {
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

void KCoreDirLister_SetMimeFilter(KCoreDirLister* self, const libqt_list /* of libqt_string */ mimeList) {
    QList<QString> mimeList_QList;
    mimeList_QList.reserve(mimeList.len);
    libqt_string* mimeList_arr = static_cast<libqt_string*>(mimeList.data);
    for (size_t i = 0; i < mimeList.len; ++i) {
        QString mimeList_arr_i_QString = QString::fromUtf8(mimeList_arr[i].data, mimeList_arr[i].len);
        mimeList_QList.push_back(mimeList_arr_i_QString);
    }
    self->setMimeFilter(mimeList_QList);
}

void KCoreDirLister_SetMimeExcludeFilter(KCoreDirLister* self, const libqt_list /* of libqt_string */ mimeList) {
    QList<QString> mimeList_QList;
    mimeList_QList.reserve(mimeList.len);
    libqt_string* mimeList_arr = static_cast<libqt_string*>(mimeList.data);
    for (size_t i = 0; i < mimeList.len; ++i) {
        QString mimeList_arr_i_QString = QString::fromUtf8(mimeList_arr[i].data, mimeList_arr[i].len);
        mimeList_QList.push_back(mimeList_arr_i_QString);
    }
    self->setMimeExcludeFilter(mimeList_QList);
}

void KCoreDirLister_ClearMimeFilter(KCoreDirLister* self) {
    self->clearMimeFilter();
}

libqt_list /* of libqt_string */ KCoreDirLister_MimeFilters(const KCoreDirLister* self) {
    QList<QString> _ret = self->mimeFilters();
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

KFileItemList* KCoreDirLister_Items(const KCoreDirLister* self) {
    return new KFileItemList(self->items());
}

KFileItemList* KCoreDirLister_ItemsForDir(const KCoreDirLister* self, const QUrl* dirUrl) {
    return new KFileItemList(self->itemsForDir(*dirUrl));
}

KFileItem* KCoreDirLister_CachedItemForUrl(const QUrl* url) {
    return new KFileItem(KCoreDirLister::cachedItemForUrl(*url));
}

bool KCoreDirLister_AutoErrorHandlingEnabled(const KCoreDirLister* self) {
    return self->autoErrorHandlingEnabled();
}

void KCoreDirLister_SetAutoErrorHandlingEnabled(KCoreDirLister* self, bool enable) {
    self->setAutoErrorHandlingEnabled(enable);
}

void KCoreDirLister_Started(KCoreDirLister* self, const QUrl* dirUrl) {
    self->started(*dirUrl);
}

void KCoreDirLister_Connect_Started(KCoreDirLister* self, intptr_t slot) {
    void (*slotFunc)(KCoreDirLister*, QUrl*) = reinterpret_cast<void (*)(KCoreDirLister*, QUrl*)>(slot);
    KCoreDirLister::connect(self, &KCoreDirLister::started, [self, slotFunc](const QUrl& dirUrl) {
        const QUrl& dirUrl_ret = dirUrl;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&dirUrl_ret);
        slotFunc(self, sigval1);
    });
}

void KCoreDirLister_Completed(KCoreDirLister* self) {
    self->completed();
}

void KCoreDirLister_Connect_Completed(KCoreDirLister* self, intptr_t slot) {
    void (*slotFunc)(KCoreDirLister*) = reinterpret_cast<void (*)(KCoreDirLister*)>(slot);
    KCoreDirLister::connect(self, &KCoreDirLister::completed, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KCoreDirLister_ListingDirCompleted(KCoreDirLister* self, const QUrl* dirUrl) {
    self->listingDirCompleted(*dirUrl);
}

void KCoreDirLister_Connect_ListingDirCompleted(KCoreDirLister* self, intptr_t slot) {
    void (*slotFunc)(KCoreDirLister*, QUrl*) = reinterpret_cast<void (*)(KCoreDirLister*, QUrl*)>(slot);
    KCoreDirLister::connect(self, &KCoreDirLister::listingDirCompleted, [self, slotFunc](const QUrl& dirUrl) {
        const QUrl& dirUrl_ret = dirUrl;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&dirUrl_ret);
        slotFunc(self, sigval1);
    });
}

void KCoreDirLister_Canceled(KCoreDirLister* self) {
    self->canceled();
}

void KCoreDirLister_Connect_Canceled(KCoreDirLister* self, intptr_t slot) {
    void (*slotFunc)(KCoreDirLister*) = reinterpret_cast<void (*)(KCoreDirLister*)>(slot);
    KCoreDirLister::connect(self, &KCoreDirLister::canceled, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KCoreDirLister_ListingDirCanceled(KCoreDirLister* self, const QUrl* dirUrl) {
    self->listingDirCanceled(*dirUrl);
}

void KCoreDirLister_Connect_ListingDirCanceled(KCoreDirLister* self, intptr_t slot) {
    void (*slotFunc)(KCoreDirLister*, QUrl*) = reinterpret_cast<void (*)(KCoreDirLister*, QUrl*)>(slot);
    KCoreDirLister::connect(self, &KCoreDirLister::listingDirCanceled, [self, slotFunc](const QUrl& dirUrl) {
        const QUrl& dirUrl_ret = dirUrl;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&dirUrl_ret);
        slotFunc(self, sigval1);
    });
}

void KCoreDirLister_Redirection(KCoreDirLister* self, const QUrl* oldUrl, const QUrl* newUrl) {
    self->redirection(*oldUrl, *newUrl);
}

void KCoreDirLister_Connect_Redirection(KCoreDirLister* self, intptr_t slot) {
    void (*slotFunc)(KCoreDirLister*, QUrl*, QUrl*) = reinterpret_cast<void (*)(KCoreDirLister*, QUrl*, QUrl*)>(slot);
    KCoreDirLister::connect(self, &KCoreDirLister::redirection, [self, slotFunc](const QUrl& oldUrl, const QUrl& newUrl) {
        const QUrl& oldUrl_ret = oldUrl;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&oldUrl_ret);
        const QUrl& newUrl_ret = newUrl;
        // Cast returned reference into pointer
        QUrl* sigval2 = const_cast<QUrl*>(&newUrl_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

void KCoreDirLister_Clear(KCoreDirLister* self) {
    self->clear();
}

void KCoreDirLister_Connect_Clear(KCoreDirLister* self, intptr_t slot) {
    void (*slotFunc)(KCoreDirLister*) = reinterpret_cast<void (*)(KCoreDirLister*)>(slot);
    KCoreDirLister::connect(self, &KCoreDirLister::clear, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KCoreDirLister_ClearDir(KCoreDirLister* self, const QUrl* dirUrl) {
    self->clearDir(*dirUrl);
}

void KCoreDirLister_Connect_ClearDir(KCoreDirLister* self, intptr_t slot) {
    void (*slotFunc)(KCoreDirLister*, QUrl*) = reinterpret_cast<void (*)(KCoreDirLister*, QUrl*)>(slot);
    KCoreDirLister::connect(self, &KCoreDirLister::clearDir, [self, slotFunc](const QUrl& dirUrl) {
        const QUrl& dirUrl_ret = dirUrl;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&dirUrl_ret);
        slotFunc(self, sigval1);
    });
}

void KCoreDirLister_NewItems(KCoreDirLister* self, const KFileItemList* items) {
    self->newItems(*items);
}

void KCoreDirLister_Connect_NewItems(KCoreDirLister* self, intptr_t slot) {
    void (*slotFunc)(KCoreDirLister*, KFileItemList*) = reinterpret_cast<void (*)(KCoreDirLister*, KFileItemList*)>(slot);
    KCoreDirLister::connect(self, &KCoreDirLister::newItems, [self, slotFunc](const KFileItemList& items) {
        const KFileItemList& items_ret = items;
        // Cast returned reference into pointer
        KFileItemList* sigval1 = const_cast<KFileItemList*>(&items_ret);
        slotFunc(self, sigval1);
    });
}

void KCoreDirLister_ItemsAdded(KCoreDirLister* self, const QUrl* directoryUrl, const KFileItemList* items) {
    self->itemsAdded(*directoryUrl, *items);
}

void KCoreDirLister_Connect_ItemsAdded(KCoreDirLister* self, intptr_t slot) {
    void (*slotFunc)(KCoreDirLister*, QUrl*, KFileItemList*) = reinterpret_cast<void (*)(KCoreDirLister*, QUrl*, KFileItemList*)>(slot);
    KCoreDirLister::connect(self, &KCoreDirLister::itemsAdded, [self, slotFunc](const QUrl& directoryUrl, const KFileItemList& items) {
        const QUrl& directoryUrl_ret = directoryUrl;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&directoryUrl_ret);
        const KFileItemList& items_ret = items;
        // Cast returned reference into pointer
        KFileItemList* sigval2 = const_cast<KFileItemList*>(&items_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

void KCoreDirLister_ItemsFilteredByMime(KCoreDirLister* self, const KFileItemList* items) {
    self->itemsFilteredByMime(*items);
}

void KCoreDirLister_Connect_ItemsFilteredByMime(KCoreDirLister* self, intptr_t slot) {
    void (*slotFunc)(KCoreDirLister*, KFileItemList*) = reinterpret_cast<void (*)(KCoreDirLister*, KFileItemList*)>(slot);
    KCoreDirLister::connect(self, &KCoreDirLister::itemsFilteredByMime, [self, slotFunc](const KFileItemList& items) {
        const KFileItemList& items_ret = items;
        // Cast returned reference into pointer
        KFileItemList* sigval1 = const_cast<KFileItemList*>(&items_ret);
        slotFunc(self, sigval1);
    });
}

void KCoreDirLister_ItemsDeleted(KCoreDirLister* self, const KFileItemList* items) {
    self->itemsDeleted(*items);
}

void KCoreDirLister_Connect_ItemsDeleted(KCoreDirLister* self, intptr_t slot) {
    void (*slotFunc)(KCoreDirLister*, KFileItemList*) = reinterpret_cast<void (*)(KCoreDirLister*, KFileItemList*)>(slot);
    KCoreDirLister::connect(self, &KCoreDirLister::itemsDeleted, [self, slotFunc](const KFileItemList& items) {
        const KFileItemList& items_ret = items;
        // Cast returned reference into pointer
        KFileItemList* sigval1 = const_cast<KFileItemList*>(&items_ret);
        slotFunc(self, sigval1);
    });
}

void KCoreDirLister_RefreshItems(KCoreDirLister* self, const libqt_list /* of libqt_pair  tuple of KFileItem* and KFileItem*  */ items) {
    QList<QPair<KFileItem, KFileItem>> items_QList;
    items_QList.reserve(items.len);
    libqt_pair /* tuple of KFileItem* and KFileItem* */* items_arr = static_cast<libqt_pair /* tuple of KFileItem* and KFileItem* */*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QPair<KFileItem, KFileItem> items_arr_i_QPair;
        KFileItem** items_arr_i_first = static_cast<KFileItem**>(items_arr[i].first);
        KFileItem** items_arr_i_second = static_cast<KFileItem**>(items_arr[i].second);
        items_arr_i_QPair.first = *(items_arr_i_first[0]);
        items_arr_i_QPair.second = *(items_arr_i_second[0]);
        items_QList.push_back(items_arr_i_QPair);
    }
    self->refreshItems(items_QList);
}

void KCoreDirLister_InfoMessage(KCoreDirLister* self, const libqt_string msg) {
    QString msg_QString = QString::fromUtf8(msg.data, msg.len);
    self->infoMessage(msg_QString);
}

void KCoreDirLister_Connect_InfoMessage(KCoreDirLister* self, intptr_t slot) {
    void (*slotFunc)(KCoreDirLister*, const char*) = reinterpret_cast<void (*)(KCoreDirLister*, const char*)>(slot);
    KCoreDirLister::connect(self, &KCoreDirLister::infoMessage, [self, slotFunc](const QString& msg) {
        const QString msg_ret = msg;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray msg_b = msg_ret.toUtf8();
        const char* msg_str = static_cast<const char*>(malloc(msg_b.length() + 1));
        memcpy((void*)msg_str, msg_b.data(), msg_b.length());
        ((char*)msg_str)[msg_b.length()] = '\0';
        const char* sigval1 = msg_str;
        slotFunc(self, sigval1);
        libqt_free(msg_str);
    });
}

void KCoreDirLister_Percent(KCoreDirLister* self, int percent) {
    self->percent(static_cast<int>(percent));
}

void KCoreDirLister_Connect_Percent(KCoreDirLister* self, intptr_t slot) {
    void (*slotFunc)(KCoreDirLister*, int) = reinterpret_cast<void (*)(KCoreDirLister*, int)>(slot);
    KCoreDirLister::connect(self, &KCoreDirLister::percent, [self, slotFunc](int percent) {
        int sigval1 = percent;
        slotFunc(self, sigval1);
    });
}

void KCoreDirLister_TotalSize(KCoreDirLister* self, unsigned long long size) {
    self->totalSize(static_cast<KIO::filesize_t>(size));
}

void KCoreDirLister_Connect_TotalSize(KCoreDirLister* self, intptr_t slot) {
    void (*slotFunc)(KCoreDirLister*, unsigned long long) = reinterpret_cast<void (*)(KCoreDirLister*, unsigned long long)>(slot);
    KCoreDirLister::connect(self, &KCoreDirLister::totalSize, [self, slotFunc](KIO::filesize_t size) {
        unsigned long long sigval1 = static_cast<unsigned long long>(size);
        slotFunc(self, sigval1);
    });
}

void KCoreDirLister_ProcessedSize(KCoreDirLister* self, unsigned long long size) {
    self->processedSize(static_cast<KIO::filesize_t>(size));
}

void KCoreDirLister_Connect_ProcessedSize(KCoreDirLister* self, intptr_t slot) {
    void (*slotFunc)(KCoreDirLister*, unsigned long long) = reinterpret_cast<void (*)(KCoreDirLister*, unsigned long long)>(slot);
    KCoreDirLister::connect(self, &KCoreDirLister::processedSize, [self, slotFunc](KIO::filesize_t size) {
        unsigned long long sigval1 = static_cast<unsigned long long>(size);
        slotFunc(self, sigval1);
    });
}

void KCoreDirLister_Speed(KCoreDirLister* self, int bytes_per_second) {
    self->speed(static_cast<int>(bytes_per_second));
}

void KCoreDirLister_Connect_Speed(KCoreDirLister* self, intptr_t slot) {
    void (*slotFunc)(KCoreDirLister*, int) = reinterpret_cast<void (*)(KCoreDirLister*, int)>(slot);
    KCoreDirLister::connect(self, &KCoreDirLister::speed, [self, slotFunc](int bytes_per_second) {
        int sigval1 = bytes_per_second;
        slotFunc(self, sigval1);
    });
}

void KCoreDirLister_JobError(KCoreDirLister* self, KIO__Job* job) {
    self->jobError(job);
}

void KCoreDirLister_Connect_JobError(KCoreDirLister* self, intptr_t slot) {
    void (*slotFunc)(KCoreDirLister*, KIO__Job*) = reinterpret_cast<void (*)(KCoreDirLister*, KIO__Job*)>(slot);
    KCoreDirLister::connect(self, &KCoreDirLister::jobError, [self, slotFunc](KIO::Job* job) {
        KIO__Job* sigval1 = job;
        slotFunc(self, sigval1);
    });
}

void KCoreDirLister_JobStarted(KCoreDirLister* self, KIO__ListJob* param1) {
    auto* vkcoredirlister = dynamic_cast<VirtualKCoreDirLister*>(self);
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->jobStarted(param1);
    }
}

libqt_string KCoreDirLister_Tr2(const char* s, const char* c) {
    QString _ret = KCoreDirLister::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KCoreDirLister_Tr3(const char* s, const char* c, int n) {
    QString _ret = KCoreDirLister::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KCoreDirLister_OpenUrl2(KCoreDirLister* self, const QUrl* dirUrl, int flags) {
    return self->openUrl(*dirUrl, static_cast<KCoreDirLister::OpenUrlFlags>(flags));
}

KFileItemList* KCoreDirLister_Items1(const KCoreDirLister* self, int which) {
    return new KFileItemList(self->items(static_cast<KCoreDirLister::WhichItems>(which)));
}

KFileItemList* KCoreDirLister_ItemsForDir2(const KCoreDirLister* self, const QUrl* dirUrl, int which) {
    return new KFileItemList(self->itemsForDir(*dirUrl, static_cast<KCoreDirLister::WhichItems>(which)));
}

// Base class handler implementation
int KCoreDirLister_QBaseMetacall(KCoreDirLister* self, int param1, int param2, void** param3) {
    auto* vkcoredirlister = dynamic_cast<VirtualKCoreDirLister*>(self);
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->setKCoreDirLister_Metacall_IsBase(true);
        return vkcoredirlister->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KCoreDirLister::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreDirLister_OnMetacall(KCoreDirLister* self, intptr_t slot) {
    auto* vkcoredirlister = dynamic_cast<VirtualKCoreDirLister*>(self);
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->setKCoreDirLister_Metacall_Callback(reinterpret_cast<VirtualKCoreDirLister::KCoreDirLister_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KCoreDirLister_QBaseJobStarted(KCoreDirLister* self, KIO__ListJob* param1) {
    auto* vkcoredirlister = dynamic_cast<VirtualKCoreDirLister*>(self);
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->setKCoreDirLister_JobStarted_IsBase(true);
        vkcoredirlister->jobStarted(param1);
    } else {
        ((VirtualKCoreDirLister*)self)->jobStarted(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreDirLister_OnJobStarted(KCoreDirLister* self, intptr_t slot) {
    auto* vkcoredirlister = dynamic_cast<VirtualKCoreDirLister*>(self);
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->setKCoreDirLister_JobStarted_Callback(reinterpret_cast<VirtualKCoreDirLister::KCoreDirLister_JobStarted_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCoreDirLister_Event(KCoreDirLister* self, QEvent* event) {
    auto* vkcoredirlister = dynamic_cast<VirtualKCoreDirLister*>(self);
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        return vkcoredirlister->event(event);
    } else {
        return self->KCoreDirLister::event(event);
    }
}

// Base class handler implementation
bool KCoreDirLister_QBaseEvent(KCoreDirLister* self, QEvent* event) {
    auto* vkcoredirlister = dynamic_cast<VirtualKCoreDirLister*>(self);
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->setKCoreDirLister_Event_IsBase(true);
        return vkcoredirlister->event(event);
    } else {
        return self->KCoreDirLister::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreDirLister_OnEvent(KCoreDirLister* self, intptr_t slot) {
    auto* vkcoredirlister = dynamic_cast<VirtualKCoreDirLister*>(self);
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->setKCoreDirLister_Event_Callback(reinterpret_cast<VirtualKCoreDirLister::KCoreDirLister_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCoreDirLister_EventFilter(KCoreDirLister* self, QObject* watched, QEvent* event) {
    auto* vkcoredirlister = dynamic_cast<VirtualKCoreDirLister*>(self);
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        return vkcoredirlister->eventFilter(watched, event);
    } else {
        return self->KCoreDirLister::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KCoreDirLister_QBaseEventFilter(KCoreDirLister* self, QObject* watched, QEvent* event) {
    auto* vkcoredirlister = dynamic_cast<VirtualKCoreDirLister*>(self);
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->setKCoreDirLister_EventFilter_IsBase(true);
        return vkcoredirlister->eventFilter(watched, event);
    } else {
        return self->KCoreDirLister::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreDirLister_OnEventFilter(KCoreDirLister* self, intptr_t slot) {
    auto* vkcoredirlister = dynamic_cast<VirtualKCoreDirLister*>(self);
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->setKCoreDirLister_EventFilter_Callback(reinterpret_cast<VirtualKCoreDirLister::KCoreDirLister_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KCoreDirLister_TimerEvent(KCoreDirLister* self, QTimerEvent* event) {
    auto* vkcoredirlister = dynamic_cast<VirtualKCoreDirLister*>(self);
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->timerEvent(event);
    } else {
        ((VirtualKCoreDirLister*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KCoreDirLister_QBaseTimerEvent(KCoreDirLister* self, QTimerEvent* event) {
    auto* vkcoredirlister = dynamic_cast<VirtualKCoreDirLister*>(self);
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->setKCoreDirLister_TimerEvent_IsBase(true);
        vkcoredirlister->timerEvent(event);
    } else {
        ((VirtualKCoreDirLister*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreDirLister_OnTimerEvent(KCoreDirLister* self, intptr_t slot) {
    auto* vkcoredirlister = dynamic_cast<VirtualKCoreDirLister*>(self);
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->setKCoreDirLister_TimerEvent_Callback(reinterpret_cast<VirtualKCoreDirLister::KCoreDirLister_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCoreDirLister_ChildEvent(KCoreDirLister* self, QChildEvent* event) {
    auto* vkcoredirlister = dynamic_cast<VirtualKCoreDirLister*>(self);
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->childEvent(event);
    } else {
        ((VirtualKCoreDirLister*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KCoreDirLister_QBaseChildEvent(KCoreDirLister* self, QChildEvent* event) {
    auto* vkcoredirlister = dynamic_cast<VirtualKCoreDirLister*>(self);
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->setKCoreDirLister_ChildEvent_IsBase(true);
        vkcoredirlister->childEvent(event);
    } else {
        ((VirtualKCoreDirLister*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreDirLister_OnChildEvent(KCoreDirLister* self, intptr_t slot) {
    auto* vkcoredirlister = dynamic_cast<VirtualKCoreDirLister*>(self);
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->setKCoreDirLister_ChildEvent_Callback(reinterpret_cast<VirtualKCoreDirLister::KCoreDirLister_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCoreDirLister_CustomEvent(KCoreDirLister* self, QEvent* event) {
    auto* vkcoredirlister = dynamic_cast<VirtualKCoreDirLister*>(self);
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->customEvent(event);
    } else {
        ((VirtualKCoreDirLister*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KCoreDirLister_QBaseCustomEvent(KCoreDirLister* self, QEvent* event) {
    auto* vkcoredirlister = dynamic_cast<VirtualKCoreDirLister*>(self);
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->setKCoreDirLister_CustomEvent_IsBase(true);
        vkcoredirlister->customEvent(event);
    } else {
        ((VirtualKCoreDirLister*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreDirLister_OnCustomEvent(KCoreDirLister* self, intptr_t slot) {
    auto* vkcoredirlister = dynamic_cast<VirtualKCoreDirLister*>(self);
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->setKCoreDirLister_CustomEvent_Callback(reinterpret_cast<VirtualKCoreDirLister::KCoreDirLister_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCoreDirLister_ConnectNotify(KCoreDirLister* self, const QMetaMethod* signal) {
    auto* vkcoredirlister = dynamic_cast<VirtualKCoreDirLister*>(self);
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->connectNotify(*signal);
    } else {
        ((VirtualKCoreDirLister*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KCoreDirLister_QBaseConnectNotify(KCoreDirLister* self, const QMetaMethod* signal) {
    auto* vkcoredirlister = dynamic_cast<VirtualKCoreDirLister*>(self);
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->setKCoreDirLister_ConnectNotify_IsBase(true);
        vkcoredirlister->connectNotify(*signal);
    } else {
        ((VirtualKCoreDirLister*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreDirLister_OnConnectNotify(KCoreDirLister* self, intptr_t slot) {
    auto* vkcoredirlister = dynamic_cast<VirtualKCoreDirLister*>(self);
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->setKCoreDirLister_ConnectNotify_Callback(reinterpret_cast<VirtualKCoreDirLister::KCoreDirLister_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KCoreDirLister_DisconnectNotify(KCoreDirLister* self, const QMetaMethod* signal) {
    auto* vkcoredirlister = dynamic_cast<VirtualKCoreDirLister*>(self);
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->disconnectNotify(*signal);
    } else {
        ((VirtualKCoreDirLister*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KCoreDirLister_QBaseDisconnectNotify(KCoreDirLister* self, const QMetaMethod* signal) {
    auto* vkcoredirlister = dynamic_cast<VirtualKCoreDirLister*>(self);
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->setKCoreDirLister_DisconnectNotify_IsBase(true);
        vkcoredirlister->disconnectNotify(*signal);
    } else {
        ((VirtualKCoreDirLister*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreDirLister_OnDisconnectNotify(KCoreDirLister* self, intptr_t slot) {
    auto* vkcoredirlister = dynamic_cast<VirtualKCoreDirLister*>(self);
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->setKCoreDirLister_DisconnectNotify_Callback(reinterpret_cast<VirtualKCoreDirLister::KCoreDirLister_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KCoreDirLister_Sender(const KCoreDirLister* self) {
    auto* vkcoredirlister = const_cast<VirtualKCoreDirLister*>(dynamic_cast<const VirtualKCoreDirLister*>(self));
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        return vkcoredirlister->sender();
    } else {
        return ((VirtualKCoreDirLister*)self)->sender();
    }
}

// Base class handler implementation
QObject* KCoreDirLister_QBaseSender(const KCoreDirLister* self) {
    auto* vkcoredirlister = const_cast<VirtualKCoreDirLister*>(dynamic_cast<const VirtualKCoreDirLister*>(self));
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->setKCoreDirLister_Sender_IsBase(true);
        return vkcoredirlister->sender();
    } else {
        return ((VirtualKCoreDirLister*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreDirLister_OnSender(const KCoreDirLister* self, intptr_t slot) {
    auto* vkcoredirlister = const_cast<VirtualKCoreDirLister*>(dynamic_cast<const VirtualKCoreDirLister*>(self));
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->setKCoreDirLister_Sender_Callback(reinterpret_cast<VirtualKCoreDirLister::KCoreDirLister_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KCoreDirLister_SenderSignalIndex(const KCoreDirLister* self) {
    auto* vkcoredirlister = const_cast<VirtualKCoreDirLister*>(dynamic_cast<const VirtualKCoreDirLister*>(self));
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        return vkcoredirlister->senderSignalIndex();
    } else {
        return ((VirtualKCoreDirLister*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KCoreDirLister_QBaseSenderSignalIndex(const KCoreDirLister* self) {
    auto* vkcoredirlister = const_cast<VirtualKCoreDirLister*>(dynamic_cast<const VirtualKCoreDirLister*>(self));
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->setKCoreDirLister_SenderSignalIndex_IsBase(true);
        return vkcoredirlister->senderSignalIndex();
    } else {
        return ((VirtualKCoreDirLister*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreDirLister_OnSenderSignalIndex(const KCoreDirLister* self, intptr_t slot) {
    auto* vkcoredirlister = const_cast<VirtualKCoreDirLister*>(dynamic_cast<const VirtualKCoreDirLister*>(self));
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->setKCoreDirLister_SenderSignalIndex_Callback(reinterpret_cast<VirtualKCoreDirLister::KCoreDirLister_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KCoreDirLister_Receivers(const KCoreDirLister* self, const char* signal) {
    auto* vkcoredirlister = const_cast<VirtualKCoreDirLister*>(dynamic_cast<const VirtualKCoreDirLister*>(self));
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        return vkcoredirlister->receivers(signal);
    } else {
        return ((VirtualKCoreDirLister*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KCoreDirLister_QBaseReceivers(const KCoreDirLister* self, const char* signal) {
    auto* vkcoredirlister = const_cast<VirtualKCoreDirLister*>(dynamic_cast<const VirtualKCoreDirLister*>(self));
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->setKCoreDirLister_Receivers_IsBase(true);
        return vkcoredirlister->receivers(signal);
    } else {
        return ((VirtualKCoreDirLister*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreDirLister_OnReceivers(const KCoreDirLister* self, intptr_t slot) {
    auto* vkcoredirlister = const_cast<VirtualKCoreDirLister*>(dynamic_cast<const VirtualKCoreDirLister*>(self));
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->setKCoreDirLister_Receivers_Callback(reinterpret_cast<VirtualKCoreDirLister::KCoreDirLister_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCoreDirLister_IsSignalConnected(const KCoreDirLister* self, const QMetaMethod* signal) {
    auto* vkcoredirlister = const_cast<VirtualKCoreDirLister*>(dynamic_cast<const VirtualKCoreDirLister*>(self));
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        return vkcoredirlister->isSignalConnected(*signal);
    } else {
        return ((VirtualKCoreDirLister*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KCoreDirLister_QBaseIsSignalConnected(const KCoreDirLister* self, const QMetaMethod* signal) {
    auto* vkcoredirlister = const_cast<VirtualKCoreDirLister*>(dynamic_cast<const VirtualKCoreDirLister*>(self));
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->setKCoreDirLister_IsSignalConnected_IsBase(true);
        return vkcoredirlister->isSignalConnected(*signal);
    } else {
        return ((VirtualKCoreDirLister*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreDirLister_OnIsSignalConnected(const KCoreDirLister* self, intptr_t slot) {
    auto* vkcoredirlister = const_cast<VirtualKCoreDirLister*>(dynamic_cast<const VirtualKCoreDirLister*>(self));
    if (vkcoredirlister && vkcoredirlister->isVirtualKCoreDirLister) {
        vkcoredirlister->setKCoreDirLister_IsSignalConnected_Callback(reinterpret_cast<VirtualKCoreDirLister::KCoreDirLister_IsSignalConnected_Callback>(slot));
    }
}

void KCoreDirLister_Delete(KCoreDirLister* self) {
    delete self;
}
