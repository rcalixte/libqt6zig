#pragma once
#ifndef EXTRAS_KCOMPLETION_LIBKCOMPLETIONBASE_HXX
#define EXTRAS_KCOMPLETION_LIBKCOMPLETIONBASE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCompletionBase
class VirtualKCompletionBase : public KCompletionBase {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCompletionBase_SetCompletionObject_Callback = void (*)(KCompletionBase*, KCompletion*, bool);
    using KCompletionBase_SetHandleSignals_Callback = void (*)(KCompletionBase*, bool);
    using KCompletionBase_SetCompletionMode_Callback = void (*)(KCompletionBase*, int);
    using KCompletionBase_SetCompletedText_Callback = void (*)(KCompletionBase*, const char*);
    using KCompletionBase_SetCompletedItems_Callback = void (*)(KCompletionBase*, const char**, bool);
    using KCompletionBase_VirtualHook_Callback = void (*)(KCompletionBase*, int, void*);
    using KCompletionBase::delegate;
    using KCompletionBase::keyBindingMap;
    using KCompletionBase::setDelegate;
    using KCompletionBase::setKeyBindingMap;

    // Instance callback storage
    KCompletionBase_SetCompletionObject_Callback kcompletionbase_setcompletionobject_callback = nullptr;
    KCompletionBase_SetHandleSignals_Callback kcompletionbase_sethandlesignals_callback = nullptr;
    KCompletionBase_SetCompletionMode_Callback kcompletionbase_setcompletionmode_callback = nullptr;
    KCompletionBase_SetCompletedText_Callback kcompletionbase_setcompletedtext_callback = nullptr;
    KCompletionBase_SetCompletedItems_Callback kcompletionbase_setcompleteditems_callback = nullptr;
    KCompletionBase_VirtualHook_Callback kcompletionbase_virtualhook_callback = nullptr;

    // Access struct
    struct Base : KCompletionBase {
        using KCompletionBase::virtual_hook;
    };

    VirtualKCompletionBase() : KCompletionBase() {};

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionObject(KCompletion* completionObject, bool handleSignals) override {
        if (kcompletionbase_setcompletionobject_callback) {
            KCompletion* cbval1 = completionObject;
            bool cbval2 = handleSignals;
            kcompletionbase_setcompletionobject_callback(this, cbval1, cbval2);
            return;
        }
        KCompletionBase::setCompletionObject(completionObject, handleSignals);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setHandleSignals(bool handle) override {
        if (kcompletionbase_sethandlesignals_callback) {
            bool cbval1 = handle;
            kcompletionbase_sethandlesignals_callback(this, cbval1);
            return;
        }
        KCompletionBase::setHandleSignals(handle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionMode(KCompletion::CompletionMode mode) override {
        if (kcompletionbase_setcompletionmode_callback) {
            int cbval1 = static_cast<int>(mode);
            kcompletionbase_setcompletionmode_callback(this, cbval1);
            return;
        }
        KCompletionBase::setCompletionMode(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletedText(const QString& text) override {
        if (kcompletionbase_setcompletedtext_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            kcompletionbase_setcompletedtext_callback(this, cbval1);
            libqt_free(text_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KCompletionBase::setCompletedText called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletedItems(const QList<QString>& items, bool autoSuggest) override {
        if (kcompletionbase_setcompleteditems_callback) {
            const QList<QString>& items_ret = items;
            // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
            const char** items_arr = static_cast<const char**>(malloc(sizeof(const char*) * (items_ret.size() + 1)));
            for (qsizetype i = 0; i < items_ret.size(); ++i) {
                QByteArray items_b = items_ret[i].toUtf8();
                auto items_str_len = items_b.length();
                char* items_str = static_cast<char*>(malloc(items_str_len + 1));
                memcpy(items_str, items_b.data(), items_str_len);
                items_str[items_str_len] = '\0';
                items_arr[i] = items_str;
            }
            // Append sentinel null terminator to the list
            items_arr[items_ret.size()] = nullptr;
            const char** cbval1 = items_arr;
            bool cbval2 = autoSuggest;
            kcompletionbase_setcompleteditems_callback(this, cbval1, cbval2);
            libqt_free(items_arr);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KCompletionBase::setCompletedItems called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kcompletionbase_virtualhook_callback) {
            int cbval1 = id;
            void* cbval2 = data;
            kcompletionbase_virtualhook_callback(this, cbval1, cbval2);
            return;
        }
        KCompletionBase::virtual_hook(id, data);
    }

    // Friend functions
    friend void KCompletionBase_SuperVirtualHook(KCompletionBase* self, int id, void* data);
};

#endif
