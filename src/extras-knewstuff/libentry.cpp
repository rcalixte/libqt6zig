#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Author
#include <KNSCore/Entry>
#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Entry__DownloadLinkInformation
#include <QDate>
#include <QImage>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QXmlStreamReader>
#include <entry.h>
#include "libentry.h"
#include "libentry.hxx"

libqt_string KNSCore_ReplaceBBCode(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString _ret = KNSCore::replaceBBCode(param1_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

size_t KNSCore_QHash(const KNSCore__Entry* param1, size_t param2) {
    return KNSCore::qHash(*param1, static_cast<size_t>(param2));
}

KNSCore__Entry* KNSCore__Entry_new() {
    return new KNSCore::Entry();
}

KNSCore__Entry* KNSCore__Entry_new2(const KNSCore__Entry* other) {
    return new KNSCore::Entry(*other);
}

void KNSCore__Entry_OperatorAssign(KNSCore__Entry* self, const KNSCore__Entry* other) {
    self->operator=(*other);
}

bool KNSCore__Entry_OperatorEqual(const KNSCore__Entry* self, const KNSCore__Entry* other) {
    return (*self == *other);
}

bool KNSCore__Entry_OperatorLesser(const KNSCore__Entry* self, const KNSCore__Entry* other) {
    return (*self < *other);
}

bool KNSCore__Entry_IsValid(const KNSCore__Entry* self) {
    return self->isValid();
}

void KNSCore__Entry_SetName(KNSCore__Entry* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

libqt_string KNSCore__Entry_Name(const KNSCore__Entry* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__Entry_SetUniqueId(KNSCore__Entry* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->setUniqueId(id_QString);
}

libqt_string KNSCore__Entry_UniqueId(const KNSCore__Entry* self) {
    QString _ret = self->uniqueId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__Entry_SetCategory(KNSCore__Entry* self, const libqt_string category) {
    QString category_QString = QString::fromUtf8(category.data, category.len);
    self->setCategory(category_QString);
}

libqt_string KNSCore__Entry_Category(const KNSCore__Entry* self) {
    QString _ret = self->category();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__Entry_SetHomepage(KNSCore__Entry* self, const QUrl* page) {
    self->setHomepage(*page);
}

QUrl* KNSCore__Entry_Homepage(const KNSCore__Entry* self) {
    return new QUrl(self->homepage());
}

void KNSCore__Entry_SetAuthor(KNSCore__Entry* self, const KNSCore__Author* author) {
    self->setAuthor(*author);
}

KNSCore__Author* KNSCore__Entry_Author(const KNSCore__Entry* self) {
    return new KNSCore::Author(self->author());
}

void KNSCore__Entry_SetLicense(KNSCore__Entry* self, const libqt_string license) {
    QString license_QString = QString::fromUtf8(license.data, license.len);
    self->setLicense(license_QString);
}

libqt_string KNSCore__Entry_License(const KNSCore__Entry* self) {
    QString _ret = self->license();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__Entry_SetSummary(KNSCore__Entry* self, const libqt_string summary) {
    QString summary_QString = QString::fromUtf8(summary.data, summary.len);
    self->setSummary(summary_QString);
}

libqt_string KNSCore__Entry_ShortSummary(const KNSCore__Entry* self) {
    QString _ret = self->shortSummary();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__Entry_SetShortSummary(KNSCore__Entry* self, const libqt_string summary) {
    QString summary_QString = QString::fromUtf8(summary.data, summary.len);
    self->setShortSummary(summary_QString);
}

libqt_string KNSCore__Entry_Summary(const KNSCore__Entry* self) {
    QString _ret = self->summary();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__Entry_SetChangelog(KNSCore__Entry* self, const libqt_string changelog) {
    QString changelog_QString = QString::fromUtf8(changelog.data, changelog.len);
    self->setChangelog(changelog_QString);
}

libqt_string KNSCore__Entry_Changelog(const KNSCore__Entry* self) {
    QString _ret = self->changelog();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__Entry_SetVersion(KNSCore__Entry* self, const libqt_string version) {
    QString version_QString = QString::fromUtf8(version.data, version.len);
    self->setVersion(version_QString);
}

libqt_string KNSCore__Entry_Version(const KNSCore__Entry* self) {
    QString _ret = self->version();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__Entry_SetReleaseDate(KNSCore__Entry* self, const QDate* releasedate) {
    self->setReleaseDate(*releasedate);
}

QDate* KNSCore__Entry_ReleaseDate(const KNSCore__Entry* self) {
    return new QDate(self->releaseDate());
}

void KNSCore__Entry_SetUpdateVersion(KNSCore__Entry* self, const libqt_string version) {
    QString version_QString = QString::fromUtf8(version.data, version.len);
    self->setUpdateVersion(version_QString);
}

libqt_string KNSCore__Entry_UpdateVersion(const KNSCore__Entry* self) {
    QString _ret = self->updateVersion();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__Entry_SetUpdateReleaseDate(KNSCore__Entry* self, const QDate* releasedate) {
    self->setUpdateReleaseDate(*releasedate);
}

QDate* KNSCore__Entry_UpdateReleaseDate(const KNSCore__Entry* self) {
    return new QDate(self->updateReleaseDate());
}

void KNSCore__Entry_SetPayload(KNSCore__Entry* self, const libqt_string url) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    self->setPayload(url_QString);
}

libqt_string KNSCore__Entry_Payload(const KNSCore__Entry* self) {
    QString _ret = self->payload();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__Entry_SetPreviewUrl(KNSCore__Entry* self, const libqt_string url) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    self->setPreviewUrl(url_QString);
}

libqt_string KNSCore__Entry_PreviewUrl(const KNSCore__Entry* self) {
    QString _ret = self->previewUrl();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QImage* KNSCore__Entry_PreviewImage(const KNSCore__Entry* self) {
    return new QImage(self->previewImage());
}

void KNSCore__Entry_SetPreviewImage(KNSCore__Entry* self, const QImage* image) {
    self->setPreviewImage(*image);
}

void KNSCore__Entry_SetInstalledFiles(KNSCore__Entry* self, const libqt_list /* of libqt_string */ files) {
    QList<QString> files_QList;
    files_QList.reserve(files.len);
    libqt_string* files_arr = static_cast<libqt_string*>(files.data);
    for (size_t i = 0; i < files.len; ++i) {
        QString files_arr_i_QString = QString::fromUtf8(files_arr[i].data, files_arr[i].len);
        files_QList.push_back(files_arr_i_QString);
    }
    self->setInstalledFiles(files_QList);
}

libqt_list /* of libqt_string */ KNSCore__Entry_InstalledFiles(const KNSCore__Entry* self) {
    QList<QString> _ret = self->installedFiles();
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

libqt_list /* of libqt_string */ KNSCore__Entry_UninstalledFiles(const KNSCore__Entry* self) {
    QList<QString> _ret = self->uninstalledFiles();
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

void KNSCore__Entry_SetRating(KNSCore__Entry* self, int rating) {
    self->setRating(static_cast<int>(rating));
}

int KNSCore__Entry_Rating(const KNSCore__Entry* self) {
    return self->rating();
}

void KNSCore__Entry_SetNumberOfComments(KNSCore__Entry* self, int comments) {
    self->setNumberOfComments(static_cast<int>(comments));
}

int KNSCore__Entry_NumberOfComments(const KNSCore__Entry* self) {
    return self->numberOfComments();
}

void KNSCore__Entry_SetDownloadCount(KNSCore__Entry* self, int downloads) {
    self->setDownloadCount(static_cast<int>(downloads));
}

int KNSCore__Entry_DownloadCount(const KNSCore__Entry* self) {
    return self->downloadCount();
}

int KNSCore__Entry_NumberFans(const KNSCore__Entry* self) {
    return self->numberFans();
}

void KNSCore__Entry_SetNumberFans(KNSCore__Entry* self, int fans) {
    self->setNumberFans(static_cast<int>(fans));
}

int KNSCore__Entry_NumberKnowledgebaseEntries(const KNSCore__Entry* self) {
    return self->numberKnowledgebaseEntries();
}

void KNSCore__Entry_SetNumberKnowledgebaseEntries(KNSCore__Entry* self, int num) {
    self->setNumberKnowledgebaseEntries(static_cast<int>(num));
}

libqt_string KNSCore__Entry_KnowledgebaseLink(const KNSCore__Entry* self) {
    QString _ret = self->knowledgebaseLink();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__Entry_SetKnowledgebaseLink(KNSCore__Entry* self, const libqt_string link) {
    QString link_QString = QString::fromUtf8(link.data, link.len);
    self->setKnowledgebaseLink(link_QString);
}

int KNSCore__Entry_DownloadLinkCount(const KNSCore__Entry* self) {
    return self->downloadLinkCount();
}

libqt_list /* of KNSCore__Entry__DownloadLinkInformation* */ KNSCore__Entry_DownloadLinkInformationList(const KNSCore__Entry* self) {
    QList<KNSCore::Entry::DownloadLinkInformation> _ret = self->downloadLinkInformationList();
    // Convert QList<> from C++ memory to manually-managed C memory
    KNSCore__Entry__DownloadLinkInformation** _arr = static_cast<KNSCore__Entry__DownloadLinkInformation**>(malloc(sizeof(KNSCore__Entry__DownloadLinkInformation*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KNSCore::Entry::DownloadLinkInformation(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KNSCore__Entry_AppendDownloadLinkInformation(KNSCore__Entry* self, const KNSCore__Entry__DownloadLinkInformation* info) {
    self->appendDownloadLinkInformation(*info);
}

void KNSCore__Entry_ClearDownloadLinkInformation(KNSCore__Entry* self) {
    self->clearDownloadLinkInformation();
}

libqt_string KNSCore__Entry_DonationLink(const KNSCore__Entry* self) {
    QString _ret = self->donationLink();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__Entry_SetDonationLink(KNSCore__Entry* self, const libqt_string link) {
    QString link_QString = QString::fromUtf8(link.data, link.len);
    self->setDonationLink(link_QString);
}

libqt_list /* of libqt_string */ KNSCore__Entry_Tags(const KNSCore__Entry* self) {
    QList<QString> _ret = self->tags();
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

void KNSCore__Entry_SetTags(KNSCore__Entry* self, const libqt_list /* of libqt_string */ tags) {
    QList<QString> tags_QList;
    tags_QList.reserve(tags.len);
    libqt_string* tags_arr = static_cast<libqt_string*>(tags.data);
    for (size_t i = 0; i < tags.len; ++i) {
        QString tags_arr_i_QString = QString::fromUtf8(tags_arr[i].data, tags_arr[i].len);
        tags_QList.push_back(tags_arr_i_QString);
    }
    self->setTags(tags_QList);
}

libqt_string KNSCore__Entry_ProviderId(const KNSCore__Entry* self) {
    QString _ret = self->providerId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__Entry_SetProviderId(KNSCore__Entry* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->setProviderId(id_QString);
}

void KNSCore__Entry_SetSource(KNSCore__Entry* self, int source) {
    self->setSource(static_cast<KNSCore::Entry::Source>(source));
}

int KNSCore__Entry_Source(const KNSCore__Entry* self) {
    return static_cast<int>(self->source());
}

void KNSCore__Entry_SetEntryType(KNSCore__Entry* self, int typeVal) {
    self->setEntryType(static_cast<KNSCore::Entry::EntryType>(typeVal));
}

int KNSCore__Entry_EntryType(const KNSCore__Entry* self) {
    return static_cast<int>(self->entryType());
}

bool KNSCore__Entry_SetEntryXML(KNSCore__Entry* self, QXmlStreamReader* reader) {
    return self->setEntryXML(*reader);
}

void KNSCore__Entry_SetStatus(KNSCore__Entry* self, int status) {
    self->setStatus(static_cast<KNSCore::Entry::Status>(status));
}

int KNSCore__Entry_Status(const KNSCore__Entry* self) {
    return static_cast<int>(self->status());
}

void KNSCore__Entry_SetEntryDeleted(KNSCore__Entry* self) {
    self->setEntryDeleted();
}

void KNSCore__Entry_SetPreviewUrl2(KNSCore__Entry* self, const libqt_string url, int typeVal) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    self->setPreviewUrl(url_QString, static_cast<KNSCore::Entry::PreviewType>(typeVal));
}

libqt_string KNSCore__Entry_PreviewUrl1(const KNSCore__Entry* self, int typeVal) {
    QString _ret = self->previewUrl(static_cast<KNSCore::Entry::PreviewType>(typeVal));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QImage* KNSCore__Entry_PreviewImage1(const KNSCore__Entry* self, int typeVal) {
    return new QImage(self->previewImage(static_cast<KNSCore::Entry::PreviewType>(typeVal)));
}

void KNSCore__Entry_SetPreviewImage2(KNSCore__Entry* self, const QImage* image, int typeVal) {
    self->setPreviewImage(*image, static_cast<KNSCore::Entry::PreviewType>(typeVal));
}

void KNSCore__Entry_Delete(KNSCore__Entry* self) {
    delete self;
}

KNSCore__Entry__DownloadLinkInformation* KNSCore__Entry__DownloadLinkInformation_new(const KNSCore__Entry__DownloadLinkInformation* param1) {
    return new KNSCore::Entry::DownloadLinkInformation(*param1);
}

libqt_string KNSCore__Entry__DownloadLinkInformation_Name(const KNSCore__Entry__DownloadLinkInformation* self) {
    QString name_ret = self->name;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray name_b = name_ret.toUtf8();
    libqt_string name_str;
    name_str.len = name_b.length();
    name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
    memcpy((void*)name_str.data, name_b.data(), name_str.len);
    ((char*)name_str.data)[name_str.len] = '\0';
    return name_str;
}

void KNSCore__Entry__DownloadLinkInformation_SetName(KNSCore__Entry__DownloadLinkInformation* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->name = name_QString;
}

libqt_string KNSCore__Entry__DownloadLinkInformation_PriceAmount(const KNSCore__Entry__DownloadLinkInformation* self) {
    QString priceAmount_ret = self->priceAmount;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray priceAmount_b = priceAmount_ret.toUtf8();
    libqt_string priceAmount_str;
    priceAmount_str.len = priceAmount_b.length();
    priceAmount_str.data = static_cast<const char*>(malloc(priceAmount_str.len + 1));
    memcpy((void*)priceAmount_str.data, priceAmount_b.data(), priceAmount_str.len);
    ((char*)priceAmount_str.data)[priceAmount_str.len] = '\0';
    return priceAmount_str;
}

void KNSCore__Entry__DownloadLinkInformation_SetPriceAmount(KNSCore__Entry__DownloadLinkInformation* self, libqt_string priceAmount) {
    QString priceAmount_QString = QString::fromUtf8(priceAmount.data, priceAmount.len);
    self->priceAmount = priceAmount_QString;
}

libqt_string KNSCore__Entry__DownloadLinkInformation_DistributionType(const KNSCore__Entry__DownloadLinkInformation* self) {
    QString distributionType_ret = self->distributionType;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray distributionType_b = distributionType_ret.toUtf8();
    libqt_string distributionType_str;
    distributionType_str.len = distributionType_b.length();
    distributionType_str.data = static_cast<const char*>(malloc(distributionType_str.len + 1));
    memcpy((void*)distributionType_str.data, distributionType_b.data(), distributionType_str.len);
    ((char*)distributionType_str.data)[distributionType_str.len] = '\0';
    return distributionType_str;
}

void KNSCore__Entry__DownloadLinkInformation_SetDistributionType(KNSCore__Entry__DownloadLinkInformation* self, libqt_string distributionType) {
    QString distributionType_QString = QString::fromUtf8(distributionType.data, distributionType.len);
    self->distributionType = distributionType_QString;
}

libqt_string KNSCore__Entry__DownloadLinkInformation_DescriptionLink(const KNSCore__Entry__DownloadLinkInformation* self) {
    QString descriptionLink_ret = self->descriptionLink;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray descriptionLink_b = descriptionLink_ret.toUtf8();
    libqt_string descriptionLink_str;
    descriptionLink_str.len = descriptionLink_b.length();
    descriptionLink_str.data = static_cast<const char*>(malloc(descriptionLink_str.len + 1));
    memcpy((void*)descriptionLink_str.data, descriptionLink_b.data(), descriptionLink_str.len);
    ((char*)descriptionLink_str.data)[descriptionLink_str.len] = '\0';
    return descriptionLink_str;
}

void KNSCore__Entry__DownloadLinkInformation_SetDescriptionLink(KNSCore__Entry__DownloadLinkInformation* self, libqt_string descriptionLink) {
    QString descriptionLink_QString = QString::fromUtf8(descriptionLink.data, descriptionLink.len);
    self->descriptionLink = descriptionLink_QString;
}

int KNSCore__Entry__DownloadLinkInformation_Id(const KNSCore__Entry__DownloadLinkInformation* self) {
    return self->id;
}

void KNSCore__Entry__DownloadLinkInformation_SetId(KNSCore__Entry__DownloadLinkInformation* self, int id) {
    self->id = static_cast<int>(id);
}

bool KNSCore__Entry__DownloadLinkInformation_IsDownloadtypeLink(const KNSCore__Entry__DownloadLinkInformation* self) {
    return self->isDownloadtypeLink;
}

void KNSCore__Entry__DownloadLinkInformation_SetIsDownloadtypeLink(KNSCore__Entry__DownloadLinkInformation* self, bool isDownloadtypeLink) {
    self->isDownloadtypeLink = isDownloadtypeLink;
}

unsigned long long KNSCore__Entry__DownloadLinkInformation_Size(const KNSCore__Entry__DownloadLinkInformation* self) {
    return static_cast<unsigned long long>(self->size);
}

void KNSCore__Entry__DownloadLinkInformation_SetSize(KNSCore__Entry__DownloadLinkInformation* self, unsigned long long size) {
    self->size = static_cast<quint64>(size);
}

libqt_list /* of libqt_string */ KNSCore__Entry__DownloadLinkInformation_Tags(const KNSCore__Entry__DownloadLinkInformation* self) {
    QList<QString> tags_ret = self->tags;
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* tags_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (tags_ret.size() + 1)));
    for (qsizetype i = 0; i < tags_ret.size(); ++i) {
        QString tags_lv_ret = tags_ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray tags_lv_b = tags_lv_ret.toUtf8();
        libqt_string tags_lv_str;
        tags_lv_str.len = tags_lv_b.length();
        tags_lv_str.data = static_cast<const char*>(malloc(tags_lv_str.len + 1));
        memcpy((void*)tags_lv_str.data, tags_lv_b.data(), tags_lv_str.len);
        ((char*)tags_lv_str.data)[tags_lv_str.len] = '\0';
        tags_arr[i] = tags_lv_str;
    }
    libqt_list tags_out;
    tags_out.len = tags_ret.size();
    tags_out.data = static_cast<void*>(tags_arr);
    return tags_out;
}

void KNSCore__Entry__DownloadLinkInformation_SetTags(KNSCore__Entry__DownloadLinkInformation* self, libqt_list /* of libqt_string */ tags) {
    QList<QString> tags_QList;
    tags_QList.reserve(tags.len);
    libqt_string* tags_arr = static_cast<libqt_string*>(tags.data);
    for (size_t i = 0; i < tags.len; ++i) {
        QString tags_arr_i_QString = QString::fromUtf8(tags_arr[i].data, tags_arr[i].len);
        tags_QList.push_back(tags_arr_i_QString);
    }
    self->tags = tags_QList;
}

void KNSCore__Entry__DownloadLinkInformation_OperatorAssign(KNSCore__Entry__DownloadLinkInformation* self, const KNSCore__Entry__DownloadLinkInformation* param1) {
    self->operator=(*param1);
}

void KNSCore__Entry__DownloadLinkInformation_Delete(KNSCore__Entry__DownloadLinkInformation* self) {
    delete self;
}
