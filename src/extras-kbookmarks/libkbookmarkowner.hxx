#pragma once
#ifndef SRC_EXTRAS_KBOOKMARKSC_LIBVIRTUALKBOOKMARKOWNER_H
#define SRC_EXTRAS_KBOOKMARKSC_LIBVIRTUALKBOOKMARKOWNER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KBookmarkOwner so that we can call protected methods
class VirtualKBookmarkOwner : public KBookmarkOwner {

  public:
    // Virtual class boolean flag
    bool isVirtualKBookmarkOwner = true;

    // Virtual class public types (including callbacks)
    using KBookmarkOwner_CurrentTitle_Callback = const char* (*)();
    using KBookmarkOwner_CurrentUrl_Callback = QUrl* (*)();
    using KBookmarkOwner_CurrentIcon_Callback = const char* (*)();
    using KBookmarkOwner_SupportsTabs_Callback = bool (*)();
    using KBookmarkOwner_CurrentBookmarkList_Callback = KBookmarkOwner__FutureBookmark** (*)();
    using KBookmarkOwner_EnableOption_Callback = bool (*)(const KBookmarkOwner*, int);
    using KBookmarkOwner_OpenBookmark_Callback = void (*)(KBookmarkOwner*, KBookmark*, int, int);
    using KBookmarkOwner_OpenFolderinTabs_Callback = void (*)(KBookmarkOwner*, KBookmarkGroup*);
    using KBookmarkOwner_OpenInNewTab_Callback = void (*)(KBookmarkOwner*, KBookmark*);
    using KBookmarkOwner_OpenInNewWindow_Callback = void (*)(KBookmarkOwner*, KBookmark*);

  protected:
    // Instance callback storage
    KBookmarkOwner_CurrentTitle_Callback kbookmarkowner_currenttitle_callback = nullptr;
    KBookmarkOwner_CurrentUrl_Callback kbookmarkowner_currenturl_callback = nullptr;
    KBookmarkOwner_CurrentIcon_Callback kbookmarkowner_currenticon_callback = nullptr;
    KBookmarkOwner_SupportsTabs_Callback kbookmarkowner_supportstabs_callback = nullptr;
    KBookmarkOwner_CurrentBookmarkList_Callback kbookmarkowner_currentbookmarklist_callback = nullptr;
    KBookmarkOwner_EnableOption_Callback kbookmarkowner_enableoption_callback = nullptr;
    KBookmarkOwner_OpenBookmark_Callback kbookmarkowner_openbookmark_callback = nullptr;
    KBookmarkOwner_OpenFolderinTabs_Callback kbookmarkowner_openfolderintabs_callback = nullptr;
    KBookmarkOwner_OpenInNewTab_Callback kbookmarkowner_openinnewtab_callback = nullptr;
    KBookmarkOwner_OpenInNewWindow_Callback kbookmarkowner_openinnewwindow_callback = nullptr;

    // Instance base flags
    mutable bool kbookmarkowner_currenttitle_isbase = false;
    mutable bool kbookmarkowner_currenturl_isbase = false;
    mutable bool kbookmarkowner_currenticon_isbase = false;
    mutable bool kbookmarkowner_supportstabs_isbase = false;
    mutable bool kbookmarkowner_currentbookmarklist_isbase = false;
    mutable bool kbookmarkowner_enableoption_isbase = false;
    mutable bool kbookmarkowner_openbookmark_isbase = false;
    mutable bool kbookmarkowner_openfolderintabs_isbase = false;
    mutable bool kbookmarkowner_openinnewtab_isbase = false;
    mutable bool kbookmarkowner_openinnewwindow_isbase = false;

  public:
    VirtualKBookmarkOwner() : KBookmarkOwner() {};

    ~VirtualKBookmarkOwner() {
        kbookmarkowner_currenttitle_callback = nullptr;
        kbookmarkowner_currenturl_callback = nullptr;
        kbookmarkowner_currenticon_callback = nullptr;
        kbookmarkowner_supportstabs_callback = nullptr;
        kbookmarkowner_currentbookmarklist_callback = nullptr;
        kbookmarkowner_enableoption_callback = nullptr;
        kbookmarkowner_openbookmark_callback = nullptr;
        kbookmarkowner_openfolderintabs_callback = nullptr;
        kbookmarkowner_openinnewtab_callback = nullptr;
        kbookmarkowner_openinnewwindow_callback = nullptr;
    }

    // Callback setters
    inline void setKBookmarkOwner_CurrentTitle_Callback(KBookmarkOwner_CurrentTitle_Callback cb) { kbookmarkowner_currenttitle_callback = cb; }
    inline void setKBookmarkOwner_CurrentUrl_Callback(KBookmarkOwner_CurrentUrl_Callback cb) { kbookmarkowner_currenturl_callback = cb; }
    inline void setKBookmarkOwner_CurrentIcon_Callback(KBookmarkOwner_CurrentIcon_Callback cb) { kbookmarkowner_currenticon_callback = cb; }
    inline void setKBookmarkOwner_SupportsTabs_Callback(KBookmarkOwner_SupportsTabs_Callback cb) { kbookmarkowner_supportstabs_callback = cb; }
    inline void setKBookmarkOwner_CurrentBookmarkList_Callback(KBookmarkOwner_CurrentBookmarkList_Callback cb) { kbookmarkowner_currentbookmarklist_callback = cb; }
    inline void setKBookmarkOwner_EnableOption_Callback(KBookmarkOwner_EnableOption_Callback cb) { kbookmarkowner_enableoption_callback = cb; }
    inline void setKBookmarkOwner_OpenBookmark_Callback(KBookmarkOwner_OpenBookmark_Callback cb) { kbookmarkowner_openbookmark_callback = cb; }
    inline void setKBookmarkOwner_OpenFolderinTabs_Callback(KBookmarkOwner_OpenFolderinTabs_Callback cb) { kbookmarkowner_openfolderintabs_callback = cb; }
    inline void setKBookmarkOwner_OpenInNewTab_Callback(KBookmarkOwner_OpenInNewTab_Callback cb) { kbookmarkowner_openinnewtab_callback = cb; }
    inline void setKBookmarkOwner_OpenInNewWindow_Callback(KBookmarkOwner_OpenInNewWindow_Callback cb) { kbookmarkowner_openinnewwindow_callback = cb; }

    // Base flag setters
    inline void setKBookmarkOwner_CurrentTitle_IsBase(bool value) const { kbookmarkowner_currenttitle_isbase = value; }
    inline void setKBookmarkOwner_CurrentUrl_IsBase(bool value) const { kbookmarkowner_currenturl_isbase = value; }
    inline void setKBookmarkOwner_CurrentIcon_IsBase(bool value) const { kbookmarkowner_currenticon_isbase = value; }
    inline void setKBookmarkOwner_SupportsTabs_IsBase(bool value) const { kbookmarkowner_supportstabs_isbase = value; }
    inline void setKBookmarkOwner_CurrentBookmarkList_IsBase(bool value) const { kbookmarkowner_currentbookmarklist_isbase = value; }
    inline void setKBookmarkOwner_EnableOption_IsBase(bool value) const { kbookmarkowner_enableoption_isbase = value; }
    inline void setKBookmarkOwner_OpenBookmark_IsBase(bool value) const { kbookmarkowner_openbookmark_isbase = value; }
    inline void setKBookmarkOwner_OpenFolderinTabs_IsBase(bool value) const { kbookmarkowner_openfolderintabs_isbase = value; }
    inline void setKBookmarkOwner_OpenInNewTab_IsBase(bool value) const { kbookmarkowner_openinnewtab_isbase = value; }
    inline void setKBookmarkOwner_OpenInNewWindow_IsBase(bool value) const { kbookmarkowner_openinnewwindow_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QString currentTitle() const override {
        if (kbookmarkowner_currenttitle_isbase) {
            kbookmarkowner_currenttitle_isbase = false;
            return KBookmarkOwner::currentTitle();
        } else if (kbookmarkowner_currenttitle_callback != nullptr) {
            const char* callback_ret = kbookmarkowner_currenttitle_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KBookmarkOwner::currentTitle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QUrl currentUrl() const override {
        if (kbookmarkowner_currenturl_isbase) {
            kbookmarkowner_currenturl_isbase = false;
            return KBookmarkOwner::currentUrl();
        } else if (kbookmarkowner_currenturl_callback != nullptr) {
            QUrl* callback_ret = kbookmarkowner_currenturl_callback();
            return *callback_ret;
        } else {
            return KBookmarkOwner::currentUrl();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString currentIcon() const override {
        if (kbookmarkowner_currenticon_isbase) {
            kbookmarkowner_currenticon_isbase = false;
            return KBookmarkOwner::currentIcon();
        } else if (kbookmarkowner_currenticon_callback != nullptr) {
            const char* callback_ret = kbookmarkowner_currenticon_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KBookmarkOwner::currentIcon();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsTabs() const override {
        if (kbookmarkowner_supportstabs_isbase) {
            kbookmarkowner_supportstabs_isbase = false;
            return KBookmarkOwner::supportsTabs();
        } else if (kbookmarkowner_supportstabs_callback != nullptr) {
            bool callback_ret = kbookmarkowner_supportstabs_callback();
            return callback_ret;
        } else {
            return KBookmarkOwner::supportsTabs();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<KBookmarkOwner::FutureBookmark> currentBookmarkList() const override {
        if (kbookmarkowner_currentbookmarklist_isbase) {
            kbookmarkowner_currentbookmarklist_isbase = false;
            return KBookmarkOwner::currentBookmarkList();
        } else if (kbookmarkowner_currentbookmarklist_callback != nullptr) {
            KBookmarkOwner__FutureBookmark** callback_ret = kbookmarkowner_currentbookmarklist_callback();
            QList<KBookmarkOwner::FutureBookmark> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (KBookmarkOwner__FutureBookmark** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KBookmarkOwner::currentBookmarkList();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool enableOption(KBookmarkOwner::BookmarkOption option) const override {
        if (kbookmarkowner_enableoption_isbase) {
            kbookmarkowner_enableoption_isbase = false;
            return KBookmarkOwner::enableOption(option);
        } else if (kbookmarkowner_enableoption_callback != nullptr) {
            int cbval1 = static_cast<int>(option);

            bool callback_ret = kbookmarkowner_enableoption_callback(this, cbval1);
            return callback_ret;
        } else {
            return KBookmarkOwner::enableOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void openBookmark(const KBookmark& bm, Qt::MouseButtons mb, Qt::KeyboardModifiers km) override {
        if (kbookmarkowner_openbookmark_callback != nullptr) {
            const KBookmark& bm_ret = bm;
            // Cast returned reference into pointer
            KBookmark* cbval1 = const_cast<KBookmark*>(&bm_ret);
            int cbval2 = static_cast<int>(mb);
            int cbval3 = static_cast<int>(km);

            kbookmarkowner_openbookmark_callback(this, cbval1, cbval2, cbval3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void openFolderinTabs(const KBookmarkGroup& bm) override {
        if (kbookmarkowner_openfolderintabs_isbase) {
            kbookmarkowner_openfolderintabs_isbase = false;
            KBookmarkOwner::openFolderinTabs(bm);
        } else if (kbookmarkowner_openfolderintabs_callback != nullptr) {
            const KBookmarkGroup& bm_ret = bm;
            // Cast returned reference into pointer
            KBookmarkGroup* cbval1 = const_cast<KBookmarkGroup*>(&bm_ret);

            kbookmarkowner_openfolderintabs_callback(this, cbval1);
        } else {
            KBookmarkOwner::openFolderinTabs(bm);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void openInNewTab(const KBookmark& bm) override {
        if (kbookmarkowner_openinnewtab_isbase) {
            kbookmarkowner_openinnewtab_isbase = false;
            KBookmarkOwner::openInNewTab(bm);
        } else if (kbookmarkowner_openinnewtab_callback != nullptr) {
            const KBookmark& bm_ret = bm;
            // Cast returned reference into pointer
            KBookmark* cbval1 = const_cast<KBookmark*>(&bm_ret);

            kbookmarkowner_openinnewtab_callback(this, cbval1);
        } else {
            KBookmarkOwner::openInNewTab(bm);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void openInNewWindow(const KBookmark& bm) override {
        if (kbookmarkowner_openinnewwindow_isbase) {
            kbookmarkowner_openinnewwindow_isbase = false;
            KBookmarkOwner::openInNewWindow(bm);
        } else if (kbookmarkowner_openinnewwindow_callback != nullptr) {
            const KBookmark& bm_ret = bm;
            // Cast returned reference into pointer
            KBookmark* cbval1 = const_cast<KBookmark*>(&bm_ret);

            kbookmarkowner_openinnewwindow_callback(this, cbval1);
        } else {
            KBookmarkOwner::openInNewWindow(bm);
        }
    }
};

#endif
