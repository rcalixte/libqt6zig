#include <QByteArray>
#include <QDesignerMemberSheetExtension>
#include <QList>
#include <QString>
#include <membersheet.h>
#include "libmembersheet.h"
#include "libmembersheet.hxx"

QDesignerMemberSheetExtension* QDesignerMemberSheetExtension_new() {
    return new VirtualQDesignerMemberSheetExtension();
}

int QDesignerMemberSheetExtension_Count(const QDesignerMemberSheetExtension* self) {
    return self->count();
}

int QDesignerMemberSheetExtension_IndexOf(const QDesignerMemberSheetExtension* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->indexOf(name_QString);
}

libqt_string QDesignerMemberSheetExtension_MemberName(const QDesignerMemberSheetExtension* self, int index) {
    auto _ret = self->memberName(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDesignerMemberSheetExtension_MemberGroup(const QDesignerMemberSheetExtension* self, int index) {
    auto _ret = self->memberGroup(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDesignerMemberSheetExtension_SetMemberGroup(QDesignerMemberSheetExtension* self, int index, const libqt_string group) {
    QString group_QString = QString::fromUtf8(group.data, group.len);
    self->setMemberGroup(static_cast<int>(index), group_QString);
}

bool QDesignerMemberSheetExtension_IsVisible(const QDesignerMemberSheetExtension* self, int index) {
    return self->isVisible(static_cast<int>(index));
}

void QDesignerMemberSheetExtension_SetVisible(QDesignerMemberSheetExtension* self, int index, bool b) {
    self->setVisible(static_cast<int>(index), b);
}

bool QDesignerMemberSheetExtension_IsSignal(const QDesignerMemberSheetExtension* self, int index) {
    return self->isSignal(static_cast<int>(index));
}

bool QDesignerMemberSheetExtension_IsSlot(const QDesignerMemberSheetExtension* self, int index) {
    return self->isSlot(static_cast<int>(index));
}

bool QDesignerMemberSheetExtension_InheritedFromWidget(const QDesignerMemberSheetExtension* self, int index) {
    return self->inheritedFromWidget(static_cast<int>(index));
}

libqt_string QDesignerMemberSheetExtension_DeclaredInClass(const QDesignerMemberSheetExtension* self, int index) {
    auto _ret = self->declaredInClass(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDesignerMemberSheetExtension_Signature(const QDesignerMemberSheetExtension* self, int index) {
    auto _ret = self->signature(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QDesignerMemberSheetExtension_ParameterTypes(const QDesignerMemberSheetExtension* self, int index) {
    QList<QByteArray> _ret = self->parameterTypes(static_cast<int>(index));
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

libqt_list /* of libqt_string */ QDesignerMemberSheetExtension_ParameterNames(const QDesignerMemberSheetExtension* self, int index) {
    QList<QByteArray> _ret = self->parameterNames(static_cast<int>(index));
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

// Auxiliary method to allow providing re-implementation
void QDesignerMemberSheetExtension_OnCount(QDesignerMemberSheetExtension* self, intptr_t slot) {
    if (auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self)))
        vqdesignermembersheetextension->qdesignermembersheetextension_count_callback = reinterpret_cast<VirtualQDesignerMemberSheetExtension::QDesignerMemberSheetExtension_Count_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerMemberSheetExtension_OnIndexOf(QDesignerMemberSheetExtension* self, intptr_t slot) {
    if (auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self)))
        vqdesignermembersheetextension->qdesignermembersheetextension_indexof_callback = reinterpret_cast<VirtualQDesignerMemberSheetExtension::QDesignerMemberSheetExtension_IndexOf_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerMemberSheetExtension_OnMemberName(QDesignerMemberSheetExtension* self, intptr_t slot) {
    if (auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self)))
        vqdesignermembersheetextension->qdesignermembersheetextension_membername_callback = reinterpret_cast<VirtualQDesignerMemberSheetExtension::QDesignerMemberSheetExtension_MemberName_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerMemberSheetExtension_OnMemberGroup(QDesignerMemberSheetExtension* self, intptr_t slot) {
    if (auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self)))
        vqdesignermembersheetextension->qdesignermembersheetextension_membergroup_callback = reinterpret_cast<VirtualQDesignerMemberSheetExtension::QDesignerMemberSheetExtension_MemberGroup_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerMemberSheetExtension_OnSetMemberGroup(QDesignerMemberSheetExtension* self, intptr_t slot) {
    if (auto* vqdesignermembersheetextension = dynamic_cast<VirtualQDesignerMemberSheetExtension*>(self))
        vqdesignermembersheetextension->qdesignermembersheetextension_setmembergroup_callback = reinterpret_cast<VirtualQDesignerMemberSheetExtension::QDesignerMemberSheetExtension_SetMemberGroup_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerMemberSheetExtension_OnIsVisible(QDesignerMemberSheetExtension* self, intptr_t slot) {
    if (auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self)))
        vqdesignermembersheetextension->qdesignermembersheetextension_isvisible_callback = reinterpret_cast<VirtualQDesignerMemberSheetExtension::QDesignerMemberSheetExtension_IsVisible_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerMemberSheetExtension_OnSetVisible(QDesignerMemberSheetExtension* self, intptr_t slot) {
    if (auto* vqdesignermembersheetextension = dynamic_cast<VirtualQDesignerMemberSheetExtension*>(self))
        vqdesignermembersheetextension->qdesignermembersheetextension_setvisible_callback = reinterpret_cast<VirtualQDesignerMemberSheetExtension::QDesignerMemberSheetExtension_SetVisible_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerMemberSheetExtension_OnIsSignal(QDesignerMemberSheetExtension* self, intptr_t slot) {
    if (auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self)))
        vqdesignermembersheetextension->qdesignermembersheetextension_issignal_callback = reinterpret_cast<VirtualQDesignerMemberSheetExtension::QDesignerMemberSheetExtension_IsSignal_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerMemberSheetExtension_OnIsSlot(QDesignerMemberSheetExtension* self, intptr_t slot) {
    if (auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self)))
        vqdesignermembersheetextension->qdesignermembersheetextension_isslot_callback = reinterpret_cast<VirtualQDesignerMemberSheetExtension::QDesignerMemberSheetExtension_IsSlot_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerMemberSheetExtension_OnInheritedFromWidget(QDesignerMemberSheetExtension* self, intptr_t slot) {
    if (auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self)))
        vqdesignermembersheetextension->qdesignermembersheetextension_inheritedfromwidget_callback = reinterpret_cast<VirtualQDesignerMemberSheetExtension::QDesignerMemberSheetExtension_InheritedFromWidget_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerMemberSheetExtension_OnDeclaredInClass(QDesignerMemberSheetExtension* self, intptr_t slot) {
    if (auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self)))
        vqdesignermembersheetextension->qdesignermembersheetextension_declaredinclass_callback = reinterpret_cast<VirtualQDesignerMemberSheetExtension::QDesignerMemberSheetExtension_DeclaredInClass_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerMemberSheetExtension_OnSignature(QDesignerMemberSheetExtension* self, intptr_t slot) {
    if (auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self)))
        vqdesignermembersheetextension->qdesignermembersheetextension_signature_callback = reinterpret_cast<VirtualQDesignerMemberSheetExtension::QDesignerMemberSheetExtension_Signature_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerMemberSheetExtension_OnParameterTypes(QDesignerMemberSheetExtension* self, intptr_t slot) {
    if (auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self)))
        vqdesignermembersheetextension->qdesignermembersheetextension_parametertypes_callback = reinterpret_cast<VirtualQDesignerMemberSheetExtension::QDesignerMemberSheetExtension_ParameterTypes_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerMemberSheetExtension_OnParameterNames(QDesignerMemberSheetExtension* self, intptr_t slot) {
    if (auto* vqdesignermembersheetextension = const_cast<VirtualQDesignerMemberSheetExtension*>(dynamic_cast<const VirtualQDesignerMemberSheetExtension*>(self)))
        vqdesignermembersheetextension->qdesignermembersheetextension_parameternames_callback = reinterpret_cast<VirtualQDesignerMemberSheetExtension::QDesignerMemberSheetExtension_ParameterNames_Callback>(slot);
}

void QDesignerMemberSheetExtension_Delete(QDesignerMemberSheetExtension* self) {
    delete self;
}
