#include <KFileItem>
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__NavigationExtension
#include <KParts/OpenUrlArguments>
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__ReadOnlyPart
#include <QAction>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPoint>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <navigationextension.h>
#include "libnavigationextension.h"
#include "libnavigationextension.hxx"

KParts__NavigationExtension* KParts__NavigationExtension_new(KParts__ReadOnlyPart* parent) {
    return new VirtualKPartsNavigationExtension(parent);
}

QMetaObject* KParts__NavigationExtension_MetaObject(const KParts__NavigationExtension* self) {
    return (QMetaObject*)self->metaObject();
}

void* KParts__NavigationExtension_Metacast(KParts__NavigationExtension* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KParts__NavigationExtension_Metacall(KParts__NavigationExtension* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KParts__NavigationExtension_Tr(const char* s) {
    auto _ret = KParts::NavigationExtension::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KParts__NavigationExtension_XOffset(KParts__NavigationExtension* self) {
    return self->xOffset();
}

int KParts__NavigationExtension_YOffset(KParts__NavigationExtension* self) {
    return self->yOffset();
}

void KParts__NavigationExtension_SaveState(KParts__NavigationExtension* self, QDataStream* stream) {
    self->saveState(*stream);
}

void KParts__NavigationExtension_RestoreState(KParts__NavigationExtension* self, QDataStream* stream) {
    self->restoreState(*stream);
}

bool KParts__NavigationExtension_IsURLDropHandlingEnabled(const KParts__NavigationExtension* self) {
    return self->isURLDropHandlingEnabled();
}

void KParts__NavigationExtension_SetURLDropHandlingEnabled(KParts__NavigationExtension* self, bool enable) {
    self->setURLDropHandlingEnabled(enable);
}

bool KParts__NavigationExtension_IsActionEnabled(const KParts__NavigationExtension* self, const char* name) {
    return self->isActionEnabled(name);
}

libqt_string KParts__NavigationExtension_ActionText(const KParts__NavigationExtension* self, const char* name) {
    auto _ret = self->actionText(name);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_map* /* of libqt_string to libqt_string */ KParts__NavigationExtension_ActionSlotMap() {
    QMap<QByteArray, QByteArray>* _ret = KParts::NavigationExtension::actionSlotMap();
    // Convert QMap<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret->size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret->size()));
    int _ctr = 0;
    for (auto _itr = _ret->keyValueBegin(); _itr != _ret->keyValueEnd(); ++_itr) {
        QByteArray _mapkey_qb = _itr->first;
        libqt_string _mapkey_str;
        _mapkey_str.len = _mapkey_qb.length();
        _mapkey_str.data = static_cast<char*>(malloc(_mapkey_str.len));
        memcpy((void*)_mapkey_str.data, _mapkey_qb.data(), _mapkey_str.len);
        _karr[_ctr] = _mapkey_str;
        QByteArray _mapval_qb = _itr->second;
        libqt_string _mapval_str;
        _mapval_str.len = _mapval_qb.length();
        _mapval_str.data = static_cast<char*>(malloc(_mapval_str.len));
        memcpy((void*)_mapval_str.data, _mapval_qb.data(), _mapval_str.len);
        _varr[_ctr] = _mapval_str;
        _ctr++;
    }
    libqt_map* _out = static_cast<libqt_map*>(malloc(sizeof(libqt_map)));
    _out->len = _ret->size();
    _out->keys = static_cast<void*>(_karr);
    _out->values = static_cast<void*>(_varr);
    return _out;
}

KParts__NavigationExtension* KParts__NavigationExtension_ChildObject(QObject* obj) {
    return KParts::NavigationExtension::childObject(obj);
}

void KParts__NavigationExtension_PasteRequest(KParts__NavigationExtension* self) {
    self->pasteRequest();
}

void KParts__NavigationExtension_EnableAction(KParts__NavigationExtension* self, const char* name, bool enabled) {
    self->enableAction(name, enabled);
}

void KParts__NavigationExtension_Connect_EnableAction(KParts__NavigationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__NavigationExtension*, const char*, bool) = reinterpret_cast<void (*)(KParts__NavigationExtension*, const char*, bool)>(slot);
    KParts::NavigationExtension::connect(self,
                                         static_cast<void (KParts::NavigationExtension::*)(const char*, bool)>(&KParts::NavigationExtension::enableAction),
                                         [self, slotFunc](const char* name, bool enabled) {
                                             const char* sigval1 = (const char*)name;
                                             bool sigval2 = enabled;
                                             slotFunc(self, sigval1, sigval2);
                                         });
}

void KParts__NavigationExtension_SetActionText(KParts__NavigationExtension* self, const char* name, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setActionText(name, text_QString);
}

void KParts__NavigationExtension_Connect_SetActionText(KParts__NavigationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__NavigationExtension*, const char*, const char*) = reinterpret_cast<void (*)(KParts__NavigationExtension*, const char*, const char*)>(slot);
    KParts::NavigationExtension::connect(self,
                                         static_cast<void (KParts::NavigationExtension::*)(const char*, const QString&)>(&KParts::NavigationExtension::setActionText),
                                         [self, slotFunc](const char* name, const QString& text) {
                                             const char* sigval1 = (const char*)name;
                                             const auto text_ret = text;
                                             // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                             QByteArray text_b = text_ret.toUtf8();
                                             auto text_str_len = text_b.length();
                                             const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
                                             memcpy((void*)text_str, text_b.data(), text_str_len);
                                             ((char*)text_str)[text_str_len] = '\0';
                                             const char* sigval2 = text_str;
                                             slotFunc(self, sigval1, sigval2);
                                             libqt_free(text_str);
                                         });
}

void KParts__NavigationExtension_OpenUrlRequest(KParts__NavigationExtension* self, const QUrl* url) {
    self->openUrlRequest(*url);
}

void KParts__NavigationExtension_Connect_OpenUrlRequest(KParts__NavigationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__NavigationExtension*, QUrl*) = reinterpret_cast<void (*)(KParts__NavigationExtension*, QUrl*)>(slot);
    KParts::NavigationExtension::connect(self,
                                         static_cast<void (KParts::NavigationExtension::*)(const QUrl&, const KParts::OpenUrlArguments&)>(&KParts::NavigationExtension::openUrlRequest),
                                         [self, slotFunc](const QUrl& url) {
                                             const QUrl& url_ret = url;
                                             // Cast returned reference into pointer
                                             QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
                                             slotFunc(self, sigval1);
                                         });
}

void KParts__NavigationExtension_OpenUrlRequestDelayed(KParts__NavigationExtension* self, const QUrl* url, const KParts__OpenUrlArguments* arguments) {
    self->openUrlRequestDelayed(*url, *arguments);
}

void KParts__NavigationExtension_Connect_OpenUrlRequestDelayed(KParts__NavigationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__NavigationExtension*, QUrl*, KParts__OpenUrlArguments*) = reinterpret_cast<void (*)(KParts__NavigationExtension*, QUrl*, KParts__OpenUrlArguments*)>(slot);
    KParts::NavigationExtension::connect(self,
                                         static_cast<void (KParts::NavigationExtension::*)(const QUrl&, const KParts::OpenUrlArguments&)>(&KParts::NavigationExtension::openUrlRequestDelayed),
                                         [self, slotFunc](const QUrl& url, const KParts::OpenUrlArguments& arguments) {
                                             const QUrl& url_ret = url;
                                             // Cast returned reference into pointer
                                             QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
                                             const KParts::OpenUrlArguments& arguments_ret = arguments;
                                             // Cast returned reference into pointer
                                             KParts__OpenUrlArguments* sigval2 = const_cast<KParts::OpenUrlArguments*>(&arguments_ret);
                                             slotFunc(self, sigval1, sigval2);
                                         });
}

void KParts__NavigationExtension_OpenUrlNotify(KParts__NavigationExtension* self) {
    self->openUrlNotify();
}

void KParts__NavigationExtension_Connect_OpenUrlNotify(KParts__NavigationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__NavigationExtension*) = reinterpret_cast<void (*)(KParts__NavigationExtension*)>(slot);
    KParts::NavigationExtension::connect(self,
                                         static_cast<void (KParts::NavigationExtension::*)()>(&KParts::NavigationExtension::openUrlNotify),
                                         [self, slotFunc]() {
                                             slotFunc(self);
                                         });
}

void KParts__NavigationExtension_SetLocationBarUrl(KParts__NavigationExtension* self, const libqt_string url) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    self->setLocationBarUrl(url_QString);
}

void KParts__NavigationExtension_Connect_SetLocationBarUrl(KParts__NavigationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__NavigationExtension*, const char*) = reinterpret_cast<void (*)(KParts__NavigationExtension*, const char*)>(slot);
    KParts::NavigationExtension::connect(self,
                                         static_cast<void (KParts::NavigationExtension::*)(const QString&)>(&KParts::NavigationExtension::setLocationBarUrl),
                                         [self, slotFunc](const QString& url) {
                                             const auto url_ret = url;
                                             // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                             QByteArray url_b = url_ret.toUtf8();
                                             auto url_str_len = url_b.length();
                                             const char* url_str = static_cast<const char*>(malloc(url_str_len + 1));
                                             memcpy((void*)url_str, url_b.data(), url_str_len);
                                             ((char*)url_str)[url_str_len] = '\0';
                                             const char* sigval1 = url_str;
                                             slotFunc(self, sigval1);
                                             libqt_free(url_str);
                                         });
}

void KParts__NavigationExtension_SetIconUrl(KParts__NavigationExtension* self, const QUrl* url) {
    self->setIconUrl(*url);
}

void KParts__NavigationExtension_Connect_SetIconUrl(KParts__NavigationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__NavigationExtension*, QUrl*) = reinterpret_cast<void (*)(KParts__NavigationExtension*, QUrl*)>(slot);
    KParts::NavigationExtension::connect(self,
                                         static_cast<void (KParts::NavigationExtension::*)(const QUrl&)>(&KParts::NavigationExtension::setIconUrl),
                                         [self, slotFunc](const QUrl& url) {
                                             const QUrl& url_ret = url;
                                             // Cast returned reference into pointer
                                             QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
                                             slotFunc(self, sigval1);
                                         });
}

void KParts__NavigationExtension_CreateNewWindow(KParts__NavigationExtension* self, const QUrl* url) {
    self->createNewWindow(*url);
}

void KParts__NavigationExtension_Connect_CreateNewWindow(KParts__NavigationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__NavigationExtension*, QUrl*) = reinterpret_cast<void (*)(KParts__NavigationExtension*, QUrl*)>(slot);
    KParts::NavigationExtension::connect(self,
                                         static_cast<void (KParts::NavigationExtension::*)(const QUrl&)>(&KParts::NavigationExtension::createNewWindow),
                                         [self, slotFunc](const QUrl& url) {
                                             const QUrl& url_ret = url;
                                             // Cast returned reference into pointer
                                             QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
                                             slotFunc(self, sigval1);
                                         });
}

void KParts__NavigationExtension_LoadingProgress(KParts__NavigationExtension* self, int percent) {
    self->loadingProgress(static_cast<int>(percent));
}

void KParts__NavigationExtension_Connect_LoadingProgress(KParts__NavigationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__NavigationExtension*, int) = reinterpret_cast<void (*)(KParts__NavigationExtension*, int)>(slot);
    KParts::NavigationExtension::connect(self,
                                         static_cast<void (KParts::NavigationExtension::*)(int)>(&KParts::NavigationExtension::loadingProgress),
                                         [self, slotFunc](int percent) {
                                             int sigval1 = percent;
                                             slotFunc(self, sigval1);
                                         });
}

void KParts__NavigationExtension_SpeedProgress(KParts__NavigationExtension* self, int bytesPerSecond) {
    self->speedProgress(static_cast<int>(bytesPerSecond));
}

void KParts__NavigationExtension_Connect_SpeedProgress(KParts__NavigationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__NavigationExtension*, int) = reinterpret_cast<void (*)(KParts__NavigationExtension*, int)>(slot);
    KParts::NavigationExtension::connect(self,
                                         static_cast<void (KParts::NavigationExtension::*)(int)>(&KParts::NavigationExtension::speedProgress),
                                         [self, slotFunc](int bytesPerSecond) {
                                             int sigval1 = bytesPerSecond;
                                             slotFunc(self, sigval1);
                                         });
}

void KParts__NavigationExtension_InfoMessage(KParts__NavigationExtension* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->infoMessage(param1_QString);
}

void KParts__NavigationExtension_Connect_InfoMessage(KParts__NavigationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__NavigationExtension*, const char*) = reinterpret_cast<void (*)(KParts__NavigationExtension*, const char*)>(slot);
    KParts::NavigationExtension::connect(self,
                                         static_cast<void (KParts::NavigationExtension::*)(const QString&)>(&KParts::NavigationExtension::infoMessage),
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

void KParts__NavigationExtension_PopupMenu(KParts__NavigationExtension* self, const QPoint* global, const KFileItemList* items) {
    self->popupMenu(*global, *items);
}

void KParts__NavigationExtension_Connect_PopupMenu(KParts__NavigationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__NavigationExtension*, QPoint*, KFileItemList*) = reinterpret_cast<void (*)(KParts__NavigationExtension*, QPoint*, KFileItemList*)>(slot);
    KParts::NavigationExtension::connect(self,
                                         static_cast<void (KParts::NavigationExtension::*)(const QPoint&, const KFileItemList&, const KParts::OpenUrlArguments&, KParts::NavigationExtension::PopupFlags, const QMap<QString, QList<QAction*>>&)>(&KParts::NavigationExtension::popupMenu),
                                         [self, slotFunc](const QPoint& global, const KFileItemList& items) {
                                             const QPoint& global_ret = global;
                                             // Cast returned reference into pointer
                                             QPoint* sigval1 = const_cast<QPoint*>(&global_ret);
                                             const KFileItemList& items_ret = items;
                                             // Cast returned reference into pointer
                                             KFileItemList* sigval2 = const_cast<KFileItemList*>(&items_ret);
                                             slotFunc(self, sigval1, sigval2);
                                         });
}

void KParts__NavigationExtension_PopupMenu2(KParts__NavigationExtension* self, const QPoint* global, const QUrl* url) {
    self->popupMenu(*global, *url);
}

void KParts__NavigationExtension_Connect_PopupMenu2(KParts__NavigationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__NavigationExtension*, QPoint*, QUrl*) = reinterpret_cast<void (*)(KParts__NavigationExtension*, QPoint*, QUrl*)>(slot);
    KParts::NavigationExtension::connect(self,
                                         static_cast<void (KParts::NavigationExtension::*)(const QPoint&, const QUrl&, mode_t, const KParts::OpenUrlArguments&, KParts::NavigationExtension::PopupFlags, const QMap<QString, QList<QAction*>>&)>(&KParts::NavigationExtension::popupMenu),
                                         [self, slotFunc](const QPoint& global, const QUrl& url) {
                                             const QPoint& global_ret = global;
                                             // Cast returned reference into pointer
                                             QPoint* sigval1 = const_cast<QPoint*>(&global_ret);
                                             const QUrl& url_ret = url;
                                             // Cast returned reference into pointer
                                             QUrl* sigval2 = const_cast<QUrl*>(&url_ret);
                                             slotFunc(self, sigval1, sigval2);
                                         });
}

void KParts__NavigationExtension_SelectionInfo(KParts__NavigationExtension* self, const KFileItemList* items) {
    self->selectionInfo(*items);
}

void KParts__NavigationExtension_Connect_SelectionInfo(KParts__NavigationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__NavigationExtension*, KFileItemList*) = reinterpret_cast<void (*)(KParts__NavigationExtension*, KFileItemList*)>(slot);
    KParts::NavigationExtension::connect(self,
                                         static_cast<void (KParts::NavigationExtension::*)(const KFileItemList&)>(&KParts::NavigationExtension::selectionInfo),
                                         [self, slotFunc](const KFileItemList& items) {
                                             const KFileItemList& items_ret = items;
                                             // Cast returned reference into pointer
                                             KFileItemList* sigval1 = const_cast<KFileItemList*>(&items_ret);
                                             slotFunc(self, sigval1);
                                         });
}

void KParts__NavigationExtension_MouseOverInfo(KParts__NavigationExtension* self, const KFileItem* item) {
    self->mouseOverInfo(*item);
}

void KParts__NavigationExtension_Connect_MouseOverInfo(KParts__NavigationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__NavigationExtension*, KFileItem*) = reinterpret_cast<void (*)(KParts__NavigationExtension*, KFileItem*)>(slot);
    KParts::NavigationExtension::connect(self,
                                         static_cast<void (KParts::NavigationExtension::*)(const KFileItem&)>(&KParts::NavigationExtension::mouseOverInfo),
                                         [self, slotFunc](const KFileItem& item) {
                                             const KFileItem& item_ret = item;
                                             // Cast returned reference into pointer
                                             KFileItem* sigval1 = const_cast<KFileItem*>(&item_ret);
                                             slotFunc(self, sigval1);
                                         });
}

void KParts__NavigationExtension_AddWebSideBar(KParts__NavigationExtension* self, const QUrl* url, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->addWebSideBar(*url, name_QString);
}

void KParts__NavigationExtension_Connect_AddWebSideBar(KParts__NavigationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__NavigationExtension*, QUrl*, const char*) = reinterpret_cast<void (*)(KParts__NavigationExtension*, QUrl*, const char*)>(slot);
    KParts::NavigationExtension::connect(self,
                                         static_cast<void (KParts::NavigationExtension::*)(const QUrl&, const QString&)>(&KParts::NavigationExtension::addWebSideBar),
                                         [self, slotFunc](const QUrl& url, const QString& name) {
                                             const QUrl& url_ret = url;
                                             // Cast returned reference into pointer
                                             QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
                                             const auto name_ret = name;
                                             // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                             QByteArray name_b = name_ret.toUtf8();
                                             auto name_str_len = name_b.length();
                                             const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
                                             memcpy((void*)name_str, name_b.data(), name_str_len);
                                             ((char*)name_str)[name_str_len] = '\0';
                                             const char* sigval2 = name_str;
                                             slotFunc(self, sigval1, sigval2);
                                             libqt_free(name_str);
                                         });
}

void KParts__NavigationExtension_MoveTopLevelWidget(KParts__NavigationExtension* self, int x, int y) {
    self->moveTopLevelWidget(static_cast<int>(x), static_cast<int>(y));
}

void KParts__NavigationExtension_Connect_MoveTopLevelWidget(KParts__NavigationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__NavigationExtension*, int, int) = reinterpret_cast<void (*)(KParts__NavigationExtension*, int, int)>(slot);
    KParts::NavigationExtension::connect(self,
                                         static_cast<void (KParts::NavigationExtension::*)(int, int)>(&KParts::NavigationExtension::moveTopLevelWidget),
                                         [self, slotFunc](int x, int y) {
                                             int sigval1 = x;
                                             int sigval2 = y;
                                             slotFunc(self, sigval1, sigval2);
                                         });
}

void KParts__NavigationExtension_ResizeTopLevelWidget(KParts__NavigationExtension* self, int w, int h) {
    self->resizeTopLevelWidget(static_cast<int>(w), static_cast<int>(h));
}

void KParts__NavigationExtension_Connect_ResizeTopLevelWidget(KParts__NavigationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__NavigationExtension*, int, int) = reinterpret_cast<void (*)(KParts__NavigationExtension*, int, int)>(slot);
    KParts::NavigationExtension::connect(self,
                                         static_cast<void (KParts::NavigationExtension::*)(int, int)>(&KParts::NavigationExtension::resizeTopLevelWidget),
                                         [self, slotFunc](int w, int h) {
                                             int sigval1 = w;
                                             int sigval2 = h;
                                             slotFunc(self, sigval1, sigval2);
                                         });
}

void KParts__NavigationExtension_RequestFocus(KParts__NavigationExtension* self, KParts__ReadOnlyPart* part) {
    self->requestFocus(part);
}

void KParts__NavigationExtension_Connect_RequestFocus(KParts__NavigationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__NavigationExtension*, KParts__ReadOnlyPart*) = reinterpret_cast<void (*)(KParts__NavigationExtension*, KParts__ReadOnlyPart*)>(slot);
    KParts::NavigationExtension::connect(self,
                                         static_cast<void (KParts::NavigationExtension::*)(KParts::ReadOnlyPart*)>(&KParts::NavigationExtension::requestFocus),
                                         [self, slotFunc](KParts::ReadOnlyPart* part) {
                                             KParts__ReadOnlyPart* sigval1 = part;
                                             slotFunc(self, sigval1);
                                         });
}

void KParts__NavigationExtension_SetPageSecurity(KParts__NavigationExtension* self, int pageSecurity) {
    self->setPageSecurity(static_cast<int>(pageSecurity));
}

void KParts__NavigationExtension_Connect_SetPageSecurity(KParts__NavigationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__NavigationExtension*, int) = reinterpret_cast<void (*)(KParts__NavigationExtension*, int)>(slot);
    KParts::NavigationExtension::connect(self,
                                         static_cast<void (KParts::NavigationExtension::*)(int)>(&KParts::NavigationExtension::setPageSecurity),
                                         [self, slotFunc](int pageSecurity) {
                                             int sigval1 = pageSecurity;
                                             slotFunc(self, sigval1);
                                         });
}

void KParts__NavigationExtension_ItemsRemoved(KParts__NavigationExtension* self, const KFileItemList* items) {
    self->itemsRemoved(*items);
}

void KParts__NavigationExtension_Connect_ItemsRemoved(KParts__NavigationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__NavigationExtension*, KFileItemList*) = reinterpret_cast<void (*)(KParts__NavigationExtension*, KFileItemList*)>(slot);
    KParts::NavigationExtension::connect(self,
                                         static_cast<void (KParts::NavigationExtension::*)(const KFileItemList&)>(&KParts::NavigationExtension::itemsRemoved),
                                         [self, slotFunc](const KFileItemList& items) {
                                             const KFileItemList& items_ret = items;
                                             // Cast returned reference into pointer
                                             KFileItemList* sigval1 = const_cast<KFileItemList*>(&items_ret);
                                             slotFunc(self, sigval1);
                                         });
}

libqt_string KParts__NavigationExtension_Tr2(const char* s, const char* c) {
    auto _ret = KParts::NavigationExtension::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KParts__NavigationExtension_Tr3(const char* s, const char* c, int n) {
    auto _ret = KParts::NavigationExtension::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KParts__NavigationExtension_OpenUrlRequest2(KParts__NavigationExtension* self, const QUrl* url, const KParts__OpenUrlArguments* arguments) {
    self->openUrlRequest(*url, *arguments);
}

void KParts__NavigationExtension_Connect_OpenUrlRequest2(KParts__NavigationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__NavigationExtension*, QUrl*, KParts__OpenUrlArguments*) = reinterpret_cast<void (*)(KParts__NavigationExtension*, QUrl*, KParts__OpenUrlArguments*)>(slot);
    KParts::NavigationExtension::connect(self,
                                         static_cast<void (KParts::NavigationExtension::*)(const QUrl&, const KParts::OpenUrlArguments&)>(&KParts::NavigationExtension::openUrlRequest),
                                         [self, slotFunc](const QUrl& url, const KParts::OpenUrlArguments& arguments) {
                                             const QUrl& url_ret = url;
                                             // Cast returned reference into pointer
                                             QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
                                             const KParts::OpenUrlArguments& arguments_ret = arguments;
                                             // Cast returned reference into pointer
                                             KParts__OpenUrlArguments* sigval2 = const_cast<KParts::OpenUrlArguments*>(&arguments_ret);
                                             slotFunc(self, sigval1, sigval2);
                                         });
}

void KParts__NavigationExtension_PopupMenu3(KParts__NavigationExtension* self, const QPoint* global, const KFileItemList* items, const KParts__OpenUrlArguments* arguments) {
    self->popupMenu(*global, *items, *arguments);
}

void KParts__NavigationExtension_Connect_PopupMenu3(KParts__NavigationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__NavigationExtension*, QPoint*, KFileItemList*, KParts__OpenUrlArguments*) = reinterpret_cast<void (*)(KParts__NavigationExtension*, QPoint*, KFileItemList*, KParts__OpenUrlArguments*)>(slot);
    KParts::NavigationExtension::connect(self,
                                         static_cast<void (KParts::NavigationExtension::*)(const QPoint&, const KFileItemList&, const KParts::OpenUrlArguments&, KParts::NavigationExtension::PopupFlags, const QMap<QString, QList<QAction*>>&)>(&KParts::NavigationExtension::popupMenu),
                                         [self, slotFunc](const QPoint& global, const KFileItemList& items, const KParts::OpenUrlArguments& arguments) {
                                             const QPoint& global_ret = global;
                                             // Cast returned reference into pointer
                                             QPoint* sigval1 = const_cast<QPoint*>(&global_ret);
                                             const KFileItemList& items_ret = items;
                                             // Cast returned reference into pointer
                                             KFileItemList* sigval2 = const_cast<KFileItemList*>(&items_ret);
                                             const KParts::OpenUrlArguments& arguments_ret = arguments;
                                             // Cast returned reference into pointer
                                             KParts__OpenUrlArguments* sigval3 = const_cast<KParts::OpenUrlArguments*>(&arguments_ret);
                                             slotFunc(self, sigval1, sigval2, sigval3);
                                         });
}

void KParts__NavigationExtension_PopupMenu4(KParts__NavigationExtension* self, const QPoint* global, const KFileItemList* items, const KParts__OpenUrlArguments* arguments, int flags) {
    self->popupMenu(*global, *items, *arguments, static_cast<KParts::NavigationExtension::PopupFlags>(flags));
}

void KParts__NavigationExtension_Connect_PopupMenu4(KParts__NavigationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__NavigationExtension*, QPoint*, KFileItemList*, KParts__OpenUrlArguments*, int) = reinterpret_cast<void (*)(KParts__NavigationExtension*, QPoint*, KFileItemList*, KParts__OpenUrlArguments*, int)>(slot);
    KParts::NavigationExtension::connect(self,
                                         static_cast<void (KParts::NavigationExtension::*)(const QPoint&, const KFileItemList&, const KParts::OpenUrlArguments&, KParts::NavigationExtension::PopupFlags, const QMap<QString, QList<QAction*>>&)>(&KParts::NavigationExtension::popupMenu),
                                         [self, slotFunc](const QPoint& global, const KFileItemList& items, const KParts::OpenUrlArguments& arguments, KParts::NavigationExtension::PopupFlags flags) {
                                             const QPoint& global_ret = global;
                                             // Cast returned reference into pointer
                                             QPoint* sigval1 = const_cast<QPoint*>(&global_ret);
                                             const KFileItemList& items_ret = items;
                                             // Cast returned reference into pointer
                                             KFileItemList* sigval2 = const_cast<KFileItemList*>(&items_ret);
                                             const KParts::OpenUrlArguments& arguments_ret = arguments;
                                             // Cast returned reference into pointer
                                             KParts__OpenUrlArguments* sigval3 = const_cast<KParts::OpenUrlArguments*>(&arguments_ret);
                                             int sigval4 = static_cast<int>(flags);
                                             slotFunc(self, sigval1, sigval2, sigval3, sigval4);
                                         });
}

void KParts__NavigationExtension_PopupMenu5(KParts__NavigationExtension* self, const QPoint* global, const KFileItemList* items, const KParts__OpenUrlArguments* arguments, int flags, const libqt_map /* of libqt_string to libqt_list of QAction* */ actionGroups) {
    QMap<QString, QList<QAction*>> actionGroups_QMap;
    libqt_string* actionGroups_karr = static_cast<libqt_string*>(actionGroups.keys);
    libqt_list /* of QAction* */* actionGroups_varr = static_cast<libqt_list /* of QAction* */*>(actionGroups.values);
    for (size_t i = 0; i < actionGroups.len; ++i) {
        QString actionGroups_karr_i_QString = QString::fromUtf8(actionGroups_karr[i].data, actionGroups_karr[i].len);
        QList<QAction*> actionGroups_varr_i_QList;
        actionGroups_varr_i_QList.reserve(actionGroups_varr[i].len);
        QAction** actionGroups_varr_i_arr = static_cast<QAction**>(actionGroups_varr[i].data);
        for (size_t j = 0; j < actionGroups_varr[i].len; ++j) {
            actionGroups_varr_i_QList.push_back(actionGroups_varr_i_arr[j]);
        }
        actionGroups_QMap.insert(actionGroups_karr_i_QString, actionGroups_varr_i_QList);
    }
    self->popupMenu(*global, *items, *arguments, static_cast<KParts::NavigationExtension::PopupFlags>(flags), actionGroups_QMap);
}

void KParts__NavigationExtension_Connect_PopupMenu5(KParts__NavigationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__NavigationExtension*, QPoint*, KFileItemList*, KParts__OpenUrlArguments*, int, libqt_map /* of libqt_string to libqt_list of QAction* */) = reinterpret_cast<void (*)(KParts__NavigationExtension*, QPoint*, KFileItemList*, KParts__OpenUrlArguments*, int, libqt_map /* of libqt_string to libqt_list of QAction* */)>(slot);
    KParts::NavigationExtension::connect(self,
                                         static_cast<void (KParts::NavigationExtension::*)(const QPoint&, const KFileItemList&, const KParts::OpenUrlArguments&, KParts::NavigationExtension::PopupFlags, const QMap<QString, QList<QAction*>>&)>(&KParts::NavigationExtension::popupMenu),
                                         [self, slotFunc](const QPoint& global, const KFileItemList& items, const KParts::OpenUrlArguments& arguments, KParts::NavigationExtension::PopupFlags flags, const QMap<QString, QList<QAction*>>& actionGroups) {
                                             const QPoint& global_ret = global;
                                             // Cast returned reference into pointer
                                             QPoint* sigval1 = const_cast<QPoint*>(&global_ret);
                                             const KFileItemList& items_ret = items;
                                             // Cast returned reference into pointer
                                             KFileItemList* sigval2 = const_cast<KFileItemList*>(&items_ret);
                                             const KParts::OpenUrlArguments& arguments_ret = arguments;
                                             // Cast returned reference into pointer
                                             KParts__OpenUrlArguments* sigval3 = const_cast<KParts::OpenUrlArguments*>(&arguments_ret);
                                             int sigval4 = static_cast<int>(flags);
                                             const QMap<QString, QList<QAction*>>& actionGroups_ret = actionGroups;
                                             // Convert QMap<> from C++ memory to manually-managed C memory
                                             libqt_string* actionGroups_karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * actionGroups_ret.size()));
                                             libqt_list /* of QAction* */* actionGroups_varr = static_cast<libqt_list /* of QAction* */*>(malloc(sizeof(libqt_list /* of QAction* */) * actionGroups_ret.size()));
                                             int actionGroups_ctr = 0;
                                             for (auto actionGroups_itr = actionGroups_ret.keyValueBegin(); actionGroups_itr != actionGroups_ret.keyValueEnd(); ++actionGroups_itr) {
                                                 auto actionGroups_mapkey_ret = actionGroups_itr->first;
                                                 // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
                                                 QByteArray actionGroups_mapkey_b = actionGroups_mapkey_ret.toUtf8();
                                                 libqt_string actionGroups_mapkey_str;
                                                 actionGroups_mapkey_str.len = actionGroups_mapkey_b.length();
                                                 actionGroups_mapkey_str.data = static_cast<const char*>(malloc(actionGroups_mapkey_str.len + 1));
                                                 memcpy((void*)actionGroups_mapkey_str.data, actionGroups_mapkey_b.data(), actionGroups_mapkey_str.len);
                                                 ((char*)actionGroups_mapkey_str.data)[actionGroups_mapkey_str.len] = '\0';
                                                 actionGroups_karr[actionGroups_ctr] = actionGroups_mapkey_str;
                                                 QList<QAction*> actionGroups_mapval_ret = actionGroups_itr->second;
                                                 // Convert QList<> from C++ memory to manually-managed C memory
                                                 QAction** actionGroups_mapval_arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (actionGroups_mapval_ret.size())));
                                                 for (qsizetype i = 0; i < actionGroups_mapval_ret.size(); ++i) {
                                                     actionGroups_mapval_arr[i] = actionGroups_mapval_ret[i];
                                                 }
                                                 libqt_list actionGroups_mapval_out;
                                                 actionGroups_mapval_out.len = actionGroups_mapval_ret.size();
                                                 actionGroups_mapval_out.data = static_cast<void*>(actionGroups_mapval_arr);
                                                 actionGroups_varr[actionGroups_ctr] = actionGroups_mapval_out;
                                                 actionGroups_ctr++;
                                             }
                                             libqt_map actionGroups_out;
                                             actionGroups_out.len = actionGroups_ret.size();
                                             actionGroups_out.keys = static_cast<void*>(actionGroups_karr);
                                             actionGroups_out.values = static_cast<void*>(actionGroups_varr);
                                             libqt_map /* of libqt_string to libqt_list of QAction* */ sigval5 = actionGroups_out;
                                             slotFunc(self, sigval1, sigval2, sigval3, sigval4, sigval5);
                                         });
}

void KParts__NavigationExtension_PopupMenu32(KParts__NavigationExtension* self, const QPoint* global, const QUrl* url, mode_t mode) {
    self->popupMenu(*global, *url, mode);
}

void KParts__NavigationExtension_Connect_PopupMenu32(KParts__NavigationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__NavigationExtension*, QPoint*, QUrl*, mode_t) = reinterpret_cast<void (*)(KParts__NavigationExtension*, QPoint*, QUrl*, mode_t)>(slot);
    KParts::NavigationExtension::connect(self,
                                         static_cast<void (KParts::NavigationExtension::*)(const QPoint&, const QUrl&, mode_t, const KParts::OpenUrlArguments&, KParts::NavigationExtension::PopupFlags, const QMap<QString, QList<QAction*>>&)>(&KParts::NavigationExtension::popupMenu),
                                         [self, slotFunc](const QPoint& global, const QUrl& url, mode_t mode) {
                                             const QPoint& global_ret = global;
                                             // Cast returned reference into pointer
                                             QPoint* sigval1 = const_cast<QPoint*>(&global_ret);
                                             const QUrl& url_ret = url;
                                             // Cast returned reference into pointer
                                             QUrl* sigval2 = const_cast<QUrl*>(&url_ret);
                                             mode_t sigval3 = mode;
                                             slotFunc(self, sigval1, sigval2, sigval3);
                                         });
}

void KParts__NavigationExtension_PopupMenu42(KParts__NavigationExtension* self, const QPoint* global, const QUrl* url, mode_t mode, const KParts__OpenUrlArguments* arguments) {
    self->popupMenu(*global, *url, mode, *arguments);
}

void KParts__NavigationExtension_Connect_PopupMenu42(KParts__NavigationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__NavigationExtension*, QPoint*, QUrl*, mode_t, KParts__OpenUrlArguments*) = reinterpret_cast<void (*)(KParts__NavigationExtension*, QPoint*, QUrl*, mode_t, KParts__OpenUrlArguments*)>(slot);
    KParts::NavigationExtension::connect(self,
                                         static_cast<void (KParts::NavigationExtension::*)(const QPoint&, const QUrl&, mode_t, const KParts::OpenUrlArguments&, KParts::NavigationExtension::PopupFlags, const QMap<QString, QList<QAction*>>&)>(&KParts::NavigationExtension::popupMenu),
                                         [self, slotFunc](const QPoint& global, const QUrl& url, mode_t mode, const KParts::OpenUrlArguments& arguments) {
                                             const QPoint& global_ret = global;
                                             // Cast returned reference into pointer
                                             QPoint* sigval1 = const_cast<QPoint*>(&global_ret);
                                             const QUrl& url_ret = url;
                                             // Cast returned reference into pointer
                                             QUrl* sigval2 = const_cast<QUrl*>(&url_ret);
                                             mode_t sigval3 = mode;
                                             const KParts::OpenUrlArguments& arguments_ret = arguments;
                                             // Cast returned reference into pointer
                                             KParts__OpenUrlArguments* sigval4 = const_cast<KParts::OpenUrlArguments*>(&arguments_ret);
                                             slotFunc(self, sigval1, sigval2, sigval3, sigval4);
                                         });
}

void KParts__NavigationExtension_PopupMenu52(KParts__NavigationExtension* self, const QPoint* global, const QUrl* url, mode_t mode, const KParts__OpenUrlArguments* arguments, int flags) {
    self->popupMenu(*global, *url, mode, *arguments, static_cast<KParts::NavigationExtension::PopupFlags>(flags));
}

void KParts__NavigationExtension_Connect_PopupMenu52(KParts__NavigationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__NavigationExtension*, QPoint*, QUrl*, mode_t, KParts__OpenUrlArguments*, int) = reinterpret_cast<void (*)(KParts__NavigationExtension*, QPoint*, QUrl*, mode_t, KParts__OpenUrlArguments*, int)>(slot);
    KParts::NavigationExtension::connect(self,
                                         static_cast<void (KParts::NavigationExtension::*)(const QPoint&, const QUrl&, mode_t, const KParts::OpenUrlArguments&, KParts::NavigationExtension::PopupFlags, const QMap<QString, QList<QAction*>>&)>(&KParts::NavigationExtension::popupMenu),
                                         [self, slotFunc](const QPoint& global, const QUrl& url, mode_t mode, const KParts::OpenUrlArguments& arguments, KParts::NavigationExtension::PopupFlags flags) {
                                             const QPoint& global_ret = global;
                                             // Cast returned reference into pointer
                                             QPoint* sigval1 = const_cast<QPoint*>(&global_ret);
                                             const QUrl& url_ret = url;
                                             // Cast returned reference into pointer
                                             QUrl* sigval2 = const_cast<QUrl*>(&url_ret);
                                             mode_t sigval3 = mode;
                                             const KParts::OpenUrlArguments& arguments_ret = arguments;
                                             // Cast returned reference into pointer
                                             KParts__OpenUrlArguments* sigval4 = const_cast<KParts::OpenUrlArguments*>(&arguments_ret);
                                             int sigval5 = static_cast<int>(flags);
                                             slotFunc(self, sigval1, sigval2, sigval3, sigval4, sigval5);
                                         });
}

void KParts__NavigationExtension_PopupMenu6(KParts__NavigationExtension* self, const QPoint* global, const QUrl* url, mode_t mode, const KParts__OpenUrlArguments* arguments, int flags, const libqt_map /* of libqt_string to libqt_list of QAction* */ actionGroups) {
    QMap<QString, QList<QAction*>> actionGroups_QMap;
    libqt_string* actionGroups_karr = static_cast<libqt_string*>(actionGroups.keys);
    libqt_list /* of QAction* */* actionGroups_varr = static_cast<libqt_list /* of QAction* */*>(actionGroups.values);
    for (size_t i = 0; i < actionGroups.len; ++i) {
        QString actionGroups_karr_i_QString = QString::fromUtf8(actionGroups_karr[i].data, actionGroups_karr[i].len);
        QList<QAction*> actionGroups_varr_i_QList;
        actionGroups_varr_i_QList.reserve(actionGroups_varr[i].len);
        QAction** actionGroups_varr_i_arr = static_cast<QAction**>(actionGroups_varr[i].data);
        for (size_t j = 0; j < actionGroups_varr[i].len; ++j) {
            actionGroups_varr_i_QList.push_back(actionGroups_varr_i_arr[j]);
        }
        actionGroups_QMap.insert(actionGroups_karr_i_QString, actionGroups_varr_i_QList);
    }
    self->popupMenu(*global, *url, mode, *arguments, static_cast<KParts::NavigationExtension::PopupFlags>(flags), actionGroups_QMap);
}

void KParts__NavigationExtension_Connect_PopupMenu6(KParts__NavigationExtension* self, intptr_t slot) {
    void (*slotFunc)(KParts__NavigationExtension*, QPoint*, QUrl*, mode_t, KParts__OpenUrlArguments*, int, libqt_map /* of libqt_string to libqt_list of QAction* */) = reinterpret_cast<void (*)(KParts__NavigationExtension*, QPoint*, QUrl*, mode_t, KParts__OpenUrlArguments*, int, libqt_map /* of libqt_string to libqt_list of QAction* */)>(slot);
    KParts::NavigationExtension::connect(self,
                                         static_cast<void (KParts::NavigationExtension::*)(const QPoint&, const QUrl&, mode_t, const KParts::OpenUrlArguments&, KParts::NavigationExtension::PopupFlags, const QMap<QString, QList<QAction*>>&)>(&KParts::NavigationExtension::popupMenu),
                                         [self, slotFunc](const QPoint& global, const QUrl& url, mode_t mode, const KParts::OpenUrlArguments& arguments, KParts::NavigationExtension::PopupFlags flags, const QMap<QString, QList<QAction*>>& actionGroups) {
                                             const QPoint& global_ret = global;
                                             // Cast returned reference into pointer
                                             QPoint* sigval1 = const_cast<QPoint*>(&global_ret);
                                             const QUrl& url_ret = url;
                                             // Cast returned reference into pointer
                                             QUrl* sigval2 = const_cast<QUrl*>(&url_ret);
                                             mode_t sigval3 = mode;
                                             const KParts::OpenUrlArguments& arguments_ret = arguments;
                                             // Cast returned reference into pointer
                                             KParts__OpenUrlArguments* sigval4 = const_cast<KParts::OpenUrlArguments*>(&arguments_ret);
                                             int sigval5 = static_cast<int>(flags);
                                             const QMap<QString, QList<QAction*>>& actionGroups_ret = actionGroups;
                                             // Convert QMap<> from C++ memory to manually-managed C memory
                                             libqt_string* actionGroups_karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * actionGroups_ret.size()));
                                             libqt_list /* of QAction* */* actionGroups_varr = static_cast<libqt_list /* of QAction* */*>(malloc(sizeof(libqt_list /* of QAction* */) * actionGroups_ret.size()));
                                             int actionGroups_ctr = 0;
                                             for (auto actionGroups_itr = actionGroups_ret.keyValueBegin(); actionGroups_itr != actionGroups_ret.keyValueEnd(); ++actionGroups_itr) {
                                                 auto actionGroups_mapkey_ret = actionGroups_itr->first;
                                                 // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
                                                 QByteArray actionGroups_mapkey_b = actionGroups_mapkey_ret.toUtf8();
                                                 libqt_string actionGroups_mapkey_str;
                                                 actionGroups_mapkey_str.len = actionGroups_mapkey_b.length();
                                                 actionGroups_mapkey_str.data = static_cast<const char*>(malloc(actionGroups_mapkey_str.len + 1));
                                                 memcpy((void*)actionGroups_mapkey_str.data, actionGroups_mapkey_b.data(), actionGroups_mapkey_str.len);
                                                 ((char*)actionGroups_mapkey_str.data)[actionGroups_mapkey_str.len] = '\0';
                                                 actionGroups_karr[actionGroups_ctr] = actionGroups_mapkey_str;
                                                 QList<QAction*> actionGroups_mapval_ret = actionGroups_itr->second;
                                                 // Convert QList<> from C++ memory to manually-managed C memory
                                                 QAction** actionGroups_mapval_arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (actionGroups_mapval_ret.size())));
                                                 for (qsizetype i = 0; i < actionGroups_mapval_ret.size(); ++i) {
                                                     actionGroups_mapval_arr[i] = actionGroups_mapval_ret[i];
                                                 }
                                                 libqt_list actionGroups_mapval_out;
                                                 actionGroups_mapval_out.len = actionGroups_mapval_ret.size();
                                                 actionGroups_mapval_out.data = static_cast<void*>(actionGroups_mapval_arr);
                                                 actionGroups_varr[actionGroups_ctr] = actionGroups_mapval_out;
                                                 actionGroups_ctr++;
                                             }
                                             libqt_map actionGroups_out;
                                             actionGroups_out.len = actionGroups_ret.size();
                                             actionGroups_out.keys = static_cast<void*>(actionGroups_karr);
                                             actionGroups_out.values = static_cast<void*>(actionGroups_varr);
                                             libqt_map /* of libqt_string to libqt_list of QAction* */ sigval6 = actionGroups_out;
                                             slotFunc(self, sigval1, sigval2, sigval3, sigval4, sigval5, sigval6);
                                         });
}

// Base class handler implementation
QMetaObject* KParts__NavigationExtension_SuperMetaObject(const KParts__NavigationExtension* self) {
    auto* vkpartsnavigationextension = const_cast<VirtualKPartsNavigationExtension*>(dynamic_cast<const VirtualKPartsNavigationExtension*>(self));
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_MetaObject_IsBase(true);
        return (QMetaObject*)vkpartsnavigationextension->metaObject();
    } else {
        return (QMetaObject*)self->KParts::NavigationExtension::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnMetaObject(const KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = const_cast<VirtualKPartsNavigationExtension*>(dynamic_cast<const VirtualKPartsNavigationExtension*>(self));
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension)
        vkpartsnavigationextension->setKParts__NavigationExtension_MetaObject_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* KParts__NavigationExtension_SuperMetacast(KParts__NavigationExtension* self, const char* param1) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_Metacast_IsBase(true);
        return vkpartsnavigationextension->qt_metacast(param1);
    } else {
        return self->KParts::NavigationExtension::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnMetacast(KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension)
        vkpartsnavigationextension->setKParts__NavigationExtension_Metacast_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_Metacast_Callback>(slot));
}

// Base class handler implementation
int KParts__NavigationExtension_SuperMetacall(KParts__NavigationExtension* self, int param1, int param2, void** param3) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_Metacall_IsBase(true);
        return vkpartsnavigationextension->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KParts::NavigationExtension::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnMetacall(KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension)
        vkpartsnavigationextension->setKParts__NavigationExtension_Metacall_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_Metacall_Callback>(slot));
}

// Base class handler implementation
int KParts__NavigationExtension_SuperXOffset(KParts__NavigationExtension* self) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_XOffset_IsBase(true);
        return vkpartsnavigationextension->xOffset();
    } else {
        return self->KParts::NavigationExtension::xOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnXOffset(KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension)
        vkpartsnavigationextension->setKParts__NavigationExtension_XOffset_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_XOffset_Callback>(slot));
}

// Base class handler implementation
int KParts__NavigationExtension_SuperYOffset(KParts__NavigationExtension* self) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_YOffset_IsBase(true);
        return vkpartsnavigationextension->yOffset();
    } else {
        return self->KParts::NavigationExtension::yOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnYOffset(KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension)
        vkpartsnavigationextension->setKParts__NavigationExtension_YOffset_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_YOffset_Callback>(slot));
}

// Base class handler implementation
void KParts__NavigationExtension_SuperSaveState(KParts__NavigationExtension* self, QDataStream* stream) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_SaveState_IsBase(true);
        vkpartsnavigationextension->saveState(*stream);
    } else {
        self->KParts::NavigationExtension::saveState(*stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnSaveState(KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension)
        vkpartsnavigationextension->setKParts__NavigationExtension_SaveState_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_SaveState_Callback>(slot));
}

// Base class handler implementation
void KParts__NavigationExtension_SuperRestoreState(KParts__NavigationExtension* self, QDataStream* stream) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_RestoreState_IsBase(true);
        vkpartsnavigationextension->restoreState(*stream);
    } else {
        self->KParts::NavigationExtension::restoreState(*stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnRestoreState(KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension)
        vkpartsnavigationextension->setKParts__NavigationExtension_RestoreState_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_RestoreState_Callback>(slot));
}

// Derived class handler implementation
bool KParts__NavigationExtension_Event(KParts__NavigationExtension* self, QEvent* event) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        return vkpartsnavigationextension->event(event);
    } else {
        return self->KParts::NavigationExtension::event(event);
    }
}

// Base class handler implementation
bool KParts__NavigationExtension_SuperEvent(KParts__NavigationExtension* self, QEvent* event) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_Event_IsBase(true);
        return vkpartsnavigationextension->event(event);
    } else {
        return self->KParts::NavigationExtension::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnEvent(KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension)
        vkpartsnavigationextension->setKParts__NavigationExtension_Event_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_Event_Callback>(slot));
}

// Derived class handler implementation
bool KParts__NavigationExtension_EventFilter(KParts__NavigationExtension* self, QObject* watched, QEvent* event) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        return vkpartsnavigationextension->eventFilter(watched, event);
    } else {
        return self->KParts::NavigationExtension::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KParts__NavigationExtension_SuperEventFilter(KParts__NavigationExtension* self, QObject* watched, QEvent* event) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_EventFilter_IsBase(true);
        return vkpartsnavigationextension->eventFilter(watched, event);
    } else {
        return self->KParts::NavigationExtension::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnEventFilter(KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension)
        vkpartsnavigationextension->setKParts__NavigationExtension_EventFilter_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void KParts__NavigationExtension_TimerEvent(KParts__NavigationExtension* self, QTimerEvent* event) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->timerEvent(event);
    } else {
        ((VirtualKPartsNavigationExtension*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KParts__NavigationExtension_SuperTimerEvent(KParts__NavigationExtension* self, QTimerEvent* event) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_TimerEvent_IsBase(true);
        vkpartsnavigationextension->timerEvent(event);
    } else {
        ((VirtualKPartsNavigationExtension*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnTimerEvent(KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension)
        vkpartsnavigationextension->setKParts__NavigationExtension_TimerEvent_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void KParts__NavigationExtension_ChildEvent(KParts__NavigationExtension* self, QChildEvent* event) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->childEvent(event);
    } else {
        ((VirtualKPartsNavigationExtension*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KParts__NavigationExtension_SuperChildEvent(KParts__NavigationExtension* self, QChildEvent* event) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_ChildEvent_IsBase(true);
        vkpartsnavigationextension->childEvent(event);
    } else {
        ((VirtualKPartsNavigationExtension*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnChildEvent(KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension)
        vkpartsnavigationextension->setKParts__NavigationExtension_ChildEvent_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void KParts__NavigationExtension_CustomEvent(KParts__NavigationExtension* self, QEvent* event) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->customEvent(event);
    } else {
        ((VirtualKPartsNavigationExtension*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KParts__NavigationExtension_SuperCustomEvent(KParts__NavigationExtension* self, QEvent* event) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_CustomEvent_IsBase(true);
        vkpartsnavigationextension->customEvent(event);
    } else {
        ((VirtualKPartsNavigationExtension*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnCustomEvent(KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension)
        vkpartsnavigationextension->setKParts__NavigationExtension_CustomEvent_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void KParts__NavigationExtension_ConnectNotify(KParts__NavigationExtension* self, const QMetaMethod* signal) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->connectNotify(*signal);
    } else {
        ((VirtualKPartsNavigationExtension*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KParts__NavigationExtension_SuperConnectNotify(KParts__NavigationExtension* self, const QMetaMethod* signal) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_ConnectNotify_IsBase(true);
        vkpartsnavigationextension->connectNotify(*signal);
    } else {
        ((VirtualKPartsNavigationExtension*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnConnectNotify(KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension)
        vkpartsnavigationextension->setKParts__NavigationExtension_ConnectNotify_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void KParts__NavigationExtension_DisconnectNotify(KParts__NavigationExtension* self, const QMetaMethod* signal) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->disconnectNotify(*signal);
    } else {
        ((VirtualKPartsNavigationExtension*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KParts__NavigationExtension_SuperDisconnectNotify(KParts__NavigationExtension* self, const QMetaMethod* signal) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_DisconnectNotify_IsBase(true);
        vkpartsnavigationextension->disconnectNotify(*signal);
    } else {
        ((VirtualKPartsNavigationExtension*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnDisconnectNotify(KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = dynamic_cast<VirtualKPartsNavigationExtension*>(self);
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension)
        vkpartsnavigationextension->setKParts__NavigationExtension_DisconnectNotify_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
QObject* KParts__NavigationExtension_Sender(const KParts__NavigationExtension* self) {
    auto* vkpartsnavigationextension = const_cast<VirtualKPartsNavigationExtension*>(dynamic_cast<const VirtualKPartsNavigationExtension*>(self));
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        return vkpartsnavigationextension->sender();
    } else {
        return ((VirtualKPartsNavigationExtension*)self)->sender();
    }
}

// Base class handler implementation
QObject* KParts__NavigationExtension_SuperSender(const KParts__NavigationExtension* self) {
    auto* vkpartsnavigationextension = const_cast<VirtualKPartsNavigationExtension*>(dynamic_cast<const VirtualKPartsNavigationExtension*>(self));
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_Sender_IsBase(true);
        return vkpartsnavigationextension->sender();
    } else {
        return ((VirtualKPartsNavigationExtension*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnSender(const KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = const_cast<VirtualKPartsNavigationExtension*>(dynamic_cast<const VirtualKPartsNavigationExtension*>(self));
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension)
        vkpartsnavigationextension->setKParts__NavigationExtension_Sender_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_Sender_Callback>(slot));
}

// Derived class handler implementation
int KParts__NavigationExtension_SenderSignalIndex(const KParts__NavigationExtension* self) {
    auto* vkpartsnavigationextension = const_cast<VirtualKPartsNavigationExtension*>(dynamic_cast<const VirtualKPartsNavigationExtension*>(self));
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        return vkpartsnavigationextension->senderSignalIndex();
    } else {
        return ((VirtualKPartsNavigationExtension*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KParts__NavigationExtension_SuperSenderSignalIndex(const KParts__NavigationExtension* self) {
    auto* vkpartsnavigationextension = const_cast<VirtualKPartsNavigationExtension*>(dynamic_cast<const VirtualKPartsNavigationExtension*>(self));
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_SenderSignalIndex_IsBase(true);
        return vkpartsnavigationextension->senderSignalIndex();
    } else {
        return ((VirtualKPartsNavigationExtension*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnSenderSignalIndex(const KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = const_cast<VirtualKPartsNavigationExtension*>(dynamic_cast<const VirtualKPartsNavigationExtension*>(self));
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension)
        vkpartsnavigationextension->setKParts__NavigationExtension_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int KParts__NavigationExtension_Receivers(const KParts__NavigationExtension* self, const char* signal) {
    auto* vkpartsnavigationextension = const_cast<VirtualKPartsNavigationExtension*>(dynamic_cast<const VirtualKPartsNavigationExtension*>(self));
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        return vkpartsnavigationextension->receivers(signal);
    } else {
        return ((VirtualKPartsNavigationExtension*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KParts__NavigationExtension_SuperReceivers(const KParts__NavigationExtension* self, const char* signal) {
    auto* vkpartsnavigationextension = const_cast<VirtualKPartsNavigationExtension*>(dynamic_cast<const VirtualKPartsNavigationExtension*>(self));
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_Receivers_IsBase(true);
        return vkpartsnavigationextension->receivers(signal);
    } else {
        return ((VirtualKPartsNavigationExtension*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnReceivers(const KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = const_cast<VirtualKPartsNavigationExtension*>(dynamic_cast<const VirtualKPartsNavigationExtension*>(self));
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension)
        vkpartsnavigationextension->setKParts__NavigationExtension_Receivers_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool KParts__NavigationExtension_IsSignalConnected(const KParts__NavigationExtension* self, const QMetaMethod* signal) {
    auto* vkpartsnavigationextension = const_cast<VirtualKPartsNavigationExtension*>(dynamic_cast<const VirtualKPartsNavigationExtension*>(self));
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        return vkpartsnavigationextension->isSignalConnected(*signal);
    } else {
        return ((VirtualKPartsNavigationExtension*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KParts__NavigationExtension_SuperIsSignalConnected(const KParts__NavigationExtension* self, const QMetaMethod* signal) {
    auto* vkpartsnavigationextension = const_cast<VirtualKPartsNavigationExtension*>(dynamic_cast<const VirtualKPartsNavigationExtension*>(self));
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension) {
        vkpartsnavigationextension->setKParts__NavigationExtension_IsSignalConnected_IsBase(true);
        return vkpartsnavigationextension->isSignalConnected(*signal);
    } else {
        return ((VirtualKPartsNavigationExtension*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KParts__NavigationExtension_OnIsSignalConnected(const KParts__NavigationExtension* self, intptr_t slot) {
    auto* vkpartsnavigationextension = const_cast<VirtualKPartsNavigationExtension*>(dynamic_cast<const VirtualKPartsNavigationExtension*>(self));
    if (vkpartsnavigationextension && vkpartsnavigationextension->isVirtualKPartsNavigationExtension)
        vkpartsnavigationextension->setKParts__NavigationExtension_IsSignalConnected_Callback(reinterpret_cast<VirtualKPartsNavigationExtension::KParts__NavigationExtension_IsSignalConnected_Callback>(slot));
}

void KParts__NavigationExtension_Delete(KParts__NavigationExtension* self) {
    delete self;
}
