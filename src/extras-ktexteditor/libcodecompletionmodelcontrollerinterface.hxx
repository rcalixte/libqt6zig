#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBVIRTUALCODECOMPLETIONMODELCONTROLLERINTERFACE_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBVIRTUALCODECOMPLETIONMODELCONTROLLERINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTextEditor::CodeCompletionModelControllerInterface so that we can call protected methods
class VirtualKTextEditorCodeCompletionModelControllerInterface final : public KTextEditor::CodeCompletionModelControllerInterface {

  public:
    // Virtual class boolean flag
    bool isVirtualKTextEditorCodeCompletionModelControllerInterface = true;

    // Virtual class public types (including callbacks)
    using KTextEditor__CodeCompletionModelControllerInterface_ShouldStartCompletion_Callback = bool (*)(KTextEditor__CodeCompletionModelControllerInterface*, KTextEditor__View*, libqt_string, bool, KTextEditor__Cursor*);
    using KTextEditor__CodeCompletionModelControllerInterface_CompletionRange_Callback = KTextEditor__Range* (*)(KTextEditor__CodeCompletionModelControllerInterface*, KTextEditor__View*, KTextEditor__Cursor*);
    using KTextEditor__CodeCompletionModelControllerInterface_UpdateCompletionRange_Callback = KTextEditor__Range* (*)(KTextEditor__CodeCompletionModelControllerInterface*, KTextEditor__View*, KTextEditor__Range*);
    using KTextEditor__CodeCompletionModelControllerInterface_FilterString_Callback = const char* (*)(KTextEditor__CodeCompletionModelControllerInterface*, KTextEditor__View*, KTextEditor__Range*, KTextEditor__Cursor*);
    using KTextEditor__CodeCompletionModelControllerInterface_ShouldAbortCompletion_Callback = bool (*)(KTextEditor__CodeCompletionModelControllerInterface*, KTextEditor__View*, KTextEditor__Range*, libqt_string);
    using KTextEditor__CodeCompletionModelControllerInterface_ShouldExecute_Callback = bool (*)(KTextEditor__CodeCompletionModelControllerInterface*, QModelIndex*, QChar*);
    using KTextEditor__CodeCompletionModelControllerInterface_Aborted_Callback = void (*)(KTextEditor__CodeCompletionModelControllerInterface*, KTextEditor__View*);
    using KTextEditor__CodeCompletionModelControllerInterface_MatchingItem_Callback = int (*)(KTextEditor__CodeCompletionModelControllerInterface*, QModelIndex*);
    using KTextEditor__CodeCompletionModelControllerInterface_ShouldHideItemsWithEqualNames_Callback = bool (*)();

  protected:
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

    // Instance base flags
    mutable bool ktexteditor__codecompletionmodelcontrollerinterface_shouldstartcompletion_isbase = false;
    mutable bool ktexteditor__codecompletionmodelcontrollerinterface_completionrange_isbase = false;
    mutable bool ktexteditor__codecompletionmodelcontrollerinterface_updatecompletionrange_isbase = false;
    mutable bool ktexteditor__codecompletionmodelcontrollerinterface_filterstring_isbase = false;
    mutable bool ktexteditor__codecompletionmodelcontrollerinterface_shouldabortcompletion_isbase = false;
    mutable bool ktexteditor__codecompletionmodelcontrollerinterface_shouldexecute_isbase = false;
    mutable bool ktexteditor__codecompletionmodelcontrollerinterface_aborted_isbase = false;
    mutable bool ktexteditor__codecompletionmodelcontrollerinterface_matchingitem_isbase = false;
    mutable bool ktexteditor__codecompletionmodelcontrollerinterface_shouldhideitemswithequalnames_isbase = false;

  public:
    VirtualKTextEditorCodeCompletionModelControllerInterface() : KTextEditor::CodeCompletionModelControllerInterface() {};

    ~VirtualKTextEditorCodeCompletionModelControllerInterface() {
        ktexteditor__codecompletionmodelcontrollerinterface_shouldstartcompletion_callback = nullptr;
        ktexteditor__codecompletionmodelcontrollerinterface_completionrange_callback = nullptr;
        ktexteditor__codecompletionmodelcontrollerinterface_updatecompletionrange_callback = nullptr;
        ktexteditor__codecompletionmodelcontrollerinterface_filterstring_callback = nullptr;
        ktexteditor__codecompletionmodelcontrollerinterface_shouldabortcompletion_callback = nullptr;
        ktexteditor__codecompletionmodelcontrollerinterface_shouldexecute_callback = nullptr;
        ktexteditor__codecompletionmodelcontrollerinterface_aborted_callback = nullptr;
        ktexteditor__codecompletionmodelcontrollerinterface_matchingitem_callback = nullptr;
        ktexteditor__codecompletionmodelcontrollerinterface_shouldhideitemswithequalnames_callback = nullptr;
    }

    // Callback setters
    inline void setKTextEditor__CodeCompletionModelControllerInterface_ShouldStartCompletion_Callback(KTextEditor__CodeCompletionModelControllerInterface_ShouldStartCompletion_Callback cb) { ktexteditor__codecompletionmodelcontrollerinterface_shouldstartcompletion_callback = cb; }
    inline void setKTextEditor__CodeCompletionModelControllerInterface_CompletionRange_Callback(KTextEditor__CodeCompletionModelControllerInterface_CompletionRange_Callback cb) { ktexteditor__codecompletionmodelcontrollerinterface_completionrange_callback = cb; }
    inline void setKTextEditor__CodeCompletionModelControllerInterface_UpdateCompletionRange_Callback(KTextEditor__CodeCompletionModelControllerInterface_UpdateCompletionRange_Callback cb) { ktexteditor__codecompletionmodelcontrollerinterface_updatecompletionrange_callback = cb; }
    inline void setKTextEditor__CodeCompletionModelControllerInterface_FilterString_Callback(KTextEditor__CodeCompletionModelControllerInterface_FilterString_Callback cb) { ktexteditor__codecompletionmodelcontrollerinterface_filterstring_callback = cb; }
    inline void setKTextEditor__CodeCompletionModelControllerInterface_ShouldAbortCompletion_Callback(KTextEditor__CodeCompletionModelControllerInterface_ShouldAbortCompletion_Callback cb) { ktexteditor__codecompletionmodelcontrollerinterface_shouldabortcompletion_callback = cb; }
    inline void setKTextEditor__CodeCompletionModelControllerInterface_ShouldExecute_Callback(KTextEditor__CodeCompletionModelControllerInterface_ShouldExecute_Callback cb) { ktexteditor__codecompletionmodelcontrollerinterface_shouldexecute_callback = cb; }
    inline void setKTextEditor__CodeCompletionModelControllerInterface_Aborted_Callback(KTextEditor__CodeCompletionModelControllerInterface_Aborted_Callback cb) { ktexteditor__codecompletionmodelcontrollerinterface_aborted_callback = cb; }
    inline void setKTextEditor__CodeCompletionModelControllerInterface_MatchingItem_Callback(KTextEditor__CodeCompletionModelControllerInterface_MatchingItem_Callback cb) { ktexteditor__codecompletionmodelcontrollerinterface_matchingitem_callback = cb; }
    inline void setKTextEditor__CodeCompletionModelControllerInterface_ShouldHideItemsWithEqualNames_Callback(KTextEditor__CodeCompletionModelControllerInterface_ShouldHideItemsWithEqualNames_Callback cb) { ktexteditor__codecompletionmodelcontrollerinterface_shouldhideitemswithequalnames_callback = cb; }

    // Base flag setters
    inline void setKTextEditor__CodeCompletionModelControllerInterface_ShouldStartCompletion_IsBase(bool value) const { ktexteditor__codecompletionmodelcontrollerinterface_shouldstartcompletion_isbase = value; }
    inline void setKTextEditor__CodeCompletionModelControllerInterface_CompletionRange_IsBase(bool value) const { ktexteditor__codecompletionmodelcontrollerinterface_completionrange_isbase = value; }
    inline void setKTextEditor__CodeCompletionModelControllerInterface_UpdateCompletionRange_IsBase(bool value) const { ktexteditor__codecompletionmodelcontrollerinterface_updatecompletionrange_isbase = value; }
    inline void setKTextEditor__CodeCompletionModelControllerInterface_FilterString_IsBase(bool value) const { ktexteditor__codecompletionmodelcontrollerinterface_filterstring_isbase = value; }
    inline void setKTextEditor__CodeCompletionModelControllerInterface_ShouldAbortCompletion_IsBase(bool value) const { ktexteditor__codecompletionmodelcontrollerinterface_shouldabortcompletion_isbase = value; }
    inline void setKTextEditor__CodeCompletionModelControllerInterface_ShouldExecute_IsBase(bool value) const { ktexteditor__codecompletionmodelcontrollerinterface_shouldexecute_isbase = value; }
    inline void setKTextEditor__CodeCompletionModelControllerInterface_Aborted_IsBase(bool value) const { ktexteditor__codecompletionmodelcontrollerinterface_aborted_isbase = value; }
    inline void setKTextEditor__CodeCompletionModelControllerInterface_MatchingItem_IsBase(bool value) const { ktexteditor__codecompletionmodelcontrollerinterface_matchingitem_isbase = value; }
    inline void setKTextEditor__CodeCompletionModelControllerInterface_ShouldHideItemsWithEqualNames_IsBase(bool value) const { ktexteditor__codecompletionmodelcontrollerinterface_shouldhideitemswithequalnames_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool shouldStartCompletion(KTextEditor::View* view, const QString& insertedText, bool userInsertion, const KTextEditor::Cursor& position) override {
        if (ktexteditor__codecompletionmodelcontrollerinterface_shouldstartcompletion_isbase) {
            ktexteditor__codecompletionmodelcontrollerinterface_shouldstartcompletion_isbase = false;
            return KTextEditor__CodeCompletionModelControllerInterface::shouldStartCompletion(view, insertedText, userInsertion, position);
        } else if (ktexteditor__codecompletionmodelcontrollerinterface_shouldstartcompletion_callback != nullptr) {
            KTextEditor__View* cbval1 = view;
            const QString insertedText_ret = insertedText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray insertedText_b = insertedText_ret.toUtf8();
            libqt_string insertedText_str;
            insertedText_str.len = insertedText_b.length();
            insertedText_str.data = static_cast<const char*>(malloc(insertedText_str.len + 1));
            memcpy((void*)insertedText_str.data, insertedText_b.data(), insertedText_str.len);
            ((char*)insertedText_str.data)[insertedText_str.len] = '\0';
            libqt_string cbval2 = insertedText_str;
            bool cbval3 = userInsertion;
            const KTextEditor::Cursor& position_ret = position;
            // Cast returned reference into pointer
            KTextEditor__Cursor* cbval4 = const_cast<KTextEditor::Cursor*>(&position_ret);

            bool callback_ret = ktexteditor__codecompletionmodelcontrollerinterface_shouldstartcompletion_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KTextEditor__CodeCompletionModelControllerInterface::shouldStartCompletion(view, insertedText, userInsertion, position);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KTextEditor::Range completionRange(KTextEditor::View* view, const KTextEditor::Cursor& position) override {
        if (ktexteditor__codecompletionmodelcontrollerinterface_completionrange_isbase) {
            ktexteditor__codecompletionmodelcontrollerinterface_completionrange_isbase = false;
            return KTextEditor__CodeCompletionModelControllerInterface::completionRange(view, position);
        } else if (ktexteditor__codecompletionmodelcontrollerinterface_completionrange_callback != nullptr) {
            KTextEditor__View* cbval1 = view;
            const KTextEditor::Cursor& position_ret = position;
            // Cast returned reference into pointer
            KTextEditor__Cursor* cbval2 = const_cast<KTextEditor::Cursor*>(&position_ret);

            KTextEditor__Range* callback_ret = ktexteditor__codecompletionmodelcontrollerinterface_completionrange_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KTextEditor__CodeCompletionModelControllerInterface::completionRange(view, position);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KTextEditor::Range updateCompletionRange(KTextEditor::View* view, const KTextEditor::Range& range) override {
        if (ktexteditor__codecompletionmodelcontrollerinterface_updatecompletionrange_isbase) {
            ktexteditor__codecompletionmodelcontrollerinterface_updatecompletionrange_isbase = false;
            return KTextEditor__CodeCompletionModelControllerInterface::updateCompletionRange(view, range);
        } else if (ktexteditor__codecompletionmodelcontrollerinterface_updatecompletionrange_callback != nullptr) {
            KTextEditor__View* cbval1 = view;
            const KTextEditor::Range& range_ret = range;
            // Cast returned reference into pointer
            KTextEditor__Range* cbval2 = const_cast<KTextEditor::Range*>(&range_ret);

            KTextEditor__Range* callback_ret = ktexteditor__codecompletionmodelcontrollerinterface_updatecompletionrange_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KTextEditor__CodeCompletionModelControllerInterface::updateCompletionRange(view, range);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString filterString(KTextEditor::View* view, const KTextEditor::Range& range, const KTextEditor::Cursor& position) override {
        if (ktexteditor__codecompletionmodelcontrollerinterface_filterstring_isbase) {
            ktexteditor__codecompletionmodelcontrollerinterface_filterstring_isbase = false;
            return KTextEditor__CodeCompletionModelControllerInterface::filterString(view, range, position);
        } else if (ktexteditor__codecompletionmodelcontrollerinterface_filterstring_callback != nullptr) {
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
        } else {
            return KTextEditor__CodeCompletionModelControllerInterface::filterString(view, range, position);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool shouldAbortCompletion(KTextEditor::View* view, const KTextEditor::Range& range, const QString& currentCompletion) override {
        if (ktexteditor__codecompletionmodelcontrollerinterface_shouldabortcompletion_isbase) {
            ktexteditor__codecompletionmodelcontrollerinterface_shouldabortcompletion_isbase = false;
            return KTextEditor__CodeCompletionModelControllerInterface::shouldAbortCompletion(view, range, currentCompletion);
        } else if (ktexteditor__codecompletionmodelcontrollerinterface_shouldabortcompletion_callback != nullptr) {
            KTextEditor__View* cbval1 = view;
            const KTextEditor::Range& range_ret = range;
            // Cast returned reference into pointer
            KTextEditor__Range* cbval2 = const_cast<KTextEditor::Range*>(&range_ret);
            const QString currentCompletion_ret = currentCompletion;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray currentCompletion_b = currentCompletion_ret.toUtf8();
            libqt_string currentCompletion_str;
            currentCompletion_str.len = currentCompletion_b.length();
            currentCompletion_str.data = static_cast<const char*>(malloc(currentCompletion_str.len + 1));
            memcpy((void*)currentCompletion_str.data, currentCompletion_b.data(), currentCompletion_str.len);
            ((char*)currentCompletion_str.data)[currentCompletion_str.len] = '\0';
            libqt_string cbval3 = currentCompletion_str;

            bool callback_ret = ktexteditor__codecompletionmodelcontrollerinterface_shouldabortcompletion_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KTextEditor__CodeCompletionModelControllerInterface::shouldAbortCompletion(view, range, currentCompletion);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool shouldExecute(const QModelIndex& selected, QChar inserted) override {
        if (ktexteditor__codecompletionmodelcontrollerinterface_shouldexecute_isbase) {
            ktexteditor__codecompletionmodelcontrollerinterface_shouldexecute_isbase = false;
            return KTextEditor__CodeCompletionModelControllerInterface::shouldExecute(selected, inserted);
        } else if (ktexteditor__codecompletionmodelcontrollerinterface_shouldexecute_callback != nullptr) {
            const QModelIndex& selected_ret = selected;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&selected_ret);
            QChar* cbval2 = new QChar(inserted);

            bool callback_ret = ktexteditor__codecompletionmodelcontrollerinterface_shouldexecute_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KTextEditor__CodeCompletionModelControllerInterface::shouldExecute(selected, inserted);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void aborted(KTextEditor::View* view) override {
        if (ktexteditor__codecompletionmodelcontrollerinterface_aborted_isbase) {
            ktexteditor__codecompletionmodelcontrollerinterface_aborted_isbase = false;
            KTextEditor__CodeCompletionModelControllerInterface::aborted(view);
        } else if (ktexteditor__codecompletionmodelcontrollerinterface_aborted_callback != nullptr) {
            KTextEditor__View* cbval1 = view;

            ktexteditor__codecompletionmodelcontrollerinterface_aborted_callback(this, cbval1);
        } else {
            KTextEditor__CodeCompletionModelControllerInterface::aborted(view);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KTextEditor::CodeCompletionModelControllerInterface::MatchReaction matchingItem(const QModelIndex& matched) override {
        if (ktexteditor__codecompletionmodelcontrollerinterface_matchingitem_isbase) {
            ktexteditor__codecompletionmodelcontrollerinterface_matchingitem_isbase = false;
            return KTextEditor__CodeCompletionModelControllerInterface::matchingItem(matched);
        } else if (ktexteditor__codecompletionmodelcontrollerinterface_matchingitem_callback != nullptr) {
            const QModelIndex& matched_ret = matched;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&matched_ret);

            int callback_ret = ktexteditor__codecompletionmodelcontrollerinterface_matchingitem_callback(this, cbval1);
            return static_cast<KTextEditor::CodeCompletionModelControllerInterface::MatchReaction>(callback_ret);
        } else {
            return KTextEditor__CodeCompletionModelControllerInterface::matchingItem(matched);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool shouldHideItemsWithEqualNames() const override {
        if (ktexteditor__codecompletionmodelcontrollerinterface_shouldhideitemswithequalnames_isbase) {
            ktexteditor__codecompletionmodelcontrollerinterface_shouldhideitemswithequalnames_isbase = false;
            return KTextEditor__CodeCompletionModelControllerInterface::shouldHideItemsWithEqualNames();
        } else if (ktexteditor__codecompletionmodelcontrollerinterface_shouldhideitemswithequalnames_callback != nullptr) {
            bool callback_ret = ktexteditor__codecompletionmodelcontrollerinterface_shouldhideitemswithequalnames_callback();
            return callback_ret;
        } else {
            return KTextEditor__CodeCompletionModelControllerInterface::shouldHideItemsWithEqualNames();
        }
    }
};

#endif
