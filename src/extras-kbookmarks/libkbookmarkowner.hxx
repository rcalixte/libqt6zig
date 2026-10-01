#pragma once
#ifndef EXTRAS_KBOOKMARKS_LIBKBOOKMARKOWNER_HXX
#define EXTRAS_KBOOKMARKS_LIBKBOOKMARKOWNER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KBookmarkOwner
class VirtualKBookmarkOwner : public KBookmarkOwner {
  public:
    // Virtual class public types (including callbacks and access types)
    using KBookmarkOwner_CurrentTitle_Callback = const char* (*)(const KBookmarkOwner*);
    using KBookmarkOwner_CurrentUrl_Callback = QUrl* (*)(const KBookmarkOwner*);
    using KBookmarkOwner_CurrentIcon_Callback = const char* (*)(const KBookmarkOwner*);
    using KBookmarkOwner_SupportsTabs_Callback = bool (*)(const KBookmarkOwner*);
    using KBookmarkOwner_CurrentBookmarkList_Callback = libqt_list /* of KBookmarkOwner__FutureBookmark* */ (*)(const KBookmarkOwner*);
    using KBookmarkOwner_EnableOption_Callback = bool (*)(const KBookmarkOwner*, int);
    using KBookmarkOwner_OpenBookmark_Callback = void (*)(KBookmarkOwner*, KBookmark*, int, int);
    using KBookmarkOwner_OpenFolderinTabs_Callback = void (*)(KBookmarkOwner*, KBookmarkGroup*);
    using KBookmarkOwner_OpenInNewTab_Callback = void (*)(KBookmarkOwner*, KBookmark*);
    using KBookmarkOwner_OpenInNewWindow_Callback = void (*)(KBookmarkOwner*, KBookmark*);

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

    VirtualKBookmarkOwner() : KBookmarkOwner() {};

    // Virtual method for C ABI access and custom callback
    virtual QString currentTitle() const override {
        if (kbookmarkowner_currenttitle_callback) {
            const char* callback_ret = kbookmarkowner_currenttitle_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KBookmarkOwner::currentTitle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QUrl currentUrl() const override {
        if (kbookmarkowner_currenturl_callback) {
            QUrl* callback_ret = kbookmarkowner_currenturl_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KBookmarkOwner::currentUrl();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString currentIcon() const override {
        if (kbookmarkowner_currenticon_callback) {
            const char* callback_ret = kbookmarkowner_currenticon_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KBookmarkOwner::currentIcon();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsTabs() const override {
        if (kbookmarkowner_supportstabs_callback) {
            bool callback_ret = kbookmarkowner_supportstabs_callback(this);
            return callback_ret;
        }
        return KBookmarkOwner::supportsTabs();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<KBookmarkOwner::FutureBookmark> currentBookmarkList() const override {
        if (kbookmarkowner_currentbookmarklist_callback) {
            libqt_list /* of KBookmarkOwner__FutureBookmark* */ callback_ret = kbookmarkowner_currentbookmarklist_callback(this);
            QList<KBookmarkOwner::FutureBookmark> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            KBookmarkOwner__FutureBookmark** callback_ret_arr = static_cast<KBookmarkOwner__FutureBookmark**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KBookmarkOwner::currentBookmarkList();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool enableOption(KBookmarkOwner::BookmarkOption option) const override {
        if (kbookmarkowner_enableoption_callback) {
            int cbval1 = static_cast<int>(option);
            bool callback_ret = kbookmarkowner_enableoption_callback(this, cbval1);
            return callback_ret;
        }
        return KBookmarkOwner::enableOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void openBookmark(const KBookmark& bm, Qt::MouseButtons mb, Qt::KeyboardModifiers km) override {
        if (kbookmarkowner_openbookmark_callback) {
            const KBookmark& bm_ret = bm;
            // Cast returned reference into pointer
            KBookmark* cbval1 = const_cast<KBookmark*>(&bm_ret);
            int cbval2 = static_cast<int>(mb);
            int cbval3 = static_cast<int>(km);
            kbookmarkowner_openbookmark_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KBookmarkOwner::openBookmark called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void openFolderinTabs(const KBookmarkGroup& bm) override {
        if (kbookmarkowner_openfolderintabs_callback) {
            const KBookmarkGroup& bm_ret = bm;
            // Cast returned reference into pointer
            KBookmarkGroup* cbval1 = const_cast<KBookmarkGroup*>(&bm_ret);
            kbookmarkowner_openfolderintabs_callback(this, cbval1);
            return;
        }
        KBookmarkOwner::openFolderinTabs(bm);
    }

    // Virtual method for C ABI access and custom callback
    virtual void openInNewTab(const KBookmark& bm) override {
        if (kbookmarkowner_openinnewtab_callback) {
            const KBookmark& bm_ret = bm;
            // Cast returned reference into pointer
            KBookmark* cbval1 = const_cast<KBookmark*>(&bm_ret);
            kbookmarkowner_openinnewtab_callback(this, cbval1);
            return;
        }
        KBookmarkOwner::openInNewTab(bm);
    }

    // Virtual method for C ABI access and custom callback
    virtual void openInNewWindow(const KBookmark& bm) override {
        if (kbookmarkowner_openinnewwindow_callback) {
            const KBookmark& bm_ret = bm;
            // Cast returned reference into pointer
            KBookmark* cbval1 = const_cast<KBookmark*>(&bm_ret);
            kbookmarkowner_openinnewwindow_callback(this, cbval1);
            return;
        }
        KBookmarkOwner::openInNewWindow(bm);
    }
};

#endif
