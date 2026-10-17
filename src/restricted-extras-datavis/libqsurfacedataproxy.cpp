#include <QAbstractDataProxy>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPoint>
#include <QString>
#include <QSurface3DSeries>
#include <QSurfaceDataItem>
#include <QSurfaceDataProxy>
#include <QTimerEvent>
#include <qsurfacedataproxy.h>
#include "libqsurfacedataproxy.h"
#include "libqsurfacedataproxy.hxx"

QSurfaceDataProxy* QSurfaceDataProxy_new() {
    return new VirtualQSurfaceDataProxy();
}

QSurfaceDataProxy* QSurfaceDataProxy_new2(QObject* parent) {
    return new VirtualQSurfaceDataProxy(parent);
}

QMetaObject* QSurfaceDataProxy_MetaObject(const QSurfaceDataProxy* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSurfaceDataProxy_Metacast(QSurfaceDataProxy* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSurfaceDataProxy_Metacall(QSurfaceDataProxy* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSurfaceDataProxy_Tr(const char* s) {
    auto _ret = QSurfaceDataProxy::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSurface3DSeries* QSurfaceDataProxy_Series(const QSurfaceDataProxy* self) {
    return self->series();
}

int QSurfaceDataProxy_RowCount(const QSurfaceDataProxy* self) {
    return self->rowCount();
}

int QSurfaceDataProxy_ColumnCount(const QSurfaceDataProxy* self) {
    return self->columnCount();
}

libqt_list /* of libqt_list of QSurfaceDataItem* */ QSurfaceDataProxy_Array(const QSurfaceDataProxy* self) {
    const QList<QList<QSurfaceDataItem>*>* _ret = self->array();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_list /* of QSurfaceDataItem* */* _arr = static_cast<libqt_list /* of QSurfaceDataItem* */*>(malloc(sizeof(libqt_list /* of QSurfaceDataItem* */) * (_ret->size())));
    for (qsizetype i = 0; i < _ret->size(); ++i) {
        const QList<QSurfaceDataItem>* _lv_ret = (*_ret)[i];
        // Convert QList<> from C++ memory to manually-managed C memory
        QSurfaceDataItem** _lv_arr = static_cast<QSurfaceDataItem**>(malloc(sizeof(QSurfaceDataItem*) * (_lv_ret->size())));
        for (qsizetype j = 0; j < _lv_ret->size(); ++j) {
            _lv_arr[j] = new QSurfaceDataItem((*_lv_ret)[j]);
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

QSurfaceDataItem* QSurfaceDataProxy_ItemAt(const QSurfaceDataProxy* self, int rowIndex, int columnIndex) {
    return (QSurfaceDataItem*)self->itemAt(static_cast<int>(rowIndex), static_cast<int>(columnIndex));
}

QSurfaceDataItem* QSurfaceDataProxy_ItemAt2(const QSurfaceDataProxy* self, const QPoint* position) {
    return (QSurfaceDataItem*)self->itemAt(*position);
}

void QSurfaceDataProxy_ResetArray(QSurfaceDataProxy* self, libqt_list /* of libqt_list of QSurfaceDataItem* */ newArray) {
    QList<QList<QSurfaceDataItem>*>* newArray_QList = new QList<QList<QSurfaceDataItem>*>();
    newArray_QList->reserve(newArray.len);
    libqt_list /* of QSurfaceDataItem* */* newArray_arr = static_cast<libqt_list /* of QSurfaceDataItem* */*>(newArray.data);
    for (size_t i = 0; i < newArray.len; ++i) {
        QList<QSurfaceDataItem>* newArray_arr_i_QList = new QList<QSurfaceDataItem>();
        newArray_arr_i_QList->reserve(newArray_arr[i].len);
        QSurfaceDataItem** newArray_arr_i_arr = static_cast<QSurfaceDataItem**>(newArray_arr[i].data);
        for (size_t j = 0; j < newArray_arr[i].len; ++j) {
            newArray_arr_i_QList->push_back(*(newArray_arr_i_arr[j]));
        }
        newArray_QList->push_back(newArray_arr_i_QList);
    }
    self->resetArray(newArray_QList);
}

void QSurfaceDataProxy_SetRow(QSurfaceDataProxy* self, int rowIndex, libqt_list /* of QSurfaceDataItem* */ row) {
    QList<QSurfaceDataItem>* row_QList = new QList<QSurfaceDataItem>();
    row_QList->reserve(row.len);
    QSurfaceDataItem** row_arr = static_cast<QSurfaceDataItem**>(row.data);
    for (size_t i = 0; i < row.len; ++i) {
        row_QList->push_back(*(row_arr[i]));
    }
    self->setRow(static_cast<int>(rowIndex), row_QList);
}

void QSurfaceDataProxy_SetRows(QSurfaceDataProxy* self, int rowIndex, const libqt_list /* of libqt_list of QSurfaceDataItem* */ rows) {
    QList<QList<QSurfaceDataItem>*> rows_QList;
    rows_QList.reserve(rows.len);
    libqt_list /* of QSurfaceDataItem* */* rows_arr = static_cast<libqt_list /* of QSurfaceDataItem* */*>(rows.data);
    for (size_t i = 0; i < rows.len; ++i) {
        QList<QSurfaceDataItem>* rows_arr_i_QList = new QList<QSurfaceDataItem>();
        rows_arr_i_QList->reserve(rows_arr[i].len);
        QSurfaceDataItem** rows_arr_i_arr = static_cast<QSurfaceDataItem**>(rows_arr[i].data);
        for (size_t j = 0; j < rows_arr[i].len; ++j) {
            rows_arr_i_QList->push_back(*(rows_arr_i_arr[j]));
        }
        rows_QList.push_back(rows_arr_i_QList);
    }
    self->setRows(static_cast<int>(rowIndex), rows_QList);
}

void QSurfaceDataProxy_SetItem(QSurfaceDataProxy* self, int rowIndex, int columnIndex, const QSurfaceDataItem* item) {
    self->setItem(static_cast<int>(rowIndex), static_cast<int>(columnIndex), *item);
}

void QSurfaceDataProxy_SetItem2(QSurfaceDataProxy* self, const QPoint* position, const QSurfaceDataItem* item) {
    self->setItem(*position, *item);
}

int QSurfaceDataProxy_AddRow(QSurfaceDataProxy* self, libqt_list /* of QSurfaceDataItem* */ row) {
    QList<QSurfaceDataItem>* row_QList = new QList<QSurfaceDataItem>();
    row_QList->reserve(row.len);
    QSurfaceDataItem** row_arr = static_cast<QSurfaceDataItem**>(row.data);
    for (size_t i = 0; i < row.len; ++i) {
        row_QList->push_back(*(row_arr[i]));
    }
    return self->addRow(row_QList);
}

int QSurfaceDataProxy_AddRows(QSurfaceDataProxy* self, const libqt_list /* of libqt_list of QSurfaceDataItem* */ rows) {
    QList<QList<QSurfaceDataItem>*> rows_QList;
    rows_QList.reserve(rows.len);
    libqt_list /* of QSurfaceDataItem* */* rows_arr = static_cast<libqt_list /* of QSurfaceDataItem* */*>(rows.data);
    for (size_t i = 0; i < rows.len; ++i) {
        QList<QSurfaceDataItem>* rows_arr_i_QList = new QList<QSurfaceDataItem>();
        rows_arr_i_QList->reserve(rows_arr[i].len);
        QSurfaceDataItem** rows_arr_i_arr = static_cast<QSurfaceDataItem**>(rows_arr[i].data);
        for (size_t j = 0; j < rows_arr[i].len; ++j) {
            rows_arr_i_QList->push_back(*(rows_arr_i_arr[j]));
        }
        rows_QList.push_back(rows_arr_i_QList);
    }
    return self->addRows(rows_QList);
}

void QSurfaceDataProxy_InsertRow(QSurfaceDataProxy* self, int rowIndex, libqt_list /* of QSurfaceDataItem* */ row) {
    QList<QSurfaceDataItem>* row_QList = new QList<QSurfaceDataItem>();
    row_QList->reserve(row.len);
    QSurfaceDataItem** row_arr = static_cast<QSurfaceDataItem**>(row.data);
    for (size_t i = 0; i < row.len; ++i) {
        row_QList->push_back(*(row_arr[i]));
    }
    self->insertRow(static_cast<int>(rowIndex), row_QList);
}

void QSurfaceDataProxy_InsertRows(QSurfaceDataProxy* self, int rowIndex, const libqt_list /* of libqt_list of QSurfaceDataItem* */ rows) {
    QList<QList<QSurfaceDataItem>*> rows_QList;
    rows_QList.reserve(rows.len);
    libqt_list /* of QSurfaceDataItem* */* rows_arr = static_cast<libqt_list /* of QSurfaceDataItem* */*>(rows.data);
    for (size_t i = 0; i < rows.len; ++i) {
        QList<QSurfaceDataItem>* rows_arr_i_QList = new QList<QSurfaceDataItem>();
        rows_arr_i_QList->reserve(rows_arr[i].len);
        QSurfaceDataItem** rows_arr_i_arr = static_cast<QSurfaceDataItem**>(rows_arr[i].data);
        for (size_t j = 0; j < rows_arr[i].len; ++j) {
            rows_arr_i_QList->push_back(*(rows_arr_i_arr[j]));
        }
        rows_QList.push_back(rows_arr_i_QList);
    }
    self->insertRows(static_cast<int>(rowIndex), rows_QList);
}

void QSurfaceDataProxy_RemoveRows(QSurfaceDataProxy* self, int rowIndex, int removeCount) {
    self->removeRows(static_cast<int>(rowIndex), static_cast<int>(removeCount));
}

void QSurfaceDataProxy_ArrayReset(QSurfaceDataProxy* self) {
    self->arrayReset();
}

void QSurfaceDataProxy_Connect_ArrayReset(QSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QSurfaceDataProxy*) = reinterpret_cast<void (*)(QSurfaceDataProxy*)>(slot);
    QSurfaceDataProxy::connect(self,
                               static_cast<void (QSurfaceDataProxy::*)()>(&QSurfaceDataProxy::arrayReset),
                               [self, slotFunc]() {
                                   slotFunc(self);
                               });
}

void QSurfaceDataProxy_RowsAdded(QSurfaceDataProxy* self, int startIndex, int count) {
    self->rowsAdded(static_cast<int>(startIndex), static_cast<int>(count));
}

void QSurfaceDataProxy_Connect_RowsAdded(QSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QSurfaceDataProxy*, int, int) = reinterpret_cast<void (*)(QSurfaceDataProxy*, int, int)>(slot);
    QSurfaceDataProxy::connect(self,
                               static_cast<void (QSurfaceDataProxy::*)(int, int)>(&QSurfaceDataProxy::rowsAdded),
                               [self, slotFunc](int startIndex, int count) {
                                   int sigval1 = startIndex;
                                   int sigval2 = count;
                                   slotFunc(self, sigval1, sigval2);
                               });
}

void QSurfaceDataProxy_RowsChanged(QSurfaceDataProxy* self, int startIndex, int count) {
    self->rowsChanged(static_cast<int>(startIndex), static_cast<int>(count));
}

void QSurfaceDataProxy_Connect_RowsChanged(QSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QSurfaceDataProxy*, int, int) = reinterpret_cast<void (*)(QSurfaceDataProxy*, int, int)>(slot);
    QSurfaceDataProxy::connect(self,
                               static_cast<void (QSurfaceDataProxy::*)(int, int)>(&QSurfaceDataProxy::rowsChanged),
                               [self, slotFunc](int startIndex, int count) {
                                   int sigval1 = startIndex;
                                   int sigval2 = count;
                                   slotFunc(self, sigval1, sigval2);
                               });
}

void QSurfaceDataProxy_RowsRemoved(QSurfaceDataProxy* self, int startIndex, int count) {
    self->rowsRemoved(static_cast<int>(startIndex), static_cast<int>(count));
}

void QSurfaceDataProxy_Connect_RowsRemoved(QSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QSurfaceDataProxy*, int, int) = reinterpret_cast<void (*)(QSurfaceDataProxy*, int, int)>(slot);
    QSurfaceDataProxy::connect(self,
                               static_cast<void (QSurfaceDataProxy::*)(int, int)>(&QSurfaceDataProxy::rowsRemoved),
                               [self, slotFunc](int startIndex, int count) {
                                   int sigval1 = startIndex;
                                   int sigval2 = count;
                                   slotFunc(self, sigval1, sigval2);
                               });
}

void QSurfaceDataProxy_RowsInserted(QSurfaceDataProxy* self, int startIndex, int count) {
    self->rowsInserted(static_cast<int>(startIndex), static_cast<int>(count));
}

void QSurfaceDataProxy_Connect_RowsInserted(QSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QSurfaceDataProxy*, int, int) = reinterpret_cast<void (*)(QSurfaceDataProxy*, int, int)>(slot);
    QSurfaceDataProxy::connect(self,
                               static_cast<void (QSurfaceDataProxy::*)(int, int)>(&QSurfaceDataProxy::rowsInserted),
                               [self, slotFunc](int startIndex, int count) {
                                   int sigval1 = startIndex;
                                   int sigval2 = count;
                                   slotFunc(self, sigval1, sigval2);
                               });
}

void QSurfaceDataProxy_ItemChanged(QSurfaceDataProxy* self, int rowIndex, int columnIndex) {
    self->itemChanged(static_cast<int>(rowIndex), static_cast<int>(columnIndex));
}

void QSurfaceDataProxy_Connect_ItemChanged(QSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QSurfaceDataProxy*, int, int) = reinterpret_cast<void (*)(QSurfaceDataProxy*, int, int)>(slot);
    QSurfaceDataProxy::connect(self,
                               static_cast<void (QSurfaceDataProxy::*)(int, int)>(&QSurfaceDataProxy::itemChanged),
                               [self, slotFunc](int rowIndex, int columnIndex) {
                                   int sigval1 = rowIndex;
                                   int sigval2 = columnIndex;
                                   slotFunc(self, sigval1, sigval2);
                               });
}

void QSurfaceDataProxy_RowCountChanged(QSurfaceDataProxy* self, int count) {
    self->rowCountChanged(static_cast<int>(count));
}

void QSurfaceDataProxy_Connect_RowCountChanged(QSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QSurfaceDataProxy*, int) = reinterpret_cast<void (*)(QSurfaceDataProxy*, int)>(slot);
    QSurfaceDataProxy::connect(self,
                               static_cast<void (QSurfaceDataProxy::*)(int)>(&QSurfaceDataProxy::rowCountChanged),
                               [self, slotFunc](int count) {
                                   int sigval1 = count;
                                   slotFunc(self, sigval1);
                               });
}

void QSurfaceDataProxy_ColumnCountChanged(QSurfaceDataProxy* self, int count) {
    self->columnCountChanged(static_cast<int>(count));
}

void QSurfaceDataProxy_Connect_ColumnCountChanged(QSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QSurfaceDataProxy*, int) = reinterpret_cast<void (*)(QSurfaceDataProxy*, int)>(slot);
    QSurfaceDataProxy::connect(self,
                               static_cast<void (QSurfaceDataProxy::*)(int)>(&QSurfaceDataProxy::columnCountChanged),
                               [self, slotFunc](int count) {
                                   int sigval1 = count;
                                   slotFunc(self, sigval1);
                               });
}

void QSurfaceDataProxy_SeriesChanged(QSurfaceDataProxy* self, QSurface3DSeries* series) {
    self->seriesChanged(series);
}

void QSurfaceDataProxy_Connect_SeriesChanged(QSurfaceDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QSurfaceDataProxy*, QSurface3DSeries*) = reinterpret_cast<void (*)(QSurfaceDataProxy*, QSurface3DSeries*)>(slot);
    QSurfaceDataProxy::connect(self,
                               static_cast<void (QSurfaceDataProxy::*)(QSurface3DSeries*)>(&QSurfaceDataProxy::seriesChanged),
                               [self, slotFunc](QSurface3DSeries* series) {
                                   QSurface3DSeries* sigval1 = series;
                                   slotFunc(self, sigval1);
                               });
}

libqt_string QSurfaceDataProxy_Tr2(const char* s, const char* c) {
    auto _ret = QSurfaceDataProxy::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSurfaceDataProxy_Tr3(const char* s, const char* c, int n) {
    auto _ret = QSurfaceDataProxy::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
QMetaObject* QSurfaceDataProxy_SuperMetaObject(const QSurfaceDataProxy* self) {
    return (QMetaObject*)self->QSurfaceDataProxy::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSurfaceDataProxy_OnMetaObject(QSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqsurfacedataproxy = const_cast<VirtualQSurfaceDataProxy*>(dynamic_cast<const VirtualQSurfaceDataProxy*>(self)))
        vqsurfacedataproxy->qsurfacedataproxy_metaobject_callback = reinterpret_cast<VirtualQSurfaceDataProxy::QSurfaceDataProxy_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSurfaceDataProxy_SuperMetacast(QSurfaceDataProxy* self, const char* param1) {
    return self->QSurfaceDataProxy::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSurfaceDataProxy_OnMetacast(QSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqsurfacedataproxy = dynamic_cast<VirtualQSurfaceDataProxy*>(self))
        vqsurfacedataproxy->qsurfacedataproxy_metacast_callback = reinterpret_cast<VirtualQSurfaceDataProxy::QSurfaceDataProxy_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSurfaceDataProxy_SuperMetacall(QSurfaceDataProxy* self, int param1, int param2, void** param3) {
    return self->QSurfaceDataProxy::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSurfaceDataProxy_OnMetacall(QSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqsurfacedataproxy = dynamic_cast<VirtualQSurfaceDataProxy*>(self))
        vqsurfacedataproxy->qsurfacedataproxy_metacall_callback = reinterpret_cast<VirtualQSurfaceDataProxy::QSurfaceDataProxy_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QSurfaceDataProxy_Event(QSurfaceDataProxy* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QSurfaceDataProxy_SuperEvent(QSurfaceDataProxy* self, QEvent* event) {
    return self->QSurfaceDataProxy::event(event);
}

// Auxiliary method to allow providing re-implementation
void QSurfaceDataProxy_OnEvent(QSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqsurfacedataproxy = dynamic_cast<VirtualQSurfaceDataProxy*>(self))
        vqsurfacedataproxy->qsurfacedataproxy_event_callback = reinterpret_cast<VirtualQSurfaceDataProxy::QSurfaceDataProxy_Event_Callback>(slot);
}

// Derived class handler implementation
bool QSurfaceDataProxy_EventFilter(QSurfaceDataProxy* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSurfaceDataProxy_SuperEventFilter(QSurfaceDataProxy* self, QObject* watched, QEvent* event) {
    return self->QSurfaceDataProxy::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSurfaceDataProxy_OnEventFilter(QSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqsurfacedataproxy = dynamic_cast<VirtualQSurfaceDataProxy*>(self))
        vqsurfacedataproxy->qsurfacedataproxy_eventfilter_callback = reinterpret_cast<VirtualQSurfaceDataProxy::QSurfaceDataProxy_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSurfaceDataProxy_TimerEvent(QSurfaceDataProxy* self, QTimerEvent* event) {
    auto* vqsurfacedataproxy = dynamic_cast<VirtualQSurfaceDataProxy*>(self);
    if (vqsurfacedataproxy) {
        vqsurfacedataproxy->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSurfaceDataProxy::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSurfaceDataProxy_SuperTimerEvent(QSurfaceDataProxy* self, QTimerEvent* event) {
    if (auto* vqsurfacedataproxy = dynamic_cast<VirtualQSurfaceDataProxy*>(self)) {
        vqsurfacedataproxy->QSurfaceDataProxy::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSurfaceDataProxy::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSurfaceDataProxy_OnTimerEvent(QSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqsurfacedataproxy = dynamic_cast<VirtualQSurfaceDataProxy*>(self))
        vqsurfacedataproxy->qsurfacedataproxy_timerevent_callback = reinterpret_cast<VirtualQSurfaceDataProxy::QSurfaceDataProxy_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSurfaceDataProxy_ChildEvent(QSurfaceDataProxy* self, QChildEvent* event) {
    auto* vqsurfacedataproxy = dynamic_cast<VirtualQSurfaceDataProxy*>(self);
    if (vqsurfacedataproxy) {
        vqsurfacedataproxy->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSurfaceDataProxy::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSurfaceDataProxy_SuperChildEvent(QSurfaceDataProxy* self, QChildEvent* event) {
    if (auto* vqsurfacedataproxy = dynamic_cast<VirtualQSurfaceDataProxy*>(self)) {
        vqsurfacedataproxy->QSurfaceDataProxy::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSurfaceDataProxy::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSurfaceDataProxy_OnChildEvent(QSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqsurfacedataproxy = dynamic_cast<VirtualQSurfaceDataProxy*>(self))
        vqsurfacedataproxy->qsurfacedataproxy_childevent_callback = reinterpret_cast<VirtualQSurfaceDataProxy::QSurfaceDataProxy_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSurfaceDataProxy_CustomEvent(QSurfaceDataProxy* self, QEvent* event) {
    auto* vqsurfacedataproxy = dynamic_cast<VirtualQSurfaceDataProxy*>(self);
    if (vqsurfacedataproxy) {
        vqsurfacedataproxy->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSurfaceDataProxy::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSurfaceDataProxy_SuperCustomEvent(QSurfaceDataProxy* self, QEvent* event) {
    if (auto* vqsurfacedataproxy = dynamic_cast<VirtualQSurfaceDataProxy*>(self)) {
        vqsurfacedataproxy->QSurfaceDataProxy::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSurfaceDataProxy::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSurfaceDataProxy_OnCustomEvent(QSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqsurfacedataproxy = dynamic_cast<VirtualQSurfaceDataProxy*>(self))
        vqsurfacedataproxy->qsurfacedataproxy_customevent_callback = reinterpret_cast<VirtualQSurfaceDataProxy::QSurfaceDataProxy_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSurfaceDataProxy_ConnectNotify(QSurfaceDataProxy* self, const QMetaMethod* signal) {
    auto* vqsurfacedataproxy = dynamic_cast<VirtualQSurfaceDataProxy*>(self);
    if (vqsurfacedataproxy) {
        vqsurfacedataproxy->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSurfaceDataProxy::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSurfaceDataProxy_SuperConnectNotify(QSurfaceDataProxy* self, const QMetaMethod* signal) {
    if (auto* vqsurfacedataproxy = dynamic_cast<VirtualQSurfaceDataProxy*>(self)) {
        vqsurfacedataproxy->QSurfaceDataProxy::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSurfaceDataProxy::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSurfaceDataProxy_OnConnectNotify(QSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqsurfacedataproxy = dynamic_cast<VirtualQSurfaceDataProxy*>(self))
        vqsurfacedataproxy->qsurfacedataproxy_connectnotify_callback = reinterpret_cast<VirtualQSurfaceDataProxy::QSurfaceDataProxy_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSurfaceDataProxy_DisconnectNotify(QSurfaceDataProxy* self, const QMetaMethod* signal) {
    auto* vqsurfacedataproxy = dynamic_cast<VirtualQSurfaceDataProxy*>(self);
    if (vqsurfacedataproxy) {
        vqsurfacedataproxy->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSurfaceDataProxy::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSurfaceDataProxy_SuperDisconnectNotify(QSurfaceDataProxy* self, const QMetaMethod* signal) {
    if (auto* vqsurfacedataproxy = dynamic_cast<VirtualQSurfaceDataProxy*>(self)) {
        vqsurfacedataproxy->QSurfaceDataProxy::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSurfaceDataProxy::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSurfaceDataProxy_OnDisconnectNotify(QSurfaceDataProxy* self, intptr_t slot) {
    if (auto* vqsurfacedataproxy = dynamic_cast<VirtualQSurfaceDataProxy*>(self))
        vqsurfacedataproxy->qsurfacedataproxy_disconnectnotify_callback = reinterpret_cast<VirtualQSurfaceDataProxy::QSurfaceDataProxy_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QSurfaceDataProxy_Sender(const QSurfaceDataProxy* self) {
    if (auto* vqsurfacedataproxy = const_cast<VirtualQSurfaceDataProxy*>(dynamic_cast<const VirtualQSurfaceDataProxy*>(self))) {
        return vqsurfacedataproxy->VirtualQSurfaceDataProxy::sender();
    } else
        qFatal("Error: Protected method QSurfaceDataProxy::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSurfaceDataProxy_SenderSignalIndex(const QSurfaceDataProxy* self) {
    if (auto* vqsurfacedataproxy = const_cast<VirtualQSurfaceDataProxy*>(dynamic_cast<const VirtualQSurfaceDataProxy*>(self))) {
        return vqsurfacedataproxy->VirtualQSurfaceDataProxy::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSurfaceDataProxy::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSurfaceDataProxy_Receivers(const QSurfaceDataProxy* self, const char* signal) {
    if (auto* vqsurfacedataproxy = const_cast<VirtualQSurfaceDataProxy*>(dynamic_cast<const VirtualQSurfaceDataProxy*>(self))) {
        return vqsurfacedataproxy->VirtualQSurfaceDataProxy::receivers(signal);
    } else
        qFatal("Error: Protected method QSurfaceDataProxy::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSurfaceDataProxy_IsSignalConnected(const QSurfaceDataProxy* self, const QMetaMethod* signal) {
    if (auto* vqsurfacedataproxy = const_cast<VirtualQSurfaceDataProxy*>(dynamic_cast<const VirtualQSurfaceDataProxy*>(self))) {
        return vqsurfacedataproxy->VirtualQSurfaceDataProxy::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSurfaceDataProxy::isSignalConnected called without a directly constructed type");
}

void QSurfaceDataProxy_Delete(QSurfaceDataProxy* self) {
    delete self;
}
