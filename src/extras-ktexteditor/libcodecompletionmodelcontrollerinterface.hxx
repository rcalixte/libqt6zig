#pragma once
#ifndef EXTRAS_KTEXTEDITOR_LIBCODECOMPLETIONMODELCONTROLLERINTERFACE_HXX
#define EXTRAS_KTEXTEDITOR_LIBCODECOMPLETIONMODELCONTROLLERINTERFACE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTextEditor::CodeCompletionModelControllerInterface
class VirtualKTextEditorCodeCompletionModelControllerInterface final : public KTextEditor::CodeCompletionModelControllerInterface {
  public:
    // Virtual class public types (including callbacks and access types)
    using KTextEditor__CodeCompletionModelControllerInterface_ShouldStartCompletion_Callback = bool (*)(KTextEditor__CodeCompletionModelControllerInterface*, KTextEditor__View*, const char*, bool, KTextEditor__Cursor*);
    using KTextEditor__CodeCompletionModelControllerInterface_CompletionRange_Callback = KTextEditor__Range* (*)(KTextEditor__CodeCompletionModelControllerInterface*, KTextEditor__View*, KTextEditor__Cursor*);
    using KTextEditor__CodeCompletionModelControllerInterface_UpdateCompletionRange_Callback = KTextEditor__Range* (*)(KTextEditor__CodeCompletionModelControllerInterface*, KTextEditor__View*, KTextEditor__Range*);
    using KTextEditor__CodeCompletionModelControllerInterface_FilterString_Callback = const char* (*)(KTextEditor__CodeCompletionModelControllerInterface*, KTextEditor__View*, KTextEditor__Range*, KTextEditor__Cursor*);
    using KTextEditor__CodeCompletionModelControllerInterface_ShouldAbortCompletion_Callback = bool (*)(KTextEditor__CodeCompletionModelControllerInterface*, KTextEditor__View*, KTextEditor__Range*, const char*);
    using KTextEditor__CodeCompletionModelControllerInterface_ShouldExecute_Callback = bool (*)(KTextEditor__CodeCompletionModelControllerInterface*, QModelIndex*, QChar*);
    using KTextEditor__CodeCompletionModelControllerInterface_Aborted_Callback = void (*)(KTextEditor__CodeCompletionModelControllerInterface*, KTextEditor__View*);
    using KTextEditor__CodeCompletionModelControllerInterface_MatchingItem_Callback = int (*)(KTextEditor__CodeCompletionModelControllerInterface*, QModelIndex*);
    using KTextEditor__CodeCompletionModelControllerInterface_ShouldHideItemsWithEqualNames_Callback = bool (*)(const KTextEditor__CodeCompletionModelControllerInterface*);

    // Instance callback storage
    KTextEditor__CodeCompletionModelControllerInterface_ShouldStartCompletion_Callback ktexteditor__codecompletionmodelcontrollerinterface_shouldstartcompletion_callback = nullptr;
    KTextEditor__CodeCompletionModelControllerInterface_CompletionRange_Callback ktexteditor__codecompletionmodelcontrollerinterface_completionrange_callback = nullptr;
    KTextEditor__CodeCompletionModelControllerInterface_UpdateCompletionRange_Callback ktexteditor__codecompletionmodelcontrollerinterface_updatecompletionrange_callback = nullptr;
    KTextEditor__CodeCompletionModelControllerInterface_FilterString_Callback ktexteditor__codecompletionmodelcontrollerinterface_filterstring_callback = nullptr;
    KTextEditor__CodeCompletionModelControllerInterface_ShouldAbortCompletion_Callback ktexteditor__codecompletionmodelcontrollerinterface_shouldabortcompletion_callback = nullptr;
    KTextEditor__CodeCompletionModelControllerInterface_ShouldExecute_Callback ktexteditor__codecompletionmodelcontrollerinterface_shouldexecute_callback = nullptr;
    KTextEditor__CodeCompletionModelControllerInterface_Aborted_Callback ktexteditor__codecompletionmodelcontrollerinterface_aborted_callback = nullptr;
    KTextEditor__CodeCompletionModelControllerInterface_MatchingItem_Callback ktexteditor__codecompletionmodelcontrollerinterface_matchingitem_callback = nullptr;
    KTextEditor__CodeCompletionModelControllerInterface_ShouldHideItemsWithEqualNames_Callback ktexteditor__codecompletionmodelcontrollerinterface_shouldhideitemswithequalnames_callback = nullptr;

    VirtualKTextEditorCodeCompletionModelControllerInterface() : KTextEditor::CodeCompletionModelControllerInterface() {};

    // Virtual method for C ABI access and custom callback
    virtual bool shouldStartCompletion(KTextEditor::View* view, const QString& insertedText, bool userInsertion, const KTextEditor::Cursor& position) override {
        if (ktexteditor__codecompletionmodelcontrollerinterface_shouldstartcompletion_callback) {
            KTextEditor__View* cbval1 = view;
            const auto insertedText_ret = insertedText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray insertedText_b = insertedText_ret.toUtf8();
            auto insertedText_str_len = insertedText_b.length();
            const char* insertedText_str = static_cast<const char*>(malloc(insertedText_str_len + 1));
            memcpy((void*)insertedText_str, insertedText_b.data(), insertedText_str_len);
            ((char*)insertedText_str)[insertedText_str_len] = '\0';
            const char* cbval2 = insertedText_str;
            bool cbval3 = userInsertion;
            const KTextEditor::Cursor& position_ret = position;
            // Cast returned reference into pointer
            KTextEditor__Cursor* cbval4 = const_cast<KTextEditor::Cursor*>(&position_ret);
            bool callback_ret = ktexteditor__codecompletionmodelcontrollerinterface_shouldstartcompletion_callback(this, cbval1, cbval2, cbval3, cbval4);
            libqt_free(insertedText_str);
            return callback_ret;
        }
        return KTextEditor__CodeCompletionModelControllerInterface::shouldStartCompletion(view, insertedText, userInsertion, position);
    }

    // Virtual method for C ABI access and custom callback
    virtual KTextEditor::Range completionRange(KTextEditor::View* view, const KTextEditor::Cursor& position) override {
        if (ktexteditor__codecompletionmodelcontrollerinterface_completionrange_callback) {
            KTextEditor__View* cbval1 = view;
            const KTextEditor::Cursor& position_ret = position;
            // Cast returned reference into pointer
            KTextEditor__Cursor* cbval2 = const_cast<KTextEditor::Cursor*>(&position_ret);
            KTextEditor__Range* callback_ret = ktexteditor__codecompletionmodelcontrollerinterface_completionrange_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KTextEditor__CodeCompletionModelControllerInterface::completionRange(view, position);
    }

    // Virtual method for C ABI access and custom callback
    virtual KTextEditor::Range updateCompletionRange(KTextEditor::View* view, const KTextEditor::Range& range) override {
        if (ktexteditor__codecompletionmodelcontrollerinterface_updatecompletionrange_callback) {
            KTextEditor__View* cbval1 = view;
            const KTextEditor::Range& range_ret = range;
            // Cast returned reference into pointer
            KTextEditor__Range* cbval2 = const_cast<KTextEditor::Range*>(&range_ret);
            KTextEditor__Range* callback_ret = ktexteditor__codecompletionmodelcontrollerinterface_updatecompletionrange_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KTextEditor__CodeCompletionModelControllerInterface::updateCompletionRange(view, range);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString filterString(KTextEditor::View* view, const KTextEditor::Range& range, const KTextEditor::Cursor& position) override {
        if (ktexteditor__codecompletionmodelcontrollerinterface_filterstring_callback) {
            KTextEditor__View* cbval1 = view;
            const KTextEditor::Range& range_ret = range;
            // Cast returned reference into pointer
            KTextEditor__Range* cbval2 = const_cast<KTextEditor::Range*>(&range_ret);
            const KTextEditor::Cursor& position_ret = position;
            // Cast returned reference into pointer
            KTextEditor__Cursor* cbval3 = const_cast<KTextEditor::Cursor*>(&position_ret);
            const char* callback_ret = ktexteditor__codecompletionmodelcontrollerinterface_filterstring_callback(this, cbval1, cbval2, cbval3);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KTextEditor__CodeCompletionModelControllerInterface::filterString(view, range, position);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool shouldAbortCompletion(KTextEditor::View* view, const KTextEditor::Range& range, const QString& currentCompletion) override {
        if (ktexteditor__codecompletionmodelcontrollerinterface_shouldabortcompletion_callback) {
            KTextEditor__View* cbval1 = view;
            const KTextEditor::Range& range_ret = range;
            // Cast returned reference into pointer
            KTextEditor__Range* cbval2 = const_cast<KTextEditor::Range*>(&range_ret);
            const auto currentCompletion_ret = currentCompletion;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray currentCompletion_b = currentCompletion_ret.toUtf8();
            auto currentCompletion_str_len = currentCompletion_b.length();
            const char* currentCompletion_str = static_cast<const char*>(malloc(currentCompletion_str_len + 1));
            memcpy((void*)currentCompletion_str, currentCompletion_b.data(), currentCompletion_str_len);
            ((char*)currentCompletion_str)[currentCompletion_str_len] = '\0';
            const char* cbval3 = currentCompletion_str;
            bool callback_ret = ktexteditor__codecompletionmodelcontrollerinterface_shouldabortcompletion_callback(this, cbval1, cbval2, cbval3);
            libqt_free(currentCompletion_str);
            return callback_ret;
        }
        return KTextEditor__CodeCompletionModelControllerInterface::shouldAbortCompletion(view, range, currentCompletion);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool shouldExecute(const QModelIndex& selected, QChar inserted) override {
        if (ktexteditor__codecompletionmodelcontrollerinterface_shouldexecute_callback) {
            const QModelIndex& selected_ret = selected;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&selected_ret);
            QChar* cbval2 = new QChar(inserted);
            bool callback_ret = ktexteditor__codecompletionmodelcontrollerinterface_shouldexecute_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KTextEditor__CodeCompletionModelControllerInterface::shouldExecute(selected, inserted);
    }

    // Virtual method for C ABI access and custom callback
    virtual void aborted(KTextEditor::View* view) override {
        if (ktexteditor__codecompletionmodelcontrollerinterface_aborted_callback) {
            KTextEditor__View* cbval1 = view;
            ktexteditor__codecompletionmodelcontrollerinterface_aborted_callback(this, cbval1);
            return;
        }
        KTextEditor__CodeCompletionModelControllerInterface::aborted(view);
    }

    // Virtual method for C ABI access and custom callback
    virtual KTextEditor::CodeCompletionModelControllerInterface::MatchReaction matchingItem(const QModelIndex& matched) override {
        if (ktexteditor__codecompletionmodelcontrollerinterface_matchingitem_callback) {
            const QModelIndex& matched_ret = matched;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&matched_ret);
            int callback_ret = ktexteditor__codecompletionmodelcontrollerinterface_matchingitem_callback(this, cbval1);
            return static_cast<KTextEditor::CodeCompletionModelControllerInterface::MatchReaction>(callback_ret);
        }
        return KTextEditor__CodeCompletionModelControllerInterface::matchingItem(matched);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool shouldHideItemsWithEqualNames() const override {
        if (ktexteditor__codecompletionmodelcontrollerinterface_shouldhideitemswithequalnames_callback) {
            bool callback_ret = ktexteditor__codecompletionmodelcontrollerinterface_shouldhideitemswithequalnames_callback(this);
            return callback_ret;
        }
        return KTextEditor__CodeCompletionModelControllerInterface::shouldHideItemsWithEqualNames();
    }
};

#endif
