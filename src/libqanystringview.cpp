#include <QAnyStringView>
#include <QByteArray>
#include <QChar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qanystringview.h>
#include "libqanystringview.h"
#include "libqanystringview.hxx"

QAnyStringView* QAnyStringView_new(char* other) {
    return new QAnyStringView(QAnyStringView(other));
}

QAnyStringView* QAnyStringView_new2(char* other) {
    return new QAnyStringView(std::move(QAnyStringView(other)));
}

QAnyStringView* QAnyStringView_new3() {
    return new QAnyStringView();
}

QAnyStringView* QAnyStringView_new4(libqt_string str) {
    QByteArray str_QByteArray(str.data, str.len);
    return new QAnyStringView(str_QByteArray);
}

QAnyStringView* QAnyStringView_new5(libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    return new QAnyStringView(str_QString);
}

QAnyStringView* QAnyStringView_new6(QChar* c) {
    return new QAnyStringView(*c);
}

QAnyStringView* QAnyStringView_new7(char* param1) {
    return new QAnyStringView(QAnyStringView(param1));
}

void QAnyStringView_CopyAssign(QAnyStringView* self, QAnyStringView* other) {
    *self = *other;
}

void QAnyStringView_MoveAssign(QAnyStringView* self, QAnyStringView* other) {
    *self = std::move(*other);
}

libqt_string QAnyStringView_ToString(const QAnyStringView* self) {
    QString _ret = self->toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

ptrdiff_t QAnyStringView_Size(const QAnyStringView* self) {
    return static_cast<ptrdiff_t>(self->size());
}

const void* QAnyStringView_Data(const QAnyStringView* self) {
    return (const void*)self->data();
}

int QAnyStringView_Compare(char* lhs, char* rhs) {
    return QAnyStringView::compare(QAnyStringView(lhs), QAnyStringView(rhs));
}

bool QAnyStringView_Equal(char* lhs, char* rhs) {
    return QAnyStringView::equal(QAnyStringView(lhs), QAnyStringView(rhs));
}

QChar* QAnyStringView_Front(const QAnyStringView* self) {
    return new QChar(self->front());
}

QChar* QAnyStringView_Back(const QAnyStringView* self) {
    return new QChar(self->back());
}

bool QAnyStringView_Empty(const QAnyStringView* self) {
    return self->empty();
}

ptrdiff_t QAnyStringView_SizeBytes(const QAnyStringView* self) {
    return static_cast<ptrdiff_t>(self->size_bytes());
}

bool QAnyStringView_IsNull(const QAnyStringView* self) {
    return self->isNull();
}

bool QAnyStringView_IsEmpty(const QAnyStringView* self) {
    return self->isEmpty();
}

ptrdiff_t QAnyStringView_Length(const QAnyStringView* self) {
    return static_cast<ptrdiff_t>(self->length());
}

int QAnyStringView_Compare3(char* lhs, char* rhs, int cs) {
    return QAnyStringView::compare(QAnyStringView(lhs), QAnyStringView(rhs), static_cast<Qt::CaseSensitivity>(cs));
}

void QAnyStringView_Delete(QAnyStringView* self) {
    delete self;
}
