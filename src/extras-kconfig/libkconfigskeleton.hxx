#pragma once
#ifndef EXTRAS_KCONFIG_LIBKCONFIGSKELETON_HXX
#define EXTRAS_KCONFIG_LIBKCONFIGSKELETON_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KConfigSkeleton
class VirtualKConfigSkeleton final : public KConfigSkeleton {
  public:
    // Virtual class public types (including callbacks and access types)
    using KConfigSkeleton_MetaObject_Callback = QMetaObject* (*)(const KConfigSkeleton*);
    using KConfigSkeleton_Metacast_Callback = void* (*)(KConfigSkeleton*, const char*);
    using KConfigSkeleton_Metacall_Callback = int (*)(KConfigSkeleton*, int, int, void**);
    using KConfigSkeleton_SetDefaults_Callback = void (*)(KConfigSkeleton*);
    using KConfigSkeleton_UseDefaults_Callback = bool (*)(KConfigSkeleton*, bool);
    using KConfigSkeleton_UsrUseDefaults_Callback = bool (*)(KConfigSkeleton*, bool);
    using KConfigSkeleton_UsrSetDefaults_Callback = void (*)(KConfigSkeleton*);
    using KConfigSkeleton_UsrRead_Callback = void (*)(KConfigSkeleton*);
    using KConfigSkeleton_UsrSave_Callback = bool (*)(KConfigSkeleton*);
    using KConfigSkeleton_Event_Callback = bool (*)(KConfigSkeleton*, QEvent*);
    using KConfigSkeleton_EventFilter_Callback = bool (*)(KConfigSkeleton*, QObject*, QEvent*);
    using KConfigSkeleton_TimerEvent_Callback = void (*)(KConfigSkeleton*, QTimerEvent*);
    using KConfigSkeleton_ChildEvent_Callback = void (*)(KConfigSkeleton*, QChildEvent*);
    using KConfigSkeleton_CustomEvent_Callback = void (*)(KConfigSkeleton*, QEvent*);
    using KConfigSkeleton_ConnectNotify_Callback = void (*)(KConfigSkeleton*, QMetaMethod*);
    using KConfigSkeleton_DisconnectNotify_Callback = void (*)(KConfigSkeleton*, QMetaMethod*);
    using KConfigSkeleton::isSignalConnected;
    using KConfigSkeleton::receivers;
    using KConfigSkeleton::sender;
    using KConfigSkeleton::senderSignalIndex;

    // Instance callback storage
    KConfigSkeleton_MetaObject_Callback kconfigskeleton_metaobject_callback = nullptr;
    KConfigSkeleton_Metacast_Callback kconfigskeleton_metacast_callback = nullptr;
    KConfigSkeleton_Metacall_Callback kconfigskeleton_metacall_callback = nullptr;
    KConfigSkeleton_SetDefaults_Callback kconfigskeleton_setdefaults_callback = nullptr;
    KConfigSkeleton_UseDefaults_Callback kconfigskeleton_usedefaults_callback = nullptr;
    KConfigSkeleton_UsrUseDefaults_Callback kconfigskeleton_usrusedefaults_callback = nullptr;
    KConfigSkeleton_UsrSetDefaults_Callback kconfigskeleton_usrsetdefaults_callback = nullptr;
    KConfigSkeleton_UsrRead_Callback kconfigskeleton_usrread_callback = nullptr;
    KConfigSkeleton_UsrSave_Callback kconfigskeleton_usrsave_callback = nullptr;
    KConfigSkeleton_Event_Callback kconfigskeleton_event_callback = nullptr;
    KConfigSkeleton_EventFilter_Callback kconfigskeleton_eventfilter_callback = nullptr;
    KConfigSkeleton_TimerEvent_Callback kconfigskeleton_timerevent_callback = nullptr;
    KConfigSkeleton_ChildEvent_Callback kconfigskeleton_childevent_callback = nullptr;
    KConfigSkeleton_CustomEvent_Callback kconfigskeleton_customevent_callback = nullptr;
    KConfigSkeleton_ConnectNotify_Callback kconfigskeleton_connectnotify_callback = nullptr;
    KConfigSkeleton_DisconnectNotify_Callback kconfigskeleton_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KConfigSkeleton {
        using KConfigSkeleton::childEvent;
        using KConfigSkeleton::connectNotify;
        using KConfigSkeleton::customEvent;
        using KConfigSkeleton::disconnectNotify;
        using KConfigSkeleton::timerEvent;
        using KConfigSkeleton::usrRead;
        using KConfigSkeleton::usrSave;
        using KConfigSkeleton::usrSetDefaults;
        using KConfigSkeleton::usrUseDefaults;
    };

    VirtualKConfigSkeleton() : KConfigSkeleton() {};
    VirtualKConfigSkeleton(const QString& configname) : KConfigSkeleton(configname) {};
    VirtualKConfigSkeleton(const QString& configname, QObject* parent) : KConfigSkeleton(configname, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kconfigskeleton_metaobject_callback) {
            QMetaObject* callback_ret = kconfigskeleton_metaobject_callback(this);
            return callback_ret;
        }
        return KConfigSkeleton::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kconfigskeleton_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kconfigskeleton_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KConfigSkeleton::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kconfigskeleton_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kconfigskeleton_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KConfigSkeleton::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDefaults() override {
        if (kconfigskeleton_setdefaults_callback) {
            kconfigskeleton_setdefaults_callback(this);
            return;
        }
        KConfigSkeleton::setDefaults();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool useDefaults(bool b) override {
        if (kconfigskeleton_usedefaults_callback) {
            bool cbval1 = b;
            bool callback_ret = kconfigskeleton_usedefaults_callback(this, cbval1);
            return callback_ret;
        }
        return KConfigSkeleton::useDefaults(b);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool usrUseDefaults(bool b) override {
        if (kconfigskeleton_usrusedefaults_callback) {
            bool cbval1 = b;
            bool callback_ret = kconfigskeleton_usrusedefaults_callback(this, cbval1);
            return callback_ret;
        }
        return KConfigSkeleton::usrUseDefaults(b);
    }

    // Virtual method for C ABI access and custom callback
    virtual void usrSetDefaults() override {
        if (kconfigskeleton_usrsetdefaults_callback) {
            kconfigskeleton_usrsetdefaults_callback(this);
            return;
        }
        KConfigSkeleton::usrSetDefaults();
    }

    // Virtual method for C ABI access and custom callback
    virtual void usrRead() override {
        if (kconfigskeleton_usrread_callback) {
            kconfigskeleton_usrread_callback(this);
            return;
        }
        KConfigSkeleton::usrRead();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool usrSave() override {
        if (kconfigskeleton_usrsave_callback) {
            bool callback_ret = kconfigskeleton_usrsave_callback(this);
            return callback_ret;
        }
        return KConfigSkeleton::usrSave();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kconfigskeleton_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kconfigskeleton_event_callback(this, cbval1);
            return callback_ret;
        }
        return KConfigSkeleton::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kconfigskeleton_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kconfigskeleton_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KConfigSkeleton::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kconfigskeleton_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kconfigskeleton_timerevent_callback(this, cbval1);
            return;
        }
        KConfigSkeleton::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kconfigskeleton_childevent_callback) {
            QChildEvent* cbval1 = event;
            kconfigskeleton_childevent_callback(this, cbval1);
            return;
        }
        KConfigSkeleton::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kconfigskeleton_customevent_callback) {
            QEvent* cbval1 = event;
            kconfigskeleton_customevent_callback(this, cbval1);
            return;
        }
        KConfigSkeleton::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kconfigskeleton_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kconfigskeleton_connectnotify_callback(this, cbval1);
            return;
        }
        KConfigSkeleton::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kconfigskeleton_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kconfigskeleton_disconnectnotify_callback(this, cbval1);
            return;
        }
        KConfigSkeleton::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KConfigSkeleton_SuperUsrUseDefaults(KConfigSkeleton* self, bool b);
    friend void KConfigSkeleton_SuperUsrSetDefaults(KConfigSkeleton* self);
    friend void KConfigSkeleton_SuperUsrRead(KConfigSkeleton* self);
    friend bool KConfigSkeleton_SuperUsrSave(KConfigSkeleton* self);
    friend void KConfigSkeleton_SuperTimerEvent(KConfigSkeleton* self, QTimerEvent* event);
    friend void KConfigSkeleton_SuperChildEvent(KConfigSkeleton* self, QChildEvent* event);
    friend void KConfigSkeleton_SuperCustomEvent(KConfigSkeleton* self, QEvent* event);
    friend void KConfigSkeleton_SuperConnectNotify(KConfigSkeleton* self, const QMetaMethod* signal);
    friend void KConfigSkeleton_SuperDisconnectNotify(KConfigSkeleton* self, const QMetaMethod* signal);
};

// This class is a subclass of KConfigSkeleton::ItemColor
class VirtualKConfigSkeletonItemColor final : public KConfigSkeleton::ItemColor {
  public:
    // Virtual class public types (including callbacks and access types)
    using KConfigSkeleton__ItemColor_ReadConfig_Callback = void (*)(KConfigSkeleton__ItemColor*, KConfig*);
    using KConfigSkeleton__ItemColor_SetProperty_Callback = void (*)(KConfigSkeleton__ItemColor*, QVariant*);
    using KConfigSkeleton__ItemColor_IsEqual_Callback = bool (*)(const KConfigSkeleton__ItemColor*, QVariant*);
    using KConfigSkeleton__ItemColor_Property_Callback = QVariant* (*)(const KConfigSkeleton__ItemColor*);

    // Instance callback storage
    KConfigSkeleton__ItemColor_ReadConfig_Callback kconfigskeleton__itemcolor_readconfig_callback = nullptr;
    KConfigSkeleton__ItemColor_SetProperty_Callback kconfigskeleton__itemcolor_setproperty_callback = nullptr;
    KConfigSkeleton__ItemColor_IsEqual_Callback kconfigskeleton__itemcolor_isequal_callback = nullptr;
    KConfigSkeleton__ItemColor_Property_Callback kconfigskeleton__itemcolor_property_callback = nullptr;

    VirtualKConfigSkeletonItemColor(const QString& _group, const QString& _key, QColor& reference) : KConfigSkeleton::ItemColor(_group, _key, reference) {};
    VirtualKConfigSkeletonItemColor(const QString& _group, const QString& _key, QColor& reference, const QColor& defaultValue) : KConfigSkeleton::ItemColor(_group, _key, reference, defaultValue) {};

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kconfigskeleton__itemcolor_readconfig_callback) {
            KConfig* cbval1 = config;
            kconfigskeleton__itemcolor_readconfig_callback(this, cbval1);
            return;
        }
        KConfigSkeleton__ItemColor::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kconfigskeleton__itemcolor_setproperty_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            kconfigskeleton__itemcolor_setproperty_callback(this, cbval1);
            return;
        }
        KConfigSkeleton__ItemColor::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kconfigskeleton__itemcolor_isequal_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            bool callback_ret = kconfigskeleton__itemcolor_isequal_callback(this, cbval1);
            return callback_ret;
        }
        return KConfigSkeleton__ItemColor::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kconfigskeleton__itemcolor_property_callback) {
            QVariant* callback_ret = kconfigskeleton__itemcolor_property_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KConfigSkeleton__ItemColor::property();
    }
};

// This class is a subclass of KConfigSkeleton::ItemFont
class VirtualKConfigSkeletonItemFont final : public KConfigSkeleton::ItemFont {
  public:
    // Virtual class public types (including callbacks and access types)
    using KConfigSkeleton__ItemFont_ReadConfig_Callback = void (*)(KConfigSkeleton__ItemFont*, KConfig*);
    using KConfigSkeleton__ItemFont_SetProperty_Callback = void (*)(KConfigSkeleton__ItemFont*, QVariant*);
    using KConfigSkeleton__ItemFont_IsEqual_Callback = bool (*)(const KConfigSkeleton__ItemFont*, QVariant*);
    using KConfigSkeleton__ItemFont_Property_Callback = QVariant* (*)(const KConfigSkeleton__ItemFont*);

    // Instance callback storage
    KConfigSkeleton__ItemFont_ReadConfig_Callback kconfigskeleton__itemfont_readconfig_callback = nullptr;
    KConfigSkeleton__ItemFont_SetProperty_Callback kconfigskeleton__itemfont_setproperty_callback = nullptr;
    KConfigSkeleton__ItemFont_IsEqual_Callback kconfigskeleton__itemfont_isequal_callback = nullptr;
    KConfigSkeleton__ItemFont_Property_Callback kconfigskeleton__itemfont_property_callback = nullptr;

    VirtualKConfigSkeletonItemFont(const QString& _group, const QString& _key, QFont& reference) : KConfigSkeleton::ItemFont(_group, _key, reference) {};
    VirtualKConfigSkeletonItemFont(const QString& _group, const QString& _key, QFont& reference, const QFont& defaultValue) : KConfigSkeleton::ItemFont(_group, _key, reference, defaultValue) {};

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kconfigskeleton__itemfont_readconfig_callback) {
            KConfig* cbval1 = config;
            kconfigskeleton__itemfont_readconfig_callback(this, cbval1);
            return;
        }
        KConfigSkeleton__ItemFont::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kconfigskeleton__itemfont_setproperty_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            kconfigskeleton__itemfont_setproperty_callback(this, cbval1);
            return;
        }
        KConfigSkeleton__ItemFont::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kconfigskeleton__itemfont_isequal_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            bool callback_ret = kconfigskeleton__itemfont_isequal_callback(this, cbval1);
            return callback_ret;
        }
        return KConfigSkeleton__ItemFont::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kconfigskeleton__itemfont_property_callback) {
            QVariant* callback_ret = kconfigskeleton__itemfont_property_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KConfigSkeleton__ItemFont::property();
    }
};

#endif
