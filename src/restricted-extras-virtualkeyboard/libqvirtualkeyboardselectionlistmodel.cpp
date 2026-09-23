#include <QAbstractItemModel>
#include <QAbstractListModel>
#include <QByteArray>
#include <QDataStream>
#include <QHash>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QString>
#include <QVariant>
#include <QVirtualKeyboardAbstractInputMethod>
#include <QVirtualKeyboardSelectionListModel>
#include <qvirtualkeyboardselectionlistmodel.h>
#include "libqvirtualkeyboardselectionlistmodel.h"
#include "libqvirtualkeyboardselectionlistmodel.hxx"

QMetaObject* QVirtualKeyboardSelectionListModel_MetaObject(const QVirtualKeyboardSelectionListModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QVirtualKeyboardSelectionListModel_Metacast(QVirtualKeyboardSelectionListModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QVirtualKeyboardSelectionListModel_Metacall(QVirtualKeyboardSelectionListModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QVirtualKeyboardSelectionListModel_Tr(const char* s) {
    auto _ret = QVirtualKeyboardSelectionListModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QVirtualKeyboardSelectionListModel_SetDataSource(QVirtualKeyboardSelectionListModel* self, QVirtualKeyboardAbstractInputMethod* dataSource, int typeVal) {
    self->setDataSource(dataSource, static_cast<QVirtualKeyboardSelectionListModel::Type>(typeVal));
}

QVirtualKeyboardAbstractInputMethod* QVirtualKeyboardSelectionListModel_DataSource(const QVirtualKeyboardSelectionListModel* self) {
    return self->dataSource();
}

int QVirtualKeyboardSelectionListModel_RowCount(const QVirtualKeyboardSelectionListModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

QVariant* QVirtualKeyboardSelectionListModel_Data(const QVirtualKeyboardSelectionListModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
}

libqt_map /* of int to libqt_string */ QVirtualKeyboardSelectionListModel_RoleNames(const QVirtualKeyboardSelectionListModel* self) {
    QHash<int, QByteArray> _ret = self->roleNames();
    // Convert QHash<> from C++ memory to manually-managed C memory
    int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        _karr[_ctr] = _itr->first;
        QByteArray _hashval_qb = _itr->second;
        libqt_string _hashval_str;
        _hashval_str.len = _hashval_qb.length();
        _hashval_str.data = static_cast<char*>(malloc(_hashval_str.len));
        memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
        _varr[_ctr] = _hashval_str;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

int QVirtualKeyboardSelectionListModel_Count(const QVirtualKeyboardSelectionListModel* self) {
    return self->count();
}

void QVirtualKeyboardSelectionListModel_SelectItem(QVirtualKeyboardSelectionListModel* self, int index) {
    self->selectItem(static_cast<int>(index));
}

void QVirtualKeyboardSelectionListModel_RemoveItem(QVirtualKeyboardSelectionListModel* self, int index) {
    self->removeItem(static_cast<int>(index));
}

QVariant* QVirtualKeyboardSelectionListModel_DataAt(const QVirtualKeyboardSelectionListModel* self, int index) {
    return new QVariant(self->dataAt(static_cast<int>(index)));
}

void QVirtualKeyboardSelectionListModel_CountChanged(QVirtualKeyboardSelectionListModel* self) {
    self->countChanged();
}

void QVirtualKeyboardSelectionListModel_Connect_CountChanged(QVirtualKeyboardSelectionListModel* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardSelectionListModel*) = reinterpret_cast<void (*)(QVirtualKeyboardSelectionListModel*)>(slot);
    QVirtualKeyboardSelectionListModel::connect(self,
                                                static_cast<void (QVirtualKeyboardSelectionListModel::*)()>(&QVirtualKeyboardSelectionListModel::countChanged),
                                                [self, slotFunc]() {
                                                    slotFunc(self);
                                                });
}

void QVirtualKeyboardSelectionListModel_ActiveItemChanged(QVirtualKeyboardSelectionListModel* self, int index) {
    self->activeItemChanged(static_cast<int>(index));
}

void QVirtualKeyboardSelectionListModel_Connect_ActiveItemChanged(QVirtualKeyboardSelectionListModel* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardSelectionListModel*, int) = reinterpret_cast<void (*)(QVirtualKeyboardSelectionListModel*, int)>(slot);
    QVirtualKeyboardSelectionListModel::connect(self,
                                                static_cast<void (QVirtualKeyboardSelectionListModel::*)(int)>(&QVirtualKeyboardSelectionListModel::activeItemChanged),
                                                [self, slotFunc](int index) {
                                                    int sigval1 = index;
                                                    slotFunc(self, sigval1);
                                                });
}

void QVirtualKeyboardSelectionListModel_ItemSelected(QVirtualKeyboardSelectionListModel* self, int index) {
    self->itemSelected(static_cast<int>(index));
}

void QVirtualKeyboardSelectionListModel_Connect_ItemSelected(QVirtualKeyboardSelectionListModel* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardSelectionListModel*, int) = reinterpret_cast<void (*)(QVirtualKeyboardSelectionListModel*, int)>(slot);
    QVirtualKeyboardSelectionListModel::connect(self,
                                                static_cast<void (QVirtualKeyboardSelectionListModel::*)(int)>(&QVirtualKeyboardSelectionListModel::itemSelected),
                                                [self, slotFunc](int index) {
                                                    int sigval1 = index;
                                                    slotFunc(self, sigval1);
                                                });
}

libqt_string QVirtualKeyboardSelectionListModel_Tr2(const char* s, const char* c) {
    auto _ret = QVirtualKeyboardSelectionListModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVirtualKeyboardSelectionListModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = QVirtualKeyboardSelectionListModel::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QVariant* QVirtualKeyboardSelectionListModel_DataAt2(const QVirtualKeyboardSelectionListModel* self, int index, int role) {
    return new QVariant(self->dataAt(static_cast<int>(index), static_cast<QVirtualKeyboardSelectionListModel::Role>(role)));
}

void QVirtualKeyboardSelectionListModel_Delete(QVirtualKeyboardSelectionListModel* self) {
    delete self;
}
