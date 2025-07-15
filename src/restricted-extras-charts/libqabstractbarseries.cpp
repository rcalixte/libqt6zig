#include <QAbstractBarSeries>
#include <QAbstractSeries>
#include <QBarSet>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qabstractbarseries.h>
#include "libqabstractbarseries.h"
#include "libqabstractbarseries.hxx"

QMetaObject* QAbstractBarSeries_MetaObject(const QAbstractBarSeries* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractBarSeries_Metacast(QAbstractBarSeries* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractBarSeries_Metacall(QAbstractBarSeries* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAbstractBarSeries_Tr(const char* s) {
    QString _ret = QAbstractBarSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstractBarSeries_SetBarWidth(QAbstractBarSeries* self, double width) {
    self->setBarWidth(static_cast<qreal>(width));
}

double QAbstractBarSeries_BarWidth(const QAbstractBarSeries* self) {
    return static_cast<double>(self->barWidth());
}

bool QAbstractBarSeries_Append(QAbstractBarSeries* self, QBarSet* set) {
    return self->append(set);
}

bool QAbstractBarSeries_Remove(QAbstractBarSeries* self, QBarSet* set) {
    return self->remove(set);
}

bool QAbstractBarSeries_Take(QAbstractBarSeries* self, QBarSet* set) {
    return self->take(set);
}

bool QAbstractBarSeries_Append2(QAbstractBarSeries* self, const libqt_list /* of QBarSet* */ sets) {
    QList<QBarSet*> sets_QList;
    sets_QList.reserve(sets.len);
    QBarSet** sets_arr = static_cast<QBarSet**>(sets.data);
    for (size_t i = 0; i < sets.len; ++i) {
        sets_QList.push_back(sets_arr[i]);
    }
    return self->append(sets_QList);
}

bool QAbstractBarSeries_Insert(QAbstractBarSeries* self, int index, QBarSet* set) {
    return self->insert(static_cast<int>(index), set);
}

int QAbstractBarSeries_Count(const QAbstractBarSeries* self) {
    return self->count();
}

libqt_list /* of QBarSet* */ QAbstractBarSeries_BarSets(const QAbstractBarSeries* self) {
    QList<QBarSet*> _ret = self->barSets();
    // Convert QList<> from C++ memory to manually-managed C memory
    QBarSet** _arr = static_cast<QBarSet**>(malloc(sizeof(QBarSet*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QAbstractBarSeries_Clear(QAbstractBarSeries* self) {
    self->clear();
}

void QAbstractBarSeries_SetLabelsVisible(QAbstractBarSeries* self) {
    self->setLabelsVisible();
}

bool QAbstractBarSeries_IsLabelsVisible(const QAbstractBarSeries* self) {
    return self->isLabelsVisible();
}

void QAbstractBarSeries_SetLabelsFormat(QAbstractBarSeries* self, const libqt_string format) {
    QString format_QString = QString::fromUtf8(format.data, format.len);
    self->setLabelsFormat(format_QString);
}

libqt_string QAbstractBarSeries_LabelsFormat(const QAbstractBarSeries* self) {
    QString _ret = self->labelsFormat();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstractBarSeries_SetLabelsAngle(QAbstractBarSeries* self, double angle) {
    self->setLabelsAngle(static_cast<qreal>(angle));
}

double QAbstractBarSeries_LabelsAngle(const QAbstractBarSeries* self) {
    return static_cast<double>(self->labelsAngle());
}

void QAbstractBarSeries_SetLabelsPosition(QAbstractBarSeries* self, int position) {
    self->setLabelsPosition(static_cast<QAbstractBarSeries::LabelsPosition>(position));
}

int QAbstractBarSeries_LabelsPosition(const QAbstractBarSeries* self) {
    return static_cast<int>(self->labelsPosition());
}

void QAbstractBarSeries_SetLabelsPrecision(QAbstractBarSeries* self, int precision) {
    self->setLabelsPrecision(static_cast<int>(precision));
}

int QAbstractBarSeries_LabelsPrecision(const QAbstractBarSeries* self) {
    return self->labelsPrecision();
}

void QAbstractBarSeries_Clicked(QAbstractBarSeries* self, int index, QBarSet* barset) {
    self->clicked(static_cast<int>(index), barset);
}

void QAbstractBarSeries_Connect_Clicked(QAbstractBarSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractBarSeries*, int, QBarSet*) = reinterpret_cast<void (*)(QAbstractBarSeries*, int, QBarSet*)>(slot);
    QAbstractBarSeries::connect(self, &QAbstractBarSeries::clicked, [self, slotFunc](int index, QBarSet* barset) {
        int sigval1 = index;
        QBarSet* sigval2 = barset;
        slotFunc(self, sigval1, sigval2);
    });
}

void QAbstractBarSeries_Hovered(QAbstractBarSeries* self, bool status, int index, QBarSet* barset) {
    self->hovered(status, static_cast<int>(index), barset);
}

void QAbstractBarSeries_Connect_Hovered(QAbstractBarSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractBarSeries*, bool, int, QBarSet*) = reinterpret_cast<void (*)(QAbstractBarSeries*, bool, int, QBarSet*)>(slot);
    QAbstractBarSeries::connect(self, &QAbstractBarSeries::hovered, [self, slotFunc](bool status, int index, QBarSet* barset) {
        bool sigval1 = status;
        int sigval2 = index;
        QBarSet* sigval3 = barset;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QAbstractBarSeries_Pressed(QAbstractBarSeries* self, int index, QBarSet* barset) {
    self->pressed(static_cast<int>(index), barset);
}

void QAbstractBarSeries_Connect_Pressed(QAbstractBarSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractBarSeries*, int, QBarSet*) = reinterpret_cast<void (*)(QAbstractBarSeries*, int, QBarSet*)>(slot);
    QAbstractBarSeries::connect(self, &QAbstractBarSeries::pressed, [self, slotFunc](int index, QBarSet* barset) {
        int sigval1 = index;
        QBarSet* sigval2 = barset;
        slotFunc(self, sigval1, sigval2);
    });
}

void QAbstractBarSeries_Released(QAbstractBarSeries* self, int index, QBarSet* barset) {
    self->released(static_cast<int>(index), barset);
}

void QAbstractBarSeries_Connect_Released(QAbstractBarSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractBarSeries*, int, QBarSet*) = reinterpret_cast<void (*)(QAbstractBarSeries*, int, QBarSet*)>(slot);
    QAbstractBarSeries::connect(self, &QAbstractBarSeries::released, [self, slotFunc](int index, QBarSet* barset) {
        int sigval1 = index;
        QBarSet* sigval2 = barset;
        slotFunc(self, sigval1, sigval2);
    });
}

void QAbstractBarSeries_DoubleClicked(QAbstractBarSeries* self, int index, QBarSet* barset) {
    self->doubleClicked(static_cast<int>(index), barset);
}

void QAbstractBarSeries_Connect_DoubleClicked(QAbstractBarSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractBarSeries*, int, QBarSet*) = reinterpret_cast<void (*)(QAbstractBarSeries*, int, QBarSet*)>(slot);
    QAbstractBarSeries::connect(self, &QAbstractBarSeries::doubleClicked, [self, slotFunc](int index, QBarSet* barset) {
        int sigval1 = index;
        QBarSet* sigval2 = barset;
        slotFunc(self, sigval1, sigval2);
    });
}

void QAbstractBarSeries_CountChanged(QAbstractBarSeries* self) {
    self->countChanged();
}

void QAbstractBarSeries_Connect_CountChanged(QAbstractBarSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractBarSeries*) = reinterpret_cast<void (*)(QAbstractBarSeries*)>(slot);
    QAbstractBarSeries::connect(self, &QAbstractBarSeries::countChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractBarSeries_LabelsVisibleChanged(QAbstractBarSeries* self) {
    self->labelsVisibleChanged();
}

void QAbstractBarSeries_Connect_LabelsVisibleChanged(QAbstractBarSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractBarSeries*) = reinterpret_cast<void (*)(QAbstractBarSeries*)>(slot);
    QAbstractBarSeries::connect(self, &QAbstractBarSeries::labelsVisibleChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractBarSeries_LabelsFormatChanged(QAbstractBarSeries* self, const libqt_string format) {
    QString format_QString = QString::fromUtf8(format.data, format.len);
    self->labelsFormatChanged(format_QString);
}

void QAbstractBarSeries_Connect_LabelsFormatChanged(QAbstractBarSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractBarSeries*, libqt_string) = reinterpret_cast<void (*)(QAbstractBarSeries*, libqt_string)>(slot);
    QAbstractBarSeries::connect(self, &QAbstractBarSeries::labelsFormatChanged, [self, slotFunc](const QString& format) {
        const QString format_ret = format;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray format_b = format_ret.toUtf8();
        libqt_string format_str;
        format_str.len = format_b.length();
        format_str.data = static_cast<const char*>(malloc((format_str.len + 1) * sizeof(char)));
        memcpy((void*)format_str.data, format_b.data(), format_str.len);
        ((char*)format_str.data)[format_str.len] = '\0';
        libqt_string sigval1 = format_str;
        slotFunc(self, sigval1);
    });
}

void QAbstractBarSeries_LabelsPositionChanged(QAbstractBarSeries* self, int position) {
    self->labelsPositionChanged(static_cast<QAbstractBarSeries::LabelsPosition>(position));
}

void QAbstractBarSeries_Connect_LabelsPositionChanged(QAbstractBarSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractBarSeries*, int) = reinterpret_cast<void (*)(QAbstractBarSeries*, int)>(slot);
    QAbstractBarSeries::connect(self, &QAbstractBarSeries::labelsPositionChanged, [self, slotFunc](QAbstractBarSeries::LabelsPosition position) {
        int sigval1 = static_cast<int>(position);
        slotFunc(self, sigval1);
    });
}

void QAbstractBarSeries_LabelsAngleChanged(QAbstractBarSeries* self, double angle) {
    self->labelsAngleChanged(static_cast<qreal>(angle));
}

void QAbstractBarSeries_Connect_LabelsAngleChanged(QAbstractBarSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractBarSeries*, double) = reinterpret_cast<void (*)(QAbstractBarSeries*, double)>(slot);
    QAbstractBarSeries::connect(self, &QAbstractBarSeries::labelsAngleChanged, [self, slotFunc](qreal angle) {
        double sigval1 = static_cast<double>(angle);
        slotFunc(self, sigval1);
    });
}

void QAbstractBarSeries_LabelsPrecisionChanged(QAbstractBarSeries* self, int precision) {
    self->labelsPrecisionChanged(static_cast<int>(precision));
}

void QAbstractBarSeries_Connect_LabelsPrecisionChanged(QAbstractBarSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractBarSeries*, int) = reinterpret_cast<void (*)(QAbstractBarSeries*, int)>(slot);
    QAbstractBarSeries::connect(self, &QAbstractBarSeries::labelsPrecisionChanged, [self, slotFunc](int precision) {
        int sigval1 = precision;
        slotFunc(self, sigval1);
    });
}

void QAbstractBarSeries_BarsetsAdded(QAbstractBarSeries* self, const libqt_list /* of QBarSet* */ sets) {
    QList<QBarSet*> sets_QList;
    sets_QList.reserve(sets.len);
    QBarSet** sets_arr = static_cast<QBarSet**>(sets.data);
    for (size_t i = 0; i < sets.len; ++i) {
        sets_QList.push_back(sets_arr[i]);
    }
    self->barsetsAdded(sets_QList);
}

void QAbstractBarSeries_Connect_BarsetsAdded(QAbstractBarSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractBarSeries*, libqt_list /* of QBarSet* */) = reinterpret_cast<void (*)(QAbstractBarSeries*, libqt_list /* of QBarSet* */)>(slot);
    QAbstractBarSeries::connect(self, &QAbstractBarSeries::barsetsAdded, [self, slotFunc](const QList<QBarSet*>& sets) {
        const QList<QBarSet*>& sets_ret = sets;
        // Convert const QList<> from C++ memory to manually-managed C memory
        QBarSet** sets_arr = static_cast<QBarSet**>(malloc(sizeof(QBarSet*) * sets_ret.size()));
        for (size_t i = 0; i < sets_ret.size(); ++i) {
            sets_arr[i] = sets_ret[i];
        }
        libqt_list sets_out;
        sets_out.len = sets_ret.size();
        sets_out.data = static_cast<void*>(sets_arr);
        libqt_list /* of QBarSet* */ sigval1 = sets_out;
        slotFunc(self, sigval1);
    });
}

void QAbstractBarSeries_BarsetsRemoved(QAbstractBarSeries* self, const libqt_list /* of QBarSet* */ sets) {
    QList<QBarSet*> sets_QList;
    sets_QList.reserve(sets.len);
    QBarSet** sets_arr = static_cast<QBarSet**>(sets.data);
    for (size_t i = 0; i < sets.len; ++i) {
        sets_QList.push_back(sets_arr[i]);
    }
    self->barsetsRemoved(sets_QList);
}

void QAbstractBarSeries_Connect_BarsetsRemoved(QAbstractBarSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractBarSeries*, libqt_list /* of QBarSet* */) = reinterpret_cast<void (*)(QAbstractBarSeries*, libqt_list /* of QBarSet* */)>(slot);
    QAbstractBarSeries::connect(self, &QAbstractBarSeries::barsetsRemoved, [self, slotFunc](const QList<QBarSet*>& sets) {
        const QList<QBarSet*>& sets_ret = sets;
        // Convert const QList<> from C++ memory to manually-managed C memory
        QBarSet** sets_arr = static_cast<QBarSet**>(malloc(sizeof(QBarSet*) * sets_ret.size()));
        for (size_t i = 0; i < sets_ret.size(); ++i) {
            sets_arr[i] = sets_ret[i];
        }
        libqt_list sets_out;
        sets_out.len = sets_ret.size();
        sets_out.data = static_cast<void*>(sets_arr);
        libqt_list /* of QBarSet* */ sigval1 = sets_out;
        slotFunc(self, sigval1);
    });
}

libqt_string QAbstractBarSeries_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractBarSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractBarSeries_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAbstractBarSeries::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstractBarSeries_SetLabelsVisible1(QAbstractBarSeries* self, bool visible) {
    self->setLabelsVisible(visible);
}

void QAbstractBarSeries_Delete(QAbstractBarSeries* self) {
    delete self;
}
