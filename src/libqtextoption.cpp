#include <QChar>
#include <QList>
#include <QTextOption>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTextOption__Tab
#include <qtextoption.h>
#include "libqtextoption.h"
#include "libqtextoption.hxx"

QTextOption* QTextOption_new() {
    return new QTextOption();
}

QTextOption* QTextOption_new2(int alignment) {
    return new QTextOption(static_cast<Qt::Alignment>(alignment));
}

QTextOption* QTextOption_new3(const QTextOption* o) {
    return new QTextOption(*o);
}

void QTextOption_OperatorAssign(QTextOption* self, const QTextOption* o) {
    self->operator=(*o);
}

void QTextOption_SetAlignment(QTextOption* self, int alignment) {
    self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

int QTextOption_Alignment(const QTextOption* self) {
    return static_cast<int>(self->alignment());
}

void QTextOption_SetTextDirection(QTextOption* self, int aDirection) {
    self->setTextDirection(static_cast<Qt::LayoutDirection>(aDirection));
}

int QTextOption_TextDirection(const QTextOption* self) {
    return static_cast<int>(self->textDirection());
}

void QTextOption_SetWrapMode(QTextOption* self, int wrap) {
    self->setWrapMode(static_cast<QTextOption::WrapMode>(wrap));
}

int QTextOption_WrapMode(const QTextOption* self) {
    return static_cast<int>(self->wrapMode());
}

void QTextOption_SetFlags(QTextOption* self, int flags) {
    self->setFlags(static_cast<QTextOption::Flags>(flags));
}

int QTextOption_Flags(const QTextOption* self) {
    return static_cast<int>(self->flags());
}

void QTextOption_SetTabStopDistance(QTextOption* self, double tabStopDistance) {
    self->setTabStopDistance(static_cast<qreal>(tabStopDistance));
}

double QTextOption_TabStopDistance(const QTextOption* self) {
    return static_cast<double>(self->tabStopDistance());
}

void QTextOption_SetTabArray(QTextOption* self, const libqt_list /* of double */ tabStops) {
    QList<double> tabStops_QList;
    tabStops_QList.reserve(tabStops.len);
    double* tabStops_arr = static_cast<double*>(tabStops.data);
    for (size_t i = 0; i < tabStops.len; ++i) {
        tabStops_QList.push_back(static_cast<double>(tabStops_arr[i]));
    }
    self->setTabArray(tabStops_QList);
}

libqt_list /* of double */ QTextOption_TabArray(const QTextOption* self) {
    QList<double> _ret = self->tabArray();
    // Convert QList<> from C++ memory to manually-managed C memory
    double* _arr = static_cast<double*>(malloc(sizeof(double) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QTextOption_SetTabs(QTextOption* self, const libqt_list /* of QTextOption__Tab* */ tabStops) {
    QList<QTextOption::Tab> tabStops_QList;
    tabStops_QList.reserve(tabStops.len);
    QTextOption__Tab** tabStops_arr = static_cast<QTextOption__Tab**>(tabStops.data);
    for (size_t i = 0; i < tabStops.len; ++i) {
        tabStops_QList.push_back(*(tabStops_arr[i]));
    }
    self->setTabs(tabStops_QList);
}

libqt_list /* of QTextOption__Tab* */ QTextOption_Tabs(const QTextOption* self) {
    QList<QTextOption::Tab> _ret = self->tabs();
    // Convert QList<> from C++ memory to manually-managed C memory
    QTextOption__Tab** _arr = static_cast<QTextOption__Tab**>(malloc(sizeof(QTextOption__Tab*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QTextOption::Tab(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QTextOption_SetUseDesignMetrics(QTextOption* self, bool b) {
    self->setUseDesignMetrics(b);
}

bool QTextOption_UseDesignMetrics(const QTextOption* self) {
    return self->useDesignMetrics();
}

void QTextOption_Delete(QTextOption* self) {
    delete self;
}

QTextOption__Tab* QTextOption__Tab_new(const QTextOption__Tab* other) {
    return new QTextOption::Tab(*other);
}

QTextOption__Tab* QTextOption__Tab_new2(QTextOption__Tab* other) {
    return new QTextOption::Tab(std::move(*other));
}

QTextOption__Tab* QTextOption__Tab_new3() {
    return new QTextOption::Tab();
}

QTextOption__Tab* QTextOption__Tab_new4(double pos, int tabType) {
    return new QTextOption::Tab(static_cast<qreal>(pos), static_cast<QTextOption::TabType>(tabType));
}

QTextOption__Tab* QTextOption__Tab_new5(double pos, int tabType, QChar* delim) {
    return new QTextOption::Tab(static_cast<qreal>(pos), static_cast<QTextOption::TabType>(tabType), *delim);
}

void QTextOption__Tab_CopyAssign(QTextOption__Tab* self, QTextOption__Tab* other) {
    *self = *other;
}

void QTextOption__Tab_MoveAssign(QTextOption__Tab* self, QTextOption__Tab* other) {
    *self = std::move(*other);
}

bool QTextOption__Tab_OperatorEqual(const QTextOption__Tab* self, const QTextOption__Tab* other) {
    return (*self == *other);
}

bool QTextOption__Tab_OperatorNotEqual(const QTextOption__Tab* self, const QTextOption__Tab* other) {
    return (*self != *other);
}

double QTextOption__Tab_Position(const QTextOption__Tab* self) {
    return self->position;
}

void QTextOption__Tab_SetPosition(QTextOption__Tab* self, double position) {
    self->position = static_cast<double>(position);
}

int QTextOption__Tab_Type(const QTextOption__Tab* self) {
    return static_cast<int>(self->type);
}

void QTextOption__Tab_SetType(QTextOption__Tab* self, int type) {
    self->type = static_cast<QTextOption::TabType>(type);
}

QChar* QTextOption__Tab_Delimiter(const QTextOption__Tab* self) {
    return new QChar(self->delimiter);
}

void QTextOption__Tab_SetDelimiter(QTextOption__Tab* self, QChar* delimiter) {
    self->delimiter = *delimiter;
}

void QTextOption__Tab_Delete(QTextOption__Tab* self) {
    delete self;
}
