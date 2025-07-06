#include <QAnyStringView>
#include <QByteArray>
#include <QChar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qanystringview.h>
#include "libqanystringview.h"
#include "libqanystringview.hxx"

QAnyStringView* QAnyStringView_new(const libqt_string other) {
    QString other_QString = QString::fromUtf8(other.data, other.len);
    return new QAnyStringView(QAnyStringView(other_QString));
}

QAnyStringView* QAnyStringView_new2(libqt_string other) {
    QString other_QString = QString::fromUtf8(other.data, other.len);
    return new QAnyStringView(std::move(QAnyStringView(other_QString)));
}

QAnyStringView* QAnyStringView_new3() {
    return new QAnyStringView();
}

QAnyStringView* QAnyStringView_new4(const libqt_string str) {
    QByteArray str_QByteArray(str.data, str.len);
    return new QAnyStringView(str_QByteArray);
}

QAnyStringView* QAnyStringView_new5(const libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    return new QAnyStringView(str_QString);
}

QAnyStringView* QAnyStringView_new6(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return new QAnyStringView(QAnyStringView(param1_QString));
}

void QAnyStringView_CopyAssign(QAnyStringView* self, QAnyStringView* other) {
    *self = *other;
}

void QAnyStringView_MoveAssign(QAnyStringView* self, QAnyStringView* other) {
    *self = std::move(*other);
}

libqt_string QAnyStringView_Mid(const QAnyStringView* self, ptrdiff_t pos) {
    QAnyStringView _ret = self->mid((qsizetype)(pos));
    QString _qstr = _ret.toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _qstr.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAnyStringView_Left(const QAnyStringView* self, ptrdiff_t n) {
    QAnyStringView _ret = self->left((qsizetype)(n));
    QString _qstr = _ret.toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _qstr.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAnyStringView_Right(const QAnyStringView* self, ptrdiff_t n) {
    QAnyStringView _ret = self->right((qsizetype)(n));
    QString _qstr = _ret.toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _qstr.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAnyStringView_Sliced(const QAnyStringView* self, ptrdiff_t pos) {
    QAnyStringView _ret = self->sliced((qsizetype)(pos));
    QString _qstr = _ret.toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _qstr.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAnyStringView_Sliced2(const QAnyStringView* self, ptrdiff_t pos, ptrdiff_t n) {
    QAnyStringView _ret = self->sliced((qsizetype)(pos), (qsizetype)(n));
    QString _qstr = _ret.toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _qstr.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAnyStringView_First(const QAnyStringView* self, ptrdiff_t n) {
    QAnyStringView _ret = self->first((qsizetype)(n));
    QString _qstr = _ret.toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _qstr.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAnyStringView_Last(const QAnyStringView* self, ptrdiff_t n) {
    QAnyStringView _ret = self->last((qsizetype)(n));
    QString _qstr = _ret.toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _qstr.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAnyStringView_Chopped(const QAnyStringView* self, ptrdiff_t n) {
    QAnyStringView _ret = self->chopped((qsizetype)(n));
    QString _qstr = _ret.toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _qstr.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAnyStringView_Slice(QAnyStringView* self, ptrdiff_t pos) {
    QAnyStringView _ret = self->slice((qsizetype)(pos));
    QString _qstr = _ret.toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _qstr.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAnyStringView_Slice2(QAnyStringView* self, ptrdiff_t pos, ptrdiff_t n) {
    QAnyStringView _ret = self->slice((qsizetype)(pos), (qsizetype)(n));
    QString _qstr = _ret.toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _qstr.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAnyStringView_Truncate(QAnyStringView* self, ptrdiff_t n) {
    self->truncate((qsizetype)(n));
}

void QAnyStringView_Chop(QAnyStringView* self, ptrdiff_t n) {
    self->chop((qsizetype)(n));
}

libqt_string QAnyStringView_ToString(const QAnyStringView* self) {
    QString _ret = self->toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

ptrdiff_t QAnyStringView_Size(const QAnyStringView* self) {
    return static_cast<ptrdiff_t>(self->size());
}

const void* QAnyStringView_Data(const QAnyStringView* self) {
    return (const void*)self->data();
}

int QAnyStringView_Compare(libqt_string lhs, libqt_string rhs) {
    QString lhs_QString = QString::fromUtf8(lhs.data, lhs.len);
    QString rhs_QString = QString::fromUtf8(rhs.data, rhs.len);
    return QAnyStringView::compare(QAnyStringView(lhs_QString), QAnyStringView(rhs_QString));
}

bool QAnyStringView_Equal(libqt_string lhs, libqt_string rhs) {
    QString lhs_QString = QString::fromUtf8(lhs.data, lhs.len);
    QString rhs_QString = QString::fromUtf8(rhs.data, rhs.len);
    return QAnyStringView::equal(QAnyStringView(lhs_QString), QAnyStringView(rhs_QString));
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

ptrdiff_t QAnyStringView_MaxSize(const QAnyStringView* self) {
    return static_cast<ptrdiff_t>(self->max_size());
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

libqt_string QAnyStringView_Mid2(const QAnyStringView* self, ptrdiff_t pos, ptrdiff_t n) {
    QAnyStringView _ret = self->mid((qsizetype)(pos), (qsizetype)(n));
    QString _qstr = _ret.toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _qstr.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QAnyStringView_Compare3(libqt_string lhs, libqt_string rhs, int cs) {
    QString lhs_QString = QString::fromUtf8(lhs.data, lhs.len);
    QString rhs_QString = QString::fromUtf8(rhs.data, rhs.len);
    return QAnyStringView::compare(QAnyStringView(lhs_QString), QAnyStringView(rhs_QString), static_cast<Qt::CaseSensitivity>(cs));
}

void QAnyStringView_Delete(QAnyStringView* self) {
    delete self;
}
