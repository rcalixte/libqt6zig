#include <KACL>
#include <QList>
#include <QPair>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kacl.h>
#include "libkacl.h"
#include "libkacl.hxx"

KACL* KACL_new(const libqt_string aclString) {
    QString aclString_QString = QString::fromUtf8(aclString.data, aclString.len);
    return new VirtualKACL(aclString_QString);
}

KACL* KACL_new2(const KACL* rhs) {
    return new VirtualKACL(*rhs);
}

KACL* KACL_new3(mode_t basicPermissions) {
    return new VirtualKACL(basicPermissions);
}

KACL* KACL_new4() {
    return new VirtualKACL();
}

void KACL_OperatorAssign(KACL* self, const KACL* rhs) {
    self->operator=(*rhs);
}

bool KACL_OperatorEqual(const KACL* self, const KACL* rhs) {
    return (*self == *rhs);
}

bool KACL_OperatorNotEqual(const KACL* self, const KACL* rhs) {
    return (*self != *rhs);
}

bool KACL_IsValid(const KACL* self) {
    return self->isValid();
}

uint16_t KACL_OwnerPermissions(const KACL* self) {
    return self->ownerPermissions();
}

bool KACL_SetOwnerPermissions(KACL* self, uint16_t ownerPermissions) {
    return self->setOwnerPermissions(static_cast<unsigned short>(ownerPermissions));
}

uint16_t KACL_OwningGroupPermissions(const KACL* self) {
    return self->owningGroupPermissions();
}

bool KACL_SetOwningGroupPermissions(KACL* self, uint16_t owningGroupPermissions) {
    return self->setOwningGroupPermissions(static_cast<unsigned short>(owningGroupPermissions));
}

uint16_t KACL_OthersPermissions(const KACL* self) {
    return self->othersPermissions();
}

bool KACL_SetOthersPermissions(KACL* self, uint16_t othersPermissions) {
    return self->setOthersPermissions(static_cast<unsigned short>(othersPermissions));
}

mode_t KACL_BasePermissions(const KACL* self) {
    return self->basePermissions();
}

bool KACL_IsExtended(const KACL* self) {
    return self->isExtended();
}

uint16_t KACL_MaskPermissions(const KACL* self, bool* exists) {
    return self->maskPermissions(*exists);
}

bool KACL_SetMaskPermissions(KACL* self, uint16_t maskPermissions) {
    return self->setMaskPermissions(static_cast<unsigned short>(maskPermissions));
}

uint16_t KACL_NamedUserPermissions(const KACL* self, const libqt_string name, bool* exists) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->namedUserPermissions(name_QString, exists);
}

bool KACL_SetNamedUserPermissions(KACL* self, const libqt_string name, uint16_t param2) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->setNamedUserPermissions(name_QString, static_cast<unsigned short>(param2));
}

libqt_list /* of libqt_pair  tuple of libqt_string and uint16_t  */ KACL_AllUserPermissions(const KACL* self) {
    QList<QPair<QString, unsigned short>> _ret = self->allUserPermissions();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_pair /* tuple of libqt_string and uint16_t */* _arr = static_cast<libqt_pair /* tuple of libqt_string and uint16_t */*>(malloc(sizeof(libqt_pair /* tuple of libqt_string and uint16_t */) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QPair<QString, unsigned short> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        libqt_string* _lv_first = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
        uint16_t* _lv_second = static_cast<uint16_t*>(malloc(sizeof(uint16_t)));
        QString _lv_first_ret = _lv_ret.first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_first_b = _lv_first_ret.toUtf8();
        libqt_string _lv_first_str;
        _lv_first_str.len = _lv_first_b.length();
        _lv_first_str.data = static_cast<const char*>(malloc(_lv_first_str.len + 1));
        memcpy((void*)_lv_first_str.data, _lv_first_b.data(), _lv_first_str.len);
        ((char*)_lv_first_str.data)[_lv_first_str.len] = '\0';
        *_lv_first = _lv_first_str;
        *_lv_second = _lv_ret.second;
        libqt_pair _lv_out;
        _lv_out.first = static_cast<void*>(_lv_first);
        _lv_out.second = static_cast<void*>(_lv_second);
        _arr[i] = _lv_out;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool KACL_SetAllUserPermissions(KACL* self, const libqt_list /* of libqt_pair  tuple of libqt_string and uint16_t  */ list) {
    QList<QPair<QString, unsigned short>> list_QList;
    list_QList.reserve(list.len);
    libqt_pair /* tuple of libqt_string and uint16_t */* list_arr = static_cast<libqt_pair /* tuple of libqt_string and uint16_t */*>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        QPair<QString, unsigned short> list_arr_i_QPair;
        libqt_string* list_arr_i_first = static_cast<libqt_string*>(list_arr[i].first);
        uint16_t* list_arr_i_second = static_cast<uint16_t*>(list_arr[i].second);
        QString list_arr_i_first_0_QString = QString::fromUtf8(list_arr_i_first[0].data, list_arr_i_first[0].len);
        list_arr_i_QPair.first = list_arr_i_first_0_QString;
        list_arr_i_QPair.second = static_cast<unsigned short>(list_arr_i_second[0]);
        list_QList.push_back(list_arr_i_QPair);
    }
    return self->setAllUserPermissions(list_QList);
}

uint16_t KACL_NamedGroupPermissions(const KACL* self, const libqt_string name, bool* exists) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->namedGroupPermissions(name_QString, exists);
}

bool KACL_SetNamedGroupPermissions(KACL* self, const libqt_string name, uint16_t param2) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->setNamedGroupPermissions(name_QString, static_cast<unsigned short>(param2));
}

libqt_list /* of libqt_pair  tuple of libqt_string and uint16_t  */ KACL_AllGroupPermissions(const KACL* self) {
    QList<QPair<QString, unsigned short>> _ret = self->allGroupPermissions();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_pair /* tuple of libqt_string and uint16_t */* _arr = static_cast<libqt_pair /* tuple of libqt_string and uint16_t */*>(malloc(sizeof(libqt_pair /* tuple of libqt_string and uint16_t */) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QPair<QString, unsigned short> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        libqt_string* _lv_first = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
        uint16_t* _lv_second = static_cast<uint16_t*>(malloc(sizeof(uint16_t)));
        QString _lv_first_ret = _lv_ret.first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_first_b = _lv_first_ret.toUtf8();
        libqt_string _lv_first_str;
        _lv_first_str.len = _lv_first_b.length();
        _lv_first_str.data = static_cast<const char*>(malloc(_lv_first_str.len + 1));
        memcpy((void*)_lv_first_str.data, _lv_first_b.data(), _lv_first_str.len);
        ((char*)_lv_first_str.data)[_lv_first_str.len] = '\0';
        *_lv_first = _lv_first_str;
        *_lv_second = _lv_ret.second;
        libqt_pair _lv_out;
        _lv_out.first = static_cast<void*>(_lv_first);
        _lv_out.second = static_cast<void*>(_lv_second);
        _arr[i] = _lv_out;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool KACL_SetAllGroupPermissions(KACL* self, const libqt_list /* of libqt_pair  tuple of libqt_string and uint16_t  */ allGroupPermissions) {
    QList<QPair<QString, unsigned short>> allGroupPermissions_QList;
    allGroupPermissions_QList.reserve(allGroupPermissions.len);
    libqt_pair /* tuple of libqt_string and uint16_t */* allGroupPermissions_arr = static_cast<libqt_pair /* tuple of libqt_string and uint16_t */*>(allGroupPermissions.data);
    for (size_t i = 0; i < allGroupPermissions.len; ++i) {
        QPair<QString, unsigned short> allGroupPermissions_arr_i_QPair;
        libqt_string* allGroupPermissions_arr_i_first = static_cast<libqt_string*>(allGroupPermissions_arr[i].first);
        uint16_t* allGroupPermissions_arr_i_second = static_cast<uint16_t*>(allGroupPermissions_arr[i].second);
        QString allGroupPermissions_arr_i_first_0_QString = QString::fromUtf8(allGroupPermissions_arr_i_first[0].data, allGroupPermissions_arr_i_first[0].len);
        allGroupPermissions_arr_i_QPair.first = allGroupPermissions_arr_i_first_0_QString;
        allGroupPermissions_arr_i_QPair.second = static_cast<unsigned short>(allGroupPermissions_arr_i_second[0]);
        allGroupPermissions_QList.push_back(allGroupPermissions_arr_i_QPair);
    }
    return self->setAllGroupPermissions(allGroupPermissions_QList);
}

bool KACL_SetACL(KACL* self, const libqt_string aclStr) {
    QString aclStr_QString = QString::fromUtf8(aclStr.data, aclStr.len);
    return self->setACL(aclStr_QString);
}

libqt_string KACL_AsString(const KACL* self) {
    QString _ret = self->asString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KACL_VirtualHook(KACL* self, int id, void* data) {
    auto* vkacl = dynamic_cast<VirtualKACL*>(self);
    if (vkacl && vkacl->isVirtualKACL) {
        vkacl->virtual_hook(static_cast<int>(id), data);
    }
}

// Base class handler implementation
void KACL_QBaseVirtualHook(KACL* self, int id, void* data) {
    auto* vkacl = dynamic_cast<VirtualKACL*>(self);
    if (vkacl && vkacl->isVirtualKACL) {
        vkacl->setKACL_VirtualHook_IsBase(true);
        vkacl->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualKACL*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Auxiliary method to allow providing re-implementation
void KACL_OnVirtualHook(KACL* self, intptr_t slot) {
    auto* vkacl = dynamic_cast<VirtualKACL*>(self);
    if (vkacl && vkacl->isVirtualKACL) {
        vkacl->setKACL_VirtualHook_Callback(reinterpret_cast<VirtualKACL::KACL_VirtualHook_Callback>(slot));
    }
}

void KACL_Delete(KACL* self) {
    delete self;
}
