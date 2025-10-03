#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartLoader
#include <KPluginMetaData>
#include <QList>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <partloader.h>
#include "libpartloader.h"
#include "libpartloader.hxx"

QMetaObject* KParts_GetEnumMetaObject(int param1) {
    return (QMetaObject*)KParts::qt_getEnumMetaObject(static_cast<KParts::PartCapability>(param1));
}

const char* KParts_GetEnumName(int param1) {
    return (const char*)KParts::qt_getEnumName(static_cast<KParts::PartCapability>(param1));
}

QMetaObject* KParts_GetEnumMetaObject2(int param1) {
    return (QMetaObject*)KParts::qt_getEnumMetaObject(static_cast<KParts::PartCapabilities>(param1));
}

const char* KParts_GetEnumName2(int param1) {
    return (const char*)KParts::qt_getEnumName(static_cast<KParts::PartCapabilities>(param1));
}

int KParts__PartLoader_PartCapabilities(const KPluginMetaData* param1) {
    return static_cast<int>(KParts::PartLoader::partCapabilities(*param1));
}

libqt_list /* of KPluginMetaData* */ KParts__PartLoader_PartsForMimeType(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QList<KPluginMetaData> _ret = KParts::PartLoader::partsForMimeType(param1_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    KPluginMetaData** _arr = static_cast<KPluginMetaData**>(malloc(sizeof(KPluginMetaData*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KPluginMetaData(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}
