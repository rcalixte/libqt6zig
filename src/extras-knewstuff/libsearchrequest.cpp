#include <KNSCore/SearchRequest>
#include <QList>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <searchrequest.h>
#include "libsearchrequest.h"
#include "libsearchrequest.hxx"

QMetaObject* KNSCore_GetEnumMetaObject(int param1) {
    return (QMetaObject*)KNSCore::qt_getEnumMetaObject(static_cast<KNSCore::SortMode>(param1));
}

const char* KNSCore_GetEnumName(int param1) {
    return (const char*)KNSCore::qt_getEnumName(static_cast<KNSCore::SortMode>(param1));
}

QMetaObject* KNSCore_GetEnumMetaObject2(int param1) {
    return (QMetaObject*)KNSCore::qt_getEnumMetaObject(static_cast<KNSCore::Filter>(param1));
}

const char* KNSCore_GetEnumName2(int param1) {
    return (const char*)KNSCore::qt_getEnumName(static_cast<KNSCore::Filter>(param1));
}

KNSCore__SearchRequest* KNSCore__SearchRequest_new() {
    return new KNSCore::SearchRequest();
}

KNSCore__SearchRequest* KNSCore__SearchRequest_new2(const KNSCore__SearchRequest* param1) {
    return new KNSCore::SearchRequest(*param1);
}

KNSCore__SearchRequest* KNSCore__SearchRequest_new3(int sortMode_) {
    return new KNSCore::SearchRequest(static_cast<KNSCore::SortMode>(sortMode_));
}

KNSCore__SearchRequest* KNSCore__SearchRequest_new4(int sortMode_, int filter_) {
    return new KNSCore::SearchRequest(static_cast<KNSCore::SortMode>(sortMode_), static_cast<KNSCore::Filter>(filter_));
}

KNSCore__SearchRequest* KNSCore__SearchRequest_new5(int sortMode_, int filter_, const libqt_string searchTerm_) {
    QString searchTerm__QString = QString::fromUtf8(searchTerm_.data, searchTerm_.len);
    return new KNSCore::SearchRequest(static_cast<KNSCore::SortMode>(sortMode_), static_cast<KNSCore::Filter>(filter_), searchTerm__QString);
}

KNSCore__SearchRequest* KNSCore__SearchRequest_new6(int sortMode_, int filter_, const libqt_string searchTerm_, const libqt_list /* of libqt_string */ categories_) {
    QString searchTerm__QString = QString::fromUtf8(searchTerm_.data, searchTerm_.len);
    QList<QString> categories__QList;
    categories__QList.reserve(categories_.len);
    libqt_string* categories__arr = static_cast<libqt_string*>(categories_.data);
    for (size_t i = 0; i < categories_.len; ++i) {
        QString categories__arr_i_QString = QString::fromUtf8(categories__arr[i].data, categories__arr[i].len);
        categories__QList.push_back(categories__arr_i_QString);
    }
    return new KNSCore::SearchRequest(static_cast<KNSCore::SortMode>(sortMode_), static_cast<KNSCore::Filter>(filter_), searchTerm__QString, categories__QList);
}

KNSCore__SearchRequest* KNSCore__SearchRequest_new7(int sortMode_, int filter_, const libqt_string searchTerm_, const libqt_list /* of libqt_string */ categories_, int page_) {
    QString searchTerm__QString = QString::fromUtf8(searchTerm_.data, searchTerm_.len);
    QList<QString> categories__QList;
    categories__QList.reserve(categories_.len);
    libqt_string* categories__arr = static_cast<libqt_string*>(categories_.data);
    for (size_t i = 0; i < categories_.len; ++i) {
        QString categories__arr_i_QString = QString::fromUtf8(categories__arr[i].data, categories__arr[i].len);
        categories__QList.push_back(categories__arr_i_QString);
    }
    return new KNSCore::SearchRequest(static_cast<KNSCore::SortMode>(sortMode_), static_cast<KNSCore::Filter>(filter_), searchTerm__QString, categories__QList, static_cast<int>(page_));
}

KNSCore__SearchRequest* KNSCore__SearchRequest_new8(int sortMode_, int filter_, const libqt_string searchTerm_, const libqt_list /* of libqt_string */ categories_, int page_, int pageSize_) {
    QString searchTerm__QString = QString::fromUtf8(searchTerm_.data, searchTerm_.len);
    QList<QString> categories__QList;
    categories__QList.reserve(categories_.len);
    libqt_string* categories__arr = static_cast<libqt_string*>(categories_.data);
    for (size_t i = 0; i < categories_.len; ++i) {
        QString categories__arr_i_QString = QString::fromUtf8(categories__arr[i].data, categories__arr[i].len);
        categories__QList.push_back(categories__arr_i_QString);
    }
    return new KNSCore::SearchRequest(static_cast<KNSCore::SortMode>(sortMode_), static_cast<KNSCore::Filter>(filter_), searchTerm__QString, categories__QList, static_cast<int>(page_), static_cast<int>(pageSize_));
}

int KNSCore__SearchRequest_SortMode(const KNSCore__SearchRequest* self) {
    return static_cast<int>(self->sortMode());
}

int KNSCore__SearchRequest_Filter(const KNSCore__SearchRequest* self) {
    return static_cast<int>(self->filter());
}

libqt_string KNSCore__SearchRequest_SearchTerm(const KNSCore__SearchRequest* self) {
    QString _ret = self->searchTerm();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KNSCore__SearchRequest_Categories(const KNSCore__SearchRequest* self) {
    QList<QString> _ret = self->categories();
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

int KNSCore__SearchRequest_Page(const KNSCore__SearchRequest* self) {
    return self->page();
}

int KNSCore__SearchRequest_PageSize(const KNSCore__SearchRequest* self) {
    return self->pageSize();
}

KNSCore__SearchRequest* KNSCore__SearchRequest_NextPage(const KNSCore__SearchRequest* self) {
    return new KNSCore::SearchRequest(self->nextPage());
}

void KNSCore__SearchRequest_Delete(KNSCore__SearchRequest* self) {
    delete self;
}
