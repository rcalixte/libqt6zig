#include <QCborArray>
#define WORKAROUND_INNER_CLASS_DEFINITION_QCborArray__ConstIterator
#define WORKAROUND_INNER_CLASS_DEFINITION_QCborArray__Iterator
#include <QCborValue>
#include <QCborValueConstRef>
#include <QCborValueRef>
#include <QJsonArray>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
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

QCborValueRef* QCborArray_OperatorSubscript2(QCborArray* self, ptrdiff_t i) {
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

QCborValue* QCborArray_Extract(QCborArray* self, QCborArray__ConstIterator* it) {
    return new QCborValue(self->extract(*it));
}

QCborValue* QCborArray_Extract2(QCborArray* self, QCborArray__Iterator* it) {
    return new QCborValue(self->extract(*it));
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

QCborArray__Iterator* QCborArray_Begin(QCborArray* self) {
    return new QCborArray::Iterator(self->begin());
}

QCborArray__ConstIterator* QCborArray_ConstBegin(const QCborArray* self) {
    return new QCborArray::ConstIterator(self->constBegin());
}

QCborArray__ConstIterator* QCborArray_Begin2(const QCborArray* self) {
    return new QCborArray::ConstIterator(self->begin());
}

QCborArray__ConstIterator* QCborArray_Cbegin(const QCborArray* self) {
    return new QCborArray::ConstIterator(self->cbegin());
}

QCborArray__Iterator* QCborArray_End(QCborArray* self) {
    return new QCborArray::Iterator(self->end());
}

QCborArray__ConstIterator* QCborArray_ConstEnd(const QCborArray* self) {
    return new QCborArray::ConstIterator(self->constEnd());
}

QCborArray__ConstIterator* QCborArray_End2(const QCborArray* self) {
    return new QCborArray::ConstIterator(self->end());
}

QCborArray__ConstIterator* QCborArray_Cend(const QCborArray* self) {
    return new QCborArray::ConstIterator(self->cend());
}

QCborArray__Iterator* QCborArray_Insert2(QCborArray* self, QCborArray__Iterator* before, const QCborValue* value) {
    return new QCborArray::Iterator(self->insert(*before, *value));
}

QCborArray__Iterator* QCborArray_Insert3(QCborArray* self, QCborArray__ConstIterator* before, const QCborValue* value) {
    return new QCborArray::Iterator(self->insert(*before, *value));
}

QCborArray__Iterator* QCborArray_Erase(QCborArray* self, QCborArray__Iterator* it) {
    return new QCborArray::Iterator(self->erase(*it));
}

QCborArray__Iterator* QCborArray_Erase2(QCborArray* self, QCborArray__ConstIterator* it) {
    return new QCborArray::Iterator(self->erase(*it));
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

QCborArray* QCborArray_FromVariantList(const libqt_list /* of QVariant* */ list) {
    QList<QVariant> list_QList;
    list_QList.reserve(list.len);
    QVariant** list_arr = static_cast<QVariant**>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        list_QList.push_back(*(list_arr[i]));
    }
    return new QCborArray(QCborArray::fromVariantList(list_QList));
}

QCborArray* QCborArray_FromJsonArray(const QJsonArray* array) {
    return new QCborArray(QCborArray::fromJsonArray(*array));
}

libqt_list /* of QVariant* */ QCborArray_ToVariantList(const QCborArray* self) {
    QList<QVariant> _ret = self->toVariantList();
    // Convert QList<> from C++ memory to manually-managed C memory
    QVariant** _arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QVariant(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QJsonArray* QCborArray_ToJsonArray(const QCborArray* self) {
    return new QJsonArray(self->toJsonArray());
}

void QCborArray_Delete(QCborArray* self) {
    delete self;
}

QCborArray__Iterator* QCborArray__Iterator_new(const QCborArray__Iterator* other) {
    return new QCborArray::Iterator(*other);
}

QCborArray__Iterator* QCborArray__Iterator_new2() {
    return new QCborArray::Iterator();
}

QCborArray__Iterator* QCborArray__Iterator_new3(const QCborArray__Iterator* param1) {
    return new QCborArray::Iterator(*param1);
}

void QCborArray__Iterator_OperatorAssign(QCborArray__Iterator* self, const QCborArray__Iterator* other) {
    self->operator=(*other);
}

QCborValueRef* QCborArray__Iterator_OperatorMultiply(const QCborArray__Iterator* self) {
    return new QCborValueRef(self->operator*());
}

QCborValueRef* QCborArray__Iterator_OperatorMinusGreater(QCborArray__Iterator* self) {
    return self->operator->();
}

QCborValueConstRef* QCborArray__Iterator_OperatorMinusGreater2(const QCborArray__Iterator* self) {
    return (QCborValueConstRef*)self->operator->();
}

QCborValueRef* QCborArray__Iterator_OperatorSubscript(const QCborArray__Iterator* self, ptrdiff_t j) {
    return new QCborValueRef(self->operator[]((qsizetype)(j)));
}

QCborArray__Iterator* QCborArray__Iterator_OperatorPlusPlus(QCborArray__Iterator* self) {
    QCborArray::Iterator& _ret = self->operator++();
    // Cast returned reference into pointer
    return &_ret;
}

QCborArray__Iterator* QCborArray__Iterator_OperatorPlusPlus2(QCborArray__Iterator* self, int param1) {
    return new QCborArray::Iterator(self->operator++(static_cast<int>(param1)));
}

QCborArray__Iterator* QCborArray__Iterator_OperatorMinusMinus(QCborArray__Iterator* self) {
    QCborArray::Iterator& _ret = self->operator--();
    // Cast returned reference into pointer
    return &_ret;
}

QCborArray__Iterator* QCborArray__Iterator_OperatorMinusMinus2(QCborArray__Iterator* self, int param1) {
    return new QCborArray::Iterator(self->operator--(static_cast<int>(param1)));
}

QCborArray__Iterator* QCborArray__Iterator_OperatorPlusAssign(QCborArray__Iterator* self, ptrdiff_t j) {
    QCborArray::Iterator& _ret = self->operator+=((qsizetype)(j));
    // Cast returned reference into pointer
    return &_ret;
}

QCborArray__Iterator* QCborArray__Iterator_OperatorMinusAssign(QCborArray__Iterator* self, ptrdiff_t j) {
    QCborArray::Iterator& _ret = self->operator-=((qsizetype)(j));
    // Cast returned reference into pointer
    return &_ret;
}

QCborArray__Iterator* QCborArray__Iterator_OperatorPlus(const QCborArray__Iterator* self, ptrdiff_t j) {
    return new QCborArray::Iterator(self->operator+((qsizetype)(j)));
}

QCborArray__Iterator* QCborArray__Iterator_OperatorMinus(const QCborArray__Iterator* self, ptrdiff_t j) {
    return new QCborArray::Iterator(self->operator-((qsizetype)(j)));
}

ptrdiff_t QCborArray__Iterator_OperatorMinus2(const QCborArray__Iterator* self, QCborArray__Iterator* j) {
    return static_cast<ptrdiff_t>(self->operator-(*j));
}

void QCborArray__Iterator_Delete(QCborArray__Iterator* self) {
    delete self;
}

QCborArray__ConstIterator* QCborArray__ConstIterator_new(const QCborArray__ConstIterator* other) {
    return new QCborArray::ConstIterator(*other);
}

QCborArray__ConstIterator* QCborArray__ConstIterator_new2() {
    return new QCborArray::ConstIterator();
}

QCborArray__ConstIterator* QCborArray__ConstIterator_new3(const QCborArray__ConstIterator* param1) {
    return new QCborArray::ConstIterator(*param1);
}

void QCborArray__ConstIterator_OperatorAssign(QCborArray__ConstIterator* self, const QCborArray__ConstIterator* other) {
    self->operator=(*other);
}

QCborValueConstRef* QCborArray__ConstIterator_OperatorMultiply(const QCborArray__ConstIterator* self) {
    return new QCborValueConstRef(self->operator*());
}

QCborValueConstRef* QCborArray__ConstIterator_OperatorMinusGreater(const QCborArray__ConstIterator* self) {
    return (QCborValueConstRef*)self->operator->();
}

QCborValueConstRef* QCborArray__ConstIterator_OperatorSubscript(const QCborArray__ConstIterator* self, ptrdiff_t j) {
    return new QCborValueConstRef(self->operator[]((qsizetype)(j)));
}

QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorPlusPlus(QCborArray__ConstIterator* self) {
    QCborArray::ConstIterator& _ret = self->operator++();
    // Cast returned reference into pointer
    return &_ret;
}

QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorPlusPlus2(QCborArray__ConstIterator* self, int param1) {
    return new QCborArray::ConstIterator(self->operator++(static_cast<int>(param1)));
}

QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorMinusMinus(QCborArray__ConstIterator* self) {
    QCborArray::ConstIterator& _ret = self->operator--();
    // Cast returned reference into pointer
    return &_ret;
}

QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorMinusMinus2(QCborArray__ConstIterator* self, int param1) {
    return new QCborArray::ConstIterator(self->operator--(static_cast<int>(param1)));
}

QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorPlusAssign(QCborArray__ConstIterator* self, ptrdiff_t j) {
    QCborArray::ConstIterator& _ret = self->operator+=((qsizetype)(j));
    // Cast returned reference into pointer
    return &_ret;
}

QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorMinusAssign(QCborArray__ConstIterator* self, ptrdiff_t j) {
    QCborArray::ConstIterator& _ret = self->operator-=((qsizetype)(j));
    // Cast returned reference into pointer
    return &_ret;
}

QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorPlus(const QCborArray__ConstIterator* self, ptrdiff_t j) {
    return new QCborArray::ConstIterator(self->operator+((qsizetype)(j)));
}

QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorMinus(const QCborArray__ConstIterator* self, ptrdiff_t j) {
    return new QCborArray::ConstIterator(self->operator-((qsizetype)(j)));
}

ptrdiff_t QCborArray__ConstIterator_OperatorMinus2(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* j) {
    return static_cast<ptrdiff_t>(self->operator-(*j));
}

void QCborArray__ConstIterator_Delete(QCborArray__ConstIterator* self) {
    delete self;
}
