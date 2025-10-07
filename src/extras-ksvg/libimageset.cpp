#include <KPluginMetaData>
#define WORKAROUND_INNER_CLASS_DEFINITION_KSvg__ImageSet
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <imageset.h>
#include "libimageset.h"
#include "libimageset.hxx"

KSvg__ImageSet* KSvg__ImageSet_new() {
    return new VirtualKSvgImageSet();
}

KSvg__ImageSet* KSvg__ImageSet_new2(const libqt_string imageSetName) {
    QString imageSetName_QString = QString::fromUtf8(imageSetName.data, imageSetName.len);
    return new VirtualKSvgImageSet(imageSetName_QString);
}

KSvg__ImageSet* KSvg__ImageSet_new3(QObject* parent) {
    return new VirtualKSvgImageSet(parent);
}

KSvg__ImageSet* KSvg__ImageSet_new4(const libqt_string imageSetName, const libqt_string basePath) {
    QString imageSetName_QString = QString::fromUtf8(imageSetName.data, imageSetName.len);
    QString basePath_QString = QString::fromUtf8(basePath.data, basePath.len);
    return new VirtualKSvgImageSet(imageSetName_QString, basePath_QString);
}

KSvg__ImageSet* KSvg__ImageSet_new5(const libqt_string imageSetName, const libqt_string basePath, QObject* parent) {
    QString imageSetName_QString = QString::fromUtf8(imageSetName.data, imageSetName.len);
    QString basePath_QString = QString::fromUtf8(basePath.data, basePath.len);
    return new VirtualKSvgImageSet(imageSetName_QString, basePath_QString, parent);
}

QMetaObject* KSvg__ImageSet_MetaObject(const KSvg__ImageSet* self) {
    return (QMetaObject*)self->metaObject();
}

void* KSvg__ImageSet_Metacast(KSvg__ImageSet* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KSvg__ImageSet_Metacall(KSvg__ImageSet* self, int param1, int param2, void** param3) {
    auto* vksvg__imageset = dynamic_cast<VirtualKSvgImageSet*>(self);
    if (vksvg__imageset && vksvg__imageset->isVirtualKSvgImageSet) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKSvgImageSet*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KSvg__ImageSet_Tr(const char* s) {
    QString _ret = KSvg::ImageSet::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KSvg__ImageSet_SetBasePath(KSvg__ImageSet* self, const libqt_string basePath) {
    QString basePath_QString = QString::fromUtf8(basePath.data, basePath.len);
    self->setBasePath(basePath_QString);
}

libqt_string KSvg__ImageSet_BasePath(const KSvg__ImageSet* self) {
    QString _ret = self->basePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KSvg__ImageSet_SetSelectors(KSvg__ImageSet* self, const libqt_list /* of libqt_string */ selectors) {
    QList<QString> selectors_QList;
    selectors_QList.reserve(selectors.len);
    libqt_string* selectors_arr = static_cast<libqt_string*>(selectors.data);
    for (size_t i = 0; i < selectors.len; ++i) {
        QString selectors_arr_i_QString = QString::fromUtf8(selectors_arr[i].data, selectors_arr[i].len);
        selectors_QList.push_back(selectors_arr_i_QString);
    }
    self->setSelectors(selectors_QList);
}

libqt_list /* of libqt_string */ KSvg__ImageSet_Selectors(const KSvg__ImageSet* self) {
    QList<QString> _ret = self->selectors();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KSvg__ImageSet_SetImageSetName(KSvg__ImageSet* self, const libqt_string imageSetName) {
    QString imageSetName_QString = QString::fromUtf8(imageSetName.data, imageSetName.len);
    self->setImageSetName(imageSetName_QString);
}

libqt_string KSvg__ImageSet_ImageSetName(const KSvg__ImageSet* self) {
    QString _ret = self->imageSetName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSvg__ImageSet_ImagePath(const KSvg__ImageSet* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString _ret = self->imagePath(name_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSvg__ImageSet_FilePath(const KSvg__ImageSet* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString _ret = self->filePath(name_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KSvg__ImageSet_CurrentImageSetHasImage(const KSvg__ImageSet* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->currentImageSetHasImage(name_QString);
}

void KSvg__ImageSet_SetUseGlobalSettings(KSvg__ImageSet* self, bool useGlobal) {
    self->setUseGlobalSettings(useGlobal);
}

bool KSvg__ImageSet_UseGlobalSettings(const KSvg__ImageSet* self) {
    return self->useGlobalSettings();
}

void KSvg__ImageSet_SetCacheLimit(KSvg__ImageSet* self, int kbytes) {
    self->setCacheLimit(static_cast<int>(kbytes));
}

KPluginMetaData* KSvg__ImageSet_Metadata(const KSvg__ImageSet* self) {
    return new KPluginMetaData(self->metadata());
}

void KSvg__ImageSet_ImageSetChanged(KSvg__ImageSet* self, const libqt_string basePath) {
    QString basePath_QString = QString::fromUtf8(basePath.data, basePath.len);
    self->imageSetChanged(basePath_QString);
}

void KSvg__ImageSet_Connect_ImageSetChanged(KSvg__ImageSet* self, intptr_t slot) {
    void (*slotFunc)(KSvg__ImageSet*, const char*) = reinterpret_cast<void (*)(KSvg__ImageSet*, const char*)>(slot);
    KSvg::ImageSet::connect(self, &KSvg::ImageSet::imageSetChanged, [self, slotFunc](const QString& basePath) {
        const QString basePath_ret = basePath;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray basePath_b = basePath_ret.toUtf8();
        const char* basePath_str = static_cast<const char*>(malloc(basePath_b.length() + 1));
        memcpy((void*)basePath_str, basePath_b.data(), basePath_b.length());
        ((char*)basePath_str)[basePath_b.length()] = '\0';
        const char* sigval1 = basePath_str;
        slotFunc(self, sigval1);
        libqt_free(basePath_str);
    });
}

void KSvg__ImageSet_BasePathChanged(KSvg__ImageSet* self, const libqt_string basePath) {
    QString basePath_QString = QString::fromUtf8(basePath.data, basePath.len);
    self->basePathChanged(basePath_QString);
}

void KSvg__ImageSet_Connect_BasePathChanged(KSvg__ImageSet* self, intptr_t slot) {
    void (*slotFunc)(KSvg__ImageSet*, const char*) = reinterpret_cast<void (*)(KSvg__ImageSet*, const char*)>(slot);
    KSvg::ImageSet::connect(self, &KSvg::ImageSet::basePathChanged, [self, slotFunc](const QString& basePath) {
        const QString basePath_ret = basePath;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray basePath_b = basePath_ret.toUtf8();
        const char* basePath_str = static_cast<const char*>(malloc(basePath_b.length() + 1));
        memcpy((void*)basePath_str, basePath_b.data(), basePath_b.length());
        ((char*)basePath_str)[basePath_b.length()] = '\0';
        const char* sigval1 = basePath_str;
        slotFunc(self, sigval1);
        libqt_free(basePath_str);
    });
}

libqt_string KSvg__ImageSet_Tr2(const char* s, const char* c) {
    QString _ret = KSvg::ImageSet::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSvg__ImageSet_Tr3(const char* s, const char* c, int n) {
    QString _ret = KSvg::ImageSet::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
int KSvg__ImageSet_QBaseMetacall(KSvg__ImageSet* self, int param1, int param2, void** param3) {
    auto* vksvgimageset = dynamic_cast<VirtualKSvgImageSet*>(self);
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        vksvgimageset->setKSvg__ImageSet_Metacall_IsBase(true);
        return vksvgimageset->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KSvg::ImageSet::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__ImageSet_OnMetacall(KSvg__ImageSet* self, intptr_t slot) {
    auto* vksvgimageset = dynamic_cast<VirtualKSvgImageSet*>(self);
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        vksvgimageset->setKSvg__ImageSet_Metacall_Callback(reinterpret_cast<VirtualKSvgImageSet::KSvg__ImageSet_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSvg__ImageSet_Event(KSvg__ImageSet* self, QEvent* event) {
    auto* vksvgimageset = dynamic_cast<VirtualKSvgImageSet*>(self);
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        return vksvgimageset->event(event);
    } else {
        return self->KSvg::ImageSet::event(event);
    }
}

// Base class handler implementation
bool KSvg__ImageSet_QBaseEvent(KSvg__ImageSet* self, QEvent* event) {
    auto* vksvgimageset = dynamic_cast<VirtualKSvgImageSet*>(self);
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        vksvgimageset->setKSvg__ImageSet_Event_IsBase(true);
        return vksvgimageset->event(event);
    } else {
        return self->KSvg::ImageSet::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__ImageSet_OnEvent(KSvg__ImageSet* self, intptr_t slot) {
    auto* vksvgimageset = dynamic_cast<VirtualKSvgImageSet*>(self);
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        vksvgimageset->setKSvg__ImageSet_Event_Callback(reinterpret_cast<VirtualKSvgImageSet::KSvg__ImageSet_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSvg__ImageSet_EventFilter(KSvg__ImageSet* self, QObject* watched, QEvent* event) {
    auto* vksvgimageset = dynamic_cast<VirtualKSvgImageSet*>(self);
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        return vksvgimageset->eventFilter(watched, event);
    } else {
        return self->KSvg::ImageSet::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KSvg__ImageSet_QBaseEventFilter(KSvg__ImageSet* self, QObject* watched, QEvent* event) {
    auto* vksvgimageset = dynamic_cast<VirtualKSvgImageSet*>(self);
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        vksvgimageset->setKSvg__ImageSet_EventFilter_IsBase(true);
        return vksvgimageset->eventFilter(watched, event);
    } else {
        return self->KSvg::ImageSet::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__ImageSet_OnEventFilter(KSvg__ImageSet* self, intptr_t slot) {
    auto* vksvgimageset = dynamic_cast<VirtualKSvgImageSet*>(self);
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        vksvgimageset->setKSvg__ImageSet_EventFilter_Callback(reinterpret_cast<VirtualKSvgImageSet::KSvg__ImageSet_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KSvg__ImageSet_TimerEvent(KSvg__ImageSet* self, QTimerEvent* event) {
    auto* vksvgimageset = dynamic_cast<VirtualKSvgImageSet*>(self);
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        vksvgimageset->timerEvent(event);
    } else {
        ((VirtualKSvgImageSet*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KSvg__ImageSet_QBaseTimerEvent(KSvg__ImageSet* self, QTimerEvent* event) {
    auto* vksvgimageset = dynamic_cast<VirtualKSvgImageSet*>(self);
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        vksvgimageset->setKSvg__ImageSet_TimerEvent_IsBase(true);
        vksvgimageset->timerEvent(event);
    } else {
        ((VirtualKSvgImageSet*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__ImageSet_OnTimerEvent(KSvg__ImageSet* self, intptr_t slot) {
    auto* vksvgimageset = dynamic_cast<VirtualKSvgImageSet*>(self);
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        vksvgimageset->setKSvg__ImageSet_TimerEvent_Callback(reinterpret_cast<VirtualKSvgImageSet::KSvg__ImageSet_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSvg__ImageSet_ChildEvent(KSvg__ImageSet* self, QChildEvent* event) {
    auto* vksvgimageset = dynamic_cast<VirtualKSvgImageSet*>(self);
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        vksvgimageset->childEvent(event);
    } else {
        ((VirtualKSvgImageSet*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KSvg__ImageSet_QBaseChildEvent(KSvg__ImageSet* self, QChildEvent* event) {
    auto* vksvgimageset = dynamic_cast<VirtualKSvgImageSet*>(self);
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        vksvgimageset->setKSvg__ImageSet_ChildEvent_IsBase(true);
        vksvgimageset->childEvent(event);
    } else {
        ((VirtualKSvgImageSet*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__ImageSet_OnChildEvent(KSvg__ImageSet* self, intptr_t slot) {
    auto* vksvgimageset = dynamic_cast<VirtualKSvgImageSet*>(self);
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        vksvgimageset->setKSvg__ImageSet_ChildEvent_Callback(reinterpret_cast<VirtualKSvgImageSet::KSvg__ImageSet_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSvg__ImageSet_CustomEvent(KSvg__ImageSet* self, QEvent* event) {
    auto* vksvgimageset = dynamic_cast<VirtualKSvgImageSet*>(self);
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        vksvgimageset->customEvent(event);
    } else {
        ((VirtualKSvgImageSet*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KSvg__ImageSet_QBaseCustomEvent(KSvg__ImageSet* self, QEvent* event) {
    auto* vksvgimageset = dynamic_cast<VirtualKSvgImageSet*>(self);
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        vksvgimageset->setKSvg__ImageSet_CustomEvent_IsBase(true);
        vksvgimageset->customEvent(event);
    } else {
        ((VirtualKSvgImageSet*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__ImageSet_OnCustomEvent(KSvg__ImageSet* self, intptr_t slot) {
    auto* vksvgimageset = dynamic_cast<VirtualKSvgImageSet*>(self);
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        vksvgimageset->setKSvg__ImageSet_CustomEvent_Callback(reinterpret_cast<VirtualKSvgImageSet::KSvg__ImageSet_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSvg__ImageSet_ConnectNotify(KSvg__ImageSet* self, const QMetaMethod* signal) {
    auto* vksvgimageset = dynamic_cast<VirtualKSvgImageSet*>(self);
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        vksvgimageset->connectNotify(*signal);
    } else {
        ((VirtualKSvgImageSet*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KSvg__ImageSet_QBaseConnectNotify(KSvg__ImageSet* self, const QMetaMethod* signal) {
    auto* vksvgimageset = dynamic_cast<VirtualKSvgImageSet*>(self);
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        vksvgimageset->setKSvg__ImageSet_ConnectNotify_IsBase(true);
        vksvgimageset->connectNotify(*signal);
    } else {
        ((VirtualKSvgImageSet*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__ImageSet_OnConnectNotify(KSvg__ImageSet* self, intptr_t slot) {
    auto* vksvgimageset = dynamic_cast<VirtualKSvgImageSet*>(self);
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        vksvgimageset->setKSvg__ImageSet_ConnectNotify_Callback(reinterpret_cast<VirtualKSvgImageSet::KSvg__ImageSet_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KSvg__ImageSet_DisconnectNotify(KSvg__ImageSet* self, const QMetaMethod* signal) {
    auto* vksvgimageset = dynamic_cast<VirtualKSvgImageSet*>(self);
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        vksvgimageset->disconnectNotify(*signal);
    } else {
        ((VirtualKSvgImageSet*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KSvg__ImageSet_QBaseDisconnectNotify(KSvg__ImageSet* self, const QMetaMethod* signal) {
    auto* vksvgimageset = dynamic_cast<VirtualKSvgImageSet*>(self);
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        vksvgimageset->setKSvg__ImageSet_DisconnectNotify_IsBase(true);
        vksvgimageset->disconnectNotify(*signal);
    } else {
        ((VirtualKSvgImageSet*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__ImageSet_OnDisconnectNotify(KSvg__ImageSet* self, intptr_t slot) {
    auto* vksvgimageset = dynamic_cast<VirtualKSvgImageSet*>(self);
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        vksvgimageset->setKSvg__ImageSet_DisconnectNotify_Callback(reinterpret_cast<VirtualKSvgImageSet::KSvg__ImageSet_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KSvg__ImageSet_Sender(const KSvg__ImageSet* self) {
    auto* vksvgimageset = const_cast<VirtualKSvgImageSet*>(dynamic_cast<const VirtualKSvgImageSet*>(self));
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        return vksvgimageset->sender();
    } else {
        return ((VirtualKSvgImageSet*)self)->sender();
    }
}

// Base class handler implementation
QObject* KSvg__ImageSet_QBaseSender(const KSvg__ImageSet* self) {
    auto* vksvgimageset = const_cast<VirtualKSvgImageSet*>(dynamic_cast<const VirtualKSvgImageSet*>(self));
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        vksvgimageset->setKSvg__ImageSet_Sender_IsBase(true);
        return vksvgimageset->sender();
    } else {
        return ((VirtualKSvgImageSet*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__ImageSet_OnSender(const KSvg__ImageSet* self, intptr_t slot) {
    auto* vksvgimageset = const_cast<VirtualKSvgImageSet*>(dynamic_cast<const VirtualKSvgImageSet*>(self));
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        vksvgimageset->setKSvg__ImageSet_Sender_Callback(reinterpret_cast<VirtualKSvgImageSet::KSvg__ImageSet_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KSvg__ImageSet_SenderSignalIndex(const KSvg__ImageSet* self) {
    auto* vksvgimageset = const_cast<VirtualKSvgImageSet*>(dynamic_cast<const VirtualKSvgImageSet*>(self));
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        return vksvgimageset->senderSignalIndex();
    } else {
        return ((VirtualKSvgImageSet*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KSvg__ImageSet_QBaseSenderSignalIndex(const KSvg__ImageSet* self) {
    auto* vksvgimageset = const_cast<VirtualKSvgImageSet*>(dynamic_cast<const VirtualKSvgImageSet*>(self));
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        vksvgimageset->setKSvg__ImageSet_SenderSignalIndex_IsBase(true);
        return vksvgimageset->senderSignalIndex();
    } else {
        return ((VirtualKSvgImageSet*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__ImageSet_OnSenderSignalIndex(const KSvg__ImageSet* self, intptr_t slot) {
    auto* vksvgimageset = const_cast<VirtualKSvgImageSet*>(dynamic_cast<const VirtualKSvgImageSet*>(self));
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        vksvgimageset->setKSvg__ImageSet_SenderSignalIndex_Callback(reinterpret_cast<VirtualKSvgImageSet::KSvg__ImageSet_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KSvg__ImageSet_Receivers(const KSvg__ImageSet* self, const char* signal) {
    auto* vksvgimageset = const_cast<VirtualKSvgImageSet*>(dynamic_cast<const VirtualKSvgImageSet*>(self));
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        return vksvgimageset->receivers(signal);
    } else {
        return ((VirtualKSvgImageSet*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KSvg__ImageSet_QBaseReceivers(const KSvg__ImageSet* self, const char* signal) {
    auto* vksvgimageset = const_cast<VirtualKSvgImageSet*>(dynamic_cast<const VirtualKSvgImageSet*>(self));
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        vksvgimageset->setKSvg__ImageSet_Receivers_IsBase(true);
        return vksvgimageset->receivers(signal);
    } else {
        return ((VirtualKSvgImageSet*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__ImageSet_OnReceivers(const KSvg__ImageSet* self, intptr_t slot) {
    auto* vksvgimageset = const_cast<VirtualKSvgImageSet*>(dynamic_cast<const VirtualKSvgImageSet*>(self));
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        vksvgimageset->setKSvg__ImageSet_Receivers_Callback(reinterpret_cast<VirtualKSvgImageSet::KSvg__ImageSet_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSvg__ImageSet_IsSignalConnected(const KSvg__ImageSet* self, const QMetaMethod* signal) {
    auto* vksvgimageset = const_cast<VirtualKSvgImageSet*>(dynamic_cast<const VirtualKSvgImageSet*>(self));
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        return vksvgimageset->isSignalConnected(*signal);
    } else {
        return ((VirtualKSvgImageSet*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KSvg__ImageSet_QBaseIsSignalConnected(const KSvg__ImageSet* self, const QMetaMethod* signal) {
    auto* vksvgimageset = const_cast<VirtualKSvgImageSet*>(dynamic_cast<const VirtualKSvgImageSet*>(self));
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        vksvgimageset->setKSvg__ImageSet_IsSignalConnected_IsBase(true);
        return vksvgimageset->isSignalConnected(*signal);
    } else {
        return ((VirtualKSvgImageSet*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSvg__ImageSet_OnIsSignalConnected(const KSvg__ImageSet* self, intptr_t slot) {
    auto* vksvgimageset = const_cast<VirtualKSvgImageSet*>(dynamic_cast<const VirtualKSvgImageSet*>(self));
    if (vksvgimageset && vksvgimageset->isVirtualKSvgImageSet) {
        vksvgimageset->setKSvg__ImageSet_IsSignalConnected_Callback(reinterpret_cast<VirtualKSvgImageSet::KSvg__ImageSet_IsSignalConnected_Callback>(slot));
    }
}

void KSvg__ImageSet_Delete(KSvg__ImageSet* self) {
    delete self;
}
