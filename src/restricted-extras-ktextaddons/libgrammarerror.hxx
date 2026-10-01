#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBGRAMMARERROR_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBGRAMMARERROR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextGrammarCheck::GrammarError
class VirtualTextGrammarCheckGrammarError final : public TextGrammarCheck::GrammarError {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextGrammarCheck__GrammarError_Parse_Callback = void (*)(TextGrammarCheck__GrammarError*, QJsonObject*, int);

    // Instance callback storage
    TextGrammarCheck__GrammarError_Parse_Callback textgrammarcheck__grammarerror_parse_callback = nullptr;

    VirtualTextGrammarCheckGrammarError() : TextGrammarCheck::GrammarError() {};
    VirtualTextGrammarCheckGrammarError(const TextGrammarCheck::GrammarError& param1) : TextGrammarCheck::GrammarError(param1) {};

    // Virtual method for C ABI access and custom callback
    virtual void parse(const QJsonObject& obj, int blockindex) override {
        if (textgrammarcheck__grammarerror_parse_callback) {
            const QJsonObject& obj_ret = obj;
            // Cast returned reference into pointer
            QJsonObject* cbval1 = const_cast<QJsonObject*>(&obj_ret);
            int cbval2 = blockindex;
            textgrammarcheck__grammarerror_parse_callback(this, cbval1, cbval2);
            return;
        }
        TextGrammarCheck__GrammarError::parse(obj, blockindex);
    }
};

#endif
