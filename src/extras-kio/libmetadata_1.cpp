#include <KIO/MetaData>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <metadata.h>
#include "libmetadata_1.h"
#include "libmetadata_1.hxx"

KIO__MetaData* KIO__MetaData_new() {
    return new KIO::MetaData();
}

KIO__MetaData* KIO__MetaData_new2(const libqt_map /* of libqt_string to libqt_string */ metaData) {
    QMap<QString, QString> metaData_QMap;
    libqt_string* metaData_karr = static_cast<libqt_string*>(metaData.keys);
    libqt_string* metaData_varr = static_cast<libqt_string*>(metaData.values);
    for (size_t i = 0; i < metaData.len; ++i) {
        QString metaData_karr_i_QString = QString::fromUtf8(metaData_karr[i].data, metaData_karr[i].len);
        QString metaData_varr_i_QString = QString::fromUtf8(metaData_varr[i].data, metaData_varr[i].len);
        metaData_QMap[metaData_karr_i_QString] = metaData_varr_i_QString;
    }
    return new KIO::MetaData(metaData_QMap);
}

KIO__MetaData* KIO__MetaData_new3(const libqt_map /* of libqt_string to QVariant* */ param1) {
    QMap<QString, QVariant> param1_QMap;
    libqt_string* param1_karr = static_cast<libqt_string*>(param1.keys);
    QVariant** param1_varr = static_cast<QVariant**>(param1.values);
    for (size_t i = 0; i < param1.len; ++i) {
        QString param1_karr_i_QString = QString::fromUtf8(param1_karr[i].data, param1_karr[i].len);
        param1_QMap[param1_karr_i_QString] = *(param1_varr[i]);
    }
    return new KIO::MetaData(param1_QMap);
}

KIO__MetaData* KIO__MetaData_new4(const KIO__MetaData* param1) {
    return new KIO::MetaData(*param1);
}

KIO__MetaData* KIO__MetaData_OperatorPlusAssign(KIO__MetaData* self, const libqt_map /* of libqt_string to libqt_string */ metaData) {
    QMap<QString, QString> metaData_QMap;
    libqt_string* metaData_karr = static_cast<libqt_string*>(metaData.keys);
    libqt_string* metaData_varr = static_cast<libqt_string*>(metaData.values);
    for (size_t i = 0; i < metaData.len; ++i) {
        QString metaData_karr_i_QString = QString::fromUtf8(metaData_karr[i].data, metaData_karr[i].len);
        QString metaData_varr_i_QString = QString::fromUtf8(metaData_varr[i].data, metaData_varr[i].len);
        metaData_QMap[metaData_karr_i_QString] = metaData_varr_i_QString;
    }
    KIO::MetaData& _ret = self->operator+=(metaData_QMap);
    // Cast returned reference into pointer
    return &_ret;
}

KIO__MetaData* KIO__MetaData_OperatorPlusAssign2(KIO__MetaData* self, const libqt_map /* of libqt_string to QVariant* */ metaData) {
    QMap<QString, QVariant> metaData_QMap;
    libqt_string* metaData_karr = static_cast<libqt_string*>(metaData.keys);
    QVariant** metaData_varr = static_cast<QVariant**>(metaData.values);
    for (size_t i = 0; i < metaData.len; ++i) {
        QString metaData_karr_i_QString = QString::fromUtf8(metaData_karr[i].data, metaData_karr[i].len);
        metaData_QMap[metaData_karr_i_QString] = *(metaData_varr[i]);
    }
    KIO::MetaData& _ret = self->operator+=(metaData_QMap);
    // Cast returned reference into pointer
    return &_ret;
}

void KIO__MetaData_OperatorAssign(KIO__MetaData* self, const libqt_map /* of libqt_string to QVariant* */ metaData) {
    QMap<QString, QVariant> metaData_QMap;
    libqt_string* metaData_karr = static_cast<libqt_string*>(metaData.keys);
    QVariant** metaData_varr = static_cast<QVariant**>(metaData.values);
    for (size_t i = 0; i < metaData.len; ++i) {
        QString metaData_karr_i_QString = QString::fromUtf8(metaData_karr[i].data, metaData_karr[i].len);
        metaData_QMap[metaData_karr_i_QString] = *(metaData_varr[i]);
    }
    self->operator=(metaData_QMap);
}

QVariant* KIO__MetaData_ToVariant(const KIO__MetaData* self) {
    return new QVariant(self->toVariant());
}

void KIO__MetaData_OperatorAssign2(KIO__MetaData* self, const KIO__MetaData* param1) {
    self->operator=(*param1);
}

void KIO__MetaData_Delete(KIO__MetaData* self) {
    delete self;
}
