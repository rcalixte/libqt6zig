#include <KJob>
#include <KJobUiDelegate>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPair>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <kjob.h>
#include "libkjob.h"
#include "libkjob.hxx"

KJob* KJob_new() {
    return new VirtualKJob();
}

KJob* KJob_new2(QObject* parent) {
    return new VirtualKJob(parent);
}

QMetaObject* KJob_MetaObject(const KJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KJob_Metacast(KJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KJob_Metacall(KJob* self, int param1, int param2, void** param3) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKJob*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KJob_OnMetacall(KJob* self, intptr_t slot) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_Metacall_Callback(reinterpret_cast<VirtualKJob::KJob_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KJob_QBaseMetacall(KJob* self, int param1, int param2, void** param3) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_Metacall_IsBase(true);
        return vkjob->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKJob*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KJob_Tr(const char* s) {
    QString _ret = KJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KJob_SetUiDelegate(KJob* self, KJobUiDelegate* delegate) {
    self->setUiDelegate(delegate);
}

KJobUiDelegate* KJob_UiDelegate(const KJob* self) {
    return self->uiDelegate();
}

int KJob_Capabilities(const KJob* self) {
    return static_cast<int>(self->capabilities());
}

bool KJob_IsSuspended(const KJob* self) {
    return self->isSuspended();
}

bool KJob_Kill(KJob* self) {
    return self->kill();
}

bool KJob_Suspend(KJob* self) {
    return self->suspend();
}

bool KJob_Resume(KJob* self) {
    return self->resume();
}

bool KJob_Exec(KJob* self) {
    return self->exec();
}

int KJob_Error(const KJob* self) {
    return self->error();
}

libqt_string KJob_ErrorText(const KJob* self) {
    QString _ret = self->errorText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

unsigned long long KJob_ProcessedAmount(const KJob* self, int unit) {
    return static_cast<unsigned long long>(self->processedAmount(static_cast<KJob::Unit>(unit)));
}

unsigned long long KJob_TotalAmount(const KJob* self, int unit) {
    return static_cast<unsigned long long>(self->totalAmount(static_cast<KJob::Unit>(unit)));
}

unsigned long KJob_Percent(const KJob* self) {
    return self->percent();
}

void KJob_SetAutoDelete(KJob* self, bool autodelete) {
    self->setAutoDelete(autodelete);
}

bool KJob_IsAutoDelete(const KJob* self) {
    return self->isAutoDelete();
}

void KJob_SetFinishedNotificationHidden(KJob* self) {
    self->setFinishedNotificationHidden();
}

bool KJob_IsFinishedNotificationHidden(const KJob* self) {
    return self->isFinishedNotificationHidden();
}

bool KJob_IsStartedWithExec(const KJob* self) {
    return self->isStartedWithExec();
}

long long KJob_ElapsedTime(const KJob* self) {
    return static_cast<long long>(self->elapsedTime());
}

void KJob_Description(KJob* self, KJob* job, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->description(job, title_QString);
}

void KJob_Connect_Description(KJob* self, intptr_t slot) {
    void (*slotFunc)(KJob*, KJob*, const char*) = reinterpret_cast<void (*)(KJob*, KJob*, const char*)>(slot);
    KJob::connect(self, &KJob::description, [self, slotFunc](KJob* job, const QString& title) {
        KJob* sigval1 = job;
        const QString title_ret = title;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray title_b = title_ret.toUtf8();
        const char* title_str = static_cast<const char*>(malloc(title_b.length() + 1));
        memcpy((void*)title_str, title_b.data(), title_b.length());
        ((char*)title_str)[title_b.length()] = '\0';
        const char* sigval2 = title_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(title_str);
    });
}

void KJob_InfoMessage(KJob* self, KJob* job, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->infoMessage(job, message_QString);
}

void KJob_Connect_InfoMessage(KJob* self, intptr_t slot) {
    void (*slotFunc)(KJob*, KJob*, const char*) = reinterpret_cast<void (*)(KJob*, KJob*, const char*)>(slot);
    KJob::connect(self, &KJob::infoMessage, [self, slotFunc](KJob* job, const QString& message) {
        KJob* sigval1 = job;
        const QString message_ret = message;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray message_b = message_ret.toUtf8();
        const char* message_str = static_cast<const char*>(malloc(message_b.length() + 1));
        memcpy((void*)message_str, message_b.data(), message_b.length());
        ((char*)message_str)[message_b.length()] = '\0';
        const char* sigval2 = message_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(message_str);
    });
}

void KJob_Warning(KJob* self, KJob* job, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->warning(job, message_QString);
}

void KJob_Connect_Warning(KJob* self, intptr_t slot) {
    void (*slotFunc)(KJob*, KJob*, const char*) = reinterpret_cast<void (*)(KJob*, KJob*, const char*)>(slot);
    KJob::connect(self, &KJob::warning, [self, slotFunc](KJob* job, const QString& message) {
        KJob* sigval1 = job;
        const QString message_ret = message;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray message_b = message_ret.toUtf8();
        const char* message_str = static_cast<const char*>(malloc(message_b.length() + 1));
        memcpy((void*)message_str, message_b.data(), message_b.length());
        ((char*)message_str)[message_b.length()] = '\0';
        const char* sigval2 = message_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(message_str);
    });
}

void KJob_TotalSize(KJob* self, KJob* job, unsigned long long size) {
    self->totalSize(job, static_cast<qulonglong>(size));
}

void KJob_Connect_TotalSize(KJob* self, intptr_t slot) {
    void (*slotFunc)(KJob*, KJob*, unsigned long long) = reinterpret_cast<void (*)(KJob*, KJob*, unsigned long long)>(slot);
    KJob::connect(self, &KJob::totalSize, [self, slotFunc](KJob* job, qulonglong size) {
        KJob* sigval1 = job;
        unsigned long long sigval2 = static_cast<unsigned long long>(size);
        slotFunc(self, sigval1, sigval2);
    });
}

void KJob_ProcessedSize(KJob* self, KJob* job, unsigned long long size) {
    self->processedSize(job, static_cast<qulonglong>(size));
}

void KJob_Connect_ProcessedSize(KJob* self, intptr_t slot) {
    void (*slotFunc)(KJob*, KJob*, unsigned long long) = reinterpret_cast<void (*)(KJob*, KJob*, unsigned long long)>(slot);
    KJob::connect(self, &KJob::processedSize, [self, slotFunc](KJob* job, qulonglong size) {
        KJob* sigval1 = job;
        unsigned long long sigval2 = static_cast<unsigned long long>(size);
        slotFunc(self, sigval1, sigval2);
    });
}

void KJob_Speed(KJob* self, KJob* job, unsigned long speed) {
    self->speed(job, static_cast<unsigned long>(speed));
}

void KJob_Connect_Speed(KJob* self, intptr_t slot) {
    void (*slotFunc)(KJob*, KJob*, unsigned long) = reinterpret_cast<void (*)(KJob*, KJob*, unsigned long)>(slot);
    KJob::connect(self, &KJob::speed, [self, slotFunc](KJob* job, unsigned long speed) {
        KJob* sigval1 = job;
        unsigned long sigval2 = speed;
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string KJob_Tr2(const char* s, const char* c) {
    QString _ret = KJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KJob_Tr3(const char* s, const char* c, int n) {
    QString _ret = KJob::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KJob_Kill1(KJob* self, int verbosity) {
    return self->kill(static_cast<KJob::KillVerbosity>(verbosity));
}

void KJob_SetFinishedNotificationHidden1(KJob* self, bool hide) {
    self->setFinishedNotificationHidden(hide);
}

void KJob_Description3(KJob* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QPair<QString, QString> field1_QPair;
    libqt_string* field1_first = static_cast<libqt_string*>(field1.first);
    libqt_string* field1_second = static_cast<libqt_string*>(field1.second);
    QString field1_first_0_QString = QString::fromUtf8(field1_first[0].data, field1_first[0].len);
    QString field1_second_0_QString = QString::fromUtf8(field1_second[0].data, field1_second[0].len);
    field1_QPair.first = field1_first_0_QString;
    field1_QPair.second = field1_second_0_QString;
    self->description(job, title_QString, field1_QPair);
}

void KJob_Connect_Description3(KJob* self, intptr_t slot) {
    void (*slotFunc)(KJob*, KJob*, const char*, libqt_pair /* tuple of libqt_string and libqt_string */) = reinterpret_cast<void (*)(KJob*, KJob*, const char*, libqt_pair /* tuple of libqt_string and libqt_string */)>(slot);
    KJob::connect(self, &KJob::description, [self, slotFunc](KJob* job, const QString& title, const QPair<QString, QString>& field1) {
        KJob* sigval1 = job;
        const QString title_ret = title;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray title_b = title_ret.toUtf8();
        const char* title_str = static_cast<const char*>(malloc(title_b.length() + 1));
        memcpy((void*)title_str, title_b.data(), title_b.length());
        ((char*)title_str)[title_b.length()] = '\0';
        const char* sigval2 = title_str;
        const QPair<QString, QString>& field1_ret = field1;
        // Convert QPair<> from C++ memory to manually-managed C memory
        libqt_string* field1_first = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
        libqt_string* field1_second = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
        QString field1_first_ret = field1_ret.first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray field1_first_b = field1_first_ret.toUtf8();
        libqt_string field1_first_str;
        field1_first_str.len = field1_first_b.length();
        field1_first_str.data = static_cast<const char*>(malloc(field1_first_str.len + 1));
        memcpy((void*)field1_first_str.data, field1_first_b.data(), field1_first_str.len);
        ((char*)field1_first_str.data)[field1_first_str.len] = '\0';
        *field1_first = field1_first_str;
        QString field1_second_ret = field1_ret.second;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray field1_second_b = field1_second_ret.toUtf8();
        libqt_string field1_second_str;
        field1_second_str.len = field1_second_b.length();
        field1_second_str.data = static_cast<const char*>(malloc(field1_second_str.len + 1));
        memcpy((void*)field1_second_str.data, field1_second_b.data(), field1_second_str.len);
        ((char*)field1_second_str.data)[field1_second_str.len] = '\0';
        *field1_second = field1_second_str;
        libqt_pair field1_out;
        field1_out.first = static_cast<void*>(field1_first);
        field1_out.second = static_cast<void*>(field1_second);
        libqt_pair /* tuple of libqt_string and libqt_string */ sigval3 = field1_out;
        slotFunc(self, sigval1, sigval2, sigval3);
        libqt_free(title_str);
    });
}

void KJob_Description4(KJob* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QPair<QString, QString> field1_QPair;
    libqt_string* field1_first = static_cast<libqt_string*>(field1.first);
    libqt_string* field1_second = static_cast<libqt_string*>(field1.second);
    QString field1_first_0_QString = QString::fromUtf8(field1_first[0].data, field1_first[0].len);
    QString field1_second_0_QString = QString::fromUtf8(field1_second[0].data, field1_second[0].len);
    field1_QPair.first = field1_first_0_QString;
    field1_QPair.second = field1_second_0_QString;
    QPair<QString, QString> field2_QPair;
    libqt_string* field2_first = static_cast<libqt_string*>(field2.first);
    libqt_string* field2_second = static_cast<libqt_string*>(field2.second);
    QString field2_first_0_QString = QString::fromUtf8(field2_first[0].data, field2_first[0].len);
    QString field2_second_0_QString = QString::fromUtf8(field2_second[0].data, field2_second[0].len);
    field2_QPair.first = field2_first_0_QString;
    field2_QPair.second = field2_second_0_QString;
    self->description(job, title_QString, field1_QPair, field2_QPair);
}

void KJob_Connect_Description4(KJob* self, intptr_t slot) {
    void (*slotFunc)(KJob*, KJob*, const char*, libqt_pair /* tuple of libqt_string and libqt_string */, libqt_pair /* tuple of libqt_string and libqt_string */) = reinterpret_cast<void (*)(KJob*, KJob*, const char*, libqt_pair /* tuple of libqt_string and libqt_string */, libqt_pair /* tuple of libqt_string and libqt_string */)>(slot);
    KJob::connect(self, &KJob::description, [self, slotFunc](KJob* job, const QString& title, const QPair<QString, QString>& field1, const QPair<QString, QString>& field2) {
        KJob* sigval1 = job;
        const QString title_ret = title;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray title_b = title_ret.toUtf8();
        const char* title_str = static_cast<const char*>(malloc(title_b.length() + 1));
        memcpy((void*)title_str, title_b.data(), title_b.length());
        ((char*)title_str)[title_b.length()] = '\0';
        const char* sigval2 = title_str;
        const QPair<QString, QString>& field1_ret = field1;
        // Convert QPair<> from C++ memory to manually-managed C memory
        libqt_string* field1_first = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
        libqt_string* field1_second = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
        QString field1_first_ret = field1_ret.first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray field1_first_b = field1_first_ret.toUtf8();
        libqt_string field1_first_str;
        field1_first_str.len = field1_first_b.length();
        field1_first_str.data = static_cast<const char*>(malloc(field1_first_str.len + 1));
        memcpy((void*)field1_first_str.data, field1_first_b.data(), field1_first_str.len);
        ((char*)field1_first_str.data)[field1_first_str.len] = '\0';
        *field1_first = field1_first_str;
        QString field1_second_ret = field1_ret.second;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray field1_second_b = field1_second_ret.toUtf8();
        libqt_string field1_second_str;
        field1_second_str.len = field1_second_b.length();
        field1_second_str.data = static_cast<const char*>(malloc(field1_second_str.len + 1));
        memcpy((void*)field1_second_str.data, field1_second_b.data(), field1_second_str.len);
        ((char*)field1_second_str.data)[field1_second_str.len] = '\0';
        *field1_second = field1_second_str;
        libqt_pair field1_out;
        field1_out.first = static_cast<void*>(field1_first);
        field1_out.second = static_cast<void*>(field1_second);
        libqt_pair /* tuple of libqt_string and libqt_string */ sigval3 = field1_out;
        const QPair<QString, QString>& field2_ret = field2;
        // Convert QPair<> from C++ memory to manually-managed C memory
        libqt_string* field2_first = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
        libqt_string* field2_second = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
        QString field2_first_ret = field2_ret.first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray field2_first_b = field2_first_ret.toUtf8();
        libqt_string field2_first_str;
        field2_first_str.len = field2_first_b.length();
        field2_first_str.data = static_cast<const char*>(malloc(field2_first_str.len + 1));
        memcpy((void*)field2_first_str.data, field2_first_b.data(), field2_first_str.len);
        ((char*)field2_first_str.data)[field2_first_str.len] = '\0';
        *field2_first = field2_first_str;
        QString field2_second_ret = field2_ret.second;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray field2_second_b = field2_second_ret.toUtf8();
        libqt_string field2_second_str;
        field2_second_str.len = field2_second_b.length();
        field2_second_str.data = static_cast<const char*>(malloc(field2_second_str.len + 1));
        memcpy((void*)field2_second_str.data, field2_second_b.data(), field2_second_str.len);
        ((char*)field2_second_str.data)[field2_second_str.len] = '\0';
        *field2_second = field2_second_str;
        libqt_pair field2_out;
        field2_out.first = static_cast<void*>(field2_first);
        field2_out.second = static_cast<void*>(field2_second);
        libqt_pair /* tuple of libqt_string and libqt_string */ sigval4 = field2_out;
        slotFunc(self, sigval1, sigval2, sigval3, sigval4);
        libqt_free(title_str);
    });
}

// Derived class handler implementation
void KJob_Start(KJob* self) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->start();
    } else {
        ((VirtualKJob*)self)->start();
    }
}

// Base class handler implementation
void KJob_QBaseStart(KJob* self) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_Start_IsBase(true);
        vkjob->start();
    } else {
        ((VirtualKJob*)self)->start();
    }
}

// Auxiliary method to allow providing re-implementation
void KJob_OnStart(KJob* self, intptr_t slot) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_Start_Callback(reinterpret_cast<VirtualKJob::KJob_Start_Callback>(slot));
    }
}

// Derived class handler implementation
bool KJob_DoKill(KJob* self) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        return vkjob->doKill();
    } else {
        return ((VirtualKJob*)self)->doKill();
    }
}

// Base class handler implementation
bool KJob_QBaseDoKill(KJob* self) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_DoKill_IsBase(true);
        return vkjob->doKill();
    } else {
        return ((VirtualKJob*)self)->doKill();
    }
}

// Auxiliary method to allow providing re-implementation
void KJob_OnDoKill(KJob* self, intptr_t slot) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_DoKill_Callback(reinterpret_cast<VirtualKJob::KJob_DoKill_Callback>(slot));
    }
}

// Derived class handler implementation
bool KJob_DoSuspend(KJob* self) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        return vkjob->doSuspend();
    } else {
        return ((VirtualKJob*)self)->doSuspend();
    }
}

// Base class handler implementation
bool KJob_QBaseDoSuspend(KJob* self) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_DoSuspend_IsBase(true);
        return vkjob->doSuspend();
    } else {
        return ((VirtualKJob*)self)->doSuspend();
    }
}

// Auxiliary method to allow providing re-implementation
void KJob_OnDoSuspend(KJob* self, intptr_t slot) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_DoSuspend_Callback(reinterpret_cast<VirtualKJob::KJob_DoSuspend_Callback>(slot));
    }
}

// Derived class handler implementation
bool KJob_DoResume(KJob* self) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        return vkjob->doResume();
    } else {
        return ((VirtualKJob*)self)->doResume();
    }
}

// Base class handler implementation
bool KJob_QBaseDoResume(KJob* self) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_DoResume_IsBase(true);
        return vkjob->doResume();
    } else {
        return ((VirtualKJob*)self)->doResume();
    }
}

// Auxiliary method to allow providing re-implementation
void KJob_OnDoResume(KJob* self, intptr_t slot) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_DoResume_Callback(reinterpret_cast<VirtualKJob::KJob_DoResume_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KJob_ErrorString(const KJob* self) {
    auto* vkjob = const_cast<VirtualKJob*>(dynamic_cast<const VirtualKJob*>(self));
    if (vkjob && vkjob->isVirtualKJob) {
        QString _ret = vkjob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KJob::errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string KJob_QBaseErrorString(const KJob* self) {
    auto* vkjob = const_cast<VirtualKJob*>(dynamic_cast<const VirtualKJob*>(self));
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_ErrorString_IsBase(true);
        QString _ret = vkjob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KJob::errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KJob_OnErrorString(const KJob* self, intptr_t slot) {
    auto* vkjob = const_cast<VirtualKJob*>(dynamic_cast<const VirtualKJob*>(self));
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_ErrorString_Callback(reinterpret_cast<VirtualKJob::KJob_ErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
bool KJob_Event(KJob* self, QEvent* event) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        return vkjob->event(event);
    } else {
        return self->KJob::event(event);
    }
}

// Base class handler implementation
bool KJob_QBaseEvent(KJob* self, QEvent* event) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_Event_IsBase(true);
        return vkjob->event(event);
    } else {
        return self->KJob::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KJob_OnEvent(KJob* self, intptr_t slot) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_Event_Callback(reinterpret_cast<VirtualKJob::KJob_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KJob_EventFilter(KJob* self, QObject* watched, QEvent* event) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        return vkjob->eventFilter(watched, event);
    } else {
        return self->KJob::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KJob_QBaseEventFilter(KJob* self, QObject* watched, QEvent* event) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_EventFilter_IsBase(true);
        return vkjob->eventFilter(watched, event);
    } else {
        return self->KJob::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KJob_OnEventFilter(KJob* self, intptr_t slot) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_EventFilter_Callback(reinterpret_cast<VirtualKJob::KJob_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KJob_TimerEvent(KJob* self, QTimerEvent* event) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->timerEvent(event);
    } else {
        ((VirtualKJob*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KJob_QBaseTimerEvent(KJob* self, QTimerEvent* event) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_TimerEvent_IsBase(true);
        vkjob->timerEvent(event);
    } else {
        ((VirtualKJob*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KJob_OnTimerEvent(KJob* self, intptr_t slot) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_TimerEvent_Callback(reinterpret_cast<VirtualKJob::KJob_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KJob_ChildEvent(KJob* self, QChildEvent* event) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->childEvent(event);
    } else {
        ((VirtualKJob*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KJob_QBaseChildEvent(KJob* self, QChildEvent* event) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_ChildEvent_IsBase(true);
        vkjob->childEvent(event);
    } else {
        ((VirtualKJob*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KJob_OnChildEvent(KJob* self, intptr_t slot) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_ChildEvent_Callback(reinterpret_cast<VirtualKJob::KJob_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KJob_CustomEvent(KJob* self, QEvent* event) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->customEvent(event);
    } else {
        ((VirtualKJob*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KJob_QBaseCustomEvent(KJob* self, QEvent* event) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_CustomEvent_IsBase(true);
        vkjob->customEvent(event);
    } else {
        ((VirtualKJob*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KJob_OnCustomEvent(KJob* self, intptr_t slot) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_CustomEvent_Callback(reinterpret_cast<VirtualKJob::KJob_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KJob_ConnectNotify(KJob* self, const QMetaMethod* signal) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->connectNotify(*signal);
    } else {
        ((VirtualKJob*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KJob_QBaseConnectNotify(KJob* self, const QMetaMethod* signal) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_ConnectNotify_IsBase(true);
        vkjob->connectNotify(*signal);
    } else {
        ((VirtualKJob*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KJob_OnConnectNotify(KJob* self, intptr_t slot) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_ConnectNotify_Callback(reinterpret_cast<VirtualKJob::KJob_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KJob_DisconnectNotify(KJob* self, const QMetaMethod* signal) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->disconnectNotify(*signal);
    } else {
        ((VirtualKJob*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KJob_QBaseDisconnectNotify(KJob* self, const QMetaMethod* signal) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_DisconnectNotify_IsBase(true);
        vkjob->disconnectNotify(*signal);
    } else {
        ((VirtualKJob*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KJob_OnDisconnectNotify(KJob* self, intptr_t slot) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_DisconnectNotify_Callback(reinterpret_cast<VirtualKJob::KJob_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KJob_SetCapabilities(KJob* self, int capabilities) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Base class handler implementation
void KJob_QBaseSetCapabilities(KJob* self, int capabilities) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_SetCapabilities_IsBase(true);
        vkjob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Auxiliary method to allow providing re-implementation
void KJob_OnSetCapabilities(KJob* self, intptr_t slot) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_SetCapabilities_Callback(reinterpret_cast<VirtualKJob::KJob_SetCapabilities_Callback>(slot));
    }
}

// Derived class handler implementation
bool KJob_IsFinished(const KJob* self) {
    auto* vkjob = const_cast<VirtualKJob*>(dynamic_cast<const VirtualKJob*>(self));
    if (vkjob && vkjob->isVirtualKJob) {
        return vkjob->isFinished();
    } else {
        return ((VirtualKJob*)self)->isFinished();
    }
}

// Base class handler implementation
bool KJob_QBaseIsFinished(const KJob* self) {
    auto* vkjob = const_cast<VirtualKJob*>(dynamic_cast<const VirtualKJob*>(self));
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_IsFinished_IsBase(true);
        return vkjob->isFinished();
    } else {
        return ((VirtualKJob*)self)->isFinished();
    }
}

// Auxiliary method to allow providing re-implementation
void KJob_OnIsFinished(const KJob* self, intptr_t slot) {
    auto* vkjob = const_cast<VirtualKJob*>(dynamic_cast<const VirtualKJob*>(self));
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_IsFinished_Callback(reinterpret_cast<VirtualKJob::KJob_IsFinished_Callback>(slot));
    }
}

// Derived class handler implementation
void KJob_SetError(KJob* self, int errorCode) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Base class handler implementation
void KJob_QBaseSetError(KJob* self, int errorCode) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_SetError_IsBase(true);
        vkjob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Auxiliary method to allow providing re-implementation
void KJob_OnSetError(KJob* self, intptr_t slot) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_SetError_Callback(reinterpret_cast<VirtualKJob::KJob_SetError_Callback>(slot));
    }
}

// Derived class handler implementation
void KJob_SetErrorText(KJob* self, const libqt_string errorText) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setErrorText(errorText_QString);
    } else {
        ((VirtualKJob*)self)->setErrorText(errorText_QString);
    }
}

// Base class handler implementation
void KJob_QBaseSetErrorText(KJob* self, const libqt_string errorText) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_SetErrorText_IsBase(true);
        vkjob->setErrorText(errorText_QString);
    } else {
        ((VirtualKJob*)self)->setErrorText(errorText_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KJob_OnSetErrorText(KJob* self, intptr_t slot) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_SetErrorText_Callback(reinterpret_cast<VirtualKJob::KJob_SetErrorText_Callback>(slot));
    }
}

// Derived class handler implementation
void KJob_SetProcessedAmount(KJob* self, int unit, unsigned long long amount) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KJob_QBaseSetProcessedAmount(KJob* self, int unit, unsigned long long amount) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_SetProcessedAmount_IsBase(true);
        vkjob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KJob_OnSetProcessedAmount(KJob* self, intptr_t slot) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_SetProcessedAmount_Callback(reinterpret_cast<VirtualKJob::KJob_SetProcessedAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KJob_SetTotalAmount(KJob* self, int unit, unsigned long long amount) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KJob_QBaseSetTotalAmount(KJob* self, int unit, unsigned long long amount) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_SetTotalAmount_IsBase(true);
        vkjob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KJob_OnSetTotalAmount(KJob* self, intptr_t slot) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_SetTotalAmount_Callback(reinterpret_cast<VirtualKJob::KJob_SetTotalAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KJob_SetProgressUnit(KJob* self, int unit) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Base class handler implementation
void KJob_QBaseSetProgressUnit(KJob* self, int unit) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_SetProgressUnit_IsBase(true);
        vkjob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Auxiliary method to allow providing re-implementation
void KJob_OnSetProgressUnit(KJob* self, intptr_t slot) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_SetProgressUnit_Callback(reinterpret_cast<VirtualKJob::KJob_SetProgressUnit_Callback>(slot));
    }
}

// Derived class handler implementation
void KJob_SetPercent(KJob* self, unsigned long percentage) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Base class handler implementation
void KJob_QBaseSetPercent(KJob* self, unsigned long percentage) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_SetPercent_IsBase(true);
        vkjob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Auxiliary method to allow providing re-implementation
void KJob_OnSetPercent(KJob* self, intptr_t slot) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_SetPercent_Callback(reinterpret_cast<VirtualKJob::KJob_SetPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KJob_EmitResult(KJob* self) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->emitResult();
    } else {
        ((VirtualKJob*)self)->emitResult();
    }
}

// Base class handler implementation
void KJob_QBaseEmitResult(KJob* self) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_EmitResult_IsBase(true);
        vkjob->emitResult();
    } else {
        ((VirtualKJob*)self)->emitResult();
    }
}

// Auxiliary method to allow providing re-implementation
void KJob_OnEmitResult(KJob* self, intptr_t slot) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_EmitResult_Callback(reinterpret_cast<VirtualKJob::KJob_EmitResult_Callback>(slot));
    }
}

// Derived class handler implementation
void KJob_EmitPercent(KJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Base class handler implementation
void KJob_QBaseEmitPercent(KJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_EmitPercent_IsBase(true);
        vkjob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Auxiliary method to allow providing re-implementation
void KJob_OnEmitPercent(KJob* self, intptr_t slot) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_EmitPercent_Callback(reinterpret_cast<VirtualKJob::KJob_EmitPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KJob_EmitSpeed(KJob* self, unsigned long speed) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Base class handler implementation
void KJob_QBaseEmitSpeed(KJob* self, unsigned long speed) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_EmitSpeed_IsBase(true);
        vkjob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Auxiliary method to allow providing re-implementation
void KJob_OnEmitSpeed(KJob* self, intptr_t slot) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_EmitSpeed_Callback(reinterpret_cast<VirtualKJob::KJob_EmitSpeed_Callback>(slot));
    }
}

// Derived class handler implementation
void KJob_StartElapsedTimer(KJob* self) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->startElapsedTimer();
    } else {
        ((VirtualKJob*)self)->startElapsedTimer();
    }
}

// Base class handler implementation
void KJob_QBaseStartElapsedTimer(KJob* self) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_StartElapsedTimer_IsBase(true);
        vkjob->startElapsedTimer();
    } else {
        ((VirtualKJob*)self)->startElapsedTimer();
    }
}

// Auxiliary method to allow providing re-implementation
void KJob_OnStartElapsedTimer(KJob* self, intptr_t slot) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_StartElapsedTimer_Callback(reinterpret_cast<VirtualKJob::KJob_StartElapsedTimer_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KJob_Sender(const KJob* self) {
    auto* vkjob = const_cast<VirtualKJob*>(dynamic_cast<const VirtualKJob*>(self));
    if (vkjob && vkjob->isVirtualKJob) {
        return vkjob->sender();
    } else {
        return ((VirtualKJob*)self)->sender();
    }
}

// Base class handler implementation
QObject* KJob_QBaseSender(const KJob* self) {
    auto* vkjob = const_cast<VirtualKJob*>(dynamic_cast<const VirtualKJob*>(self));
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_Sender_IsBase(true);
        return vkjob->sender();
    } else {
        return ((VirtualKJob*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KJob_OnSender(const KJob* self, intptr_t slot) {
    auto* vkjob = const_cast<VirtualKJob*>(dynamic_cast<const VirtualKJob*>(self));
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_Sender_Callback(reinterpret_cast<VirtualKJob::KJob_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KJob_SenderSignalIndex(const KJob* self) {
    auto* vkjob = const_cast<VirtualKJob*>(dynamic_cast<const VirtualKJob*>(self));
    if (vkjob && vkjob->isVirtualKJob) {
        return vkjob->senderSignalIndex();
    } else {
        return ((VirtualKJob*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KJob_QBaseSenderSignalIndex(const KJob* self) {
    auto* vkjob = const_cast<VirtualKJob*>(dynamic_cast<const VirtualKJob*>(self));
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_SenderSignalIndex_IsBase(true);
        return vkjob->senderSignalIndex();
    } else {
        return ((VirtualKJob*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KJob_OnSenderSignalIndex(const KJob* self, intptr_t slot) {
    auto* vkjob = const_cast<VirtualKJob*>(dynamic_cast<const VirtualKJob*>(self));
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_SenderSignalIndex_Callback(reinterpret_cast<VirtualKJob::KJob_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KJob_Receivers(const KJob* self, const char* signal) {
    auto* vkjob = const_cast<VirtualKJob*>(dynamic_cast<const VirtualKJob*>(self));
    if (vkjob && vkjob->isVirtualKJob) {
        return vkjob->receivers(signal);
    } else {
        return ((VirtualKJob*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KJob_QBaseReceivers(const KJob* self, const char* signal) {
    auto* vkjob = const_cast<VirtualKJob*>(dynamic_cast<const VirtualKJob*>(self));
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_Receivers_IsBase(true);
        return vkjob->receivers(signal);
    } else {
        return ((VirtualKJob*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KJob_OnReceivers(const KJob* self, intptr_t slot) {
    auto* vkjob = const_cast<VirtualKJob*>(dynamic_cast<const VirtualKJob*>(self));
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_Receivers_Callback(reinterpret_cast<VirtualKJob::KJob_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KJob_IsSignalConnected(const KJob* self, const QMetaMethod* signal) {
    auto* vkjob = const_cast<VirtualKJob*>(dynamic_cast<const VirtualKJob*>(self));
    if (vkjob && vkjob->isVirtualKJob) {
        return vkjob->isSignalConnected(*signal);
    } else {
        return ((VirtualKJob*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KJob_QBaseIsSignalConnected(const KJob* self, const QMetaMethod* signal) {
    auto* vkjob = const_cast<VirtualKJob*>(dynamic_cast<const VirtualKJob*>(self));
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_IsSignalConnected_IsBase(true);
        return vkjob->isSignalConnected(*signal);
    } else {
        return ((VirtualKJob*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KJob_OnIsSignalConnected(const KJob* self, intptr_t slot) {
    auto* vkjob = const_cast<VirtualKJob*>(dynamic_cast<const VirtualKJob*>(self));
    if (vkjob && vkjob->isVirtualKJob) {
        vkjob->setKJob_IsSignalConnected_Callback(reinterpret_cast<VirtualKJob::KJob_IsSignalConnected_Callback>(slot));
    }
}

void KJob_Connect_Finished(KJob* self, intptr_t slot) {
    void (*slotFunc)(KJob*, KJob*) = reinterpret_cast<void (*)(KJob*, KJob*)>(slot);
    KJob::connect(self, &KJob::finished, [self, slotFunc](KJob* job) {
        KJob* sigval1 = job;
        slotFunc(self, sigval1);
    });
}

void KJob_Connect_Suspended(KJob* self, intptr_t slot) {
    void (*slotFunc)(KJob*, KJob*) = reinterpret_cast<void (*)(KJob*, KJob*)>(slot);
    KJob::connect(self, &KJob::suspended, [self, slotFunc](KJob* job) {
        KJob* sigval1 = job;
        slotFunc(self, sigval1);
    });
}

void KJob_Connect_Resumed(KJob* self, intptr_t slot) {
    void (*slotFunc)(KJob*, KJob*) = reinterpret_cast<void (*)(KJob*, KJob*)>(slot);
    KJob::connect(self, &KJob::resumed, [self, slotFunc](KJob* job) {
        KJob* sigval1 = job;
        slotFunc(self, sigval1);
    });
}

void KJob_Connect_Result(KJob* self, intptr_t slot) {
    void (*slotFunc)(KJob*, KJob*) = reinterpret_cast<void (*)(KJob*, KJob*)>(slot);
    KJob::connect(self, &KJob::result, [self, slotFunc](KJob* job) {
        KJob* sigval1 = job;
        slotFunc(self, sigval1);
    });
}

void KJob_Connect_TotalAmountChanged(KJob* self, intptr_t slot) {
    void (*slotFunc)(KJob*, KJob*, int, unsigned long long) = reinterpret_cast<void (*)(KJob*, KJob*, int, unsigned long long)>(slot);
    KJob::connect(self, &KJob::totalAmountChanged, [self, slotFunc](KJob* job, KJob::Unit unit, qulonglong amount) {
        KJob* sigval1 = job;
        int sigval2 = static_cast<int>(unit);
        unsigned long long sigval3 = static_cast<unsigned long long>(amount);
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void KJob_Connect_ProcessedAmountChanged(KJob* self, intptr_t slot) {
    void (*slotFunc)(KJob*, KJob*, int, unsigned long long) = reinterpret_cast<void (*)(KJob*, KJob*, int, unsigned long long)>(slot);
    KJob::connect(self, &KJob::processedAmountChanged, [self, slotFunc](KJob* job, KJob::Unit unit, qulonglong amount) {
        KJob* sigval1 = job;
        int sigval2 = static_cast<int>(unit);
        unsigned long long sigval3 = static_cast<unsigned long long>(amount);
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void KJob_Connect_PercentChanged(KJob* self, intptr_t slot) {
    void (*slotFunc)(KJob*, KJob*, unsigned long) = reinterpret_cast<void (*)(KJob*, KJob*, unsigned long)>(slot);
    KJob::connect(self, &KJob::percentChanged, [self, slotFunc](KJob* job, unsigned long percent) {
        KJob* sigval1 = job;
        unsigned long sigval2 = percent;
        slotFunc(self, sigval1, sigval2);
    });
}

void KJob_Delete(KJob* self) {
    delete self;
}
