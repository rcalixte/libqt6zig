#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALGRAMMARERROR_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALGRAMMARERROR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextGrammarCheck::GrammarError so that we can call protected methods
class VirtualTextGrammarCheckGrammarError final : public TextGrammarCheck::GrammarError {

  public:
    // Virtual class boolean flag
    bool isVirtualTextGrammarCheckGrammarError = true;

    // Virtual class public types (including callbacks)
    using TextGrammarCheck__GrammarError_Parse_Callback = void (*)(TextGrammarCheck__GrammarError*, QJsonObject*, int);
    using TextGrammarCheck__GrammarError_OperatorAssign_Callback = void (*)(TextGrammarCheck__GrammarError*, TextGrammarCheck__GrammarError*);

  protected:
    // Instance callback storage
    TextGrammarCheck__GrammarError_Parse_Callback textgrammarcheck__grammarerror_parse_callback = nullptr;
    TextGrammarCheck__GrammarError_OperatorAssign_Callback textgrammarcheck__grammarerror_operatorassign_callback = nullptr;

    // Instance base flags
    mutable bool textgrammarcheck__grammarerror_parse_isbase = false;
    mutable bool textgrammarcheck__grammarerror_operatorassign_isbase = false;

  public:
    VirtualTextGrammarCheckGrammarError() : TextGrammarCheck::GrammarError() {};
    VirtualTextGrammarCheckGrammarError(const TextGrammarCheck::GrammarError& param1) : TextGrammarCheck::GrammarError(param1) {};

    // Callback setters
    inline void setTextGrammarCheck__GrammarError_Parse_Callback(TextGrammarCheck__GrammarError_Parse_Callback cb) { textgrammarcheck__grammarerror_parse_callback = cb; }
    inline void setTextGrammarCheck__GrammarError_OperatorAssign_Callback(TextGrammarCheck__GrammarError_OperatorAssign_Callback cb) { textgrammarcheck__grammarerror_operatorassign_callback = cb; }

    // Base flag setters
    inline void setTextGrammarCheck__GrammarError_Parse_IsBase(bool value) const { textgrammarcheck__grammarerror_parse_isbase = value; }
    inline void setTextGrammarCheck__GrammarError_OperatorAssign_IsBase(bool value) const { textgrammarcheck__grammarerror_operatorassign_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void parse(const QJsonObject& obj, int blockindex) override {
        if (textgrammarcheck__grammarerror_parse_isbase) {
            textgrammarcheck__grammarerror_parse_isbase = false;
            TextGrammarCheck__GrammarError::parse(obj, blockindex);
            return;
        }
        auto parse_cb = textgrammarcheck__grammarerror_parse_callback;
        if (parse_cb) {
            const QJsonObject& obj_ret = obj;
            // Cast returned reference into pointer
            QJsonObject* cbval1 = const_cast<QJsonObject*>(&obj_ret);
            int cbval2 = blockindex;

            parse_cb(this, cbval1, cbval2);
            return;
        }
        TextGrammarCheck__GrammarError::parse(obj, blockindex);
    }

    // Virtual method for C ABI access and custom callback
    void operator=(const TextGrammarCheck::GrammarError& param1) {
        if (textgrammarcheck__grammarerror_operatorassign_isbase) {
            textgrammarcheck__grammarerror_operatorassign_isbase = false;
            TextGrammarCheck__GrammarError::operator=(param1);
            return;
        }
        auto operatorassign_cb = textgrammarcheck__grammarerror_operatorassign_callback;
        if (operatorassign_cb) {
            const TextGrammarCheck::GrammarError& param1_ret = param1;
            // Cast returned reference into pointer
            TextGrammarCheck__GrammarError* cbval1 = const_cast<TextGrammarCheck::GrammarError*>(&param1_ret);

            operatorassign_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarError::operator=(param1);
    }

    // Friend functions
    friend void TextGrammarCheck__GrammarError_OperatorAssign(TextGrammarCheck::GrammarError* self, const TextGrammarCheck__GrammarError* param1);
    friend void TextGrammarCheck__GrammarError_SuperOperatorAssign(TextGrammarCheck::GrammarError* self, const TextGrammarCheck__GrammarError* param1);
};

#endif
