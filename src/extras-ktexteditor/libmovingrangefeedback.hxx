#pragma once
#ifndef EXTRAS_KTEXTEDITOR_LIBMOVINGRANGEFEEDBACK_HXX
#define EXTRAS_KTEXTEDITOR_LIBMOVINGRANGEFEEDBACK_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTextEditor::MovingRangeFeedback
class VirtualKTextEditorMovingRangeFeedback final : public KTextEditor::MovingRangeFeedback {
  public:
    // Virtual class public types (including callbacks and access types)
    using KTextEditor__MovingRangeFeedback_RangeEmpty_Callback = void (*)(KTextEditor__MovingRangeFeedback*, KTextEditor__MovingRange*);
    using KTextEditor__MovingRangeFeedback_RangeInvalid_Callback = void (*)(KTextEditor__MovingRangeFeedback*, KTextEditor__MovingRange*);
    using KTextEditor__MovingRangeFeedback_MouseEnteredRange_Callback = void (*)(KTextEditor__MovingRangeFeedback*, KTextEditor__MovingRange*, KTextEditor__View*);
    using KTextEditor__MovingRangeFeedback_MouseExitedRange_Callback = void (*)(KTextEditor__MovingRangeFeedback*, KTextEditor__MovingRange*, KTextEditor__View*);
    using KTextEditor__MovingRangeFeedback_CaretEnteredRange_Callback = void (*)(KTextEditor__MovingRangeFeedback*, KTextEditor__MovingRange*, KTextEditor__View*);
    using KTextEditor__MovingRangeFeedback_CaretExitedRange_Callback = void (*)(KTextEditor__MovingRangeFeedback*, KTextEditor__MovingRange*, KTextEditor__View*);

    // Instance callback storage
    KTextEditor__MovingRangeFeedback_RangeEmpty_Callback ktexteditor__movingrangefeedback_rangeempty_callback = nullptr;
    KTextEditor__MovingRangeFeedback_RangeInvalid_Callback ktexteditor__movingrangefeedback_rangeinvalid_callback = nullptr;
    KTextEditor__MovingRangeFeedback_MouseEnteredRange_Callback ktexteditor__movingrangefeedback_mouseenteredrange_callback = nullptr;
    KTextEditor__MovingRangeFeedback_MouseExitedRange_Callback ktexteditor__movingrangefeedback_mouseexitedrange_callback = nullptr;
    KTextEditor__MovingRangeFeedback_CaretEnteredRange_Callback ktexteditor__movingrangefeedback_caretenteredrange_callback = nullptr;
    KTextEditor__MovingRangeFeedback_CaretExitedRange_Callback ktexteditor__movingrangefeedback_caretexitedrange_callback = nullptr;

    VirtualKTextEditorMovingRangeFeedback() : KTextEditor::MovingRangeFeedback() {};

    // Virtual method for C ABI access and custom callback
    virtual void rangeEmpty(KTextEditor::MovingRange* range) override {
        if (ktexteditor__movingrangefeedback_rangeempty_callback) {
            KTextEditor__MovingRange* cbval1 = range;
            ktexteditor__movingrangefeedback_rangeempty_callback(this, cbval1);
            return;
        }
        KTextEditor__MovingRangeFeedback::rangeEmpty(range);
    }

    // Virtual method for C ABI access and custom callback
    virtual void rangeInvalid(KTextEditor::MovingRange* range) override {
        if (ktexteditor__movingrangefeedback_rangeinvalid_callback) {
            KTextEditor__MovingRange* cbval1 = range;
            ktexteditor__movingrangefeedback_rangeinvalid_callback(this, cbval1);
            return;
        }
        KTextEditor__MovingRangeFeedback::rangeInvalid(range);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseEnteredRange(KTextEditor::MovingRange* range, KTextEditor::View* view) override {
        if (ktexteditor__movingrangefeedback_mouseenteredrange_callback) {
            KTextEditor__MovingRange* cbval1 = range;
            KTextEditor__View* cbval2 = view;
            ktexteditor__movingrangefeedback_mouseenteredrange_callback(this, cbval1, cbval2);
            return;
        }
        KTextEditor__MovingRangeFeedback::mouseEnteredRange(range, view);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseExitedRange(KTextEditor::MovingRange* range, KTextEditor::View* view) override {
        if (ktexteditor__movingrangefeedback_mouseexitedrange_callback) {
            KTextEditor__MovingRange* cbval1 = range;
            KTextEditor__View* cbval2 = view;
            ktexteditor__movingrangefeedback_mouseexitedrange_callback(this, cbval1, cbval2);
            return;
        }
        KTextEditor__MovingRangeFeedback::mouseExitedRange(range, view);
    }

    // Virtual method for C ABI access and custom callback
    virtual void caretEnteredRange(KTextEditor::MovingRange* range, KTextEditor::View* view) override {
        if (ktexteditor__movingrangefeedback_caretenteredrange_callback) {
            KTextEditor__MovingRange* cbval1 = range;
            KTextEditor__View* cbval2 = view;
            ktexteditor__movingrangefeedback_caretenteredrange_callback(this, cbval1, cbval2);
            return;
        }
        KTextEditor__MovingRangeFeedback::caretEnteredRange(range, view);
    }

    // Virtual method for C ABI access and custom callback
    virtual void caretExitedRange(KTextEditor::MovingRange* range, KTextEditor::View* view) override {
        if (ktexteditor__movingrangefeedback_caretexitedrange_callback) {
            KTextEditor__MovingRange* cbval1 = range;
            KTextEditor__View* cbval2 = view;
            ktexteditor__movingrangefeedback_caretexitedrange_callback(this, cbval1, cbval2);
            return;
        }
        KTextEditor__MovingRangeFeedback::caretExitedRange(range, view);
    }
};

#endif
