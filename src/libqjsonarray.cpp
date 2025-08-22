#include <QJsonArray>
#define WORKAROUND_INNER_CLASS_DEFINITION_QJsonArray__const_iterator
#define WORKAROUND_INNER_CLASS_DEFINITION_QJsonArray__iterator
#include <QJsonValue>
#include <QJsonValueConstRef>
#include <QJsonValueRef>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
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

QJsonArray* QJsonArray_FromVariantList(const libqt_list /* of QVariant* */ list) {
    QList<QVariant> list_QList;
    list_QList.reserve(list.len);
    QVariant** list_arr = static_cast<QVariant**>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        list_QList.push_back(*(list_arr[i]));
    }
    return new QJsonArray(QJsonArray::fromVariantList(list_QList));
}

libqt_list /* of QVariant* */ QJsonArray_ToVariantList(const QJsonArray* self) {
    QList<QVariant> _ret = self->toVariantList();
    // Convert QList<> from C++ memory to manually-managed C memory
    QVariant** _arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QVariant(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
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

QJsonValue* QJsonArray_OperatorSubscript2(const QJsonArray* self, ptrdiff_t i) {
    return new QJsonValue(self->operator[]((qsizetype)(i)));
}

void QJsonArray_Swap(QJsonArray* self, QJsonArray* other) {
    self->swap(*other);
}

QJsonArray__iterator* QJsonArray_Begin(QJsonArray* self) {
    return new QJsonArray::iterator(self->begin());
}

QJsonArray__const_iterator* QJsonArray_Begin2(const QJsonArray* self) {
    return new QJsonArray::const_iterator(self->begin());
}

QJsonArray__const_iterator* QJsonArray_ConstBegin(const QJsonArray* self) {
    return new QJsonArray::const_iterator(self->constBegin());
}

QJsonArray__const_iterator* QJsonArray_Cbegin(const QJsonArray* self) {
    return new QJsonArray::const_iterator(self->cbegin());
}

QJsonArray__iterator* QJsonArray_End(QJsonArray* self) {
    return new QJsonArray::iterator(self->end());
}

QJsonArray__const_iterator* QJsonArray_End2(const QJsonArray* self) {
    return new QJsonArray::const_iterator(self->end());
}

QJsonArray__const_iterator* QJsonArray_ConstEnd(const QJsonArray* self) {
    return new QJsonArray::const_iterator(self->constEnd());
}

QJsonArray__const_iterator* QJsonArray_Cend(const QJsonArray* self) {
    return new QJsonArray::const_iterator(self->cend());
}

QJsonArray__iterator* QJsonArray_Insert2(QJsonArray* self, QJsonArray__iterator* before, const QJsonValue* value) {
    return new QJsonArray::iterator(self->insert(*before, *value));
}

QJsonArray__iterator* QJsonArray_Erase(QJsonArray* self, QJsonArray__iterator* it) {
    return new QJsonArray::iterator(self->erase(*it));
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

QJsonArray__iterator* QJsonArray__iterator_new(const QJsonArray__iterator* other) {
    return new QJsonArray::iterator(*other);
}

QJsonArray__iterator* QJsonArray__iterator_new2() {
    return new QJsonArray::iterator();
}

QJsonArray__iterator* QJsonArray__iterator_new3(QJsonArray* array, ptrdiff_t index) {
    return new QJsonArray::iterator(array, (qsizetype)(index));
}

QJsonArray__iterator* QJsonArray__iterator_new4(const QJsonArray__iterator* other) {
    return new QJsonArray::iterator(*other);
}

void QJsonArray__iterator_OperatorAssign(QJsonArray__iterator* self, const QJsonArray__iterator* other) {
    self->operator=(*other);
}

QJsonValueRef* QJsonArray__iterator_OperatorMultiply(const QJsonArray__iterator* self) {
    return new QJsonValueRef(self->operator*());
}

QJsonValueConstRef* QJsonArray__iterator_OperatorMinusGreater(const QJsonArray__iterator* self) {
    return (QJsonValueConstRef*)self->operator->();
}

QJsonValueRef* QJsonArray__iterator_OperatorMinusGreater2(QJsonArray__iterator* self) {
    return self->operator->();
}

QJsonValueRef* QJsonArray__iterator_OperatorSubscript(const QJsonArray__iterator* self, ptrdiff_t j) {
    return new QJsonValueRef(self->operator[]((qsizetype)(j)));
}

QJsonArray__iterator* QJsonArray__iterator_OperatorPlusPlus(QJsonArray__iterator* self) {
    QJsonArray::iterator& _ret = self->operator++();
    // Cast returned reference into pointer
    return &_ret;
}

QJsonArray__iterator* QJsonArray__iterator_OperatorPlusPlus2(QJsonArray__iterator* self, int param1) {
    return new QJsonArray::iterator(self->operator++(static_cast<int>(param1)));
}

QJsonArray__iterator* QJsonArray__iterator_OperatorMinusMinus(QJsonArray__iterator* self) {
    QJsonArray::iterator& _ret = self->operator--();
    // Cast returned reference into pointer
    return &_ret;
}

QJsonArray__iterator* QJsonArray__iterator_OperatorMinusMinus2(QJsonArray__iterator* self, int param1) {
    return new QJsonArray::iterator(self->operator--(static_cast<int>(param1)));
}

QJsonArray__iterator* QJsonArray__iterator_OperatorPlusAssign(QJsonArray__iterator* self, ptrdiff_t j) {
    QJsonArray::iterator& _ret = self->operator+=((qsizetype)(j));
    // Cast returned reference into pointer
    return &_ret;
}

QJsonArray__iterator* QJsonArray__iterator_OperatorMinusAssign(QJsonArray__iterator* self, ptrdiff_t j) {
    QJsonArray::iterator& _ret = self->operator-=((qsizetype)(j));
    // Cast returned reference into pointer
    return &_ret;
}

QJsonArray__iterator* QJsonArray__iterator_OperatorPlus(const QJsonArray__iterator* self, ptrdiff_t j) {
    return new QJsonArray::iterator(self->operator+((qsizetype)(j)));
}

QJsonArray__iterator* QJsonArray__iterator_OperatorMinus(const QJsonArray__iterator* self, ptrdiff_t j) {
    return new QJsonArray::iterator(self->operator-((qsizetype)(j)));
}

ptrdiff_t QJsonArray__iterator_OperatorMinus2(const QJsonArray__iterator* self, QJsonArray__iterator* j) {
    return static_cast<ptrdiff_t>(self->operator-(*j));
}

void QJsonArray__iterator_Delete(QJsonArray__iterator* self) {
    delete self;
}

QJsonArray__const_iterator* QJsonArray__const_iterator_new(const QJsonArray__const_iterator* other) {
    return new QJsonArray::const_iterator(*other);
}

QJsonArray__const_iterator* QJsonArray__const_iterator_new2() {
    return new QJsonArray::const_iterator();
}

QJsonArray__const_iterator* QJsonArray__const_iterator_new3(const QJsonArray* array, ptrdiff_t index) {
    return new QJsonArray::const_iterator(array, (qsizetype)(index));
}

QJsonArray__const_iterator* QJsonArray__const_iterator_new4(const QJsonArray__iterator* o) {
    return new QJsonArray::const_iterator(*o);
}

QJsonArray__const_iterator* QJsonArray__const_iterator_new5(const QJsonArray__const_iterator* other) {
    return new QJsonArray::const_iterator(*other);
}

void QJsonArray__const_iterator_OperatorAssign(QJsonArray__const_iterator* self, const QJsonArray__const_iterator* other) {
    self->operator=(*other);
}

QJsonValueConstRef* QJsonArray__const_iterator_OperatorMultiply(const QJsonArray__const_iterator* self) {
    return new QJsonValueConstRef(self->operator*());
}

QJsonValueConstRef* QJsonArray__const_iterator_OperatorMinusGreater(const QJsonArray__const_iterator* self) {
    return (QJsonValueConstRef*)self->operator->();
}

QJsonValueConstRef* QJsonArray__const_iterator_OperatorSubscript(const QJsonArray__const_iterator* self, ptrdiff_t j) {
    return new QJsonValueConstRef(self->operator[]((qsizetype)(j)));
}

QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorPlusPlus(QJsonArray__const_iterator* self) {
    QJsonArray::const_iterator& _ret = self->operator++();
    // Cast returned reference into pointer
    return &_ret;
}

QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorPlusPlus2(QJsonArray__const_iterator* self, int param1) {
    return new QJsonArray::const_iterator(self->operator++(static_cast<int>(param1)));
}

QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorMinusMinus(QJsonArray__const_iterator* self) {
    QJsonArray::const_iterator& _ret = self->operator--();
    // Cast returned reference into pointer
    return &_ret;
}

QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorMinusMinus2(QJsonArray__const_iterator* self, int param1) {
    return new QJsonArray::const_iterator(self->operator--(static_cast<int>(param1)));
}

QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorPlusAssign(QJsonArray__const_iterator* self, ptrdiff_t j) {
    QJsonArray::const_iterator& _ret = self->operator+=((qsizetype)(j));
    // Cast returned reference into pointer
    return &_ret;
}

QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorMinusAssign(QJsonArray__const_iterator* self, ptrdiff_t j) {
    QJsonArray::const_iterator& _ret = self->operator-=((qsizetype)(j));
    // Cast returned reference into pointer
    return &_ret;
}

QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorPlus(const QJsonArray__const_iterator* self, ptrdiff_t j) {
    return new QJsonArray::const_iterator(self->operator+((qsizetype)(j)));
}

QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorMinus(const QJsonArray__const_iterator* self, ptrdiff_t j) {
    return new QJsonArray::const_iterator(self->operator-((qsizetype)(j)));
}

ptrdiff_t QJsonArray__const_iterator_OperatorMinus2(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* j) {
    return static_cast<ptrdiff_t>(self->operator-(*j));
}

void QJsonArray__const_iterator_Delete(QJsonArray__const_iterator* self) {
    delete self;
}
