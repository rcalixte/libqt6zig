#include <KCompositeJob>
#include <KIO/Job>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__JobUiDelegateExtension
#include <KIO/MetaData>
#include <KJob>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <job_base.h>
#include "libjob_base.h"
#include "libjob_base.hxx"

QMetaObject* KIO__Job_MetaObject(const KIO__Job* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__Job_Metacast(KIO__Job* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__Job_Metacall(KIO__Job* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__Job_Tr(const char* s) {
    QString _ret = KIO::Job::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__Job_Start(KIO__Job* self) {
    self->start();
}

KIO__JobUiDelegateExtension* KIO__Job_UiDelegateExtension(const KIO__Job* self) {
    return self->uiDelegateExtension();
}

void KIO__Job_SetUiDelegateExtension(KIO__Job* self, KIO__JobUiDelegateExtension* extension) {
    self->setUiDelegateExtension(extension);
}

libqt_string KIO__Job_ErrorString(const KIO__Job* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KIO__Job_DetailedErrorStrings(const KIO__Job* self) {
    QList<QString> _ret = self->detailedErrorStrings();
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

void KIO__Job_SetParentJob(KIO__Job* self, KIO__Job* parentJob) {
    self->setParentJob(parentJob);
}

KIO__Job* KIO__Job_ParentJob(const KIO__Job* self) {
    return self->parentJob();
}

void KIO__Job_SetMetaData(KIO__Job* self, const KIO__MetaData* metaData) {
    self->setMetaData(*metaData);
}

void KIO__Job_AddMetaData(KIO__Job* self, const libqt_string key, const libqt_string value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->addMetaData(key_QString, value_QString);
}

void KIO__Job_AddMetaData2(KIO__Job* self, const libqt_map /* of libqt_string to libqt_string */ values) {
    QMap<QString, QString> values_QMap;
    libqt_string* values_karr = static_cast<libqt_string*>(values.keys);
    libqt_string* values_varr = static_cast<libqt_string*>(values.values);
    for (size_t i = 0; i < values.len; ++i) {
        QString values_karr_i_QString = QString::fromUtf8(values_karr[i].data, values_karr[i].len);
        QString values_varr_i_QString = QString::fromUtf8(values_varr[i].data, values_varr[i].len);
        values_QMap[values_karr_i_QString] = values_varr_i_QString;
    }
    self->addMetaData(values_QMap);
}

void KIO__Job_MergeMetaData(KIO__Job* self, const libqt_map /* of libqt_string to libqt_string */ values) {
    QMap<QString, QString> values_QMap;
    libqt_string* values_karr = static_cast<libqt_string*>(values.keys);
    libqt_string* values_varr = static_cast<libqt_string*>(values.values);
    for (size_t i = 0; i < values.len; ++i) {
        QString values_karr_i_QString = QString::fromUtf8(values_karr[i].data, values_karr[i].len);
        QString values_varr_i_QString = QString::fromUtf8(values_varr[i].data, values_varr[i].len);
        values_QMap[values_karr_i_QString] = values_varr_i_QString;
    }
    self->mergeMetaData(values_QMap);
}

KIO__MetaData* KIO__Job_OutgoingMetaData(const KIO__Job* self) {
    return new KIO::MetaData(self->outgoingMetaData());
}

KIO__MetaData* KIO__Job_MetaData(const KIO__Job* self) {
    return new KIO::MetaData(self->metaData());
}

libqt_string KIO__Job_QueryMetaData(KIO__Job* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString _ret = self->queryMetaData(key_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__Job_Connected(KIO__Job* self, KIO__Job* job) {
    self->connected(job);
}

void KIO__Job_Connect_Connected(KIO__Job* self, intptr_t slot) {
    void (*slotFunc)(KIO__Job*, KIO__Job*) = reinterpret_cast<void (*)(KIO__Job*, KIO__Job*)>(slot);
    KIO::Job::connect(self, &KIO::Job::connected, [self, slotFunc](KIO::Job* job) {
        KIO__Job* sigval1 = job;
        slotFunc(self, sigval1);
    });
}

libqt_string KIO__Job_Tr2(const char* s, const char* c) {
    QString _ret = KIO::Job::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__Job_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIO::Job::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KIO__Job_DetailedErrorStrings1(const KIO__Job* self, const QUrl* reqUrl) {
    QList<QString> _ret = self->detailedErrorStrings(reqUrl);
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

libqt_list /* of libqt_string */ KIO__Job_DetailedErrorStrings2(const KIO__Job* self, const QUrl* reqUrl, int method) {
    QList<QString> _ret = self->detailedErrorStrings(reqUrl, static_cast<int>(method));
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

void KIO__Job_Delete(KIO__Job* self) {
    delete self;
}
