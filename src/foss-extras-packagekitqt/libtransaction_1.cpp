#include <PackageKit/Details>
#include <PackageKit/Transaction>
#include <QChildEvent>
#include <QDBusObjectPath>
#include <QDateTime>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <transaction.h>
#include "libtransaction_1.h"
#include "libtransaction_1.hxx"

PackageKit__Transaction* PackageKit__Transaction_new(const QDBusObjectPath* tid) {
    return new VirtualPackageKitTransaction(*tid);
}

QMetaObject* PackageKit__Transaction_MetaObject(const PackageKit__Transaction* self) {
    return (QMetaObject*)self->metaObject();
}

void* PackageKit__Transaction_Metacast(PackageKit__Transaction* self, const char* param1) {
    return self->qt_metacast(param1);
}

int PackageKit__Transaction_Metacall(PackageKit__Transaction* self, int param1, int param2, void** param3) {
    auto* vpackagekit__transaction = dynamic_cast<VirtualPackageKitTransaction*>(self);
    if (vpackagekit__transaction && vpackagekit__transaction->isVirtualPackageKitTransaction) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualPackageKitTransaction*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string PackageKit__Transaction_Tr(const char* s) {
    QString _ret = PackageKit::Transaction::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QDBusObjectPath* PackageKit__Transaction_Tid(const PackageKit__Transaction* self) {
    return new QDBusObjectPath(self->tid());
}

bool PackageKit__Transaction_AllowCancel(const PackageKit__Transaction* self) {
    return self->allowCancel();
}

bool PackageKit__Transaction_IsCallerActive(const PackageKit__Transaction* self) {
    return self->isCallerActive();
}

libqt_string PackageKit__Transaction_LastPackage(const PackageKit__Transaction* self) {
    QString _ret = self->lastPackage();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

unsigned int PackageKit__Transaction_Percentage(const PackageKit__Transaction* self) {
    return static_cast<unsigned int>(self->percentage());
}

unsigned int PackageKit__Transaction_ElapsedTime(const PackageKit__Transaction* self) {
    return static_cast<unsigned int>(self->elapsedTime());
}

unsigned int PackageKit__Transaction_RemainingTime(const PackageKit__Transaction* self) {
    return static_cast<unsigned int>(self->remainingTime());
}

unsigned int PackageKit__Transaction_Speed(const PackageKit__Transaction* self) {
    return static_cast<unsigned int>(self->speed());
}

unsigned long long PackageKit__Transaction_DownloadSizeRemaining(const PackageKit__Transaction* self) {
    return static_cast<unsigned long long>(self->downloadSizeRemaining());
}

int PackageKit__Transaction_Role(const PackageKit__Transaction* self) {
    return static_cast<int>(self->role());
}

int PackageKit__Transaction_Status(const PackageKit__Transaction* self) {
    return static_cast<int>(self->status());
}

int PackageKit__Transaction_TransactionFlags(const PackageKit__Transaction* self) {
    return static_cast<int>(self->transactionFlags());
}

QDateTime* PackageKit__Transaction_Timespec(const PackageKit__Transaction* self) {
    return new QDateTime(self->timespec());
}

bool PackageKit__Transaction_Succeeded(const PackageKit__Transaction* self) {
    return self->succeeded();
}

unsigned int PackageKit__Transaction_Duration(const PackageKit__Transaction* self) {
    return static_cast<unsigned int>(self->duration());
}

libqt_string PackageKit__Transaction_Data(const PackageKit__Transaction* self) {
    QString _ret = self->data();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

unsigned int PackageKit__Transaction_Uid(const PackageKit__Transaction* self) {
    return static_cast<unsigned int>(self->uid());
}

libqt_string PackageKit__Transaction_SenderName(const PackageKit__Transaction* self) {
    QString _ret = self->senderName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string PackageKit__Transaction_Cmdline(const PackageKit__Transaction* self) {
    QString _ret = self->cmdline();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string PackageKit__Transaction_PackageName(const libqt_string packageID) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    QString _ret = PackageKit::Transaction::packageName(packageID_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string PackageKit__Transaction_PackageVersion(const libqt_string packageID) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    QString _ret = PackageKit::Transaction::packageVersion(packageID_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string PackageKit__Transaction_PackageArch(const libqt_string packageID) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    QString _ret = PackageKit::Transaction::packageArch(packageID_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string PackageKit__Transaction_PackageData(const libqt_string packageID) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    QString _ret = PackageKit::Transaction::packageData(packageID_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void PackageKit__Transaction_AllowCancelChanged(PackageKit__Transaction* self) {
    self->allowCancelChanged();
}

void PackageKit__Transaction_Connect_AllowCancelChanged(PackageKit__Transaction* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Transaction*) = reinterpret_cast<void (*)(PackageKit__Transaction*)>(slot);
    PackageKit::Transaction::connect(self, &PackageKit::Transaction::allowCancelChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void PackageKit__Transaction_IsCallerActiveChanged(PackageKit__Transaction* self) {
    self->isCallerActiveChanged();
}

void PackageKit__Transaction_Connect_IsCallerActiveChanged(PackageKit__Transaction* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Transaction*) = reinterpret_cast<void (*)(PackageKit__Transaction*)>(slot);
    PackageKit::Transaction::connect(self, &PackageKit::Transaction::isCallerActiveChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void PackageKit__Transaction_DownloadSizeRemainingChanged(PackageKit__Transaction* self) {
    self->downloadSizeRemainingChanged();
}

void PackageKit__Transaction_Connect_DownloadSizeRemainingChanged(PackageKit__Transaction* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Transaction*) = reinterpret_cast<void (*)(PackageKit__Transaction*)>(slot);
    PackageKit::Transaction::connect(self, &PackageKit::Transaction::downloadSizeRemainingChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void PackageKit__Transaction_ElapsedTimeChanged(PackageKit__Transaction* self) {
    self->elapsedTimeChanged();
}

void PackageKit__Transaction_Connect_ElapsedTimeChanged(PackageKit__Transaction* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Transaction*) = reinterpret_cast<void (*)(PackageKit__Transaction*)>(slot);
    PackageKit::Transaction::connect(self, &PackageKit::Transaction::elapsedTimeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void PackageKit__Transaction_LastPackageChanged(PackageKit__Transaction* self) {
    self->lastPackageChanged();
}

void PackageKit__Transaction_Connect_LastPackageChanged(PackageKit__Transaction* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Transaction*) = reinterpret_cast<void (*)(PackageKit__Transaction*)>(slot);
    PackageKit::Transaction::connect(self, &PackageKit::Transaction::lastPackageChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void PackageKit__Transaction_PercentageChanged(PackageKit__Transaction* self) {
    self->percentageChanged();
}

void PackageKit__Transaction_Connect_PercentageChanged(PackageKit__Transaction* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Transaction*) = reinterpret_cast<void (*)(PackageKit__Transaction*)>(slot);
    PackageKit::Transaction::connect(self, &PackageKit::Transaction::percentageChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void PackageKit__Transaction_RemainingTimeChanged(PackageKit__Transaction* self) {
    self->remainingTimeChanged();
}

void PackageKit__Transaction_Connect_RemainingTimeChanged(PackageKit__Transaction* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Transaction*) = reinterpret_cast<void (*)(PackageKit__Transaction*)>(slot);
    PackageKit::Transaction::connect(self, &PackageKit::Transaction::remainingTimeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void PackageKit__Transaction_RoleChanged(PackageKit__Transaction* self) {
    self->roleChanged();
}

void PackageKit__Transaction_Connect_RoleChanged(PackageKit__Transaction* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Transaction*) = reinterpret_cast<void (*)(PackageKit__Transaction*)>(slot);
    PackageKit::Transaction::connect(self, &PackageKit::Transaction::roleChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void PackageKit__Transaction_SpeedChanged(PackageKit__Transaction* self) {
    self->speedChanged();
}

void PackageKit__Transaction_Connect_SpeedChanged(PackageKit__Transaction* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Transaction*) = reinterpret_cast<void (*)(PackageKit__Transaction*)>(slot);
    PackageKit::Transaction::connect(self, &PackageKit::Transaction::speedChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void PackageKit__Transaction_StatusChanged(PackageKit__Transaction* self) {
    self->statusChanged();
}

void PackageKit__Transaction_Connect_StatusChanged(PackageKit__Transaction* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Transaction*) = reinterpret_cast<void (*)(PackageKit__Transaction*)>(slot);
    PackageKit::Transaction::connect(self, &PackageKit::Transaction::statusChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void PackageKit__Transaction_TransactionFlagsChanged(PackageKit__Transaction* self) {
    self->transactionFlagsChanged();
}

void PackageKit__Transaction_Connect_TransactionFlagsChanged(PackageKit__Transaction* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Transaction*) = reinterpret_cast<void (*)(PackageKit__Transaction*)>(slot);
    PackageKit::Transaction::connect(self, &PackageKit::Transaction::transactionFlagsChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void PackageKit__Transaction_UidChanged(PackageKit__Transaction* self) {
    self->uidChanged();
}

void PackageKit__Transaction_Connect_UidChanged(PackageKit__Transaction* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Transaction*) = reinterpret_cast<void (*)(PackageKit__Transaction*)>(slot);
    PackageKit::Transaction::connect(self, &PackageKit::Transaction::uidChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void PackageKit__Transaction_SenderNameChanged(PackageKit__Transaction* self) {
    self->senderNameChanged();
}

void PackageKit__Transaction_Connect_SenderNameChanged(PackageKit__Transaction* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Transaction*) = reinterpret_cast<void (*)(PackageKit__Transaction*)>(slot);
    PackageKit::Transaction::connect(self, &PackageKit::Transaction::senderNameChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void PackageKit__Transaction_Category(PackageKit__Transaction* self, const libqt_string parentId, const libqt_string categoryId, const libqt_string name, const libqt_string summary, const libqt_string icon) {
    QString parentId_QString = QString::fromUtf8(parentId.data, parentId.len);
    QString categoryId_QString = QString::fromUtf8(categoryId.data, categoryId.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString summary_QString = QString::fromUtf8(summary.data, summary.len);
    QString icon_QString = QString::fromUtf8(icon.data, icon.len);
    self->category(parentId_QString, categoryId_QString, name_QString, summary_QString, icon_QString);
}

void PackageKit__Transaction_Connect_Category(PackageKit__Transaction* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Transaction*, const char*, const char*, const char*, const char*, const char*) = reinterpret_cast<void (*)(PackageKit__Transaction*, const char*, const char*, const char*, const char*, const char*)>(slot);
    PackageKit::Transaction::connect(self, &PackageKit::Transaction::category, [self, slotFunc](const QString& parentId, const QString& categoryId, const QString& name, const QString& summary, const QString& icon) {
        const QString parentId_ret = parentId;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray parentId_b = parentId_ret.toUtf8();
        const char* parentId_str = static_cast<const char*>(malloc(parentId_b.length() + 1));
        memcpy((void*)parentId_str, parentId_b.data(), parentId_b.length());
        ((char*)parentId_str)[parentId_b.length()] = '\0';
        const char* sigval1 = parentId_str;
        const QString categoryId_ret = categoryId;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray categoryId_b = categoryId_ret.toUtf8();
        const char* categoryId_str = static_cast<const char*>(malloc(categoryId_b.length() + 1));
        memcpy((void*)categoryId_str, categoryId_b.data(), categoryId_b.length());
        ((char*)categoryId_str)[categoryId_b.length()] = '\0';
        const char* sigval2 = categoryId_str;
        const QString name_ret = name;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray name_b = name_ret.toUtf8();
        const char* name_str = static_cast<const char*>(malloc(name_b.length() + 1));
        memcpy((void*)name_str, name_b.data(), name_b.length());
        ((char*)name_str)[name_b.length()] = '\0';
        const char* sigval3 = name_str;
        const QString summary_ret = summary;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray summary_b = summary_ret.toUtf8();
        const char* summary_str = static_cast<const char*>(malloc(summary_b.length() + 1));
        memcpy((void*)summary_str, summary_b.data(), summary_b.length());
        ((char*)summary_str)[summary_b.length()] = '\0';
        const char* sigval4 = summary_str;
        const QString icon_ret = icon;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray icon_b = icon_ret.toUtf8();
        const char* icon_str = static_cast<const char*>(malloc(icon_b.length() + 1));
        memcpy((void*)icon_str, icon_b.data(), icon_b.length());
        ((char*)icon_str)[icon_b.length()] = '\0';
        const char* sigval5 = icon_str;
        slotFunc(self, sigval1, sigval2, sigval3, sigval4, sigval5);
        libqt_free(parentId_str);
        libqt_free(categoryId_str);
        libqt_free(name_str);
        libqt_free(summary_str);
        libqt_free(icon_str);
    });
}

void PackageKit__Transaction_DistroUpgrade(PackageKit__Transaction* self, int typeVal, const libqt_string name, const libqt_string description) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->distroUpgrade(static_cast<PackageKit::Transaction::DistroUpgrade>(typeVal), name_QString, description_QString);
}

void PackageKit__Transaction_Connect_DistroUpgrade(PackageKit__Transaction* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Transaction*, int, const char*, const char*) = reinterpret_cast<void (*)(PackageKit__Transaction*, int, const char*, const char*)>(slot);
    PackageKit::Transaction::connect(self, &PackageKit::Transaction::distroUpgrade, [self, slotFunc](PackageKit::Transaction::DistroUpgrade typeVal, const QString& name, const QString& description) {
        int sigval1 = static_cast<int>(typeVal);
        const QString name_ret = name;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray name_b = name_ret.toUtf8();
        const char* name_str = static_cast<const char*>(malloc(name_b.length() + 1));
        memcpy((void*)name_str, name_b.data(), name_b.length());
        ((char*)name_str)[name_b.length()] = '\0';
        const char* sigval2 = name_str;
        const QString description_ret = description;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray description_b = description_ret.toUtf8();
        const char* description_str = static_cast<const char*>(malloc(description_b.length() + 1));
        memcpy((void*)description_str, description_b.data(), description_b.length());
        ((char*)description_str)[description_b.length()] = '\0';
        const char* sigval3 = description_str;
        slotFunc(self, sigval1, sigval2, sigval3);
        libqt_free(name_str);
        libqt_free(description_str);
    });
}

void PackageKit__Transaction_ErrorCode(PackageKit__Transaction* self, int errorVal, const libqt_string details) {
    QString details_QString = QString::fromUtf8(details.data, details.len);
    self->errorCode(static_cast<PackageKit::Transaction::Error>(errorVal), details_QString);
}

void PackageKit__Transaction_Connect_ErrorCode(PackageKit__Transaction* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Transaction*, int, const char*) = reinterpret_cast<void (*)(PackageKit__Transaction*, int, const char*)>(slot);
    PackageKit::Transaction::connect(self, &PackageKit::Transaction::errorCode, [self, slotFunc](PackageKit::Transaction::Error errorVal, const QString& details) {
        int sigval1 = static_cast<int>(errorVal);
        const QString details_ret = details;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray details_b = details_ret.toUtf8();
        const char* details_str = static_cast<const char*>(malloc(details_b.length() + 1));
        memcpy((void*)details_str, details_b.data(), details_b.length());
        ((char*)details_str)[details_b.length()] = '\0';
        const char* sigval2 = details_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(details_str);
    });
}

void PackageKit__Transaction_EulaRequired(PackageKit__Transaction* self, const libqt_string eulaID, const libqt_string packageID, const libqt_string vendor, const libqt_string licenseAgreement) {
    QString eulaID_QString = QString::fromUtf8(eulaID.data, eulaID.len);
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    QString vendor_QString = QString::fromUtf8(vendor.data, vendor.len);
    QString licenseAgreement_QString = QString::fromUtf8(licenseAgreement.data, licenseAgreement.len);
    self->eulaRequired(eulaID_QString, packageID_QString, vendor_QString, licenseAgreement_QString);
}

void PackageKit__Transaction_Connect_EulaRequired(PackageKit__Transaction* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Transaction*, const char*, const char*, const char*, const char*) = reinterpret_cast<void (*)(PackageKit__Transaction*, const char*, const char*, const char*, const char*)>(slot);
    PackageKit::Transaction::connect(self, &PackageKit::Transaction::eulaRequired, [self, slotFunc](const QString& eulaID, const QString& packageID, const QString& vendor, const QString& licenseAgreement) {
        const QString eulaID_ret = eulaID;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray eulaID_b = eulaID_ret.toUtf8();
        const char* eulaID_str = static_cast<const char*>(malloc(eulaID_b.length() + 1));
        memcpy((void*)eulaID_str, eulaID_b.data(), eulaID_b.length());
        ((char*)eulaID_str)[eulaID_b.length()] = '\0';
        const char* sigval1 = eulaID_str;
        const QString packageID_ret = packageID;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray packageID_b = packageID_ret.toUtf8();
        const char* packageID_str = static_cast<const char*>(malloc(packageID_b.length() + 1));
        memcpy((void*)packageID_str, packageID_b.data(), packageID_b.length());
        ((char*)packageID_str)[packageID_b.length()] = '\0';
        const char* sigval2 = packageID_str;
        const QString vendor_ret = vendor;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray vendor_b = vendor_ret.toUtf8();
        const char* vendor_str = static_cast<const char*>(malloc(vendor_b.length() + 1));
        memcpy((void*)vendor_str, vendor_b.data(), vendor_b.length());
        ((char*)vendor_str)[vendor_b.length()] = '\0';
        const char* sigval3 = vendor_str;
        const QString licenseAgreement_ret = licenseAgreement;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray licenseAgreement_b = licenseAgreement_ret.toUtf8();
        const char* licenseAgreement_str = static_cast<const char*>(malloc(licenseAgreement_b.length() + 1));
        memcpy((void*)licenseAgreement_str, licenseAgreement_b.data(), licenseAgreement_b.length());
        ((char*)licenseAgreement_str)[licenseAgreement_b.length()] = '\0';
        const char* sigval4 = licenseAgreement_str;
        slotFunc(self, sigval1, sigval2, sigval3, sigval4);
        libqt_free(eulaID_str);
        libqt_free(packageID_str);
        libqt_free(vendor_str);
        libqt_free(licenseAgreement_str);
    });
}

void PackageKit__Transaction_MediaChangeRequired(PackageKit__Transaction* self, int typeVal, const libqt_string id, const libqt_string text) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->mediaChangeRequired(static_cast<PackageKit::Transaction::MediaType>(typeVal), id_QString, text_QString);
}

void PackageKit__Transaction_Connect_MediaChangeRequired(PackageKit__Transaction* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Transaction*, int, const char*, const char*) = reinterpret_cast<void (*)(PackageKit__Transaction*, int, const char*, const char*)>(slot);
    PackageKit::Transaction::connect(self, &PackageKit::Transaction::mediaChangeRequired, [self, slotFunc](PackageKit::Transaction::MediaType typeVal, const QString& id, const QString& text) {
        int sigval1 = static_cast<int>(typeVal);
        const QString id_ret = id;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray id_b = id_ret.toUtf8();
        const char* id_str = static_cast<const char*>(malloc(id_b.length() + 1));
        memcpy((void*)id_str, id_b.data(), id_b.length());
        ((char*)id_str)[id_b.length()] = '\0';
        const char* sigval2 = id_str;
        const QString text_ret = text;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray text_b = text_ret.toUtf8();
        const char* text_str = static_cast<const char*>(malloc(text_b.length() + 1));
        memcpy((void*)text_str, text_b.data(), text_b.length());
        ((char*)text_str)[text_b.length()] = '\0';
        const char* sigval3 = text_str;
        slotFunc(self, sigval1, sigval2, sigval3);
        libqt_free(id_str);
        libqt_free(text_str);
    });
}

void PackageKit__Transaction_ItemProgress(PackageKit__Transaction* self, const libqt_string itemID, int status, unsigned int percentage) {
    QString itemID_QString = QString::fromUtf8(itemID.data, itemID.len);
    self->itemProgress(itemID_QString, static_cast<PackageKit::Transaction::Status>(status), static_cast<uint>(percentage));
}

void PackageKit__Transaction_Connect_ItemProgress(PackageKit__Transaction* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Transaction*, const char*, int, unsigned int) = reinterpret_cast<void (*)(PackageKit__Transaction*, const char*, int, unsigned int)>(slot);
    PackageKit::Transaction::connect(self, &PackageKit::Transaction::itemProgress, [self, slotFunc](const QString& itemID, PackageKit::Transaction::Status status, uint percentage) {
        const QString itemID_ret = itemID;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray itemID_b = itemID_ret.toUtf8();
        const char* itemID_str = static_cast<const char*>(malloc(itemID_b.length() + 1));
        memcpy((void*)itemID_str, itemID_b.data(), itemID_b.length());
        ((char*)itemID_str)[itemID_b.length()] = '\0';
        const char* sigval1 = itemID_str;
        int sigval2 = static_cast<int>(status);
        unsigned int sigval3 = static_cast<unsigned int>(percentage);
        slotFunc(self, sigval1, sigval2, sigval3);
        libqt_free(itemID_str);
    });
}

void PackageKit__Transaction_Files(PackageKit__Transaction* self, const libqt_string packageID, const libqt_list /* of libqt_string */ filenames) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    QList<QString> filenames_QList;
    filenames_QList.reserve(filenames.len);
    libqt_string* filenames_arr = static_cast<libqt_string*>(filenames.data);
    for (size_t i = 0; i < filenames.len; ++i) {
        QString filenames_arr_i_QString = QString::fromUtf8(filenames_arr[i].data, filenames_arr[i].len);
        filenames_QList.push_back(filenames_arr_i_QString);
    }
    self->files(packageID_QString, filenames_QList);
}

void PackageKit__Transaction_Connect_Files(PackageKit__Transaction* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Transaction*, const char*, const char**) = reinterpret_cast<void (*)(PackageKit__Transaction*, const char*, const char**)>(slot);
    PackageKit::Transaction::connect(self, &PackageKit::Transaction::files, [self, slotFunc](const QString& packageID, const QList<QString>& filenames) {
        const QString packageID_ret = packageID;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray packageID_b = packageID_ret.toUtf8();
        const char* packageID_str = static_cast<const char*>(malloc(packageID_b.length() + 1));
        memcpy((void*)packageID_str, packageID_b.data(), packageID_b.length());
        ((char*)packageID_str)[packageID_b.length()] = '\0';
        const char* sigval1 = packageID_str;
        const QList<QString>& filenames_ret = filenames;
        // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
        const char** filenames_arr = static_cast<const char**>(malloc(sizeof(const char*) * (filenames_ret.size() + 1)));
        for (qsizetype i = 0; i < filenames_ret.size(); ++i) {
            QByteArray filenames_b = filenames_ret[i].toUtf8();
            char* filenames_str = static_cast<char*>(malloc(filenames_b.length() + 1));
            memcpy(filenames_str, filenames_b.data(), filenames_b.length());
            filenames_str[filenames_b.length()] = '\0';
            filenames_arr[i] = filenames_str;
        }
        // Append sentinel null terminator to the list
        filenames_arr[filenames_ret.size()] = nullptr;
        const char** sigval2 = filenames_arr;
        slotFunc(self, sigval1, sigval2);
        libqt_free(packageID_str);
        free(filenames_arr);
    });
}

void PackageKit__Transaction_Finished(PackageKit__Transaction* self, int status, unsigned int runtime) {
    self->finished(static_cast<PackageKit::Transaction::Exit>(status), static_cast<uint>(runtime));
}

void PackageKit__Transaction_Connect_Finished(PackageKit__Transaction* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Transaction*, int, unsigned int) = reinterpret_cast<void (*)(PackageKit__Transaction*, int, unsigned int)>(slot);
    PackageKit::Transaction::connect(self, &PackageKit::Transaction::finished, [self, slotFunc](PackageKit::Transaction::Exit status, uint runtime) {
        int sigval1 = static_cast<int>(status);
        unsigned int sigval2 = static_cast<unsigned int>(runtime);
        slotFunc(self, sigval1, sigval2);
    });
}

void PackageKit__Transaction_Package(PackageKit__Transaction* self, int info, const libqt_string packageID, const libqt_string summary) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    QString summary_QString = QString::fromUtf8(summary.data, summary.len);
    self->package(static_cast<PackageKit::Transaction::Info>(info), packageID_QString, summary_QString);
}

void PackageKit__Transaction_Connect_Package(PackageKit__Transaction* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Transaction*, int, const char*, const char*) = reinterpret_cast<void (*)(PackageKit__Transaction*, int, const char*, const char*)>(slot);
    PackageKit::Transaction::connect(self, &PackageKit::Transaction::package, [self, slotFunc](PackageKit::Transaction::Info info, const QString& packageID, const QString& summary) {
        int sigval1 = static_cast<int>(info);
        const QString packageID_ret = packageID;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray packageID_b = packageID_ret.toUtf8();
        const char* packageID_str = static_cast<const char*>(malloc(packageID_b.length() + 1));
        memcpy((void*)packageID_str, packageID_b.data(), packageID_b.length());
        ((char*)packageID_str)[packageID_b.length()] = '\0';
        const char* sigval2 = packageID_str;
        const QString summary_ret = summary;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray summary_b = summary_ret.toUtf8();
        const char* summary_str = static_cast<const char*>(malloc(summary_b.length() + 1));
        memcpy((void*)summary_str, summary_b.data(), summary_b.length());
        ((char*)summary_str)[summary_b.length()] = '\0';
        const char* sigval3 = summary_str;
        slotFunc(self, sigval1, sigval2, sigval3);
        libqt_free(packageID_str);
        libqt_free(summary_str);
    });
}

void PackageKit__Transaction_Details(PackageKit__Transaction* self, const PackageKit__Details* values) {
    self->details(*values);
}

void PackageKit__Transaction_Connect_Details(PackageKit__Transaction* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Transaction*, PackageKit__Details*) = reinterpret_cast<void (*)(PackageKit__Transaction*, PackageKit__Details*)>(slot);
    PackageKit::Transaction::connect(self, &PackageKit::Transaction::details, [self, slotFunc](const PackageKit::Details& values) {
        const PackageKit::Details& values_ret = values;
        // Cast returned reference into pointer
        PackageKit__Details* sigval1 = const_cast<PackageKit::Details*>(&values_ret);
        slotFunc(self, sigval1);
    });
}

void PackageKit__Transaction_UpdateDetail(PackageKit__Transaction* self, const libqt_string packageID, const libqt_list /* of libqt_string */ updates, const libqt_list /* of libqt_string */ obsoletes, const libqt_list /* of libqt_string */ vendorUrls, const libqt_list /* of libqt_string */ bugzillaUrls, const libqt_list /* of libqt_string */ cveUrls, int restart, const libqt_string updateText, const libqt_string changelog, int state, const QDateTime* issued, const QDateTime* updated) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    QList<QString> updates_QList;
    updates_QList.reserve(updates.len);
    libqt_string* updates_arr = static_cast<libqt_string*>(updates.data);
    for (size_t i = 0; i < updates.len; ++i) {
        QString updates_arr_i_QString = QString::fromUtf8(updates_arr[i].data, updates_arr[i].len);
        updates_QList.push_back(updates_arr_i_QString);
    }
    QList<QString> obsoletes_QList;
    obsoletes_QList.reserve(obsoletes.len);
    libqt_string* obsoletes_arr = static_cast<libqt_string*>(obsoletes.data);
    for (size_t i = 0; i < obsoletes.len; ++i) {
        QString obsoletes_arr_i_QString = QString::fromUtf8(obsoletes_arr[i].data, obsoletes_arr[i].len);
        obsoletes_QList.push_back(obsoletes_arr_i_QString);
    }
    QList<QString> vendorUrls_QList;
    vendorUrls_QList.reserve(vendorUrls.len);
    libqt_string* vendorUrls_arr = static_cast<libqt_string*>(vendorUrls.data);
    for (size_t i = 0; i < vendorUrls.len; ++i) {
        QString vendorUrls_arr_i_QString = QString::fromUtf8(vendorUrls_arr[i].data, vendorUrls_arr[i].len);
        vendorUrls_QList.push_back(vendorUrls_arr_i_QString);
    }
    QList<QString> bugzillaUrls_QList;
    bugzillaUrls_QList.reserve(bugzillaUrls.len);
    libqt_string* bugzillaUrls_arr = static_cast<libqt_string*>(bugzillaUrls.data);
    for (size_t i = 0; i < bugzillaUrls.len; ++i) {
        QString bugzillaUrls_arr_i_QString = QString::fromUtf8(bugzillaUrls_arr[i].data, bugzillaUrls_arr[i].len);
        bugzillaUrls_QList.push_back(bugzillaUrls_arr_i_QString);
    }
    QList<QString> cveUrls_QList;
    cveUrls_QList.reserve(cveUrls.len);
    libqt_string* cveUrls_arr = static_cast<libqt_string*>(cveUrls.data);
    for (size_t i = 0; i < cveUrls.len; ++i) {
        QString cveUrls_arr_i_QString = QString::fromUtf8(cveUrls_arr[i].data, cveUrls_arr[i].len);
        cveUrls_QList.push_back(cveUrls_arr_i_QString);
    }
    QString updateText_QString = QString::fromUtf8(updateText.data, updateText.len);
    QString changelog_QString = QString::fromUtf8(changelog.data, changelog.len);
    self->updateDetail(packageID_QString, updates_QList, obsoletes_QList, vendorUrls_QList, bugzillaUrls_QList, cveUrls_QList, static_cast<PackageKit::Transaction::Restart>(restart), updateText_QString, changelog_QString, static_cast<PackageKit::Transaction::UpdateState>(state), *issued, *updated);
}

void PackageKit__Transaction_Connect_UpdateDetail(PackageKit__Transaction* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Transaction*, const char*, const char**, const char**, const char**, const char**, const char**, int, const char*, const char*, int, QDateTime*, QDateTime*) = reinterpret_cast<void (*)(PackageKit__Transaction*, const char*, const char**, const char**, const char**, const char**, const char**, int, const char*, const char*, int, QDateTime*, QDateTime*)>(slot);
    PackageKit::Transaction::connect(self, &PackageKit::Transaction::updateDetail, [self, slotFunc](const QString& packageID, const QList<QString>& updates, const QList<QString>& obsoletes, const QList<QString>& vendorUrls, const QList<QString>& bugzillaUrls, const QList<QString>& cveUrls, PackageKit::Transaction::Restart restart, const QString& updateText, const QString& changelog, PackageKit::Transaction::UpdateState state, const QDateTime& issued, const QDateTime& updated) {
        const QString packageID_ret = packageID;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray packageID_b = packageID_ret.toUtf8();
        const char* packageID_str = static_cast<const char*>(malloc(packageID_b.length() + 1));
        memcpy((void*)packageID_str, packageID_b.data(), packageID_b.length());
        ((char*)packageID_str)[packageID_b.length()] = '\0';
        const char* sigval1 = packageID_str;
        const QList<QString>& updates_ret = updates;
        // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
        const char** updates_arr = static_cast<const char**>(malloc(sizeof(const char*) * (updates_ret.size() + 1)));
        for (qsizetype i = 0; i < updates_ret.size(); ++i) {
            QByteArray updates_b = updates_ret[i].toUtf8();
            char* updates_str = static_cast<char*>(malloc(updates_b.length() + 1));
            memcpy(updates_str, updates_b.data(), updates_b.length());
            updates_str[updates_b.length()] = '\0';
            updates_arr[i] = updates_str;
        }
        // Append sentinel null terminator to the list
        updates_arr[updates_ret.size()] = nullptr;
        const char** sigval2 = updates_arr;
        const QList<QString>& obsoletes_ret = obsoletes;
        // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
        const char** obsoletes_arr = static_cast<const char**>(malloc(sizeof(const char*) * (obsoletes_ret.size() + 1)));
        for (qsizetype i = 0; i < obsoletes_ret.size(); ++i) {
            QByteArray obsoletes_b = obsoletes_ret[i].toUtf8();
            char* obsoletes_str = static_cast<char*>(malloc(obsoletes_b.length() + 1));
            memcpy(obsoletes_str, obsoletes_b.data(), obsoletes_b.length());
            obsoletes_str[obsoletes_b.length()] = '\0';
            obsoletes_arr[i] = obsoletes_str;
        }
        // Append sentinel null terminator to the list
        obsoletes_arr[obsoletes_ret.size()] = nullptr;
        const char** sigval3 = obsoletes_arr;
        const QList<QString>& vendorUrls_ret = vendorUrls;
        // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
        const char** vendorUrls_arr = static_cast<const char**>(malloc(sizeof(const char*) * (vendorUrls_ret.size() + 1)));
        for (qsizetype i = 0; i < vendorUrls_ret.size(); ++i) {
            QByteArray vendorUrls_b = vendorUrls_ret[i].toUtf8();
            char* vendorUrls_str = static_cast<char*>(malloc(vendorUrls_b.length() + 1));
            memcpy(vendorUrls_str, vendorUrls_b.data(), vendorUrls_b.length());
            vendorUrls_str[vendorUrls_b.length()] = '\0';
            vendorUrls_arr[i] = vendorUrls_str;
        }
        // Append sentinel null terminator to the list
        vendorUrls_arr[vendorUrls_ret.size()] = nullptr;
        const char** sigval4 = vendorUrls_arr;
        const QList<QString>& bugzillaUrls_ret = bugzillaUrls;
        // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
        const char** bugzillaUrls_arr = static_cast<const char**>(malloc(sizeof(const char*) * (bugzillaUrls_ret.size() + 1)));
        for (qsizetype i = 0; i < bugzillaUrls_ret.size(); ++i) {
            QByteArray bugzillaUrls_b = bugzillaUrls_ret[i].toUtf8();
            char* bugzillaUrls_str = static_cast<char*>(malloc(bugzillaUrls_b.length() + 1));
            memcpy(bugzillaUrls_str, bugzillaUrls_b.data(), bugzillaUrls_b.length());
            bugzillaUrls_str[bugzillaUrls_b.length()] = '\0';
            bugzillaUrls_arr[i] = bugzillaUrls_str;
        }
        // Append sentinel null terminator to the list
        bugzillaUrls_arr[bugzillaUrls_ret.size()] = nullptr;
        const char** sigval5 = bugzillaUrls_arr;
        const QList<QString>& cveUrls_ret = cveUrls;
        // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
        const char** cveUrls_arr = static_cast<const char**>(malloc(sizeof(const char*) * (cveUrls_ret.size() + 1)));
        for (qsizetype i = 0; i < cveUrls_ret.size(); ++i) {
            QByteArray cveUrls_b = cveUrls_ret[i].toUtf8();
            char* cveUrls_str = static_cast<char*>(malloc(cveUrls_b.length() + 1));
            memcpy(cveUrls_str, cveUrls_b.data(), cveUrls_b.length());
            cveUrls_str[cveUrls_b.length()] = '\0';
            cveUrls_arr[i] = cveUrls_str;
        }
        // Append sentinel null terminator to the list
        cveUrls_arr[cveUrls_ret.size()] = nullptr;
        const char** sigval6 = cveUrls_arr;
        int sigval7 = static_cast<int>(restart);
        const QString updateText_ret = updateText;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray updateText_b = updateText_ret.toUtf8();
        const char* updateText_str = static_cast<const char*>(malloc(updateText_b.length() + 1));
        memcpy((void*)updateText_str, updateText_b.data(), updateText_b.length());
        ((char*)updateText_str)[updateText_b.length()] = '\0';
        const char* sigval8 = updateText_str;
        const QString changelog_ret = changelog;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray changelog_b = changelog_ret.toUtf8();
        const char* changelog_str = static_cast<const char*>(malloc(changelog_b.length() + 1));
        memcpy((void*)changelog_str, changelog_b.data(), changelog_b.length());
        ((char*)changelog_str)[changelog_b.length()] = '\0';
        const char* sigval9 = changelog_str;
        int sigval10 = static_cast<int>(state);
        const QDateTime& issued_ret = issued;
        // Cast returned reference into pointer
        QDateTime* sigval11 = const_cast<QDateTime*>(&issued_ret);
        const QDateTime& updated_ret = updated;
        // Cast returned reference into pointer
        QDateTime* sigval12 = const_cast<QDateTime*>(&updated_ret);
        slotFunc(self, sigval1, sigval2, sigval3, sigval4, sigval5, sigval6, sigval7, sigval8, sigval9, sigval10, sigval11, sigval12);
        libqt_free(packageID_str);
        free(updates_arr);
        free(obsoletes_arr);
        free(vendorUrls_arr);
        free(bugzillaUrls_arr);
        free(cveUrls_arr);
        libqt_free(updateText_str);
        libqt_free(changelog_str);
    });
}

void PackageKit__Transaction_RepoDetail(PackageKit__Transaction* self, const libqt_string repoId, const libqt_string description, bool enabled) {
    QString repoId_QString = QString::fromUtf8(repoId.data, repoId.len);
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->repoDetail(repoId_QString, description_QString, enabled);
}

void PackageKit__Transaction_Connect_RepoDetail(PackageKit__Transaction* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Transaction*, const char*, const char*, bool) = reinterpret_cast<void (*)(PackageKit__Transaction*, const char*, const char*, bool)>(slot);
    PackageKit::Transaction::connect(self, &PackageKit::Transaction::repoDetail, [self, slotFunc](const QString& repoId, const QString& description, bool enabled) {
        const QString repoId_ret = repoId;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray repoId_b = repoId_ret.toUtf8();
        const char* repoId_str = static_cast<const char*>(malloc(repoId_b.length() + 1));
        memcpy((void*)repoId_str, repoId_b.data(), repoId_b.length());
        ((char*)repoId_str)[repoId_b.length()] = '\0';
        const char* sigval1 = repoId_str;
        const QString description_ret = description;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray description_b = description_ret.toUtf8();
        const char* description_str = static_cast<const char*>(malloc(description_b.length() + 1));
        memcpy((void*)description_str, description_b.data(), description_b.length());
        ((char*)description_str)[description_b.length()] = '\0';
        const char* sigval2 = description_str;
        bool sigval3 = enabled;
        slotFunc(self, sigval1, sigval2, sigval3);
        libqt_free(repoId_str);
        libqt_free(description_str);
    });
}

void PackageKit__Transaction_RepoSignatureRequired(PackageKit__Transaction* self, const libqt_string packageID, const libqt_string repoName, const libqt_string keyUrl, const libqt_string keyUserid, const libqt_string keyId, const libqt_string keyFingerprint, const libqt_string keyTimestamp, int typeVal) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    QString repoName_QString = QString::fromUtf8(repoName.data, repoName.len);
    QString keyUrl_QString = QString::fromUtf8(keyUrl.data, keyUrl.len);
    QString keyUserid_QString = QString::fromUtf8(keyUserid.data, keyUserid.len);
    QString keyId_QString = QString::fromUtf8(keyId.data, keyId.len);
    QString keyFingerprint_QString = QString::fromUtf8(keyFingerprint.data, keyFingerprint.len);
    QString keyTimestamp_QString = QString::fromUtf8(keyTimestamp.data, keyTimestamp.len);
    self->repoSignatureRequired(packageID_QString, repoName_QString, keyUrl_QString, keyUserid_QString, keyId_QString, keyFingerprint_QString, keyTimestamp_QString, static_cast<PackageKit::Transaction::SigType>(typeVal));
}

void PackageKit__Transaction_Connect_RepoSignatureRequired(PackageKit__Transaction* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Transaction*, const char*, const char*, const char*, const char*, const char*, const char*, const char*, int) = reinterpret_cast<void (*)(PackageKit__Transaction*, const char*, const char*, const char*, const char*, const char*, const char*, const char*, int)>(slot);
    PackageKit::Transaction::connect(self, &PackageKit::Transaction::repoSignatureRequired, [self, slotFunc](const QString& packageID, const QString& repoName, const QString& keyUrl, const QString& keyUserid, const QString& keyId, const QString& keyFingerprint, const QString& keyTimestamp, PackageKit::Transaction::SigType typeVal) {
        const QString packageID_ret = packageID;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray packageID_b = packageID_ret.toUtf8();
        const char* packageID_str = static_cast<const char*>(malloc(packageID_b.length() + 1));
        memcpy((void*)packageID_str, packageID_b.data(), packageID_b.length());
        ((char*)packageID_str)[packageID_b.length()] = '\0';
        const char* sigval1 = packageID_str;
        const QString repoName_ret = repoName;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray repoName_b = repoName_ret.toUtf8();
        const char* repoName_str = static_cast<const char*>(malloc(repoName_b.length() + 1));
        memcpy((void*)repoName_str, repoName_b.data(), repoName_b.length());
        ((char*)repoName_str)[repoName_b.length()] = '\0';
        const char* sigval2 = repoName_str;
        const QString keyUrl_ret = keyUrl;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray keyUrl_b = keyUrl_ret.toUtf8();
        const char* keyUrl_str = static_cast<const char*>(malloc(keyUrl_b.length() + 1));
        memcpy((void*)keyUrl_str, keyUrl_b.data(), keyUrl_b.length());
        ((char*)keyUrl_str)[keyUrl_b.length()] = '\0';
        const char* sigval3 = keyUrl_str;
        const QString keyUserid_ret = keyUserid;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray keyUserid_b = keyUserid_ret.toUtf8();
        const char* keyUserid_str = static_cast<const char*>(malloc(keyUserid_b.length() + 1));
        memcpy((void*)keyUserid_str, keyUserid_b.data(), keyUserid_b.length());
        ((char*)keyUserid_str)[keyUserid_b.length()] = '\0';
        const char* sigval4 = keyUserid_str;
        const QString keyId_ret = keyId;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray keyId_b = keyId_ret.toUtf8();
        const char* keyId_str = static_cast<const char*>(malloc(keyId_b.length() + 1));
        memcpy((void*)keyId_str, keyId_b.data(), keyId_b.length());
        ((char*)keyId_str)[keyId_b.length()] = '\0';
        const char* sigval5 = keyId_str;
        const QString keyFingerprint_ret = keyFingerprint;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray keyFingerprint_b = keyFingerprint_ret.toUtf8();
        const char* keyFingerprint_str = static_cast<const char*>(malloc(keyFingerprint_b.length() + 1));
        memcpy((void*)keyFingerprint_str, keyFingerprint_b.data(), keyFingerprint_b.length());
        ((char*)keyFingerprint_str)[keyFingerprint_b.length()] = '\0';
        const char* sigval6 = keyFingerprint_str;
        const QString keyTimestamp_ret = keyTimestamp;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray keyTimestamp_b = keyTimestamp_ret.toUtf8();
        const char* keyTimestamp_str = static_cast<const char*>(malloc(keyTimestamp_b.length() + 1));
        memcpy((void*)keyTimestamp_str, keyTimestamp_b.data(), keyTimestamp_b.length());
        ((char*)keyTimestamp_str)[keyTimestamp_b.length()] = '\0';
        const char* sigval7 = keyTimestamp_str;
        int sigval8 = static_cast<int>(typeVal);
        slotFunc(self, sigval1, sigval2, sigval3, sigval4, sigval5, sigval6, sigval7, sigval8);
        libqt_free(packageID_str);
        libqt_free(repoName_str);
        libqt_free(keyUrl_str);
        libqt_free(keyUserid_str);
        libqt_free(keyId_str);
        libqt_free(keyFingerprint_str);
        libqt_free(keyTimestamp_str);
    });
}

void PackageKit__Transaction_RequireRestart(PackageKit__Transaction* self, int typeVal, const libqt_string packageID) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    self->requireRestart(static_cast<PackageKit::Transaction::Restart>(typeVal), packageID_QString);
}

void PackageKit__Transaction_Connect_RequireRestart(PackageKit__Transaction* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Transaction*, int, const char*) = reinterpret_cast<void (*)(PackageKit__Transaction*, int, const char*)>(slot);
    PackageKit::Transaction::connect(self, &PackageKit::Transaction::requireRestart, [self, slotFunc](PackageKit::Transaction::Restart typeVal, const QString& packageID) {
        int sigval1 = static_cast<int>(typeVal);
        const QString packageID_ret = packageID;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray packageID_b = packageID_ret.toUtf8();
        const char* packageID_str = static_cast<const char*>(malloc(packageID_b.length() + 1));
        memcpy((void*)packageID_str, packageID_b.data(), packageID_b.length());
        ((char*)packageID_str)[packageID_b.length()] = '\0';
        const char* sigval2 = packageID_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(packageID_str);
    });
}

void PackageKit__Transaction_Transaction(PackageKit__Transaction* self, PackageKit__Transaction* transaction) {
    self->transaction(transaction);
}

void PackageKit__Transaction_Connect_Transaction(PackageKit__Transaction* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Transaction*, PackageKit__Transaction*) = reinterpret_cast<void (*)(PackageKit__Transaction*, PackageKit__Transaction*)>(slot);
    PackageKit::Transaction::connect(self, &PackageKit::Transaction::transaction, [self, slotFunc](PackageKit::Transaction* transaction) {
        PackageKit__Transaction* sigval1 = transaction;
        slotFunc(self, sigval1);
    });
}

void PackageKit__Transaction_ConnectNotify(PackageKit__Transaction* self, const QMetaMethod* signal) {
    auto* vpackagekit__transaction = dynamic_cast<VirtualPackageKitTransaction*>(self);
    if (vpackagekit__transaction && vpackagekit__transaction->isVirtualPackageKitTransaction) {
        vpackagekit__transaction->connectNotify(*signal);
    }
}

void PackageKit__Transaction_DisconnectNotify(PackageKit__Transaction* self, const QMetaMethod* signal) {
    auto* vpackagekit__transaction = dynamic_cast<VirtualPackageKitTransaction*>(self);
    if (vpackagekit__transaction && vpackagekit__transaction->isVirtualPackageKitTransaction) {
        vpackagekit__transaction->disconnectNotify(*signal);
    }
}

libqt_string PackageKit__Transaction_Tr2(const char* s, const char* c) {
    QString _ret = PackageKit::Transaction::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string PackageKit__Transaction_Tr3(const char* s, const char* c, int n) {
    QString _ret = PackageKit::Transaction::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
int PackageKit__Transaction_QBaseMetacall(PackageKit__Transaction* self, int param1, int param2, void** param3) {
    auto* vpackagekittransaction = dynamic_cast<VirtualPackageKitTransaction*>(self);
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        vpackagekittransaction->setPackageKit__Transaction_Metacall_IsBase(true);
        return vpackagekittransaction->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->PackageKit::Transaction::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void PackageKit__Transaction_OnMetacall(PackageKit__Transaction* self, intptr_t slot) {
    auto* vpackagekittransaction = dynamic_cast<VirtualPackageKitTransaction*>(self);
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        vpackagekittransaction->setPackageKit__Transaction_Metacall_Callback(reinterpret_cast<VirtualPackageKitTransaction::PackageKit__Transaction_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void PackageKit__Transaction_QBaseConnectNotify(PackageKit__Transaction* self, const QMetaMethod* signal) {
    auto* vpackagekittransaction = dynamic_cast<VirtualPackageKitTransaction*>(self);
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        vpackagekittransaction->setPackageKit__Transaction_ConnectNotify_IsBase(true);
        vpackagekittransaction->connectNotify(*signal);
    } else {
        ((VirtualPackageKitTransaction*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void PackageKit__Transaction_OnConnectNotify(PackageKit__Transaction* self, intptr_t slot) {
    auto* vpackagekittransaction = dynamic_cast<VirtualPackageKitTransaction*>(self);
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        vpackagekittransaction->setPackageKit__Transaction_ConnectNotify_Callback(reinterpret_cast<VirtualPackageKitTransaction::PackageKit__Transaction_ConnectNotify_Callback>(slot));
    }
}

// Base class handler implementation
void PackageKit__Transaction_QBaseDisconnectNotify(PackageKit__Transaction* self, const QMetaMethod* signal) {
    auto* vpackagekittransaction = dynamic_cast<VirtualPackageKitTransaction*>(self);
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        vpackagekittransaction->setPackageKit__Transaction_DisconnectNotify_IsBase(true);
        vpackagekittransaction->disconnectNotify(*signal);
    } else {
        ((VirtualPackageKitTransaction*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void PackageKit__Transaction_OnDisconnectNotify(PackageKit__Transaction* self, intptr_t slot) {
    auto* vpackagekittransaction = dynamic_cast<VirtualPackageKitTransaction*>(self);
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        vpackagekittransaction->setPackageKit__Transaction_DisconnectNotify_Callback(reinterpret_cast<VirtualPackageKitTransaction::PackageKit__Transaction_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
bool PackageKit__Transaction_Event(PackageKit__Transaction* self, QEvent* event) {
    auto* vpackagekittransaction = dynamic_cast<VirtualPackageKitTransaction*>(self);
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        return vpackagekittransaction->event(event);
    } else {
        return self->PackageKit::Transaction::event(event);
    }
}

// Base class handler implementation
bool PackageKit__Transaction_QBaseEvent(PackageKit__Transaction* self, QEvent* event) {
    auto* vpackagekittransaction = dynamic_cast<VirtualPackageKitTransaction*>(self);
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        vpackagekittransaction->setPackageKit__Transaction_Event_IsBase(true);
        return vpackagekittransaction->event(event);
    } else {
        return self->PackageKit::Transaction::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void PackageKit__Transaction_OnEvent(PackageKit__Transaction* self, intptr_t slot) {
    auto* vpackagekittransaction = dynamic_cast<VirtualPackageKitTransaction*>(self);
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        vpackagekittransaction->setPackageKit__Transaction_Event_Callback(reinterpret_cast<VirtualPackageKitTransaction::PackageKit__Transaction_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool PackageKit__Transaction_EventFilter(PackageKit__Transaction* self, QObject* watched, QEvent* event) {
    auto* vpackagekittransaction = dynamic_cast<VirtualPackageKitTransaction*>(self);
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        return vpackagekittransaction->eventFilter(watched, event);
    } else {
        return self->PackageKit::Transaction::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool PackageKit__Transaction_QBaseEventFilter(PackageKit__Transaction* self, QObject* watched, QEvent* event) {
    auto* vpackagekittransaction = dynamic_cast<VirtualPackageKitTransaction*>(self);
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        vpackagekittransaction->setPackageKit__Transaction_EventFilter_IsBase(true);
        return vpackagekittransaction->eventFilter(watched, event);
    } else {
        return self->PackageKit::Transaction::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void PackageKit__Transaction_OnEventFilter(PackageKit__Transaction* self, intptr_t slot) {
    auto* vpackagekittransaction = dynamic_cast<VirtualPackageKitTransaction*>(self);
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        vpackagekittransaction->setPackageKit__Transaction_EventFilter_Callback(reinterpret_cast<VirtualPackageKitTransaction::PackageKit__Transaction_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void PackageKit__Transaction_TimerEvent(PackageKit__Transaction* self, QTimerEvent* event) {
    auto* vpackagekittransaction = dynamic_cast<VirtualPackageKitTransaction*>(self);
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        vpackagekittransaction->timerEvent(event);
    } else {
        ((VirtualPackageKitTransaction*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void PackageKit__Transaction_QBaseTimerEvent(PackageKit__Transaction* self, QTimerEvent* event) {
    auto* vpackagekittransaction = dynamic_cast<VirtualPackageKitTransaction*>(self);
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        vpackagekittransaction->setPackageKit__Transaction_TimerEvent_IsBase(true);
        vpackagekittransaction->timerEvent(event);
    } else {
        ((VirtualPackageKitTransaction*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void PackageKit__Transaction_OnTimerEvent(PackageKit__Transaction* self, intptr_t slot) {
    auto* vpackagekittransaction = dynamic_cast<VirtualPackageKitTransaction*>(self);
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        vpackagekittransaction->setPackageKit__Transaction_TimerEvent_Callback(reinterpret_cast<VirtualPackageKitTransaction::PackageKit__Transaction_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void PackageKit__Transaction_ChildEvent(PackageKit__Transaction* self, QChildEvent* event) {
    auto* vpackagekittransaction = dynamic_cast<VirtualPackageKitTransaction*>(self);
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        vpackagekittransaction->childEvent(event);
    } else {
        ((VirtualPackageKitTransaction*)self)->childEvent(event);
    }
}

// Base class handler implementation
void PackageKit__Transaction_QBaseChildEvent(PackageKit__Transaction* self, QChildEvent* event) {
    auto* vpackagekittransaction = dynamic_cast<VirtualPackageKitTransaction*>(self);
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        vpackagekittransaction->setPackageKit__Transaction_ChildEvent_IsBase(true);
        vpackagekittransaction->childEvent(event);
    } else {
        ((VirtualPackageKitTransaction*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void PackageKit__Transaction_OnChildEvent(PackageKit__Transaction* self, intptr_t slot) {
    auto* vpackagekittransaction = dynamic_cast<VirtualPackageKitTransaction*>(self);
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        vpackagekittransaction->setPackageKit__Transaction_ChildEvent_Callback(reinterpret_cast<VirtualPackageKitTransaction::PackageKit__Transaction_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void PackageKit__Transaction_CustomEvent(PackageKit__Transaction* self, QEvent* event) {
    auto* vpackagekittransaction = dynamic_cast<VirtualPackageKitTransaction*>(self);
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        vpackagekittransaction->customEvent(event);
    } else {
        ((VirtualPackageKitTransaction*)self)->customEvent(event);
    }
}

// Base class handler implementation
void PackageKit__Transaction_QBaseCustomEvent(PackageKit__Transaction* self, QEvent* event) {
    auto* vpackagekittransaction = dynamic_cast<VirtualPackageKitTransaction*>(self);
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        vpackagekittransaction->setPackageKit__Transaction_CustomEvent_IsBase(true);
        vpackagekittransaction->customEvent(event);
    } else {
        ((VirtualPackageKitTransaction*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void PackageKit__Transaction_OnCustomEvent(PackageKit__Transaction* self, intptr_t slot) {
    auto* vpackagekittransaction = dynamic_cast<VirtualPackageKitTransaction*>(self);
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        vpackagekittransaction->setPackageKit__Transaction_CustomEvent_Callback(reinterpret_cast<VirtualPackageKitTransaction::PackageKit__Transaction_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int PackageKit__Transaction_ParseError(PackageKit__Transaction* self, const libqt_string errorName) {
    auto* vpackagekittransaction = dynamic_cast<VirtualPackageKitTransaction*>(self);
    QString errorName_QString = QString::fromUtf8(errorName.data, errorName.len);
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        return static_cast<int>(vpackagekittransaction->parseError(errorName_QString));
    } else {
        return static_cast<int>(((VirtualPackageKitTransaction*)self)->parseError(errorName_QString));
    }
}

// Base class handler implementation
int PackageKit__Transaction_QBaseParseError(PackageKit__Transaction* self, const libqt_string errorName) {
    auto* vpackagekittransaction = dynamic_cast<VirtualPackageKitTransaction*>(self);
    QString errorName_QString = QString::fromUtf8(errorName.data, errorName.len);
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        vpackagekittransaction->setPackageKit__Transaction_ParseError_IsBase(true);
        return static_cast<int>(vpackagekittransaction->parseError(errorName_QString));
    } else {
        return static_cast<int>(((VirtualPackageKitTransaction*)self)->parseError(errorName_QString));
    }
}

// Auxiliary method to allow providing re-implementation
void PackageKit__Transaction_OnParseError(PackageKit__Transaction* self, intptr_t slot) {
    auto* vpackagekittransaction = dynamic_cast<VirtualPackageKitTransaction*>(self);
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        vpackagekittransaction->setPackageKit__Transaction_ParseError_Callback(reinterpret_cast<VirtualPackageKitTransaction::PackageKit__Transaction_ParseError_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* PackageKit__Transaction_Sender(const PackageKit__Transaction* self) {
    auto* vpackagekittransaction = const_cast<VirtualPackageKitTransaction*>(dynamic_cast<const VirtualPackageKitTransaction*>(self));
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        return vpackagekittransaction->sender();
    } else {
        return ((VirtualPackageKitTransaction*)self)->sender();
    }
}

// Base class handler implementation
QObject* PackageKit__Transaction_QBaseSender(const PackageKit__Transaction* self) {
    auto* vpackagekittransaction = const_cast<VirtualPackageKitTransaction*>(dynamic_cast<const VirtualPackageKitTransaction*>(self));
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        vpackagekittransaction->setPackageKit__Transaction_Sender_IsBase(true);
        return vpackagekittransaction->sender();
    } else {
        return ((VirtualPackageKitTransaction*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void PackageKit__Transaction_OnSender(const PackageKit__Transaction* self, intptr_t slot) {
    auto* vpackagekittransaction = const_cast<VirtualPackageKitTransaction*>(dynamic_cast<const VirtualPackageKitTransaction*>(self));
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        vpackagekittransaction->setPackageKit__Transaction_Sender_Callback(reinterpret_cast<VirtualPackageKitTransaction::PackageKit__Transaction_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int PackageKit__Transaction_SenderSignalIndex(const PackageKit__Transaction* self) {
    auto* vpackagekittransaction = const_cast<VirtualPackageKitTransaction*>(dynamic_cast<const VirtualPackageKitTransaction*>(self));
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        return vpackagekittransaction->senderSignalIndex();
    } else {
        return ((VirtualPackageKitTransaction*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int PackageKit__Transaction_QBaseSenderSignalIndex(const PackageKit__Transaction* self) {
    auto* vpackagekittransaction = const_cast<VirtualPackageKitTransaction*>(dynamic_cast<const VirtualPackageKitTransaction*>(self));
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        vpackagekittransaction->setPackageKit__Transaction_SenderSignalIndex_IsBase(true);
        return vpackagekittransaction->senderSignalIndex();
    } else {
        return ((VirtualPackageKitTransaction*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void PackageKit__Transaction_OnSenderSignalIndex(const PackageKit__Transaction* self, intptr_t slot) {
    auto* vpackagekittransaction = const_cast<VirtualPackageKitTransaction*>(dynamic_cast<const VirtualPackageKitTransaction*>(self));
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        vpackagekittransaction->setPackageKit__Transaction_SenderSignalIndex_Callback(reinterpret_cast<VirtualPackageKitTransaction::PackageKit__Transaction_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int PackageKit__Transaction_Receivers(const PackageKit__Transaction* self, const char* signal) {
    auto* vpackagekittransaction = const_cast<VirtualPackageKitTransaction*>(dynamic_cast<const VirtualPackageKitTransaction*>(self));
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        return vpackagekittransaction->receivers(signal);
    } else {
        return ((VirtualPackageKitTransaction*)self)->receivers(signal);
    }
}

// Base class handler implementation
int PackageKit__Transaction_QBaseReceivers(const PackageKit__Transaction* self, const char* signal) {
    auto* vpackagekittransaction = const_cast<VirtualPackageKitTransaction*>(dynamic_cast<const VirtualPackageKitTransaction*>(self));
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        vpackagekittransaction->setPackageKit__Transaction_Receivers_IsBase(true);
        return vpackagekittransaction->receivers(signal);
    } else {
        return ((VirtualPackageKitTransaction*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void PackageKit__Transaction_OnReceivers(const PackageKit__Transaction* self, intptr_t slot) {
    auto* vpackagekittransaction = const_cast<VirtualPackageKitTransaction*>(dynamic_cast<const VirtualPackageKitTransaction*>(self));
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        vpackagekittransaction->setPackageKit__Transaction_Receivers_Callback(reinterpret_cast<VirtualPackageKitTransaction::PackageKit__Transaction_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool PackageKit__Transaction_IsSignalConnected(const PackageKit__Transaction* self, const QMetaMethod* signal) {
    auto* vpackagekittransaction = const_cast<VirtualPackageKitTransaction*>(dynamic_cast<const VirtualPackageKitTransaction*>(self));
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        return vpackagekittransaction->isSignalConnected(*signal);
    } else {
        return ((VirtualPackageKitTransaction*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool PackageKit__Transaction_QBaseIsSignalConnected(const PackageKit__Transaction* self, const QMetaMethod* signal) {
    auto* vpackagekittransaction = const_cast<VirtualPackageKitTransaction*>(dynamic_cast<const VirtualPackageKitTransaction*>(self));
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        vpackagekittransaction->setPackageKit__Transaction_IsSignalConnected_IsBase(true);
        return vpackagekittransaction->isSignalConnected(*signal);
    } else {
        return ((VirtualPackageKitTransaction*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void PackageKit__Transaction_OnIsSignalConnected(const PackageKit__Transaction* self, intptr_t slot) {
    auto* vpackagekittransaction = const_cast<VirtualPackageKitTransaction*>(dynamic_cast<const VirtualPackageKitTransaction*>(self));
    if (vpackagekittransaction && vpackagekittransaction->isVirtualPackageKitTransaction) {
        vpackagekittransaction->setPackageKit__Transaction_IsSignalConnected_Callback(reinterpret_cast<VirtualPackageKitTransaction::PackageKit__Transaction_IsSignalConnected_Callback>(slot));
    }
}

void PackageKit__Transaction_Delete(PackageKit__Transaction* self) {
    delete self;
}
