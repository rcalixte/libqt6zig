#include <KCompletion>
#include <KCompletionBase>
#include <QKeySequence>
#include <QList>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kcompletionbase.h>
#include "libkcompletionbase.h"
#include "libkcompletionbase.hxx"

KCompletionBase* KCompletionBase_new() {
    return new VirtualKCompletionBase();
}

KCompletion* KCompletionBase_CompletionObject(KCompletionBase* self) {
    return self->completionObject();
}

void KCompletionBase_SetCompletionObject(KCompletionBase* self, KCompletion* completionObject, bool handleSignals) {
    auto* vkcompletionbase = dynamic_cast<VirtualKCompletionBase*>(self);
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        self->setCompletionObject(completionObject, handleSignals);
    } else {
        ((VirtualKCompletionBase*)self)->setCompletionObject(completionObject, handleSignals);
    }
}

void KCompletionBase_SetHandleSignals(KCompletionBase* self, bool handle) {
    auto* vkcompletionbase = dynamic_cast<VirtualKCompletionBase*>(self);
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        self->setHandleSignals(handle);
    } else {
        ((VirtualKCompletionBase*)self)->setHandleSignals(handle);
    }
}

bool KCompletionBase_IsCompletionObjectAutoDeleted(const KCompletionBase* self) {
    return self->isCompletionObjectAutoDeleted();
}

void KCompletionBase_SetAutoDeleteCompletionObject(KCompletionBase* self, bool autoDelete) {
    self->setAutoDeleteCompletionObject(autoDelete);
}

void KCompletionBase_SetEnableSignals(KCompletionBase* self, bool enable) {
    self->setEnableSignals(enable);
}

bool KCompletionBase_HandleSignals(const KCompletionBase* self) {
    return self->handleSignals();
}

bool KCompletionBase_EmitSignals(const KCompletionBase* self) {
    return self->emitSignals();
}

void KCompletionBase_SetEmitSignals(KCompletionBase* self, bool emitRotationSignals) {
    self->setEmitSignals(emitRotationSignals);
}

void KCompletionBase_SetCompletionMode(KCompletionBase* self, int mode) {
    auto* vkcompletionbase = dynamic_cast<VirtualKCompletionBase*>(self);
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        self->setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    } else {
        ((VirtualKCompletionBase*)self)->setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    }
}

int KCompletionBase_CompletionMode(const KCompletionBase* self) {
    return static_cast<int>(self->completionMode());
}

bool KCompletionBase_SetKeyBinding(KCompletionBase* self, int item, const libqt_list /* of QKeySequence* */ key) {
    QList<QKeySequence> key_QList;
    key_QList.reserve(key.len);
    QKeySequence** key_arr = static_cast<QKeySequence**>(key.data);
    for (size_t i = 0; i < key.len; ++i) {
        key_QList.push_back(*(key_arr[i]));
    }
    return self->setKeyBinding(static_cast<KCompletionBase::KeyBindingType>(item), key_QList);
}

libqt_list /* of QKeySequence* */ KCompletionBase_KeyBinding(const KCompletionBase* self, int item) {
    QList<QKeySequence> _ret = self->keyBinding(static_cast<KCompletionBase::KeyBindingType>(item));
    // Convert QList<> from C++ memory to manually-managed C memory
    QKeySequence** _arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QKeySequence(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KCompletionBase_UseGlobalKeyBindings(KCompletionBase* self) {
    self->useGlobalKeyBindings();
}

void KCompletionBase_SetCompletedText(KCompletionBase* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vkcompletionbase = dynamic_cast<VirtualKCompletionBase*>(self);
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        vkcompletionbase->setCompletedText(text_QString);
    } else {
        ((VirtualKCompletionBase*)self)->setCompletedText(text_QString);
    }
}

void KCompletionBase_SetCompletedItems(KCompletionBase* self, const libqt_list /* of libqt_string */ items, bool autoSuggest) {
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    auto* vkcompletionbase = dynamic_cast<VirtualKCompletionBase*>(self);
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        vkcompletionbase->setCompletedItems(items_QList, autoSuggest);
    } else {
        ((VirtualKCompletionBase*)self)->setCompletedItems(items_QList, autoSuggest);
    }
}

KCompletion* KCompletionBase_CompObj(const KCompletionBase* self) {
    return self->compObj();
}

void KCompletionBase_VirtualHook(KCompletionBase* self, int id, void* data) {
    auto* vkcompletionbase = dynamic_cast<VirtualKCompletionBase*>(self);
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        vkcompletionbase->virtual_hook(static_cast<int>(id), data);
    }
}

KCompletion* KCompletionBase_CompletionObject1(KCompletionBase* self, bool handleSignals) {
    return self->completionObject(handleSignals);
}

// Base class handler implementation
void KCompletionBase_QBaseSetCompletionObject(KCompletionBase* self, KCompletion* completionObject, bool handleSignals) {
    auto* vkcompletionbase = dynamic_cast<VirtualKCompletionBase*>(self);
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        vkcompletionbase->setKCompletionBase_SetCompletionObject_IsBase(true);
        vkcompletionbase->setCompletionObject(completionObject, handleSignals);
    } else {
        self->KCompletionBase::setCompletionObject(completionObject, handleSignals);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBase_OnSetCompletionObject(KCompletionBase* self, intptr_t slot) {
    auto* vkcompletionbase = dynamic_cast<VirtualKCompletionBase*>(self);
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        vkcompletionbase->setKCompletionBase_SetCompletionObject_Callback(reinterpret_cast<VirtualKCompletionBase::KCompletionBase_SetCompletionObject_Callback>(slot));
    }
}

// Base class handler implementation
void KCompletionBase_QBaseSetHandleSignals(KCompletionBase* self, bool handle) {
    auto* vkcompletionbase = dynamic_cast<VirtualKCompletionBase*>(self);
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        vkcompletionbase->setKCompletionBase_SetHandleSignals_IsBase(true);
        vkcompletionbase->setHandleSignals(handle);
    } else {
        self->KCompletionBase::setHandleSignals(handle);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBase_OnSetHandleSignals(KCompletionBase* self, intptr_t slot) {
    auto* vkcompletionbase = dynamic_cast<VirtualKCompletionBase*>(self);
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        vkcompletionbase->setKCompletionBase_SetHandleSignals_Callback(reinterpret_cast<VirtualKCompletionBase::KCompletionBase_SetHandleSignals_Callback>(slot));
    }
}

// Base class handler implementation
void KCompletionBase_QBaseSetCompletionMode(KCompletionBase* self, int mode) {
    auto* vkcompletionbase = dynamic_cast<VirtualKCompletionBase*>(self);
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        vkcompletionbase->setKCompletionBase_SetCompletionMode_IsBase(true);
        vkcompletionbase->setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    } else {
        self->KCompletionBase::setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBase_OnSetCompletionMode(KCompletionBase* self, intptr_t slot) {
    auto* vkcompletionbase = dynamic_cast<VirtualKCompletionBase*>(self);
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        vkcompletionbase->setKCompletionBase_SetCompletionMode_Callback(reinterpret_cast<VirtualKCompletionBase::KCompletionBase_SetCompletionMode_Callback>(slot));
    }
}

// Base class handler implementation
void KCompletionBase_QBaseSetCompletedText(KCompletionBase* self, const libqt_string text) {
    auto* vkcompletionbase = dynamic_cast<VirtualKCompletionBase*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        vkcompletionbase->setKCompletionBase_SetCompletedText_IsBase(true);
        vkcompletionbase->setCompletedText(text_QString);
    } else {
        ((VirtualKCompletionBase*)self)->setCompletedText(text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBase_OnSetCompletedText(KCompletionBase* self, intptr_t slot) {
    auto* vkcompletionbase = dynamic_cast<VirtualKCompletionBase*>(self);
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        vkcompletionbase->setKCompletionBase_SetCompletedText_Callback(reinterpret_cast<VirtualKCompletionBase::KCompletionBase_SetCompletedText_Callback>(slot));
    }
}

// Base class handler implementation
void KCompletionBase_QBaseSetCompletedItems(KCompletionBase* self, const libqt_list /* of libqt_string */ items, bool autoSuggest) {
    auto* vkcompletionbase = dynamic_cast<VirtualKCompletionBase*>(self);
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        vkcompletionbase->setKCompletionBase_SetCompletedItems_IsBase(true);
        vkcompletionbase->setCompletedItems(items_QList, autoSuggest);
    } else {
        ((VirtualKCompletionBase*)self)->setCompletedItems(items_QList, autoSuggest);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBase_OnSetCompletedItems(KCompletionBase* self, intptr_t slot) {
    auto* vkcompletionbase = dynamic_cast<VirtualKCompletionBase*>(self);
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        vkcompletionbase->setKCompletionBase_SetCompletedItems_Callback(reinterpret_cast<VirtualKCompletionBase::KCompletionBase_SetCompletedItems_Callback>(slot));
    }
}

// Base class handler implementation
void KCompletionBase_QBaseVirtualHook(KCompletionBase* self, int id, void* data) {
    auto* vkcompletionbase = dynamic_cast<VirtualKCompletionBase*>(self);
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        vkcompletionbase->setKCompletionBase_VirtualHook_IsBase(true);
        vkcompletionbase->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualKCompletionBase*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBase_OnVirtualHook(KCompletionBase* self, intptr_t slot) {
    auto* vkcompletionbase = dynamic_cast<VirtualKCompletionBase*>(self);
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        vkcompletionbase->setKCompletionBase_VirtualHook_Callback(reinterpret_cast<VirtualKCompletionBase::KCompletionBase_VirtualHook_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_list  of QKeySequence*  */ KCompletionBase_KeyBindingMap(const KCompletionBase* self) {
    auto* vkcompletionbase = const_cast<VirtualKCompletionBase*>(dynamic_cast<const VirtualKCompletionBase*>(self));
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> _ret = vkcompletionbase->keyBindingMap();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_list /* of QKeySequence* */* _varr = static_cast<libqt_list /* of QKeySequence* */*>(malloc(sizeof(libqt_list /* of QKeySequence* */) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = static_cast<int>(_itr->first);
            QList<QKeySequence> _mapval_ret = _itr->second;
            // Convert QList<> from C++ memory to manually-managed C memory
            QKeySequence** _mapval_arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (_mapval_ret.size() + 1)));
            for (qsizetype i = 0; i < _mapval_ret.size(); ++i) {
                _mapval_arr[i] = new QKeySequence(_mapval_ret[i]);
            }
            libqt_list _mapval_out;
            _mapval_out.len = _mapval_ret.size();
            _mapval_out.data = static_cast<void*>(_mapval_arr);
            _varr[_ctr] = _mapval_out;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> _ret = ((VirtualKCompletionBase*)self)->keyBindingMap();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_list /* of QKeySequence* */* _varr = static_cast<libqt_list /* of QKeySequence* */*>(malloc(sizeof(libqt_list /* of QKeySequence* */) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = static_cast<int>(_itr->first);
            QList<QKeySequence> _mapval_ret = _itr->second;
            // Convert QList<> from C++ memory to manually-managed C memory
            QKeySequence** _mapval_arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (_mapval_ret.size() + 1)));
            for (qsizetype i = 0; i < _mapval_ret.size(); ++i) {
                _mapval_arr[i] = new QKeySequence(_mapval_ret[i]);
            }
            libqt_list _mapval_out;
            _mapval_out.len = _mapval_ret.size();
            _mapval_out.data = static_cast<void*>(_mapval_arr);
            _varr[_ctr] = _mapval_out;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Base class handler implementation
libqt_map /* of int to libqt_list  of QKeySequence*  */ KCompletionBase_QBaseKeyBindingMap(const KCompletionBase* self) {
    auto* vkcompletionbase = const_cast<VirtualKCompletionBase*>(dynamic_cast<const VirtualKCompletionBase*>(self));
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        vkcompletionbase->setKCompletionBase_KeyBindingMap_IsBase(true);
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> _ret = vkcompletionbase->keyBindingMap();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_list /* of QKeySequence* */* _varr = static_cast<libqt_list /* of QKeySequence* */*>(malloc(sizeof(libqt_list /* of QKeySequence* */) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = static_cast<int>(_itr->first);
            QList<QKeySequence> _mapval_ret = _itr->second;
            // Convert QList<> from C++ memory to manually-managed C memory
            QKeySequence** _mapval_arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (_mapval_ret.size() + 1)));
            for (qsizetype i = 0; i < _mapval_ret.size(); ++i) {
                _mapval_arr[i] = new QKeySequence(_mapval_ret[i]);
            }
            libqt_list _mapval_out;
            _mapval_out.len = _mapval_ret.size();
            _mapval_out.data = static_cast<void*>(_mapval_arr);
            _varr[_ctr] = _mapval_out;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> _ret = ((VirtualKCompletionBase*)self)->keyBindingMap();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_list /* of QKeySequence* */* _varr = static_cast<libqt_list /* of QKeySequence* */*>(malloc(sizeof(libqt_list /* of QKeySequence* */) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = static_cast<int>(_itr->first);
            QList<QKeySequence> _mapval_ret = _itr->second;
            // Convert QList<> from C++ memory to manually-managed C memory
            QKeySequence** _mapval_arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (_mapval_ret.size() + 1)));
            for (qsizetype i = 0; i < _mapval_ret.size(); ++i) {
                _mapval_arr[i] = new QKeySequence(_mapval_ret[i]);
            }
            libqt_list _mapval_out;
            _mapval_out.len = _mapval_ret.size();
            _mapval_out.data = static_cast<void*>(_mapval_arr);
            _varr[_ctr] = _mapval_out;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBase_OnKeyBindingMap(const KCompletionBase* self, intptr_t slot) {
    auto* vkcompletionbase = const_cast<VirtualKCompletionBase*>(dynamic_cast<const VirtualKCompletionBase*>(self));
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        vkcompletionbase->setKCompletionBase_KeyBindingMap_Callback(reinterpret_cast<VirtualKCompletionBase::KCompletionBase_KeyBindingMap_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBase_SetKeyBindingMap(KCompletionBase* self, libqt_map /* of int to libqt_list  of QKeySequence*  */ keyBindingMap) {
    auto* vkcompletionbase = dynamic_cast<VirtualKCompletionBase*>(self);
    QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> keyBindingMap_QMap;
    int* keyBindingMap_karr = static_cast<int*>(keyBindingMap.keys);
    libqt_list /* of QKeySequence* */* keyBindingMap_varr = static_cast<libqt_list /* of QKeySequence* */*>(keyBindingMap.values);
    for (size_t i = 0; i < keyBindingMap.len; ++i) {
        QList<QKeySequence> keyBindingMap_varr_i_QList;
        keyBindingMap_varr_i_QList.reserve(keyBindingMap_varr[i].len);
        QKeySequence** keyBindingMap_varr_i_arr = static_cast<QKeySequence**>(keyBindingMap_varr[i].data);
        for (size_t i = 0; i < keyBindingMap_varr[i].len; ++i) {
            keyBindingMap_varr_i_QList.push_back(*(keyBindingMap_varr_i_arr[i]));
        }
        keyBindingMap_QMap[static_cast<KCompletionBase::KeyBindingType>(keyBindingMap_karr[i])] = keyBindingMap_varr_i_QList;
    }
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        vkcompletionbase->setKeyBindingMap(keyBindingMap_QMap);
    } else {
        ((VirtualKCompletionBase*)self)->setKeyBindingMap(keyBindingMap_QMap);
    }
}

// Base class handler implementation
void KCompletionBase_QBaseSetKeyBindingMap(KCompletionBase* self, libqt_map /* of int to libqt_list  of QKeySequence*  */ keyBindingMap) {
    auto* vkcompletionbase = dynamic_cast<VirtualKCompletionBase*>(self);
    QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> keyBindingMap_QMap;
    int* keyBindingMap_karr = static_cast<int*>(keyBindingMap.keys);
    libqt_list /* of QKeySequence* */* keyBindingMap_varr = static_cast<libqt_list /* of QKeySequence* */*>(keyBindingMap.values);
    for (size_t i = 0; i < keyBindingMap.len; ++i) {
        QList<QKeySequence> keyBindingMap_varr_i_QList;
        keyBindingMap_varr_i_QList.reserve(keyBindingMap_varr[i].len);
        QKeySequence** keyBindingMap_varr_i_arr = static_cast<QKeySequence**>(keyBindingMap_varr[i].data);
        for (size_t i = 0; i < keyBindingMap_varr[i].len; ++i) {
            keyBindingMap_varr_i_QList.push_back(*(keyBindingMap_varr_i_arr[i]));
        }
        keyBindingMap_QMap[static_cast<KCompletionBase::KeyBindingType>(keyBindingMap_karr[i])] = keyBindingMap_varr_i_QList;
    }
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        vkcompletionbase->setKCompletionBase_SetKeyBindingMap_IsBase(true);
        vkcompletionbase->setKeyBindingMap(keyBindingMap_QMap);
    } else {
        ((VirtualKCompletionBase*)self)->setKeyBindingMap(keyBindingMap_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBase_OnSetKeyBindingMap(KCompletionBase* self, intptr_t slot) {
    auto* vkcompletionbase = dynamic_cast<VirtualKCompletionBase*>(self);
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        vkcompletionbase->setKCompletionBase_SetKeyBindingMap_Callback(reinterpret_cast<VirtualKCompletionBase::KCompletionBase_SetKeyBindingMap_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBase_SetDelegate(KCompletionBase* self, KCompletionBase* delegate) {
    auto* vkcompletionbase = dynamic_cast<VirtualKCompletionBase*>(self);
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        vkcompletionbase->setDelegate(delegate);
    } else {
        ((VirtualKCompletionBase*)self)->setDelegate(delegate);
    }
}

// Base class handler implementation
void KCompletionBase_QBaseSetDelegate(KCompletionBase* self, KCompletionBase* delegate) {
    auto* vkcompletionbase = dynamic_cast<VirtualKCompletionBase*>(self);
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        vkcompletionbase->setKCompletionBase_SetDelegate_IsBase(true);
        vkcompletionbase->setDelegate(delegate);
    } else {
        ((VirtualKCompletionBase*)self)->setDelegate(delegate);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBase_OnSetDelegate(KCompletionBase* self, intptr_t slot) {
    auto* vkcompletionbase = dynamic_cast<VirtualKCompletionBase*>(self);
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        vkcompletionbase->setKCompletionBase_SetDelegate_Callback(reinterpret_cast<VirtualKCompletionBase::KCompletionBase_SetDelegate_Callback>(slot));
    }
}

// Derived class handler implementation
KCompletionBase* KCompletionBase_Delegate(const KCompletionBase* self) {
    auto* vkcompletionbase = const_cast<VirtualKCompletionBase*>(dynamic_cast<const VirtualKCompletionBase*>(self));
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        return vkcompletionbase->delegate();
    } else {
        return ((VirtualKCompletionBase*)self)->delegate();
    }
}

// Base class handler implementation
KCompletionBase* KCompletionBase_QBaseDelegate(const KCompletionBase* self) {
    auto* vkcompletionbase = const_cast<VirtualKCompletionBase*>(dynamic_cast<const VirtualKCompletionBase*>(self));
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        vkcompletionbase->setKCompletionBase_Delegate_IsBase(true);
        return vkcompletionbase->delegate();
    } else {
        return ((VirtualKCompletionBase*)self)->delegate();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBase_OnDelegate(const KCompletionBase* self, intptr_t slot) {
    auto* vkcompletionbase = const_cast<VirtualKCompletionBase*>(dynamic_cast<const VirtualKCompletionBase*>(self));
    if (vkcompletionbase && vkcompletionbase->isVirtualKCompletionBase) {
        vkcompletionbase->setKCompletionBase_Delegate_Callback(reinterpret_cast<VirtualKCompletionBase::KCompletionBase_Delegate_Callback>(slot));
    }
}

void KCompletionBase_Delete(KCompletionBase* self) {
    delete self;
}
