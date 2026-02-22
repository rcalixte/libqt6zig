#pragma once
#ifndef SRC_EXTRAS_KCOMPLETIONC_LIBVIRTUALKCOMPLETIONBASE_H
#define SRC_EXTRAS_KCOMPLETIONC_LIBVIRTUALKCOMPLETIONBASE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCompletionBase so that we can call protected methods
class VirtualKCompletionBase : public KCompletionBase {

  public:
    // Virtual class boolean flag
    bool isVirtualKCompletionBase = true;

    // Virtual class public types (including callbacks)
    using KCompletionBase_SetCompletionObject_Callback = void (*)(KCompletionBase*, KCompletion*, bool);
    using KCompletionBase_SetHandleSignals_Callback = void (*)(KCompletionBase*, bool);
    using KCompletionBase_SetCompletionMode_Callback = void (*)(KCompletionBase*, int);
    using KCompletionBase_SetCompletedText_Callback = void (*)(KCompletionBase*, const char*);
    using KCompletionBase_SetCompletedItems_Callback = void (*)(KCompletionBase*, const char**, bool);
    using KCompletionBase_VirtualHook_Callback = void (*)(KCompletionBase*, int, void*);
    using KCompletionBase_KeyBindingMap_Callback = libqt_map /* of int to libqt_list of QKeySequence* */ (*)();
    using KCompletionBase_SetKeyBindingMap_Callback = void (*)(KCompletionBase*, libqt_map /* of int to libqt_list of QKeySequence* */);
    using KCompletionBase_SetDelegate_Callback = void (*)(KCompletionBase*, KCompletionBase*);
    using KCompletionBase_Delegate_Callback = KCompletionBase* (*)();

  protected:
    // Instance callback storage
    KCompletionBase_SetCompletionObject_Callback kcompletionbase_setcompletionobject_callback = nullptr;
    KCompletionBase_SetHandleSignals_Callback kcompletionbase_sethandlesignals_callback = nullptr;
    KCompletionBase_SetCompletionMode_Callback kcompletionbase_setcompletionmode_callback = nullptr;
    KCompletionBase_SetCompletedText_Callback kcompletionbase_setcompletedtext_callback = nullptr;
    KCompletionBase_SetCompletedItems_Callback kcompletionbase_setcompleteditems_callback = nullptr;
    KCompletionBase_VirtualHook_Callback kcompletionbase_virtualhook_callback = nullptr;
    KCompletionBase_KeyBindingMap_Callback kcompletionbase_keybindingmap_callback = nullptr;
    KCompletionBase_SetKeyBindingMap_Callback kcompletionbase_setkeybindingmap_callback = nullptr;
    KCompletionBase_SetDelegate_Callback kcompletionbase_setdelegate_callback = nullptr;
    KCompletionBase_Delegate_Callback kcompletionbase_delegate_callback = nullptr;

    // Instance base flags
    mutable bool kcompletionbase_setcompletionobject_isbase = false;
    mutable bool kcompletionbase_sethandlesignals_isbase = false;
    mutable bool kcompletionbase_setcompletionmode_isbase = false;
    mutable bool kcompletionbase_setcompletedtext_isbase = false;
    mutable bool kcompletionbase_setcompleteditems_isbase = false;
    mutable bool kcompletionbase_virtualhook_isbase = false;
    mutable bool kcompletionbase_keybindingmap_isbase = false;
    mutable bool kcompletionbase_setkeybindingmap_isbase = false;
    mutable bool kcompletionbase_setdelegate_isbase = false;
    mutable bool kcompletionbase_delegate_isbase = false;

  public:
    VirtualKCompletionBase() : KCompletionBase() {};

    ~VirtualKCompletionBase() {
        kcompletionbase_setcompletionobject_callback = nullptr;
        kcompletionbase_sethandlesignals_callback = nullptr;
        kcompletionbase_setcompletionmode_callback = nullptr;
        kcompletionbase_setcompletedtext_callback = nullptr;
        kcompletionbase_setcompleteditems_callback = nullptr;
        kcompletionbase_virtualhook_callback = nullptr;
        kcompletionbase_keybindingmap_callback = nullptr;
        kcompletionbase_setkeybindingmap_callback = nullptr;
        kcompletionbase_setdelegate_callback = nullptr;
        kcompletionbase_delegate_callback = nullptr;
    }

    // Callback setters
    inline void setKCompletionBase_SetCompletionObject_Callback(KCompletionBase_SetCompletionObject_Callback cb) { kcompletionbase_setcompletionobject_callback = cb; }
    inline void setKCompletionBase_SetHandleSignals_Callback(KCompletionBase_SetHandleSignals_Callback cb) { kcompletionbase_sethandlesignals_callback = cb; }
    inline void setKCompletionBase_SetCompletionMode_Callback(KCompletionBase_SetCompletionMode_Callback cb) { kcompletionbase_setcompletionmode_callback = cb; }
    inline void setKCompletionBase_SetCompletedText_Callback(KCompletionBase_SetCompletedText_Callback cb) { kcompletionbase_setcompletedtext_callback = cb; }
    inline void setKCompletionBase_SetCompletedItems_Callback(KCompletionBase_SetCompletedItems_Callback cb) { kcompletionbase_setcompleteditems_callback = cb; }
    inline void setKCompletionBase_VirtualHook_Callback(KCompletionBase_VirtualHook_Callback cb) { kcompletionbase_virtualhook_callback = cb; }
    inline void setKCompletionBase_KeyBindingMap_Callback(KCompletionBase_KeyBindingMap_Callback cb) { kcompletionbase_keybindingmap_callback = cb; }
    inline void setKCompletionBase_SetKeyBindingMap_Callback(KCompletionBase_SetKeyBindingMap_Callback cb) { kcompletionbase_setkeybindingmap_callback = cb; }
    inline void setKCompletionBase_SetDelegate_Callback(KCompletionBase_SetDelegate_Callback cb) { kcompletionbase_setdelegate_callback = cb; }
    inline void setKCompletionBase_Delegate_Callback(KCompletionBase_Delegate_Callback cb) { kcompletionbase_delegate_callback = cb; }

    // Base flag setters
    inline void setKCompletionBase_SetCompletionObject_IsBase(bool value) const { kcompletionbase_setcompletionobject_isbase = value; }
    inline void setKCompletionBase_SetHandleSignals_IsBase(bool value) const { kcompletionbase_sethandlesignals_isbase = value; }
    inline void setKCompletionBase_SetCompletionMode_IsBase(bool value) const { kcompletionbase_setcompletionmode_isbase = value; }
    inline void setKCompletionBase_SetCompletedText_IsBase(bool value) const { kcompletionbase_setcompletedtext_isbase = value; }
    inline void setKCompletionBase_SetCompletedItems_IsBase(bool value) const { kcompletionbase_setcompleteditems_isbase = value; }
    inline void setKCompletionBase_VirtualHook_IsBase(bool value) const { kcompletionbase_virtualhook_isbase = value; }
    inline void setKCompletionBase_KeyBindingMap_IsBase(bool value) const { kcompletionbase_keybindingmap_isbase = value; }
    inline void setKCompletionBase_SetKeyBindingMap_IsBase(bool value) const { kcompletionbase_setkeybindingmap_isbase = value; }
    inline void setKCompletionBase_SetDelegate_IsBase(bool value) const { kcompletionbase_setdelegate_isbase = value; }
    inline void setKCompletionBase_Delegate_IsBase(bool value) const { kcompletionbase_delegate_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionObject(KCompletion* completionObject, bool handleSignals) override {
        if (kcompletionbase_setcompletionobject_isbase) {
            kcompletionbase_setcompletionobject_isbase = false;
            KCompletionBase::setCompletionObject(completionObject, handleSignals);
        } else if (kcompletionbase_setcompletionobject_callback != nullptr) {
            KCompletion* cbval1 = completionObject;
            bool cbval2 = handleSignals;

            kcompletionbase_setcompletionobject_callback(this, cbval1, cbval2);
        } else {
            KCompletionBase::setCompletionObject(completionObject, handleSignals);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setHandleSignals(bool handle) override {
        if (kcompletionbase_sethandlesignals_isbase) {
            kcompletionbase_sethandlesignals_isbase = false;
            KCompletionBase::setHandleSignals(handle);
        } else if (kcompletionbase_sethandlesignals_callback != nullptr) {
            bool cbval1 = handle;

            kcompletionbase_sethandlesignals_callback(this, cbval1);
        } else {
            KCompletionBase::setHandleSignals(handle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionMode(KCompletion::CompletionMode mode) override {
        if (kcompletionbase_setcompletionmode_isbase) {
            kcompletionbase_setcompletionmode_isbase = false;
            KCompletionBase::setCompletionMode(mode);
        } else if (kcompletionbase_setcompletionmode_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            kcompletionbase_setcompletionmode_callback(this, cbval1);
        } else {
            KCompletionBase::setCompletionMode(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletedText(const QString& text) override {
        if (kcompletionbase_setcompletedtext_callback != nullptr) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;

            kcompletionbase_setcompletedtext_callback(this, cbval1);
            libqt_free(text_str);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletedItems(const QList<QString>& items, bool autoSuggest) override {
        if (kcompletionbase_setcompleteditems_callback != nullptr) {
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
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kcompletionbase_virtualhook_isbase) {
            kcompletionbase_virtualhook_isbase = false;
            KCompletionBase::virtual_hook(id, data);
        } else if (kcompletionbase_virtualhook_callback != nullptr) {
            int cbval1 = id;
            void* cbval2 = data;

            kcompletionbase_virtualhook_callback(this, cbval1, cbval2);
        } else {
            KCompletionBase::virtual_hook(id, data);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> keyBindingMap() const {
        if (kcompletionbase_keybindingmap_isbase) {
            kcompletionbase_keybindingmap_isbase = false;
            return KCompletionBase::keyBindingMap();
        } else if (kcompletionbase_keybindingmap_callback != nullptr) {
            libqt_map /* of int to libqt_list of QKeySequence* */ callback_ret = kcompletionbase_keybindingmap_callback();
            QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            libqt_list /* of QKeySequence* */* callback_ret_varr = static_cast<libqt_list /* of QKeySequence* */*>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QList<QKeySequence> callback_ret_varr_i_QList;
                callback_ret_varr_i_QList.reserve(callback_ret_varr[i].len);
                QKeySequence** callback_ret_varr_i_arr = static_cast<QKeySequence**>(callback_ret_varr[i].data);
                for (size_t j = 0; j < callback_ret_varr[i].len; ++j) {
                    callback_ret_varr_i_QList.push_back(*(callback_ret_varr_i_arr[j]));
                }
                callback_ret_QMap[static_cast<KCompletionBase::KeyBindingType>(callback_ret_karr[i])] = callback_ret_varr_i_QList;
            }
            return callback_ret_QMap;
        } else {
            return KCompletionBase::keyBindingMap();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setKeyBindingMap(QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> keyBindingMap) {
        if (kcompletionbase_setkeybindingmap_isbase) {
            kcompletionbase_setkeybindingmap_isbase = false;
            KCompletionBase::setKeyBindingMap(keyBindingMap);
        } else if (kcompletionbase_setkeybindingmap_callback != nullptr) {
            QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> keyBindingMap_ret = keyBindingMap;
            // Convert QMap<> from C++ memory to manually-managed C memory
            int* keyBindingMap_karr = static_cast<int*>(malloc(sizeof(int) * keyBindingMap_ret.size()));
            libqt_list /* of QKeySequence* */* keyBindingMap_varr = static_cast<libqt_list /* of QKeySequence* */*>(malloc(sizeof(libqt_list /* of QKeySequence* */) * keyBindingMap_ret.size()));
            int keyBindingMap_ctr = 0;
            for (auto keyBindingMap_itr = keyBindingMap_ret.keyValueBegin(); keyBindingMap_itr != keyBindingMap_ret.keyValueEnd(); ++keyBindingMap_itr) {
                keyBindingMap_karr[keyBindingMap_ctr] = static_cast<int>(keyBindingMap_itr->first);
                QList<QKeySequence> keyBindingMap_mapval_ret = keyBindingMap_itr->second;
                // Convert QList<> from C++ memory to manually-managed C memory
                QKeySequence** keyBindingMap_mapval_arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (keyBindingMap_mapval_ret.size())));
                for (qsizetype i = 0; i < keyBindingMap_mapval_ret.size(); ++i) {
                    keyBindingMap_mapval_arr[i] = new QKeySequence(keyBindingMap_mapval_ret[i]);
                }
                libqt_list keyBindingMap_mapval_out;
                keyBindingMap_mapval_out.len = keyBindingMap_mapval_ret.size();
                keyBindingMap_mapval_out.data = static_cast<void*>(keyBindingMap_mapval_arr);
                keyBindingMap_varr[keyBindingMap_ctr] = keyBindingMap_mapval_out;
                keyBindingMap_ctr++;
            }
            libqt_map keyBindingMap_out;
            keyBindingMap_out.len = keyBindingMap_ret.size();
            keyBindingMap_out.keys = static_cast<void*>(keyBindingMap_karr);
            keyBindingMap_out.values = static_cast<void*>(keyBindingMap_varr);
            libqt_map /* of int to libqt_list of QKeySequence* */ cbval1 = keyBindingMap_out;

            kcompletionbase_setkeybindingmap_callback(this, cbval1);
        } else {
            KCompletionBase::setKeyBindingMap(keyBindingMap);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setDelegate(KCompletionBase* delegate) {
        if (kcompletionbase_setdelegate_isbase) {
            kcompletionbase_setdelegate_isbase = false;
            KCompletionBase::setDelegate(delegate);
        } else if (kcompletionbase_setdelegate_callback != nullptr) {
            KCompletionBase* cbval1 = delegate;

            kcompletionbase_setdelegate_callback(this, cbval1);
        } else {
            KCompletionBase::setDelegate(delegate);
        }
    }

    // Virtual method for C ABI access and custom callback
    KCompletionBase* delegate() const {
        if (kcompletionbase_delegate_isbase) {
            kcompletionbase_delegate_isbase = false;
            return KCompletionBase::delegate();
        } else if (kcompletionbase_delegate_callback != nullptr) {
            KCompletionBase* callback_ret = kcompletionbase_delegate_callback();
            return callback_ret;
        } else {
            return KCompletionBase::delegate();
        }
    }

    // Friend functions
    friend void KCompletionBase_VirtualHook(KCompletionBase* self, int id, void* data);
    friend void KCompletionBase_QBaseVirtualHook(KCompletionBase* self, int id, void* data);
    friend libqt_map /* of int to libqt_list of QKeySequence* */ KCompletionBase_KeyBindingMap(const KCompletionBase* self);
    friend libqt_map /* of int to libqt_list of QKeySequence* */ KCompletionBase_QBaseKeyBindingMap(const KCompletionBase* self);
    friend void KCompletionBase_SetKeyBindingMap(KCompletionBase* self, libqt_map /* of int to libqt_list of QKeySequence* */ keyBindingMap);
    friend void KCompletionBase_QBaseSetKeyBindingMap(KCompletionBase* self, libqt_map /* of int to libqt_list of QKeySequence* */ keyBindingMap);
    friend void KCompletionBase_SetDelegate(KCompletionBase* self, KCompletionBase* delegate);
    friend void KCompletionBase_QBaseSetDelegate(KCompletionBase* self, KCompletionBase* delegate);
    friend KCompletionBase* KCompletionBase_Delegate(const KCompletionBase* self);
    friend KCompletionBase* KCompletionBase_QBaseDelegate(const KCompletionBase* self);
};

#endif
