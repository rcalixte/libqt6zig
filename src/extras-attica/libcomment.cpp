#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Comment
#include <QDateTime>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <comment.h>
#include "libcomment.h"
#include "libcomment.hxx"

Attica__Comment* Attica__Comment_new() {
    return new Attica::Comment();
}

Attica__Comment* Attica__Comment_new2(const Attica__Comment* other) {
    return new Attica::Comment(*other);
}

libqt_string Attica__Comment_CommentTypeToString(const int typeVal) {
    QString _ret = Attica::Comment::commentTypeToString(static_cast<const Attica::Comment::Type>(typeVal));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Comment_OperatorAssign(Attica__Comment* self, const Attica__Comment* other) {
    self->operator=(*other);
}

void Attica__Comment_SetId(Attica__Comment* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->setId(id_QString);
}

libqt_string Attica__Comment_Id(const Attica__Comment* self) {
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

void Attica__Comment_SetSubject(Attica__Comment* self, const libqt_string subject) {
    QString subject_QString = QString::fromUtf8(subject.data, subject.len);
    self->setSubject(subject_QString);
}

libqt_string Attica__Comment_Subject(const Attica__Comment* self) {
    QString _ret = self->subject();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Comment_SetText(Attica__Comment* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

libqt_string Attica__Comment_Text(const Attica__Comment* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Comment_SetChildCount(Attica__Comment* self, const int childCount) {
    self->setChildCount(static_cast<const int>(childCount));
}

int Attica__Comment_ChildCount(const Attica__Comment* self) {
    return self->childCount();
}

void Attica__Comment_SetUser(Attica__Comment* self, const libqt_string user) {
    QString user_QString = QString::fromUtf8(user.data, user.len);
    self->setUser(user_QString);
}

libqt_string Attica__Comment_User(const Attica__Comment* self) {
    QString _ret = self->user();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Comment_SetDate(Attica__Comment* self, const QDateTime* date) {
    self->setDate(*date);
}

QDateTime* Attica__Comment_Date(const Attica__Comment* self) {
    return new QDateTime(self->date());
}

void Attica__Comment_SetScore(Attica__Comment* self, const int score) {
    self->setScore(static_cast<const int>(score));
}

int Attica__Comment_Score(const Attica__Comment* self) {
    return self->score();
}

void Attica__Comment_SetChildren(Attica__Comment* self, libqt_list /* of Attica__Comment* */ comments) {
    QList<Attica::Comment> comments_QList;
    comments_QList.reserve(comments.len);
    Attica__Comment** comments_arr = static_cast<Attica__Comment**>(comments.data);
    for (size_t i = 0; i < comments.len; ++i) {
        comments_QList.push_back(*(comments_arr[i]));
    }
    self->setChildren(comments_QList);
}

libqt_list /* of Attica__Comment* */ Attica__Comment_Children(const Attica__Comment* self) {
    QList<Attica::Comment> _ret = self->children();
    // Convert QList<> from C++ memory to manually-managed C memory
    Attica__Comment** _arr = static_cast<Attica__Comment**>(malloc(sizeof(Attica__Comment*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Attica::Comment(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool Attica__Comment_IsValid(const Attica__Comment* self) {
    return self->isValid();
}

void Attica__Comment_Delete(Attica__Comment* self) {
    delete self;
}
