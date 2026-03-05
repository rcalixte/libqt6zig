#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBVIRTUALMOVINGRANGEFEEDBACK_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBVIRTUALMOVINGRANGEFEEDBACK_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTextEditor::MovingRangeFeedback so that we can call protected methods
class VirtualKTextEditorMovingRangeFeedback final : public KTextEditor::MovingRangeFeedback {

  public:
    // Virtual class boolean flag
    bool isVirtualKTextEditorMovingRangeFeedback = true;

    // Virtual class public types (including callbacks)
    using KTextEditor__MovingRangeFeedback_RangeEmpty_Callback = void (*)(KTextEditor__MovingRangeFeedback*, KTextEditor__MovingRange*);
    using KTextEditor__MovingRangeFeedback_RangeInvalid_Callback = void (*)(KTextEditor__MovingRangeFeedback*, KTextEditor__MovingRange*);
    using KTextEditor__MovingRangeFeedback_MouseEnteredRange_Callback = void (*)(KTextEditor__MovingRangeFeedback*, KTextEditor__MovingRange*, KTextEditor__View*);
    using KTextEditor__MovingRangeFeedback_MouseExitedRange_Callback = void (*)(KTextEditor__MovingRangeFeedback*, KTextEditor__MovingRange*, KTextEditor__View*);
    using KTextEditor__MovingRangeFeedback_CaretEnteredRange_Callback = void (*)(KTextEditor__MovingRangeFeedback*, KTextEditor__MovingRange*, KTextEditor__View*);
    using KTextEditor__MovingRangeFeedback_CaretExitedRange_Callback = void (*)(KTextEditor__MovingRangeFeedback*, KTextEditor__MovingRange*, KTextEditor__View*);

  protected:
    // Instance callback storage
    KTextEditor__MovingRangeFeedback_RangeEmpty_Callback ktexteditor__movingrangefeedback_rangeempty_callback = nullptr;
    KTextEditor__MovingRangeFeedback_RangeInvalid_Callback ktexteditor__movingrangefeedback_rangeinvalid_callback = nullptr;
    KTextEditor__MovingRangeFeedback_MouseEnteredRange_Callback ktexteditor__movingrangefeedback_mouseenteredrange_callback = nullptr;
    KTextEditor__MovingRangeFeedback_MouseExitedRange_Callback ktexteditor__movingrangefeedback_mouseexitedrange_callback = nullptr;
    KTextEditor__MovingRangeFeedback_CaretEnteredRange_Callback ktexteditor__movingrangefeedback_caretenteredrange_callback = nullptr;
    KTextEditor__MovingRangeFeedback_CaretExitedRange_Callback ktexteditor__movingrangefeedback_caretexitedrange_callback = nullptr;

    // Instance base flags
    mutable bool ktexteditor__movingrangefeedback_rangeempty_isbase = false;
    mutable bool ktexteditor__movingrangefeedback_rangeinvalid_isbase = false;
    mutable bool ktexteditor__movingrangefeedback_mouseenteredrange_isbase = false;
    mutable bool ktexteditor__movingrangefeedback_mouseexitedrange_isbase = false;
    mutable bool ktexteditor__movingrangefeedback_caretenteredrange_isbase = false;
    mutable bool ktexteditor__movingrangefeedback_caretexitedrange_isbase = false;

  public:
    VirtualKTextEditorMovingRangeFeedback() : KTextEditor::MovingRangeFeedback() {};

    // Callback setters
    inline void setKTextEditor__MovingRangeFeedback_RangeEmpty_Callback(KTextEditor__MovingRangeFeedback_RangeEmpty_Callback cb) { ktexteditor__movingrangefeedback_rangeempty_callback = cb; }
    inline void setKTextEditor__MovingRangeFeedback_RangeInvalid_Callback(KTextEditor__MovingRangeFeedback_RangeInvalid_Callback cb) { ktexteditor__movingrangefeedback_rangeinvalid_callback = cb; }
    inline void setKTextEditor__MovingRangeFeedback_MouseEnteredRange_Callback(KTextEditor__MovingRangeFeedback_MouseEnteredRange_Callback cb) { ktexteditor__movingrangefeedback_mouseenteredrange_callback = cb; }
    inline void setKTextEditor__MovingRangeFeedback_MouseExitedRange_Callback(KTextEditor__MovingRangeFeedback_MouseExitedRange_Callback cb) { ktexteditor__movingrangefeedback_mouseexitedrange_callback = cb; }
    inline void setKTextEditor__MovingRangeFeedback_CaretEnteredRange_Callback(KTextEditor__MovingRangeFeedback_CaretEnteredRange_Callback cb) { ktexteditor__movingrangefeedback_caretenteredrange_callback = cb; }
    inline void setKTextEditor__MovingRangeFeedback_CaretExitedRange_Callback(KTextEditor__MovingRangeFeedback_CaretExitedRange_Callback cb) { ktexteditor__movingrangefeedback_caretexitedrange_callback = cb; }

    // Base flag setters
    inline void setKTextEditor__MovingRangeFeedback_RangeEmpty_IsBase(bool value) const { ktexteditor__movingrangefeedback_rangeempty_isbase = value; }
    inline void setKTextEditor__MovingRangeFeedback_RangeInvalid_IsBase(bool value) const { ktexteditor__movingrangefeedback_rangeinvalid_isbase = value; }
    inline void setKTextEditor__MovingRangeFeedback_MouseEnteredRange_IsBase(bool value) const { ktexteditor__movingrangefeedback_mouseenteredrange_isbase = value; }
    inline void setKTextEditor__MovingRangeFeedback_MouseExitedRange_IsBase(bool value) const { ktexteditor__movingrangefeedback_mouseexitedrange_isbase = value; }
    inline void setKTextEditor__MovingRangeFeedback_CaretEnteredRange_IsBase(bool value) const { ktexteditor__movingrangefeedback_caretenteredrange_isbase = value; }
    inline void setKTextEditor__MovingRangeFeedback_CaretExitedRange_IsBase(bool value) const { ktexteditor__movingrangefeedback_caretexitedrange_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void rangeEmpty(KTextEditor::MovingRange* range) override {
        if (ktexteditor__movingrangefeedback_rangeempty_isbase) {
            ktexteditor__movingrangefeedback_rangeempty_isbase = false;
            KTextEditor__MovingRangeFeedback::rangeEmpty(range);
            return;
        }
        auto rangeempty_cb = ktexteditor__movingrangefeedback_rangeempty_callback;
        if (rangeempty_cb) {
            KTextEditor__MovingRange* cbval1 = range;

            rangeempty_cb(this, cbval1);
            return;
        }
        KTextEditor__MovingRangeFeedback::rangeEmpty(range);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rangeInvalid(KTextEditor::MovingRange* range) override {
        if (ktexteditor__movingrangefeedback_rangeinvalid_isbase) {
            ktexteditor__movingrangefeedback_rangeinvalid_isbase = false;
            KTextEditor__MovingRangeFeedback::rangeInvalid(range);
            return;
        }
        auto rangeinvalid_cb = ktexteditor__movingrangefeedback_rangeinvalid_callback;
        if (rangeinvalid_cb) {
            KTextEditor__MovingRange* cbval1 = range;

            rangeinvalid_cb(this, cbval1);
            return;
        }
        KTextEditor__MovingRangeFeedback::rangeInvalid(range);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseEnteredRange(KTextEditor::MovingRange* range, KTextEditor::View* view) override {
        if (ktexteditor__movingrangefeedback_mouseenteredrange_isbase) {
            ktexteditor__movingrangefeedback_mouseenteredrange_isbase = false;
            KTextEditor__MovingRangeFeedback::mouseEnteredRange(range, view);
            return;
        }
        auto mouseenteredrange_cb = ktexteditor__movingrangefeedback_mouseenteredrange_callback;
        if (mouseenteredrange_cb) {
            KTextEditor__MovingRange* cbval1 = range;
            KTextEditor__View* cbval2 = view;

            mouseenteredrange_cb(this, cbval1, cbval2);
            return;
        }
        KTextEditor__MovingRangeFeedback::mouseEnteredRange(range, view);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseExitedRange(KTextEditor::MovingRange* range, KTextEditor::View* view) override {
        if (ktexteditor__movingrangefeedback_mouseexitedrange_isbase) {
            ktexteditor__movingrangefeedback_mouseexitedrange_isbase = false;
            KTextEditor__MovingRangeFeedback::mouseExitedRange(range, view);
            return;
        }
        auto mouseexitedrange_cb = ktexteditor__movingrangefeedback_mouseexitedrange_callback;
        if (mouseexitedrange_cb) {
            KTextEditor__MovingRange* cbval1 = range;
            KTextEditor__View* cbval2 = view;

            mouseexitedrange_cb(this, cbval1, cbval2);
            return;
        }
        KTextEditor__MovingRangeFeedback::mouseExitedRange(range, view);
    }

    // Virtual method for C ABI access and custom callback
    virtual void caretEnteredRange(KTextEditor::MovingRange* range, KTextEditor::View* view) override {
        if (ktexteditor__movingrangefeedback_caretenteredrange_isbase) {
            ktexteditor__movingrangefeedback_caretenteredrange_isbase = false;
            KTextEditor__MovingRangeFeedback::caretEnteredRange(range, view);
            return;
        }
        auto caretenteredrange_cb = ktexteditor__movingrangefeedback_caretenteredrange_callback;
        if (caretenteredrange_cb) {
            KTextEditor__MovingRange* cbval1 = range;
            KTextEditor__View* cbval2 = view;

            caretenteredrange_cb(this, cbval1, cbval2);
            return;
        }
        KTextEditor__MovingRangeFeedback::caretEnteredRange(range, view);
    }

    // Virtual method for C ABI access and custom callback
    virtual void caretExitedRange(KTextEditor::MovingRange* range, KTextEditor::View* view) override {
        if (ktexteditor__movingrangefeedback_caretexitedrange_isbase) {
            ktexteditor__movingrangefeedback_caretexitedrange_isbase = false;
            KTextEditor__MovingRangeFeedback::caretExitedRange(range, view);
            return;
        }
        auto caretexitedrange_cb = ktexteditor__movingrangefeedback_caretexitedrange_callback;
        if (caretexitedrange_cb) {
            KTextEditor__MovingRange* cbval1 = range;
            KTextEditor__View* cbval2 = view;

            caretexitedrange_cb(this, cbval1, cbval2);
            return;
        }
        KTextEditor__MovingRangeFeedback::caretExitedRange(range, view);
    }
};

#endif
