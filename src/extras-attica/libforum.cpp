#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Forum
#include <QDateTime>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <forum.h>
#include "libforum.h"
#include "libforum.hxx"

Attica__Forum* Attica__Forum_new() {
    return new Attica::Forum();
}

Attica__Forum* Attica__Forum_new2(const Attica__Forum* other) {
    return new Attica::Forum(*other);
}

void Attica__Forum_OperatorAssign(Attica__Forum* self, const Attica__Forum* other) {
    self->operator=(*other);
}

void Attica__Forum_SetId(Attica__Forum* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->setId(id_QString);
}

libqt_string Attica__Forum_Id(const Attica__Forum* self) {
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

void Attica__Forum_SetName(Attica__Forum* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

libqt_string Attica__Forum_Name(const Attica__Forum* self) {
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

void Attica__Forum_SetDescription(Attica__Forum* self, const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->setDescription(description_QString);
}

libqt_string Attica__Forum_Description(const Attica__Forum* self) {
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

void Attica__Forum_SetDate(Attica__Forum* self, const QDateTime* date) {
    self->setDate(*date);
}

QDateTime* Attica__Forum_Date(const Attica__Forum* self) {
    return new QDateTime(self->date());
}

void Attica__Forum_SetIcon(Attica__Forum* self, const QUrl* icon) {
    self->setIcon(*icon);
}

QUrl* Attica__Forum_Icon(const Attica__Forum* self) {
    return new QUrl(self->icon());
}

void Attica__Forum_SetChildCount(Attica__Forum* self, const int childCount) {
    self->setChildCount(static_cast<const int>(childCount));
}

int Attica__Forum_ChildCount(const Attica__Forum* self) {
    return self->childCount();
}

void Attica__Forum_SetTopics(Attica__Forum* self, const int topics) {
    self->setTopics(static_cast<const int>(topics));
}

int Attica__Forum_Topics(const Attica__Forum* self) {
    return self->topics();
}

void Attica__Forum_SetChildren(Attica__Forum* self, libqt_list /* of Attica__Forum* */ comments) {
    QList<Attica::Forum> comments_QList;
    comments_QList.reserve(comments.len);
    Attica__Forum** comments_arr = static_cast<Attica__Forum**>(comments.data);
    for (size_t i = 0; i < comments.len; ++i) {
        comments_QList.push_back(*(comments_arr[i]));
    }
    self->setChildren(comments_QList);
}

libqt_list /* of Attica__Forum* */ Attica__Forum_Children(const Attica__Forum* self) {
    QList<Attica::Forum> _ret = self->children();
    // Convert QList<> from C++ memory to manually-managed C memory
    Attica__Forum** _arr = static_cast<Attica__Forum**>(malloc(sizeof(Attica__Forum*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Attica::Forum(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool Attica__Forum_IsValid(const Attica__Forum* self) {
    return self->isValid();
}

void Attica__Forum_Delete(Attica__Forum* self) {
    delete self;
}
