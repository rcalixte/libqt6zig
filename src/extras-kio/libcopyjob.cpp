#include <KCompositeJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__CopyJob
#include <KIO/Job>
#include <KJob>
#include <QDateTime>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <copyjob.h>
#include "libcopyjob.h"
#include "libcopyjob.hxx"

QMetaObject* KIO__CopyJob_MetaObject(const KIO__CopyJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__CopyJob_Metacast(KIO__CopyJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__CopyJob_Metacall(KIO__CopyJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__CopyJob_Tr(const char* s) {
    QString _ret = KIO::CopyJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KIO__CopyJob_OperationMode(const KIO__CopyJob* self) {
    return static_cast<int>(self->operationMode());
}

libqt_list /* of QUrl* */ KIO__CopyJob_SrcUrls(const KIO__CopyJob* self) {
    QList<QUrl> _ret = self->srcUrls();
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

QUrl* KIO__CopyJob_DestUrl(const KIO__CopyJob* self) {
    return new QUrl(self->destUrl());
}

void KIO__CopyJob_SetDefaultPermissions(KIO__CopyJob* self, bool b) {
    self->setDefaultPermissions(b);
}

void KIO__CopyJob_SetAutoSkip(KIO__CopyJob* self, bool autoSkip) {
    self->setAutoSkip(autoSkip);
}

void KIO__CopyJob_SetAutoRename(KIO__CopyJob* self, bool autoRename) {
    self->setAutoRename(autoRename);
}

void KIO__CopyJob_SetWriteIntoExistingDirectories(KIO__CopyJob* self, bool overwriteAllDirs) {
    self->setWriteIntoExistingDirectories(overwriteAllDirs);
}

bool KIO__CopyJob_DoSuspend(KIO__CopyJob* self) {
    return self->doSuspend();
}

bool KIO__CopyJob_DoResume(KIO__CopyJob* self) {
    return self->doResume();
}

void KIO__CopyJob_ProcessedFiles(KIO__CopyJob* self, KIO__Job* job, unsigned long files) {
    self->processedFiles(job, static_cast<unsigned long>(files));
}

void KIO__CopyJob_Connect_ProcessedFiles(KIO__CopyJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__CopyJob*, KIO__Job*, unsigned long) = reinterpret_cast<void (*)(KIO__CopyJob*, KIO__Job*, unsigned long)>(slot);
    KIO::CopyJob::connect(self, &KIO::CopyJob::processedFiles, [self, slotFunc](KIO::Job* job, unsigned long files) {
        KIO__Job* sigval1 = job;
        unsigned long sigval2 = files;
        slotFunc(self, sigval1, sigval2);
    });
}

void KIO__CopyJob_ProcessedDirs(KIO__CopyJob* self, KIO__Job* job, unsigned long dirs) {
    self->processedDirs(job, static_cast<unsigned long>(dirs));
}

void KIO__CopyJob_Connect_ProcessedDirs(KIO__CopyJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__CopyJob*, KIO__Job*, unsigned long) = reinterpret_cast<void (*)(KIO__CopyJob*, KIO__Job*, unsigned long)>(slot);
    KIO::CopyJob::connect(self, &KIO::CopyJob::processedDirs, [self, slotFunc](KIO::Job* job, unsigned long dirs) {
        KIO__Job* sigval1 = job;
        unsigned long sigval2 = dirs;
        slotFunc(self, sigval1, sigval2);
    });
}

void KIO__CopyJob_Copying(KIO__CopyJob* self, KIO__Job* job, const QUrl* src, const QUrl* dest) {
    self->copying(job, *src, *dest);
}

void KIO__CopyJob_Connect_Copying(KIO__CopyJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__CopyJob*, KIO__Job*, QUrl*, QUrl*) = reinterpret_cast<void (*)(KIO__CopyJob*, KIO__Job*, QUrl*, QUrl*)>(slot);
    KIO::CopyJob::connect(self, &KIO::CopyJob::copying, [self, slotFunc](KIO::Job* job, const QUrl& src, const QUrl& dest) {
        KIO__Job* sigval1 = job;
        const QUrl& src_ret = src;
        // Cast returned reference into pointer
        QUrl* sigval2 = const_cast<QUrl*>(&src_ret);
        const QUrl& dest_ret = dest;
        // Cast returned reference into pointer
        QUrl* sigval3 = const_cast<QUrl*>(&dest_ret);
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void KIO__CopyJob_Linking(KIO__CopyJob* self, KIO__Job* job, const libqt_string target, const QUrl* to) {
    QString target_QString = QString::fromUtf8(target.data, target.len);
    self->linking(job, target_QString, *to);
}

void KIO__CopyJob_Connect_Linking(KIO__CopyJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__CopyJob*, KIO__Job*, const char*, QUrl*) = reinterpret_cast<void (*)(KIO__CopyJob*, KIO__Job*, const char*, QUrl*)>(slot);
    KIO::CopyJob::connect(self, &KIO::CopyJob::linking, [self, slotFunc](KIO::Job* job, const QString& target, const QUrl& to) {
        KIO__Job* sigval1 = job;
        const QString target_ret = target;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray target_b = target_ret.toUtf8();
        const char* target_str = static_cast<const char*>(malloc(target_b.length() + 1));
        memcpy((void*)target_str, target_b.data(), target_b.length());
        ((char*)target_str)[target_b.length()] = '\0';
        const char* sigval2 = target_str;
        const QUrl& to_ret = to;
        // Cast returned reference into pointer
        QUrl* sigval3 = const_cast<QUrl*>(&to_ret);
        slotFunc(self, sigval1, sigval2, sigval3);
        libqt_free(target_str);
    });
}

void KIO__CopyJob_Moving(KIO__CopyJob* self, KIO__Job* job, const QUrl* from, const QUrl* to) {
    self->moving(job, *from, *to);
}

void KIO__CopyJob_Connect_Moving(KIO__CopyJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__CopyJob*, KIO__Job*, QUrl*, QUrl*) = reinterpret_cast<void (*)(KIO__CopyJob*, KIO__Job*, QUrl*, QUrl*)>(slot);
    KIO::CopyJob::connect(self, &KIO::CopyJob::moving, [self, slotFunc](KIO::Job* job, const QUrl& from, const QUrl& to) {
        KIO__Job* sigval1 = job;
        const QUrl& from_ret = from;
        // Cast returned reference into pointer
        QUrl* sigval2 = const_cast<QUrl*>(&from_ret);
        const QUrl& to_ret = to;
        // Cast returned reference into pointer
        QUrl* sigval3 = const_cast<QUrl*>(&to_ret);
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void KIO__CopyJob_CreatingDir(KIO__CopyJob* self, KIO__Job* job, const QUrl* dir) {
    self->creatingDir(job, *dir);
}

void KIO__CopyJob_Connect_CreatingDir(KIO__CopyJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__CopyJob*, KIO__Job*, QUrl*) = reinterpret_cast<void (*)(KIO__CopyJob*, KIO__Job*, QUrl*)>(slot);
    KIO::CopyJob::connect(self, &KIO::CopyJob::creatingDir, [self, slotFunc](KIO::Job* job, const QUrl& dir) {
        KIO__Job* sigval1 = job;
        const QUrl& dir_ret = dir;
        // Cast returned reference into pointer
        QUrl* sigval2 = const_cast<QUrl*>(&dir_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

void KIO__CopyJob_Renamed(KIO__CopyJob* self, KIO__Job* job, const QUrl* from, const QUrl* to) {
    self->renamed(job, *from, *to);
}

void KIO__CopyJob_Connect_Renamed(KIO__CopyJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__CopyJob*, KIO__Job*, QUrl*, QUrl*) = reinterpret_cast<void (*)(KIO__CopyJob*, KIO__Job*, QUrl*, QUrl*)>(slot);
    KIO::CopyJob::connect(self, &KIO::CopyJob::renamed, [self, slotFunc](KIO::Job* job, const QUrl& from, const QUrl& to) {
        KIO__Job* sigval1 = job;
        const QUrl& from_ret = from;
        // Cast returned reference into pointer
        QUrl* sigval2 = const_cast<QUrl*>(&from_ret);
        const QUrl& to_ret = to;
        // Cast returned reference into pointer
        QUrl* sigval3 = const_cast<QUrl*>(&to_ret);
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void KIO__CopyJob_CopyingDone(KIO__CopyJob* self, KIO__Job* job, const QUrl* from, const QUrl* to, const QDateTime* mtime, bool directory, bool renamed) {
    self->copyingDone(job, *from, *to, *mtime, directory, renamed);
}

void KIO__CopyJob_Connect_CopyingDone(KIO__CopyJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__CopyJob*, KIO__Job*, QUrl*, QUrl*, QDateTime*, bool, bool) = reinterpret_cast<void (*)(KIO__CopyJob*, KIO__Job*, QUrl*, QUrl*, QDateTime*, bool, bool)>(slot);
    KIO::CopyJob::connect(self, &KIO::CopyJob::copyingDone, [self, slotFunc](KIO::Job* job, const QUrl& from, const QUrl& to, const QDateTime& mtime, bool directory, bool renamed) {
        KIO__Job* sigval1 = job;
        const QUrl& from_ret = from;
        // Cast returned reference into pointer
        QUrl* sigval2 = const_cast<QUrl*>(&from_ret);
        const QUrl& to_ret = to;
        // Cast returned reference into pointer
        QUrl* sigval3 = const_cast<QUrl*>(&to_ret);
        const QDateTime& mtime_ret = mtime;
        // Cast returned reference into pointer
        QDateTime* sigval4 = const_cast<QDateTime*>(&mtime_ret);
        bool sigval5 = directory;
        bool sigval6 = renamed;
        slotFunc(self, sigval1, sigval2, sigval3, sigval4, sigval5, sigval6);
    });
}

void KIO__CopyJob_CopyingLinkDone(KIO__CopyJob* self, KIO__Job* job, const QUrl* from, const libqt_string target, const QUrl* to) {
    QString target_QString = QString::fromUtf8(target.data, target.len);
    self->copyingLinkDone(job, *from, target_QString, *to);
}

void KIO__CopyJob_Connect_CopyingLinkDone(KIO__CopyJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__CopyJob*, KIO__Job*, QUrl*, const char*, QUrl*) = reinterpret_cast<void (*)(KIO__CopyJob*, KIO__Job*, QUrl*, const char*, QUrl*)>(slot);
    KIO::CopyJob::connect(self, &KIO::CopyJob::copyingLinkDone, [self, slotFunc](KIO::Job* job, const QUrl& from, const QString& target, const QUrl& to) {
        KIO__Job* sigval1 = job;
        const QUrl& from_ret = from;
        // Cast returned reference into pointer
        QUrl* sigval2 = const_cast<QUrl*>(&from_ret);
        const QString target_ret = target;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray target_b = target_ret.toUtf8();
        const char* target_str = static_cast<const char*>(malloc(target_b.length() + 1));
        memcpy((void*)target_str, target_b.data(), target_b.length());
        ((char*)target_str)[target_b.length()] = '\0';
        const char* sigval3 = target_str;
        const QUrl& to_ret = to;
        // Cast returned reference into pointer
        QUrl* sigval4 = const_cast<QUrl*>(&to_ret);
        slotFunc(self, sigval1, sigval2, sigval3, sigval4);
        libqt_free(target_str);
    });
}

libqt_string KIO__CopyJob_Tr2(const char* s, const char* c) {
    QString _ret = KIO::CopyJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__CopyJob_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIO::CopyJob::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__CopyJob_Delete(KIO__CopyJob* self) {
    delete self;
}

KIO__CopyJob* KIO_Copy(const QUrl* param1, const QUrl* param2, int param3) {
    return KIO::copy(*param1, *param2, static_cast<KIO::JobFlags>(param3));
}

KIO__CopyJob* KIO_CopyAs(const QUrl* param1, const QUrl* param2, int param3) {
    return KIO::copyAs(*param1, *param2, static_cast<KIO::JobFlags>(param3));
}

KIO__CopyJob* KIO_Copy2(const libqt_list /* of QUrl* */ param1, const QUrl* param2, int param3) {
    QList<QUrl> param1_QList;
    param1_QList.reserve(param1.len);
    QUrl** param1_arr = static_cast<QUrl**>(param1.data);
    for (size_t i = 0; i < param1.len; ++i) {
        param1_QList.push_back(*(param1_arr[i]));
    }
    return KIO::copy(param1_QList, *param2, static_cast<KIO::JobFlags>(param3));
}

KIO__CopyJob* KIO_Move(const QUrl* param1, const QUrl* param2, int param3) {
    return KIO::move(*param1, *param2, static_cast<KIO::JobFlags>(param3));
}

KIO__CopyJob* KIO_MoveAs(const QUrl* param1, const QUrl* param2, int param3) {
    return KIO::moveAs(*param1, *param2, static_cast<KIO::JobFlags>(param3));
}

KIO__CopyJob* KIO_Move2(const libqt_list /* of QUrl* */ param1, const QUrl* param2, int param3) {
    QList<QUrl> param1_QList;
    param1_QList.reserve(param1.len);
    QUrl** param1_arr = static_cast<QUrl**>(param1.data);
    for (size_t i = 0; i < param1.len; ++i) {
        param1_QList.push_back(*(param1_arr[i]));
    }
    return KIO::move(param1_QList, *param2, static_cast<KIO::JobFlags>(param3));
}

KIO__CopyJob* KIO_Link(const QUrl* param1, const QUrl* param2, int param3) {
    return KIO::link(*param1, *param2, static_cast<KIO::JobFlags>(param3));
}

KIO__CopyJob* KIO_Link2(const libqt_list /* of QUrl* */ param1, const QUrl* param2, int param3) {
    QList<QUrl> param1_QList;
    param1_QList.reserve(param1.len);
    QUrl** param1_arr = static_cast<QUrl**>(param1.data);
    for (size_t i = 0; i < param1.len; ++i) {
        param1_QList.push_back(*(param1_arr[i]));
    }
    return KIO::link(param1_QList, *param2, static_cast<KIO::JobFlags>(param3));
}

KIO__CopyJob* KIO_LinkAs(const QUrl* param1, const QUrl* param2, int param3) {
    return KIO::linkAs(*param1, *param2, static_cast<KIO::JobFlags>(param3));
}

KIO__CopyJob* KIO_Trash(const QUrl* param1, int param2) {
    return KIO::trash(*param1, static_cast<KIO::JobFlags>(param2));
}

KIO__CopyJob* KIO_Trash2(const libqt_list /* of QUrl* */ param1, int param2) {
    QList<QUrl> param1_QList;
    param1_QList.reserve(param1.len);
    QUrl** param1_arr = static_cast<QUrl**>(param1.data);
    for (size_t i = 0; i < param1.len; ++i) {
        param1_QList.push_back(*(param1_arr[i]));
    }
    return KIO::trash(param1_QList, static_cast<KIO::JobFlags>(param2));
}
