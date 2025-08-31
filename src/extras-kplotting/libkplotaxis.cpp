#include <KPlotAxis>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kplotaxis.h>
#include "libkplotaxis.h"
#include "libkplotaxis.hxx"

KPlotAxis* KPlotAxis_new() {
    return new KPlotAxis();
}

KPlotAxis* KPlotAxis_new2(const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return new KPlotAxis(label_QString);
}

bool KPlotAxis_IsVisible(const KPlotAxis* self) {
    return self->isVisible();
}

void KPlotAxis_SetVisible(KPlotAxis* self, bool visible) {
    self->setVisible(visible);
}

bool KPlotAxis_AreTickLabelsShown(const KPlotAxis* self) {
    return self->areTickLabelsShown();
}

void KPlotAxis_SetTickLabelsShown(KPlotAxis* self, bool b) {
    self->setTickLabelsShown(b);
}

void KPlotAxis_SetLabel(KPlotAxis* self, const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->setLabel(label_QString);
}

libqt_string KPlotAxis_Label(const KPlotAxis* self) {
    QString _ret = self->label();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPlotAxis_TickLabel(const KPlotAxis* self, double value) {
    QString _ret = self->tickLabel(static_cast<double>(value));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KPlotAxis_SetTickLabelFormat(KPlotAxis* self) {
    self->setTickLabelFormat();
}

int KPlotAxis_TickLabelWidth(const KPlotAxis* self) {
    return self->tickLabelWidth();
}

char KPlotAxis_TickLabelFormat(const KPlotAxis* self) {
    return self->tickLabelFormat();
}

int KPlotAxis_TickLabelPrecision(const KPlotAxis* self) {
    return self->tickLabelPrecision();
}

void KPlotAxis_SetTickMarks(KPlotAxis* self, double x0, double length) {
    self->setTickMarks(static_cast<double>(x0), static_cast<double>(length));
}

libqt_list /* of double */ KPlotAxis_MajorTickMarks(const KPlotAxis* self) {
    QList<double> _ret = self->majorTickMarks();
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

libqt_list /* of double */ KPlotAxis_MinorTickMarks(const KPlotAxis* self) {
    QList<double> _ret = self->minorTickMarks();
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

void KPlotAxis_SetTickLabelFormat1(KPlotAxis* self, char format) {
    self->setTickLabelFormat(static_cast<char>(format));
}

void KPlotAxis_SetTickLabelFormat2(KPlotAxis* self, char format, int fieldWidth) {
    self->setTickLabelFormat(static_cast<char>(format), static_cast<int>(fieldWidth));
}

void KPlotAxis_SetTickLabelFormat3(KPlotAxis* self, char format, int fieldWidth, int precision) {
    self->setTickLabelFormat(static_cast<char>(format), static_cast<int>(fieldWidth), static_cast<int>(precision));
}

void KPlotAxis_Delete(KPlotAxis* self) {
    delete self;
}
