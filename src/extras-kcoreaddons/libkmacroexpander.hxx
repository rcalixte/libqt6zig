#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBVIRTUALKMACROEXPANDER_H
#define SRC_EXTRAS_KCOREADDONSC_LIBVIRTUALKMACROEXPANDER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KMacroExpanderBase so that we can call protected methods
class VirtualKMacroExpanderBase final : public KMacroExpanderBase {

  public:
    // Virtual class boolean flag
    bool isVirtualKMacroExpanderBase = true;

    // Virtual class public types (including callbacks)
    using KMacroExpanderBase_ExpandPlainMacro_Callback = int (*)(KMacroExpanderBase*, libqt_string, int, libqt_list /* of libqt_string */);
    using KMacroExpanderBase_ExpandEscapedMacro_Callback = int (*)(KMacroExpanderBase*, libqt_string, int, libqt_list /* of libqt_string */);

  protected:
    // Instance callback storage
    KMacroExpanderBase_ExpandPlainMacro_Callback kmacroexpanderbase_expandplainmacro_callback = nullptr;
    KMacroExpanderBase_ExpandEscapedMacro_Callback kmacroexpanderbase_expandescapedmacro_callback = nullptr;

    // Instance base flags
    mutable bool kmacroexpanderbase_expandplainmacro_isbase = false;
    mutable bool kmacroexpanderbase_expandescapedmacro_isbase = false;

  public:
    VirtualKMacroExpanderBase() : KMacroExpanderBase() {};
    VirtualKMacroExpanderBase(QChar c) : KMacroExpanderBase(c) {};

    ~VirtualKMacroExpanderBase() {
        kmacroexpanderbase_expandplainmacro_callback = nullptr;
        kmacroexpanderbase_expandescapedmacro_callback = nullptr;
    }

    // Callback setters
    inline void setKMacroExpanderBase_ExpandPlainMacro_Callback(KMacroExpanderBase_ExpandPlainMacro_Callback cb) { kmacroexpanderbase_expandplainmacro_callback = cb; }
    inline void setKMacroExpanderBase_ExpandEscapedMacro_Callback(KMacroExpanderBase_ExpandEscapedMacro_Callback cb) { kmacroexpanderbase_expandescapedmacro_callback = cb; }

    // Base flag setters
    inline void setKMacroExpanderBase_ExpandPlainMacro_IsBase(bool value) const { kmacroexpanderbase_expandplainmacro_isbase = value; }
    inline void setKMacroExpanderBase_ExpandEscapedMacro_IsBase(bool value) const { kmacroexpanderbase_expandescapedmacro_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int expandPlainMacro(const QString& str, int pos, QList<QString>& retVal) override {
        if (kmacroexpanderbase_expandplainmacro_isbase) {
            kmacroexpanderbase_expandplainmacro_isbase = false;
            return KMacroExpanderBase::expandPlainMacro(str, pos, retVal);
        } else if (kmacroexpanderbase_expandplainmacro_callback != nullptr) {
            const QString str_ret = str;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray str_b = str_ret.toUtf8();
            libqt_string str_str;
            str_str.len = str_b.length();
            str_str.data = static_cast<const char*>(malloc(str_str.len + 1));
            memcpy((void*)str_str.data, str_b.data(), str_str.len);
            ((char*)str_str.data)[str_str.len] = '\0';
            libqt_string cbval1 = str_str;
            int cbval2 = pos;
            QList<QString>& retVal_ret = retVal;
            // Convert QList<> from C++ memory to manually-managed C memory
            libqt_string* retVal_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (retVal_ret.size() + 1)));
            for (qsizetype i = 0; i < retVal_ret.size(); ++i) {
                QString retVal_lv_ret = retVal_ret[i];
                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
                QByteArray retVal_lv_b = retVal_lv_ret.toUtf8();
                libqt_string retVal_lv_str;
                retVal_lv_str.len = retVal_lv_b.length();
                retVal_lv_str.data = static_cast<const char*>(malloc(retVal_lv_str.len + 1));
                memcpy((void*)retVal_lv_str.data, retVal_lv_b.data(), retVal_lv_str.len);
                ((char*)retVal_lv_str.data)[retVal_lv_str.len] = '\0';
                retVal_arr[i] = retVal_lv_str;
            }
            libqt_list retVal_out;
            retVal_out.len = retVal_ret.size();
            retVal_out.data = static_cast<void*>(retVal_arr);
            libqt_list /* of libqt_string */ cbval3 = retVal_out;

            int callback_ret = kmacroexpanderbase_expandplainmacro_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KMacroExpanderBase::expandPlainMacro(str, pos, retVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int expandEscapedMacro(const QString& str, int pos, QList<QString>& retVal) override {
        if (kmacroexpanderbase_expandescapedmacro_isbase) {
            kmacroexpanderbase_expandescapedmacro_isbase = false;
            return KMacroExpanderBase::expandEscapedMacro(str, pos, retVal);
        } else if (kmacroexpanderbase_expandescapedmacro_callback != nullptr) {
            const QString str_ret = str;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray str_b = str_ret.toUtf8();
            libqt_string str_str;
            str_str.len = str_b.length();
            str_str.data = static_cast<const char*>(malloc(str_str.len + 1));
            memcpy((void*)str_str.data, str_b.data(), str_str.len);
            ((char*)str_str.data)[str_str.len] = '\0';
            libqt_string cbval1 = str_str;
            int cbval2 = pos;
            QList<QString>& retVal_ret = retVal;
            // Convert QList<> from C++ memory to manually-managed C memory
            libqt_string* retVal_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (retVal_ret.size() + 1)));
            for (qsizetype i = 0; i < retVal_ret.size(); ++i) {
                QString retVal_lv_ret = retVal_ret[i];
                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
                QByteArray retVal_lv_b = retVal_lv_ret.toUtf8();
                libqt_string retVal_lv_str;
                retVal_lv_str.len = retVal_lv_b.length();
                retVal_lv_str.data = static_cast<const char*>(malloc(retVal_lv_str.len + 1));
                memcpy((void*)retVal_lv_str.data, retVal_lv_b.data(), retVal_lv_str.len);
                ((char*)retVal_lv_str.data)[retVal_lv_str.len] = '\0';
                retVal_arr[i] = retVal_lv_str;
            }
            libqt_list retVal_out;
            retVal_out.len = retVal_ret.size();
            retVal_out.data = static_cast<void*>(retVal_arr);
            libqt_list /* of libqt_string */ cbval3 = retVal_out;

            int callback_ret = kmacroexpanderbase_expandescapedmacro_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KMacroExpanderBase::expandEscapedMacro(str, pos, retVal);
        }
    }

    // Friend functions
    friend int KMacroExpanderBase_ExpandPlainMacro(KMacroExpanderBase* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal);
    friend int KMacroExpanderBase_QBaseExpandPlainMacro(KMacroExpanderBase* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal);
    friend int KMacroExpanderBase_ExpandEscapedMacro(KMacroExpanderBase* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal);
    friend int KMacroExpanderBase_QBaseExpandEscapedMacro(KMacroExpanderBase* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal);
};

// This class is a subclass of KWordMacroExpander so that we can call protected methods
class VirtualKWordMacroExpander final : public KWordMacroExpander {

  public:
    // Virtual class boolean flag
    bool isVirtualKWordMacroExpander = true;

    // Virtual class public types (including callbacks)
    using KWordMacroExpander_ExpandPlainMacro_Callback = int (*)(KWordMacroExpander*, libqt_string, int, libqt_list /* of libqt_string */);
    using KWordMacroExpander_ExpandEscapedMacro_Callback = int (*)(KWordMacroExpander*, libqt_string, int, libqt_list /* of libqt_string */);
    using KWordMacroExpander_ExpandMacro_Callback = bool (*)(KWordMacroExpander*, libqt_string, libqt_list /* of libqt_string */);

  protected:
    // Instance callback storage
    KWordMacroExpander_ExpandPlainMacro_Callback kwordmacroexpander_expandplainmacro_callback = nullptr;
    KWordMacroExpander_ExpandEscapedMacro_Callback kwordmacroexpander_expandescapedmacro_callback = nullptr;
    KWordMacroExpander_ExpandMacro_Callback kwordmacroexpander_expandmacro_callback = nullptr;

    // Instance base flags
    mutable bool kwordmacroexpander_expandplainmacro_isbase = false;
    mutable bool kwordmacroexpander_expandescapedmacro_isbase = false;
    mutable bool kwordmacroexpander_expandmacro_isbase = false;

  public:
    VirtualKWordMacroExpander() : KWordMacroExpander() {};
    VirtualKWordMacroExpander(QChar c) : KWordMacroExpander(c) {};

    ~VirtualKWordMacroExpander() {
        kwordmacroexpander_expandplainmacro_callback = nullptr;
        kwordmacroexpander_expandescapedmacro_callback = nullptr;
        kwordmacroexpander_expandmacro_callback = nullptr;
    }

    // Callback setters
    inline void setKWordMacroExpander_ExpandPlainMacro_Callback(KWordMacroExpander_ExpandPlainMacro_Callback cb) { kwordmacroexpander_expandplainmacro_callback = cb; }
    inline void setKWordMacroExpander_ExpandEscapedMacro_Callback(KWordMacroExpander_ExpandEscapedMacro_Callback cb) { kwordmacroexpander_expandescapedmacro_callback = cb; }
    inline void setKWordMacroExpander_ExpandMacro_Callback(KWordMacroExpander_ExpandMacro_Callback cb) { kwordmacroexpander_expandmacro_callback = cb; }

    // Base flag setters
    inline void setKWordMacroExpander_ExpandPlainMacro_IsBase(bool value) const { kwordmacroexpander_expandplainmacro_isbase = value; }
    inline void setKWordMacroExpander_ExpandEscapedMacro_IsBase(bool value) const { kwordmacroexpander_expandescapedmacro_isbase = value; }
    inline void setKWordMacroExpander_ExpandMacro_IsBase(bool value) const { kwordmacroexpander_expandmacro_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int expandPlainMacro(const QString& str, int pos, QList<QString>& retVal) override {
        if (kwordmacroexpander_expandplainmacro_isbase) {
            kwordmacroexpander_expandplainmacro_isbase = false;
            return KWordMacroExpander::expandPlainMacro(str, pos, retVal);
        } else if (kwordmacroexpander_expandplainmacro_callback != nullptr) {
            const QString str_ret = str;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray str_b = str_ret.toUtf8();
            libqt_string str_str;
            str_str.len = str_b.length();
            str_str.data = static_cast<const char*>(malloc(str_str.len + 1));
            memcpy((void*)str_str.data, str_b.data(), str_str.len);
            ((char*)str_str.data)[str_str.len] = '\0';
            libqt_string cbval1 = str_str;
            int cbval2 = pos;
            QList<QString>& retVal_ret = retVal;
            // Convert QList<> from C++ memory to manually-managed C memory
            libqt_string* retVal_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (retVal_ret.size() + 1)));
            for (qsizetype i = 0; i < retVal_ret.size(); ++i) {
                QString retVal_lv_ret = retVal_ret[i];
                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
                QByteArray retVal_lv_b = retVal_lv_ret.toUtf8();
                libqt_string retVal_lv_str;
                retVal_lv_str.len = retVal_lv_b.length();
                retVal_lv_str.data = static_cast<const char*>(malloc(retVal_lv_str.len + 1));
                memcpy((void*)retVal_lv_str.data, retVal_lv_b.data(), retVal_lv_str.len);
                ((char*)retVal_lv_str.data)[retVal_lv_str.len] = '\0';
                retVal_arr[i] = retVal_lv_str;
            }
            libqt_list retVal_out;
            retVal_out.len = retVal_ret.size();
            retVal_out.data = static_cast<void*>(retVal_arr);
            libqt_list /* of libqt_string */ cbval3 = retVal_out;

            int callback_ret = kwordmacroexpander_expandplainmacro_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KWordMacroExpander::expandPlainMacro(str, pos, retVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int expandEscapedMacro(const QString& str, int pos, QList<QString>& retVal) override {
        if (kwordmacroexpander_expandescapedmacro_isbase) {
            kwordmacroexpander_expandescapedmacro_isbase = false;
            return KWordMacroExpander::expandEscapedMacro(str, pos, retVal);
        } else if (kwordmacroexpander_expandescapedmacro_callback != nullptr) {
            const QString str_ret = str;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray str_b = str_ret.toUtf8();
            libqt_string str_str;
            str_str.len = str_b.length();
            str_str.data = static_cast<const char*>(malloc(str_str.len + 1));
            memcpy((void*)str_str.data, str_b.data(), str_str.len);
            ((char*)str_str.data)[str_str.len] = '\0';
            libqt_string cbval1 = str_str;
            int cbval2 = pos;
            QList<QString>& retVal_ret = retVal;
            // Convert QList<> from C++ memory to manually-managed C memory
            libqt_string* retVal_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (retVal_ret.size() + 1)));
            for (qsizetype i = 0; i < retVal_ret.size(); ++i) {
                QString retVal_lv_ret = retVal_ret[i];
                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
                QByteArray retVal_lv_b = retVal_lv_ret.toUtf8();
                libqt_string retVal_lv_str;
                retVal_lv_str.len = retVal_lv_b.length();
                retVal_lv_str.data = static_cast<const char*>(malloc(retVal_lv_str.len + 1));
                memcpy((void*)retVal_lv_str.data, retVal_lv_b.data(), retVal_lv_str.len);
                ((char*)retVal_lv_str.data)[retVal_lv_str.len] = '\0';
                retVal_arr[i] = retVal_lv_str;
            }
            libqt_list retVal_out;
            retVal_out.len = retVal_ret.size();
            retVal_out.data = static_cast<void*>(retVal_arr);
            libqt_list /* of libqt_string */ cbval3 = retVal_out;

            int callback_ret = kwordmacroexpander_expandescapedmacro_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KWordMacroExpander::expandEscapedMacro(str, pos, retVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool expandMacro(const QString& str, QList<QString>& retVal) override {
        if (kwordmacroexpander_expandmacro_callback != nullptr) {
            const QString str_ret = str;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray str_b = str_ret.toUtf8();
            libqt_string str_str;
            str_str.len = str_b.length();
            str_str.data = static_cast<const char*>(malloc(str_str.len + 1));
            memcpy((void*)str_str.data, str_b.data(), str_str.len);
            ((char*)str_str.data)[str_str.len] = '\0';
            libqt_string cbval1 = str_str;
            QList<QString>& retVal_ret = retVal;
            // Convert QList<> from C++ memory to manually-managed C memory
            libqt_string* retVal_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (retVal_ret.size() + 1)));
            for (qsizetype i = 0; i < retVal_ret.size(); ++i) {
                QString retVal_lv_ret = retVal_ret[i];
                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
                QByteArray retVal_lv_b = retVal_lv_ret.toUtf8();
                libqt_string retVal_lv_str;
                retVal_lv_str.len = retVal_lv_b.length();
                retVal_lv_str.data = static_cast<const char*>(malloc(retVal_lv_str.len + 1));
                memcpy((void*)retVal_lv_str.data, retVal_lv_b.data(), retVal_lv_str.len);
                ((char*)retVal_lv_str.data)[retVal_lv_str.len] = '\0';
                retVal_arr[i] = retVal_lv_str;
            }
            libqt_list retVal_out;
            retVal_out.len = retVal_ret.size();
            retVal_out.data = static_cast<void*>(retVal_arr);
            libqt_list /* of libqt_string */ cbval2 = retVal_out;

            bool callback_ret = kwordmacroexpander_expandmacro_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Friend functions
    friend int KWordMacroExpander_ExpandPlainMacro(KWordMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal);
    friend int KWordMacroExpander_QBaseExpandPlainMacro(KWordMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal);
    friend int KWordMacroExpander_ExpandEscapedMacro(KWordMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal);
    friend int KWordMacroExpander_QBaseExpandEscapedMacro(KWordMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal);
    friend bool KWordMacroExpander_ExpandMacro(KWordMacroExpander* self, const libqt_string str, libqt_list /* of libqt_string */ retVal);
    friend bool KWordMacroExpander_QBaseExpandMacro(KWordMacroExpander* self, const libqt_string str, libqt_list /* of libqt_string */ retVal);
};

// This class is a subclass of KCharMacroExpander so that we can call protected methods
class VirtualKCharMacroExpander final : public KCharMacroExpander {

  public:
    // Virtual class boolean flag
    bool isVirtualKCharMacroExpander = true;

    // Virtual class public types (including callbacks)
    using KCharMacroExpander_ExpandPlainMacro_Callback = int (*)(KCharMacroExpander*, libqt_string, int, libqt_list /* of libqt_string */);
    using KCharMacroExpander_ExpandEscapedMacro_Callback = int (*)(KCharMacroExpander*, libqt_string, int, libqt_list /* of libqt_string */);
    using KCharMacroExpander_ExpandMacro_Callback = bool (*)(KCharMacroExpander*, QChar*, libqt_list /* of libqt_string */);

  protected:
    // Instance callback storage
    KCharMacroExpander_ExpandPlainMacro_Callback kcharmacroexpander_expandplainmacro_callback = nullptr;
    KCharMacroExpander_ExpandEscapedMacro_Callback kcharmacroexpander_expandescapedmacro_callback = nullptr;
    KCharMacroExpander_ExpandMacro_Callback kcharmacroexpander_expandmacro_callback = nullptr;

    // Instance base flags
    mutable bool kcharmacroexpander_expandplainmacro_isbase = false;
    mutable bool kcharmacroexpander_expandescapedmacro_isbase = false;
    mutable bool kcharmacroexpander_expandmacro_isbase = false;

  public:
    VirtualKCharMacroExpander() : KCharMacroExpander() {};
    VirtualKCharMacroExpander(QChar c) : KCharMacroExpander(c) {};

    ~VirtualKCharMacroExpander() {
        kcharmacroexpander_expandplainmacro_callback = nullptr;
        kcharmacroexpander_expandescapedmacro_callback = nullptr;
        kcharmacroexpander_expandmacro_callback = nullptr;
    }

    // Callback setters
    inline void setKCharMacroExpander_ExpandPlainMacro_Callback(KCharMacroExpander_ExpandPlainMacro_Callback cb) { kcharmacroexpander_expandplainmacro_callback = cb; }
    inline void setKCharMacroExpander_ExpandEscapedMacro_Callback(KCharMacroExpander_ExpandEscapedMacro_Callback cb) { kcharmacroexpander_expandescapedmacro_callback = cb; }
    inline void setKCharMacroExpander_ExpandMacro_Callback(KCharMacroExpander_ExpandMacro_Callback cb) { kcharmacroexpander_expandmacro_callback = cb; }

    // Base flag setters
    inline void setKCharMacroExpander_ExpandPlainMacro_IsBase(bool value) const { kcharmacroexpander_expandplainmacro_isbase = value; }
    inline void setKCharMacroExpander_ExpandEscapedMacro_IsBase(bool value) const { kcharmacroexpander_expandescapedmacro_isbase = value; }
    inline void setKCharMacroExpander_ExpandMacro_IsBase(bool value) const { kcharmacroexpander_expandmacro_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int expandPlainMacro(const QString& str, int pos, QList<QString>& retVal) override {
        if (kcharmacroexpander_expandplainmacro_isbase) {
            kcharmacroexpander_expandplainmacro_isbase = false;
            return KCharMacroExpander::expandPlainMacro(str, pos, retVal);
        } else if (kcharmacroexpander_expandplainmacro_callback != nullptr) {
            const QString str_ret = str;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray str_b = str_ret.toUtf8();
            libqt_string str_str;
            str_str.len = str_b.length();
            str_str.data = static_cast<const char*>(malloc(str_str.len + 1));
            memcpy((void*)str_str.data, str_b.data(), str_str.len);
            ((char*)str_str.data)[str_str.len] = '\0';
            libqt_string cbval1 = str_str;
            int cbval2 = pos;
            QList<QString>& retVal_ret = retVal;
            // Convert QList<> from C++ memory to manually-managed C memory
            libqt_string* retVal_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (retVal_ret.size() + 1)));
            for (qsizetype i = 0; i < retVal_ret.size(); ++i) {
                QString retVal_lv_ret = retVal_ret[i];
                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
                QByteArray retVal_lv_b = retVal_lv_ret.toUtf8();
                libqt_string retVal_lv_str;
                retVal_lv_str.len = retVal_lv_b.length();
                retVal_lv_str.data = static_cast<const char*>(malloc(retVal_lv_str.len + 1));
                memcpy((void*)retVal_lv_str.data, retVal_lv_b.data(), retVal_lv_str.len);
                ((char*)retVal_lv_str.data)[retVal_lv_str.len] = '\0';
                retVal_arr[i] = retVal_lv_str;
            }
            libqt_list retVal_out;
            retVal_out.len = retVal_ret.size();
            retVal_out.data = static_cast<void*>(retVal_arr);
            libqt_list /* of libqt_string */ cbval3 = retVal_out;

            int callback_ret = kcharmacroexpander_expandplainmacro_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KCharMacroExpander::expandPlainMacro(str, pos, retVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int expandEscapedMacro(const QString& str, int pos, QList<QString>& retVal) override {
        if (kcharmacroexpander_expandescapedmacro_isbase) {
            kcharmacroexpander_expandescapedmacro_isbase = false;
            return KCharMacroExpander::expandEscapedMacro(str, pos, retVal);
        } else if (kcharmacroexpander_expandescapedmacro_callback != nullptr) {
            const QString str_ret = str;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray str_b = str_ret.toUtf8();
            libqt_string str_str;
            str_str.len = str_b.length();
            str_str.data = static_cast<const char*>(malloc(str_str.len + 1));
            memcpy((void*)str_str.data, str_b.data(), str_str.len);
            ((char*)str_str.data)[str_str.len] = '\0';
            libqt_string cbval1 = str_str;
            int cbval2 = pos;
            QList<QString>& retVal_ret = retVal;
            // Convert QList<> from C++ memory to manually-managed C memory
            libqt_string* retVal_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (retVal_ret.size() + 1)));
            for (qsizetype i = 0; i < retVal_ret.size(); ++i) {
                QString retVal_lv_ret = retVal_ret[i];
                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
                QByteArray retVal_lv_b = retVal_lv_ret.toUtf8();
                libqt_string retVal_lv_str;
                retVal_lv_str.len = retVal_lv_b.length();
                retVal_lv_str.data = static_cast<const char*>(malloc(retVal_lv_str.len + 1));
                memcpy((void*)retVal_lv_str.data, retVal_lv_b.data(), retVal_lv_str.len);
                ((char*)retVal_lv_str.data)[retVal_lv_str.len] = '\0';
                retVal_arr[i] = retVal_lv_str;
            }
            libqt_list retVal_out;
            retVal_out.len = retVal_ret.size();
            retVal_out.data = static_cast<void*>(retVal_arr);
            libqt_list /* of libqt_string */ cbval3 = retVal_out;

            int callback_ret = kcharmacroexpander_expandescapedmacro_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KCharMacroExpander::expandEscapedMacro(str, pos, retVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool expandMacro(QChar chr, QList<QString>& retVal) override {
        if (kcharmacroexpander_expandmacro_callback != nullptr) {
            QChar* cbval1 = new QChar(chr);
            QList<QString>& retVal_ret = retVal;
            // Convert QList<> from C++ memory to manually-managed C memory
            libqt_string* retVal_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (retVal_ret.size() + 1)));
            for (qsizetype i = 0; i < retVal_ret.size(); ++i) {
                QString retVal_lv_ret = retVal_ret[i];
                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
                QByteArray retVal_lv_b = retVal_lv_ret.toUtf8();
                libqt_string retVal_lv_str;
                retVal_lv_str.len = retVal_lv_b.length();
                retVal_lv_str.data = static_cast<const char*>(malloc(retVal_lv_str.len + 1));
                memcpy((void*)retVal_lv_str.data, retVal_lv_b.data(), retVal_lv_str.len);
                ((char*)retVal_lv_str.data)[retVal_lv_str.len] = '\0';
                retVal_arr[i] = retVal_lv_str;
            }
            libqt_list retVal_out;
            retVal_out.len = retVal_ret.size();
            retVal_out.data = static_cast<void*>(retVal_arr);
            libqt_list /* of libqt_string */ cbval2 = retVal_out;

            bool callback_ret = kcharmacroexpander_expandmacro_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Friend functions
    friend int KCharMacroExpander_ExpandPlainMacro(KCharMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal);
    friend int KCharMacroExpander_QBaseExpandPlainMacro(KCharMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal);
    friend int KCharMacroExpander_ExpandEscapedMacro(KCharMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal);
    friend int KCharMacroExpander_QBaseExpandEscapedMacro(KCharMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal);
    friend bool KCharMacroExpander_ExpandMacro(KCharMacroExpander* self, QChar* chr, libqt_list /* of libqt_string */ retVal);
    friend bool KCharMacroExpander_QBaseExpandMacro(KCharMacroExpander* self, QChar* chr, libqt_list /* of libqt_string */ retVal);
};

#endif
