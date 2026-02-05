#define WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__ExtractionResult
#define WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__ExtractorPlugin
#include <QChildEvent>
#include <QDateTime>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <extractorplugin.h>
#include "libextractorplugin.h"
#include "libextractorplugin.hxx"

KFileMetaData__ExtractorPlugin* KFileMetaData__ExtractorPlugin_new(QObject* parent) {
    return new VirtualKFileMetaDataExtractorPlugin(parent);
}

QMetaObject* KFileMetaData__ExtractorPlugin_MetaObject(const KFileMetaData__ExtractorPlugin* self) {
    auto* vkfilemetadata__extractorplugin = dynamic_cast<const VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadata__extractorplugin && vkfilemetadata__extractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualKFileMetaDataExtractorPlugin*)self)->metaObject();
    }
}

void* KFileMetaData__ExtractorPlugin_Metacast(KFileMetaData__ExtractorPlugin* self, const char* param1) {
    auto* vkfilemetadata__extractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadata__extractorplugin && vkfilemetadata__extractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualKFileMetaDataExtractorPlugin*)self)->qt_metacast(param1);
    }
}

int KFileMetaData__ExtractorPlugin_Metacall(KFileMetaData__ExtractorPlugin* self, int param1, int param2, void** param3) {
    auto* vkfilemetadata__extractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadata__extractorplugin && vkfilemetadata__extractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKFileMetaDataExtractorPlugin*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_list /* of libqt_string */ KFileMetaData__ExtractorPlugin_Mimetypes(const KFileMetaData__ExtractorPlugin* self) {
    auto* vkfilemetadata__extractorplugin = dynamic_cast<const VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadata__extractorplugin && vkfilemetadata__extractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        QList<QString> _ret = vkfilemetadata__extractorplugin->mimetypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
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
    } else {
        QList<QString> _ret = ((VirtualKFileMetaDataExtractorPlugin*)self)->mimetypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
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
}

void KFileMetaData__ExtractorPlugin_Extract(KFileMetaData__ExtractorPlugin* self, KFileMetaData__ExtractionResult* result) {
    auto* vkfilemetadata__extractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadata__extractorplugin && vkfilemetadata__extractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadata__extractorplugin->extract(result);
    } else {
        ((VirtualKFileMetaDataExtractorPlugin*)self)->extract(result);
    }
}

QDateTime* KFileMetaData__ExtractorPlugin_DateTimeFromString(const libqt_string dateString) {
    QString dateString_QString = QString::fromUtf8(dateString.data, dateString.len);
    return new QDateTime(KFileMetaData::ExtractorPlugin::dateTimeFromString(dateString_QString));
}

libqt_list /* of libqt_string */ KFileMetaData__ExtractorPlugin_ContactsFromString(const libqt_string stringVal) {
    QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
    QList<QString> _ret = KFileMetaData::ExtractorPlugin::contactsFromString(stringVal_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
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

// Base class handler implementation
QMetaObject* KFileMetaData__ExtractorPlugin_QBaseMetaObject(const KFileMetaData__ExtractorPlugin* self) {
    auto* vkfilemetadataextractorplugin = const_cast<VirtualKFileMetaDataExtractorPlugin*>(dynamic_cast<const VirtualKFileMetaDataExtractorPlugin*>(self));
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_MetaObject_IsBase(true);
        return (QMetaObject*)vkfilemetadataextractorplugin->metaObject();
    } else {
        return (QMetaObject*)self->KFileMetaData::ExtractorPlugin::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractorPlugin_OnMetaObject(const KFileMetaData__ExtractorPlugin* self, intptr_t slot) {
    auto* vkfilemetadataextractorplugin = const_cast<VirtualKFileMetaDataExtractorPlugin*>(dynamic_cast<const VirtualKFileMetaDataExtractorPlugin*>(self));
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_MetaObject_Callback(reinterpret_cast<VirtualKFileMetaDataExtractorPlugin::KFileMetaData__ExtractorPlugin_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* KFileMetaData__ExtractorPlugin_QBaseMetacast(KFileMetaData__ExtractorPlugin* self, const char* param1) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_Metacast_IsBase(true);
        return vkfilemetadataextractorplugin->qt_metacast(param1);
    } else {
        return self->KFileMetaData::ExtractorPlugin::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractorPlugin_OnMetacast(KFileMetaData__ExtractorPlugin* self, intptr_t slot) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_Metacast_Callback(reinterpret_cast<VirtualKFileMetaDataExtractorPlugin::KFileMetaData__ExtractorPlugin_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int KFileMetaData__ExtractorPlugin_QBaseMetacall(KFileMetaData__ExtractorPlugin* self, int param1, int param2, void** param3) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_Metacall_IsBase(true);
        return vkfilemetadataextractorplugin->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KFileMetaData::ExtractorPlugin::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractorPlugin_OnMetacall(KFileMetaData__ExtractorPlugin* self, intptr_t slot) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_Metacall_Callback(reinterpret_cast<VirtualKFileMetaDataExtractorPlugin::KFileMetaData__ExtractorPlugin_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of libqt_string */ KFileMetaData__ExtractorPlugin_QBaseMimetypes(const KFileMetaData__ExtractorPlugin* self) {
    auto* vkfilemetadataextractorplugin = const_cast<VirtualKFileMetaDataExtractorPlugin*>(dynamic_cast<const VirtualKFileMetaDataExtractorPlugin*>(self));
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_Mimetypes_IsBase(true);
        QList<QString> _ret = vkfilemetadataextractorplugin->mimetypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
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
    } else {
        QList<QString> _ret = ((VirtualKFileMetaDataExtractorPlugin*)self)->mimetypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
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
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractorPlugin_OnMimetypes(const KFileMetaData__ExtractorPlugin* self, intptr_t slot) {
    auto* vkfilemetadataextractorplugin = const_cast<VirtualKFileMetaDataExtractorPlugin*>(dynamic_cast<const VirtualKFileMetaDataExtractorPlugin*>(self));
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_Mimetypes_Callback(reinterpret_cast<VirtualKFileMetaDataExtractorPlugin::KFileMetaData__ExtractorPlugin_Mimetypes_Callback>(slot));
    }
}

// Base class handler implementation
void KFileMetaData__ExtractorPlugin_QBaseExtract(KFileMetaData__ExtractorPlugin* self, KFileMetaData__ExtractionResult* result) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_Extract_IsBase(true);
        vkfilemetadataextractorplugin->extract(result);
    } else {
        ((VirtualKFileMetaDataExtractorPlugin*)self)->extract(result);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractorPlugin_OnExtract(KFileMetaData__ExtractorPlugin* self, intptr_t slot) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_Extract_Callback(reinterpret_cast<VirtualKFileMetaDataExtractorPlugin::KFileMetaData__ExtractorPlugin_Extract_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileMetaData__ExtractorPlugin_Event(KFileMetaData__ExtractorPlugin* self, QEvent* event) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        return vkfilemetadataextractorplugin->event(event);
    } else {
        return self->KFileMetaData::ExtractorPlugin::event(event);
    }
}

// Base class handler implementation
bool KFileMetaData__ExtractorPlugin_QBaseEvent(KFileMetaData__ExtractorPlugin* self, QEvent* event) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_Event_IsBase(true);
        return vkfilemetadataextractorplugin->event(event);
    } else {
        return self->KFileMetaData::ExtractorPlugin::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractorPlugin_OnEvent(KFileMetaData__ExtractorPlugin* self, intptr_t slot) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_Event_Callback(reinterpret_cast<VirtualKFileMetaDataExtractorPlugin::KFileMetaData__ExtractorPlugin_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileMetaData__ExtractorPlugin_EventFilter(KFileMetaData__ExtractorPlugin* self, QObject* watched, QEvent* event) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        return vkfilemetadataextractorplugin->eventFilter(watched, event);
    } else {
        return self->KFileMetaData::ExtractorPlugin::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KFileMetaData__ExtractorPlugin_QBaseEventFilter(KFileMetaData__ExtractorPlugin* self, QObject* watched, QEvent* event) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_EventFilter_IsBase(true);
        return vkfilemetadataextractorplugin->eventFilter(watched, event);
    } else {
        return self->KFileMetaData::ExtractorPlugin::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractorPlugin_OnEventFilter(KFileMetaData__ExtractorPlugin* self, intptr_t slot) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_EventFilter_Callback(reinterpret_cast<VirtualKFileMetaDataExtractorPlugin::KFileMetaData__ExtractorPlugin_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileMetaData__ExtractorPlugin_TimerEvent(KFileMetaData__ExtractorPlugin* self, QTimerEvent* event) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->timerEvent(event);
    } else {
        ((VirtualKFileMetaDataExtractorPlugin*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KFileMetaData__ExtractorPlugin_QBaseTimerEvent(KFileMetaData__ExtractorPlugin* self, QTimerEvent* event) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_TimerEvent_IsBase(true);
        vkfilemetadataextractorplugin->timerEvent(event);
    } else {
        ((VirtualKFileMetaDataExtractorPlugin*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractorPlugin_OnTimerEvent(KFileMetaData__ExtractorPlugin* self, intptr_t slot) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_TimerEvent_Callback(reinterpret_cast<VirtualKFileMetaDataExtractorPlugin::KFileMetaData__ExtractorPlugin_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileMetaData__ExtractorPlugin_ChildEvent(KFileMetaData__ExtractorPlugin* self, QChildEvent* event) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->childEvent(event);
    } else {
        ((VirtualKFileMetaDataExtractorPlugin*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KFileMetaData__ExtractorPlugin_QBaseChildEvent(KFileMetaData__ExtractorPlugin* self, QChildEvent* event) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_ChildEvent_IsBase(true);
        vkfilemetadataextractorplugin->childEvent(event);
    } else {
        ((VirtualKFileMetaDataExtractorPlugin*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractorPlugin_OnChildEvent(KFileMetaData__ExtractorPlugin* self, intptr_t slot) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_ChildEvent_Callback(reinterpret_cast<VirtualKFileMetaDataExtractorPlugin::KFileMetaData__ExtractorPlugin_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileMetaData__ExtractorPlugin_CustomEvent(KFileMetaData__ExtractorPlugin* self, QEvent* event) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->customEvent(event);
    } else {
        ((VirtualKFileMetaDataExtractorPlugin*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KFileMetaData__ExtractorPlugin_QBaseCustomEvent(KFileMetaData__ExtractorPlugin* self, QEvent* event) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_CustomEvent_IsBase(true);
        vkfilemetadataextractorplugin->customEvent(event);
    } else {
        ((VirtualKFileMetaDataExtractorPlugin*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractorPlugin_OnCustomEvent(KFileMetaData__ExtractorPlugin* self, intptr_t slot) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_CustomEvent_Callback(reinterpret_cast<VirtualKFileMetaDataExtractorPlugin::KFileMetaData__ExtractorPlugin_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileMetaData__ExtractorPlugin_ConnectNotify(KFileMetaData__ExtractorPlugin* self, const QMetaMethod* signal) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->connectNotify(*signal);
    } else {
        ((VirtualKFileMetaDataExtractorPlugin*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KFileMetaData__ExtractorPlugin_QBaseConnectNotify(KFileMetaData__ExtractorPlugin* self, const QMetaMethod* signal) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_ConnectNotify_IsBase(true);
        vkfilemetadataextractorplugin->connectNotify(*signal);
    } else {
        ((VirtualKFileMetaDataExtractorPlugin*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractorPlugin_OnConnectNotify(KFileMetaData__ExtractorPlugin* self, intptr_t slot) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_ConnectNotify_Callback(reinterpret_cast<VirtualKFileMetaDataExtractorPlugin::KFileMetaData__ExtractorPlugin_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileMetaData__ExtractorPlugin_DisconnectNotify(KFileMetaData__ExtractorPlugin* self, const QMetaMethod* signal) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->disconnectNotify(*signal);
    } else {
        ((VirtualKFileMetaDataExtractorPlugin*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KFileMetaData__ExtractorPlugin_QBaseDisconnectNotify(KFileMetaData__ExtractorPlugin* self, const QMetaMethod* signal) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_DisconnectNotify_IsBase(true);
        vkfilemetadataextractorplugin->disconnectNotify(*signal);
    } else {
        ((VirtualKFileMetaDataExtractorPlugin*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractorPlugin_OnDisconnectNotify(KFileMetaData__ExtractorPlugin* self, intptr_t slot) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_DisconnectNotify_Callback(reinterpret_cast<VirtualKFileMetaDataExtractorPlugin::KFileMetaData__ExtractorPlugin_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KFileMetaData__ExtractorPlugin_GetSupportedMimeType(const KFileMetaData__ExtractorPlugin* self, const libqt_string mimetype) {
    auto* vkfilemetadataextractorplugin = const_cast<VirtualKFileMetaDataExtractorPlugin*>(dynamic_cast<const VirtualKFileMetaDataExtractorPlugin*>(self));
    QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        QString _ret = vkfilemetadataextractorplugin->getSupportedMimeType(mimetype_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKFileMetaDataExtractorPlugin*)self)->getSupportedMimeType(mimetype_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string KFileMetaData__ExtractorPlugin_QBaseGetSupportedMimeType(const KFileMetaData__ExtractorPlugin* self, const libqt_string mimetype) {
    auto* vkfilemetadataextractorplugin = const_cast<VirtualKFileMetaDataExtractorPlugin*>(dynamic_cast<const VirtualKFileMetaDataExtractorPlugin*>(self));
    QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_GetSupportedMimeType_IsBase(true);
        QString _ret = vkfilemetadataextractorplugin->getSupportedMimeType(mimetype_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKFileMetaDataExtractorPlugin*)self)->getSupportedMimeType(mimetype_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractorPlugin_OnGetSupportedMimeType(const KFileMetaData__ExtractorPlugin* self, intptr_t slot) {
    auto* vkfilemetadataextractorplugin = const_cast<VirtualKFileMetaDataExtractorPlugin*>(dynamic_cast<const VirtualKFileMetaDataExtractorPlugin*>(self));
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_GetSupportedMimeType_Callback(reinterpret_cast<VirtualKFileMetaDataExtractorPlugin::KFileMetaData__ExtractorPlugin_GetSupportedMimeType_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KFileMetaData__ExtractorPlugin_Sender(const KFileMetaData__ExtractorPlugin* self) {
    auto* vkfilemetadataextractorplugin = const_cast<VirtualKFileMetaDataExtractorPlugin*>(dynamic_cast<const VirtualKFileMetaDataExtractorPlugin*>(self));
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        return vkfilemetadataextractorplugin->sender();
    } else {
        return ((VirtualKFileMetaDataExtractorPlugin*)self)->sender();
    }
}

// Base class handler implementation
QObject* KFileMetaData__ExtractorPlugin_QBaseSender(const KFileMetaData__ExtractorPlugin* self) {
    auto* vkfilemetadataextractorplugin = const_cast<VirtualKFileMetaDataExtractorPlugin*>(dynamic_cast<const VirtualKFileMetaDataExtractorPlugin*>(self));
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_Sender_IsBase(true);
        return vkfilemetadataextractorplugin->sender();
    } else {
        return ((VirtualKFileMetaDataExtractorPlugin*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractorPlugin_OnSender(const KFileMetaData__ExtractorPlugin* self, intptr_t slot) {
    auto* vkfilemetadataextractorplugin = const_cast<VirtualKFileMetaDataExtractorPlugin*>(dynamic_cast<const VirtualKFileMetaDataExtractorPlugin*>(self));
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_Sender_Callback(reinterpret_cast<VirtualKFileMetaDataExtractorPlugin::KFileMetaData__ExtractorPlugin_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KFileMetaData__ExtractorPlugin_SenderSignalIndex(const KFileMetaData__ExtractorPlugin* self) {
    auto* vkfilemetadataextractorplugin = const_cast<VirtualKFileMetaDataExtractorPlugin*>(dynamic_cast<const VirtualKFileMetaDataExtractorPlugin*>(self));
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        return vkfilemetadataextractorplugin->senderSignalIndex();
    } else {
        return ((VirtualKFileMetaDataExtractorPlugin*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KFileMetaData__ExtractorPlugin_QBaseSenderSignalIndex(const KFileMetaData__ExtractorPlugin* self) {
    auto* vkfilemetadataextractorplugin = const_cast<VirtualKFileMetaDataExtractorPlugin*>(dynamic_cast<const VirtualKFileMetaDataExtractorPlugin*>(self));
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_SenderSignalIndex_IsBase(true);
        return vkfilemetadataextractorplugin->senderSignalIndex();
    } else {
        return ((VirtualKFileMetaDataExtractorPlugin*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractorPlugin_OnSenderSignalIndex(const KFileMetaData__ExtractorPlugin* self, intptr_t slot) {
    auto* vkfilemetadataextractorplugin = const_cast<VirtualKFileMetaDataExtractorPlugin*>(dynamic_cast<const VirtualKFileMetaDataExtractorPlugin*>(self));
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_SenderSignalIndex_Callback(reinterpret_cast<VirtualKFileMetaDataExtractorPlugin::KFileMetaData__ExtractorPlugin_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KFileMetaData__ExtractorPlugin_Receivers(const KFileMetaData__ExtractorPlugin* self, const char* signal) {
    auto* vkfilemetadataextractorplugin = const_cast<VirtualKFileMetaDataExtractorPlugin*>(dynamic_cast<const VirtualKFileMetaDataExtractorPlugin*>(self));
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        return vkfilemetadataextractorplugin->receivers(signal);
    } else {
        return ((VirtualKFileMetaDataExtractorPlugin*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KFileMetaData__ExtractorPlugin_QBaseReceivers(const KFileMetaData__ExtractorPlugin* self, const char* signal) {
    auto* vkfilemetadataextractorplugin = const_cast<VirtualKFileMetaDataExtractorPlugin*>(dynamic_cast<const VirtualKFileMetaDataExtractorPlugin*>(self));
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_Receivers_IsBase(true);
        return vkfilemetadataextractorplugin->receivers(signal);
    } else {
        return ((VirtualKFileMetaDataExtractorPlugin*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractorPlugin_OnReceivers(const KFileMetaData__ExtractorPlugin* self, intptr_t slot) {
    auto* vkfilemetadataextractorplugin = const_cast<VirtualKFileMetaDataExtractorPlugin*>(dynamic_cast<const VirtualKFileMetaDataExtractorPlugin*>(self));
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_Receivers_Callback(reinterpret_cast<VirtualKFileMetaDataExtractorPlugin::KFileMetaData__ExtractorPlugin_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileMetaData__ExtractorPlugin_IsSignalConnected(const KFileMetaData__ExtractorPlugin* self, const QMetaMethod* signal) {
    auto* vkfilemetadataextractorplugin = const_cast<VirtualKFileMetaDataExtractorPlugin*>(dynamic_cast<const VirtualKFileMetaDataExtractorPlugin*>(self));
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        return vkfilemetadataextractorplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualKFileMetaDataExtractorPlugin*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KFileMetaData__ExtractorPlugin_QBaseIsSignalConnected(const KFileMetaData__ExtractorPlugin* self, const QMetaMethod* signal) {
    auto* vkfilemetadataextractorplugin = const_cast<VirtualKFileMetaDataExtractorPlugin*>(dynamic_cast<const VirtualKFileMetaDataExtractorPlugin*>(self));
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_IsSignalConnected_IsBase(true);
        return vkfilemetadataextractorplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualKFileMetaDataExtractorPlugin*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractorPlugin_OnIsSignalConnected(const KFileMetaData__ExtractorPlugin* self, intptr_t slot) {
    auto* vkfilemetadataextractorplugin = const_cast<VirtualKFileMetaDataExtractorPlugin*>(dynamic_cast<const VirtualKFileMetaDataExtractorPlugin*>(self));
    if (vkfilemetadataextractorplugin && vkfilemetadataextractorplugin->isVirtualKFileMetaDataExtractorPlugin) {
        vkfilemetadataextractorplugin->setKFileMetaData__ExtractorPlugin_IsSignalConnected_Callback(reinterpret_cast<VirtualKFileMetaDataExtractorPlugin::KFileMetaData__ExtractorPlugin_IsSignalConnected_Callback>(slot));
    }
}

void KFileMetaData__ExtractorPlugin_Delete(KFileMetaData__ExtractorPlugin* self) {
    delete self;
}
