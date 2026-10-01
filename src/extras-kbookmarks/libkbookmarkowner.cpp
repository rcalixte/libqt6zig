#include <KBookmark>
#include <KBookmarkOwner>
#define WORKAROUND_INNER_CLASS_DEFINITION_KBookmarkOwner__FutureBookmark
#include <QList>
#include <QString>
#include <QUrl>
#include <kbookmarkowner.h>
#include "libkbookmarkowner.h"
#include "libkbookmarkowner.hxx"

KBookmarkOwner* KBookmarkOwner_new() {
    return new VirtualKBookmarkOwner();
}

libqt_string KBookmarkOwner_CurrentTitle(const KBookmarkOwner* self) {
    auto _ret = self->currentTitle();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KBookmarkOwner_CurrentUrl(const KBookmarkOwner* self) {
    return new QUrl(self->currentUrl());
}

libqt_string KBookmarkOwner_CurrentIcon(const KBookmarkOwner* self) {
    auto _ret = self->currentIcon();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KBookmarkOwner_SupportsTabs(const KBookmarkOwner* self) {
    return self->supportsTabs();
}

libqt_list /* of KBookmarkOwner__FutureBookmark* */ KBookmarkOwner_CurrentBookmarkList(const KBookmarkOwner* self) {
    QList<KBookmarkOwner::FutureBookmark> _ret = self->currentBookmarkList();
    // Convert QList<> from C++ memory to manually-managed C memory
    KBookmarkOwner__FutureBookmark** _arr = static_cast<KBookmarkOwner__FutureBookmark**>(malloc(sizeof(KBookmarkOwner__FutureBookmark*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KBookmarkOwner::FutureBookmark(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool KBookmarkOwner_EnableOption(const KBookmarkOwner* self, int option) {
    return self->enableOption(static_cast<KBookmarkOwner::BookmarkOption>(option));
}

void KBookmarkOwner_OpenBookmark(KBookmarkOwner* self, const KBookmark* bm, int mb, int km) {
    self->openBookmark(*bm, static_cast<Qt::MouseButtons>(mb), static_cast<Qt::KeyboardModifiers>(km));
}

void KBookmarkOwner_OpenFolderinTabs(KBookmarkOwner* self, const KBookmarkGroup* bm) {
    self->openFolderinTabs(*bm);
}

void KBookmarkOwner_OpenInNewTab(KBookmarkOwner* self, const KBookmark* bm) {
    self->openInNewTab(*bm);
}

void KBookmarkOwner_OpenInNewWindow(KBookmarkOwner* self, const KBookmark* bm) {
    self->openInNewWindow(*bm);
}

void KBookmarkOwner_OperatorAssign(KBookmarkOwner* self, const KBookmarkOwner* param1) {
    self->operator=(*param1);
}

// Base class handler implementation
libqt_string KBookmarkOwner_SuperCurrentTitle(const KBookmarkOwner* self) {
    auto _ret = self->KBookmarkOwner::currentTitle();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void KBookmarkOwner_OnCurrentTitle(KBookmarkOwner* self, intptr_t slot) {
    if (auto* vkbookmarkowner = const_cast<VirtualKBookmarkOwner*>(dynamic_cast<const VirtualKBookmarkOwner*>(self)))
        vkbookmarkowner->kbookmarkowner_currenttitle_callback = reinterpret_cast<VirtualKBookmarkOwner::KBookmarkOwner_CurrentTitle_Callback>(slot);
}

// Base class handler implementation
QUrl* KBookmarkOwner_SuperCurrentUrl(const KBookmarkOwner* self) {
    return new QUrl(self->KBookmarkOwner::currentUrl());
}

// Auxiliary method to allow providing re-implementation
void KBookmarkOwner_OnCurrentUrl(KBookmarkOwner* self, intptr_t slot) {
    if (auto* vkbookmarkowner = const_cast<VirtualKBookmarkOwner*>(dynamic_cast<const VirtualKBookmarkOwner*>(self)))
        vkbookmarkowner->kbookmarkowner_currenturl_callback = reinterpret_cast<VirtualKBookmarkOwner::KBookmarkOwner_CurrentUrl_Callback>(slot);
}

// Base class handler implementation
libqt_string KBookmarkOwner_SuperCurrentIcon(const KBookmarkOwner* self) {
    auto _ret = self->KBookmarkOwner::currentIcon();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void KBookmarkOwner_OnCurrentIcon(KBookmarkOwner* self, intptr_t slot) {
    if (auto* vkbookmarkowner = const_cast<VirtualKBookmarkOwner*>(dynamic_cast<const VirtualKBookmarkOwner*>(self)))
        vkbookmarkowner->kbookmarkowner_currenticon_callback = reinterpret_cast<VirtualKBookmarkOwner::KBookmarkOwner_CurrentIcon_Callback>(slot);
}

// Base class handler implementation
bool KBookmarkOwner_SuperSupportsTabs(const KBookmarkOwner* self) {
    return self->KBookmarkOwner::supportsTabs();
}

// Auxiliary method to allow providing re-implementation
void KBookmarkOwner_OnSupportsTabs(KBookmarkOwner* self, intptr_t slot) {
    if (auto* vkbookmarkowner = const_cast<VirtualKBookmarkOwner*>(dynamic_cast<const VirtualKBookmarkOwner*>(self)))
        vkbookmarkowner->kbookmarkowner_supportstabs_callback = reinterpret_cast<VirtualKBookmarkOwner::KBookmarkOwner_SupportsTabs_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of KBookmarkOwner__FutureBookmark* */ KBookmarkOwner_SuperCurrentBookmarkList(const KBookmarkOwner* self) {
    QList<KBookmarkOwner::FutureBookmark> _ret = self->KBookmarkOwner::currentBookmarkList();
    // Convert QList<> from C++ memory to manually-managed C memory
    KBookmarkOwner__FutureBookmark** _arr = static_cast<KBookmarkOwner__FutureBookmark**>(malloc(sizeof(KBookmarkOwner__FutureBookmark*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KBookmarkOwner::FutureBookmark(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void KBookmarkOwner_OnCurrentBookmarkList(KBookmarkOwner* self, intptr_t slot) {
    if (auto* vkbookmarkowner = const_cast<VirtualKBookmarkOwner*>(dynamic_cast<const VirtualKBookmarkOwner*>(self)))
        vkbookmarkowner->kbookmarkowner_currentbookmarklist_callback = reinterpret_cast<VirtualKBookmarkOwner::KBookmarkOwner_CurrentBookmarkList_Callback>(slot);
}

// Base class handler implementation
bool KBookmarkOwner_SuperEnableOption(const KBookmarkOwner* self, int option) {
    return self->KBookmarkOwner::enableOption(static_cast<KBookmarkOwner::BookmarkOption>(option));
}

// Auxiliary method to allow providing re-implementation
void KBookmarkOwner_OnEnableOption(KBookmarkOwner* self, intptr_t slot) {
    if (auto* vkbookmarkowner = const_cast<VirtualKBookmarkOwner*>(dynamic_cast<const VirtualKBookmarkOwner*>(self)))
        vkbookmarkowner->kbookmarkowner_enableoption_callback = reinterpret_cast<VirtualKBookmarkOwner::KBookmarkOwner_EnableOption_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KBookmarkOwner_OnOpenBookmark(KBookmarkOwner* self, intptr_t slot) {
    if (auto* vkbookmarkowner = dynamic_cast<VirtualKBookmarkOwner*>(self))
        vkbookmarkowner->kbookmarkowner_openbookmark_callback = reinterpret_cast<VirtualKBookmarkOwner::KBookmarkOwner_OpenBookmark_Callback>(slot);
}

// Base class handler implementation
void KBookmarkOwner_SuperOpenFolderinTabs(KBookmarkOwner* self, const KBookmarkGroup* bm) {
    self->KBookmarkOwner::openFolderinTabs(*bm);
}

// Auxiliary method to allow providing re-implementation
void KBookmarkOwner_OnOpenFolderinTabs(KBookmarkOwner* self, intptr_t slot) {
    if (auto* vkbookmarkowner = dynamic_cast<VirtualKBookmarkOwner*>(self))
        vkbookmarkowner->kbookmarkowner_openfolderintabs_callback = reinterpret_cast<VirtualKBookmarkOwner::KBookmarkOwner_OpenFolderinTabs_Callback>(slot);
}

// Base class handler implementation
void KBookmarkOwner_SuperOpenInNewTab(KBookmarkOwner* self, const KBookmark* bm) {
    self->KBookmarkOwner::openInNewTab(*bm);
}

// Auxiliary method to allow providing re-implementation
void KBookmarkOwner_OnOpenInNewTab(KBookmarkOwner* self, intptr_t slot) {
    if (auto* vkbookmarkowner = dynamic_cast<VirtualKBookmarkOwner*>(self))
        vkbookmarkowner->kbookmarkowner_openinnewtab_callback = reinterpret_cast<VirtualKBookmarkOwner::KBookmarkOwner_OpenInNewTab_Callback>(slot);
}

// Base class handler implementation
void KBookmarkOwner_SuperOpenInNewWindow(KBookmarkOwner* self, const KBookmark* bm) {
    self->KBookmarkOwner::openInNewWindow(*bm);
}

// Auxiliary method to allow providing re-implementation
void KBookmarkOwner_OnOpenInNewWindow(KBookmarkOwner* self, intptr_t slot) {
    if (auto* vkbookmarkowner = dynamic_cast<VirtualKBookmarkOwner*>(self))
        vkbookmarkowner->kbookmarkowner_openinnewwindow_callback = reinterpret_cast<VirtualKBookmarkOwner::KBookmarkOwner_OpenInNewWindow_Callback>(slot);
}

void KBookmarkOwner_Delete(KBookmarkOwner* self) {
    delete self;
}

KBookmarkOwner__FutureBookmark* KBookmarkOwner__FutureBookmark_new(const libqt_string title, const QUrl* url, const libqt_string icon) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString icon_QString = QString::fromUtf8(icon.data, icon.len);
    return new KBookmarkOwner::FutureBookmark(title_QString, *url, icon_QString);
}

KBookmarkOwner__FutureBookmark* KBookmarkOwner__FutureBookmark_new2(const KBookmarkOwner__FutureBookmark* other) {
    return new KBookmarkOwner::FutureBookmark(*other);
}

void KBookmarkOwner__FutureBookmark_OperatorAssign(KBookmarkOwner__FutureBookmark* self, const KBookmarkOwner__FutureBookmark* other) {
    self->operator=(*other);
}

libqt_string KBookmarkOwner__FutureBookmark_Title(const KBookmarkOwner__FutureBookmark* self) {
    auto _ret = self->title();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KBookmarkOwner__FutureBookmark_Url(const KBookmarkOwner__FutureBookmark* self) {
    return new QUrl(self->url());
}

libqt_string KBookmarkOwner__FutureBookmark_Icon(const KBookmarkOwner__FutureBookmark* self) {
    auto _ret = self->icon();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KBookmarkOwner__FutureBookmark_Delete(KBookmarkOwner__FutureBookmark* self) {
    delete self;
}
