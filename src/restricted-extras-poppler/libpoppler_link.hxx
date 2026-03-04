#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_POPPLERC_LIBVIRTUALPOPPLER_LINK_H
#define SRC_RESTRICTED_EXTRAS_POPPLERC_LIBVIRTUALPOPPLER_LINK_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Poppler::Link so that we can call protected methods
class VirtualPopplerLink final : public Poppler::Link {

  public:
    // Virtual class boolean flag
    bool isVirtualPopplerLink = true;

    // Virtual class public types (including callbacks)
    using Poppler__Link_LinkType_Callback = int (*)();

  protected:
    // Instance callback storage
    Poppler__Link_LinkType_Callback poppler__link_linktype_callback = nullptr;

    // Instance base flags
    mutable bool poppler__link_linktype_isbase = false;

  public:
    VirtualPopplerLink(const QRectF& linkArea) : Poppler::Link(linkArea) {};

    ~VirtualPopplerLink() {
        poppler__link_linktype_callback = nullptr;
    }

    // Callback setters
    inline void setPoppler__Link_LinkType_Callback(Poppler__Link_LinkType_Callback cb) { poppler__link_linktype_callback = cb; }

    // Base flag setters
    inline void setPoppler__Link_LinkType_IsBase(bool value) const { poppler__link_linktype_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Link::LinkType linkType() const override {
        if (poppler__link_linktype_isbase) {
            poppler__link_linktype_isbase = false;
            return Poppler__Link::linkType();
        } else if (poppler__link_linktype_callback != nullptr) {
            int callback_ret = poppler__link_linktype_callback();
            return static_cast<Poppler::Link::LinkType>(callback_ret);
        } else {
            return Poppler__Link::linkType();
        }
    }
};

// This class is a subclass of Poppler::LinkGoto so that we can call protected methods
class VirtualPopplerLinkGoto final : public Poppler::LinkGoto {

  public:
    // Virtual class boolean flag
    bool isVirtualPopplerLinkGoto = true;

    // Virtual class public types (including callbacks)
    using Poppler__LinkGoto_LinkType_Callback = int (*)();

  protected:
    // Instance callback storage
    Poppler__LinkGoto_LinkType_Callback poppler__linkgoto_linktype_callback = nullptr;

    // Instance base flags
    mutable bool poppler__linkgoto_linktype_isbase = false;

  public:
    VirtualPopplerLinkGoto(const QRectF& linkArea, const QString& extFileName, const Poppler::LinkDestination& destination) : Poppler::LinkGoto(linkArea, extFileName, destination) {};

    ~VirtualPopplerLinkGoto() {
        poppler__linkgoto_linktype_callback = nullptr;
    }

    // Callback setters
    inline void setPoppler__LinkGoto_LinkType_Callback(Poppler__LinkGoto_LinkType_Callback cb) { poppler__linkgoto_linktype_callback = cb; }

    // Base flag setters
    inline void setPoppler__LinkGoto_LinkType_IsBase(bool value) const { poppler__linkgoto_linktype_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Link::LinkType linkType() const override {
        if (poppler__linkgoto_linktype_isbase) {
            poppler__linkgoto_linktype_isbase = false;
            return Poppler__LinkGoto::linkType();
        } else if (poppler__linkgoto_linktype_callback != nullptr) {
            int callback_ret = poppler__linkgoto_linktype_callback();
            return static_cast<Poppler::Link::LinkType>(callback_ret);
        } else {
            return Poppler__LinkGoto::linkType();
        }
    }
};

// This class is a subclass of Poppler::LinkExecute so that we can call protected methods
class VirtualPopplerLinkExecute final : public Poppler::LinkExecute {

  public:
    // Virtual class boolean flag
    bool isVirtualPopplerLinkExecute = true;

    // Virtual class public types (including callbacks)
    using Poppler__LinkExecute_LinkType_Callback = int (*)();

  protected:
    // Instance callback storage
    Poppler__LinkExecute_LinkType_Callback poppler__linkexecute_linktype_callback = nullptr;

    // Instance base flags
    mutable bool poppler__linkexecute_linktype_isbase = false;

  public:
    VirtualPopplerLinkExecute(const QRectF& linkArea, const QString& file, const QString& params) : Poppler::LinkExecute(linkArea, file, params) {};

    ~VirtualPopplerLinkExecute() {
        poppler__linkexecute_linktype_callback = nullptr;
    }

    // Callback setters
    inline void setPoppler__LinkExecute_LinkType_Callback(Poppler__LinkExecute_LinkType_Callback cb) { poppler__linkexecute_linktype_callback = cb; }

    // Base flag setters
    inline void setPoppler__LinkExecute_LinkType_IsBase(bool value) const { poppler__linkexecute_linktype_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Link::LinkType linkType() const override {
        if (poppler__linkexecute_linktype_isbase) {
            poppler__linkexecute_linktype_isbase = false;
            return Poppler__LinkExecute::linkType();
        } else if (poppler__linkexecute_linktype_callback != nullptr) {
            int callback_ret = poppler__linkexecute_linktype_callback();
            return static_cast<Poppler::Link::LinkType>(callback_ret);
        } else {
            return Poppler__LinkExecute::linkType();
        }
    }
};

// This class is a subclass of Poppler::LinkBrowse so that we can call protected methods
class VirtualPopplerLinkBrowse final : public Poppler::LinkBrowse {

  public:
    // Virtual class boolean flag
    bool isVirtualPopplerLinkBrowse = true;

    // Virtual class public types (including callbacks)
    using Poppler__LinkBrowse_LinkType_Callback = int (*)();

  protected:
    // Instance callback storage
    Poppler__LinkBrowse_LinkType_Callback poppler__linkbrowse_linktype_callback = nullptr;

    // Instance base flags
    mutable bool poppler__linkbrowse_linktype_isbase = false;

  public:
    VirtualPopplerLinkBrowse(const QRectF& linkArea, const QString& url) : Poppler::LinkBrowse(linkArea, url) {};

    ~VirtualPopplerLinkBrowse() {
        poppler__linkbrowse_linktype_callback = nullptr;
    }

    // Callback setters
    inline void setPoppler__LinkBrowse_LinkType_Callback(Poppler__LinkBrowse_LinkType_Callback cb) { poppler__linkbrowse_linktype_callback = cb; }

    // Base flag setters
    inline void setPoppler__LinkBrowse_LinkType_IsBase(bool value) const { poppler__linkbrowse_linktype_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Link::LinkType linkType() const override {
        if (poppler__linkbrowse_linktype_isbase) {
            poppler__linkbrowse_linktype_isbase = false;
            return Poppler__LinkBrowse::linkType();
        } else if (poppler__linkbrowse_linktype_callback != nullptr) {
            int callback_ret = poppler__linkbrowse_linktype_callback();
            return static_cast<Poppler::Link::LinkType>(callback_ret);
        } else {
            return Poppler__LinkBrowse::linkType();
        }
    }
};

// This class is a subclass of Poppler::LinkAction so that we can call protected methods
class VirtualPopplerLinkAction final : public Poppler::LinkAction {

  public:
    // Virtual class boolean flag
    bool isVirtualPopplerLinkAction = true;

    // Virtual class public types (including callbacks)
    using Poppler__LinkAction_LinkType_Callback = int (*)();

  protected:
    // Instance callback storage
    Poppler__LinkAction_LinkType_Callback poppler__linkaction_linktype_callback = nullptr;

    // Instance base flags
    mutable bool poppler__linkaction_linktype_isbase = false;

  public:
    VirtualPopplerLinkAction(const QRectF& linkArea, Poppler::LinkAction::ActionType actionType) : Poppler::LinkAction(linkArea, actionType) {};

    ~VirtualPopplerLinkAction() {
        poppler__linkaction_linktype_callback = nullptr;
    }

    // Callback setters
    inline void setPoppler__LinkAction_LinkType_Callback(Poppler__LinkAction_LinkType_Callback cb) { poppler__linkaction_linktype_callback = cb; }

    // Base flag setters
    inline void setPoppler__LinkAction_LinkType_IsBase(bool value) const { poppler__linkaction_linktype_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Link::LinkType linkType() const override {
        if (poppler__linkaction_linktype_isbase) {
            poppler__linkaction_linktype_isbase = false;
            return Poppler__LinkAction::linkType();
        } else if (poppler__linkaction_linktype_callback != nullptr) {
            int callback_ret = poppler__linkaction_linktype_callback();
            return static_cast<Poppler::Link::LinkType>(callback_ret);
        } else {
            return Poppler__LinkAction::linkType();
        }
    }
};

// This class is a subclass of Poppler::LinkSound so that we can call protected methods
class VirtualPopplerLinkSound final : public Poppler::LinkSound {

  public:
    // Virtual class boolean flag
    bool isVirtualPopplerLinkSound = true;

    // Virtual class public types (including callbacks)
    using Poppler__LinkSound_LinkType_Callback = int (*)();

  protected:
    // Instance callback storage
    Poppler__LinkSound_LinkType_Callback poppler__linksound_linktype_callback = nullptr;

    // Instance base flags
    mutable bool poppler__linksound_linktype_isbase = false;

  public:
    VirtualPopplerLinkSound(const QRectF& linkArea, double volume, bool sync, bool repeat, bool mix, Poppler::SoundObject* sound) : Poppler::LinkSound(linkArea, volume, sync, repeat, mix, sound) {};

    ~VirtualPopplerLinkSound() {
        poppler__linksound_linktype_callback = nullptr;
    }

    // Callback setters
    inline void setPoppler__LinkSound_LinkType_Callback(Poppler__LinkSound_LinkType_Callback cb) { poppler__linksound_linktype_callback = cb; }

    // Base flag setters
    inline void setPoppler__LinkSound_LinkType_IsBase(bool value) const { poppler__linksound_linktype_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Link::LinkType linkType() const override {
        if (poppler__linksound_linktype_isbase) {
            poppler__linksound_linktype_isbase = false;
            return Poppler__LinkSound::linkType();
        } else if (poppler__linksound_linktype_callback != nullptr) {
            int callback_ret = poppler__linksound_linktype_callback();
            return static_cast<Poppler::Link::LinkType>(callback_ret);
        } else {
            return Poppler__LinkSound::linkType();
        }
    }
};

// This class is a subclass of Poppler::LinkJavaScript so that we can call protected methods
class VirtualPopplerLinkJavaScript final : public Poppler::LinkJavaScript {

  public:
    // Virtual class boolean flag
    bool isVirtualPopplerLinkJavaScript = true;

    // Virtual class public types (including callbacks)
    using Poppler__LinkJavaScript_LinkType_Callback = int (*)();

  protected:
    // Instance callback storage
    Poppler__LinkJavaScript_LinkType_Callback poppler__linkjavascript_linktype_callback = nullptr;

    // Instance base flags
    mutable bool poppler__linkjavascript_linktype_isbase = false;

  public:
    VirtualPopplerLinkJavaScript(const QRectF& linkArea, const QString& js) : Poppler::LinkJavaScript(linkArea, js) {};

    ~VirtualPopplerLinkJavaScript() {
        poppler__linkjavascript_linktype_callback = nullptr;
    }

    // Callback setters
    inline void setPoppler__LinkJavaScript_LinkType_Callback(Poppler__LinkJavaScript_LinkType_Callback cb) { poppler__linkjavascript_linktype_callback = cb; }

    // Base flag setters
    inline void setPoppler__LinkJavaScript_LinkType_IsBase(bool value) const { poppler__linkjavascript_linktype_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Link::LinkType linkType() const override {
        if (poppler__linkjavascript_linktype_isbase) {
            poppler__linkjavascript_linktype_isbase = false;
            return Poppler__LinkJavaScript::linkType();
        } else if (poppler__linkjavascript_linktype_callback != nullptr) {
            int callback_ret = poppler__linkjavascript_linktype_callback();
            return static_cast<Poppler::Link::LinkType>(callback_ret);
        } else {
            return Poppler__LinkJavaScript::linkType();
        }
    }
};

#endif
