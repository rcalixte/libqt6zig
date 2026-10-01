#pragma once
#ifndef EXTRAS_KCONFIG_LIBKCORECONFIGSKELETON_HXX
#define EXTRAS_KCONFIG_LIBKCORECONFIGSKELETON_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KConfigSkeletonItem
class VirtualKConfigSkeletonItem : public KConfigSkeletonItem {
  public:
    // Virtual class public types (including callbacks and access types)
    using KConfigSkeletonItem_ReadConfig_Callback = void (*)(KConfigSkeletonItem*, KConfig*);
    using KConfigSkeletonItem_WriteConfig_Callback = void (*)(KConfigSkeletonItem*, KConfig*);
    using KConfigSkeletonItem_ReadDefault_Callback = void (*)(KConfigSkeletonItem*, KConfig*);
    using KConfigSkeletonItem_SetProperty_Callback = void (*)(KConfigSkeletonItem*, QVariant*);
    using KConfigSkeletonItem_IsEqual_Callback = bool (*)(const KConfigSkeletonItem*, QVariant*);
    using KConfigSkeletonItem_Property_Callback = QVariant* (*)(const KConfigSkeletonItem*);
    using KConfigSkeletonItem_MinValue_Callback = QVariant* (*)(const KConfigSkeletonItem*);
    using KConfigSkeletonItem_MaxValue_Callback = QVariant* (*)(const KConfigSkeletonItem*);
    using KConfigSkeletonItem_SetDefault_Callback = void (*)(KConfigSkeletonItem*);
    using KConfigSkeletonItem_SwapDefault_Callback = void (*)(KConfigSkeletonItem*);
    using KConfigSkeletonItem::readImmutability;

    // Instance callback storage
    KConfigSkeletonItem_ReadConfig_Callback kconfigskeletonitem_readconfig_callback = nullptr;
    KConfigSkeletonItem_WriteConfig_Callback kconfigskeletonitem_writeconfig_callback = nullptr;
    KConfigSkeletonItem_ReadDefault_Callback kconfigskeletonitem_readdefault_callback = nullptr;
    KConfigSkeletonItem_SetProperty_Callback kconfigskeletonitem_setproperty_callback = nullptr;
    KConfigSkeletonItem_IsEqual_Callback kconfigskeletonitem_isequal_callback = nullptr;
    KConfigSkeletonItem_Property_Callback kconfigskeletonitem_property_callback = nullptr;
    KConfigSkeletonItem_MinValue_Callback kconfigskeletonitem_minvalue_callback = nullptr;
    KConfigSkeletonItem_MaxValue_Callback kconfigskeletonitem_maxvalue_callback = nullptr;
    KConfigSkeletonItem_SetDefault_Callback kconfigskeletonitem_setdefault_callback = nullptr;
    KConfigSkeletonItem_SwapDefault_Callback kconfigskeletonitem_swapdefault_callback = nullptr;

    VirtualKConfigSkeletonItem(const QString& _group, const QString& _key) : KConfigSkeletonItem(_group, _key) {};
    VirtualKConfigSkeletonItem(const KConfigSkeletonItem& param1) : KConfigSkeletonItem(param1) {};

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* param1) override {
        if (kconfigskeletonitem_readconfig_callback) {
            KConfig* cbval1 = param1;
            kconfigskeletonitem_readconfig_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KConfigSkeletonItem::readConfig called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void writeConfig(KConfig* param1) override {
        if (kconfigskeletonitem_writeconfig_callback) {
            KConfig* cbval1 = param1;
            kconfigskeletonitem_writeconfig_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KConfigSkeletonItem::writeConfig called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void readDefault(KConfig* param1) override {
        if (kconfigskeletonitem_readdefault_callback) {
            KConfig* cbval1 = param1;
            kconfigskeletonitem_readdefault_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KConfigSkeletonItem::readDefault called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kconfigskeletonitem_setproperty_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            kconfigskeletonitem_setproperty_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KConfigSkeletonItem::setProperty called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kconfigskeletonitem_isequal_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            bool callback_ret = kconfigskeletonitem_isequal_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KConfigSkeletonItem::isEqual called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kconfigskeletonitem_property_callback) {
            QVariant* callback_ret = kconfigskeletonitem_property_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KConfigSkeletonItem::property called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant minValue() const override {
        if (kconfigskeletonitem_minvalue_callback) {
            QVariant* callback_ret = kconfigskeletonitem_minvalue_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KConfigSkeletonItem::minValue();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant maxValue() const override {
        if (kconfigskeletonitem_maxvalue_callback) {
            QVariant* callback_ret = kconfigskeletonitem_maxvalue_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KConfigSkeletonItem::maxValue();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDefault() override {
        if (kconfigskeletonitem_setdefault_callback) {
            kconfigskeletonitem_setdefault_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KConfigSkeletonItem::setDefault called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void swapDefault() override {
        if (kconfigskeletonitem_swapdefault_callback) {
            kconfigskeletonitem_swapdefault_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KConfigSkeletonItem::swapDefault called without being implemented");
    }
};

// This class is a subclass of KPropertySkeletonItem
class VirtualKPropertySkeletonItem final : public KPropertySkeletonItem {
  public:
    // Virtual class public types (including callbacks and access types)
    using KPropertySkeletonItem_Property_Callback = QVariant* (*)(const KPropertySkeletonItem*);
    using KPropertySkeletonItem_SetProperty_Callback = void (*)(KPropertySkeletonItem*, QVariant*);
    using KPropertySkeletonItem_IsEqual_Callback = bool (*)(const KPropertySkeletonItem*, QVariant*);
    using KPropertySkeletonItem_ReadConfig_Callback = void (*)(KPropertySkeletonItem*, KConfig*);
    using KPropertySkeletonItem_WriteConfig_Callback = void (*)(KPropertySkeletonItem*, KConfig*);
    using KPropertySkeletonItem_ReadDefault_Callback = void (*)(KPropertySkeletonItem*, KConfig*);
    using KPropertySkeletonItem_SetDefault_Callback = void (*)(KPropertySkeletonItem*);
    using KPropertySkeletonItem_SwapDefault_Callback = void (*)(KPropertySkeletonItem*);
    using KPropertySkeletonItem_MinValue_Callback = QVariant* (*)(const KPropertySkeletonItem*);
    using KPropertySkeletonItem_MaxValue_Callback = QVariant* (*)(const KPropertySkeletonItem*);
    using KPropertySkeletonItem::readImmutability;

    // Instance callback storage
    KPropertySkeletonItem_Property_Callback kpropertyskeletonitem_property_callback = nullptr;
    KPropertySkeletonItem_SetProperty_Callback kpropertyskeletonitem_setproperty_callback = nullptr;
    KPropertySkeletonItem_IsEqual_Callback kpropertyskeletonitem_isequal_callback = nullptr;
    KPropertySkeletonItem_ReadConfig_Callback kpropertyskeletonitem_readconfig_callback = nullptr;
    KPropertySkeletonItem_WriteConfig_Callback kpropertyskeletonitem_writeconfig_callback = nullptr;
    KPropertySkeletonItem_ReadDefault_Callback kpropertyskeletonitem_readdefault_callback = nullptr;
    KPropertySkeletonItem_SetDefault_Callback kpropertyskeletonitem_setdefault_callback = nullptr;
    KPropertySkeletonItem_SwapDefault_Callback kpropertyskeletonitem_swapdefault_callback = nullptr;
    KPropertySkeletonItem_MinValue_Callback kpropertyskeletonitem_minvalue_callback = nullptr;
    KPropertySkeletonItem_MaxValue_Callback kpropertyskeletonitem_maxvalue_callback = nullptr;

    VirtualKPropertySkeletonItem(QObject* object, const QByteArray& propertyName, const QVariant& defaultValue) : KPropertySkeletonItem(object, propertyName, defaultValue) {};
    VirtualKPropertySkeletonItem(const KPropertySkeletonItem& param1) : KPropertySkeletonItem(param1) {};

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kpropertyskeletonitem_property_callback) {
            QVariant* callback_ret = kpropertyskeletonitem_property_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPropertySkeletonItem::property();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kpropertyskeletonitem_setproperty_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            kpropertyskeletonitem_setproperty_callback(this, cbval1);
            return;
        }
        KPropertySkeletonItem::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kpropertyskeletonitem_isequal_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            bool callback_ret = kpropertyskeletonitem_isequal_callback(this, cbval1);
            return callback_ret;
        }
        return KPropertySkeletonItem::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* param1) override {
        if (kpropertyskeletonitem_readconfig_callback) {
            KConfig* cbval1 = param1;
            kpropertyskeletonitem_readconfig_callback(this, cbval1);
            return;
        }
        KPropertySkeletonItem::readConfig(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void writeConfig(KConfig* param1) override {
        if (kpropertyskeletonitem_writeconfig_callback) {
            KConfig* cbval1 = param1;
            kpropertyskeletonitem_writeconfig_callback(this, cbval1);
            return;
        }
        KPropertySkeletonItem::writeConfig(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void readDefault(KConfig* param1) override {
        if (kpropertyskeletonitem_readdefault_callback) {
            KConfig* cbval1 = param1;
            kpropertyskeletonitem_readdefault_callback(this, cbval1);
            return;
        }
        KPropertySkeletonItem::readDefault(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDefault() override {
        if (kpropertyskeletonitem_setdefault_callback) {
            kpropertyskeletonitem_setdefault_callback(this);
            return;
        }
        KPropertySkeletonItem::setDefault();
    }

    // Virtual method for C ABI access and custom callback
    virtual void swapDefault() override {
        if (kpropertyskeletonitem_swapdefault_callback) {
            kpropertyskeletonitem_swapdefault_callback(this);
            return;
        }
        KPropertySkeletonItem::swapDefault();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant minValue() const override {
        if (kpropertyskeletonitem_minvalue_callback) {
            QVariant* callback_ret = kpropertyskeletonitem_minvalue_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPropertySkeletonItem::minValue();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant maxValue() const override {
        if (kpropertyskeletonitem_maxvalue_callback) {
            QVariant* callback_ret = kpropertyskeletonitem_maxvalue_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPropertySkeletonItem::maxValue();
    }
};

// This class is a subclass of KCoreConfigSkeleton
class VirtualKCoreConfigSkeleton final : public KCoreConfigSkeleton {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCoreConfigSkeleton_MetaObject_Callback = QMetaObject* (*)(const KCoreConfigSkeleton*);
    using KCoreConfigSkeleton_Metacast_Callback = void* (*)(KCoreConfigSkeleton*, const char*);
    using KCoreConfigSkeleton_Metacall_Callback = int (*)(KCoreConfigSkeleton*, int, int, void**);
    using KCoreConfigSkeleton_SetDefaults_Callback = void (*)(KCoreConfigSkeleton*);
    using KCoreConfigSkeleton_UseDefaults_Callback = bool (*)(KCoreConfigSkeleton*, bool);
    using KCoreConfigSkeleton_UsrUseDefaults_Callback = bool (*)(KCoreConfigSkeleton*, bool);
    using KCoreConfigSkeleton_UsrSetDefaults_Callback = void (*)(KCoreConfigSkeleton*);
    using KCoreConfigSkeleton_UsrRead_Callback = void (*)(KCoreConfigSkeleton*);
    using KCoreConfigSkeleton_UsrSave_Callback = bool (*)(KCoreConfigSkeleton*);
    using KCoreConfigSkeleton_Event_Callback = bool (*)(KCoreConfigSkeleton*, QEvent*);
    using KCoreConfigSkeleton_EventFilter_Callback = bool (*)(KCoreConfigSkeleton*, QObject*, QEvent*);
    using KCoreConfigSkeleton_TimerEvent_Callback = void (*)(KCoreConfigSkeleton*, QTimerEvent*);
    using KCoreConfigSkeleton_ChildEvent_Callback = void (*)(KCoreConfigSkeleton*, QChildEvent*);
    using KCoreConfigSkeleton_CustomEvent_Callback = void (*)(KCoreConfigSkeleton*, QEvent*);
    using KCoreConfigSkeleton_ConnectNotify_Callback = void (*)(KCoreConfigSkeleton*, QMetaMethod*);
    using KCoreConfigSkeleton_DisconnectNotify_Callback = void (*)(KCoreConfigSkeleton*, QMetaMethod*);
    using KCoreConfigSkeleton::isSignalConnected;
    using KCoreConfigSkeleton::receivers;
    using KCoreConfigSkeleton::sender;
    using KCoreConfigSkeleton::senderSignalIndex;

    // Instance callback storage
    KCoreConfigSkeleton_MetaObject_Callback kcoreconfigskeleton_metaobject_callback = nullptr;
    KCoreConfigSkeleton_Metacast_Callback kcoreconfigskeleton_metacast_callback = nullptr;
    KCoreConfigSkeleton_Metacall_Callback kcoreconfigskeleton_metacall_callback = nullptr;
    KCoreConfigSkeleton_SetDefaults_Callback kcoreconfigskeleton_setdefaults_callback = nullptr;
    KCoreConfigSkeleton_UseDefaults_Callback kcoreconfigskeleton_usedefaults_callback = nullptr;
    KCoreConfigSkeleton_UsrUseDefaults_Callback kcoreconfigskeleton_usrusedefaults_callback = nullptr;
    KCoreConfigSkeleton_UsrSetDefaults_Callback kcoreconfigskeleton_usrsetdefaults_callback = nullptr;
    KCoreConfigSkeleton_UsrRead_Callback kcoreconfigskeleton_usrread_callback = nullptr;
    KCoreConfigSkeleton_UsrSave_Callback kcoreconfigskeleton_usrsave_callback = nullptr;
    KCoreConfigSkeleton_Event_Callback kcoreconfigskeleton_event_callback = nullptr;
    KCoreConfigSkeleton_EventFilter_Callback kcoreconfigskeleton_eventfilter_callback = nullptr;
    KCoreConfigSkeleton_TimerEvent_Callback kcoreconfigskeleton_timerevent_callback = nullptr;
    KCoreConfigSkeleton_ChildEvent_Callback kcoreconfigskeleton_childevent_callback = nullptr;
    KCoreConfigSkeleton_CustomEvent_Callback kcoreconfigskeleton_customevent_callback = nullptr;
    KCoreConfigSkeleton_ConnectNotify_Callback kcoreconfigskeleton_connectnotify_callback = nullptr;
    KCoreConfigSkeleton_DisconnectNotify_Callback kcoreconfigskeleton_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KCoreConfigSkeleton {
        using KCoreConfigSkeleton::childEvent;
        using KCoreConfigSkeleton::connectNotify;
        using KCoreConfigSkeleton::customEvent;
        using KCoreConfigSkeleton::disconnectNotify;
        using KCoreConfigSkeleton::timerEvent;
        using KCoreConfigSkeleton::usrRead;
        using KCoreConfigSkeleton::usrSave;
        using KCoreConfigSkeleton::usrSetDefaults;
        using KCoreConfigSkeleton::usrUseDefaults;
    };

    VirtualKCoreConfigSkeleton() : KCoreConfigSkeleton() {};
    VirtualKCoreConfigSkeleton(const QString& configname) : KCoreConfigSkeleton(configname) {};
    VirtualKCoreConfigSkeleton(const QString& configname, QObject* parent) : KCoreConfigSkeleton(configname, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcoreconfigskeleton_metaobject_callback) {
            QMetaObject* callback_ret = kcoreconfigskeleton_metaobject_callback(this);
            return callback_ret;
        }
        return KCoreConfigSkeleton::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcoreconfigskeleton_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kcoreconfigskeleton_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcoreconfigskeleton_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kcoreconfigskeleton_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KCoreConfigSkeleton::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDefaults() override {
        if (kcoreconfigskeleton_setdefaults_callback) {
            kcoreconfigskeleton_setdefaults_callback(this);
            return;
        }
        KCoreConfigSkeleton::setDefaults();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool useDefaults(bool b) override {
        if (kcoreconfigskeleton_usedefaults_callback) {
            bool cbval1 = b;
            bool callback_ret = kcoreconfigskeleton_usedefaults_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton::useDefaults(b);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool usrUseDefaults(bool b) override {
        if (kcoreconfigskeleton_usrusedefaults_callback) {
            bool cbval1 = b;
            bool callback_ret = kcoreconfigskeleton_usrusedefaults_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton::usrUseDefaults(b);
    }

    // Virtual method for C ABI access and custom callback
    virtual void usrSetDefaults() override {
        if (kcoreconfigskeleton_usrsetdefaults_callback) {
            kcoreconfigskeleton_usrsetdefaults_callback(this);
            return;
        }
        KCoreConfigSkeleton::usrSetDefaults();
    }

    // Virtual method for C ABI access and custom callback
    virtual void usrRead() override {
        if (kcoreconfigskeleton_usrread_callback) {
            kcoreconfigskeleton_usrread_callback(this);
            return;
        }
        KCoreConfigSkeleton::usrRead();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool usrSave() override {
        if (kcoreconfigskeleton_usrsave_callback) {
            bool callback_ret = kcoreconfigskeleton_usrsave_callback(this);
            return callback_ret;
        }
        return KCoreConfigSkeleton::usrSave();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcoreconfigskeleton_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kcoreconfigskeleton_event_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcoreconfigskeleton_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kcoreconfigskeleton_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCoreConfigSkeleton::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcoreconfigskeleton_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kcoreconfigskeleton_timerevent_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcoreconfigskeleton_childevent_callback) {
            QChildEvent* cbval1 = event;
            kcoreconfigskeleton_childevent_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcoreconfigskeleton_customevent_callback) {
            QEvent* cbval1 = event;
            kcoreconfigskeleton_customevent_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcoreconfigskeleton_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcoreconfigskeleton_connectnotify_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcoreconfigskeleton_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcoreconfigskeleton_disconnectnotify_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KCoreConfigSkeleton_SuperUsrUseDefaults(KCoreConfigSkeleton* self, bool b);
    friend void KCoreConfigSkeleton_SuperUsrSetDefaults(KCoreConfigSkeleton* self);
    friend void KCoreConfigSkeleton_SuperUsrRead(KCoreConfigSkeleton* self);
    friend bool KCoreConfigSkeleton_SuperUsrSave(KCoreConfigSkeleton* self);
    friend void KCoreConfigSkeleton_SuperTimerEvent(KCoreConfigSkeleton* self, QTimerEvent* event);
    friend void KCoreConfigSkeleton_SuperChildEvent(KCoreConfigSkeleton* self, QChildEvent* event);
    friend void KCoreConfigSkeleton_SuperCustomEvent(KCoreConfigSkeleton* self, QEvent* event);
    friend void KCoreConfigSkeleton_SuperConnectNotify(KCoreConfigSkeleton* self, const QMetaMethod* signal);
    friend void KCoreConfigSkeleton_SuperDisconnectNotify(KCoreConfigSkeleton* self, const QMetaMethod* signal);
};

// This class is a subclass of KCoreConfigSkeleton::ItemString
class VirtualKCoreConfigSkeletonItemString final : public KCoreConfigSkeleton::ItemString {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCoreConfigSkeleton__ItemString_WriteConfig_Callback = void (*)(KCoreConfigSkeleton__ItemString*, KConfig*);
    using KCoreConfigSkeleton__ItemString_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemString*, KConfig*);
    using KCoreConfigSkeleton__ItemString_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemString*, QVariant*);
    using KCoreConfigSkeleton__ItemString_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemString*, QVariant*);
    using KCoreConfigSkeleton__ItemString_Property_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemString*);

    // Instance callback storage
    KCoreConfigSkeleton__ItemString_WriteConfig_Callback kcoreconfigskeleton__itemstring_writeconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemString_ReadConfig_Callback kcoreconfigskeleton__itemstring_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemString_SetProperty_Callback kcoreconfigskeleton__itemstring_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemString_IsEqual_Callback kcoreconfigskeleton__itemstring_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemString_Property_Callback kcoreconfigskeleton__itemstring_property_callback = nullptr;

    VirtualKCoreConfigSkeletonItemString(const QString& _group, const QString& _key, QString& reference) : KCoreConfigSkeleton::ItemString(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemString(const QString& _group, const QString& _key, QString& reference, const QString& defaultValue) : KCoreConfigSkeleton::ItemString(_group, _key, reference, defaultValue) {};
    VirtualKCoreConfigSkeletonItemString(const QString& _group, const QString& _key, QString& reference, const QString& defaultValue, KCoreConfigSkeleton::ItemString::Type typeVal) : KCoreConfigSkeleton::ItemString(_group, _key, reference, defaultValue, typeVal) {};

    // Virtual method for C ABI access and custom callback
    virtual void writeConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemstring_writeconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itemstring_writeconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemString::writeConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemstring_readconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itemstring_readconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemString::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemstring_setproperty_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            kcoreconfigskeleton__itemstring_setproperty_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemString::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemstring_isequal_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            bool callback_ret = kcoreconfigskeleton__itemstring_isequal_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemString::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemstring_property_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itemstring_property_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemString::property();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemPassword
class VirtualKCoreConfigSkeletonItemPassword final : public KCoreConfigSkeleton::ItemPassword {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCoreConfigSkeleton__ItemPassword_WriteConfig_Callback = void (*)(KCoreConfigSkeleton__ItemPassword*, KConfig*);
    using KCoreConfigSkeleton__ItemPassword_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemPassword*, KConfig*);
    using KCoreConfigSkeleton__ItemPassword_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemPassword*, QVariant*);
    using KCoreConfigSkeleton__ItemPassword_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemPassword*, QVariant*);
    using KCoreConfigSkeleton__ItemPassword_Property_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemPassword*);

    // Instance callback storage
    KCoreConfigSkeleton__ItemPassword_WriteConfig_Callback kcoreconfigskeleton__itempassword_writeconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemPassword_ReadConfig_Callback kcoreconfigskeleton__itempassword_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemPassword_SetProperty_Callback kcoreconfigskeleton__itempassword_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemPassword_IsEqual_Callback kcoreconfigskeleton__itempassword_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemPassword_Property_Callback kcoreconfigskeleton__itempassword_property_callback = nullptr;

    VirtualKCoreConfigSkeletonItemPassword(const QString& _group, const QString& _key, QString& reference) : KCoreConfigSkeleton::ItemPassword(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemPassword(const QString& _group, const QString& _key, QString& reference, const QString& defaultValue) : KCoreConfigSkeleton::ItemPassword(_group, _key, reference, defaultValue) {};

    // Virtual method for C ABI access and custom callback
    virtual void writeConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itempassword_writeconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itempassword_writeconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemPassword::writeConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itempassword_readconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itempassword_readconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemPassword::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itempassword_setproperty_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            kcoreconfigskeleton__itempassword_setproperty_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemPassword::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itempassword_isequal_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            bool callback_ret = kcoreconfigskeleton__itempassword_isequal_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemPassword::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itempassword_property_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itempassword_property_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemPassword::property();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemPath
class VirtualKCoreConfigSkeletonItemPath final : public KCoreConfigSkeleton::ItemPath {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCoreConfigSkeleton__ItemPath_WriteConfig_Callback = void (*)(KCoreConfigSkeleton__ItemPath*, KConfig*);
    using KCoreConfigSkeleton__ItemPath_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemPath*, KConfig*);
    using KCoreConfigSkeleton__ItemPath_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemPath*, QVariant*);
    using KCoreConfigSkeleton__ItemPath_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemPath*, QVariant*);
    using KCoreConfigSkeleton__ItemPath_Property_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemPath*);

    // Instance callback storage
    KCoreConfigSkeleton__ItemPath_WriteConfig_Callback kcoreconfigskeleton__itempath_writeconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemPath_ReadConfig_Callback kcoreconfigskeleton__itempath_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemPath_SetProperty_Callback kcoreconfigskeleton__itempath_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemPath_IsEqual_Callback kcoreconfigskeleton__itempath_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemPath_Property_Callback kcoreconfigskeleton__itempath_property_callback = nullptr;

    VirtualKCoreConfigSkeletonItemPath(const QString& _group, const QString& _key, QString& reference) : KCoreConfigSkeleton::ItemPath(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemPath(const QString& _group, const QString& _key, QString& reference, const QString& defaultValue) : KCoreConfigSkeleton::ItemPath(_group, _key, reference, defaultValue) {};

    // Virtual method for C ABI access and custom callback
    virtual void writeConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itempath_writeconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itempath_writeconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemPath::writeConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itempath_readconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itempath_readconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemPath::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itempath_setproperty_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            kcoreconfigskeleton__itempath_setproperty_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemPath::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itempath_isequal_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            bool callback_ret = kcoreconfigskeleton__itempath_isequal_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemPath::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itempath_property_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itempath_property_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemPath::property();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemUrl
class VirtualKCoreConfigSkeletonItemUrl final : public KCoreConfigSkeleton::ItemUrl {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCoreConfigSkeleton__ItemUrl_WriteConfig_Callback = void (*)(KCoreConfigSkeleton__ItemUrl*, KConfig*);
    using KCoreConfigSkeleton__ItemUrl_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemUrl*, KConfig*);
    using KCoreConfigSkeleton__ItemUrl_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemUrl*, QVariant*);
    using KCoreConfigSkeleton__ItemUrl_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemUrl*, QVariant*);
    using KCoreConfigSkeleton__ItemUrl_Property_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemUrl*);

    // Instance callback storage
    KCoreConfigSkeleton__ItemUrl_WriteConfig_Callback kcoreconfigskeleton__itemurl_writeconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemUrl_ReadConfig_Callback kcoreconfigskeleton__itemurl_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemUrl_SetProperty_Callback kcoreconfigskeleton__itemurl_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemUrl_IsEqual_Callback kcoreconfigskeleton__itemurl_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemUrl_Property_Callback kcoreconfigskeleton__itemurl_property_callback = nullptr;

    VirtualKCoreConfigSkeletonItemUrl(const QString& _group, const QString& _key, QUrl& reference) : KCoreConfigSkeleton::ItemUrl(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemUrl(const QString& _group, const QString& _key, QUrl& reference, const QUrl& defaultValue) : KCoreConfigSkeleton::ItemUrl(_group, _key, reference, defaultValue) {};

    // Virtual method for C ABI access and custom callback
    virtual void writeConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemurl_writeconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itemurl_writeconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemUrl::writeConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemurl_readconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itemurl_readconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemUrl::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemurl_setproperty_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            kcoreconfigskeleton__itemurl_setproperty_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemUrl::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemurl_isequal_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            bool callback_ret = kcoreconfigskeleton__itemurl_isequal_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemUrl::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemurl_property_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itemurl_property_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemUrl::property();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemProperty
class VirtualKCoreConfigSkeletonItemProperty final : public KCoreConfigSkeleton::ItemProperty {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCoreConfigSkeleton__ItemProperty_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemProperty*, KConfig*);
    using KCoreConfigSkeleton__ItemProperty_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemProperty*, QVariant*);
    using KCoreConfigSkeleton__ItemProperty_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemProperty*, QVariant*);
    using KCoreConfigSkeleton__ItemProperty_Property_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemProperty*);

    // Instance callback storage
    KCoreConfigSkeleton__ItemProperty_ReadConfig_Callback kcoreconfigskeleton__itemproperty_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemProperty_SetProperty_Callback kcoreconfigskeleton__itemproperty_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemProperty_IsEqual_Callback kcoreconfigskeleton__itemproperty_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemProperty_Property_Callback kcoreconfigskeleton__itemproperty_property_callback = nullptr;

    VirtualKCoreConfigSkeletonItemProperty(const QString& _group, const QString& _key, QVariant& reference) : KCoreConfigSkeleton::ItemProperty(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemProperty(const QString& _group, const QString& _key, QVariant& reference, const QVariant& defaultValue) : KCoreConfigSkeleton::ItemProperty(_group, _key, reference, defaultValue) {};

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemproperty_readconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itemproperty_readconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemProperty::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemproperty_setproperty_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            kcoreconfigskeleton__itemproperty_setproperty_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemProperty::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemproperty_isequal_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            bool callback_ret = kcoreconfigskeleton__itemproperty_isequal_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemProperty::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemproperty_property_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itemproperty_property_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemProperty::property();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemBool
class VirtualKCoreConfigSkeletonItemBool final : public KCoreConfigSkeleton::ItemBool {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCoreConfigSkeleton__ItemBool_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemBool*, KConfig*);
    using KCoreConfigSkeleton__ItemBool_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemBool*, QVariant*);
    using KCoreConfigSkeleton__ItemBool_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemBool*, QVariant*);
    using KCoreConfigSkeleton__ItemBool_Property_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemBool*);

    // Instance callback storage
    KCoreConfigSkeleton__ItemBool_ReadConfig_Callback kcoreconfigskeleton__itembool_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemBool_SetProperty_Callback kcoreconfigskeleton__itembool_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemBool_IsEqual_Callback kcoreconfigskeleton__itembool_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemBool_Property_Callback kcoreconfigskeleton__itembool_property_callback = nullptr;

    VirtualKCoreConfigSkeletonItemBool(const QString& _group, const QString& _key, bool& reference) : KCoreConfigSkeleton::ItemBool(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemBool(const QString& _group, const QString& _key, bool& reference, bool defaultValue) : KCoreConfigSkeleton::ItemBool(_group, _key, reference, defaultValue) {};

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itembool_readconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itembool_readconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemBool::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itembool_setproperty_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            kcoreconfigskeleton__itembool_setproperty_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemBool::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itembool_isequal_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            bool callback_ret = kcoreconfigskeleton__itembool_isequal_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemBool::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itembool_property_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itembool_property_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemBool::property();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemInt
class VirtualKCoreConfigSkeletonItemInt final : public KCoreConfigSkeleton::ItemInt {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCoreConfigSkeleton__ItemInt_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemInt*, KConfig*);
    using KCoreConfigSkeleton__ItemInt_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemInt*, QVariant*);
    using KCoreConfigSkeleton__ItemInt_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemInt*, QVariant*);
    using KCoreConfigSkeleton__ItemInt_Property_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemInt*);
    using KCoreConfigSkeleton__ItemInt_MinValue_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemInt*);
    using KCoreConfigSkeleton__ItemInt_MaxValue_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemInt*);

    // Instance callback storage
    KCoreConfigSkeleton__ItemInt_ReadConfig_Callback kcoreconfigskeleton__itemint_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemInt_SetProperty_Callback kcoreconfigskeleton__itemint_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemInt_IsEqual_Callback kcoreconfigskeleton__itemint_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemInt_Property_Callback kcoreconfigskeleton__itemint_property_callback = nullptr;
    KCoreConfigSkeleton__ItemInt_MinValue_Callback kcoreconfigskeleton__itemint_minvalue_callback = nullptr;
    KCoreConfigSkeleton__ItemInt_MaxValue_Callback kcoreconfigskeleton__itemint_maxvalue_callback = nullptr;

    VirtualKCoreConfigSkeletonItemInt(const QString& _group, const QString& _key, qint32& reference) : KCoreConfigSkeleton::ItemInt(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemInt(const QString& _group, const QString& _key, qint32& reference, qint32 defaultValue) : KCoreConfigSkeleton::ItemInt(_group, _key, reference, defaultValue) {};

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemint_readconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itemint_readconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemInt::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemint_setproperty_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            kcoreconfigskeleton__itemint_setproperty_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemInt::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemint_isequal_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            bool callback_ret = kcoreconfigskeleton__itemint_isequal_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemInt::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemint_property_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itemint_property_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemInt::property();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant minValue() const override {
        if (kcoreconfigskeleton__itemint_minvalue_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itemint_minvalue_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemInt::minValue();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant maxValue() const override {
        if (kcoreconfigskeleton__itemint_maxvalue_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itemint_maxvalue_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemInt::maxValue();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemLongLong
class VirtualKCoreConfigSkeletonItemLongLong final : public KCoreConfigSkeleton::ItemLongLong {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCoreConfigSkeleton__ItemLongLong_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemLongLong*, KConfig*);
    using KCoreConfigSkeleton__ItemLongLong_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemLongLong*, QVariant*);
    using KCoreConfigSkeleton__ItemLongLong_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemLongLong*, QVariant*);
    using KCoreConfigSkeleton__ItemLongLong_Property_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemLongLong*);
    using KCoreConfigSkeleton__ItemLongLong_MinValue_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemLongLong*);
    using KCoreConfigSkeleton__ItemLongLong_MaxValue_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemLongLong*);

    // Instance callback storage
    KCoreConfigSkeleton__ItemLongLong_ReadConfig_Callback kcoreconfigskeleton__itemlonglong_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemLongLong_SetProperty_Callback kcoreconfigskeleton__itemlonglong_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemLongLong_IsEqual_Callback kcoreconfigskeleton__itemlonglong_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemLongLong_Property_Callback kcoreconfigskeleton__itemlonglong_property_callback = nullptr;
    KCoreConfigSkeleton__ItemLongLong_MinValue_Callback kcoreconfigskeleton__itemlonglong_minvalue_callback = nullptr;
    KCoreConfigSkeleton__ItemLongLong_MaxValue_Callback kcoreconfigskeleton__itemlonglong_maxvalue_callback = nullptr;

    VirtualKCoreConfigSkeletonItemLongLong(const QString& _group, const QString& _key, qint64& reference) : KCoreConfigSkeleton::ItemLongLong(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemLongLong(const QString& _group, const QString& _key, qint64& reference, qint64 defaultValue) : KCoreConfigSkeleton::ItemLongLong(_group, _key, reference, defaultValue) {};

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemlonglong_readconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itemlonglong_readconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemLongLong::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemlonglong_setproperty_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            kcoreconfigskeleton__itemlonglong_setproperty_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemLongLong::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemlonglong_isequal_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            bool callback_ret = kcoreconfigskeleton__itemlonglong_isequal_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemLongLong::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemlonglong_property_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itemlonglong_property_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemLongLong::property();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant minValue() const override {
        if (kcoreconfigskeleton__itemlonglong_minvalue_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itemlonglong_minvalue_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemLongLong::minValue();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant maxValue() const override {
        if (kcoreconfigskeleton__itemlonglong_maxvalue_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itemlonglong_maxvalue_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemLongLong::maxValue();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemEnum
class VirtualKCoreConfigSkeletonItemEnum final : public KCoreConfigSkeleton::ItemEnum {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCoreConfigSkeleton__ItemEnum_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemEnum*, KConfig*);
    using KCoreConfigSkeleton__ItemEnum_WriteConfig_Callback = void (*)(KCoreConfigSkeleton__ItemEnum*, KConfig*);
    using KCoreConfigSkeleton__ItemEnum_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemEnum*, QVariant*);
    using KCoreConfigSkeleton__ItemEnum_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemEnum*, QVariant*);
    using KCoreConfigSkeleton__ItemEnum_Property_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemEnum*);
    using KCoreConfigSkeleton__ItemEnum_MinValue_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemEnum*);
    using KCoreConfigSkeleton__ItemEnum_MaxValue_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemEnum*);

    // Instance callback storage
    KCoreConfigSkeleton__ItemEnum_ReadConfig_Callback kcoreconfigskeleton__itemenum_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemEnum_WriteConfig_Callback kcoreconfigskeleton__itemenum_writeconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemEnum_SetProperty_Callback kcoreconfigskeleton__itemenum_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemEnum_IsEqual_Callback kcoreconfigskeleton__itemenum_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemEnum_Property_Callback kcoreconfigskeleton__itemenum_property_callback = nullptr;
    KCoreConfigSkeleton__ItemEnum_MinValue_Callback kcoreconfigskeleton__itemenum_minvalue_callback = nullptr;
    KCoreConfigSkeleton__ItemEnum_MaxValue_Callback kcoreconfigskeleton__itemenum_maxvalue_callback = nullptr;

    VirtualKCoreConfigSkeletonItemEnum(const QString& _group, const QString& _key, qint32& reference, const QList<KCoreConfigSkeleton::ItemEnum::Choice>& choices) : KCoreConfigSkeleton::ItemEnum(_group, _key, reference, choices) {};
    VirtualKCoreConfigSkeletonItemEnum(const QString& _group, const QString& _key, qint32& reference, const QList<KCoreConfigSkeleton::ItemEnum::Choice>& choices, qint32 defaultValue) : KCoreConfigSkeleton::ItemEnum(_group, _key, reference, choices, defaultValue) {};

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemenum_readconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itemenum_readconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemEnum::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void writeConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemenum_writeconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itemenum_writeconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemEnum::writeConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemenum_setproperty_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            kcoreconfigskeleton__itemenum_setproperty_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemEnum::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemenum_isequal_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            bool callback_ret = kcoreconfigskeleton__itemenum_isequal_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemEnum::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemenum_property_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itemenum_property_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemEnum::property();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant minValue() const override {
        if (kcoreconfigskeleton__itemenum_minvalue_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itemenum_minvalue_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemEnum::minValue();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant maxValue() const override {
        if (kcoreconfigskeleton__itemenum_maxvalue_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itemenum_maxvalue_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemEnum::maxValue();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemUInt
class VirtualKCoreConfigSkeletonItemUInt final : public KCoreConfigSkeleton::ItemUInt {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCoreConfigSkeleton__ItemUInt_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemUInt*, KConfig*);
    using KCoreConfigSkeleton__ItemUInt_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemUInt*, QVariant*);
    using KCoreConfigSkeleton__ItemUInt_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemUInt*, QVariant*);
    using KCoreConfigSkeleton__ItemUInt_Property_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemUInt*);
    using KCoreConfigSkeleton__ItemUInt_MinValue_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemUInt*);
    using KCoreConfigSkeleton__ItemUInt_MaxValue_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemUInt*);

    // Instance callback storage
    KCoreConfigSkeleton__ItemUInt_ReadConfig_Callback kcoreconfigskeleton__itemuint_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemUInt_SetProperty_Callback kcoreconfigskeleton__itemuint_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemUInt_IsEqual_Callback kcoreconfigskeleton__itemuint_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemUInt_Property_Callback kcoreconfigskeleton__itemuint_property_callback = nullptr;
    KCoreConfigSkeleton__ItemUInt_MinValue_Callback kcoreconfigskeleton__itemuint_minvalue_callback = nullptr;
    KCoreConfigSkeleton__ItemUInt_MaxValue_Callback kcoreconfigskeleton__itemuint_maxvalue_callback = nullptr;

    VirtualKCoreConfigSkeletonItemUInt(const QString& _group, const QString& _key, quint32& reference) : KCoreConfigSkeleton::ItemUInt(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemUInt(const QString& _group, const QString& _key, quint32& reference, quint32 defaultValue) : KCoreConfigSkeleton::ItemUInt(_group, _key, reference, defaultValue) {};

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemuint_readconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itemuint_readconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemUInt::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemuint_setproperty_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            kcoreconfigskeleton__itemuint_setproperty_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemUInt::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemuint_isequal_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            bool callback_ret = kcoreconfigskeleton__itemuint_isequal_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemUInt::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemuint_property_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itemuint_property_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemUInt::property();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant minValue() const override {
        if (kcoreconfigskeleton__itemuint_minvalue_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itemuint_minvalue_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemUInt::minValue();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant maxValue() const override {
        if (kcoreconfigskeleton__itemuint_maxvalue_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itemuint_maxvalue_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemUInt::maxValue();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemULongLong
class VirtualKCoreConfigSkeletonItemULongLong final : public KCoreConfigSkeleton::ItemULongLong {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCoreConfigSkeleton__ItemULongLong_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemULongLong*, KConfig*);
    using KCoreConfigSkeleton__ItemULongLong_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemULongLong*, QVariant*);
    using KCoreConfigSkeleton__ItemULongLong_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemULongLong*, QVariant*);
    using KCoreConfigSkeleton__ItemULongLong_Property_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemULongLong*);
    using KCoreConfigSkeleton__ItemULongLong_MinValue_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemULongLong*);
    using KCoreConfigSkeleton__ItemULongLong_MaxValue_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemULongLong*);

    // Instance callback storage
    KCoreConfigSkeleton__ItemULongLong_ReadConfig_Callback kcoreconfigskeleton__itemulonglong_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemULongLong_SetProperty_Callback kcoreconfigskeleton__itemulonglong_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemULongLong_IsEqual_Callback kcoreconfigskeleton__itemulonglong_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemULongLong_Property_Callback kcoreconfigskeleton__itemulonglong_property_callback = nullptr;
    KCoreConfigSkeleton__ItemULongLong_MinValue_Callback kcoreconfigskeleton__itemulonglong_minvalue_callback = nullptr;
    KCoreConfigSkeleton__ItemULongLong_MaxValue_Callback kcoreconfigskeleton__itemulonglong_maxvalue_callback = nullptr;

    VirtualKCoreConfigSkeletonItemULongLong(const QString& _group, const QString& _key, quint64& reference) : KCoreConfigSkeleton::ItemULongLong(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemULongLong(const QString& _group, const QString& _key, quint64& reference, quint64 defaultValue) : KCoreConfigSkeleton::ItemULongLong(_group, _key, reference, defaultValue) {};

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemulonglong_readconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itemulonglong_readconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemULongLong::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemulonglong_setproperty_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            kcoreconfigskeleton__itemulonglong_setproperty_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemULongLong::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemulonglong_isequal_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            bool callback_ret = kcoreconfigskeleton__itemulonglong_isequal_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemULongLong::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemulonglong_property_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itemulonglong_property_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemULongLong::property();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant minValue() const override {
        if (kcoreconfigskeleton__itemulonglong_minvalue_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itemulonglong_minvalue_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemULongLong::minValue();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant maxValue() const override {
        if (kcoreconfigskeleton__itemulonglong_maxvalue_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itemulonglong_maxvalue_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemULongLong::maxValue();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemDouble
class VirtualKCoreConfigSkeletonItemDouble final : public KCoreConfigSkeleton::ItemDouble {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCoreConfigSkeleton__ItemDouble_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemDouble*, KConfig*);
    using KCoreConfigSkeleton__ItemDouble_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemDouble*, QVariant*);
    using KCoreConfigSkeleton__ItemDouble_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemDouble*, QVariant*);
    using KCoreConfigSkeleton__ItemDouble_Property_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemDouble*);
    using KCoreConfigSkeleton__ItemDouble_MinValue_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemDouble*);
    using KCoreConfigSkeleton__ItemDouble_MaxValue_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemDouble*);

    // Instance callback storage
    KCoreConfigSkeleton__ItemDouble_ReadConfig_Callback kcoreconfigskeleton__itemdouble_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemDouble_SetProperty_Callback kcoreconfigskeleton__itemdouble_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemDouble_IsEqual_Callback kcoreconfigskeleton__itemdouble_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemDouble_Property_Callback kcoreconfigskeleton__itemdouble_property_callback = nullptr;
    KCoreConfigSkeleton__ItemDouble_MinValue_Callback kcoreconfigskeleton__itemdouble_minvalue_callback = nullptr;
    KCoreConfigSkeleton__ItemDouble_MaxValue_Callback kcoreconfigskeleton__itemdouble_maxvalue_callback = nullptr;

    VirtualKCoreConfigSkeletonItemDouble(const QString& _group, const QString& _key, double& reference) : KCoreConfigSkeleton::ItemDouble(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemDouble(const QString& _group, const QString& _key, double& reference, double defaultValue) : KCoreConfigSkeleton::ItemDouble(_group, _key, reference, defaultValue) {};

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemdouble_readconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itemdouble_readconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemDouble::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemdouble_setproperty_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            kcoreconfigskeleton__itemdouble_setproperty_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemDouble::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemdouble_isequal_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            bool callback_ret = kcoreconfigskeleton__itemdouble_isequal_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemDouble::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemdouble_property_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itemdouble_property_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemDouble::property();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant minValue() const override {
        if (kcoreconfigskeleton__itemdouble_minvalue_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itemdouble_minvalue_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemDouble::minValue();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant maxValue() const override {
        if (kcoreconfigskeleton__itemdouble_maxvalue_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itemdouble_maxvalue_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemDouble::maxValue();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemRect
class VirtualKCoreConfigSkeletonItemRect final : public KCoreConfigSkeleton::ItemRect {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCoreConfigSkeleton__ItemRect_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemRect*, KConfig*);
    using KCoreConfigSkeleton__ItemRect_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemRect*, QVariant*);
    using KCoreConfigSkeleton__ItemRect_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemRect*, QVariant*);
    using KCoreConfigSkeleton__ItemRect_Property_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemRect*);

    // Instance callback storage
    KCoreConfigSkeleton__ItemRect_ReadConfig_Callback kcoreconfigskeleton__itemrect_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemRect_SetProperty_Callback kcoreconfigskeleton__itemrect_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemRect_IsEqual_Callback kcoreconfigskeleton__itemrect_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemRect_Property_Callback kcoreconfigskeleton__itemrect_property_callback = nullptr;

    VirtualKCoreConfigSkeletonItemRect(const QString& _group, const QString& _key, QRect& reference) : KCoreConfigSkeleton::ItemRect(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemRect(const QString& _group, const QString& _key, QRect& reference, const QRect& defaultValue) : KCoreConfigSkeleton::ItemRect(_group, _key, reference, defaultValue) {};

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemrect_readconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itemrect_readconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemRect::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemrect_setproperty_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            kcoreconfigskeleton__itemrect_setproperty_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemRect::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemrect_isequal_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            bool callback_ret = kcoreconfigskeleton__itemrect_isequal_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemRect::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemrect_property_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itemrect_property_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemRect::property();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemRectF
class VirtualKCoreConfigSkeletonItemRectF final : public KCoreConfigSkeleton::ItemRectF {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCoreConfigSkeleton__ItemRectF_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemRectF*, KConfig*);
    using KCoreConfigSkeleton__ItemRectF_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemRectF*, QVariant*);
    using KCoreConfigSkeleton__ItemRectF_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemRectF*, QVariant*);
    using KCoreConfigSkeleton__ItemRectF_Property_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemRectF*);

    // Instance callback storage
    KCoreConfigSkeleton__ItemRectF_ReadConfig_Callback kcoreconfigskeleton__itemrectf_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemRectF_SetProperty_Callback kcoreconfigskeleton__itemrectf_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemRectF_IsEqual_Callback kcoreconfigskeleton__itemrectf_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemRectF_Property_Callback kcoreconfigskeleton__itemrectf_property_callback = nullptr;

    VirtualKCoreConfigSkeletonItemRectF(const QString& _group, const QString& _key, QRectF& reference) : KCoreConfigSkeleton::ItemRectF(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemRectF(const QString& _group, const QString& _key, QRectF& reference, const QRectF& defaultValue) : KCoreConfigSkeleton::ItemRectF(_group, _key, reference, defaultValue) {};

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemrectf_readconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itemrectf_readconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemRectF::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemrectf_setproperty_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            kcoreconfigskeleton__itemrectf_setproperty_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemRectF::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemrectf_isequal_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            bool callback_ret = kcoreconfigskeleton__itemrectf_isequal_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemRectF::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemrectf_property_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itemrectf_property_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemRectF::property();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemPoint
class VirtualKCoreConfigSkeletonItemPoint final : public KCoreConfigSkeleton::ItemPoint {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCoreConfigSkeleton__ItemPoint_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemPoint*, KConfig*);
    using KCoreConfigSkeleton__ItemPoint_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemPoint*, QVariant*);
    using KCoreConfigSkeleton__ItemPoint_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemPoint*, QVariant*);
    using KCoreConfigSkeleton__ItemPoint_Property_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemPoint*);

    // Instance callback storage
    KCoreConfigSkeleton__ItemPoint_ReadConfig_Callback kcoreconfigskeleton__itempoint_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemPoint_SetProperty_Callback kcoreconfigskeleton__itempoint_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemPoint_IsEqual_Callback kcoreconfigskeleton__itempoint_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemPoint_Property_Callback kcoreconfigskeleton__itempoint_property_callback = nullptr;

    VirtualKCoreConfigSkeletonItemPoint(const QString& _group, const QString& _key, QPoint& reference) : KCoreConfigSkeleton::ItemPoint(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemPoint(const QString& _group, const QString& _key, QPoint& reference, const QPoint& defaultValue) : KCoreConfigSkeleton::ItemPoint(_group, _key, reference, defaultValue) {};

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itempoint_readconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itempoint_readconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemPoint::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itempoint_setproperty_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            kcoreconfigskeleton__itempoint_setproperty_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemPoint::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itempoint_isequal_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            bool callback_ret = kcoreconfigskeleton__itempoint_isequal_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemPoint::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itempoint_property_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itempoint_property_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemPoint::property();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemPointF
class VirtualKCoreConfigSkeletonItemPointF final : public KCoreConfigSkeleton::ItemPointF {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCoreConfigSkeleton__ItemPointF_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemPointF*, KConfig*);
    using KCoreConfigSkeleton__ItemPointF_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemPointF*, QVariant*);
    using KCoreConfigSkeleton__ItemPointF_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemPointF*, QVariant*);
    using KCoreConfigSkeleton__ItemPointF_Property_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemPointF*);

    // Instance callback storage
    KCoreConfigSkeleton__ItemPointF_ReadConfig_Callback kcoreconfigskeleton__itempointf_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemPointF_SetProperty_Callback kcoreconfigskeleton__itempointf_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemPointF_IsEqual_Callback kcoreconfigskeleton__itempointf_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemPointF_Property_Callback kcoreconfigskeleton__itempointf_property_callback = nullptr;

    VirtualKCoreConfigSkeletonItemPointF(const QString& _group, const QString& _key, QPointF& reference) : KCoreConfigSkeleton::ItemPointF(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemPointF(const QString& _group, const QString& _key, QPointF& reference, const QPointF& defaultValue) : KCoreConfigSkeleton::ItemPointF(_group, _key, reference, defaultValue) {};

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itempointf_readconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itempointf_readconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemPointF::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itempointf_setproperty_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            kcoreconfigskeleton__itempointf_setproperty_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemPointF::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itempointf_isequal_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            bool callback_ret = kcoreconfigskeleton__itempointf_isequal_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemPointF::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itempointf_property_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itempointf_property_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemPointF::property();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemSize
class VirtualKCoreConfigSkeletonItemSize final : public KCoreConfigSkeleton::ItemSize {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCoreConfigSkeleton__ItemSize_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemSize*, KConfig*);
    using KCoreConfigSkeleton__ItemSize_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemSize*, QVariant*);
    using KCoreConfigSkeleton__ItemSize_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemSize*, QVariant*);
    using KCoreConfigSkeleton__ItemSize_Property_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemSize*);

    // Instance callback storage
    KCoreConfigSkeleton__ItemSize_ReadConfig_Callback kcoreconfigskeleton__itemsize_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemSize_SetProperty_Callback kcoreconfigskeleton__itemsize_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemSize_IsEqual_Callback kcoreconfigskeleton__itemsize_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemSize_Property_Callback kcoreconfigskeleton__itemsize_property_callback = nullptr;

    VirtualKCoreConfigSkeletonItemSize(const QString& _group, const QString& _key, QSize& reference) : KCoreConfigSkeleton::ItemSize(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemSize(const QString& _group, const QString& _key, QSize& reference, const QSize& defaultValue) : KCoreConfigSkeleton::ItemSize(_group, _key, reference, defaultValue) {};

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemsize_readconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itemsize_readconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemSize::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemsize_setproperty_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            kcoreconfigskeleton__itemsize_setproperty_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemSize::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemsize_isequal_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            bool callback_ret = kcoreconfigskeleton__itemsize_isequal_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemSize::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemsize_property_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itemsize_property_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemSize::property();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemSizeF
class VirtualKCoreConfigSkeletonItemSizeF final : public KCoreConfigSkeleton::ItemSizeF {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCoreConfigSkeleton__ItemSizeF_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemSizeF*, KConfig*);
    using KCoreConfigSkeleton__ItemSizeF_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemSizeF*, QVariant*);
    using KCoreConfigSkeleton__ItemSizeF_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemSizeF*, QVariant*);
    using KCoreConfigSkeleton__ItemSizeF_Property_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemSizeF*);

    // Instance callback storage
    KCoreConfigSkeleton__ItemSizeF_ReadConfig_Callback kcoreconfigskeleton__itemsizef_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemSizeF_SetProperty_Callback kcoreconfigskeleton__itemsizef_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemSizeF_IsEqual_Callback kcoreconfigskeleton__itemsizef_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemSizeF_Property_Callback kcoreconfigskeleton__itemsizef_property_callback = nullptr;

    VirtualKCoreConfigSkeletonItemSizeF(const QString& _group, const QString& _key, QSizeF& reference) : KCoreConfigSkeleton::ItemSizeF(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemSizeF(const QString& _group, const QString& _key, QSizeF& reference, const QSizeF& defaultValue) : KCoreConfigSkeleton::ItemSizeF(_group, _key, reference, defaultValue) {};

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemsizef_readconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itemsizef_readconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemSizeF::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemsizef_setproperty_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            kcoreconfigskeleton__itemsizef_setproperty_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemSizeF::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemsizef_isequal_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            bool callback_ret = kcoreconfigskeleton__itemsizef_isequal_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemSizeF::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemsizef_property_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itemsizef_property_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemSizeF::property();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemDateTime
class VirtualKCoreConfigSkeletonItemDateTime final : public KCoreConfigSkeleton::ItemDateTime {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCoreConfigSkeleton__ItemDateTime_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemDateTime*, KConfig*);
    using KCoreConfigSkeleton__ItemDateTime_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemDateTime*, QVariant*);
    using KCoreConfigSkeleton__ItemDateTime_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemDateTime*, QVariant*);
    using KCoreConfigSkeleton__ItemDateTime_Property_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemDateTime*);

    // Instance callback storage
    KCoreConfigSkeleton__ItemDateTime_ReadConfig_Callback kcoreconfigskeleton__itemdatetime_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemDateTime_SetProperty_Callback kcoreconfigskeleton__itemdatetime_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemDateTime_IsEqual_Callback kcoreconfigskeleton__itemdatetime_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemDateTime_Property_Callback kcoreconfigskeleton__itemdatetime_property_callback = nullptr;

    VirtualKCoreConfigSkeletonItemDateTime(const QString& _group, const QString& _key, QDateTime& reference) : KCoreConfigSkeleton::ItemDateTime(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemDateTime(const QString& _group, const QString& _key, QDateTime& reference, const QDateTime& defaultValue) : KCoreConfigSkeleton::ItemDateTime(_group, _key, reference, defaultValue) {};

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemdatetime_readconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itemdatetime_readconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemDateTime::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemdatetime_setproperty_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            kcoreconfigskeleton__itemdatetime_setproperty_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemDateTime::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemdatetime_isequal_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            bool callback_ret = kcoreconfigskeleton__itemdatetime_isequal_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemDateTime::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemdatetime_property_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itemdatetime_property_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemDateTime::property();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemStringList
class VirtualKCoreConfigSkeletonItemStringList final : public KCoreConfigSkeleton::ItemStringList {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCoreConfigSkeleton__ItemStringList_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemStringList*, KConfig*);
    using KCoreConfigSkeleton__ItemStringList_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemStringList*, QVariant*);
    using KCoreConfigSkeleton__ItemStringList_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemStringList*, QVariant*);
    using KCoreConfigSkeleton__ItemStringList_Property_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemStringList*);

    // Instance callback storage
    KCoreConfigSkeleton__ItemStringList_ReadConfig_Callback kcoreconfigskeleton__itemstringlist_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemStringList_SetProperty_Callback kcoreconfigskeleton__itemstringlist_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemStringList_IsEqual_Callback kcoreconfigskeleton__itemstringlist_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemStringList_Property_Callback kcoreconfigskeleton__itemstringlist_property_callback = nullptr;

    VirtualKCoreConfigSkeletonItemStringList(const QString& _group, const QString& _key, QList<QString>& reference) : KCoreConfigSkeleton::ItemStringList(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemStringList(const QString& _group, const QString& _key, QList<QString>& reference, const QList<QString>& defaultValue) : KCoreConfigSkeleton::ItemStringList(_group, _key, reference, defaultValue) {};

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemstringlist_readconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itemstringlist_readconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemStringList::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemstringlist_setproperty_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            kcoreconfigskeleton__itemstringlist_setproperty_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemStringList::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemstringlist_isequal_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            bool callback_ret = kcoreconfigskeleton__itemstringlist_isequal_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemStringList::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemstringlist_property_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itemstringlist_property_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemStringList::property();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemPathList
class VirtualKCoreConfigSkeletonItemPathList final : public KCoreConfigSkeleton::ItemPathList {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCoreConfigSkeleton__ItemPathList_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemPathList*, KConfig*);
    using KCoreConfigSkeleton__ItemPathList_WriteConfig_Callback = void (*)(KCoreConfigSkeleton__ItemPathList*, KConfig*);
    using KCoreConfigSkeleton__ItemPathList_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemPathList*, QVariant*);
    using KCoreConfigSkeleton__ItemPathList_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemPathList*, QVariant*);
    using KCoreConfigSkeleton__ItemPathList_Property_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemPathList*);

    // Instance callback storage
    KCoreConfigSkeleton__ItemPathList_ReadConfig_Callback kcoreconfigskeleton__itempathlist_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemPathList_WriteConfig_Callback kcoreconfigskeleton__itempathlist_writeconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemPathList_SetProperty_Callback kcoreconfigskeleton__itempathlist_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemPathList_IsEqual_Callback kcoreconfigskeleton__itempathlist_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemPathList_Property_Callback kcoreconfigskeleton__itempathlist_property_callback = nullptr;

    VirtualKCoreConfigSkeletonItemPathList(const QString& _group, const QString& _key, QList<QString>& reference) : KCoreConfigSkeleton::ItemPathList(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemPathList(const QString& _group, const QString& _key, QList<QString>& reference, const QList<QString>& defaultValue) : KCoreConfigSkeleton::ItemPathList(_group, _key, reference, defaultValue) {};

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itempathlist_readconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itempathlist_readconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemPathList::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void writeConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itempathlist_writeconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itempathlist_writeconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemPathList::writeConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itempathlist_setproperty_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            kcoreconfigskeleton__itempathlist_setproperty_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemPathList::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itempathlist_isequal_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            bool callback_ret = kcoreconfigskeleton__itempathlist_isequal_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemPathList::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itempathlist_property_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itempathlist_property_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemPathList::property();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemUrlList
class VirtualKCoreConfigSkeletonItemUrlList final : public KCoreConfigSkeleton::ItemUrlList {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCoreConfigSkeleton__ItemUrlList_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemUrlList*, KConfig*);
    using KCoreConfigSkeleton__ItemUrlList_WriteConfig_Callback = void (*)(KCoreConfigSkeleton__ItemUrlList*, KConfig*);
    using KCoreConfigSkeleton__ItemUrlList_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemUrlList*, QVariant*);
    using KCoreConfigSkeleton__ItemUrlList_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemUrlList*, QVariant*);
    using KCoreConfigSkeleton__ItemUrlList_Property_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemUrlList*);

    // Instance callback storage
    KCoreConfigSkeleton__ItemUrlList_ReadConfig_Callback kcoreconfigskeleton__itemurllist_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemUrlList_WriteConfig_Callback kcoreconfigskeleton__itemurllist_writeconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemUrlList_SetProperty_Callback kcoreconfigskeleton__itemurllist_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemUrlList_IsEqual_Callback kcoreconfigskeleton__itemurllist_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemUrlList_Property_Callback kcoreconfigskeleton__itemurllist_property_callback = nullptr;

    VirtualKCoreConfigSkeletonItemUrlList(const QString& _group, const QString& _key, QList<QUrl>& reference) : KCoreConfigSkeleton::ItemUrlList(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemUrlList(const QString& _group, const QString& _key, QList<QUrl>& reference, const QList<QUrl>& defaultValue) : KCoreConfigSkeleton::ItemUrlList(_group, _key, reference, defaultValue) {};

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemurllist_readconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itemurllist_readconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemUrlList::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void writeConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemurllist_writeconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itemurllist_writeconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemUrlList::writeConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemurllist_setproperty_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            kcoreconfigskeleton__itemurllist_setproperty_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemUrlList::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemurllist_isequal_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            bool callback_ret = kcoreconfigskeleton__itemurllist_isequal_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemUrlList::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemurllist_property_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itemurllist_property_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemUrlList::property();
    }
};

// This class is a subclass of KCoreConfigSkeleton::ItemIntList
class VirtualKCoreConfigSkeletonItemIntList final : public KCoreConfigSkeleton::ItemIntList {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCoreConfigSkeleton__ItemIntList_ReadConfig_Callback = void (*)(KCoreConfigSkeleton__ItemIntList*, KConfig*);
    using KCoreConfigSkeleton__ItemIntList_SetProperty_Callback = void (*)(KCoreConfigSkeleton__ItemIntList*, QVariant*);
    using KCoreConfigSkeleton__ItemIntList_IsEqual_Callback = bool (*)(const KCoreConfigSkeleton__ItemIntList*, QVariant*);
    using KCoreConfigSkeleton__ItemIntList_Property_Callback = QVariant* (*)(const KCoreConfigSkeleton__ItemIntList*);

    // Instance callback storage
    KCoreConfigSkeleton__ItemIntList_ReadConfig_Callback kcoreconfigskeleton__itemintlist_readconfig_callback = nullptr;
    KCoreConfigSkeleton__ItemIntList_SetProperty_Callback kcoreconfigskeleton__itemintlist_setproperty_callback = nullptr;
    KCoreConfigSkeleton__ItemIntList_IsEqual_Callback kcoreconfigskeleton__itemintlist_isequal_callback = nullptr;
    KCoreConfigSkeleton__ItemIntList_Property_Callback kcoreconfigskeleton__itemintlist_property_callback = nullptr;

    VirtualKCoreConfigSkeletonItemIntList(const QString& _group, const QString& _key, QList<int>& reference) : KCoreConfigSkeleton::ItemIntList(_group, _key, reference) {};
    VirtualKCoreConfigSkeletonItemIntList(const QString& _group, const QString& _key, QList<int>& reference, const QList<int>& defaultValue) : KCoreConfigSkeleton::ItemIntList(_group, _key, reference, defaultValue) {};

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(KConfig* config) override {
        if (kcoreconfigskeleton__itemintlist_readconfig_callback) {
            KConfig* cbval1 = config;
            kcoreconfigskeleton__itemintlist_readconfig_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemIntList::readConfig(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setProperty(const QVariant& p) override {
        if (kcoreconfigskeleton__itemintlist_setproperty_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            kcoreconfigskeleton__itemintlist_setproperty_callback(this, cbval1);
            return;
        }
        KCoreConfigSkeleton__ItemIntList::setProperty(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEqual(const QVariant& p) const override {
        if (kcoreconfigskeleton__itemintlist_isequal_callback) {
            const QVariant& p_ret = p;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&p_ret);
            bool callback_ret = kcoreconfigskeleton__itemintlist_isequal_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreConfigSkeleton__ItemIntList::isEqual(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant property() const override {
        if (kcoreconfigskeleton__itemintlist_property_callback) {
            QVariant* callback_ret = kcoreconfigskeleton__itemintlist_property_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCoreConfigSkeleton__ItemIntList::property();
    }
};

#endif
