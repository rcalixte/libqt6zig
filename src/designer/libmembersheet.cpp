#include <QByteArray>
#include <QDesignerMemberSheetExtension>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <membersheet.h>
#include "libmembersheet.h"
#include "libmembersheet.hxx"

QDesignerMemberSheetExtension* QDesignerMemberSheetExtension_new() {
    return new VirtualQDesignerMemberSheetExtension();
}

int QDesignerMemberSheetExtension_Count(const QDesignerMemberSheetExtension* self) {
    auto* vqdesignermembersheetextension = dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self);
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        return vqdesignermembersheetextension->count();
    } else {
        return ((VirtualQDesignerMemberSheetExtension*)self)->count();
    }
}

int QDesignerMemberSheetExtension_IndexOf(const QDesignerMemberSheetExtension* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqdesignermembersheetextension = dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self);
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        return vqdesignermembersheetextension->indexOf(name_QString);
    } else {
        return ((VirtualQDesignerMemberSheetExtension*)self)->indexOf(name_QString);
    }
}

libqt_string QDesignerMemberSheetExtension_MemberName(const QDesignerMemberSheetExtension* self, int index) {
    auto* vqdesignermembersheetextension = dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self);
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        QString _ret = vqdesignermembersheetextension->memberName(static_cast<int>(index));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerMemberSheetExtension*)self)->memberName(static_cast<int>(index));
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

libqt_string QDesignerMemberSheetExtension_MemberGroup(const QDesignerMemberSheetExtension* self, int index) {
    auto* vqdesignermembersheetextension = dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self);
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        QString _ret = vqdesignermembersheetextension->memberGroup(static_cast<int>(index));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerMemberSheetExtension*)self)->memberGroup(static_cast<int>(index));
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

void QDesignerMemberSheetExtension_SetMemberGroup(QDesignerMemberSheetExtension* self, int index, const libqt_string group) {
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vqdesignermembersheetextension = dynamic_cast<VirtualQDesignerMemberSheetExtension*>(self);
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setMemberGroup(static_cast<int>(index), group_QString);
    } else {
        ((VirtualQDesignerMemberSheetExtension*)self)->setMemberGroup(static_cast<int>(index), group_QString);
    }
}

bool QDesignerMemberSheetExtension_IsVisible(const QDesignerMemberSheetExtension* self, int index) {
    auto* vqdesignermembersheetextension = dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self);
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        return vqdesignermembersheetextension->isVisible(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerMemberSheetExtension*)self)->isVisible(static_cast<int>(index));
    }
}

void QDesignerMemberSheetExtension_SetVisible(QDesignerMemberSheetExtension* self, int index, bool b) {
    auto* vqdesignermembersheetextension = dynamic_cast<VirtualQDesignerMemberSheetExtension*>(self);
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setVisible(static_cast<int>(index), b);
    } else {
        ((VirtualQDesignerMemberSheetExtension*)self)->setVisible(static_cast<int>(index), b);
    }
}

bool QDesignerMemberSheetExtension_IsSignal(const QDesignerMemberSheetExtension* self, int index) {
    auto* vqdesignermembersheetextension = dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self);
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        return vqdesignermembersheetextension->isSignal(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerMemberSheetExtension*)self)->isSignal(static_cast<int>(index));
    }
}

bool QDesignerMemberSheetExtension_IsSlot(const QDesignerMemberSheetExtension* self, int index) {
    auto* vqdesignermembersheetextension = dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self);
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        return vqdesignermembersheetextension->isSlot(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerMemberSheetExtension*)self)->isSlot(static_cast<int>(index));
    }
}

bool QDesignerMemberSheetExtension_InheritedFromWidget(const QDesignerMemberSheetExtension* self, int index) {
    auto* vqdesignermembersheetextension = dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self);
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        return vqdesignermembersheetextension->inheritedFromWidget(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerMemberSheetExtension*)self)->inheritedFromWidget(static_cast<int>(index));
    }
}

libqt_string QDesignerMemberSheetExtension_DeclaredInClass(const QDesignerMemberSheetExtension* self, int index) {
    auto* vqdesignermembersheetextension = dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self);
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        QString _ret = vqdesignermembersheetextension->declaredInClass(static_cast<int>(index));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerMemberSheetExtension*)self)->declaredInClass(static_cast<int>(index));
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

libqt_string QDesignerMemberSheetExtension_Signature(const QDesignerMemberSheetExtension* self, int index) {
    auto* vqdesignermembersheetextension = dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self);
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        QString _ret = vqdesignermembersheetextension->signature(static_cast<int>(index));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerMemberSheetExtension*)self)->signature(static_cast<int>(index));
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

libqt_list /* of libqt_string */ QDesignerMemberSheetExtension_ParameterTypes(const QDesignerMemberSheetExtension* self, int index) {
    auto* vqdesignermembersheetextension = dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self);
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        QList<QByteArray> _ret = vqdesignermembersheetextension->parameterTypes(static_cast<int>(index));
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QByteArray _lv_qb = _ret[i];
            libqt_string _lv_str;
            _lv_str.len = _lv_qb.length();
            _lv_str.data = static_cast<char*>(malloc(_lv_str.len));
            memcpy((void*)_lv_str.data, _lv_qb.data(), _lv_str.len);
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QByteArray> _ret = ((VirtualQDesignerMemberSheetExtension*)self)->parameterTypes(static_cast<int>(index));
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QByteArray _lv_qb = _ret[i];
            libqt_string _lv_str;
            _lv_str.len = _lv_qb.length();
            _lv_str.data = static_cast<char*>(malloc(_lv_str.len));
            memcpy((void*)_lv_str.data, _lv_qb.data(), _lv_str.len);
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

libqt_list /* of libqt_string */ QDesignerMemberSheetExtension_ParameterNames(const QDesignerMemberSheetExtension* self, int index) {
    auto* vqdesignermembersheetextension = dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self);
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        QList<QByteArray> _ret = vqdesignermembersheetextension->parameterNames(static_cast<int>(index));
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QByteArray _lv_qb = _ret[i];
            libqt_string _lv_str;
            _lv_str.len = _lv_qb.length();
            _lv_str.data = static_cast<char*>(malloc(_lv_str.len));
            memcpy((void*)_lv_str.data, _lv_qb.data(), _lv_str.len);
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QByteArray> _ret = ((VirtualQDesignerMemberSheetExtension*)self)->parameterNames(static_cast<int>(index));
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QByteArray _lv_qb = _ret[i];
            libqt_string _lv_str;
            _lv_str.len = _lv_qb.length();
            _lv_str.data = static_cast<char*>(malloc(_lv_str.len));
            memcpy((void*)_lv_str.data, _lv_qb.data(), _lv_str.len);
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
int QDesignerMemberSheetExtension_SuperCount(const QDesignerMemberSheetExtension* self) {
    auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self));
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setQDesignerMemberSheetExtension_Count_IsBase(true);
        return vqdesignermembersheetextension->count();
    } else {
        return ((VirtualQDesignerMemberSheetExtension*)self)->count();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMemberSheetExtension_OnCount(const QDesignerMemberSheetExtension* self, intptr_t slot) {
    auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self));
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setQDesignerMemberSheetExtension_Count_Callback(reinterpret_cast<VirtualQDesignerMemberSheetExtension::QDesignerMemberSheetExtension_Count_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerMemberSheetExtension_SuperIndexOf(const QDesignerMemberSheetExtension* self, const libqt_string name) {
    auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self));
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setQDesignerMemberSheetExtension_IndexOf_IsBase(true);
        return vqdesignermembersheetextension->indexOf(name_QString);
    } else {
        return ((VirtualQDesignerMemberSheetExtension*)self)->indexOf(name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMemberSheetExtension_OnIndexOf(const QDesignerMemberSheetExtension* self, intptr_t slot) {
    auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self));
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setQDesignerMemberSheetExtension_IndexOf_Callback(reinterpret_cast<VirtualQDesignerMemberSheetExtension::QDesignerMemberSheetExtension_IndexOf_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string QDesignerMemberSheetExtension_SuperMemberName(const QDesignerMemberSheetExtension* self, int index) {
    auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self));
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setQDesignerMemberSheetExtension_MemberName_IsBase(true);
        QString _ret = vqdesignermembersheetextension->memberName(static_cast<int>(index));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerMemberSheetExtension*)self)->memberName(static_cast<int>(index));
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
void QDesignerMemberSheetExtension_OnMemberName(const QDesignerMemberSheetExtension* self, intptr_t slot) {
    auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self));
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setQDesignerMemberSheetExtension_MemberName_Callback(reinterpret_cast<VirtualQDesignerMemberSheetExtension::QDesignerMemberSheetExtension_MemberName_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string QDesignerMemberSheetExtension_SuperMemberGroup(const QDesignerMemberSheetExtension* self, int index) {
    auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self));
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setQDesignerMemberSheetExtension_MemberGroup_IsBase(true);
        QString _ret = vqdesignermembersheetextension->memberGroup(static_cast<int>(index));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerMemberSheetExtension*)self)->memberGroup(static_cast<int>(index));
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
void QDesignerMemberSheetExtension_OnMemberGroup(const QDesignerMemberSheetExtension* self, intptr_t slot) {
    auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self));
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setQDesignerMemberSheetExtension_MemberGroup_Callback(reinterpret_cast<VirtualQDesignerMemberSheetExtension::QDesignerMemberSheetExtension_MemberGroup_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerMemberSheetExtension_SuperSetMemberGroup(QDesignerMemberSheetExtension* self, int index, const libqt_string group) {
    auto* vqdesignermembersheetextension = dynamic_cast<VirtualQDesignerMemberSheetExtension*>(self);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setQDesignerMemberSheetExtension_SetMemberGroup_IsBase(true);
        vqdesignermembersheetextension->setMemberGroup(static_cast<int>(index), group_QString);
    } else {
        ((VirtualQDesignerMemberSheetExtension*)self)->setMemberGroup(static_cast<int>(index), group_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMemberSheetExtension_OnSetMemberGroup(QDesignerMemberSheetExtension* self, intptr_t slot) {
    auto* vqdesignermembersheetextension = dynamic_cast<VirtualQDesignerMemberSheetExtension*>(self);
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setQDesignerMemberSheetExtension_SetMemberGroup_Callback(reinterpret_cast<VirtualQDesignerMemberSheetExtension::QDesignerMemberSheetExtension_SetMemberGroup_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerMemberSheetExtension_SuperIsVisible(const QDesignerMemberSheetExtension* self, int index) {
    auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self));
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setQDesignerMemberSheetExtension_IsVisible_IsBase(true);
        return vqdesignermembersheetextension->isVisible(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerMemberSheetExtension*)self)->isVisible(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMemberSheetExtension_OnIsVisible(const QDesignerMemberSheetExtension* self, intptr_t slot) {
    auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self));
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setQDesignerMemberSheetExtension_IsVisible_Callback(reinterpret_cast<VirtualQDesignerMemberSheetExtension::QDesignerMemberSheetExtension_IsVisible_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerMemberSheetExtension_SuperSetVisible(QDesignerMemberSheetExtension* self, int index, bool b) {
    auto* vqdesignermembersheetextension = dynamic_cast<VirtualQDesignerMemberSheetExtension*>(self);
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setQDesignerMemberSheetExtension_SetVisible_IsBase(true);
        vqdesignermembersheetextension->setVisible(static_cast<int>(index), b);
    } else {
        ((VirtualQDesignerMemberSheetExtension*)self)->setVisible(static_cast<int>(index), b);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMemberSheetExtension_OnSetVisible(QDesignerMemberSheetExtension* self, intptr_t slot) {
    auto* vqdesignermembersheetextension = dynamic_cast<VirtualQDesignerMemberSheetExtension*>(self);
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setQDesignerMemberSheetExtension_SetVisible_Callback(reinterpret_cast<VirtualQDesignerMemberSheetExtension::QDesignerMemberSheetExtension_SetVisible_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerMemberSheetExtension_SuperIsSignal(const QDesignerMemberSheetExtension* self, int index) {
    auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self));
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setQDesignerMemberSheetExtension_IsSignal_IsBase(true);
        return vqdesignermembersheetextension->isSignal(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerMemberSheetExtension*)self)->isSignal(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMemberSheetExtension_OnIsSignal(const QDesignerMemberSheetExtension* self, intptr_t slot) {
    auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self));
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setQDesignerMemberSheetExtension_IsSignal_Callback(reinterpret_cast<VirtualQDesignerMemberSheetExtension::QDesignerMemberSheetExtension_IsSignal_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerMemberSheetExtension_SuperIsSlot(const QDesignerMemberSheetExtension* self, int index) {
    auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self));
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setQDesignerMemberSheetExtension_IsSlot_IsBase(true);
        return vqdesignermembersheetextension->isSlot(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerMemberSheetExtension*)self)->isSlot(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMemberSheetExtension_OnIsSlot(const QDesignerMemberSheetExtension* self, intptr_t slot) {
    auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self));
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setQDesignerMemberSheetExtension_IsSlot_Callback(reinterpret_cast<VirtualQDesignerMemberSheetExtension::QDesignerMemberSheetExtension_IsSlot_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerMemberSheetExtension_SuperInheritedFromWidget(const QDesignerMemberSheetExtension* self, int index) {
    auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self));
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setQDesignerMemberSheetExtension_InheritedFromWidget_IsBase(true);
        return vqdesignermembersheetextension->inheritedFromWidget(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerMemberSheetExtension*)self)->inheritedFromWidget(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMemberSheetExtension_OnInheritedFromWidget(const QDesignerMemberSheetExtension* self, intptr_t slot) {
    auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self));
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setQDesignerMemberSheetExtension_InheritedFromWidget_Callback(reinterpret_cast<VirtualQDesignerMemberSheetExtension::QDesignerMemberSheetExtension_InheritedFromWidget_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string QDesignerMemberSheetExtension_SuperDeclaredInClass(const QDesignerMemberSheetExtension* self, int index) {
    auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self));
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setQDesignerMemberSheetExtension_DeclaredInClass_IsBase(true);
        QString _ret = vqdesignermembersheetextension->declaredInClass(static_cast<int>(index));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerMemberSheetExtension*)self)->declaredInClass(static_cast<int>(index));
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
void QDesignerMemberSheetExtension_OnDeclaredInClass(const QDesignerMemberSheetExtension* self, intptr_t slot) {
    auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self));
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setQDesignerMemberSheetExtension_DeclaredInClass_Callback(reinterpret_cast<VirtualQDesignerMemberSheetExtension::QDesignerMemberSheetExtension_DeclaredInClass_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string QDesignerMemberSheetExtension_SuperSignature(const QDesignerMemberSheetExtension* self, int index) {
    auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self));
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setQDesignerMemberSheetExtension_Signature_IsBase(true);
        QString _ret = vqdesignermembersheetextension->signature(static_cast<int>(index));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerMemberSheetExtension*)self)->signature(static_cast<int>(index));
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
void QDesignerMemberSheetExtension_OnSignature(const QDesignerMemberSheetExtension* self, intptr_t slot) {
    auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self));
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setQDesignerMemberSheetExtension_Signature_Callback(reinterpret_cast<VirtualQDesignerMemberSheetExtension::QDesignerMemberSheetExtension_Signature_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of libqt_string */ QDesignerMemberSheetExtension_SuperParameterTypes(const QDesignerMemberSheetExtension* self, int index) {
    auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self));
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setQDesignerMemberSheetExtension_ParameterTypes_IsBase(true);
        QList<QByteArray> _ret = vqdesignermembersheetextension->parameterTypes(static_cast<int>(index));
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QByteArray _lv_qb = _ret[i];
            libqt_string _lv_str;
            _lv_str.len = _lv_qb.length();
            _lv_str.data = static_cast<char*>(malloc(_lv_str.len));
            memcpy((void*)_lv_str.data, _lv_qb.data(), _lv_str.len);
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QByteArray> _ret = ((VirtualQDesignerMemberSheetExtension*)self)->parameterTypes(static_cast<int>(index));
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QByteArray _lv_qb = _ret[i];
            libqt_string _lv_str;
            _lv_str.len = _lv_qb.length();
            _lv_str.data = static_cast<char*>(malloc(_lv_str.len));
            memcpy((void*)_lv_str.data, _lv_qb.data(), _lv_str.len);
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMemberSheetExtension_OnParameterTypes(const QDesignerMemberSheetExtension* self, intptr_t slot) {
    auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self));
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setQDesignerMemberSheetExtension_ParameterTypes_Callback(reinterpret_cast<VirtualQDesignerMemberSheetExtension::QDesignerMemberSheetExtension_ParameterTypes_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of libqt_string */ QDesignerMemberSheetExtension_SuperParameterNames(const QDesignerMemberSheetExtension* self, int index) {
    auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self));
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setQDesignerMemberSheetExtension_ParameterNames_IsBase(true);
        QList<QByteArray> _ret = vqdesignermembersheetextension->parameterNames(static_cast<int>(index));
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QByteArray _lv_qb = _ret[i];
            libqt_string _lv_str;
            _lv_str.len = _lv_qb.length();
            _lv_str.data = static_cast<char*>(malloc(_lv_str.len));
            memcpy((void*)_lv_str.data, _lv_qb.data(), _lv_str.len);
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QByteArray> _ret = ((VirtualQDesignerMemberSheetExtension*)self)->parameterNames(static_cast<int>(index));
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QByteArray _lv_qb = _ret[i];
            libqt_string _lv_str;
            _lv_str.len = _lv_qb.length();
            _lv_str.data = static_cast<char*>(malloc(_lv_str.len));
            memcpy((void*)_lv_str.data, _lv_qb.data(), _lv_str.len);
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMemberSheetExtension_OnParameterNames(const QDesignerMemberSheetExtension* self, intptr_t slot) {
    auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self));
    if (vqdesignermembersheetextension && vqdesignermembersheetextension->isVirtualQDesignerMemberSheetExtension) {
        vqdesignermembersheetextension->setQDesignerMemberSheetExtension_ParameterNames_Callback(reinterpret_cast<VirtualQDesignerMemberSheetExtension::QDesignerMemberSheetExtension_ParameterNames_Callback>(slot));
    }
}

void QDesignerMemberSheetExtension_Delete(QDesignerMemberSheetExtension* self) {
    delete self;
}
