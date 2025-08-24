#include <KStandardActions>
#define WORKAROUND_INNER_CLASS_DEFINITION_KStandardActions__KStandardActionsInfo
#define WORKAROUND_INNER_CLASS_DEFINITION_KStandardActions__RawStringData
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kstandardactions_p.h>
#include "libkstandardactions_p.h"
#include "libkstandardactions_p.hxx"

KStandardActions__RawStringData* KStandardActions__RawStringData_new(const KStandardActions__RawStringData* other) {
    return new KStandardActions::RawStringData(*other);
}

KStandardActions__RawStringData* KStandardActions__RawStringData_new2(KStandardActions__RawStringData* other) {
    return new KStandardActions::RawStringData(std::move(*other));
}

KStandardActions__RawStringData* KStandardActions__RawStringData_new3() {
    return new KStandardActions::RawStringData();
}

KStandardActions__RawStringData* KStandardActions__RawStringData_new4(const KStandardActions__RawStringData* param1) {
    return new KStandardActions::RawStringData(*param1);
}

libqt_string KStandardActions__RawStringData_ToString(const KStandardActions__RawStringData* self) {
    QString _ret = self->toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KStandardActions__RawStringData_Delete(KStandardActions__RawStringData* self) {
    delete self;
}

KStandardActions__KStandardActionsInfo* KStandardActions__KStandardActionsInfo_new(const KStandardActions__KStandardActionsInfo* param1) {
    return new KStandardActions::KStandardActionsInfo(*param1);
}

int KStandardActions__KStandardActionsInfo_Id(const KStandardActions__KStandardActionsInfo* self) {
    return static_cast<int>(self->id);
}

void KStandardActions__KStandardActionsInfo_SetId(KStandardActions__KStandardActionsInfo* self, int id) {
    self->id = static_cast<KStandardActions::StandardAction>(id);
}

int KStandardActions__KStandardActionsInfo_IdAccel(const KStandardActions__KStandardActionsInfo* self) {
    return static_cast<int>(self->idAccel);
}

void KStandardActions__KStandardActionsInfo_SetIdAccel(KStandardActions__KStandardActionsInfo* self, int idAccel) {
    self->idAccel = static_cast<KStandardShortcut::StandardShortcut>(idAccel);
}

const char* KStandardActions__KStandardActionsInfo_PsLabel(const KStandardActions__KStandardActionsInfo* self) {
    return (const char*)self->psLabel;
}

void KStandardActions__KStandardActionsInfo_SetPsLabel(KStandardActions__KStandardActionsInfo* self, const char* psLabel) {
    self->psLabel = psLabel;
}

const char* KStandardActions__KStandardActionsInfo_PsToolTip(const KStandardActions__KStandardActionsInfo* self) {
    return (const char*)self->psToolTip;
}

void KStandardActions__KStandardActionsInfo_SetPsToolTip(KStandardActions__KStandardActionsInfo* self, const char* psToolTip) {
    self->psToolTip = psToolTip;
}

void KStandardActions__KStandardActionsInfo_Delete(KStandardActions__KStandardActionsInfo* self) {
    delete self;
}

KStandardActions__KStandardActionsInfo* KStandardActions_InfoPtr(int param1) {
    return (KStandardActions__KStandardActionsInfo*)KStandardActions::infoPtr(static_cast<KStandardActions::StandardAction>(param1));
}

libqt_list /* of libqt_string */ KStandardActions_InternalStdNames() {
    QList<QString> _ret = KStandardActions::internal_stdNames();
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
