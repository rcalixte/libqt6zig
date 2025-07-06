#include <QCborArray>
#include <QCborValue>
#include <QCborValueRef>
#include <QJsonArray>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcborarray.h>
#include "libqcborarray.h"
#include "libqcborarray.hxx"

QCborArray* QCborArray_new() {
    return new QCborArray();
}

QCborArray* QCborArray_new2(const QCborArray* other) {
    return new QCborArray(*other);
}

void QCborArray_OperatorAssign(QCborArray* self, const QCborArray* other) {
    self->operator=(*other);
}

void QCborArray_Swap(QCborArray* self, QCborArray* other) {
    self->swap(*other);
}

QCborValue* QCborArray_ToCborValue(const QCborArray* self) {
    return new QCborValue(self->toCborValue());
}

ptrdiff_t QCborArray_Size(const QCborArray* self) {
    return static_cast<ptrdiff_t>(self->size());
}

bool QCborArray_IsEmpty(const QCborArray* self) {
    return self->isEmpty();
}

void QCborArray_Clear(QCborArray* self) {
    self->clear();
}

QCborValue* QCborArray_At(const QCborArray* self, ptrdiff_t i) {
    return new QCborValue(self->at((qsizetype)(i)));
}

QCborValue* QCborArray_First(const QCborArray* self) {
    return new QCborValue(self->first());
}

QCborValue* QCborArray_Last(const QCborArray* self) {
    return new QCborValue(self->last());
}

QCborValue* QCborArray_OperatorSubscript(const QCborArray* self, ptrdiff_t i) {
    return new QCborValue(self->operator[]((qsizetype)(i)));
}

QCborValueRef* QCborArray_First2(QCborArray* self) {
    return new QCborValueRef(self->first());
}

QCborValueRef* QCborArray_Last2(QCborArray* self) {
    return new QCborValueRef(self->last());
}

QCborValueRef* QCborArray_OperatorSubscriptWithQsizetype(QCborArray* self, ptrdiff_t i) {
    return new QCborValueRef(self->operator[]((qsizetype)(i)));
}

void QCborArray_Insert(QCborArray* self, ptrdiff_t i, const QCborValue* value) {
    self->insert((qsizetype)(i), *value);
}

void QCborArray_Prepend(QCborArray* self, const QCborValue* value) {
    self->prepend(*value);
}

void QCborArray_Append(QCborArray* self, const QCborValue* value) {
    self->append(*value);
}

void QCborArray_RemoveAt(QCborArray* self, ptrdiff_t i) {
    self->removeAt((qsizetype)(i));
}

QCborValue* QCborArray_TakeAt(QCborArray* self, ptrdiff_t i) {
    return new QCborValue(self->takeAt((qsizetype)(i)));
}

void QCborArray_RemoveFirst(QCborArray* self) {
    self->removeFirst();
}

void QCborArray_RemoveLast(QCborArray* self) {
    self->removeLast();
}

QCborValue* QCborArray_TakeFirst(QCborArray* self) {
    return new QCborValue(self->takeFirst());
}

QCborValue* QCborArray_TakeLast(QCborArray* self) {
    return new QCborValue(self->takeLast());
}

bool QCborArray_Contains(const QCborArray* self, const QCborValue* value) {
    return self->contains(*value);
}

int QCborArray_Compare(const QCborArray* self, const QCborArray* other) {
    return self->compare(*other);
}

void QCborArray_PushBack(QCborArray* self, const QCborValue* t) {
    self->push_back(*t);
}

void QCborArray_PushFront(QCborArray* self, const QCborValue* t) {
    self->push_front(*t);
}

void QCborArray_PopFront(QCborArray* self) {
    self->pop_front();
}

void QCborArray_PopBack(QCborArray* self) {
    self->pop_back();
}

bool QCborArray_Empty(const QCborArray* self) {
    return self->empty();
}

QCborArray* QCborArray_OperatorPlus(const QCborArray* self, const QCborValue* v) {
    return new QCborArray(self->operator+(*v));
}

QCborArray* QCborArray_OperatorPlusAssign(QCborArray* self, const QCborValue* v) {
    QCborArray& _ret = self->operator+=(*v);
    // Cast returned reference into pointer
    return &_ret;
}

QCborArray* QCborArray_OperatorShiftLeft(QCborArray* self, const QCborValue* v) {
    QCborArray& _ret = self->operator<<(*v);
    // Cast returned reference into pointer
    return &_ret;
}

QCborArray* QCborArray_FromStringList(const libqt_list /* of libqt_string */ list) {
    QList<QString> list_QList;
    list_QList.reserve(list.len);
    libqt_string* list_arr = static_cast<libqt_string*>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        QString list_arr_i_QString = QString::fromUtf8(list_arr[i].data, list_arr[i].len);
        list_QList.push_back(list_arr_i_QString);
    }
    return new QCborArray(QCborArray::fromStringList(list_QList));
}

QCborArray* QCborArray_FromJsonArray(const QJsonArray* array) {
    return new QCborArray(QCborArray::fromJsonArray(*array));
}

QJsonArray* QCborArray_ToJsonArray(const QCborArray* self) {
    return new QJsonArray(self->toJsonArray());
}

void QCborArray_Delete(QCborArray* self) {
    delete self;
}
