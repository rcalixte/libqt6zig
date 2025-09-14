#include <KCompositeJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__DeleteJob
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__Job
#include <KJob>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <deletejob.h>
#include "libdeletejob.h"
#include "libdeletejob.hxx"

QMetaObject* KIO__DeleteJob_MetaObject(const KIO__DeleteJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__DeleteJob_Metacast(KIO__DeleteJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__DeleteJob_Metacall(KIO__DeleteJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__DeleteJob_Tr(const char* s) {
    QString _ret = KIO::DeleteJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QUrl* */ KIO__DeleteJob_Urls(const KIO__DeleteJob* self) {
    QList<QUrl> _ret = self->urls();
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

void KIO__DeleteJob_TotalFiles(KIO__DeleteJob* self, KJob* job, unsigned long files) {
    self->totalFiles(job, static_cast<unsigned long>(files));
}

void KIO__DeleteJob_Connect_TotalFiles(KIO__DeleteJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__DeleteJob*, KJob*, unsigned long) = reinterpret_cast<void (*)(KIO__DeleteJob*, KJob*, unsigned long)>(slot);
    KIO::DeleteJob::connect(self, &KIO::DeleteJob::totalFiles, [self, slotFunc](KJob* job, unsigned long files) {
        KJob* sigval1 = job;
        unsigned long sigval2 = files;
        slotFunc(self, sigval1, sigval2);
    });
}

void KIO__DeleteJob_TotalDirs(KIO__DeleteJob* self, KJob* job, unsigned long dirs) {
    self->totalDirs(job, static_cast<unsigned long>(dirs));
}

void KIO__DeleteJob_Connect_TotalDirs(KIO__DeleteJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__DeleteJob*, KJob*, unsigned long) = reinterpret_cast<void (*)(KIO__DeleteJob*, KJob*, unsigned long)>(slot);
    KIO::DeleteJob::connect(self, &KIO::DeleteJob::totalDirs, [self, slotFunc](KJob* job, unsigned long dirs) {
        KJob* sigval1 = job;
        unsigned long sigval2 = dirs;
        slotFunc(self, sigval1, sigval2);
    });
}

void KIO__DeleteJob_ProcessedFiles(KIO__DeleteJob* self, KIO__Job* job, unsigned long files) {
    self->processedFiles(job, static_cast<unsigned long>(files));
}

void KIO__DeleteJob_Connect_ProcessedFiles(KIO__DeleteJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__DeleteJob*, KIO__Job*, unsigned long) = reinterpret_cast<void (*)(KIO__DeleteJob*, KIO__Job*, unsigned long)>(slot);
    KIO::DeleteJob::connect(self, &KIO::DeleteJob::processedFiles, [self, slotFunc](KIO::Job* job, unsigned long files) {
        KIO__Job* sigval1 = job;
        unsigned long sigval2 = files;
        slotFunc(self, sigval1, sigval2);
    });
}

void KIO__DeleteJob_ProcessedDirs(KIO__DeleteJob* self, KIO__Job* job, unsigned long dirs) {
    self->processedDirs(job, static_cast<unsigned long>(dirs));
}

void KIO__DeleteJob_Connect_ProcessedDirs(KIO__DeleteJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__DeleteJob*, KIO__Job*, unsigned long) = reinterpret_cast<void (*)(KIO__DeleteJob*, KIO__Job*, unsigned long)>(slot);
    KIO::DeleteJob::connect(self, &KIO::DeleteJob::processedDirs, [self, slotFunc](KIO::Job* job, unsigned long dirs) {
        KIO__Job* sigval1 = job;
        unsigned long sigval2 = dirs;
        slotFunc(self, sigval1, sigval2);
    });
}

void KIO__DeleteJob_Deleting(KIO__DeleteJob* self, KIO__Job* job, const QUrl* file) {
    self->deleting(job, *file);
}

void KIO__DeleteJob_Connect_Deleting(KIO__DeleteJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__DeleteJob*, KIO__Job*, QUrl*) = reinterpret_cast<void (*)(KIO__DeleteJob*, KIO__Job*, QUrl*)>(slot);
    KIO::DeleteJob::connect(self, &KIO::DeleteJob::deleting, [self, slotFunc](KIO::Job* job, const QUrl& file) {
        KIO__Job* sigval1 = job;
        const QUrl& file_ret = file;
        // Cast returned reference into pointer
        QUrl* sigval2 = const_cast<QUrl*>(&file_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string KIO__DeleteJob_Tr2(const char* s, const char* c) {
    QString _ret = KIO::DeleteJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__DeleteJob_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIO::DeleteJob::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__DeleteJob_Delete(KIO__DeleteJob* self) {
    delete self;
}

KIO__DeleteJob* KIO_Del(const QUrl* param1, int param2) {
    return KIO::del(*param1, static_cast<KIO::JobFlags>(param2));
}

KIO__DeleteJob* KIO_Del2(const libqt_list /* of QUrl* */ param1, int param2) {
    QList<QUrl> param1_QList;
    param1_QList.reserve(param1.len);
    QUrl** param1_arr = static_cast<QUrl**>(param1.data);
    for (size_t i = 0; i < param1.len; ++i) {
        param1_QList.push_back(*(param1_arr[i]));
    }
    return KIO::del(param1_QList, static_cast<KIO::JobFlags>(param2));
}
