#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_POPPLERC_LIBVIRTUALPOPPLER_ANNOTATION_H
#define SRC_RESTRICTED_EXTRAS_POPPLERC_LIBVIRTUALPOPPLER_ANNOTATION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Poppler::TextAnnotation so that we can call protected methods
class VirtualPopplerTextAnnotation final : public Poppler::TextAnnotation {

  public:
    // Virtual class boolean flag
    bool isVirtualPopplerTextAnnotation = true;

    // Virtual class public types (including callbacks)
    using Poppler__TextAnnotation_SubType_Callback = int (*)();

  protected:
    // Instance callback storage
    Poppler__TextAnnotation_SubType_Callback poppler__textannotation_subtype_callback = nullptr;

    // Instance base flags
    mutable bool poppler__textannotation_subtype_isbase = false;

  public:
    VirtualPopplerTextAnnotation(Poppler::TextAnnotation::TextType typeVal) : Poppler::TextAnnotation(typeVal) {};

    ~VirtualPopplerTextAnnotation() {
        poppler__textannotation_subtype_callback = nullptr;
    }

    // Callback setters
    inline void setPoppler__TextAnnotation_SubType_Callback(Poppler__TextAnnotation_SubType_Callback cb) { poppler__textannotation_subtype_callback = cb; }

    // Base flag setters
    inline void setPoppler__TextAnnotation_SubType_IsBase(bool value) const { poppler__textannotation_subtype_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Annotation::SubType subType() const override {
        if (poppler__textannotation_subtype_isbase) {
            poppler__textannotation_subtype_isbase = false;
            return Poppler__TextAnnotation::subType();
        } else if (poppler__textannotation_subtype_callback != nullptr) {
            int callback_ret = poppler__textannotation_subtype_callback();
            return static_cast<Poppler::Annotation::SubType>(callback_ret);
        } else {
            return Poppler__TextAnnotation::subType();
        }
    }
};

// This class is a subclass of Poppler::LineAnnotation so that we can call protected methods
class VirtualPopplerLineAnnotation final : public Poppler::LineAnnotation {

  public:
    // Virtual class boolean flag
    bool isVirtualPopplerLineAnnotation = true;

    // Virtual class public types (including callbacks)
    using Poppler__LineAnnotation_SubType_Callback = int (*)();

  protected:
    // Instance callback storage
    Poppler__LineAnnotation_SubType_Callback poppler__lineannotation_subtype_callback = nullptr;

    // Instance base flags
    mutable bool poppler__lineannotation_subtype_isbase = false;

  public:
    VirtualPopplerLineAnnotation(Poppler::LineAnnotation::LineType typeVal) : Poppler::LineAnnotation(typeVal) {};

    ~VirtualPopplerLineAnnotation() {
        poppler__lineannotation_subtype_callback = nullptr;
    }

    // Callback setters
    inline void setPoppler__LineAnnotation_SubType_Callback(Poppler__LineAnnotation_SubType_Callback cb) { poppler__lineannotation_subtype_callback = cb; }

    // Base flag setters
    inline void setPoppler__LineAnnotation_SubType_IsBase(bool value) const { poppler__lineannotation_subtype_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Annotation::SubType subType() const override {
        if (poppler__lineannotation_subtype_isbase) {
            poppler__lineannotation_subtype_isbase = false;
            return Poppler__LineAnnotation::subType();
        } else if (poppler__lineannotation_subtype_callback != nullptr) {
            int callback_ret = poppler__lineannotation_subtype_callback();
            return static_cast<Poppler::Annotation::SubType>(callback_ret);
        } else {
            return Poppler__LineAnnotation::subType();
        }
    }
};

// This class is a subclass of Poppler::GeomAnnotation so that we can call protected methods
class VirtualPopplerGeomAnnotation final : public Poppler::GeomAnnotation {

  public:
    // Virtual class boolean flag
    bool isVirtualPopplerGeomAnnotation = true;

    // Virtual class public types (including callbacks)
    using Poppler__GeomAnnotation_SubType_Callback = int (*)();

  protected:
    // Instance callback storage
    Poppler__GeomAnnotation_SubType_Callback poppler__geomannotation_subtype_callback = nullptr;

    // Instance base flags
    mutable bool poppler__geomannotation_subtype_isbase = false;

  public:
    VirtualPopplerGeomAnnotation() : Poppler::GeomAnnotation() {};

    ~VirtualPopplerGeomAnnotation() {
        poppler__geomannotation_subtype_callback = nullptr;
    }

    // Callback setters
    inline void setPoppler__GeomAnnotation_SubType_Callback(Poppler__GeomAnnotation_SubType_Callback cb) { poppler__geomannotation_subtype_callback = cb; }

    // Base flag setters
    inline void setPoppler__GeomAnnotation_SubType_IsBase(bool value) const { poppler__geomannotation_subtype_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Annotation::SubType subType() const override {
        if (poppler__geomannotation_subtype_isbase) {
            poppler__geomannotation_subtype_isbase = false;
            return Poppler__GeomAnnotation::subType();
        } else if (poppler__geomannotation_subtype_callback != nullptr) {
            int callback_ret = poppler__geomannotation_subtype_callback();
            return static_cast<Poppler::Annotation::SubType>(callback_ret);
        } else {
            return Poppler__GeomAnnotation::subType();
        }
    }
};

// This class is a subclass of Poppler::HighlightAnnotation so that we can call protected methods
class VirtualPopplerHighlightAnnotation final : public Poppler::HighlightAnnotation {

  public:
    // Virtual class boolean flag
    bool isVirtualPopplerHighlightAnnotation = true;

    // Virtual class public types (including callbacks)
    using Poppler__HighlightAnnotation_SubType_Callback = int (*)();

  protected:
    // Instance callback storage
    Poppler__HighlightAnnotation_SubType_Callback poppler__highlightannotation_subtype_callback = nullptr;

    // Instance base flags
    mutable bool poppler__highlightannotation_subtype_isbase = false;

  public:
    VirtualPopplerHighlightAnnotation() : Poppler::HighlightAnnotation() {};

    ~VirtualPopplerHighlightAnnotation() {
        poppler__highlightannotation_subtype_callback = nullptr;
    }

    // Callback setters
    inline void setPoppler__HighlightAnnotation_SubType_Callback(Poppler__HighlightAnnotation_SubType_Callback cb) { poppler__highlightannotation_subtype_callback = cb; }

    // Base flag setters
    inline void setPoppler__HighlightAnnotation_SubType_IsBase(bool value) const { poppler__highlightannotation_subtype_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Annotation::SubType subType() const override {
        if (poppler__highlightannotation_subtype_isbase) {
            poppler__highlightannotation_subtype_isbase = false;
            return Poppler__HighlightAnnotation::subType();
        } else if (poppler__highlightannotation_subtype_callback != nullptr) {
            int callback_ret = poppler__highlightannotation_subtype_callback();
            return static_cast<Poppler::Annotation::SubType>(callback_ret);
        } else {
            return Poppler__HighlightAnnotation::subType();
        }
    }
};

// This class is a subclass of Poppler::StampAnnotation so that we can call protected methods
class VirtualPopplerStampAnnotation final : public Poppler::StampAnnotation {

  public:
    // Virtual class boolean flag
    bool isVirtualPopplerStampAnnotation = true;

    // Virtual class public types (including callbacks)
    using Poppler__StampAnnotation_SubType_Callback = int (*)();

  protected:
    // Instance callback storage
    Poppler__StampAnnotation_SubType_Callback poppler__stampannotation_subtype_callback = nullptr;

    // Instance base flags
    mutable bool poppler__stampannotation_subtype_isbase = false;

  public:
    VirtualPopplerStampAnnotation() : Poppler::StampAnnotation() {};

    ~VirtualPopplerStampAnnotation() {
        poppler__stampannotation_subtype_callback = nullptr;
    }

    // Callback setters
    inline void setPoppler__StampAnnotation_SubType_Callback(Poppler__StampAnnotation_SubType_Callback cb) { poppler__stampannotation_subtype_callback = cb; }

    // Base flag setters
    inline void setPoppler__StampAnnotation_SubType_IsBase(bool value) const { poppler__stampannotation_subtype_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Annotation::SubType subType() const override {
        if (poppler__stampannotation_subtype_isbase) {
            poppler__stampannotation_subtype_isbase = false;
            return Poppler__StampAnnotation::subType();
        } else if (poppler__stampannotation_subtype_callback != nullptr) {
            int callback_ret = poppler__stampannotation_subtype_callback();
            return static_cast<Poppler::Annotation::SubType>(callback_ret);
        } else {
            return Poppler__StampAnnotation::subType();
        }
    }
};

// This class is a subclass of Poppler::SignatureAnnotation so that we can call protected methods
class VirtualPopplerSignatureAnnotation final : public Poppler::SignatureAnnotation {

  public:
    // Virtual class boolean flag
    bool isVirtualPopplerSignatureAnnotation = true;

    // Virtual class public types (including callbacks)
    using Poppler__SignatureAnnotation_SubType_Callback = int (*)();

  protected:
    // Instance callback storage
    Poppler__SignatureAnnotation_SubType_Callback poppler__signatureannotation_subtype_callback = nullptr;

    // Instance base flags
    mutable bool poppler__signatureannotation_subtype_isbase = false;

  public:
    VirtualPopplerSignatureAnnotation() : Poppler::SignatureAnnotation() {};

    ~VirtualPopplerSignatureAnnotation() {
        poppler__signatureannotation_subtype_callback = nullptr;
    }

    // Callback setters
    inline void setPoppler__SignatureAnnotation_SubType_Callback(Poppler__SignatureAnnotation_SubType_Callback cb) { poppler__signatureannotation_subtype_callback = cb; }

    // Base flag setters
    inline void setPoppler__SignatureAnnotation_SubType_IsBase(bool value) const { poppler__signatureannotation_subtype_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Annotation::SubType subType() const override {
        if (poppler__signatureannotation_subtype_isbase) {
            poppler__signatureannotation_subtype_isbase = false;
            return Poppler__SignatureAnnotation::subType();
        } else if (poppler__signatureannotation_subtype_callback != nullptr) {
            int callback_ret = poppler__signatureannotation_subtype_callback();
            return static_cast<Poppler::Annotation::SubType>(callback_ret);
        } else {
            return Poppler__SignatureAnnotation::subType();
        }
    }
};

// This class is a subclass of Poppler::InkAnnotation so that we can call protected methods
class VirtualPopplerInkAnnotation final : public Poppler::InkAnnotation {

  public:
    // Virtual class boolean flag
    bool isVirtualPopplerInkAnnotation = true;

    // Virtual class public types (including callbacks)
    using Poppler__InkAnnotation_SubType_Callback = int (*)();

  protected:
    // Instance callback storage
    Poppler__InkAnnotation_SubType_Callback poppler__inkannotation_subtype_callback = nullptr;

    // Instance base flags
    mutable bool poppler__inkannotation_subtype_isbase = false;

  public:
    VirtualPopplerInkAnnotation() : Poppler::InkAnnotation() {};

    ~VirtualPopplerInkAnnotation() {
        poppler__inkannotation_subtype_callback = nullptr;
    }

    // Callback setters
    inline void setPoppler__InkAnnotation_SubType_Callback(Poppler__InkAnnotation_SubType_Callback cb) { poppler__inkannotation_subtype_callback = cb; }

    // Base flag setters
    inline void setPoppler__InkAnnotation_SubType_IsBase(bool value) const { poppler__inkannotation_subtype_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Annotation::SubType subType() const override {
        if (poppler__inkannotation_subtype_isbase) {
            poppler__inkannotation_subtype_isbase = false;
            return Poppler__InkAnnotation::subType();
        } else if (poppler__inkannotation_subtype_callback != nullptr) {
            int callback_ret = poppler__inkannotation_subtype_callback();
            return static_cast<Poppler::Annotation::SubType>(callback_ret);
        } else {
            return Poppler__InkAnnotation::subType();
        }
    }
};

// This class is a subclass of Poppler::CaretAnnotation so that we can call protected methods
class VirtualPopplerCaretAnnotation final : public Poppler::CaretAnnotation {

  public:
    // Virtual class boolean flag
    bool isVirtualPopplerCaretAnnotation = true;

    // Virtual class public types (including callbacks)
    using Poppler__CaretAnnotation_SubType_Callback = int (*)();

  protected:
    // Instance callback storage
    Poppler__CaretAnnotation_SubType_Callback poppler__caretannotation_subtype_callback = nullptr;

    // Instance base flags
    mutable bool poppler__caretannotation_subtype_isbase = false;

  public:
    VirtualPopplerCaretAnnotation() : Poppler::CaretAnnotation() {};

    ~VirtualPopplerCaretAnnotation() {
        poppler__caretannotation_subtype_callback = nullptr;
    }

    // Callback setters
    inline void setPoppler__CaretAnnotation_SubType_Callback(Poppler__CaretAnnotation_SubType_Callback cb) { poppler__caretannotation_subtype_callback = cb; }

    // Base flag setters
    inline void setPoppler__CaretAnnotation_SubType_IsBase(bool value) const { poppler__caretannotation_subtype_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Annotation::SubType subType() const override {
        if (poppler__caretannotation_subtype_isbase) {
            poppler__caretannotation_subtype_isbase = false;
            return Poppler__CaretAnnotation::subType();
        } else if (poppler__caretannotation_subtype_callback != nullptr) {
            int callback_ret = poppler__caretannotation_subtype_callback();
            return static_cast<Poppler::Annotation::SubType>(callback_ret);
        } else {
            return Poppler__CaretAnnotation::subType();
        }
    }
};

#endif
