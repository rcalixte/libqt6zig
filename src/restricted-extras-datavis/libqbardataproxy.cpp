#include <QAbstractDataProxy>
#include <QBar3DSeries>
#include <QBarDataItem>
#include <QBarDataProxy>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPoint>
#include <QString>
#include <QTimerEvent>
#include <qbardataproxy.h>
#include "libqbardataproxy.h"
#include "libqbardataproxy.hxx"

QBarDataProxy* QBarDataProxy_new() {
    return new VirtualQBarDataProxy();
}

QBarDataProxy* QBarDataProxy_new2(QObject* parent) {
    return new VirtualQBarDataProxy(parent);
}

QMetaObject* QBarDataProxy_MetaObject(const QBarDataProxy* self) {
    return (QMetaObject*)self->metaObject();
}

void* QBarDataProxy_Metacast(QBarDataProxy* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QBarDataProxy_Metacall(QBarDataProxy* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QBarDataProxy_Tr(const char* s) {
    auto _ret = QBarDataProxy::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QBar3DSeries* QBarDataProxy_Series(const QBarDataProxy* self) {
    return self->series();
}

int QBarDataProxy_RowCount(const QBarDataProxy* self) {
    return self->rowCount();
}

libqt_list /* of libqt_string */ QBarDataProxy_RowLabels(const QBarDataProxy* self) {
    QList<QString> _ret = self->rowLabels();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QBarDataProxy_SetRowLabels(QBarDataProxy* self, const libqt_list /* of libqt_string */ labels) {
    QList<QString> labels_QList;
    labels_QList.reserve(labels.len);
    libqt_string* labels_arr = static_cast<libqt_string*>(labels.data);
    for (size_t i = 0; i < labels.len; ++i) {
        QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
        labels_QList.push_back(labels_arr_i_QString);
    }
    self->setRowLabels(labels_QList);
}

libqt_list /* of libqt_string */ QBarDataProxy_ColumnLabels(const QBarDataProxy* self) {
    QList<QString> _ret = self->columnLabels();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QBarDataProxy_SetColumnLabels(QBarDataProxy* self, const libqt_list /* of libqt_string */ labels) {
    QList<QString> labels_QList;
    labels_QList.reserve(labels.len);
    libqt_string* labels_arr = static_cast<libqt_string*>(labels.data);
    for (size_t i = 0; i < labels.len; ++i) {
        QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
        labels_QList.push_back(labels_arr_i_QString);
    }
    self->setColumnLabels(labels_QList);
}

libqt_list /* of libqt_list of QBarDataItem* */ QBarDataProxy_Array(const QBarDataProxy* self) {
    const QList<QList<QBarDataItem>*>* _ret = self->array();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_list /* of QBarDataItem* */* _arr = static_cast<libqt_list /* of QBarDataItem* */*>(malloc(sizeof(libqt_list /* of QBarDataItem* */) * (_ret->size())));
    for (qsizetype i = 0; i < _ret->size(); ++i) {
        const QList<QBarDataItem>* _lv_ret = (*_ret)[i];
        // Convert QList<> from C++ memory to manually-managed C memory
        QBarDataItem** _lv_arr = static_cast<QBarDataItem**>(malloc(sizeof(QBarDataItem*) * (_lv_ret->size())));
        for (qsizetype j = 0; j < _lv_ret->size(); ++j) {
            _lv_arr[j] = new QBarDataItem((*_lv_ret)[j]);
        }
        libqt_list _lv_out;
        _lv_out.len = _lv_ret->size();
        _lv_out.data = static_cast<void*>(_lv_arr);
        _arr[i] = _lv_out;
    }
    libqt_list _out;
    _out.len = _ret->size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QBarDataItem* */ QBarDataProxy_RowAt(const QBarDataProxy* self, int rowIndex) {
    const QList<QBarDataItem>* _ret = self->rowAt(static_cast<int>(rowIndex));
    // Convert QList<> from C++ memory to manually-managed C memory
    QBarDataItem** _arr = static_cast<QBarDataItem**>(malloc(sizeof(QBarDataItem*) * (_ret->size())));
    for (qsizetype i = 0; i < _ret->size(); ++i) {
        _arr[i] = new QBarDataItem((*_ret)[i]);
    }
    libqt_list _out;
    _out.len = _ret->size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QBarDataItem* QBarDataProxy_ItemAt(const QBarDataProxy* self, int rowIndex, int columnIndex) {
    return (QBarDataItem*)self->itemAt(static_cast<int>(rowIndex), static_cast<int>(columnIndex));
}

QBarDataItem* QBarDataProxy_ItemAt2(const QBarDataProxy* self, const QPoint* position) {
    return (QBarDataItem*)self->itemAt(*position);
}

void QBarDataProxy_ResetArray(QBarDataProxy* self) {
    self->resetArray();
}

void QBarDataProxy_ResetArray2(QBarDataProxy* self, libqt_list /* of libqt_list of QBarDataItem* */ newArray) {
    QList<QList<QBarDataItem>*>* newArray_QList = new QList<QList<QBarDataItem>*>();
    newArray_QList->reserve(newArray.len);
    libqt_list /* of QBarDataItem* */* newArray_arr = static_cast<libqt_list /* of QBarDataItem* */*>(newArray.data);
    for (size_t i = 0; i < newArray.len; ++i) {
        QList<QBarDataItem>* newArray_arr_i_QList = new QList<QBarDataItem>();
        newArray_arr_i_QList->reserve(newArray_arr[i].len);
        QBarDataItem** newArray_arr_i_arr = static_cast<QBarDataItem**>(newArray_arr[i].data);
        for (size_t j = 0; j < newArray_arr[i].len; ++j) {
            newArray_arr_i_QList->push_back(*(newArray_arr_i_arr[j]));
        }
        newArray_QList->push_back(newArray_arr_i_QList);
    }
    self->resetArray(newArray_QList);
}

void QBarDataProxy_ResetArray3(QBarDataProxy* self, libqt_list /* of libqt_list of QBarDataItem* */ newArray, const libqt_list /* of libqt_string */ rowLabels, const libqt_list /* of libqt_string */ columnLabels) {
    QList<QList<QBarDataItem>*>* newArray_QList = new QList<QList<QBarDataItem>*>();
    newArray_QList->reserve(newArray.len);
    libqt_list /* of QBarDataItem* */* newArray_arr = static_cast<libqt_list /* of QBarDataItem* */*>(newArray.data);
    for (size_t i = 0; i < newArray.len; ++i) {
        QList<QBarDataItem>* newArray_arr_i_QList = new QList<QBarDataItem>();
        newArray_arr_i_QList->reserve(newArray_arr[i].len);
        QBarDataItem** newArray_arr_i_arr = static_cast<QBarDataItem**>(newArray_arr[i].data);
        for (size_t j = 0; j < newArray_arr[i].len; ++j) {
            newArray_arr_i_QList->push_back(*(newArray_arr_i_arr[j]));
        }
        newArray_QList->push_back(newArray_arr_i_QList);
    }
    QList<QString> rowLabels_QList;
    rowLabels_QList.reserve(rowLabels.len);
    libqt_string* rowLabels_arr = static_cast<libqt_string*>(rowLabels.data);
    for (size_t i = 0; i < rowLabels.len; ++i) {
        QString rowLabels_arr_i_QString = QString::fromUtf8(rowLabels_arr[i].data, rowLabels_arr[i].len);
        rowLabels_QList.push_back(rowLabels_arr_i_QString);
    }
    QList<QString> columnLabels_QList;
    columnLabels_QList.reserve(columnLabels.len);
    libqt_string* columnLabels_arr = static_cast<libqt_string*>(columnLabels.data);
    for (size_t i = 0; i < columnLabels.len; ++i) {
        QString columnLabels_arr_i_QString = QString::fromUtf8(columnLabels_arr[i].data, columnLabels_arr[i].len);
        columnLabels_QList.push_back(columnLabels_arr_i_QString);
    }
    self->resetArray(newArray_QList, rowLabels_QList, columnLabels_QList);
}

void QBarDataProxy_SetRow(QBarDataProxy* self, int rowIndex, libqt_list /* of QBarDataItem* */ row) {
    QList<QBarDataItem>* row_QList = new QList<QBarDataItem>();
    row_QList->reserve(row.len);
    QBarDataItem** row_arr = static_cast<QBarDataItem**>(row.data);
    for (size_t i = 0; i < row.len; ++i) {
        row_QList->push_back(*(row_arr[i]));
    }
    self->setRow(static_cast<int>(rowIndex), row_QList);
}

void QBarDataProxy_SetRow2(QBarDataProxy* self, int rowIndex, libqt_list /* of QBarDataItem* */ row, const libqt_string label) {
    QList<QBarDataItem>* row_QList = new QList<QBarDataItem>();
    row_QList->reserve(row.len);
    QBarDataItem** row_arr = static_cast<QBarDataItem**>(row.data);
    for (size_t i = 0; i < row.len; ++i) {
        row_QList->push_back(*(row_arr[i]));
    }
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->setRow(static_cast<int>(rowIndex), row_QList, label_QString);
}

void QBarDataProxy_SetRows(QBarDataProxy* self, int rowIndex, const libqt_list /* of libqt_list of QBarDataItem* */ rows) {
    QList<QList<QBarDataItem>*> rows_QList;
    rows_QList.reserve(rows.len);
    libqt_list /* of QBarDataItem* */* rows_arr = static_cast<libqt_list /* of QBarDataItem* */*>(rows.data);
    for (size_t i = 0; i < rows.len; ++i) {
        QList<QBarDataItem>* rows_arr_i_QList = new QList<QBarDataItem>();
        rows_arr_i_QList->reserve(rows_arr[i].len);
        QBarDataItem** rows_arr_i_arr = static_cast<QBarDataItem**>(rows_arr[i].data);
        for (size_t j = 0; j < rows_arr[i].len; ++j) {
            rows_arr_i_QList->push_back(*(rows_arr_i_arr[j]));
        }
        rows_QList.push_back(rows_arr_i_QList);
    }
    self->setRows(static_cast<int>(rowIndex), rows_QList);
}

void QBarDataProxy_SetRows2(QBarDataProxy* self, int rowIndex, const libqt_list /* of libqt_list of QBarDataItem* */ rows, const libqt_list /* of libqt_string */ labels) {
    QList<QList<QBarDataItem>*> rows_QList;
    rows_QList.reserve(rows.len);
    libqt_list /* of QBarDataItem* */* rows_arr = static_cast<libqt_list /* of QBarDataItem* */*>(rows.data);
    for (size_t i = 0; i < rows.len; ++i) {
        QList<QBarDataItem>* rows_arr_i_QList = new QList<QBarDataItem>();
        rows_arr_i_QList->reserve(rows_arr[i].len);
        QBarDataItem** rows_arr_i_arr = static_cast<QBarDataItem**>(rows_arr[i].data);
        for (size_t j = 0; j < rows_arr[i].len; ++j) {
            rows_arr_i_QList->push_back(*(rows_arr_i_arr[j]));
        }
        rows_QList.push_back(rows_arr_i_QList);
    }
    QList<QString> labels_QList;
    labels_QList.reserve(labels.len);
    libqt_string* labels_arr = static_cast<libqt_string*>(labels.data);
    for (size_t i = 0; i < labels.len; ++i) {
        QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
        labels_QList.push_back(labels_arr_i_QString);
    }
    self->setRows(static_cast<int>(rowIndex), rows_QList, labels_QList);
}

void QBarDataProxy_SetItem(QBarDataProxy* self, int rowIndex, int columnIndex, const QBarDataItem* item) {
    self->setItem(static_cast<int>(rowIndex), static_cast<int>(columnIndex), *item);
}

void QBarDataProxy_SetItem2(QBarDataProxy* self, const QPoint* position, const QBarDataItem* item) {
    self->setItem(*position, *item);
}

int QBarDataProxy_AddRow(QBarDataProxy* self, libqt_list /* of QBarDataItem* */ row) {
    QList<QBarDataItem>* row_QList = new QList<QBarDataItem>();
    row_QList->reserve(row.len);
    QBarDataItem** row_arr = static_cast<QBarDataItem**>(row.data);
    for (size_t i = 0; i < row.len; ++i) {
        row_QList->push_back(*(row_arr[i]));
    }
    return self->addRow(row_QList);
}

int QBarDataProxy_AddRow2(QBarDataProxy* self, libqt_list /* of QBarDataItem* */ row, const libqt_string label) {
    QList<QBarDataItem>* row_QList = new QList<QBarDataItem>();
    row_QList->reserve(row.len);
    QBarDataItem** row_arr = static_cast<QBarDataItem**>(row.data);
    for (size_t i = 0; i < row.len; ++i) {
        row_QList->push_back(*(row_arr[i]));
    }
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return self->addRow(row_QList, label_QString);
}

int QBarDataProxy_AddRows(QBarDataProxy* self, const libqt_list /* of libqt_list of QBarDataItem* */ rows) {
    QList<QList<QBarDataItem>*> rows_QList;
    rows_QList.reserve(rows.len);
    libqt_list /* of QBarDataItem* */* rows_arr = static_cast<libqt_list /* of QBarDataItem* */*>(rows.data);
    for (size_t i = 0; i < rows.len; ++i) {
        QList<QBarDataItem>* rows_arr_i_QList = new QList<QBarDataItem>();
        rows_arr_i_QList->reserve(rows_arr[i].len);
        QBarDataItem** rows_arr_i_arr = static_cast<QBarDataItem**>(rows_arr[i].data);
        for (size_t j = 0; j < rows_arr[i].len; ++j) {
            rows_arr_i_QList->push_back(*(rows_arr_i_arr[j]));
        }
        rows_QList.push_back(rows_arr_i_QList);
    }
    return self->addRows(rows_QList);
}

int QBarDataProxy_AddRows2(QBarDataProxy* self, const libqt_list /* of libqt_list of QBarDataItem* */ rows, const libqt_list /* of libqt_string */ labels) {
    QList<QList<QBarDataItem>*> rows_QList;
    rows_QList.reserve(rows.len);
    libqt_list /* of QBarDataItem* */* rows_arr = static_cast<libqt_list /* of QBarDataItem* */*>(rows.data);
    for (size_t i = 0; i < rows.len; ++i) {
        QList<QBarDataItem>* rows_arr_i_QList = new QList<QBarDataItem>();
        rows_arr_i_QList->reserve(rows_arr[i].len);
        QBarDataItem** rows_arr_i_arr = static_cast<QBarDataItem**>(rows_arr[i].data);
        for (size_t j = 0; j < rows_arr[i].len; ++j) {
            rows_arr_i_QList->push_back(*(rows_arr_i_arr[j]));
        }
        rows_QList.push_back(rows_arr_i_QList);
    }
    QList<QString> labels_QList;
    labels_QList.reserve(labels.len);
    libqt_string* labels_arr = static_cast<libqt_string*>(labels.data);
    for (size_t i = 0; i < labels.len; ++i) {
        QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
        labels_QList.push_back(labels_arr_i_QString);
    }
    return self->addRows(rows_QList, labels_QList);
}

void QBarDataProxy_InsertRow(QBarDataProxy* self, int rowIndex, libqt_list /* of QBarDataItem* */ row) {
    QList<QBarDataItem>* row_QList = new QList<QBarDataItem>();
    row_QList->reserve(row.len);
    QBarDataItem** row_arr = static_cast<QBarDataItem**>(row.data);
    for (size_t i = 0; i < row.len; ++i) {
        row_QList->push_back(*(row_arr[i]));
    }
    self->insertRow(static_cast<int>(rowIndex), row_QList);
}

void QBarDataProxy_InsertRow2(QBarDataProxy* self, int rowIndex, libqt_list /* of QBarDataItem* */ row, const libqt_string label) {
    QList<QBarDataItem>* row_QList = new QList<QBarDataItem>();
    row_QList->reserve(row.len);
    QBarDataItem** row_arr = static_cast<QBarDataItem**>(row.data);
    for (size_t i = 0; i < row.len; ++i) {
        row_QList->push_back(*(row_arr[i]));
    }
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->insertRow(static_cast<int>(rowIndex), row_QList, label_QString);
}

void QBarDataProxy_InsertRows(QBarDataProxy* self, int rowIndex, const libqt_list /* of libqt_list of QBarDataItem* */ rows) {
    QList<QList<QBarDataItem>*> rows_QList;
    rows_QList.reserve(rows.len);
    libqt_list /* of QBarDataItem* */* rows_arr = static_cast<libqt_list /* of QBarDataItem* */*>(rows.data);
    for (size_t i = 0; i < rows.len; ++i) {
        QList<QBarDataItem>* rows_arr_i_QList = new QList<QBarDataItem>();
        rows_arr_i_QList->reserve(rows_arr[i].len);
        QBarDataItem** rows_arr_i_arr = static_cast<QBarDataItem**>(rows_arr[i].data);
        for (size_t j = 0; j < rows_arr[i].len; ++j) {
            rows_arr_i_QList->push_back(*(rows_arr_i_arr[j]));
        }
        rows_QList.push_back(rows_arr_i_QList);
    }
    self->insertRows(static_cast<int>(rowIndex), rows_QList);
}

void QBarDataProxy_InsertRows2(QBarDataProxy* self, int rowIndex, const libqt_list /* of libqt_list of QBarDataItem* */ rows, const libqt_list /* of libqt_string */ labels) {
    QList<QList<QBarDataItem>*> rows_QList;
    rows_QList.reserve(rows.len);
    libqt_list /* of QBarDataItem* */* rows_arr = static_cast<libqt_list /* of QBarDataItem* */*>(rows.data);
    for (size_t i = 0; i < rows.len; ++i) {
        QList<QBarDataItem>* rows_arr_i_QList = new QList<QBarDataItem>();
        rows_arr_i_QList->reserve(rows_arr[i].len);
        QBarDataItem** rows_arr_i_arr = static_cast<QBarDataItem**>(rows_arr[i].data);
        for (size_t j = 0; j < rows_arr[i].len; ++j) {
            rows_arr_i_QList->push_back(*(rows_arr_i_arr[j]));
        }
        rows_QList.push_back(rows_arr_i_QList);
    }
    QList<QString> labels_QList;
    labels_QList.reserve(labels.len);
    libqt_string* labels_arr = static_cast<libqt_string*>(labels.data);
    for (size_t i = 0; i < labels.len; ++i) {
        QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
        labels_QList.push_back(labels_arr_i_QString);
    }
    self->insertRows(static_cast<int>(rowIndex), rows_QList, labels_QList);
}

void QBarDataProxy_RemoveRows(QBarDataProxy* self, int rowIndex, int removeCount) {
    self->removeRows(static_cast<int>(rowIndex), static_cast<int>(removeCount));
}

void QBarDataProxy_ArrayReset(QBarDataProxy* self) {
    self->arrayReset();
}

void QBarDataProxy_Connect_ArrayReset(QBarDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QBarDataProxy*) = reinterpret_cast<void (*)(QBarDataProxy*)>(slot);
    QBarDataProxy::connect(self,
                           static_cast<void (QBarDataProxy::*)()>(&QBarDataProxy::arrayReset),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QBarDataProxy_RowsAdded(QBarDataProxy* self, int startIndex, int count) {
    self->rowsAdded(static_cast<int>(startIndex), static_cast<int>(count));
}

void QBarDataProxy_Connect_RowsAdded(QBarDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QBarDataProxy*, int, int) = reinterpret_cast<void (*)(QBarDataProxy*, int, int)>(slot);
    QBarDataProxy::connect(self,
                           static_cast<void (QBarDataProxy::*)(int, int)>(&QBarDataProxy::rowsAdded),
                           [self, slotFunc](int startIndex, int count) {
                               int sigval1 = startIndex;
                               int sigval2 = count;
                               slotFunc(self, sigval1, sigval2);
                           });
}

void QBarDataProxy_RowsChanged(QBarDataProxy* self, int startIndex, int count) {
    self->rowsChanged(static_cast<int>(startIndex), static_cast<int>(count));
}

void QBarDataProxy_Connect_RowsChanged(QBarDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QBarDataProxy*, int, int) = reinterpret_cast<void (*)(QBarDataProxy*, int, int)>(slot);
    QBarDataProxy::connect(self,
                           static_cast<void (QBarDataProxy::*)(int, int)>(&QBarDataProxy::rowsChanged),
                           [self, slotFunc](int startIndex, int count) {
                               int sigval1 = startIndex;
                               int sigval2 = count;
                               slotFunc(self, sigval1, sigval2);
                           });
}

void QBarDataProxy_RowsRemoved(QBarDataProxy* self, int startIndex, int count) {
    self->rowsRemoved(static_cast<int>(startIndex), static_cast<int>(count));
}

void QBarDataProxy_Connect_RowsRemoved(QBarDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QBarDataProxy*, int, int) = reinterpret_cast<void (*)(QBarDataProxy*, int, int)>(slot);
    QBarDataProxy::connect(self,
                           static_cast<void (QBarDataProxy::*)(int, int)>(&QBarDataProxy::rowsRemoved),
                           [self, slotFunc](int startIndex, int count) {
                               int sigval1 = startIndex;
                               int sigval2 = count;
                               slotFunc(self, sigval1, sigval2);
                           });
}

void QBarDataProxy_RowsInserted(QBarDataProxy* self, int startIndex, int count) {
    self->rowsInserted(static_cast<int>(startIndex), static_cast<int>(count));
}

void QBarDataProxy_Connect_RowsInserted(QBarDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QBarDataProxy*, int, int) = reinterpret_cast<void (*)(QBarDataProxy*, int, int)>(slot);
    QBarDataProxy::connect(self,
                           static_cast<void (QBarDataProxy::*)(int, int)>(&QBarDataProxy::rowsInserted),
                           [self, slotFunc](int startIndex, int count) {
                               int sigval1 = startIndex;
                               int sigval2 = count;
                               slotFunc(self, sigval1, sigval2);
                           });
}

void QBarDataProxy_ItemChanged(QBarDataProxy* self, int rowIndex, int columnIndex) {
    self->itemChanged(static_cast<int>(rowIndex), static_cast<int>(columnIndex));
}

void QBarDataProxy_Connect_ItemChanged(QBarDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QBarDataProxy*, int, int) = reinterpret_cast<void (*)(QBarDataProxy*, int, int)>(slot);
    QBarDataProxy::connect(self,
                           static_cast<void (QBarDataProxy::*)(int, int)>(&QBarDataProxy::itemChanged),
                           [self, slotFunc](int rowIndex, int columnIndex) {
                               int sigval1 = rowIndex;
                               int sigval2 = columnIndex;
                               slotFunc(self, sigval1, sigval2);
                           });
}

void QBarDataProxy_RowCountChanged(QBarDataProxy* self, int count) {
    self->rowCountChanged(static_cast<int>(count));
}

void QBarDataProxy_Connect_RowCountChanged(QBarDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QBarDataProxy*, int) = reinterpret_cast<void (*)(QBarDataProxy*, int)>(slot);
    QBarDataProxy::connect(self,
                           static_cast<void (QBarDataProxy::*)(int)>(&QBarDataProxy::rowCountChanged),
                           [self, slotFunc](int count) {
                               int sigval1 = count;
                               slotFunc(self, sigval1);
                           });
}

void QBarDataProxy_RowLabelsChanged(QBarDataProxy* self) {
    self->rowLabelsChanged();
}

void QBarDataProxy_Connect_RowLabelsChanged(QBarDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QBarDataProxy*) = reinterpret_cast<void (*)(QBarDataProxy*)>(slot);
    QBarDataProxy::connect(self,
                           static_cast<void (QBarDataProxy::*)()>(&QBarDataProxy::rowLabelsChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QBarDataProxy_ColumnLabelsChanged(QBarDataProxy* self) {
    self->columnLabelsChanged();
}

void QBarDataProxy_Connect_ColumnLabelsChanged(QBarDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QBarDataProxy*) = reinterpret_cast<void (*)(QBarDataProxy*)>(slot);
    QBarDataProxy::connect(self,
                           static_cast<void (QBarDataProxy::*)()>(&QBarDataProxy::columnLabelsChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QBarDataProxy_SeriesChanged(QBarDataProxy* self, QBar3DSeries* series) {
    self->seriesChanged(series);
}

void QBarDataProxy_Connect_SeriesChanged(QBarDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QBarDataProxy*, QBar3DSeries*) = reinterpret_cast<void (*)(QBarDataProxy*, QBar3DSeries*)>(slot);
    QBarDataProxy::connect(self,
                           static_cast<void (QBarDataProxy::*)(QBar3DSeries*)>(&QBarDataProxy::seriesChanged),
                           [self, slotFunc](QBar3DSeries* series) {
                               QBar3DSeries* sigval1 = series;
                               slotFunc(self, sigval1);
                           });
}

libqt_string QBarDataProxy_Tr2(const char* s, const char* c) {
    auto _ret = QBarDataProxy::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QBarDataProxy_Tr3(const char* s, const char* c, int n) {
    auto _ret = QBarDataProxy::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QBarDataProxy_RemoveRows3(QBarDataProxy* self, int rowIndex, int removeCount, bool removeLabels) {
    self->removeRows(static_cast<int>(rowIndex), static_cast<int>(removeCount), removeLabels);
}

// Base class handler implementation
QMetaObject* QBarDataProxy_SuperMetaObject(const QBarDataProxy* self) {
    return (QMetaObject*)self->QBarDataProxy::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QBarDataProxy_OnMetaObject(QBarDataProxy* self, intptr_t slot) {
    if (auto* vqbardataproxy = const_cast<VirtualQBarDataProxy*>(dynamic_cast<const VirtualQBarDataProxy*>(self)))
        vqbardataproxy->qbardataproxy_metaobject_callback = reinterpret_cast<VirtualQBarDataProxy::QBarDataProxy_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QBarDataProxy_SuperMetacast(QBarDataProxy* self, const char* param1) {
    return self->QBarDataProxy::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QBarDataProxy_OnMetacast(QBarDataProxy* self, intptr_t slot) {
    if (auto* vqbardataproxy = dynamic_cast<VirtualQBarDataProxy*>(self))
        vqbardataproxy->qbardataproxy_metacast_callback = reinterpret_cast<VirtualQBarDataProxy::QBarDataProxy_Metacast_Callback>(slot);
}

// Base class handler implementation
int QBarDataProxy_SuperMetacall(QBarDataProxy* self, int param1, int param2, void** param3) {
    return self->QBarDataProxy::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QBarDataProxy_OnMetacall(QBarDataProxy* self, intptr_t slot) {
    if (auto* vqbardataproxy = dynamic_cast<VirtualQBarDataProxy*>(self))
        vqbardataproxy->qbardataproxy_metacall_callback = reinterpret_cast<VirtualQBarDataProxy::QBarDataProxy_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QBarDataProxy_Event(QBarDataProxy* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QBarDataProxy_SuperEvent(QBarDataProxy* self, QEvent* event) {
    return self->QBarDataProxy::event(event);
}

// Auxiliary method to allow providing re-implementation
void QBarDataProxy_OnEvent(QBarDataProxy* self, intptr_t slot) {
    if (auto* vqbardataproxy = dynamic_cast<VirtualQBarDataProxy*>(self))
        vqbardataproxy->qbardataproxy_event_callback = reinterpret_cast<VirtualQBarDataProxy::QBarDataProxy_Event_Callback>(slot);
}

// Derived class handler implementation
bool QBarDataProxy_EventFilter(QBarDataProxy* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QBarDataProxy_SuperEventFilter(QBarDataProxy* self, QObject* watched, QEvent* event) {
    return self->QBarDataProxy::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QBarDataProxy_OnEventFilter(QBarDataProxy* self, intptr_t slot) {
    if (auto* vqbardataproxy = dynamic_cast<VirtualQBarDataProxy*>(self))
        vqbardataproxy->qbardataproxy_eventfilter_callback = reinterpret_cast<VirtualQBarDataProxy::QBarDataProxy_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QBarDataProxy_TimerEvent(QBarDataProxy* self, QTimerEvent* event) {
    auto* vqbardataproxy = dynamic_cast<VirtualQBarDataProxy*>(self);
    if (vqbardataproxy) {
        vqbardataproxy->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBarDataProxy::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBarDataProxy_SuperTimerEvent(QBarDataProxy* self, QTimerEvent* event) {
    if (auto* vqbardataproxy = dynamic_cast<VirtualQBarDataProxy*>(self)) {
        vqbardataproxy->QBarDataProxy::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QBarDataProxy::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBarDataProxy_OnTimerEvent(QBarDataProxy* self, intptr_t slot) {
    if (auto* vqbardataproxy = dynamic_cast<VirtualQBarDataProxy*>(self))
        vqbardataproxy->qbardataproxy_timerevent_callback = reinterpret_cast<VirtualQBarDataProxy::QBarDataProxy_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QBarDataProxy_ChildEvent(QBarDataProxy* self, QChildEvent* event) {
    auto* vqbardataproxy = dynamic_cast<VirtualQBarDataProxy*>(self);
    if (vqbardataproxy) {
        vqbardataproxy->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBarDataProxy::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBarDataProxy_SuperChildEvent(QBarDataProxy* self, QChildEvent* event) {
    if (auto* vqbardataproxy = dynamic_cast<VirtualQBarDataProxy*>(self)) {
        vqbardataproxy->QBarDataProxy::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QBarDataProxy::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBarDataProxy_OnChildEvent(QBarDataProxy* self, intptr_t slot) {
    if (auto* vqbardataproxy = dynamic_cast<VirtualQBarDataProxy*>(self))
        vqbardataproxy->qbardataproxy_childevent_callback = reinterpret_cast<VirtualQBarDataProxy::QBarDataProxy_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QBarDataProxy_CustomEvent(QBarDataProxy* self, QEvent* event) {
    auto* vqbardataproxy = dynamic_cast<VirtualQBarDataProxy*>(self);
    if (vqbardataproxy) {
        vqbardataproxy->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBarDataProxy::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBarDataProxy_SuperCustomEvent(QBarDataProxy* self, QEvent* event) {
    if (auto* vqbardataproxy = dynamic_cast<VirtualQBarDataProxy*>(self)) {
        vqbardataproxy->QBarDataProxy::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QBarDataProxy::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBarDataProxy_OnCustomEvent(QBarDataProxy* self, intptr_t slot) {
    if (auto* vqbardataproxy = dynamic_cast<VirtualQBarDataProxy*>(self))
        vqbardataproxy->qbardataproxy_customevent_callback = reinterpret_cast<VirtualQBarDataProxy::QBarDataProxy_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QBarDataProxy_ConnectNotify(QBarDataProxy* self, const QMetaMethod* signal) {
    auto* vqbardataproxy = dynamic_cast<VirtualQBarDataProxy*>(self);
    if (vqbardataproxy) {
        vqbardataproxy->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QBarDataProxy::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QBarDataProxy_SuperConnectNotify(QBarDataProxy* self, const QMetaMethod* signal) {
    if (auto* vqbardataproxy = dynamic_cast<VirtualQBarDataProxy*>(self)) {
        vqbardataproxy->QBarDataProxy::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QBarDataProxy::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBarDataProxy_OnConnectNotify(QBarDataProxy* self, intptr_t slot) {
    if (auto* vqbardataproxy = dynamic_cast<VirtualQBarDataProxy*>(self))
        vqbardataproxy->qbardataproxy_connectnotify_callback = reinterpret_cast<VirtualQBarDataProxy::QBarDataProxy_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QBarDataProxy_DisconnectNotify(QBarDataProxy* self, const QMetaMethod* signal) {
    auto* vqbardataproxy = dynamic_cast<VirtualQBarDataProxy*>(self);
    if (vqbardataproxy) {
        vqbardataproxy->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QBarDataProxy::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QBarDataProxy_SuperDisconnectNotify(QBarDataProxy* self, const QMetaMethod* signal) {
    if (auto* vqbardataproxy = dynamic_cast<VirtualQBarDataProxy*>(self)) {
        vqbardataproxy->QBarDataProxy::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QBarDataProxy::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBarDataProxy_OnDisconnectNotify(QBarDataProxy* self, intptr_t slot) {
    if (auto* vqbardataproxy = dynamic_cast<VirtualQBarDataProxy*>(self))
        vqbardataproxy->qbardataproxy_disconnectnotify_callback = reinterpret_cast<VirtualQBarDataProxy::QBarDataProxy_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QBarDataProxy_Sender(const QBarDataProxy* self) {
    if (auto* vqbardataproxy = const_cast<VirtualQBarDataProxy*>(dynamic_cast<const VirtualQBarDataProxy*>(self))) {
        return vqbardataproxy->VirtualQBarDataProxy::sender();
    } else
        qFatal("Error: Protected method QBarDataProxy::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QBarDataProxy_SenderSignalIndex(const QBarDataProxy* self) {
    if (auto* vqbardataproxy = const_cast<VirtualQBarDataProxy*>(dynamic_cast<const VirtualQBarDataProxy*>(self))) {
        return vqbardataproxy->VirtualQBarDataProxy::senderSignalIndex();
    } else
        qFatal("Error: Protected method QBarDataProxy::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QBarDataProxy_Receivers(const QBarDataProxy* self, const char* signal) {
    if (auto* vqbardataproxy = const_cast<VirtualQBarDataProxy*>(dynamic_cast<const VirtualQBarDataProxy*>(self))) {
        return vqbardataproxy->VirtualQBarDataProxy::receivers(signal);
    } else
        qFatal("Error: Protected method QBarDataProxy::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QBarDataProxy_IsSignalConnected(const QBarDataProxy* self, const QMetaMethod* signal) {
    if (auto* vqbardataproxy = const_cast<VirtualQBarDataProxy*>(dynamic_cast<const VirtualQBarDataProxy*>(self))) {
        return vqbardataproxy->VirtualQBarDataProxy::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QBarDataProxy::isSignalConnected called without a directly constructed type");
}

void QBarDataProxy_Delete(QBarDataProxy* self) {
    delete self;
}
