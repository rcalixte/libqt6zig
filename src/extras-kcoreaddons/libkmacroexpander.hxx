#pragma once
#ifndef EXTRAS_KCOREADDONS_LIBKMACROEXPANDER_HXX
#define EXTRAS_KCOREADDONS_LIBKMACROEXPANDER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KMacroExpanderBase
class VirtualKMacroExpanderBase final : public KMacroExpanderBase {
  public:
    // Virtual class public types (including callbacks and access types)
    using KMacroExpanderBase_ExpandPlainMacro_Callback = int (*)(KMacroExpanderBase*, const char*, int, const char**);
    using KMacroExpanderBase_ExpandEscapedMacro_Callback = int (*)(KMacroExpanderBase*, const char*, int, const char**);

    // Instance callback storage
    KMacroExpanderBase_ExpandPlainMacro_Callback kmacroexpanderbase_expandplainmacro_callback = nullptr;
    KMacroExpanderBase_ExpandEscapedMacro_Callback kmacroexpanderbase_expandescapedmacro_callback = nullptr;

    // Access struct
    struct Base : KMacroExpanderBase {
        using KMacroExpanderBase::expandEscapedMacro;
        using KMacroExpanderBase::expandPlainMacro;
    };

    VirtualKMacroExpanderBase() : KMacroExpanderBase() {};
    VirtualKMacroExpanderBase(QChar c) : KMacroExpanderBase(c) {};

    // Virtual method for C ABI access and custom callback
    virtual int expandPlainMacro(const QString& str, int pos, QList<QString>& ret) override {
        if (kmacroexpanderbase_expandplainmacro_callback) {
            const auto str_ret = str;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray str_b = str_ret.toUtf8();
            auto str_str_len = str_b.length();
            const char* str_str = static_cast<const char*>(malloc(str_str_len + 1));
            memcpy((void*)str_str, str_b.data(), str_str_len);
            ((char*)str_str)[str_str_len] = '\0';
            const char* cbval1 = str_str;
            int cbval2 = pos;
            QList<QString>& ret_ret = ret;
            // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
            const char** ret_arr = static_cast<const char**>(malloc(sizeof(const char*) * (ret_ret.size() + 1)));
            for (qsizetype i = 0; i < ret_ret.size(); ++i) {
                QByteArray ret_b = ret_ret[i].toUtf8();
                auto ret_str_len = ret_b.length();
                char* ret_str = static_cast<char*>(malloc(ret_str_len + 1));
                memcpy(ret_str, ret_b.data(), ret_str_len);
                ret_str[ret_str_len] = '\0';
                ret_arr[i] = ret_str;
            }
            // Append sentinel null terminator to the list
            ret_arr[ret_ret.size()] = nullptr;
            const char** cbval3 = ret_arr;
            int callback_ret = kmacroexpanderbase_expandplainmacro_callback(this, cbval1, cbval2, cbval3);
            libqt_free(str_str);
            libqt_free(ret_arr);
            return static_cast<int>(callback_ret);
        }
        return KMacroExpanderBase::expandPlainMacro(str, pos, ret);
    }

    // Virtual method for C ABI access and custom callback
    virtual int expandEscapedMacro(const QString& str, int pos, QList<QString>& ret) override {
        if (kmacroexpanderbase_expandescapedmacro_callback) {
            const auto str_ret = str;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray str_b = str_ret.toUtf8();
            auto str_str_len = str_b.length();
            const char* str_str = static_cast<const char*>(malloc(str_str_len + 1));
            memcpy((void*)str_str, str_b.data(), str_str_len);
            ((char*)str_str)[str_str_len] = '\0';
            const char* cbval1 = str_str;
            int cbval2 = pos;
            QList<QString>& ret_ret = ret;
            // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
            const char** ret_arr = static_cast<const char**>(malloc(sizeof(const char*) * (ret_ret.size() + 1)));
            for (qsizetype i = 0; i < ret_ret.size(); ++i) {
                QByteArray ret_b = ret_ret[i].toUtf8();
                auto ret_str_len = ret_b.length();
                char* ret_str = static_cast<char*>(malloc(ret_str_len + 1));
                memcpy(ret_str, ret_b.data(), ret_str_len);
                ret_str[ret_str_len] = '\0';
                ret_arr[i] = ret_str;
            }
            // Append sentinel null terminator to the list
            ret_arr[ret_ret.size()] = nullptr;
            const char** cbval3 = ret_arr;
            int callback_ret = kmacroexpanderbase_expandescapedmacro_callback(this, cbval1, cbval2, cbval3);
            libqt_free(str_str);
            libqt_free(ret_arr);
            return static_cast<int>(callback_ret);
        }
        return KMacroExpanderBase::expandEscapedMacro(str, pos, ret);
    }

    // Friend functions
    friend int KMacroExpanderBase_SuperExpandPlainMacro(KMacroExpanderBase* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ ret);
    friend int KMacroExpanderBase_SuperExpandEscapedMacro(KMacroExpanderBase* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ ret);
};

// This class is a subclass of KWordMacroExpander
class VirtualKWordMacroExpander : public KWordMacroExpander {
  public:
    // Virtual class public types (including callbacks and access types)
    using KWordMacroExpander_ExpandPlainMacro_Callback = int (*)(KWordMacroExpander*, const char*, int, const char**);
    using KWordMacroExpander_ExpandEscapedMacro_Callback = int (*)(KWordMacroExpander*, const char*, int, const char**);
    using KWordMacroExpander_ExpandMacro_Callback = bool (*)(KWordMacroExpander*, const char*, const char**);

    // Instance callback storage
    KWordMacroExpander_ExpandPlainMacro_Callback kwordmacroexpander_expandplainmacro_callback = nullptr;
    KWordMacroExpander_ExpandEscapedMacro_Callback kwordmacroexpander_expandescapedmacro_callback = nullptr;
    KWordMacroExpander_ExpandMacro_Callback kwordmacroexpander_expandmacro_callback = nullptr;

    // Access struct
    struct Base : KWordMacroExpander {
        using KWordMacroExpander::expandEscapedMacro;
        using KWordMacroExpander::expandMacro;
        using KWordMacroExpander::expandPlainMacro;
    };

    VirtualKWordMacroExpander() : KWordMacroExpander() {};
    VirtualKWordMacroExpander(QChar c) : KWordMacroExpander(c) {};

    // Virtual method for C ABI access and custom callback
    virtual int expandPlainMacro(const QString& str, int pos, QList<QString>& ret) override {
        if (kwordmacroexpander_expandplainmacro_callback) {
            const auto str_ret = str;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray str_b = str_ret.toUtf8();
            auto str_str_len = str_b.length();
            const char* str_str = static_cast<const char*>(malloc(str_str_len + 1));
            memcpy((void*)str_str, str_b.data(), str_str_len);
            ((char*)str_str)[str_str_len] = '\0';
            const char* cbval1 = str_str;
            int cbval2 = pos;
            QList<QString>& ret_ret = ret;
            // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
            const char** ret_arr = static_cast<const char**>(malloc(sizeof(const char*) * (ret_ret.size() + 1)));
            for (qsizetype i = 0; i < ret_ret.size(); ++i) {
                QByteArray ret_b = ret_ret[i].toUtf8();
                auto ret_str_len = ret_b.length();
                char* ret_str = static_cast<char*>(malloc(ret_str_len + 1));
                memcpy(ret_str, ret_b.data(), ret_str_len);
                ret_str[ret_str_len] = '\0';
                ret_arr[i] = ret_str;
            }
            // Append sentinel null terminator to the list
            ret_arr[ret_ret.size()] = nullptr;
            const char** cbval3 = ret_arr;
            int callback_ret = kwordmacroexpander_expandplainmacro_callback(this, cbval1, cbval2, cbval3);
            libqt_free(str_str);
            libqt_free(ret_arr);
            return static_cast<int>(callback_ret);
        }
        return KWordMacroExpander::expandPlainMacro(str, pos, ret);
    }

    // Virtual method for C ABI access and custom callback
    virtual int expandEscapedMacro(const QString& str, int pos, QList<QString>& ret) override {
        if (kwordmacroexpander_expandescapedmacro_callback) {
            const auto str_ret = str;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray str_b = str_ret.toUtf8();
            auto str_str_len = str_b.length();
            const char* str_str = static_cast<const char*>(malloc(str_str_len + 1));
            memcpy((void*)str_str, str_b.data(), str_str_len);
            ((char*)str_str)[str_str_len] = '\0';
            const char* cbval1 = str_str;
            int cbval2 = pos;
            QList<QString>& ret_ret = ret;
            // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
            const char** ret_arr = static_cast<const char**>(malloc(sizeof(const char*) * (ret_ret.size() + 1)));
            for (qsizetype i = 0; i < ret_ret.size(); ++i) {
                QByteArray ret_b = ret_ret[i].toUtf8();
                auto ret_str_len = ret_b.length();
                char* ret_str = static_cast<char*>(malloc(ret_str_len + 1));
                memcpy(ret_str, ret_b.data(), ret_str_len);
                ret_str[ret_str_len] = '\0';
                ret_arr[i] = ret_str;
            }
            // Append sentinel null terminator to the list
            ret_arr[ret_ret.size()] = nullptr;
            const char** cbval3 = ret_arr;
            int callback_ret = kwordmacroexpander_expandescapedmacro_callback(this, cbval1, cbval2, cbval3);
            libqt_free(str_str);
            libqt_free(ret_arr);
            return static_cast<int>(callback_ret);
        }
        return KWordMacroExpander::expandEscapedMacro(str, pos, ret);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool expandMacro(const QString& str, QList<QString>& ret) override {
        if (kwordmacroexpander_expandmacro_callback) {
            const auto str_ret = str;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray str_b = str_ret.toUtf8();
            auto str_str_len = str_b.length();
            const char* str_str = static_cast<const char*>(malloc(str_str_len + 1));
            memcpy((void*)str_str, str_b.data(), str_str_len);
            ((char*)str_str)[str_str_len] = '\0';
            const char* cbval1 = str_str;
            QList<QString>& ret_ret = ret;
            // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
            const char** ret_arr = static_cast<const char**>(malloc(sizeof(const char*) * (ret_ret.size() + 1)));
            for (qsizetype i = 0; i < ret_ret.size(); ++i) {
                QByteArray ret_b = ret_ret[i].toUtf8();
                auto ret_str_len = ret_b.length();
                char* ret_str = static_cast<char*>(malloc(ret_str_len + 1));
                memcpy(ret_str, ret_b.data(), ret_str_len);
                ret_str[ret_str_len] = '\0';
                ret_arr[i] = ret_str;
            }
            // Append sentinel null terminator to the list
            ret_arr[ret_ret.size()] = nullptr;
            const char** cbval2 = ret_arr;
            bool callback_ret = kwordmacroexpander_expandmacro_callback(this, cbval1, cbval2);
            libqt_free(str_str);
            libqt_free(ret_arr);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KWordMacroExpander::expandMacro called without being implemented");
    }

    // Friend functions
    friend int KWordMacroExpander_SuperExpandPlainMacro(KWordMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ ret);
    friend int KWordMacroExpander_SuperExpandEscapedMacro(KWordMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ ret);
};

// This class is a subclass of KCharMacroExpander
class VirtualKCharMacroExpander : public KCharMacroExpander {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCharMacroExpander_ExpandPlainMacro_Callback = int (*)(KCharMacroExpander*, const char*, int, const char**);
    using KCharMacroExpander_ExpandEscapedMacro_Callback = int (*)(KCharMacroExpander*, const char*, int, const char**);
    using KCharMacroExpander_ExpandMacro_Callback = bool (*)(KCharMacroExpander*, QChar*, const char**);

    // Instance callback storage
    KCharMacroExpander_ExpandPlainMacro_Callback kcharmacroexpander_expandplainmacro_callback = nullptr;
    KCharMacroExpander_ExpandEscapedMacro_Callback kcharmacroexpander_expandescapedmacro_callback = nullptr;
    KCharMacroExpander_ExpandMacro_Callback kcharmacroexpander_expandmacro_callback = nullptr;

    // Access struct
    struct Base : KCharMacroExpander {
        using KCharMacroExpander::expandEscapedMacro;
        using KCharMacroExpander::expandMacro;
        using KCharMacroExpander::expandPlainMacro;
    };

    VirtualKCharMacroExpander() : KCharMacroExpander() {};
    VirtualKCharMacroExpander(QChar c) : KCharMacroExpander(c) {};

    // Virtual method for C ABI access and custom callback
    virtual int expandPlainMacro(const QString& str, int pos, QList<QString>& ret) override {
        if (kcharmacroexpander_expandplainmacro_callback) {
            const auto str_ret = str;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray str_b = str_ret.toUtf8();
            auto str_str_len = str_b.length();
            const char* str_str = static_cast<const char*>(malloc(str_str_len + 1));
            memcpy((void*)str_str, str_b.data(), str_str_len);
            ((char*)str_str)[str_str_len] = '\0';
            const char* cbval1 = str_str;
            int cbval2 = pos;
            QList<QString>& ret_ret = ret;
            // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
            const char** ret_arr = static_cast<const char**>(malloc(sizeof(const char*) * (ret_ret.size() + 1)));
            for (qsizetype i = 0; i < ret_ret.size(); ++i) {
                QByteArray ret_b = ret_ret[i].toUtf8();
                auto ret_str_len = ret_b.length();
                char* ret_str = static_cast<char*>(malloc(ret_str_len + 1));
                memcpy(ret_str, ret_b.data(), ret_str_len);
                ret_str[ret_str_len] = '\0';
                ret_arr[i] = ret_str;
            }
            // Append sentinel null terminator to the list
            ret_arr[ret_ret.size()] = nullptr;
            const char** cbval3 = ret_arr;
            int callback_ret = kcharmacroexpander_expandplainmacro_callback(this, cbval1, cbval2, cbval3);
            libqt_free(str_str);
            libqt_free(ret_arr);
            return static_cast<int>(callback_ret);
        }
        return KCharMacroExpander::expandPlainMacro(str, pos, ret);
    }

    // Virtual method for C ABI access and custom callback
    virtual int expandEscapedMacro(const QString& str, int pos, QList<QString>& ret) override {
        if (kcharmacroexpander_expandescapedmacro_callback) {
            const auto str_ret = str;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray str_b = str_ret.toUtf8();
            auto str_str_len = str_b.length();
            const char* str_str = static_cast<const char*>(malloc(str_str_len + 1));
            memcpy((void*)str_str, str_b.data(), str_str_len);
            ((char*)str_str)[str_str_len] = '\0';
            const char* cbval1 = str_str;
            int cbval2 = pos;
            QList<QString>& ret_ret = ret;
            // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
            const char** ret_arr = static_cast<const char**>(malloc(sizeof(const char*) * (ret_ret.size() + 1)));
            for (qsizetype i = 0; i < ret_ret.size(); ++i) {
                QByteArray ret_b = ret_ret[i].toUtf8();
                auto ret_str_len = ret_b.length();
                char* ret_str = static_cast<char*>(malloc(ret_str_len + 1));
                memcpy(ret_str, ret_b.data(), ret_str_len);
                ret_str[ret_str_len] = '\0';
                ret_arr[i] = ret_str;
            }
            // Append sentinel null terminator to the list
            ret_arr[ret_ret.size()] = nullptr;
            const char** cbval3 = ret_arr;
            int callback_ret = kcharmacroexpander_expandescapedmacro_callback(this, cbval1, cbval2, cbval3);
            libqt_free(str_str);
            libqt_free(ret_arr);
            return static_cast<int>(callback_ret);
        }
        return KCharMacroExpander::expandEscapedMacro(str, pos, ret);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool expandMacro(QChar chr, QList<QString>& ret) override {
        if (kcharmacroexpander_expandmacro_callback) {
            QChar* cbval1 = new QChar(chr);
            QList<QString>& ret_ret = ret;
            // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
            const char** ret_arr = static_cast<const char**>(malloc(sizeof(const char*) * (ret_ret.size() + 1)));
            for (qsizetype i = 0; i < ret_ret.size(); ++i) {
                QByteArray ret_b = ret_ret[i].toUtf8();
                auto ret_str_len = ret_b.length();
                char* ret_str = static_cast<char*>(malloc(ret_str_len + 1));
                memcpy(ret_str, ret_b.data(), ret_str_len);
                ret_str[ret_str_len] = '\0';
                ret_arr[i] = ret_str;
            }
            // Append sentinel null terminator to the list
            ret_arr[ret_ret.size()] = nullptr;
            const char** cbval2 = ret_arr;
            bool callback_ret = kcharmacroexpander_expandmacro_callback(this, cbval1, cbval2);
            libqt_free(ret_arr);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KCharMacroExpander::expandMacro called without being implemented");
    }

    // Friend functions
    friend int KCharMacroExpander_SuperExpandPlainMacro(KCharMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ ret);
    friend int KCharMacroExpander_SuperExpandEscapedMacro(KCharMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ ret);
};

#endif
