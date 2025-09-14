#include <KFileFilter>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kfilefilter.h>
#include "libkfilefilter.h"
#include "libkfilefilter.hxx"

KFileFilter* KFileFilter_new() {
    return new KFileFilter();
}

KFileFilter* KFileFilter_new2(const libqt_string label, const libqt_list /* of libqt_string */ filePatterns, const libqt_list /* of libqt_string */ mimePatterns) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QList<QString> filePatterns_QList;
    filePatterns_QList.reserve(filePatterns.len);
    libqt_string* filePatterns_arr = static_cast<libqt_string*>(filePatterns.data);
    for (size_t i = 0; i < filePatterns.len; ++i) {
        QString filePatterns_arr_i_QString = QString::fromUtf8(filePatterns_arr[i].data, filePatterns_arr[i].len);
        filePatterns_QList.push_back(filePatterns_arr_i_QString);
    }
    QList<QString> mimePatterns_QList;
    mimePatterns_QList.reserve(mimePatterns.len);
    libqt_string* mimePatterns_arr = static_cast<libqt_string*>(mimePatterns.data);
    for (size_t i = 0; i < mimePatterns.len; ++i) {
        QString mimePatterns_arr_i_QString = QString::fromUtf8(mimePatterns_arr[i].data, mimePatterns_arr[i].len);
        mimePatterns_QList.push_back(mimePatterns_arr_i_QString);
    }
    return new KFileFilter(label_QString, filePatterns_QList, mimePatterns_QList);
}

KFileFilter* KFileFilter_new3(const KFileFilter* other) {
    return new KFileFilter(*other);
}

void KFileFilter_OperatorAssign(KFileFilter* self, const KFileFilter* other) {
    self->operator=(*other);
}

bool KFileFilter_OperatorEqual(const KFileFilter* self, const KFileFilter* other) {
    return (*self == *other);
}

libqt_string KFileFilter_Label(const KFileFilter* self) {
    QString _ret = self->label();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KFileFilter_FilePatterns(const KFileFilter* self) {
    QList<QString> _ret = self->filePatterns();
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

libqt_list /* of libqt_string */ KFileFilter_MimePatterns(const KFileFilter* self) {
    QList<QString> _ret = self->mimePatterns();
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

libqt_string KFileFilter_ToFilterString(const KFileFilter* self) {
    QString _ret = self->toFilterString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KFileFilter_IsEmpty(const KFileFilter* self) {
    return self->isEmpty();
}

bool KFileFilter_IsValid(const KFileFilter* self) {
    return self->isValid();
}

KFileFilter* KFileFilter_FromMimeType(const libqt_string mimeType) {
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    return new KFileFilter(KFileFilter::fromMimeType(mimeType_QString));
}

libqt_list /* of KFileFilter* */ KFileFilter_FromMimeTypes(const libqt_list /* of libqt_string */ mimeTypes) {
    QList<QString> mimeTypes_QList;
    mimeTypes_QList.reserve(mimeTypes.len);
    libqt_string* mimeTypes_arr = static_cast<libqt_string*>(mimeTypes.data);
    for (size_t i = 0; i < mimeTypes.len; ++i) {
        QString mimeTypes_arr_i_QString = QString::fromUtf8(mimeTypes_arr[i].data, mimeTypes_arr[i].len);
        mimeTypes_QList.push_back(mimeTypes_arr_i_QString);
    }
    QList<KFileFilter> _ret = KFileFilter::fromMimeTypes(mimeTypes_QList);
    // Convert QList<> from C++ memory to manually-managed C memory
    KFileFilter** _arr = static_cast<KFileFilter**>(malloc(sizeof(KFileFilter*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KFileFilter(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KFileFilter_Delete(KFileFilter* self) {
    delete self;
}
