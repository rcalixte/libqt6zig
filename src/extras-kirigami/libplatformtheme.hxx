#pragma once
#ifndef EXTRAS_KIRIGAMI_LIBPLATFORMTHEME_HXX
#define EXTRAS_KIRIGAMI_LIBPLATFORMTHEME_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Kirigami::Platform::PlatformTheme so that we can call protected methods
class VirtualKirigamiPlatformPlatformTheme final : public Kirigami::Platform::PlatformTheme {

  public:
    // Virtual class boolean flag
    bool isVirtualKirigamiPlatformPlatformTheme = true;

    // Virtual class public types (including callbacks)
    using Kirigami__Platform__PlatformTheme_MetaObject_Callback = QMetaObject* (*)();
    using Kirigami__Platform__PlatformTheme_Metacast_Callback = void* (*)(Kirigami__Platform__PlatformTheme*, const char*);
    using Kirigami__Platform__PlatformTheme_Metacall_Callback = int (*)(Kirigami__Platform__PlatformTheme*, int, int, void**);
    using Kirigami__Platform__PlatformTheme_IconFromTheme_Callback = QIcon* (*)(Kirigami__Platform__PlatformTheme*, const char*, QColor*);
    using Kirigami__Platform__PlatformTheme_Event_Callback = bool (*)(Kirigami__Platform__PlatformTheme*, QEvent*);
    using Kirigami__Platform__PlatformTheme_EventFilter_Callback = bool (*)(Kirigami__Platform__PlatformTheme*, QObject*, QEvent*);
    using Kirigami__Platform__PlatformTheme_TimerEvent_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QTimerEvent*);
    using Kirigami__Platform__PlatformTheme_ChildEvent_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QChildEvent*);
    using Kirigami__Platform__PlatformTheme_CustomEvent_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QEvent*);
    using Kirigami__Platform__PlatformTheme_ConnectNotify_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QMetaMethod*);
    using Kirigami__Platform__PlatformTheme_DisconnectNotify_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QMetaMethod*);
    using Kirigami__Platform__PlatformTheme_SetSupportsIconColoring_Callback = void (*)(Kirigami__Platform__PlatformTheme*, bool);
    using Kirigami__Platform__PlatformTheme_SetTextColor_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QColor*);
    using Kirigami__Platform__PlatformTheme_SetDisabledTextColor_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QColor*);
    using Kirigami__Platform__PlatformTheme_SetHighlightedTextColor_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QColor*);
    using Kirigami__Platform__PlatformTheme_SetActiveTextColor_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QColor*);
    using Kirigami__Platform__PlatformTheme_SetLinkColor_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QColor*);
    using Kirigami__Platform__PlatformTheme_SetVisitedLinkColor_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QColor*);
    using Kirigami__Platform__PlatformTheme_SetNegativeTextColor_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QColor*);
    using Kirigami__Platform__PlatformTheme_SetNeutralTextColor_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QColor*);
    using Kirigami__Platform__PlatformTheme_SetPositiveTextColor_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QColor*);
    using Kirigami__Platform__PlatformTheme_SetBackgroundColor_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QColor*);
    using Kirigami__Platform__PlatformTheme_SetAlternateBackgroundColor_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QColor*);
    using Kirigami__Platform__PlatformTheme_SetHighlightColor_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QColor*);
    using Kirigami__Platform__PlatformTheme_SetActiveBackgroundColor_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QColor*);
    using Kirigami__Platform__PlatformTheme_SetLinkBackgroundColor_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QColor*);
    using Kirigami__Platform__PlatformTheme_SetVisitedLinkBackgroundColor_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QColor*);
    using Kirigami__Platform__PlatformTheme_SetNegativeBackgroundColor_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QColor*);
    using Kirigami__Platform__PlatformTheme_SetNeutralBackgroundColor_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QColor*);
    using Kirigami__Platform__PlatformTheme_SetPositiveBackgroundColor_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QColor*);
    using Kirigami__Platform__PlatformTheme_SetFocusColor_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QColor*);
    using Kirigami__Platform__PlatformTheme_SetHoverColor_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QColor*);
    using Kirigami__Platform__PlatformTheme_SetDefaultFont_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QFont*);
    using Kirigami__Platform__PlatformTheme_SetSmallFont_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QFont*);
    using Kirigami__Platform__PlatformTheme_Sender_Callback = QObject* (*)();
    using Kirigami__Platform__PlatformTheme_SenderSignalIndex_Callback = int (*)();
    using Kirigami__Platform__PlatformTheme_Receivers_Callback = int (*)(const Kirigami__Platform__PlatformTheme*, const char*);
    using Kirigami__Platform__PlatformTheme_IsSignalConnected_Callback = bool (*)(const Kirigami__Platform__PlatformTheme*, QMetaMethod*);

  protected:
    // Instance callback storage
    Kirigami__Platform__PlatformTheme_MetaObject_Callback kirigami__platform__platformtheme_metaobject_callback = nullptr;
    Kirigami__Platform__PlatformTheme_Metacast_Callback kirigami__platform__platformtheme_metacast_callback = nullptr;
    Kirigami__Platform__PlatformTheme_Metacall_Callback kirigami__platform__platformtheme_metacall_callback = nullptr;
    Kirigami__Platform__PlatformTheme_IconFromTheme_Callback kirigami__platform__platformtheme_iconfromtheme_callback = nullptr;
    Kirigami__Platform__PlatformTheme_Event_Callback kirigami__platform__platformtheme_event_callback = nullptr;
    Kirigami__Platform__PlatformTheme_EventFilter_Callback kirigami__platform__platformtheme_eventfilter_callback = nullptr;
    Kirigami__Platform__PlatformTheme_TimerEvent_Callback kirigami__platform__platformtheme_timerevent_callback = nullptr;
    Kirigami__Platform__PlatformTheme_ChildEvent_Callback kirigami__platform__platformtheme_childevent_callback = nullptr;
    Kirigami__Platform__PlatformTheme_CustomEvent_Callback kirigami__platform__platformtheme_customevent_callback = nullptr;
    Kirigami__Platform__PlatformTheme_ConnectNotify_Callback kirigami__platform__platformtheme_connectnotify_callback = nullptr;
    Kirigami__Platform__PlatformTheme_DisconnectNotify_Callback kirigami__platform__platformtheme_disconnectnotify_callback = nullptr;
    Kirigami__Platform__PlatformTheme_SetSupportsIconColoring_Callback kirigami__platform__platformtheme_setsupportsiconcoloring_callback = nullptr;
    Kirigami__Platform__PlatformTheme_SetTextColor_Callback kirigami__platform__platformtheme_settextcolor_callback = nullptr;
    Kirigami__Platform__PlatformTheme_SetDisabledTextColor_Callback kirigami__platform__platformtheme_setdisabledtextcolor_callback = nullptr;
    Kirigami__Platform__PlatformTheme_SetHighlightedTextColor_Callback kirigami__platform__platformtheme_sethighlightedtextcolor_callback = nullptr;
    Kirigami__Platform__PlatformTheme_SetActiveTextColor_Callback kirigami__platform__platformtheme_setactivetextcolor_callback = nullptr;
    Kirigami__Platform__PlatformTheme_SetLinkColor_Callback kirigami__platform__platformtheme_setlinkcolor_callback = nullptr;
    Kirigami__Platform__PlatformTheme_SetVisitedLinkColor_Callback kirigami__platform__platformtheme_setvisitedlinkcolor_callback = nullptr;
    Kirigami__Platform__PlatformTheme_SetNegativeTextColor_Callback kirigami__platform__platformtheme_setnegativetextcolor_callback = nullptr;
    Kirigami__Platform__PlatformTheme_SetNeutralTextColor_Callback kirigami__platform__platformtheme_setneutraltextcolor_callback = nullptr;
    Kirigami__Platform__PlatformTheme_SetPositiveTextColor_Callback kirigami__platform__platformtheme_setpositivetextcolor_callback = nullptr;
    Kirigami__Platform__PlatformTheme_SetBackgroundColor_Callback kirigami__platform__platformtheme_setbackgroundcolor_callback = nullptr;
    Kirigami__Platform__PlatformTheme_SetAlternateBackgroundColor_Callback kirigami__platform__platformtheme_setalternatebackgroundcolor_callback = nullptr;
    Kirigami__Platform__PlatformTheme_SetHighlightColor_Callback kirigami__platform__platformtheme_sethighlightcolor_callback = nullptr;
    Kirigami__Platform__PlatformTheme_SetActiveBackgroundColor_Callback kirigami__platform__platformtheme_setactivebackgroundcolor_callback = nullptr;
    Kirigami__Platform__PlatformTheme_SetLinkBackgroundColor_Callback kirigami__platform__platformtheme_setlinkbackgroundcolor_callback = nullptr;
    Kirigami__Platform__PlatformTheme_SetVisitedLinkBackgroundColor_Callback kirigami__platform__platformtheme_setvisitedlinkbackgroundcolor_callback = nullptr;
    Kirigami__Platform__PlatformTheme_SetNegativeBackgroundColor_Callback kirigami__platform__platformtheme_setnegativebackgroundcolor_callback = nullptr;
    Kirigami__Platform__PlatformTheme_SetNeutralBackgroundColor_Callback kirigami__platform__platformtheme_setneutralbackgroundcolor_callback = nullptr;
    Kirigami__Platform__PlatformTheme_SetPositiveBackgroundColor_Callback kirigami__platform__platformtheme_setpositivebackgroundcolor_callback = nullptr;
    Kirigami__Platform__PlatformTheme_SetFocusColor_Callback kirigami__platform__platformtheme_setfocuscolor_callback = nullptr;
    Kirigami__Platform__PlatformTheme_SetHoverColor_Callback kirigami__platform__platformtheme_sethovercolor_callback = nullptr;
    Kirigami__Platform__PlatformTheme_SetDefaultFont_Callback kirigami__platform__platformtheme_setdefaultfont_callback = nullptr;
    Kirigami__Platform__PlatformTheme_SetSmallFont_Callback kirigami__platform__platformtheme_setsmallfont_callback = nullptr;
    Kirigami__Platform__PlatformTheme_Sender_Callback kirigami__platform__platformtheme_sender_callback = nullptr;
    Kirigami__Platform__PlatformTheme_SenderSignalIndex_Callback kirigami__platform__platformtheme_sendersignalindex_callback = nullptr;
    Kirigami__Platform__PlatformTheme_Receivers_Callback kirigami__platform__platformtheme_receivers_callback = nullptr;
    Kirigami__Platform__PlatformTheme_IsSignalConnected_Callback kirigami__platform__platformtheme_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kirigami__platform__platformtheme_metaobject_isbase = false;
    mutable bool kirigami__platform__platformtheme_metacast_isbase = false;
    mutable bool kirigami__platform__platformtheme_metacall_isbase = false;
    mutable bool kirigami__platform__platformtheme_iconfromtheme_isbase = false;
    mutable bool kirigami__platform__platformtheme_event_isbase = false;
    mutable bool kirigami__platform__platformtheme_eventfilter_isbase = false;
    mutable bool kirigami__platform__platformtheme_timerevent_isbase = false;
    mutable bool kirigami__platform__platformtheme_childevent_isbase = false;
    mutable bool kirigami__platform__platformtheme_customevent_isbase = false;
    mutable bool kirigami__platform__platformtheme_connectnotify_isbase = false;
    mutable bool kirigami__platform__platformtheme_disconnectnotify_isbase = false;
    mutable bool kirigami__platform__platformtheme_setsupportsiconcoloring_isbase = false;
    mutable bool kirigami__platform__platformtheme_settextcolor_isbase = false;
    mutable bool kirigami__platform__platformtheme_setdisabledtextcolor_isbase = false;
    mutable bool kirigami__platform__platformtheme_sethighlightedtextcolor_isbase = false;
    mutable bool kirigami__platform__platformtheme_setactivetextcolor_isbase = false;
    mutable bool kirigami__platform__platformtheme_setlinkcolor_isbase = false;
    mutable bool kirigami__platform__platformtheme_setvisitedlinkcolor_isbase = false;
    mutable bool kirigami__platform__platformtheme_setnegativetextcolor_isbase = false;
    mutable bool kirigami__platform__platformtheme_setneutraltextcolor_isbase = false;
    mutable bool kirigami__platform__platformtheme_setpositivetextcolor_isbase = false;
    mutable bool kirigami__platform__platformtheme_setbackgroundcolor_isbase = false;
    mutable bool kirigami__platform__platformtheme_setalternatebackgroundcolor_isbase = false;
    mutable bool kirigami__platform__platformtheme_sethighlightcolor_isbase = false;
    mutable bool kirigami__platform__platformtheme_setactivebackgroundcolor_isbase = false;
    mutable bool kirigami__platform__platformtheme_setlinkbackgroundcolor_isbase = false;
    mutable bool kirigami__platform__platformtheme_setvisitedlinkbackgroundcolor_isbase = false;
    mutable bool kirigami__platform__platformtheme_setnegativebackgroundcolor_isbase = false;
    mutable bool kirigami__platform__platformtheme_setneutralbackgroundcolor_isbase = false;
    mutable bool kirigami__platform__platformtheme_setpositivebackgroundcolor_isbase = false;
    mutable bool kirigami__platform__platformtheme_setfocuscolor_isbase = false;
    mutable bool kirigami__platform__platformtheme_sethovercolor_isbase = false;
    mutable bool kirigami__platform__platformtheme_setdefaultfont_isbase = false;
    mutable bool kirigami__platform__platformtheme_setsmallfont_isbase = false;
    mutable bool kirigami__platform__platformtheme_sender_isbase = false;
    mutable bool kirigami__platform__platformtheme_sendersignalindex_isbase = false;
    mutable bool kirigami__platform__platformtheme_receivers_isbase = false;
    mutable bool kirigami__platform__platformtheme_issignalconnected_isbase = false;

  public:
    VirtualKirigamiPlatformPlatformTheme() : Kirigami::Platform::PlatformTheme() {};
    VirtualKirigamiPlatformPlatformTheme(QObject* parent) : Kirigami::Platform::PlatformTheme(parent) {};

    // Callback setters
    inline void setKirigami__Platform__PlatformTheme_MetaObject_Callback(Kirigami__Platform__PlatformTheme_MetaObject_Callback cb) { kirigami__platform__platformtheme_metaobject_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_Metacast_Callback(Kirigami__Platform__PlatformTheme_Metacast_Callback cb) { kirigami__platform__platformtheme_metacast_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_Metacall_Callback(Kirigami__Platform__PlatformTheme_Metacall_Callback cb) { kirigami__platform__platformtheme_metacall_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_IconFromTheme_Callback(Kirigami__Platform__PlatformTheme_IconFromTheme_Callback cb) { kirigami__platform__platformtheme_iconfromtheme_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_Event_Callback(Kirigami__Platform__PlatformTheme_Event_Callback cb) { kirigami__platform__platformtheme_event_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_EventFilter_Callback(Kirigami__Platform__PlatformTheme_EventFilter_Callback cb) { kirigami__platform__platformtheme_eventfilter_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_TimerEvent_Callback(Kirigami__Platform__PlatformTheme_TimerEvent_Callback cb) { kirigami__platform__platformtheme_timerevent_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_ChildEvent_Callback(Kirigami__Platform__PlatformTheme_ChildEvent_Callback cb) { kirigami__platform__platformtheme_childevent_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_CustomEvent_Callback(Kirigami__Platform__PlatformTheme_CustomEvent_Callback cb) { kirigami__platform__platformtheme_customevent_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_ConnectNotify_Callback(Kirigami__Platform__PlatformTheme_ConnectNotify_Callback cb) { kirigami__platform__platformtheme_connectnotify_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_DisconnectNotify_Callback(Kirigami__Platform__PlatformTheme_DisconnectNotify_Callback cb) { kirigami__platform__platformtheme_disconnectnotify_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_SetSupportsIconColoring_Callback(Kirigami__Platform__PlatformTheme_SetSupportsIconColoring_Callback cb) { kirigami__platform__platformtheme_setsupportsiconcoloring_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_SetTextColor_Callback(Kirigami__Platform__PlatformTheme_SetTextColor_Callback cb) { kirigami__platform__platformtheme_settextcolor_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_SetDisabledTextColor_Callback(Kirigami__Platform__PlatformTheme_SetDisabledTextColor_Callback cb) { kirigami__platform__platformtheme_setdisabledtextcolor_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_SetHighlightedTextColor_Callback(Kirigami__Platform__PlatformTheme_SetHighlightedTextColor_Callback cb) { kirigami__platform__platformtheme_sethighlightedtextcolor_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_SetActiveTextColor_Callback(Kirigami__Platform__PlatformTheme_SetActiveTextColor_Callback cb) { kirigami__platform__platformtheme_setactivetextcolor_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_SetLinkColor_Callback(Kirigami__Platform__PlatformTheme_SetLinkColor_Callback cb) { kirigami__platform__platformtheme_setlinkcolor_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_SetVisitedLinkColor_Callback(Kirigami__Platform__PlatformTheme_SetVisitedLinkColor_Callback cb) { kirigami__platform__platformtheme_setvisitedlinkcolor_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_SetNegativeTextColor_Callback(Kirigami__Platform__PlatformTheme_SetNegativeTextColor_Callback cb) { kirigami__platform__platformtheme_setnegativetextcolor_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_SetNeutralTextColor_Callback(Kirigami__Platform__PlatformTheme_SetNeutralTextColor_Callback cb) { kirigami__platform__platformtheme_setneutraltextcolor_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_SetPositiveTextColor_Callback(Kirigami__Platform__PlatformTheme_SetPositiveTextColor_Callback cb) { kirigami__platform__platformtheme_setpositivetextcolor_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_SetBackgroundColor_Callback(Kirigami__Platform__PlatformTheme_SetBackgroundColor_Callback cb) { kirigami__platform__platformtheme_setbackgroundcolor_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_SetAlternateBackgroundColor_Callback(Kirigami__Platform__PlatformTheme_SetAlternateBackgroundColor_Callback cb) { kirigami__platform__platformtheme_setalternatebackgroundcolor_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_SetHighlightColor_Callback(Kirigami__Platform__PlatformTheme_SetHighlightColor_Callback cb) { kirigami__platform__platformtheme_sethighlightcolor_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_SetActiveBackgroundColor_Callback(Kirigami__Platform__PlatformTheme_SetActiveBackgroundColor_Callback cb) { kirigami__platform__platformtheme_setactivebackgroundcolor_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_SetLinkBackgroundColor_Callback(Kirigami__Platform__PlatformTheme_SetLinkBackgroundColor_Callback cb) { kirigami__platform__platformtheme_setlinkbackgroundcolor_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_SetVisitedLinkBackgroundColor_Callback(Kirigami__Platform__PlatformTheme_SetVisitedLinkBackgroundColor_Callback cb) { kirigami__platform__platformtheme_setvisitedlinkbackgroundcolor_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_SetNegativeBackgroundColor_Callback(Kirigami__Platform__PlatformTheme_SetNegativeBackgroundColor_Callback cb) { kirigami__platform__platformtheme_setnegativebackgroundcolor_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_SetNeutralBackgroundColor_Callback(Kirigami__Platform__PlatformTheme_SetNeutralBackgroundColor_Callback cb) { kirigami__platform__platformtheme_setneutralbackgroundcolor_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_SetPositiveBackgroundColor_Callback(Kirigami__Platform__PlatformTheme_SetPositiveBackgroundColor_Callback cb) { kirigami__platform__platformtheme_setpositivebackgroundcolor_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_SetFocusColor_Callback(Kirigami__Platform__PlatformTheme_SetFocusColor_Callback cb) { kirigami__platform__platformtheme_setfocuscolor_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_SetHoverColor_Callback(Kirigami__Platform__PlatformTheme_SetHoverColor_Callback cb) { kirigami__platform__platformtheme_sethovercolor_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_SetDefaultFont_Callback(Kirigami__Platform__PlatformTheme_SetDefaultFont_Callback cb) { kirigami__platform__platformtheme_setdefaultfont_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_SetSmallFont_Callback(Kirigami__Platform__PlatformTheme_SetSmallFont_Callback cb) { kirigami__platform__platformtheme_setsmallfont_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_Sender_Callback(Kirigami__Platform__PlatformTheme_Sender_Callback cb) { kirigami__platform__platformtheme_sender_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_SenderSignalIndex_Callback(Kirigami__Platform__PlatformTheme_SenderSignalIndex_Callback cb) { kirigami__platform__platformtheme_sendersignalindex_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_Receivers_Callback(Kirigami__Platform__PlatformTheme_Receivers_Callback cb) { kirigami__platform__platformtheme_receivers_callback = cb; }
    inline void setKirigami__Platform__PlatformTheme_IsSignalConnected_Callback(Kirigami__Platform__PlatformTheme_IsSignalConnected_Callback cb) { kirigami__platform__platformtheme_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKirigami__Platform__PlatformTheme_MetaObject_IsBase(bool value) const { kirigami__platform__platformtheme_metaobject_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_Metacast_IsBase(bool value) const { kirigami__platform__platformtheme_metacast_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_Metacall_IsBase(bool value) const { kirigami__platform__platformtheme_metacall_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_IconFromTheme_IsBase(bool value) const { kirigami__platform__platformtheme_iconfromtheme_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_Event_IsBase(bool value) const { kirigami__platform__platformtheme_event_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_EventFilter_IsBase(bool value) const { kirigami__platform__platformtheme_eventfilter_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_TimerEvent_IsBase(bool value) const { kirigami__platform__platformtheme_timerevent_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_ChildEvent_IsBase(bool value) const { kirigami__platform__platformtheme_childevent_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_CustomEvent_IsBase(bool value) const { kirigami__platform__platformtheme_customevent_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_ConnectNotify_IsBase(bool value) const { kirigami__platform__platformtheme_connectnotify_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_DisconnectNotify_IsBase(bool value) const { kirigami__platform__platformtheme_disconnectnotify_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_SetSupportsIconColoring_IsBase(bool value) const { kirigami__platform__platformtheme_setsupportsiconcoloring_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_SetTextColor_IsBase(bool value) const { kirigami__platform__platformtheme_settextcolor_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_SetDisabledTextColor_IsBase(bool value) const { kirigami__platform__platformtheme_setdisabledtextcolor_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_SetHighlightedTextColor_IsBase(bool value) const { kirigami__platform__platformtheme_sethighlightedtextcolor_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_SetActiveTextColor_IsBase(bool value) const { kirigami__platform__platformtheme_setactivetextcolor_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_SetLinkColor_IsBase(bool value) const { kirigami__platform__platformtheme_setlinkcolor_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_SetVisitedLinkColor_IsBase(bool value) const { kirigami__platform__platformtheme_setvisitedlinkcolor_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_SetNegativeTextColor_IsBase(bool value) const { kirigami__platform__platformtheme_setnegativetextcolor_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_SetNeutralTextColor_IsBase(bool value) const { kirigami__platform__platformtheme_setneutraltextcolor_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_SetPositiveTextColor_IsBase(bool value) const { kirigami__platform__platformtheme_setpositivetextcolor_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_SetBackgroundColor_IsBase(bool value) const { kirigami__platform__platformtheme_setbackgroundcolor_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_SetAlternateBackgroundColor_IsBase(bool value) const { kirigami__platform__platformtheme_setalternatebackgroundcolor_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_SetHighlightColor_IsBase(bool value) const { kirigami__platform__platformtheme_sethighlightcolor_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_SetActiveBackgroundColor_IsBase(bool value) const { kirigami__platform__platformtheme_setactivebackgroundcolor_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_SetLinkBackgroundColor_IsBase(bool value) const { kirigami__platform__platformtheme_setlinkbackgroundcolor_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_SetVisitedLinkBackgroundColor_IsBase(bool value) const { kirigami__platform__platformtheme_setvisitedlinkbackgroundcolor_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_SetNegativeBackgroundColor_IsBase(bool value) const { kirigami__platform__platformtheme_setnegativebackgroundcolor_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_SetNeutralBackgroundColor_IsBase(bool value) const { kirigami__platform__platformtheme_setneutralbackgroundcolor_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_SetPositiveBackgroundColor_IsBase(bool value) const { kirigami__platform__platformtheme_setpositivebackgroundcolor_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_SetFocusColor_IsBase(bool value) const { kirigami__platform__platformtheme_setfocuscolor_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_SetHoverColor_IsBase(bool value) const { kirigami__platform__platformtheme_sethovercolor_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_SetDefaultFont_IsBase(bool value) const { kirigami__platform__platformtheme_setdefaultfont_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_SetSmallFont_IsBase(bool value) const { kirigami__platform__platformtheme_setsmallfont_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_Sender_IsBase(bool value) const { kirigami__platform__platformtheme_sender_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_SenderSignalIndex_IsBase(bool value) const { kirigami__platform__platformtheme_sendersignalindex_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_Receivers_IsBase(bool value) const { kirigami__platform__platformtheme_receivers_isbase = value; }
    inline void setKirigami__Platform__PlatformTheme_IsSignalConnected_IsBase(bool value) const { kirigami__platform__platformtheme_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kirigami__platform__platformtheme_metaobject_isbase) {
            kirigami__platform__platformtheme_metaobject_isbase = false;
            return Kirigami__Platform__PlatformTheme::metaObject();
        }
        auto metaobject_cb = kirigami__platform__platformtheme_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return Kirigami__Platform__PlatformTheme::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kirigami__platform__platformtheme_metacast_isbase) {
            kirigami__platform__platformtheme_metacast_isbase = false;
            return Kirigami__Platform__PlatformTheme::qt_metacast(param1);
        }
        auto metacast_cb = kirigami__platform__platformtheme_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return Kirigami__Platform__PlatformTheme::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kirigami__platform__platformtheme_metacall_isbase) {
            kirigami__platform__platformtheme_metacall_isbase = false;
            return Kirigami__Platform__PlatformTheme::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kirigami__platform__platformtheme_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Kirigami__Platform__PlatformTheme::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QIcon iconFromTheme(const QString& name, const QColor& customColor) override {
        if (kirigami__platform__platformtheme_iconfromtheme_isbase) {
            kirigami__platform__platformtheme_iconfromtheme_isbase = false;
            return Kirigami__Platform__PlatformTheme::iconFromTheme(name, customColor);
        }
        auto iconfromtheme_cb = kirigami__platform__platformtheme_iconfromtheme_callback;
        if (iconfromtheme_cb) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const QColor& customColor_ret = customColor;
            // Cast returned reference into pointer
            QColor* cbval2 = const_cast<QColor*>(&customColor_ret);
            QIcon* callback_ret = iconfromtheme_cb(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(name_str);
            return callback_ret_Value;
        }
        return Kirigami__Platform__PlatformTheme::iconFromTheme(name, customColor);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kirigami__platform__platformtheme_event_isbase) {
            kirigami__platform__platformtheme_event_isbase = false;
            return Kirigami__Platform__PlatformTheme::event(event);
        }
        auto event_cb = kirigami__platform__platformtheme_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return Kirigami__Platform__PlatformTheme::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kirigami__platform__platformtheme_eventfilter_isbase) {
            kirigami__platform__platformtheme_eventfilter_isbase = false;
            return Kirigami__Platform__PlatformTheme::eventFilter(watched, event);
        }
        auto eventfilter_cb = kirigami__platform__platformtheme_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return Kirigami__Platform__PlatformTheme::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kirigami__platform__platformtheme_timerevent_isbase) {
            kirigami__platform__platformtheme_timerevent_isbase = false;
            Kirigami__Platform__PlatformTheme::timerEvent(event);
            return;
        }
        auto timerevent_cb = kirigami__platform__platformtheme_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kirigami__platform__platformtheme_childevent_isbase) {
            kirigami__platform__platformtheme_childevent_isbase = false;
            Kirigami__Platform__PlatformTheme::childEvent(event);
            return;
        }
        auto childevent_cb = kirigami__platform__platformtheme_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kirigami__platform__platformtheme_customevent_isbase) {
            kirigami__platform__platformtheme_customevent_isbase = false;
            Kirigami__Platform__PlatformTheme::customEvent(event);
            return;
        }
        auto customevent_cb = kirigami__platform__platformtheme_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kirigami__platform__platformtheme_connectnotify_isbase) {
            kirigami__platform__platformtheme_connectnotify_isbase = false;
            Kirigami__Platform__PlatformTheme::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kirigami__platform__platformtheme_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kirigami__platform__platformtheme_disconnectnotify_isbase) {
            kirigami__platform__platformtheme_disconnectnotify_isbase = false;
            Kirigami__Platform__PlatformTheme::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kirigami__platform__platformtheme_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setSupportsIconColoring(bool support) {
        if (kirigami__platform__platformtheme_setsupportsiconcoloring_isbase) {
            kirigami__platform__platformtheme_setsupportsiconcoloring_isbase = false;
            Kirigami__Platform__PlatformTheme::setSupportsIconColoring(support);
            return;
        }
        auto setsupportsiconcoloring_cb = kirigami__platform__platformtheme_setsupportsiconcoloring_callback;
        if (setsupportsiconcoloring_cb) {
            bool cbval1 = support;
            setsupportsiconcoloring_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::setSupportsIconColoring(support);
    }

    // Virtual method for C ABI access and custom callback
    void setTextColor(const QColor& color) {
        if (kirigami__platform__platformtheme_settextcolor_isbase) {
            kirigami__platform__platformtheme_settextcolor_isbase = false;
            Kirigami__Platform__PlatformTheme::setTextColor(color);
            return;
        }
        auto settextcolor_cb = kirigami__platform__platformtheme_settextcolor_callback;
        if (settextcolor_cb) {
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&color_ret);
            settextcolor_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::setTextColor(color);
    }

    // Virtual method for C ABI access and custom callback
    void setDisabledTextColor(const QColor& color) {
        if (kirigami__platform__platformtheme_setdisabledtextcolor_isbase) {
            kirigami__platform__platformtheme_setdisabledtextcolor_isbase = false;
            Kirigami__Platform__PlatformTheme::setDisabledTextColor(color);
            return;
        }
        auto setdisabledtextcolor_cb = kirigami__platform__platformtheme_setdisabledtextcolor_callback;
        if (setdisabledtextcolor_cb) {
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&color_ret);
            setdisabledtextcolor_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::setDisabledTextColor(color);
    }

    // Virtual method for C ABI access and custom callback
    void setHighlightedTextColor(const QColor& color) {
        if (kirigami__platform__platformtheme_sethighlightedtextcolor_isbase) {
            kirigami__platform__platformtheme_sethighlightedtextcolor_isbase = false;
            Kirigami__Platform__PlatformTheme::setHighlightedTextColor(color);
            return;
        }
        auto sethighlightedtextcolor_cb = kirigami__platform__platformtheme_sethighlightedtextcolor_callback;
        if (sethighlightedtextcolor_cb) {
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&color_ret);
            sethighlightedtextcolor_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::setHighlightedTextColor(color);
    }

    // Virtual method for C ABI access and custom callback
    void setActiveTextColor(const QColor& color) {
        if (kirigami__platform__platformtheme_setactivetextcolor_isbase) {
            kirigami__platform__platformtheme_setactivetextcolor_isbase = false;
            Kirigami__Platform__PlatformTheme::setActiveTextColor(color);
            return;
        }
        auto setactivetextcolor_cb = kirigami__platform__platformtheme_setactivetextcolor_callback;
        if (setactivetextcolor_cb) {
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&color_ret);
            setactivetextcolor_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::setActiveTextColor(color);
    }

    // Virtual method for C ABI access and custom callback
    void setLinkColor(const QColor& color) {
        if (kirigami__platform__platformtheme_setlinkcolor_isbase) {
            kirigami__platform__platformtheme_setlinkcolor_isbase = false;
            Kirigami__Platform__PlatformTheme::setLinkColor(color);
            return;
        }
        auto setlinkcolor_cb = kirigami__platform__platformtheme_setlinkcolor_callback;
        if (setlinkcolor_cb) {
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&color_ret);
            setlinkcolor_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::setLinkColor(color);
    }

    // Virtual method for C ABI access and custom callback
    void setVisitedLinkColor(const QColor& color) {
        if (kirigami__platform__platformtheme_setvisitedlinkcolor_isbase) {
            kirigami__platform__platformtheme_setvisitedlinkcolor_isbase = false;
            Kirigami__Platform__PlatformTheme::setVisitedLinkColor(color);
            return;
        }
        auto setvisitedlinkcolor_cb = kirigami__platform__platformtheme_setvisitedlinkcolor_callback;
        if (setvisitedlinkcolor_cb) {
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&color_ret);
            setvisitedlinkcolor_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::setVisitedLinkColor(color);
    }

    // Virtual method for C ABI access and custom callback
    void setNegativeTextColor(const QColor& color) {
        if (kirigami__platform__platformtheme_setnegativetextcolor_isbase) {
            kirigami__platform__platformtheme_setnegativetextcolor_isbase = false;
            Kirigami__Platform__PlatformTheme::setNegativeTextColor(color);
            return;
        }
        auto setnegativetextcolor_cb = kirigami__platform__platformtheme_setnegativetextcolor_callback;
        if (setnegativetextcolor_cb) {
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&color_ret);
            setnegativetextcolor_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::setNegativeTextColor(color);
    }

    // Virtual method for C ABI access and custom callback
    void setNeutralTextColor(const QColor& color) {
        if (kirigami__platform__platformtheme_setneutraltextcolor_isbase) {
            kirigami__platform__platformtheme_setneutraltextcolor_isbase = false;
            Kirigami__Platform__PlatformTheme::setNeutralTextColor(color);
            return;
        }
        auto setneutraltextcolor_cb = kirigami__platform__platformtheme_setneutraltextcolor_callback;
        if (setneutraltextcolor_cb) {
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&color_ret);
            setneutraltextcolor_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::setNeutralTextColor(color);
    }

    // Virtual method for C ABI access and custom callback
    void setPositiveTextColor(const QColor& color) {
        if (kirigami__platform__platformtheme_setpositivetextcolor_isbase) {
            kirigami__platform__platformtheme_setpositivetextcolor_isbase = false;
            Kirigami__Platform__PlatformTheme::setPositiveTextColor(color);
            return;
        }
        auto setpositivetextcolor_cb = kirigami__platform__platformtheme_setpositivetextcolor_callback;
        if (setpositivetextcolor_cb) {
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&color_ret);
            setpositivetextcolor_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::setPositiveTextColor(color);
    }

    // Virtual method for C ABI access and custom callback
    void setBackgroundColor(const QColor& color) {
        if (kirigami__platform__platformtheme_setbackgroundcolor_isbase) {
            kirigami__platform__platformtheme_setbackgroundcolor_isbase = false;
            Kirigami__Platform__PlatformTheme::setBackgroundColor(color);
            return;
        }
        auto setbackgroundcolor_cb = kirigami__platform__platformtheme_setbackgroundcolor_callback;
        if (setbackgroundcolor_cb) {
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&color_ret);
            setbackgroundcolor_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::setBackgroundColor(color);
    }

    // Virtual method for C ABI access and custom callback
    void setAlternateBackgroundColor(const QColor& color) {
        if (kirigami__platform__platformtheme_setalternatebackgroundcolor_isbase) {
            kirigami__platform__platformtheme_setalternatebackgroundcolor_isbase = false;
            Kirigami__Platform__PlatformTheme::setAlternateBackgroundColor(color);
            return;
        }
        auto setalternatebackgroundcolor_cb = kirigami__platform__platformtheme_setalternatebackgroundcolor_callback;
        if (setalternatebackgroundcolor_cb) {
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&color_ret);
            setalternatebackgroundcolor_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::setAlternateBackgroundColor(color);
    }

    // Virtual method for C ABI access and custom callback
    void setHighlightColor(const QColor& color) {
        if (kirigami__platform__platformtheme_sethighlightcolor_isbase) {
            kirigami__platform__platformtheme_sethighlightcolor_isbase = false;
            Kirigami__Platform__PlatformTheme::setHighlightColor(color);
            return;
        }
        auto sethighlightcolor_cb = kirigami__platform__platformtheme_sethighlightcolor_callback;
        if (sethighlightcolor_cb) {
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&color_ret);
            sethighlightcolor_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::setHighlightColor(color);
    }

    // Virtual method for C ABI access and custom callback
    void setActiveBackgroundColor(const QColor& color) {
        if (kirigami__platform__platformtheme_setactivebackgroundcolor_isbase) {
            kirigami__platform__platformtheme_setactivebackgroundcolor_isbase = false;
            Kirigami__Platform__PlatformTheme::setActiveBackgroundColor(color);
            return;
        }
        auto setactivebackgroundcolor_cb = kirigami__platform__platformtheme_setactivebackgroundcolor_callback;
        if (setactivebackgroundcolor_cb) {
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&color_ret);
            setactivebackgroundcolor_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::setActiveBackgroundColor(color);
    }

    // Virtual method for C ABI access and custom callback
    void setLinkBackgroundColor(const QColor& color) {
        if (kirigami__platform__platformtheme_setlinkbackgroundcolor_isbase) {
            kirigami__platform__platformtheme_setlinkbackgroundcolor_isbase = false;
            Kirigami__Platform__PlatformTheme::setLinkBackgroundColor(color);
            return;
        }
        auto setlinkbackgroundcolor_cb = kirigami__platform__platformtheme_setlinkbackgroundcolor_callback;
        if (setlinkbackgroundcolor_cb) {
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&color_ret);
            setlinkbackgroundcolor_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::setLinkBackgroundColor(color);
    }

    // Virtual method for C ABI access and custom callback
    void setVisitedLinkBackgroundColor(const QColor& color) {
        if (kirigami__platform__platformtheme_setvisitedlinkbackgroundcolor_isbase) {
            kirigami__platform__platformtheme_setvisitedlinkbackgroundcolor_isbase = false;
            Kirigami__Platform__PlatformTheme::setVisitedLinkBackgroundColor(color);
            return;
        }
        auto setvisitedlinkbackgroundcolor_cb = kirigami__platform__platformtheme_setvisitedlinkbackgroundcolor_callback;
        if (setvisitedlinkbackgroundcolor_cb) {
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&color_ret);
            setvisitedlinkbackgroundcolor_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::setVisitedLinkBackgroundColor(color);
    }

    // Virtual method for C ABI access and custom callback
    void setNegativeBackgroundColor(const QColor& color) {
        if (kirigami__platform__platformtheme_setnegativebackgroundcolor_isbase) {
            kirigami__platform__platformtheme_setnegativebackgroundcolor_isbase = false;
            Kirigami__Platform__PlatformTheme::setNegativeBackgroundColor(color);
            return;
        }
        auto setnegativebackgroundcolor_cb = kirigami__platform__platformtheme_setnegativebackgroundcolor_callback;
        if (setnegativebackgroundcolor_cb) {
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&color_ret);
            setnegativebackgroundcolor_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::setNegativeBackgroundColor(color);
    }

    // Virtual method for C ABI access and custom callback
    void setNeutralBackgroundColor(const QColor& color) {
        if (kirigami__platform__platformtheme_setneutralbackgroundcolor_isbase) {
            kirigami__platform__platformtheme_setneutralbackgroundcolor_isbase = false;
            Kirigami__Platform__PlatformTheme::setNeutralBackgroundColor(color);
            return;
        }
        auto setneutralbackgroundcolor_cb = kirigami__platform__platformtheme_setneutralbackgroundcolor_callback;
        if (setneutralbackgroundcolor_cb) {
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&color_ret);
            setneutralbackgroundcolor_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::setNeutralBackgroundColor(color);
    }

    // Virtual method for C ABI access and custom callback
    void setPositiveBackgroundColor(const QColor& color) {
        if (kirigami__platform__platformtheme_setpositivebackgroundcolor_isbase) {
            kirigami__platform__platformtheme_setpositivebackgroundcolor_isbase = false;
            Kirigami__Platform__PlatformTheme::setPositiveBackgroundColor(color);
            return;
        }
        auto setpositivebackgroundcolor_cb = kirigami__platform__platformtheme_setpositivebackgroundcolor_callback;
        if (setpositivebackgroundcolor_cb) {
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&color_ret);
            setpositivebackgroundcolor_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::setPositiveBackgroundColor(color);
    }

    // Virtual method for C ABI access and custom callback
    void setFocusColor(const QColor& color) {
        if (kirigami__platform__platformtheme_setfocuscolor_isbase) {
            kirigami__platform__platformtheme_setfocuscolor_isbase = false;
            Kirigami__Platform__PlatformTheme::setFocusColor(color);
            return;
        }
        auto setfocuscolor_cb = kirigami__platform__platformtheme_setfocuscolor_callback;
        if (setfocuscolor_cb) {
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&color_ret);
            setfocuscolor_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::setFocusColor(color);
    }

    // Virtual method for C ABI access and custom callback
    void setHoverColor(const QColor& color) {
        if (kirigami__platform__platformtheme_sethovercolor_isbase) {
            kirigami__platform__platformtheme_sethovercolor_isbase = false;
            Kirigami__Platform__PlatformTheme::setHoverColor(color);
            return;
        }
        auto sethovercolor_cb = kirigami__platform__platformtheme_sethovercolor_callback;
        if (sethovercolor_cb) {
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&color_ret);
            sethovercolor_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::setHoverColor(color);
    }

    // Virtual method for C ABI access and custom callback
    void setDefaultFont(const QFont& defaultFont) {
        if (kirigami__platform__platformtheme_setdefaultfont_isbase) {
            kirigami__platform__platformtheme_setdefaultfont_isbase = false;
            Kirigami__Platform__PlatformTheme::setDefaultFont(defaultFont);
            return;
        }
        auto setdefaultfont_cb = kirigami__platform__platformtheme_setdefaultfont_callback;
        if (setdefaultfont_cb) {
            const QFont& defaultFont_ret = defaultFont;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&defaultFont_ret);
            setdefaultfont_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::setDefaultFont(defaultFont);
    }

    // Virtual method for C ABI access and custom callback
    void setSmallFont(const QFont& smallFont) {
        if (kirigami__platform__platformtheme_setsmallfont_isbase) {
            kirigami__platform__platformtheme_setsmallfont_isbase = false;
            Kirigami__Platform__PlatformTheme::setSmallFont(smallFont);
            return;
        }
        auto setsmallfont_cb = kirigami__platform__platformtheme_setsmallfont_callback;
        if (setsmallfont_cb) {
            const QFont& smallFont_ret = smallFont;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&smallFont_ret);
            setsmallfont_cb(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::setSmallFont(smallFont);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kirigami__platform__platformtheme_sender_isbase) {
            kirigami__platform__platformtheme_sender_isbase = false;
            return Kirigami__Platform__PlatformTheme::sender();
        }
        auto sender_cb = kirigami__platform__platformtheme_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return Kirigami__Platform__PlatformTheme::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kirigami__platform__platformtheme_sendersignalindex_isbase) {
            kirigami__platform__platformtheme_sendersignalindex_isbase = false;
            return Kirigami__Platform__PlatformTheme::senderSignalIndex();
        }
        auto sendersignalindex_cb = kirigami__platform__platformtheme_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return Kirigami__Platform__PlatformTheme::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kirigami__platform__platformtheme_receivers_isbase) {
            kirigami__platform__platformtheme_receivers_isbase = false;
            return Kirigami__Platform__PlatformTheme::receivers(signal);
        }
        auto receivers_cb = kirigami__platform__platformtheme_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return Kirigami__Platform__PlatformTheme::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kirigami__platform__platformtheme_issignalconnected_isbase) {
            kirigami__platform__platformtheme_issignalconnected_isbase = false;
            return Kirigami__Platform__PlatformTheme::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kirigami__platform__platformtheme_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return Kirigami__Platform__PlatformTheme::isSignalConnected(signal);
    }

    // Friend functions
    friend bool Kirigami__Platform__PlatformTheme_Event(Kirigami::Platform::PlatformTheme* self, QEvent* event);
    friend bool Kirigami__Platform__PlatformTheme_SuperEvent(Kirigami::Platform::PlatformTheme* self, QEvent* event);
    friend void Kirigami__Platform__PlatformTheme_TimerEvent(Kirigami::Platform::PlatformTheme* self, QTimerEvent* event);
    friend void Kirigami__Platform__PlatformTheme_SuperTimerEvent(Kirigami::Platform::PlatformTheme* self, QTimerEvent* event);
    friend void Kirigami__Platform__PlatformTheme_ChildEvent(Kirigami::Platform::PlatformTheme* self, QChildEvent* event);
    friend void Kirigami__Platform__PlatformTheme_SuperChildEvent(Kirigami::Platform::PlatformTheme* self, QChildEvent* event);
    friend void Kirigami__Platform__PlatformTheme_CustomEvent(Kirigami::Platform::PlatformTheme* self, QEvent* event);
    friend void Kirigami__Platform__PlatformTheme_SuperCustomEvent(Kirigami::Platform::PlatformTheme* self, QEvent* event);
    friend void Kirigami__Platform__PlatformTheme_ConnectNotify(Kirigami::Platform::PlatformTheme* self, const QMetaMethod* signal);
    friend void Kirigami__Platform__PlatformTheme_SuperConnectNotify(Kirigami::Platform::PlatformTheme* self, const QMetaMethod* signal);
    friend void Kirigami__Platform__PlatformTheme_DisconnectNotify(Kirigami::Platform::PlatformTheme* self, const QMetaMethod* signal);
    friend void Kirigami__Platform__PlatformTheme_SuperDisconnectNotify(Kirigami::Platform::PlatformTheme* self, const QMetaMethod* signal);
    friend void Kirigami__Platform__PlatformTheme_SetSupportsIconColoring(Kirigami::Platform::PlatformTheme* self, bool support);
    friend void Kirigami__Platform__PlatformTheme_SuperSetSupportsIconColoring(Kirigami::Platform::PlatformTheme* self, bool support);
    friend void Kirigami__Platform__PlatformTheme_SetTextColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SuperSetTextColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SetDisabledTextColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SuperSetDisabledTextColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SetHighlightedTextColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SuperSetHighlightedTextColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SetActiveTextColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SuperSetActiveTextColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SetLinkColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SuperSetLinkColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SetVisitedLinkColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SuperSetVisitedLinkColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SetNegativeTextColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SuperSetNegativeTextColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SetNeutralTextColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SuperSetNeutralTextColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SetPositiveTextColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SuperSetPositiveTextColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SetBackgroundColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SuperSetBackgroundColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SetAlternateBackgroundColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SuperSetAlternateBackgroundColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SetHighlightColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SuperSetHighlightColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SetActiveBackgroundColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SuperSetActiveBackgroundColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SetLinkBackgroundColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SuperSetLinkBackgroundColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SetVisitedLinkBackgroundColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SuperSetVisitedLinkBackgroundColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SetNegativeBackgroundColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SuperSetNegativeBackgroundColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SetNeutralBackgroundColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SuperSetNeutralBackgroundColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SetPositiveBackgroundColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SuperSetPositiveBackgroundColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SetFocusColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SuperSetFocusColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SetHoverColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SuperSetHoverColor(Kirigami::Platform::PlatformTheme* self, const QColor* color);
    friend void Kirigami__Platform__PlatformTheme_SetDefaultFont(Kirigami::Platform::PlatformTheme* self, const QFont* defaultFont);
    friend void Kirigami__Platform__PlatformTheme_SuperSetDefaultFont(Kirigami::Platform::PlatformTheme* self, const QFont* defaultFont);
    friend void Kirigami__Platform__PlatformTheme_SetSmallFont(Kirigami::Platform::PlatformTheme* self, const QFont* smallFont);
    friend void Kirigami__Platform__PlatformTheme_SuperSetSmallFont(Kirigami::Platform::PlatformTheme* self, const QFont* smallFont);
    friend QObject* Kirigami__Platform__PlatformTheme_Sender(const Kirigami::Platform::PlatformTheme* self);
    friend QObject* Kirigami__Platform__PlatformTheme_SuperSender(const Kirigami::Platform::PlatformTheme* self);
    friend int Kirigami__Platform__PlatformTheme_SenderSignalIndex(const Kirigami::Platform::PlatformTheme* self);
    friend int Kirigami__Platform__PlatformTheme_SuperSenderSignalIndex(const Kirigami::Platform::PlatformTheme* self);
    friend int Kirigami__Platform__PlatformTheme_Receivers(const Kirigami::Platform::PlatformTheme* self, const char* signal);
    friend int Kirigami__Platform__PlatformTheme_SuperReceivers(const Kirigami::Platform::PlatformTheme* self, const char* signal);
    friend bool Kirigami__Platform__PlatformTheme_IsSignalConnected(const Kirigami::Platform::PlatformTheme* self, const QMetaMethod* signal);
    friend bool Kirigami__Platform__PlatformTheme_SuperIsSignalConnected(const Kirigami::Platform::PlatformTheme* self, const QMetaMethod* signal);
};

#endif
