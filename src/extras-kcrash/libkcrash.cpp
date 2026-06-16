#include <KCrash>
#include <QHash>
#include <QString>
#include <QVariant>
#include <kcrash.h>
#include "libkcrash.h"
#include "libkcrash.hxx"

void KCrash_Initialize() {
    KCrash::initialize();
}

void KCrash_DefaultCrashHandler(int signal) {
    KCrash::defaultCrashHandler(static_cast<int>(signal));
}

void KCrash_SetCrashHandler(intptr_t handler) {
    auto handler_func = reinterpret_cast<KCrash::HandlerType>(handler);
    KCrash::setCrashHandler(handler_func);
}

intptr_t KCrash_CrashHandler() {
    return reinterpret_cast<intptr_t>(KCrash::crashHandler());
}

void KCrash_SetEmergencySaveFunction(intptr_t saveFunction) {
    auto saveFunction_func = reinterpret_cast<KCrash::HandlerType>(saveFunction);
    KCrash::setEmergencySaveFunction(saveFunction_func);
}

intptr_t KCrash_EmergencySaveFunction() {
    return reinterpret_cast<intptr_t>(KCrash::emergencySaveFunction());
}

void KCrash_SetFlags(int flags) {
    KCrash::setFlags(static_cast<KCrash::CrashFlags>(flags));
}

void KCrash_SetDrKonqiEnabled(bool enabled) {
    KCrash::setDrKonqiEnabled(enabled);
}

bool KCrash_IsDrKonqiEnabled() {
    return KCrash::isDrKonqiEnabled();
}

void KCrash_SetErrorMessage(const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    KCrash::setErrorMessage(message_QString);
}

void KCrash_SetErrorTags(const libqt_map /* of libqt_string to libqt_string */ details) {
    QHash<QString, QString> details_QHash;
    details_QHash.reserve(details.len);
    libqt_string* details_karr = static_cast<libqt_string*>(details.keys);
    libqt_string* details_varr = static_cast<libqt_string*>(details.values);
    for (size_t i = 0; i < details.len; ++i) {
        QString details_karr_i_QString = QString::fromUtf8(details_karr[i].data, details_karr[i].len);
        QString details_varr_i_QString = QString::fromUtf8(details_varr[i].data, details_varr[i].len);
        details_QHash[details_karr_i_QString] = details_varr_i_QString;
    }
    KCrash::setErrorTags(details_QHash);
}

void KCrash_SetErrorExtraData(const libqt_map /* of libqt_string to libqt_string */ details) {
    QHash<QString, QString> details_QHash;
    details_QHash.reserve(details.len);
    libqt_string* details_karr = static_cast<libqt_string*>(details.keys);
    libqt_string* details_varr = static_cast<libqt_string*>(details.values);
    for (size_t i = 0; i < details.len; ++i) {
        QString details_karr_i_QString = QString::fromUtf8(details_karr[i].data, details_karr[i].len);
        QString details_varr_i_QString = QString::fromUtf8(details_varr[i].data, details_varr[i].len);
        details_QHash[details_karr_i_QString] = details_varr_i_QString;
    }
    KCrash::setErrorExtraData(details_QHash);
}

void KCrash_SetGPUData(const libqt_map /* of libqt_string to QVariant* */ data) {
    QHash<QString, QVariant> data_QHash;
    data_QHash.reserve(data.len);
    libqt_string* data_karr = static_cast<libqt_string*>(data.keys);
    QVariant** data_varr = static_cast<QVariant**>(data.values);
    for (size_t i = 0; i < data.len; ++i) {
        QString data_karr_i_QString = QString::fromUtf8(data_karr[i].data, data_karr[i].len);
        data_QHash[data_karr_i_QString] = *(data_varr[i]);
    }
    KCrash::setGPUData(data_QHash);
}
