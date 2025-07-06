#include <QJsonArray>
#include <QJsonValue>
#include <QJsonValueRef>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qjsonarray.h>
#include "libqjsonarray.h"
#include "libqjsonarray.hxx"

QJsonArray* QJsonArray_new() {
    return new QJsonArray();
}

QJsonArray* QJsonArray_new2(const QJsonArray* other) {
    return new QJsonArray(*other);
}

void QJsonArray_OperatorAssign(QJsonArray* self, const QJsonArray* other) {
    self->operator=(*other);
}

QJsonArray* QJsonArray_FromStringList(const libqt_list /* of libqt_string */ list) {
    QList<QString> list_QList;
    list_QList.reserve(list.len);
    libqt_string* list_arr = static_cast<libqt_string*>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        QString list_arr_i_QString = QString::fromUtf8(list_arr[i].data, list_arr[i].len);
        list_QList.push_back(list_arr_i_QString);
    }
    return new QJsonArray(QJsonArray::fromStringList(list_QList));
}

ptrdiff_t QJsonArray_Size(const QJsonArray* self) {
    return static_cast<ptrdiff_t>(self->size());
}

ptrdiff_t QJsonArray_Count(const QJsonArray* self) {
    return static_cast<ptrdiff_t>(self->count());
}

bool QJsonArray_IsEmpty(const QJsonArray* self) {
    return self->isEmpty();
}

QJsonValue* QJsonArray_At(const QJsonArray* self, ptrdiff_t i) {
    return new QJsonValue(self->at((qsizetype)(i)));
}

QJsonValue* QJsonArray_First(const QJsonArray* self) {
    return new QJsonValue(self->first());
}

QJsonValue* QJsonArray_Last(const QJsonArray* self) {
    return new QJsonValue(self->last());
}

void QJsonArray_Prepend(QJsonArray* self, const QJsonValue* value) {
    self->prepend(*value);
}

void QJsonArray_Append(QJsonArray* self, const QJsonValue* value) {
    self->append(*value);
}

void QJsonArray_RemoveAt(QJsonArray* self, ptrdiff_t i) {
    self->removeAt((qsizetype)(i));
}

QJsonValue* QJsonArray_TakeAt(QJsonArray* self, ptrdiff_t i) {
    return new QJsonValue(self->takeAt((qsizetype)(i)));
}

void QJsonArray_RemoveFirst(QJsonArray* self) {
    self->removeFirst();
}

void QJsonArray_RemoveLast(QJsonArray* self) {
    self->removeLast();
}

void QJsonArray_Insert(QJsonArray* self, ptrdiff_t i, const QJsonValue* value) {
    self->insert((qsizetype)(i), *value);
}

void QJsonArray_Replace(QJsonArray* self, ptrdiff_t i, const QJsonValue* value) {
    self->replace((qsizetype)(i), *value);
}

bool QJsonArray_Contains(const QJsonArray* self, const QJsonValue* element) {
    return self->contains(*element);
}

QJsonValueRef* QJsonArray_OperatorSubscript(QJsonArray* self, ptrdiff_t i) {
    return new QJsonValueRef(self->operator[]((qsizetype)(i)));
}

QJsonValue* QJsonArray_OperatorSubscriptWithQsizetype(const QJsonArray* self, ptrdiff_t i) {
    return new QJsonValue(self->operator[]((qsizetype)(i)));
}

void QJsonArray_Swap(QJsonArray* self, QJsonArray* other) {
    self->swap(*other);
}

QJsonArray* QJsonArray_OperatorPlus(const QJsonArray* self, const QJsonValue* v) {
    return new QJsonArray(self->operator+(*v));
}

QJsonArray* QJsonArray_OperatorPlusAssign(QJsonArray* self, const QJsonValue* v) {
    QJsonArray& _ret = self->operator+=(*v);
    // Cast returned reference into pointer
    return &_ret;
}

QJsonArray* QJsonArray_OperatorShiftLeft(QJsonArray* self, const QJsonValue* v) {
    QJsonArray& _ret = self->operator<<(*v);
    // Cast returned reference into pointer
    return &_ret;
}

void QJsonArray_PushBack(QJsonArray* self, const QJsonValue* t) {
    self->push_back(*t);
}

void QJsonArray_PushFront(QJsonArray* self, const QJsonValue* t) {
    self->push_front(*t);
}

void QJsonArray_PopFront(QJsonArray* self) {
    self->pop_front();
}

void QJsonArray_PopBack(QJsonArray* self) {
    self->pop_back();
}

bool QJsonArray_Empty(const QJsonArray* self) {
    return self->empty();
}

void QJsonArray_Delete(QJsonArray* self) {
    delete self;
}
