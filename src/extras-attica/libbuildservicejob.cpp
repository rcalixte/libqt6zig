#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__BuildServiceJob
#include <QString>
#include <QByteArray>
#include <cstring>
#include <buildservicejob.h>
#include "libbuildservicejob.h"
#include "libbuildservicejob.hxx"

Attica__BuildServiceJob* Attica__BuildServiceJob_new() {
    return new Attica::BuildServiceJob();
}

Attica__BuildServiceJob* Attica__BuildServiceJob_new2(const Attica__BuildServiceJob* other) {
    return new Attica::BuildServiceJob(*other);
}

void Attica__BuildServiceJob_OperatorAssign(Attica__BuildServiceJob* self, const Attica__BuildServiceJob* other) {
    self->operator=(*other);
}

void Attica__BuildServiceJob_SetId(Attica__BuildServiceJob* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->setId(id_QString);
}

libqt_string Attica__BuildServiceJob_Id(const Attica__BuildServiceJob* self) {
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

void Attica__BuildServiceJob_SetName(Attica__BuildServiceJob* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

libqt_string Attica__BuildServiceJob_Name(const Attica__BuildServiceJob* self) {
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

void Attica__BuildServiceJob_SetUrl(Attica__BuildServiceJob* self, const libqt_string url) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    self->setUrl(url_QString);
}

libqt_string Attica__BuildServiceJob_Url(const Attica__BuildServiceJob* self) {
    QString _ret = self->url();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__BuildServiceJob_SetProjectId(Attica__BuildServiceJob* self, const libqt_string projectId) {
    QString projectId_QString = QString::fromUtf8(projectId.data, projectId.len);
    self->setProjectId(projectId_QString);
}

libqt_string Attica__BuildServiceJob_ProjectId(const Attica__BuildServiceJob* self) {
    QString _ret = self->projectId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__BuildServiceJob_SetBuildServiceId(Attica__BuildServiceJob* self, const libqt_string buildServiceId) {
    QString buildServiceId_QString = QString::fromUtf8(buildServiceId.data, buildServiceId.len);
    self->setBuildServiceId(buildServiceId_QString);
}

libqt_string Attica__BuildServiceJob_BuildServiceId(const Attica__BuildServiceJob* self) {
    QString _ret = self->buildServiceId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__BuildServiceJob_SetMessage(Attica__BuildServiceJob* self, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->setMessage(message_QString);
}

libqt_string Attica__BuildServiceJob_Message(const Attica__BuildServiceJob* self) {
    QString _ret = self->message();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__BuildServiceJob_SetTarget(Attica__BuildServiceJob* self, const libqt_string target) {
    QString target_QString = QString::fromUtf8(target.data, target.len);
    self->setTarget(target_QString);
}

libqt_string Attica__BuildServiceJob_Target(const Attica__BuildServiceJob* self) {
    QString _ret = self->target();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__BuildServiceJob_SetProgress(Attica__BuildServiceJob* self, const double progress) {
    self->setProgress(progress);
}

double Attica__BuildServiceJob_Progress(const Attica__BuildServiceJob* self) {
    return static_cast<double>(self->progress());
}

void Attica__BuildServiceJob_SetStatus(Attica__BuildServiceJob* self, const int status) {
    self->setStatus(static_cast<const int>(status));
}

bool Attica__BuildServiceJob_IsRunning(const Attica__BuildServiceJob* self) {
    return self->isRunning();
}

bool Attica__BuildServiceJob_IsCompleted(const Attica__BuildServiceJob* self) {
    return self->isCompleted();
}

bool Attica__BuildServiceJob_IsFailed(const Attica__BuildServiceJob* self) {
    return self->isFailed();
}

bool Attica__BuildServiceJob_IsValid(const Attica__BuildServiceJob* self) {
    return self->isValid();
}

void Attica__BuildServiceJob_Delete(Attica__BuildServiceJob* self) {
    delete self;
}
