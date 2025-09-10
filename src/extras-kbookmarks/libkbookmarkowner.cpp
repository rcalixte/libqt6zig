#include <KBookmark>
#include <KBookmarkOwner>
#define WORKAROUND_INNER_CLASS_DEFINITION_KBookmarkOwner__FutureBookmark
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <kbookmarkowner.h>
#include "libkbookmarkowner.h"
#include "libkbookmarkowner.hxx"

KBookmarkOwner* KBookmarkOwner_new() {
    return new VirtualKBookmarkOwner();
}

libqt_string KBookmarkOwner_CurrentTitle(const KBookmarkOwner* self) {
    auto* vkbookmarkowner = dynamic_cast<const VirtualKBookmarkOwner*>(self);
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        QString _ret = self->currentTitle();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKBookmarkOwner*)self)->currentTitle();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

QUrl* KBookmarkOwner_CurrentUrl(const KBookmarkOwner* self) {
    auto* vkbookmarkowner = dynamic_cast<const VirtualKBookmarkOwner*>(self);
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        return new QUrl(self->currentUrl());
    } else {
        return new QUrl(((VirtualKBookmarkOwner*)self)->currentUrl());
    }
}

libqt_string KBookmarkOwner_CurrentIcon(const KBookmarkOwner* self) {
    auto* vkbookmarkowner = dynamic_cast<const VirtualKBookmarkOwner*>(self);
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        QString _ret = self->currentIcon();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKBookmarkOwner*)self)->currentIcon();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

bool KBookmarkOwner_SupportsTabs(const KBookmarkOwner* self) {
    auto* vkbookmarkowner = dynamic_cast<const VirtualKBookmarkOwner*>(self);
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        return self->supportsTabs();
    } else {
        return ((VirtualKBookmarkOwner*)self)->supportsTabs();
    }
}

libqt_list /* of KBookmarkOwner__FutureBookmark* */ KBookmarkOwner_CurrentBookmarkList(const KBookmarkOwner* self) {
    auto* vkbookmarkowner = dynamic_cast<const VirtualKBookmarkOwner*>(self);
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        QList<KBookmarkOwner::FutureBookmark> _ret = self->currentBookmarkList();
        // Convert QList<> from C++ memory to manually-managed C memory
        KBookmarkOwner__FutureBookmark** _arr = static_cast<KBookmarkOwner__FutureBookmark**>(malloc(sizeof(KBookmarkOwner__FutureBookmark*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new KBookmarkOwner::FutureBookmark(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<KBookmarkOwner::FutureBookmark> _ret = ((VirtualKBookmarkOwner*)self)->currentBookmarkList();
        // Convert QList<> from C++ memory to manually-managed C memory
        KBookmarkOwner__FutureBookmark** _arr = static_cast<KBookmarkOwner__FutureBookmark**>(malloc(sizeof(KBookmarkOwner__FutureBookmark*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new KBookmarkOwner::FutureBookmark(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

bool KBookmarkOwner_EnableOption(const KBookmarkOwner* self, int option) {
    auto* vkbookmarkowner = dynamic_cast<const VirtualKBookmarkOwner*>(self);
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        return self->enableOption(static_cast<KBookmarkOwner::BookmarkOption>(option));
    } else {
        return ((VirtualKBookmarkOwner*)self)->enableOption(static_cast<KBookmarkOwner::BookmarkOption>(option));
    }
}

void KBookmarkOwner_OpenBookmark(KBookmarkOwner* self, const KBookmark* bm, int mb, int km) {
    auto* vkbookmarkowner = dynamic_cast<VirtualKBookmarkOwner*>(self);
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        vkbookmarkowner->openBookmark(*bm, static_cast<Qt::MouseButtons>(mb), static_cast<Qt::KeyboardModifiers>(km));
    } else {
        ((VirtualKBookmarkOwner*)self)->openBookmark(*bm, static_cast<Qt::MouseButtons>(mb), static_cast<Qt::KeyboardModifiers>(km));
    }
}

void KBookmarkOwner_OpenFolderinTabs(KBookmarkOwner* self, const KBookmarkGroup* bm) {
    auto* vkbookmarkowner = dynamic_cast<VirtualKBookmarkOwner*>(self);
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        self->openFolderinTabs(*bm);
    } else {
        ((VirtualKBookmarkOwner*)self)->openFolderinTabs(*bm);
    }
}

void KBookmarkOwner_OpenInNewTab(KBookmarkOwner* self, const KBookmark* bm) {
    auto* vkbookmarkowner = dynamic_cast<VirtualKBookmarkOwner*>(self);
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        self->openInNewTab(*bm);
    } else {
        ((VirtualKBookmarkOwner*)self)->openInNewTab(*bm);
    }
}

void KBookmarkOwner_OpenInNewWindow(KBookmarkOwner* self, const KBookmark* bm) {
    auto* vkbookmarkowner = dynamic_cast<VirtualKBookmarkOwner*>(self);
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        self->openInNewWindow(*bm);
    } else {
        ((VirtualKBookmarkOwner*)self)->openInNewWindow(*bm);
    }
}

// Base class handler implementation
libqt_string KBookmarkOwner_QBaseCurrentTitle(const KBookmarkOwner* self) {
    auto* vkbookmarkowner = const_cast<VirtualKBookmarkOwner*>(dynamic_cast<const VirtualKBookmarkOwner*>(self));
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        vkbookmarkowner->setKBookmarkOwner_CurrentTitle_IsBase(true);
        QString _ret = vkbookmarkowner->currentTitle();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KBookmarkOwner::currentTitle();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkOwner_OnCurrentTitle(const KBookmarkOwner* self, intptr_t slot) {
    auto* vkbookmarkowner = const_cast<VirtualKBookmarkOwner*>(dynamic_cast<const VirtualKBookmarkOwner*>(self));
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        vkbookmarkowner->setKBookmarkOwner_CurrentTitle_Callback(reinterpret_cast<VirtualKBookmarkOwner::KBookmarkOwner_CurrentTitle_Callback>(slot));
    }
}

// Base class handler implementation
QUrl* KBookmarkOwner_QBaseCurrentUrl(const KBookmarkOwner* self) {
    auto* vkbookmarkowner = const_cast<VirtualKBookmarkOwner*>(dynamic_cast<const VirtualKBookmarkOwner*>(self));
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        vkbookmarkowner->setKBookmarkOwner_CurrentUrl_IsBase(true);
        return new QUrl(vkbookmarkowner->currentUrl());
    } else {
        return new QUrl(((VirtualKBookmarkOwner*)self)->currentUrl());
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkOwner_OnCurrentUrl(const KBookmarkOwner* self, intptr_t slot) {
    auto* vkbookmarkowner = const_cast<VirtualKBookmarkOwner*>(dynamic_cast<const VirtualKBookmarkOwner*>(self));
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        vkbookmarkowner->setKBookmarkOwner_CurrentUrl_Callback(reinterpret_cast<VirtualKBookmarkOwner::KBookmarkOwner_CurrentUrl_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string KBookmarkOwner_QBaseCurrentIcon(const KBookmarkOwner* self) {
    auto* vkbookmarkowner = const_cast<VirtualKBookmarkOwner*>(dynamic_cast<const VirtualKBookmarkOwner*>(self));
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        vkbookmarkowner->setKBookmarkOwner_CurrentIcon_IsBase(true);
        QString _ret = vkbookmarkowner->currentIcon();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KBookmarkOwner::currentIcon();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkOwner_OnCurrentIcon(const KBookmarkOwner* self, intptr_t slot) {
    auto* vkbookmarkowner = const_cast<VirtualKBookmarkOwner*>(dynamic_cast<const VirtualKBookmarkOwner*>(self));
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        vkbookmarkowner->setKBookmarkOwner_CurrentIcon_Callback(reinterpret_cast<VirtualKBookmarkOwner::KBookmarkOwner_CurrentIcon_Callback>(slot));
    }
}

// Base class handler implementation
bool KBookmarkOwner_QBaseSupportsTabs(const KBookmarkOwner* self) {
    auto* vkbookmarkowner = const_cast<VirtualKBookmarkOwner*>(dynamic_cast<const VirtualKBookmarkOwner*>(self));
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        vkbookmarkowner->setKBookmarkOwner_SupportsTabs_IsBase(true);
        return vkbookmarkowner->supportsTabs();
    } else {
        return self->KBookmarkOwner::supportsTabs();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkOwner_OnSupportsTabs(const KBookmarkOwner* self, intptr_t slot) {
    auto* vkbookmarkowner = const_cast<VirtualKBookmarkOwner*>(dynamic_cast<const VirtualKBookmarkOwner*>(self));
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        vkbookmarkowner->setKBookmarkOwner_SupportsTabs_Callback(reinterpret_cast<VirtualKBookmarkOwner::KBookmarkOwner_SupportsTabs_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of KBookmarkOwner__FutureBookmark* */ KBookmarkOwner_QBaseCurrentBookmarkList(const KBookmarkOwner* self) {
    auto* vkbookmarkowner = const_cast<VirtualKBookmarkOwner*>(dynamic_cast<const VirtualKBookmarkOwner*>(self));
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        vkbookmarkowner->setKBookmarkOwner_CurrentBookmarkList_IsBase(true);
        QList<KBookmarkOwner::FutureBookmark> _ret = vkbookmarkowner->currentBookmarkList();
        // Convert QList<> from C++ memory to manually-managed C memory
        KBookmarkOwner__FutureBookmark** _arr = static_cast<KBookmarkOwner__FutureBookmark**>(malloc(sizeof(KBookmarkOwner__FutureBookmark*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new KBookmarkOwner::FutureBookmark(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<KBookmarkOwner::FutureBookmark> _ret = self->KBookmarkOwner::currentBookmarkList();
        // Convert QList<> from C++ memory to manually-managed C memory
        KBookmarkOwner__FutureBookmark** _arr = static_cast<KBookmarkOwner__FutureBookmark**>(malloc(sizeof(KBookmarkOwner__FutureBookmark*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new KBookmarkOwner::FutureBookmark(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkOwner_OnCurrentBookmarkList(const KBookmarkOwner* self, intptr_t slot) {
    auto* vkbookmarkowner = const_cast<VirtualKBookmarkOwner*>(dynamic_cast<const VirtualKBookmarkOwner*>(self));
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        vkbookmarkowner->setKBookmarkOwner_CurrentBookmarkList_Callback(reinterpret_cast<VirtualKBookmarkOwner::KBookmarkOwner_CurrentBookmarkList_Callback>(slot));
    }
}

// Base class handler implementation
bool KBookmarkOwner_QBaseEnableOption(const KBookmarkOwner* self, int option) {
    auto* vkbookmarkowner = const_cast<VirtualKBookmarkOwner*>(dynamic_cast<const VirtualKBookmarkOwner*>(self));
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        vkbookmarkowner->setKBookmarkOwner_EnableOption_IsBase(true);
        return vkbookmarkowner->enableOption(static_cast<KBookmarkOwner::BookmarkOption>(option));
    } else {
        return self->KBookmarkOwner::enableOption(static_cast<KBookmarkOwner::BookmarkOption>(option));
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkOwner_OnEnableOption(const KBookmarkOwner* self, intptr_t slot) {
    auto* vkbookmarkowner = const_cast<VirtualKBookmarkOwner*>(dynamic_cast<const VirtualKBookmarkOwner*>(self));
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        vkbookmarkowner->setKBookmarkOwner_EnableOption_Callback(reinterpret_cast<VirtualKBookmarkOwner::KBookmarkOwner_EnableOption_Callback>(slot));
    }
}

// Base class handler implementation
void KBookmarkOwner_QBaseOpenBookmark(KBookmarkOwner* self, const KBookmark* bm, int mb, int km) {
    auto* vkbookmarkowner = dynamic_cast<VirtualKBookmarkOwner*>(self);
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        vkbookmarkowner->setKBookmarkOwner_OpenBookmark_IsBase(true);
        vkbookmarkowner->openBookmark(*bm, static_cast<Qt::MouseButtons>(mb), static_cast<Qt::KeyboardModifiers>(km));
    } else {
        ((VirtualKBookmarkOwner*)self)->openBookmark(*bm, static_cast<Qt::MouseButtons>(mb), static_cast<Qt::KeyboardModifiers>(km));
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkOwner_OnOpenBookmark(KBookmarkOwner* self, intptr_t slot) {
    auto* vkbookmarkowner = dynamic_cast<VirtualKBookmarkOwner*>(self);
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        vkbookmarkowner->setKBookmarkOwner_OpenBookmark_Callback(reinterpret_cast<VirtualKBookmarkOwner::KBookmarkOwner_OpenBookmark_Callback>(slot));
    }
}

// Base class handler implementation
void KBookmarkOwner_QBaseOpenFolderinTabs(KBookmarkOwner* self, const KBookmarkGroup* bm) {
    auto* vkbookmarkowner = dynamic_cast<VirtualKBookmarkOwner*>(self);
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        vkbookmarkowner->setKBookmarkOwner_OpenFolderinTabs_IsBase(true);
        vkbookmarkowner->openFolderinTabs(*bm);
    } else {
        self->KBookmarkOwner::openFolderinTabs(*bm);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkOwner_OnOpenFolderinTabs(KBookmarkOwner* self, intptr_t slot) {
    auto* vkbookmarkowner = dynamic_cast<VirtualKBookmarkOwner*>(self);
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        vkbookmarkowner->setKBookmarkOwner_OpenFolderinTabs_Callback(reinterpret_cast<VirtualKBookmarkOwner::KBookmarkOwner_OpenFolderinTabs_Callback>(slot));
    }
}

// Base class handler implementation
void KBookmarkOwner_QBaseOpenInNewTab(KBookmarkOwner* self, const KBookmark* bm) {
    auto* vkbookmarkowner = dynamic_cast<VirtualKBookmarkOwner*>(self);
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        vkbookmarkowner->setKBookmarkOwner_OpenInNewTab_IsBase(true);
        vkbookmarkowner->openInNewTab(*bm);
    } else {
        self->KBookmarkOwner::openInNewTab(*bm);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkOwner_OnOpenInNewTab(KBookmarkOwner* self, intptr_t slot) {
    auto* vkbookmarkowner = dynamic_cast<VirtualKBookmarkOwner*>(self);
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        vkbookmarkowner->setKBookmarkOwner_OpenInNewTab_Callback(reinterpret_cast<VirtualKBookmarkOwner::KBookmarkOwner_OpenInNewTab_Callback>(slot));
    }
}

// Base class handler implementation
void KBookmarkOwner_QBaseOpenInNewWindow(KBookmarkOwner* self, const KBookmark* bm) {
    auto* vkbookmarkowner = dynamic_cast<VirtualKBookmarkOwner*>(self);
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        vkbookmarkowner->setKBookmarkOwner_OpenInNewWindow_IsBase(true);
        vkbookmarkowner->openInNewWindow(*bm);
    } else {
        self->KBookmarkOwner::openInNewWindow(*bm);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkOwner_OnOpenInNewWindow(KBookmarkOwner* self, intptr_t slot) {
    auto* vkbookmarkowner = dynamic_cast<VirtualKBookmarkOwner*>(self);
    if (vkbookmarkowner && vkbookmarkowner->isVirtualKBookmarkOwner) {
        vkbookmarkowner->setKBookmarkOwner_OpenInNewWindow_Callback(reinterpret_cast<VirtualKBookmarkOwner::KBookmarkOwner_OpenInNewWindow_Callback>(slot));
    }
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
    QString _ret = self->title();
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
    QString _ret = self->icon();
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
