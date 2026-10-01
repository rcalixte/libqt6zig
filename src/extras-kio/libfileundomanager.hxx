#pragma once
#ifndef EXTRAS_KIO_LIBFILEUNDOMANAGER_HXX
#define EXTRAS_KIO_LIBFILEUNDOMANAGER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::FileUndoManager::UiInterface
class VirtualKIOFileUndoManagerUiInterface final : public KIO::FileUndoManager::UiInterface {
  public:
    // Virtual class public types (including callbacks and access types)
    using KIO__FileUndoManager__UiInterface_JobError_Callback = void (*)(KIO__FileUndoManager__UiInterface*, KIO__Job*);
    using KIO__FileUndoManager__UiInterface_CopiedFileWasModified_Callback = bool (*)(KIO__FileUndoManager__UiInterface*, QUrl*, QUrl*, QDateTime*, QDateTime*);
    using KIO__FileUndoManager__UiInterface_VirtualHook_Callback = void (*)(KIO__FileUndoManager__UiInterface*, int, void*);

    // Instance callback storage
    KIO__FileUndoManager__UiInterface_JobError_Callback kio__fileundomanager__uiinterface_joberror_callback = nullptr;
    KIO__FileUndoManager__UiInterface_CopiedFileWasModified_Callback kio__fileundomanager__uiinterface_copiedfilewasmodified_callback = nullptr;
    KIO__FileUndoManager__UiInterface_VirtualHook_Callback kio__fileundomanager__uiinterface_virtualhook_callback = nullptr;

    VirtualKIOFileUndoManagerUiInterface() : KIO::FileUndoManager::UiInterface() {};

    // Virtual method for C ABI access and custom callback
    virtual void jobError(KIO::Job* job) override {
        if (kio__fileundomanager__uiinterface_joberror_callback) {
            KIO__Job* cbval1 = job;
            kio__fileundomanager__uiinterface_joberror_callback(this, cbval1);
            return;
        }
        KIO__FileUndoManager__UiInterface::jobError(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool copiedFileWasModified(const QUrl& src, const QUrl& dest, const QDateTime& srcTime, const QDateTime& destTime) override {
        if (kio__fileundomanager__uiinterface_copiedfilewasmodified_callback) {
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
            bool callback_ret = kio__fileundomanager__uiinterface_copiedfilewasmodified_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KIO__FileUndoManager__UiInterface::copiedFileWasModified(src, dest, srcTime, destTime);
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kio__fileundomanager__uiinterface_virtualhook_callback) {
            int cbval1 = id;
            void* cbval2 = data;
            kio__fileundomanager__uiinterface_virtualhook_callback(this, cbval1, cbval2);
            return;
        }
        KIO__FileUndoManager__UiInterface::virtual_hook(id, data);
    }
};

#endif
