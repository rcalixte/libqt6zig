#define WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__WriteData
#define WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__WriterPlugin
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
#include <writerplugin.h>
#include "libwriterplugin.h"
#include "libwriterplugin.hxx"

KFileMetaData__WriterPlugin* KFileMetaData__WriterPlugin_new(QObject* parent) {
    return new VirtualKFileMetaDataWriterPlugin(parent);
}

QMetaObject* KFileMetaData__WriterPlugin_MetaObject(const KFileMetaData__WriterPlugin* self) {
    auto* vkfilemetadata__writerplugin = dynamic_cast<const VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadata__writerplugin && vkfilemetadata__writerplugin->isVirtualKFileMetaDataWriterPlugin) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualKFileMetaDataWriterPlugin*)self)->metaObject();
    }
}

void* KFileMetaData__WriterPlugin_Metacast(KFileMetaData__WriterPlugin* self, const char* param1) {
    auto* vkfilemetadata__writerplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadata__writerplugin && vkfilemetadata__writerplugin->isVirtualKFileMetaDataWriterPlugin) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualKFileMetaDataWriterPlugin*)self)->qt_metacast(param1);
    }
}

int KFileMetaData__WriterPlugin_Metacall(KFileMetaData__WriterPlugin* self, int param1, int param2, void** param3) {
    auto* vkfilemetadata__writerplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadata__writerplugin && vkfilemetadata__writerplugin->isVirtualKFileMetaDataWriterPlugin) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKFileMetaDataWriterPlugin*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_list /* of libqt_string */ KFileMetaData__WriterPlugin_WriteMimetypes(const KFileMetaData__WriterPlugin* self) {
    auto* vkfilemetadata__writerplugin = dynamic_cast<const VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadata__writerplugin && vkfilemetadata__writerplugin->isVirtualKFileMetaDataWriterPlugin) {
        QList<QString> _ret = vkfilemetadata__writerplugin->writeMimetypes();
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
        QList<QString> _ret = ((VirtualKFileMetaDataWriterPlugin*)self)->writeMimetypes();
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

void KFileMetaData__WriterPlugin_Write(KFileMetaData__WriterPlugin* self, const KFileMetaData__WriteData* data) {
    auto* vkfilemetadata__writerplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadata__writerplugin && vkfilemetadata__writerplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadata__writerplugin->write(*data);
    } else {
        ((VirtualKFileMetaDataWriterPlugin*)self)->write(*data);
    }
}

// Base class handler implementation
QMetaObject* KFileMetaData__WriterPlugin_SuperMetaObject(const KFileMetaData__WriterPlugin* self) {
    auto* vkfilemetadatawriterplugin = const_cast<VirtualKFileMetaDataWriterPlugin*>(dynamic_cast<const VirtualKFileMetaDataWriterPlugin*>(self));
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_MetaObject_IsBase(true);
        return (QMetaObject*)vkfilemetadatawriterplugin->metaObject();
    } else {
        return (QMetaObject*)self->KFileMetaData::WriterPlugin::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__WriterPlugin_OnMetaObject(const KFileMetaData__WriterPlugin* self, intptr_t slot) {
    auto* vkfilemetadatawriterplugin = const_cast<VirtualKFileMetaDataWriterPlugin*>(dynamic_cast<const VirtualKFileMetaDataWriterPlugin*>(self));
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_MetaObject_Callback(reinterpret_cast<VirtualKFileMetaDataWriterPlugin::KFileMetaData__WriterPlugin_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* KFileMetaData__WriterPlugin_SuperMetacast(KFileMetaData__WriterPlugin* self, const char* param1) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_Metacast_IsBase(true);
        return vkfilemetadatawriterplugin->qt_metacast(param1);
    } else {
        return self->KFileMetaData::WriterPlugin::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__WriterPlugin_OnMetacast(KFileMetaData__WriterPlugin* self, intptr_t slot) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_Metacast_Callback(reinterpret_cast<VirtualKFileMetaDataWriterPlugin::KFileMetaData__WriterPlugin_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int KFileMetaData__WriterPlugin_SuperMetacall(KFileMetaData__WriterPlugin* self, int param1, int param2, void** param3) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_Metacall_IsBase(true);
        return vkfilemetadatawriterplugin->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KFileMetaData::WriterPlugin::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__WriterPlugin_OnMetacall(KFileMetaData__WriterPlugin* self, intptr_t slot) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_Metacall_Callback(reinterpret_cast<VirtualKFileMetaDataWriterPlugin::KFileMetaData__WriterPlugin_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of libqt_string */ KFileMetaData__WriterPlugin_SuperWriteMimetypes(const KFileMetaData__WriterPlugin* self) {
    auto* vkfilemetadatawriterplugin = const_cast<VirtualKFileMetaDataWriterPlugin*>(dynamic_cast<const VirtualKFileMetaDataWriterPlugin*>(self));
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_WriteMimetypes_IsBase(true);
        QList<QString> _ret = vkfilemetadatawriterplugin->writeMimetypes();
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
        QList<QString> _ret = ((VirtualKFileMetaDataWriterPlugin*)self)->writeMimetypes();
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
void KFileMetaData__WriterPlugin_OnWriteMimetypes(const KFileMetaData__WriterPlugin* self, intptr_t slot) {
    auto* vkfilemetadatawriterplugin = const_cast<VirtualKFileMetaDataWriterPlugin*>(dynamic_cast<const VirtualKFileMetaDataWriterPlugin*>(self));
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_WriteMimetypes_Callback(reinterpret_cast<VirtualKFileMetaDataWriterPlugin::KFileMetaData__WriterPlugin_WriteMimetypes_Callback>(slot));
    }
}

// Base class handler implementation
void KFileMetaData__WriterPlugin_SuperWrite(KFileMetaData__WriterPlugin* self, const KFileMetaData__WriteData* data) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_Write_IsBase(true);
        vkfilemetadatawriterplugin->write(*data);
    } else {
        ((VirtualKFileMetaDataWriterPlugin*)self)->write(*data);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__WriterPlugin_OnWrite(KFileMetaData__WriterPlugin* self, intptr_t slot) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_Write_Callback(reinterpret_cast<VirtualKFileMetaDataWriterPlugin::KFileMetaData__WriterPlugin_Write_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileMetaData__WriterPlugin_Event(KFileMetaData__WriterPlugin* self, QEvent* event) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        return vkfilemetadatawriterplugin->event(event);
    } else {
        return self->KFileMetaData::WriterPlugin::event(event);
    }
}

// Base class handler implementation
bool KFileMetaData__WriterPlugin_SuperEvent(KFileMetaData__WriterPlugin* self, QEvent* event) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_Event_IsBase(true);
        return vkfilemetadatawriterplugin->event(event);
    } else {
        return self->KFileMetaData::WriterPlugin::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__WriterPlugin_OnEvent(KFileMetaData__WriterPlugin* self, intptr_t slot) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_Event_Callback(reinterpret_cast<VirtualKFileMetaDataWriterPlugin::KFileMetaData__WriterPlugin_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileMetaData__WriterPlugin_EventFilter(KFileMetaData__WriterPlugin* self, QObject* watched, QEvent* event) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        return vkfilemetadatawriterplugin->eventFilter(watched, event);
    } else {
        return self->KFileMetaData::WriterPlugin::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KFileMetaData__WriterPlugin_SuperEventFilter(KFileMetaData__WriterPlugin* self, QObject* watched, QEvent* event) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_EventFilter_IsBase(true);
        return vkfilemetadatawriterplugin->eventFilter(watched, event);
    } else {
        return self->KFileMetaData::WriterPlugin::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__WriterPlugin_OnEventFilter(KFileMetaData__WriterPlugin* self, intptr_t slot) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_EventFilter_Callback(reinterpret_cast<VirtualKFileMetaDataWriterPlugin::KFileMetaData__WriterPlugin_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileMetaData__WriterPlugin_TimerEvent(KFileMetaData__WriterPlugin* self, QTimerEvent* event) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->timerEvent(event);
    } else {
        ((VirtualKFileMetaDataWriterPlugin*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KFileMetaData__WriterPlugin_SuperTimerEvent(KFileMetaData__WriterPlugin* self, QTimerEvent* event) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_TimerEvent_IsBase(true);
        vkfilemetadatawriterplugin->timerEvent(event);
    } else {
        ((VirtualKFileMetaDataWriterPlugin*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__WriterPlugin_OnTimerEvent(KFileMetaData__WriterPlugin* self, intptr_t slot) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_TimerEvent_Callback(reinterpret_cast<VirtualKFileMetaDataWriterPlugin::KFileMetaData__WriterPlugin_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileMetaData__WriterPlugin_ChildEvent(KFileMetaData__WriterPlugin* self, QChildEvent* event) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->childEvent(event);
    } else {
        ((VirtualKFileMetaDataWriterPlugin*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KFileMetaData__WriterPlugin_SuperChildEvent(KFileMetaData__WriterPlugin* self, QChildEvent* event) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_ChildEvent_IsBase(true);
        vkfilemetadatawriterplugin->childEvent(event);
    } else {
        ((VirtualKFileMetaDataWriterPlugin*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__WriterPlugin_OnChildEvent(KFileMetaData__WriterPlugin* self, intptr_t slot) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_ChildEvent_Callback(reinterpret_cast<VirtualKFileMetaDataWriterPlugin::KFileMetaData__WriterPlugin_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileMetaData__WriterPlugin_CustomEvent(KFileMetaData__WriterPlugin* self, QEvent* event) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->customEvent(event);
    } else {
        ((VirtualKFileMetaDataWriterPlugin*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KFileMetaData__WriterPlugin_SuperCustomEvent(KFileMetaData__WriterPlugin* self, QEvent* event) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_CustomEvent_IsBase(true);
        vkfilemetadatawriterplugin->customEvent(event);
    } else {
        ((VirtualKFileMetaDataWriterPlugin*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__WriterPlugin_OnCustomEvent(KFileMetaData__WriterPlugin* self, intptr_t slot) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_CustomEvent_Callback(reinterpret_cast<VirtualKFileMetaDataWriterPlugin::KFileMetaData__WriterPlugin_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileMetaData__WriterPlugin_ConnectNotify(KFileMetaData__WriterPlugin* self, const QMetaMethod* signal) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->connectNotify(*signal);
    } else {
        ((VirtualKFileMetaDataWriterPlugin*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KFileMetaData__WriterPlugin_SuperConnectNotify(KFileMetaData__WriterPlugin* self, const QMetaMethod* signal) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_ConnectNotify_IsBase(true);
        vkfilemetadatawriterplugin->connectNotify(*signal);
    } else {
        ((VirtualKFileMetaDataWriterPlugin*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__WriterPlugin_OnConnectNotify(KFileMetaData__WriterPlugin* self, intptr_t slot) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_ConnectNotify_Callback(reinterpret_cast<VirtualKFileMetaDataWriterPlugin::KFileMetaData__WriterPlugin_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileMetaData__WriterPlugin_DisconnectNotify(KFileMetaData__WriterPlugin* self, const QMetaMethod* signal) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->disconnectNotify(*signal);
    } else {
        ((VirtualKFileMetaDataWriterPlugin*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KFileMetaData__WriterPlugin_SuperDisconnectNotify(KFileMetaData__WriterPlugin* self, const QMetaMethod* signal) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_DisconnectNotify_IsBase(true);
        vkfilemetadatawriterplugin->disconnectNotify(*signal);
    } else {
        ((VirtualKFileMetaDataWriterPlugin*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__WriterPlugin_OnDisconnectNotify(KFileMetaData__WriterPlugin* self, intptr_t slot) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_DisconnectNotify_Callback(reinterpret_cast<VirtualKFileMetaDataWriterPlugin::KFileMetaData__WriterPlugin_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KFileMetaData__WriterPlugin_Sender(const KFileMetaData__WriterPlugin* self) {
    auto* vkfilemetadatawriterplugin = const_cast<VirtualKFileMetaDataWriterPlugin*>(dynamic_cast<const VirtualKFileMetaDataWriterPlugin*>(self));
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        return vkfilemetadatawriterplugin->sender();
    } else {
        return ((VirtualKFileMetaDataWriterPlugin*)self)->sender();
    }
}

// Base class handler implementation
QObject* KFileMetaData__WriterPlugin_SuperSender(const KFileMetaData__WriterPlugin* self) {
    auto* vkfilemetadatawriterplugin = const_cast<VirtualKFileMetaDataWriterPlugin*>(dynamic_cast<const VirtualKFileMetaDataWriterPlugin*>(self));
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_Sender_IsBase(true);
        return vkfilemetadatawriterplugin->sender();
    } else {
        return ((VirtualKFileMetaDataWriterPlugin*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__WriterPlugin_OnSender(const KFileMetaData__WriterPlugin* self, intptr_t slot) {
    auto* vkfilemetadatawriterplugin = const_cast<VirtualKFileMetaDataWriterPlugin*>(dynamic_cast<const VirtualKFileMetaDataWriterPlugin*>(self));
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_Sender_Callback(reinterpret_cast<VirtualKFileMetaDataWriterPlugin::KFileMetaData__WriterPlugin_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KFileMetaData__WriterPlugin_SenderSignalIndex(const KFileMetaData__WriterPlugin* self) {
    auto* vkfilemetadatawriterplugin = const_cast<VirtualKFileMetaDataWriterPlugin*>(dynamic_cast<const VirtualKFileMetaDataWriterPlugin*>(self));
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        return vkfilemetadatawriterplugin->senderSignalIndex();
    } else {
        return ((VirtualKFileMetaDataWriterPlugin*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KFileMetaData__WriterPlugin_SuperSenderSignalIndex(const KFileMetaData__WriterPlugin* self) {
    auto* vkfilemetadatawriterplugin = const_cast<VirtualKFileMetaDataWriterPlugin*>(dynamic_cast<const VirtualKFileMetaDataWriterPlugin*>(self));
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_SenderSignalIndex_IsBase(true);
        return vkfilemetadatawriterplugin->senderSignalIndex();
    } else {
        return ((VirtualKFileMetaDataWriterPlugin*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__WriterPlugin_OnSenderSignalIndex(const KFileMetaData__WriterPlugin* self, intptr_t slot) {
    auto* vkfilemetadatawriterplugin = const_cast<VirtualKFileMetaDataWriterPlugin*>(dynamic_cast<const VirtualKFileMetaDataWriterPlugin*>(self));
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_SenderSignalIndex_Callback(reinterpret_cast<VirtualKFileMetaDataWriterPlugin::KFileMetaData__WriterPlugin_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KFileMetaData__WriterPlugin_Receivers(const KFileMetaData__WriterPlugin* self, const char* signal) {
    auto* vkfilemetadatawriterplugin = const_cast<VirtualKFileMetaDataWriterPlugin*>(dynamic_cast<const VirtualKFileMetaDataWriterPlugin*>(self));
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        return vkfilemetadatawriterplugin->receivers(signal);
    } else {
        return ((VirtualKFileMetaDataWriterPlugin*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KFileMetaData__WriterPlugin_SuperReceivers(const KFileMetaData__WriterPlugin* self, const char* signal) {
    auto* vkfilemetadatawriterplugin = const_cast<VirtualKFileMetaDataWriterPlugin*>(dynamic_cast<const VirtualKFileMetaDataWriterPlugin*>(self));
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_Receivers_IsBase(true);
        return vkfilemetadatawriterplugin->receivers(signal);
    } else {
        return ((VirtualKFileMetaDataWriterPlugin*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__WriterPlugin_OnReceivers(const KFileMetaData__WriterPlugin* self, intptr_t slot) {
    auto* vkfilemetadatawriterplugin = const_cast<VirtualKFileMetaDataWriterPlugin*>(dynamic_cast<const VirtualKFileMetaDataWriterPlugin*>(self));
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_Receivers_Callback(reinterpret_cast<VirtualKFileMetaDataWriterPlugin::KFileMetaData__WriterPlugin_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileMetaData__WriterPlugin_IsSignalConnected(const KFileMetaData__WriterPlugin* self, const QMetaMethod* signal) {
    auto* vkfilemetadatawriterplugin = const_cast<VirtualKFileMetaDataWriterPlugin*>(dynamic_cast<const VirtualKFileMetaDataWriterPlugin*>(self));
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        return vkfilemetadatawriterplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualKFileMetaDataWriterPlugin*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KFileMetaData__WriterPlugin_SuperIsSignalConnected(const KFileMetaData__WriterPlugin* self, const QMetaMethod* signal) {
    auto* vkfilemetadatawriterplugin = const_cast<VirtualKFileMetaDataWriterPlugin*>(dynamic_cast<const VirtualKFileMetaDataWriterPlugin*>(self));
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_IsSignalConnected_IsBase(true);
        return vkfilemetadatawriterplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualKFileMetaDataWriterPlugin*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__WriterPlugin_OnIsSignalConnected(const KFileMetaData__WriterPlugin* self, intptr_t slot) {
    auto* vkfilemetadatawriterplugin = const_cast<VirtualKFileMetaDataWriterPlugin*>(dynamic_cast<const VirtualKFileMetaDataWriterPlugin*>(self));
    if (vkfilemetadatawriterplugin && vkfilemetadatawriterplugin->isVirtualKFileMetaDataWriterPlugin) {
        vkfilemetadatawriterplugin->setKFileMetaData__WriterPlugin_IsSignalConnected_Callback(reinterpret_cast<VirtualKFileMetaDataWriterPlugin::KFileMetaData__WriterPlugin_IsSignalConnected_Callback>(slot));
    }
}

void KFileMetaData__WriterPlugin_Delete(KFileMetaData__WriterPlugin* self) {
    delete self;
}
