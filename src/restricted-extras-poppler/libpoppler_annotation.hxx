#pragma once
#ifndef RESTRICTED_EXTRAS_POPPLER_LIBPOPPLER_ANNOTATION_HXX
#define RESTRICTED_EXTRAS_POPPLER_LIBPOPPLER_ANNOTATION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Poppler::TextAnnotation
class VirtualPopplerTextAnnotation final : public Poppler::TextAnnotation {
  public:
    // Virtual class public types (including callbacks and access types)
    using Poppler__TextAnnotation_SubType_Callback = int (*)(const Poppler__TextAnnotation*);

    // Instance callback storage
    Poppler__TextAnnotation_SubType_Callback poppler__textannotation_subtype_callback = nullptr;

    VirtualPopplerTextAnnotation(Poppler::TextAnnotation::TextType typeVal) : Poppler::TextAnnotation(typeVal) {};

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Annotation::SubType subType() const override {
        if (poppler__textannotation_subtype_callback) {
            int callback_ret = poppler__textannotation_subtype_callback(this);
            return static_cast<Poppler::Annotation::SubType>(callback_ret);
        }
        return Poppler__TextAnnotation::subType();
    }
};

// This class is a subclass of Poppler::LineAnnotation
class VirtualPopplerLineAnnotation final : public Poppler::LineAnnotation {
  public:
    // Virtual class public types (including callbacks and access types)
    using Poppler__LineAnnotation_SubType_Callback = int (*)(const Poppler__LineAnnotation*);

    // Instance callback storage
    Poppler__LineAnnotation_SubType_Callback poppler__lineannotation_subtype_callback = nullptr;

    VirtualPopplerLineAnnotation(Poppler::LineAnnotation::LineType typeVal) : Poppler::LineAnnotation(typeVal) {};

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Annotation::SubType subType() const override {
        if (poppler__lineannotation_subtype_callback) {
            int callback_ret = poppler__lineannotation_subtype_callback(this);
            return static_cast<Poppler::Annotation::SubType>(callback_ret);
        }
        return Poppler__LineAnnotation::subType();
    }
};

// This class is a subclass of Poppler::GeomAnnotation
class VirtualPopplerGeomAnnotation final : public Poppler::GeomAnnotation {
  public:
    // Virtual class public types (including callbacks and access types)
    using Poppler__GeomAnnotation_SubType_Callback = int (*)(const Poppler__GeomAnnotation*);

    // Instance callback storage
    Poppler__GeomAnnotation_SubType_Callback poppler__geomannotation_subtype_callback = nullptr;

    VirtualPopplerGeomAnnotation() : Poppler::GeomAnnotation() {};

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Annotation::SubType subType() const override {
        if (poppler__geomannotation_subtype_callback) {
            int callback_ret = poppler__geomannotation_subtype_callback(this);
            return static_cast<Poppler::Annotation::SubType>(callback_ret);
        }
        return Poppler__GeomAnnotation::subType();
    }
};

// This class is a subclass of Poppler::HighlightAnnotation
class VirtualPopplerHighlightAnnotation final : public Poppler::HighlightAnnotation {
  public:
    // Virtual class public types (including callbacks and access types)
    using Poppler__HighlightAnnotation_SubType_Callback = int (*)(const Poppler__HighlightAnnotation*);

    // Instance callback storage
    Poppler__HighlightAnnotation_SubType_Callback poppler__highlightannotation_subtype_callback = nullptr;

    VirtualPopplerHighlightAnnotation() : Poppler::HighlightAnnotation() {};

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Annotation::SubType subType() const override {
        if (poppler__highlightannotation_subtype_callback) {
            int callback_ret = poppler__highlightannotation_subtype_callback(this);
            return static_cast<Poppler::Annotation::SubType>(callback_ret);
        }
        return Poppler__HighlightAnnotation::subType();
    }
};

// This class is a subclass of Poppler::StampAnnotation
class VirtualPopplerStampAnnotation final : public Poppler::StampAnnotation {
  public:
    // Virtual class public types (including callbacks and access types)
    using Poppler__StampAnnotation_SubType_Callback = int (*)(const Poppler__StampAnnotation*);

    // Instance callback storage
    Poppler__StampAnnotation_SubType_Callback poppler__stampannotation_subtype_callback = nullptr;

    VirtualPopplerStampAnnotation() : Poppler::StampAnnotation() {};

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Annotation::SubType subType() const override {
        if (poppler__stampannotation_subtype_callback) {
            int callback_ret = poppler__stampannotation_subtype_callback(this);
            return static_cast<Poppler::Annotation::SubType>(callback_ret);
        }
        return Poppler__StampAnnotation::subType();
    }
};

// This class is a subclass of Poppler::SignatureAnnotation
class VirtualPopplerSignatureAnnotation final : public Poppler::SignatureAnnotation {
  public:
    // Virtual class public types (including callbacks and access types)
    using Poppler__SignatureAnnotation_SubType_Callback = int (*)(const Poppler__SignatureAnnotation*);

    // Instance callback storage
    Poppler__SignatureAnnotation_SubType_Callback poppler__signatureannotation_subtype_callback = nullptr;

    VirtualPopplerSignatureAnnotation() : Poppler::SignatureAnnotation() {};

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Annotation::SubType subType() const override {
        if (poppler__signatureannotation_subtype_callback) {
            int callback_ret = poppler__signatureannotation_subtype_callback(this);
            return static_cast<Poppler::Annotation::SubType>(callback_ret);
        }
        return Poppler__SignatureAnnotation::subType();
    }
};

// This class is a subclass of Poppler::InkAnnotation
class VirtualPopplerInkAnnotation final : public Poppler::InkAnnotation {
  public:
    // Virtual class public types (including callbacks and access types)
    using Poppler__InkAnnotation_SubType_Callback = int (*)(const Poppler__InkAnnotation*);

    // Instance callback storage
    Poppler__InkAnnotation_SubType_Callback poppler__inkannotation_subtype_callback = nullptr;

    VirtualPopplerInkAnnotation() : Poppler::InkAnnotation() {};

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Annotation::SubType subType() const override {
        if (poppler__inkannotation_subtype_callback) {
            int callback_ret = poppler__inkannotation_subtype_callback(this);
            return static_cast<Poppler::Annotation::SubType>(callback_ret);
        }
        return Poppler__InkAnnotation::subType();
    }
};

// This class is a subclass of Poppler::CaretAnnotation
class VirtualPopplerCaretAnnotation final : public Poppler::CaretAnnotation {
  public:
    // Virtual class public types (including callbacks and access types)
    using Poppler__CaretAnnotation_SubType_Callback = int (*)(const Poppler__CaretAnnotation*);

    // Instance callback storage
    Poppler__CaretAnnotation_SubType_Callback poppler__caretannotation_subtype_callback = nullptr;

    VirtualPopplerCaretAnnotation() : Poppler::CaretAnnotation() {};

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Annotation::SubType subType() const override {
        if (poppler__caretannotation_subtype_callback) {
            int callback_ret = poppler__caretannotation_subtype_callback(this);
            return static_cast<Poppler::Annotation::SubType>(callback_ret);
        }
        return Poppler__CaretAnnotation::subType();
    }
};

#endif
