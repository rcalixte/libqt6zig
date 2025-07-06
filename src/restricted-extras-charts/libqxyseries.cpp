#include <QAbstractSeries>
#include <QBrush>
#include <QColor>
#include <QFont>
#include <QHash>
#include <QImage>
#include <QLinearGradient>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPair>
#include <QPen>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QXYSeries>
#include <qxyseries.h>
#include "libqxyseries.h"
#include "libqxyseries.hxx"

QMetaObject* QXYSeries_MetaObject(const QXYSeries* self) {
    return (QMetaObject*)self->metaObject();
}

void* QXYSeries_Metacast(QXYSeries* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QXYSeries_Metacall(QXYSeries* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QXYSeries_Tr(const char* s) {
    QString _ret = QXYSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QXYSeries_Append(QXYSeries* self, double x, double y) {
    self->append(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QXYSeries_AppendWithPoint(QXYSeries* self, const QPointF* point) {
    self->append(*point);
}

void QXYSeries_AppendWithPoints(QXYSeries* self, const libqt_list /* of QPointF* */ points) {
    QList<QPointF> points_QList;
    points_QList.reserve(points.len);
    QPointF** points_arr = static_cast<QPointF**>(points.data);
    for (size_t i = 0; i < points.len; ++i) {
        points_QList.push_back(*(points_arr[i]));
    }
    self->append(points_QList);
}

void QXYSeries_Replace(QXYSeries* self, double oldX, double oldY, double newX, double newY) {
    self->replace(static_cast<qreal>(oldX), static_cast<qreal>(oldY), static_cast<qreal>(newX), static_cast<qreal>(newY));
}

void QXYSeries_Replace2(QXYSeries* self, const QPointF* oldPoint, const QPointF* newPoint) {
    self->replace(*oldPoint, *newPoint);
}

void QXYSeries_Replace3(QXYSeries* self, int index, double newX, double newY) {
    self->replace(static_cast<int>(index), static_cast<qreal>(newX), static_cast<qreal>(newY));
}

void QXYSeries_Replace4(QXYSeries* self, int index, const QPointF* newPoint) {
    self->replace(static_cast<int>(index), *newPoint);
}

void QXYSeries_Remove(QXYSeries* self, double x, double y) {
    self->remove(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QXYSeries_RemoveWithPoint(QXYSeries* self, const QPointF* point) {
    self->remove(*point);
}

void QXYSeries_RemoveWithIndex(QXYSeries* self, int index) {
    self->remove(static_cast<int>(index));
}

void QXYSeries_RemovePoints(QXYSeries* self, int index, int count) {
    self->removePoints(static_cast<int>(index), static_cast<int>(count));
}

void QXYSeries_Insert(QXYSeries* self, int index, const QPointF* point) {
    self->insert(static_cast<int>(index), *point);
}

void QXYSeries_Clear(QXYSeries* self) {
    self->clear();
}

int QXYSeries_Count(const QXYSeries* self) {
    return self->count();
}

libqt_list /* of QPointF* */ QXYSeries_Points(const QXYSeries* self) {
    QList<QPointF> _ret = self->points();
    // Convert QList<> from C++ memory to manually-managed C memory
    QPointF** _arr = static_cast<QPointF**>(malloc(sizeof(QPointF*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QPointF(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QPointF* */ QXYSeries_PointsVector(const QXYSeries* self) {
    QList<QPointF> _ret = self->pointsVector();
    // Convert QList<> from C++ memory to manually-managed C memory
    QPointF** _arr = static_cast<QPointF**>(malloc(sizeof(QPointF*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QPointF(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QPointF* QXYSeries_At(const QXYSeries* self, int index) {
    const QPointF& _ret = self->at(static_cast<int>(index));
    // Cast returned reference into pointer
    return const_cast<QPointF*>(&_ret);
}

QXYSeries* QXYSeries_OperatorShiftLeft(QXYSeries* self, const QPointF* point) {
    QXYSeries& _ret = self->operator<<(*point);
    // Cast returned reference into pointer
    return &_ret;
}

QXYSeries* QXYSeries_OperatorShiftLeftWithPoints(QXYSeries* self, const libqt_list /* of QPointF* */ points) {
    QList<QPointF> points_QList;
    points_QList.reserve(points.len);
    QPointF** points_arr = static_cast<QPointF**>(points.data);
    for (size_t i = 0; i < points.len; ++i) {
        points_QList.push_back(*(points_arr[i]));
    }
    QXYSeries& _ret = self->operator<<(points_QList);
    // Cast returned reference into pointer
    return &_ret;
}

void QXYSeries_SetPen(QXYSeries* self, const QPen* pen) {
    self->setPen(*pen);
}

QPen* QXYSeries_Pen(const QXYSeries* self) {
    return new QPen(self->pen());
}

void QXYSeries_SetBrush(QXYSeries* self, const QBrush* brush) {
    self->setBrush(*brush);
}

QBrush* QXYSeries_Brush(const QXYSeries* self) {
    return new QBrush(self->brush());
}

void QXYSeries_SetColor(QXYSeries* self, const QColor* color) {
    self->setColor(*color);
}

QColor* QXYSeries_Color(const QXYSeries* self) {
    return new QColor(self->color());
}

void QXYSeries_SetSelectedColor(QXYSeries* self, const QColor* color) {
    self->setSelectedColor(*color);
}

QColor* QXYSeries_SelectedColor(const QXYSeries* self) {
    return new QColor(self->selectedColor());
}

void QXYSeries_SetPointsVisible(QXYSeries* self) {
    self->setPointsVisible();
}

bool QXYSeries_PointsVisible(const QXYSeries* self) {
    return self->pointsVisible();
}

void QXYSeries_SetPointLabelsFormat(QXYSeries* self, const libqt_string format) {
    QString format_QString = QString::fromUtf8(format.data, format.len);
    self->setPointLabelsFormat(format_QString);
}

libqt_string QXYSeries_PointLabelsFormat(const QXYSeries* self) {
    QString _ret = self->pointLabelsFormat();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QXYSeries_SetPointLabelsVisible(QXYSeries* self) {
    self->setPointLabelsVisible();
}

bool QXYSeries_PointLabelsVisible(const QXYSeries* self) {
    return self->pointLabelsVisible();
}

void QXYSeries_SetPointLabelsFont(QXYSeries* self, const QFont* font) {
    self->setPointLabelsFont(*font);
}

QFont* QXYSeries_PointLabelsFont(const QXYSeries* self) {
    return new QFont(self->pointLabelsFont());
}

void QXYSeries_SetPointLabelsColor(QXYSeries* self, const QColor* color) {
    self->setPointLabelsColor(*color);
}

QColor* QXYSeries_PointLabelsColor(const QXYSeries* self) {
    return new QColor(self->pointLabelsColor());
}

void QXYSeries_SetPointLabelsClipping(QXYSeries* self) {
    self->setPointLabelsClipping();
}

bool QXYSeries_PointLabelsClipping(const QXYSeries* self) {
    return self->pointLabelsClipping();
}

void QXYSeries_ReplaceWithPoints(QXYSeries* self, const libqt_list /* of QPointF* */ points) {
    QList<QPointF> points_QList;
    points_QList.reserve(points.len);
    QPointF** points_arr = static_cast<QPointF**>(points.data);
    for (size_t i = 0; i < points.len; ++i) {
        points_QList.push_back(*(points_arr[i]));
    }
    self->replace(points_QList);
}

bool QXYSeries_IsPointSelected(QXYSeries* self, int index) {
    return self->isPointSelected(static_cast<int>(index));
}

void QXYSeries_SelectPoint(QXYSeries* self, int index) {
    self->selectPoint(static_cast<int>(index));
}

void QXYSeries_DeselectPoint(QXYSeries* self, int index) {
    self->deselectPoint(static_cast<int>(index));
}

void QXYSeries_SetPointSelected(QXYSeries* self, int index, bool selected) {
    self->setPointSelected(static_cast<int>(index), selected);
}

void QXYSeries_SelectAllPoints(QXYSeries* self) {
    self->selectAllPoints();
}

void QXYSeries_DeselectAllPoints(QXYSeries* self) {
    self->deselectAllPoints();
}

void QXYSeries_SelectPoints(QXYSeries* self, const libqt_list /* of int */ indexes) {
    QList<int> indexes_QList;
    indexes_QList.reserve(indexes.len);
    int* indexes_arr = static_cast<int*>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(static_cast<int>(indexes_arr[i]));
    }
    self->selectPoints(indexes_QList);
}

void QXYSeries_DeselectPoints(QXYSeries* self, const libqt_list /* of int */ indexes) {
    QList<int> indexes_QList;
    indexes_QList.reserve(indexes.len);
    int* indexes_arr = static_cast<int*>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(static_cast<int>(indexes_arr[i]));
    }
    self->deselectPoints(indexes_QList);
}

void QXYSeries_ToggleSelection(QXYSeries* self, const libqt_list /* of int */ indexes) {
    QList<int> indexes_QList;
    indexes_QList.reserve(indexes.len);
    int* indexes_arr = static_cast<int*>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(static_cast<int>(indexes_arr[i]));
    }
    self->toggleSelection(indexes_QList);
}

libqt_list /* of int */ QXYSeries_SelectedPoints(const QXYSeries* self) {
    QList<int> _ret = self->selectedPoints();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QXYSeries_SetLightMarker(QXYSeries* self, const QImage* lightMarker) {
    self->setLightMarker(*lightMarker);
}

QImage* QXYSeries_LightMarker(const QXYSeries* self) {
    const QImage& _ret = self->lightMarker();
    // Cast returned reference into pointer
    return const_cast<QImage*>(&_ret);
}

void QXYSeries_SetSelectedLightMarker(QXYSeries* self, const QImage* selectedLightMarker) {
    self->setSelectedLightMarker(*selectedLightMarker);
}

QImage* QXYSeries_SelectedLightMarker(const QXYSeries* self) {
    const QImage& _ret = self->selectedLightMarker();
    // Cast returned reference into pointer
    return const_cast<QImage*>(&_ret);
}

void QXYSeries_SetMarkerSize(QXYSeries* self, double size) {
    self->setMarkerSize(static_cast<qreal>(size));
}

double QXYSeries_MarkerSize(const QXYSeries* self) {
    return static_cast<double>(self->markerSize());
}

void QXYSeries_SetBestFitLineVisible(QXYSeries* self) {
    self->setBestFitLineVisible();
}

bool QXYSeries_BestFitLineVisible(const QXYSeries* self) {
    return self->bestFitLineVisible();
}

libqt_pair /* tuple of double and double */ QXYSeries_BestFitLineEquation(const QXYSeries* self, bool* ok) {
    QPair<double, double> _ret = self->bestFitLineEquation(*ok);
    // Convert QPair<> from C++ memory to manually-managed C memory
    double* _first = static_cast<double*>(malloc(sizeof(double)));
    double* _second = static_cast<double*>(malloc(sizeof(double)));
    *_first = _ret.first;
    *_second = _ret.second;
    libqt_pair _out;
    _out.first = static_cast<void*>(_first);
    _out.second = static_cast<void*>(_second);
    return _out;
}

void QXYSeries_SetBestFitLinePen(QXYSeries* self, const QPen* pen) {
    self->setBestFitLinePen(*pen);
}

QPen* QXYSeries_BestFitLinePen(const QXYSeries* self) {
    return new QPen(self->bestFitLinePen());
}

void QXYSeries_SetBestFitLineColor(QXYSeries* self, const QColor* color) {
    self->setBestFitLineColor(*color);
}

QColor* QXYSeries_BestFitLineColor(const QXYSeries* self) {
    return new QColor(self->bestFitLineColor());
}

void QXYSeries_ClearPointConfiguration(QXYSeries* self, const int index) {
    self->clearPointConfiguration(static_cast<const int>(index));
}

void QXYSeries_ClearPointConfiguration2(QXYSeries* self, const int index, const int key) {
    self->clearPointConfiguration(static_cast<const int>(index), static_cast<const QXYSeries::PointConfiguration>(key));
}

void QXYSeries_ClearPointsConfiguration(QXYSeries* self) {
    self->clearPointsConfiguration();
}

void QXYSeries_ClearPointsConfigurationWithKey(QXYSeries* self, const int key) {
    self->clearPointsConfiguration(static_cast<const QXYSeries::PointConfiguration>(key));
}

void QXYSeries_SetPointConfiguration(QXYSeries* self, const int index, const libqt_map /* of int to QVariant* */ configuration) {
    QHash<QXYSeries::PointConfiguration, QVariant> configuration_QMap;
    configuration_QMap.reserve(configuration.len);
    int* configuration_karr = static_cast<int*>(configuration.keys);
    QVariant** configuration_varr = static_cast<QVariant**>(configuration.values);
    for (size_t i = 0; i < configuration.len; ++i) {
        configuration_QMap[static_cast<QXYSeries::PointConfiguration>(configuration_karr[i])] = *(configuration_varr[i]);
    }
    self->setPointConfiguration(static_cast<const int>(index), configuration_QMap);
}

void QXYSeries_SetPointConfiguration2(QXYSeries* self, const int index, const int key, const QVariant* value) {
    self->setPointConfiguration(static_cast<const int>(index), static_cast<const QXYSeries::PointConfiguration>(key), *value);
}

void QXYSeries_SetPointsConfiguration(QXYSeries* self, const libqt_map /* of int to libqt_map  of int to QVariant*  */ pointsConfiguration) {
    QHash<int, QHash<QXYSeries::PointConfiguration, QVariant>> pointsConfiguration_QMap;
    pointsConfiguration_QMap.reserve(pointsConfiguration.len);
    int* pointsConfiguration_karr = static_cast<int*>(pointsConfiguration.keys);
    libqt_map /* of int to QVariant* */* pointsConfiguration_varr = static_cast<libqt_map /* of int to QVariant* */*>(pointsConfiguration.values);
    for (size_t i = 0; i < pointsConfiguration.len; ++i) {
        QHash<QXYSeries::PointConfiguration, QVariant> pointsConfiguration_varr_i_QMap;
        pointsConfiguration_varr_i_QMap.reserve(pointsConfiguration_varr[i].len);
        int* pointsConfiguration_varr_i_karr = static_cast<int*>(pointsConfiguration_varr[i].keys);
        QVariant** pointsConfiguration_varr_i_varr = static_cast<QVariant**>(pointsConfiguration_varr[i].values);
        for (size_t i = 0; i < pointsConfiguration_varr[i].len; ++i) {
            pointsConfiguration_varr_i_QMap[static_cast<QXYSeries::PointConfiguration>(pointsConfiguration_varr_i_karr[i])] = *(pointsConfiguration_varr_i_varr[i]);
        }
        pointsConfiguration_QMap[static_cast<int>(pointsConfiguration_karr[i])] = pointsConfiguration_varr_i_QMap;
    }
    self->setPointsConfiguration(pointsConfiguration_QMap);
}

libqt_map /* of int to QVariant* */ QXYSeries_PointConfiguration(const QXYSeries* self, const int index) {
    QHash<QXYSeries::PointConfiguration, QVariant> _ret = self->pointConfiguration(static_cast<const int>(index));
    // Convert QHash<> from C++ memory to manually-managed C memory
    int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        _karr[_ctr] = static_cast<int>(_itr->first);
        _varr[_ctr] = new QVariant(_itr->second);
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

libqt_map /* of int to libqt_map  of int to QVariant*  */ QXYSeries_PointsConfiguration(const QXYSeries* self) {
    QHash<int, QHash<QXYSeries::PointConfiguration, QVariant>> _ret = self->pointsConfiguration();
    // Convert QHash<> from C++ memory to manually-managed C memory
    int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    libqt_map /* of int to QVariant* */* _varr = static_cast<libqt_map /* of int to QVariant* */*>(malloc(sizeof(libqt_map /* of int to QVariant* */) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        _karr[_ctr] = _itr->first;
        QHash<QXYSeries::PointConfiguration, QVariant> _hashval_ret = _itr->second;
        // Convert QHash<> from C++ memory to manually-managed C memory
        int* _hashval_karr = static_cast<int*>(malloc(sizeof(int) * _hashval_ret.size()));
        QVariant** _hashval_varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _hashval_ret.size()));
        int _hashval_ctr = 0;
        for (auto _hashval_itr = _hashval_ret.keyValueBegin(); _hashval_itr != _hashval_ret.keyValueEnd(); ++_hashval_itr) {
            _hashval_karr[_hashval_ctr] = static_cast<int>(_hashval_itr->first);
            _hashval_varr[_hashval_ctr] = new QVariant(_hashval_itr->second);
            _hashval_ctr++;
        }
        libqt_map _hashval_out;
        _hashval_out.len = _hashval_ret.size();
        _hashval_out.keys = static_cast<void*>(_hashval_karr);
        _hashval_out.values = static_cast<void*>(_hashval_varr);
        _varr[_ctr] = _hashval_out;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

void QXYSeries_SizeBy(QXYSeries* self, const libqt_list /* of double */ sourceData, const double minSize, const double maxSize) {
    QList<double> sourceData_QList;
    sourceData_QList.reserve(sourceData.len);
    double* sourceData_arr = static_cast<double*>(sourceData.data);
    for (size_t i = 0; i < sourceData.len; ++i) {
        sourceData_QList.push_back(static_cast<double>(sourceData_arr[i]));
    }
    self->sizeBy(sourceData_QList, static_cast<const qreal>(minSize), static_cast<const qreal>(maxSize));
}

void QXYSeries_ColorBy(QXYSeries* self, const libqt_list /* of double */ sourceData) {
    QList<double> sourceData_QList;
    sourceData_QList.reserve(sourceData.len);
    double* sourceData_arr = static_cast<double*>(sourceData.data);
    for (size_t i = 0; i < sourceData.len; ++i) {
        sourceData_QList.push_back(static_cast<double>(sourceData_arr[i]));
    }
    self->colorBy(sourceData_QList);
}

void QXYSeries_Clicked(QXYSeries* self, const QPointF* point) {
    self->clicked(*point);
}

void QXYSeries_Connect_Clicked(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, QPointF*) = reinterpret_cast<void (*)(QXYSeries*, QPointF*)>(slot);
    QXYSeries::connect(self, &QXYSeries::clicked, [self, slotFunc](const QPointF& point) {
        const QPointF& point_ret = point;
        // Cast returned reference into pointer
        QPointF* sigval1 = const_cast<QPointF*>(&point_ret);
        slotFunc(self, sigval1);
    });
}

void QXYSeries_Hovered(QXYSeries* self, const QPointF* point, bool state) {
    self->hovered(*point, state);
}

void QXYSeries_Connect_Hovered(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, QPointF*, bool) = reinterpret_cast<void (*)(QXYSeries*, QPointF*, bool)>(slot);
    QXYSeries::connect(self, &QXYSeries::hovered, [self, slotFunc](const QPointF& point, bool state) {
        const QPointF& point_ret = point;
        // Cast returned reference into pointer
        QPointF* sigval1 = const_cast<QPointF*>(&point_ret);
        bool sigval2 = state;
        slotFunc(self, sigval1, sigval2);
    });
}

void QXYSeries_Pressed(QXYSeries* self, const QPointF* point) {
    self->pressed(*point);
}

void QXYSeries_Connect_Pressed(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, QPointF*) = reinterpret_cast<void (*)(QXYSeries*, QPointF*)>(slot);
    QXYSeries::connect(self, &QXYSeries::pressed, [self, slotFunc](const QPointF& point) {
        const QPointF& point_ret = point;
        // Cast returned reference into pointer
        QPointF* sigval1 = const_cast<QPointF*>(&point_ret);
        slotFunc(self, sigval1);
    });
}

void QXYSeries_Released(QXYSeries* self, const QPointF* point) {
    self->released(*point);
}

void QXYSeries_Connect_Released(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, QPointF*) = reinterpret_cast<void (*)(QXYSeries*, QPointF*)>(slot);
    QXYSeries::connect(self, &QXYSeries::released, [self, slotFunc](const QPointF& point) {
        const QPointF& point_ret = point;
        // Cast returned reference into pointer
        QPointF* sigval1 = const_cast<QPointF*>(&point_ret);
        slotFunc(self, sigval1);
    });
}

void QXYSeries_DoubleClicked(QXYSeries* self, const QPointF* point) {
    self->doubleClicked(*point);
}

void QXYSeries_Connect_DoubleClicked(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, QPointF*) = reinterpret_cast<void (*)(QXYSeries*, QPointF*)>(slot);
    QXYSeries::connect(self, &QXYSeries::doubleClicked, [self, slotFunc](const QPointF& point) {
        const QPointF& point_ret = point;
        // Cast returned reference into pointer
        QPointF* sigval1 = const_cast<QPointF*>(&point_ret);
        slotFunc(self, sigval1);
    });
}

void QXYSeries_PointReplaced(QXYSeries* self, int index) {
    self->pointReplaced(static_cast<int>(index));
}

void QXYSeries_Connect_PointReplaced(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, int) = reinterpret_cast<void (*)(QXYSeries*, int)>(slot);
    QXYSeries::connect(self, &QXYSeries::pointReplaced, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

void QXYSeries_PointRemoved(QXYSeries* self, int index) {
    self->pointRemoved(static_cast<int>(index));
}

void QXYSeries_Connect_PointRemoved(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, int) = reinterpret_cast<void (*)(QXYSeries*, int)>(slot);
    QXYSeries::connect(self, &QXYSeries::pointRemoved, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

void QXYSeries_PointAdded(QXYSeries* self, int index) {
    self->pointAdded(static_cast<int>(index));
}

void QXYSeries_Connect_PointAdded(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, int) = reinterpret_cast<void (*)(QXYSeries*, int)>(slot);
    QXYSeries::connect(self, &QXYSeries::pointAdded, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

void QXYSeries_ColorChanged(QXYSeries* self, QColor* color) {
    self->colorChanged(*color);
}

void QXYSeries_Connect_ColorChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, QColor*) = reinterpret_cast<void (*)(QXYSeries*, QColor*)>(slot);
    QXYSeries::connect(self, &QXYSeries::colorChanged, [self, slotFunc](QColor color) {
        QColor* sigval1 = new QColor(color);
        slotFunc(self, sigval1);
    });
}

void QXYSeries_SelectedColorChanged(QXYSeries* self, const QColor* color) {
    self->selectedColorChanged(*color);
}

void QXYSeries_Connect_SelectedColorChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, QColor*) = reinterpret_cast<void (*)(QXYSeries*, QColor*)>(slot);
    QXYSeries::connect(self, &QXYSeries::selectedColorChanged, [self, slotFunc](const QColor& color) {
        const QColor& color_ret = color;
        // Cast returned reference into pointer
        QColor* sigval1 = const_cast<QColor*>(&color_ret);
        slotFunc(self, sigval1);
    });
}

void QXYSeries_PointsReplaced(QXYSeries* self) {
    self->pointsReplaced();
}

void QXYSeries_Connect_PointsReplaced(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*) = reinterpret_cast<void (*)(QXYSeries*)>(slot);
    QXYSeries::connect(self, &QXYSeries::pointsReplaced, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QXYSeries_PointLabelsFormatChanged(QXYSeries* self, const libqt_string format) {
    QString format_QString = QString::fromUtf8(format.data, format.len);
    self->pointLabelsFormatChanged(format_QString);
}

void QXYSeries_Connect_PointLabelsFormatChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, libqt_string) = reinterpret_cast<void (*)(QXYSeries*, libqt_string)>(slot);
    QXYSeries::connect(self, &QXYSeries::pointLabelsFormatChanged, [self, slotFunc](const QString& format) {
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

void QXYSeries_PointLabelsVisibilityChanged(QXYSeries* self, bool visible) {
    self->pointLabelsVisibilityChanged(visible);
}

void QXYSeries_Connect_PointLabelsVisibilityChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, bool) = reinterpret_cast<void (*)(QXYSeries*, bool)>(slot);
    QXYSeries::connect(self, &QXYSeries::pointLabelsVisibilityChanged, [self, slotFunc](bool visible) {
        bool sigval1 = visible;
        slotFunc(self, sigval1);
    });
}

void QXYSeries_PointLabelsFontChanged(QXYSeries* self, const QFont* font) {
    self->pointLabelsFontChanged(*font);
}

void QXYSeries_Connect_PointLabelsFontChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, QFont*) = reinterpret_cast<void (*)(QXYSeries*, QFont*)>(slot);
    QXYSeries::connect(self, &QXYSeries::pointLabelsFontChanged, [self, slotFunc](const QFont& font) {
        const QFont& font_ret = font;
        // Cast returned reference into pointer
        QFont* sigval1 = const_cast<QFont*>(&font_ret);
        slotFunc(self, sigval1);
    });
}

void QXYSeries_PointLabelsColorChanged(QXYSeries* self, const QColor* color) {
    self->pointLabelsColorChanged(*color);
}

void QXYSeries_Connect_PointLabelsColorChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, QColor*) = reinterpret_cast<void (*)(QXYSeries*, QColor*)>(slot);
    QXYSeries::connect(self, &QXYSeries::pointLabelsColorChanged, [self, slotFunc](const QColor& color) {
        const QColor& color_ret = color;
        // Cast returned reference into pointer
        QColor* sigval1 = const_cast<QColor*>(&color_ret);
        slotFunc(self, sigval1);
    });
}

void QXYSeries_PointLabelsClippingChanged(QXYSeries* self, bool clipping) {
    self->pointLabelsClippingChanged(clipping);
}

void QXYSeries_Connect_PointLabelsClippingChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, bool) = reinterpret_cast<void (*)(QXYSeries*, bool)>(slot);
    QXYSeries::connect(self, &QXYSeries::pointLabelsClippingChanged, [self, slotFunc](bool clipping) {
        bool sigval1 = clipping;
        slotFunc(self, sigval1);
    });
}

void QXYSeries_PointsRemoved(QXYSeries* self, int index, int count) {
    self->pointsRemoved(static_cast<int>(index), static_cast<int>(count));
}

void QXYSeries_Connect_PointsRemoved(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, int, int) = reinterpret_cast<void (*)(QXYSeries*, int, int)>(slot);
    QXYSeries::connect(self, &QXYSeries::pointsRemoved, [self, slotFunc](int index, int count) {
        int sigval1 = index;
        int sigval2 = count;
        slotFunc(self, sigval1, sigval2);
    });
}

void QXYSeries_PenChanged(QXYSeries* self, const QPen* pen) {
    self->penChanged(*pen);
}

void QXYSeries_Connect_PenChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, QPen*) = reinterpret_cast<void (*)(QXYSeries*, QPen*)>(slot);
    QXYSeries::connect(self, &QXYSeries::penChanged, [self, slotFunc](const QPen& pen) {
        const QPen& pen_ret = pen;
        // Cast returned reference into pointer
        QPen* sigval1 = const_cast<QPen*>(&pen_ret);
        slotFunc(self, sigval1);
    });
}

void QXYSeries_SelectedPointsChanged(QXYSeries* self) {
    self->selectedPointsChanged();
}

void QXYSeries_Connect_SelectedPointsChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*) = reinterpret_cast<void (*)(QXYSeries*)>(slot);
    QXYSeries::connect(self, &QXYSeries::selectedPointsChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QXYSeries_LightMarkerChanged(QXYSeries* self, const QImage* lightMarker) {
    self->lightMarkerChanged(*lightMarker);
}

void QXYSeries_Connect_LightMarkerChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, QImage*) = reinterpret_cast<void (*)(QXYSeries*, QImage*)>(slot);
    QXYSeries::connect(self, &QXYSeries::lightMarkerChanged, [self, slotFunc](const QImage& lightMarker) {
        const QImage& lightMarker_ret = lightMarker;
        // Cast returned reference into pointer
        QImage* sigval1 = const_cast<QImage*>(&lightMarker_ret);
        slotFunc(self, sigval1);
    });
}

void QXYSeries_SelectedLightMarkerChanged(QXYSeries* self, const QImage* selectedLightMarker) {
    self->selectedLightMarkerChanged(*selectedLightMarker);
}

void QXYSeries_Connect_SelectedLightMarkerChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, QImage*) = reinterpret_cast<void (*)(QXYSeries*, QImage*)>(slot);
    QXYSeries::connect(self, &QXYSeries::selectedLightMarkerChanged, [self, slotFunc](const QImage& selectedLightMarker) {
        const QImage& selectedLightMarker_ret = selectedLightMarker;
        // Cast returned reference into pointer
        QImage* sigval1 = const_cast<QImage*>(&selectedLightMarker_ret);
        slotFunc(self, sigval1);
    });
}

void QXYSeries_BestFitLineVisibilityChanged(QXYSeries* self, bool visible) {
    self->bestFitLineVisibilityChanged(visible);
}

void QXYSeries_Connect_BestFitLineVisibilityChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, bool) = reinterpret_cast<void (*)(QXYSeries*, bool)>(slot);
    QXYSeries::connect(self, &QXYSeries::bestFitLineVisibilityChanged, [self, slotFunc](bool visible) {
        bool sigval1 = visible;
        slotFunc(self, sigval1);
    });
}

void QXYSeries_BestFitLinePenChanged(QXYSeries* self, const QPen* pen) {
    self->bestFitLinePenChanged(*pen);
}

void QXYSeries_Connect_BestFitLinePenChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, QPen*) = reinterpret_cast<void (*)(QXYSeries*, QPen*)>(slot);
    QXYSeries::connect(self, &QXYSeries::bestFitLinePenChanged, [self, slotFunc](const QPen& pen) {
        const QPen& pen_ret = pen;
        // Cast returned reference into pointer
        QPen* sigval1 = const_cast<QPen*>(&pen_ret);
        slotFunc(self, sigval1);
    });
}

void QXYSeries_BestFitLineColorChanged(QXYSeries* self, const QColor* color) {
    self->bestFitLineColorChanged(*color);
}

void QXYSeries_Connect_BestFitLineColorChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, QColor*) = reinterpret_cast<void (*)(QXYSeries*, QColor*)>(slot);
    QXYSeries::connect(self, &QXYSeries::bestFitLineColorChanged, [self, slotFunc](const QColor& color) {
        const QColor& color_ret = color;
        // Cast returned reference into pointer
        QColor* sigval1 = const_cast<QColor*>(&color_ret);
        slotFunc(self, sigval1);
    });
}

void QXYSeries_PointsConfigurationChanged(QXYSeries* self, const libqt_map /* of int to libqt_map  of int to QVariant*  */ configuration) {
    QHash<int, QHash<QXYSeries::PointConfiguration, QVariant>> configuration_QMap;
    configuration_QMap.reserve(configuration.len);
    int* configuration_karr = static_cast<int*>(configuration.keys);
    libqt_map /* of int to QVariant* */* configuration_varr = static_cast<libqt_map /* of int to QVariant* */*>(configuration.values);
    for (size_t i = 0; i < configuration.len; ++i) {
        QHash<QXYSeries::PointConfiguration, QVariant> configuration_varr_i_QMap;
        configuration_varr_i_QMap.reserve(configuration_varr[i].len);
        int* configuration_varr_i_karr = static_cast<int*>(configuration_varr[i].keys);
        QVariant** configuration_varr_i_varr = static_cast<QVariant**>(configuration_varr[i].values);
        for (size_t i = 0; i < configuration_varr[i].len; ++i) {
            configuration_varr_i_QMap[static_cast<QXYSeries::PointConfiguration>(configuration_varr_i_karr[i])] = *(configuration_varr_i_varr[i]);
        }
        configuration_QMap[static_cast<int>(configuration_karr[i])] = configuration_varr_i_QMap;
    }
    self->pointsConfigurationChanged(configuration_QMap);
}

void QXYSeries_Connect_PointsConfigurationChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, libqt_map /* of int to libqt_map  of int to QVariant*  */) = reinterpret_cast<void (*)(QXYSeries*, libqt_map /* of int to libqt_map  of int to QVariant*  */)>(slot);
    QXYSeries::connect(self, &QXYSeries::pointsConfigurationChanged, [self, slotFunc](const QHash<int, QHash<QXYSeries::PointConfiguration, QVariant>>& configuration) {
        const QHash<int, QHash<QXYSeries::PointConfiguration, QVariant>>& configuration_ret = configuration;
        // Convert const QHash<> from C++ memory to manually-managed C memory
        int* configuration_karr = static_cast<int*>(malloc(sizeof(int) * configuration_ret.size()));
        libqt_map /* of int to QVariant* */* configuration_varr = static_cast<libqt_map /* of int to QVariant* */*>(malloc(sizeof(libqt_map /* of int to QVariant* */) * configuration_ret.size()));
        int configuration_ctr = 0;
        for (auto configuration_itr = configuration_ret.keyValueBegin(); configuration_itr != configuration_ret.keyValueEnd(); ++configuration_itr) {
            configuration_karr[configuration_ctr] = configuration_itr->first;
            QHash<QXYSeries::PointConfiguration, QVariant> configuration_hashval_ret = configuration_itr->second;
            // Convert QHash<> from C++ memory to manually-managed C memory
            int* configuration_hashval_karr = static_cast<int*>(malloc(sizeof(int) * configuration_hashval_ret.size()));
            QVariant** configuration_hashval_varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * configuration_hashval_ret.size()));
            int configuration_hashval_ctr = 0;
            for (auto configuration_hashval_itr = configuration_hashval_ret.keyValueBegin(); configuration_hashval_itr != configuration_hashval_ret.keyValueEnd(); ++configuration_hashval_itr) {
                configuration_hashval_karr[configuration_hashval_ctr] = static_cast<int>(configuration_hashval_itr->first);
                configuration_hashval_varr[configuration_hashval_ctr] = new QVariant(configuration_hashval_itr->second);
                configuration_hashval_ctr++;
            }
            libqt_map configuration_hashval_out;
            configuration_hashval_out.len = configuration_hashval_ret.size();
            configuration_hashval_out.keys = static_cast<void*>(configuration_hashval_karr);
            configuration_hashval_out.values = static_cast<void*>(configuration_hashval_varr);
            configuration_varr[configuration_ctr] = configuration_hashval_out;
            configuration_ctr++;
        }
        libqt_map configuration_out;
        configuration_out.len = configuration_ret.size();
        configuration_out.keys = static_cast<void*>(configuration_karr);
        configuration_out.values = static_cast<void*>(configuration_varr);
        libqt_map /* of int to libqt_map  of int to QVariant*  */ sigval1 = configuration_out;
        slotFunc(self, sigval1);
    });
}

void QXYSeries_MarkerSizeChanged(QXYSeries* self, double size) {
    self->markerSizeChanged(static_cast<qreal>(size));
}

void QXYSeries_Connect_MarkerSizeChanged(QXYSeries* self, intptr_t slot) {
    void (*slotFunc)(QXYSeries*, double) = reinterpret_cast<void (*)(QXYSeries*, double)>(slot);
    QXYSeries::connect(self, &QXYSeries::markerSizeChanged, [self, slotFunc](qreal size) {
        double sigval1 = static_cast<double>(size);
        slotFunc(self, sigval1);
    });
}

libqt_string QXYSeries_Tr2(const char* s, const char* c) {
    QString _ret = QXYSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QXYSeries_Tr3(const char* s, const char* c, int n) {
    QString _ret = QXYSeries::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QXYSeries_SetPointsVisible1(QXYSeries* self, bool visible) {
    self->setPointsVisible(visible);
}

void QXYSeries_SetPointLabelsVisible1(QXYSeries* self, bool visible) {
    self->setPointLabelsVisible(visible);
}

void QXYSeries_SetPointLabelsClipping1(QXYSeries* self, bool enabled) {
    self->setPointLabelsClipping(enabled);
}

void QXYSeries_SetBestFitLineVisible1(QXYSeries* self, bool visible) {
    self->setBestFitLineVisible(visible);
}

void QXYSeries_ColorBy2(QXYSeries* self, const libqt_list /* of double */ sourceData, const QLinearGradient* gradient) {
    QList<double> sourceData_QList;
    sourceData_QList.reserve(sourceData.len);
    double* sourceData_arr = static_cast<double*>(sourceData.data);
    for (size_t i = 0; i < sourceData.len; ++i) {
        sourceData_QList.push_back(static_cast<double>(sourceData_arr[i]));
    }
    self->colorBy(sourceData_QList, *gradient);
}

void QXYSeries_Delete(QXYSeries* self) {
    delete self;
}
