#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Content
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__DownloadDescription
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__HomePageEntry
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Icon
#include <QDateTime>
#include <QList>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <content.h>
#include "libcontent.h"
#include "libcontent.hxx"

Attica__Content* Attica__Content_new() {
    return new Attica::Content();
}

Attica__Content* Attica__Content_new2(const Attica__Content* other) {
    return new Attica::Content(*other);
}

void Attica__Content_OperatorAssign(Attica__Content* self, const Attica__Content* other) {
    self->operator=(*other);
}

void Attica__Content_SetId(Attica__Content* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->setId(id_QString);
}

libqt_string Attica__Content_Id(const Attica__Content* self) {
    QString _ret = self->id();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Content_SetName(Attica__Content* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

libqt_string Attica__Content_Name(const Attica__Content* self) {
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

void Attica__Content_SetRating(Attica__Content* self, int rating) {
    self->setRating(static_cast<int>(rating));
}

int Attica__Content_Rating(const Attica__Content* self) {
    return self->rating();
}

void Attica__Content_SetDownloads(Attica__Content* self, int downloads) {
    self->setDownloads(static_cast<int>(downloads));
}

int Attica__Content_Downloads(const Attica__Content* self) {
    return self->downloads();
}

void Attica__Content_SetNumberOfComments(Attica__Content* self, int numComments) {
    self->setNumberOfComments(static_cast<int>(numComments));
}

int Attica__Content_NumberOfComments(const Attica__Content* self) {
    return self->numberOfComments();
}

void Attica__Content_SetCreated(Attica__Content* self, const QDateTime* created) {
    self->setCreated(*created);
}

QDateTime* Attica__Content_Created(const Attica__Content* self) {
    return new QDateTime(self->created());
}

void Attica__Content_SetUpdated(Attica__Content* self, const QDateTime* updated) {
    self->setUpdated(*updated);
}

QDateTime* Attica__Content_Updated(const Attica__Content* self) {
    return new QDateTime(self->updated());
}

libqt_string Attica__Content_Summary(const Attica__Content* self) {
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

libqt_string Attica__Content_Description(const Attica__Content* self) {
    QString _ret = self->description();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* Attica__Content_Detailpage(const Attica__Content* self) {
    return new QUrl(self->detailpage());
}

libqt_string Attica__Content_Changelog(const Attica__Content* self) {
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

libqt_string Attica__Content_Version(const Attica__Content* self) {
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

libqt_string Attica__Content_Depend(const Attica__Content* self) {
    QString _ret = self->depend();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

Attica__DownloadDescription* Attica__Content_DownloadUrlDescription(const Attica__Content* self, int number) {
    return new Attica::DownloadDescription(self->downloadUrlDescription(static_cast<int>(number)));
}

libqt_list /* of Attica__DownloadDescription* */ Attica__Content_DownloadUrlDescriptions(const Attica__Content* self) {
    QList<Attica::DownloadDescription> _ret = self->downloadUrlDescriptions();
    // Convert QList<> from C++ memory to manually-managed C memory
    Attica__DownloadDescription** _arr = static_cast<Attica__DownloadDescription**>(malloc(sizeof(Attica__DownloadDescription*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Attica::DownloadDescription(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

Attica__HomePageEntry* Attica__Content_HomePageEntry(const Attica__Content* self, int number) {
    return new Attica::HomePageEntry(self->homePageEntry(static_cast<int>(number)));
}

libqt_list /* of Attica__HomePageEntry* */ Attica__Content_HomePageEntries(Attica__Content* self) {
    QList<Attica::HomePageEntry> _ret = self->homePageEntries();
    // Convert QList<> from C++ memory to manually-managed C memory
    Attica__HomePageEntry** _arr = static_cast<Attica__HomePageEntry**>(malloc(sizeof(Attica__HomePageEntry*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Attica::HomePageEntry(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string Attica__Content_PreviewPicture(const Attica__Content* self) {
    QString _ret = self->previewPicture();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Attica__Content_SmallPreviewPicture(const Attica__Content* self) {
    QString _ret = self->smallPreviewPicture();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Attica__Content_License(const Attica__Content* self) {
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

libqt_string Attica__Content_LicenseName(const Attica__Content* self) {
    QString _ret = self->licenseName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Attica__Content_Author(const Attica__Content* self) {
    QString _ret = self->author();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of Attica__Icon* */ Attica__Content_Icons(Attica__Content* self) {
    QList<Attica::Icon> _ret = self->icons();
    // Convert QList<> from C++ memory to manually-managed C memory
    Attica__Icon** _arr = static_cast<Attica__Icon**>(malloc(sizeof(Attica__Icon*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Attica::Icon(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of Attica__Icon* */ Attica__Content_Icons2(const Attica__Content* self) {
    QList<Attica::Icon> _ret = self->icons();
    // Convert QList<> from C++ memory to manually-managed C memory
    Attica__Icon** _arr = static_cast<Attica__Icon**>(malloc(sizeof(Attica__Icon*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Attica::Icon(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void Attica__Content_SetIcons(Attica__Content* self, libqt_list /* of Attica__Icon* */ icons) {
    QList<Attica::Icon> icons_QList;
    icons_QList.reserve(icons.len);
    Attica__Icon** icons_arr = static_cast<Attica__Icon**>(icons.data);
    for (size_t i = 0; i < icons.len; ++i) {
        icons_QList.push_back(*(icons_arr[i]));
    }
    self->setIcons(icons_QList);
}

libqt_list /* of QUrl* */ Attica__Content_Videos(Attica__Content* self) {
    QList<QUrl> _ret = self->videos();
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void Attica__Content_SetVideos(Attica__Content* self, libqt_list /* of QUrl* */ videos) {
    QList<QUrl> videos_QList;
    videos_QList.reserve(videos.len);
    QUrl** videos_arr = static_cast<QUrl**>(videos.data);
    for (size_t i = 0; i < videos.len; ++i) {
        videos_QList.push_back(*(videos_arr[i]));
    }
    self->setVideos(videos_QList);
}

libqt_list /* of libqt_string */ Attica__Content_Tags(const Attica__Content* self) {
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

void Attica__Content_SetTags(Attica__Content* self, const libqt_list /* of libqt_string */ tags) {
    QList<QString> tags_QList;
    tags_QList.reserve(tags.len);
    libqt_string* tags_arr = static_cast<libqt_string*>(tags.data);
    for (size_t i = 0; i < tags.len; ++i) {
        QString tags_arr_i_QString = QString::fromUtf8(tags_arr[i].data, tags_arr[i].len);
        tags_QList.push_back(tags_arr_i_QString);
    }
    self->setTags(tags_QList);
}

void Attica__Content_AddAttribute(Attica__Content* self, const libqt_string key, const libqt_string value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->addAttribute(key_QString, value_QString);
}

libqt_string Attica__Content_Attribute(const Attica__Content* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString _ret = self->attribute(key_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_map /* of libqt_string to libqt_string */ Attica__Content_Attributes(const Attica__Content* self) {
    QMap<QString, QString> _ret = self->attributes();
    // Convert QMap<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        QString _mapkey_ret = _itr->first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _mapkey_b = _mapkey_ret.toUtf8();
        libqt_string _mapkey_str;
        _mapkey_str.len = _mapkey_b.length();
        _mapkey_str.data = static_cast<const char*>(malloc(_mapkey_str.len + 1));
        memcpy((void*)_mapkey_str.data, _mapkey_b.data(), _mapkey_str.len);
        ((char*)_mapkey_str.data)[_mapkey_str.len] = '\0';
        _karr[_ctr] = _mapkey_str;
        QString _mapval_ret = _itr->second;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _mapval_b = _mapval_ret.toUtf8();
        libqt_string _mapval_str;
        _mapval_str.len = _mapval_b.length();
        _mapval_str.data = static_cast<const char*>(malloc(_mapval_str.len + 1));
        memcpy((void*)_mapval_str.data, _mapval_b.data(), _mapval_str.len);
        ((char*)_mapval_str.data)[_mapval_str.len] = '\0';
        _varr[_ctr] = _mapval_str;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

bool Attica__Content_IsValid(const Attica__Content* self) {
    return self->isValid();
}

libqt_string Attica__Content_PreviewPicture1(const Attica__Content* self, const libqt_string number) {
    QString number_QString = QString::fromUtf8(number.data, number.len);
    QString _ret = self->previewPicture(number_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Attica__Content_SmallPreviewPicture1(const Attica__Content* self, const libqt_string number) {
    QString number_QString = QString::fromUtf8(number.data, number.len);
    QString _ret = self->smallPreviewPicture(number_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Content_Delete(Attica__Content* self) {
    delete self;
}
