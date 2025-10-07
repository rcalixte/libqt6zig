#include <KCrash>
#include <QHash>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <kcrash.h>
#include "libkcrash.h"
#include "libkcrash.hxx"

void KCrash_Initialize() {
    KCrash::initialize();
}

void KCrash_DefaultCrashHandler(int param1) {
    KCrash::defaultCrashHandler(static_cast<int>(param1));
}

void KCrash_SetFlags(int param1) {
    KCrash::setFlags(static_cast<KCrash::CrashFlags>(param1));
}

void KCrash_SetDrKonqiEnabled(bool param1) {
    KCrash::setDrKonqiEnabled(param1);
}

bool KCrash_IsDrKonqiEnabled() {
    return KCrash::isDrKonqiEnabled();
}

void KCrash_SetErrorMessage(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    KCrash::setErrorMessage(param1_QString);
}

void KCrash_SetErrorTags(const libqt_map /* of libqt_string to libqt_string */ param1) {
    QHash<QString, QString> param1_QMap;
    param1_QMap.reserve(param1.len);
    libqt_string* param1_karr = static_cast<libqt_string*>(param1.keys);
    libqt_string* param1_varr = static_cast<libqt_string*>(param1.values);
    for (size_t i = 0; i < param1.len; ++i) {
        QString param1_karr_i_QString = QString::fromUtf8(param1_karr[i].data, param1_karr[i].len);
        QString param1_varr_i_QString = QString::fromUtf8(param1_varr[i].data, param1_varr[i].len);
        param1_QMap[param1_karr_i_QString] = param1_varr_i_QString;
    }
    KCrash::setErrorTags(param1_QMap);
}

void KCrash_SetErrorExtraData(const libqt_map /* of libqt_string to libqt_string */ param1) {
    QHash<QString, QString> param1_QMap;
    param1_QMap.reserve(param1.len);
    libqt_string* param1_karr = static_cast<libqt_string*>(param1.keys);
    libqt_string* param1_varr = static_cast<libqt_string*>(param1.values);
    for (size_t i = 0; i < param1.len; ++i) {
        QString param1_karr_i_QString = QString::fromUtf8(param1_karr[i].data, param1_karr[i].len);
        QString param1_varr_i_QString = QString::fromUtf8(param1_varr[i].data, param1_varr[i].len);
        param1_QMap[param1_karr_i_QString] = param1_varr_i_QString;
    }
    KCrash::setErrorExtraData(param1_QMap);
}

void KCrash_SetGPUData(const libqt_map /* of libqt_string to QVariant* */ param1) {
    QHash<QString, QVariant> param1_QMap;
    param1_QMap.reserve(param1.len);
    libqt_string* param1_karr = static_cast<libqt_string*>(param1.keys);
    QVariant** param1_varr = static_cast<QVariant**>(param1.values);
    for (size_t i = 0; i < param1.len; ++i) {
        QString param1_karr_i_QString = QString::fromUtf8(param1_karr[i].data, param1_karr[i].len);
        param1_QMap[param1_karr_i_QString] = *(param1_varr[i]);
    }
    KCrash::setGPUData(param1_QMap);
}
