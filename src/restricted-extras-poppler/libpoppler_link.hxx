#pragma once
#ifndef RESTRICTED_EXTRAS_POPPLER_LIBPOPPLER_LINK_HXX
#define RESTRICTED_EXTRAS_POPPLER_LIBPOPPLER_LINK_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Poppler::Link
class VirtualPopplerLink final : public Poppler::Link {
  public:
    // Virtual class public types (including callbacks and access types)
    using Poppler__Link_LinkType_Callback = int (*)(const Poppler__Link*);

    // Instance callback storage
    Poppler__Link_LinkType_Callback poppler__link_linktype_callback = nullptr;

    VirtualPopplerLink(const QRectF& linkArea) : Poppler::Link(linkArea) {};

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Link::LinkType linkType() const override {
        if (poppler__link_linktype_callback) {
            int callback_ret = poppler__link_linktype_callback(this);
            return static_cast<Poppler::Link::LinkType>(callback_ret);
        }
        return Poppler__Link::linkType();
    }
};

// This class is a subclass of Poppler::LinkGoto
class VirtualPopplerLinkGoto final : public Poppler::LinkGoto {
  public:
    // Virtual class public types (including callbacks and access types)
    using Poppler__LinkGoto_LinkType_Callback = int (*)(const Poppler__LinkGoto*);

    // Instance callback storage
    Poppler__LinkGoto_LinkType_Callback poppler__linkgoto_linktype_callback = nullptr;

    VirtualPopplerLinkGoto(const QRectF& linkArea, const QString& extFileName, const Poppler::LinkDestination& destination) : Poppler::LinkGoto(linkArea, extFileName, destination) {};

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Link::LinkType linkType() const override {
        if (poppler__linkgoto_linktype_callback) {
            int callback_ret = poppler__linkgoto_linktype_callback(this);
            return static_cast<Poppler::Link::LinkType>(callback_ret);
        }
        return Poppler__LinkGoto::linkType();
    }
};

// This class is a subclass of Poppler::LinkExecute
class VirtualPopplerLinkExecute final : public Poppler::LinkExecute {
  public:
    // Virtual class public types (including callbacks and access types)
    using Poppler__LinkExecute_LinkType_Callback = int (*)(const Poppler__LinkExecute*);

    // Instance callback storage
    Poppler__LinkExecute_LinkType_Callback poppler__linkexecute_linktype_callback = nullptr;

    VirtualPopplerLinkExecute(const QRectF& linkArea, const QString& file, const QString& params) : Poppler::LinkExecute(linkArea, file, params) {};

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Link::LinkType linkType() const override {
        if (poppler__linkexecute_linktype_callback) {
            int callback_ret = poppler__linkexecute_linktype_callback(this);
            return static_cast<Poppler::Link::LinkType>(callback_ret);
        }
        return Poppler__LinkExecute::linkType();
    }
};

// This class is a subclass of Poppler::LinkBrowse
class VirtualPopplerLinkBrowse final : public Poppler::LinkBrowse {
  public:
    // Virtual class public types (including callbacks and access types)
    using Poppler__LinkBrowse_LinkType_Callback = int (*)(const Poppler__LinkBrowse*);

    // Instance callback storage
    Poppler__LinkBrowse_LinkType_Callback poppler__linkbrowse_linktype_callback = nullptr;

    VirtualPopplerLinkBrowse(const QRectF& linkArea, const QString& url) : Poppler::LinkBrowse(linkArea, url) {};

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Link::LinkType linkType() const override {
        if (poppler__linkbrowse_linktype_callback) {
            int callback_ret = poppler__linkbrowse_linktype_callback(this);
            return static_cast<Poppler::Link::LinkType>(callback_ret);
        }
        return Poppler__LinkBrowse::linkType();
    }
};

// This class is a subclass of Poppler::LinkAction
class VirtualPopplerLinkAction final : public Poppler::LinkAction {
  public:
    // Virtual class public types (including callbacks and access types)
    using Poppler__LinkAction_LinkType_Callback = int (*)(const Poppler__LinkAction*);

    // Instance callback storage
    Poppler__LinkAction_LinkType_Callback poppler__linkaction_linktype_callback = nullptr;

    VirtualPopplerLinkAction(const QRectF& linkArea, Poppler::LinkAction::ActionType actionType) : Poppler::LinkAction(linkArea, actionType) {};

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Link::LinkType linkType() const override {
        if (poppler__linkaction_linktype_callback) {
            int callback_ret = poppler__linkaction_linktype_callback(this);
            return static_cast<Poppler::Link::LinkType>(callback_ret);
        }
        return Poppler__LinkAction::linkType();
    }
};

// This class is a subclass of Poppler::LinkSound
class VirtualPopplerLinkSound final : public Poppler::LinkSound {
  public:
    // Virtual class public types (including callbacks and access types)
    using Poppler__LinkSound_LinkType_Callback = int (*)(const Poppler__LinkSound*);

    // Instance callback storage
    Poppler__LinkSound_LinkType_Callback poppler__linksound_linktype_callback = nullptr;

    VirtualPopplerLinkSound(const QRectF& linkArea, double volume, bool sync, bool repeat, bool mix, Poppler::SoundObject* sound) : Poppler::LinkSound(linkArea, volume, sync, repeat, mix, sound) {};

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Link::LinkType linkType() const override {
        if (poppler__linksound_linktype_callback) {
            int callback_ret = poppler__linksound_linktype_callback(this);
            return static_cast<Poppler::Link::LinkType>(callback_ret);
        }
        return Poppler__LinkSound::linkType();
    }
};

// This class is a subclass of Poppler::LinkJavaScript
class VirtualPopplerLinkJavaScript final : public Poppler::LinkJavaScript {
  public:
    // Virtual class public types (including callbacks and access types)
    using Poppler__LinkJavaScript_LinkType_Callback = int (*)(const Poppler__LinkJavaScript*);

    // Instance callback storage
    Poppler__LinkJavaScript_LinkType_Callback poppler__linkjavascript_linktype_callback = nullptr;

    VirtualPopplerLinkJavaScript(const QRectF& linkArea, const QString& js) : Poppler::LinkJavaScript(linkArea, js) {};

    // Virtual method for C ABI access and custom callback
    virtual Poppler::Link::LinkType linkType() const override {
        if (poppler__linkjavascript_linktype_callback) {
            int callback_ret = poppler__linkjavascript_linktype_callback(this);
            return static_cast<Poppler::Link::LinkType>(callback_ret);
        }
        return Poppler__LinkJavaScript::linkType();
    }
};

#endif
