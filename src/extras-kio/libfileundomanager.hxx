#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALFILEUNDOMANAGER_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALFILEUNDOMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::FileUndoManager::UiInterface so that we can call protected methods
class VirtualKIOFileUndoManagerUiInterface final : public KIO::FileUndoManager::UiInterface {

  public:
    // Virtual class boolean flag
    bool isVirtualKIOFileUndoManagerUiInterface = true;

    // Virtual class public types (including callbacks)
    using KIO__FileUndoManager__UiInterface_JobError_Callback = void (*)(KIO__FileUndoManager__UiInterface*, KIO__Job*);
    using KIO__FileUndoManager__UiInterface_CopiedFileWasModified_Callback = bool (*)(KIO__FileUndoManager__UiInterface*, QUrl*, QUrl*, QDateTime*, QDateTime*);
    using KIO__FileUndoManager__UiInterface_VirtualHook_Callback = void (*)(KIO__FileUndoManager__UiInterface*, int, void*);

  protected:
    // Instance callback storage
    KIO__FileUndoManager__UiInterface_JobError_Callback kio__fileundomanager__uiinterface_joberror_callback = nullptr;
    KIO__FileUndoManager__UiInterface_CopiedFileWasModified_Callback kio__fileundomanager__uiinterface_copiedfilewasmodified_callback = nullptr;
    KIO__FileUndoManager__UiInterface_VirtualHook_Callback kio__fileundomanager__uiinterface_virtualhook_callback = nullptr;

    // Instance base flags
    mutable bool kio__fileundomanager__uiinterface_joberror_isbase = false;
    mutable bool kio__fileundomanager__uiinterface_copiedfilewasmodified_isbase = false;
    mutable bool kio__fileundomanager__uiinterface_virtualhook_isbase = false;

  public:
    VirtualKIOFileUndoManagerUiInterface() : KIO::FileUndoManager::UiInterface() {};

    // Callback setters
    inline void setKIO__FileUndoManager__UiInterface_JobError_Callback(KIO__FileUndoManager__UiInterface_JobError_Callback cb) { kio__fileundomanager__uiinterface_joberror_callback = cb; }
    inline void setKIO__FileUndoManager__UiInterface_CopiedFileWasModified_Callback(KIO__FileUndoManager__UiInterface_CopiedFileWasModified_Callback cb) { kio__fileundomanager__uiinterface_copiedfilewasmodified_callback = cb; }
    inline void setKIO__FileUndoManager__UiInterface_VirtualHook_Callback(KIO__FileUndoManager__UiInterface_VirtualHook_Callback cb) { kio__fileundomanager__uiinterface_virtualhook_callback = cb; }

    // Base flag setters
    inline void setKIO__FileUndoManager__UiInterface_JobError_IsBase(bool value) const { kio__fileundomanager__uiinterface_joberror_isbase = value; }
    inline void setKIO__FileUndoManager__UiInterface_CopiedFileWasModified_IsBase(bool value) const { kio__fileundomanager__uiinterface_copiedfilewasmodified_isbase = value; }
    inline void setKIO__FileUndoManager__UiInterface_VirtualHook_IsBase(bool value) const { kio__fileundomanager__uiinterface_virtualhook_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void jobError(KIO::Job* job) override {
        if (kio__fileundomanager__uiinterface_joberror_isbase) {
            kio__fileundomanager__uiinterface_joberror_isbase = false;
            KIO__FileUndoManager__UiInterface::jobError(job);
            return;
        }
        auto joberror_cb = kio__fileundomanager__uiinterface_joberror_callback;
        if (joberror_cb) {
            KIO__Job* cbval1 = job;

            joberror_cb(this, cbval1);
            return;
        }
        KIO__FileUndoManager__UiInterface::jobError(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool copiedFileWasModified(const QUrl& src, const QUrl& dest, const QDateTime& srcTime, const QDateTime& destTime) override {
        if (kio__fileundomanager__uiinterface_copiedfilewasmodified_isbase) {
            kio__fileundomanager__uiinterface_copiedfilewasmodified_isbase = false;
            return KIO__FileUndoManager__UiInterface::copiedFileWasModified(src, dest, srcTime, destTime);
        }
        auto copiedfilewasmodified_cb = kio__fileundomanager__uiinterface_copiedfilewasmodified_callback;
        if (copiedfilewasmodified_cb) {
            const QUrl& src_ret = src;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&src_ret);
            const QUrl& dest_ret = dest;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&dest_ret);
            const QDateTime& srcTime_ret = srcTime;
            // Cast returned reference into pointer
            QDateTime* cbval3 = const_cast<QDateTime*>(&srcTime_ret);
            const QDateTime& destTime_ret = destTime;
            // Cast returned reference into pointer
            QDateTime* cbval4 = const_cast<QDateTime*>(&destTime_ret);

            bool callback_ret = copiedfilewasmodified_cb(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KIO__FileUndoManager__UiInterface::copiedFileWasModified(src, dest, srcTime, destTime);
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kio__fileundomanager__uiinterface_virtualhook_isbase) {
            kio__fileundomanager__uiinterface_virtualhook_isbase = false;
            KIO__FileUndoManager__UiInterface::virtual_hook(id, data);
            return;
        }
        auto virtualhook_cb = kio__fileundomanager__uiinterface_virtualhook_callback;
        if (virtualhook_cb) {
            int cbval1 = id;
            void* cbval2 = data;

            virtualhook_cb(this, cbval1, cbval2);
            return;
        }
        KIO__FileUndoManager__UiInterface::virtual_hook(id, data);
    }
};

#endif
