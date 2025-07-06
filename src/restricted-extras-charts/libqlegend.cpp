#include <QAbstractSeries>
#include <QBrush>
#include <QColor>
#include <QFont>
#include <QGraphicsItem>
#include <QGraphicsLayoutItem>
#include <QGraphicsObject>
#include <QGraphicsWidget>
#include <QHideEvent>
#include <QLegend>
#include <QLegendMarker>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPen>
#include <QShowEvent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionGraphicsItem>
#include <QWidget>
#include <qlegend.h>
#include "libqlegend.h"
#include "libqlegend.hxx"

QMetaObject* QLegend_MetaObject(const QLegend* self) {
    return (QMetaObject*)self->metaObject();
}

void* QLegend_Metacast(QLegend* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QLegend_Metacall(QLegend* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QLegend_Tr(const char* s) {
    QString _ret = QLegend::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QLegend_Paint(QLegend* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->paint(painter, option, widget);
}

void QLegend_SetBrush(QLegend* self, const QBrush* brush) {
    self->setBrush(*brush);
}

QBrush* QLegend_Brush(const QLegend* self) {
    return new QBrush(self->brush());
}

void QLegend_SetColor(QLegend* self, QColor* color) {
    self->setColor(*color);
}

QColor* QLegend_Color(QLegend* self) {
    return new QColor(self->color());
}

void QLegend_SetPen(QLegend* self, const QPen* pen) {
    self->setPen(*pen);
}

QPen* QLegend_Pen(const QLegend* self) {
    return new QPen(self->pen());
}

void QLegend_SetBorderColor(QLegend* self, QColor* color) {
    self->setBorderColor(*color);
}

QColor* QLegend_BorderColor(QLegend* self) {
    return new QColor(self->borderColor());
}

void QLegend_SetFont(QLegend* self, const QFont* font) {
    self->setFont(*font);
}

QFont* QLegend_Font(const QLegend* self) {
    return new QFont(self->font());
}

void QLegend_SetLabelBrush(QLegend* self, const QBrush* brush) {
    self->setLabelBrush(*brush);
}

QBrush* QLegend_LabelBrush(const QLegend* self) {
    return new QBrush(self->labelBrush());
}

void QLegend_SetLabelColor(QLegend* self, QColor* color) {
    self->setLabelColor(*color);
}

QColor* QLegend_LabelColor(const QLegend* self) {
    return new QColor(self->labelColor());
}

void QLegend_SetAlignment(QLegend* self, int alignment) {
    self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

int QLegend_Alignment(const QLegend* self) {
    return static_cast<int>(self->alignment());
}

void QLegend_DetachFromChart(QLegend* self) {
    self->detachFromChart();
}

void QLegend_AttachToChart(QLegend* self) {
    self->attachToChart();
}

bool QLegend_IsAttachedToChart(QLegend* self) {
    return self->isAttachedToChart();
}

void QLegend_SetBackgroundVisible(QLegend* self) {
    self->setBackgroundVisible();
}

bool QLegend_IsBackgroundVisible(const QLegend* self) {
    return self->isBackgroundVisible();
}

libqt_list /* of QLegendMarker* */ QLegend_Markers(const QLegend* self) {
    QList<QLegendMarker*> _ret = self->markers();
    // Convert QList<> from C++ memory to manually-managed C memory
    QLegendMarker** _arr = static_cast<QLegendMarker**>(malloc(sizeof(QLegendMarker*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool QLegend_ReverseMarkers(QLegend* self) {
    return self->reverseMarkers();
}

void QLegend_SetReverseMarkers(QLegend* self) {
    self->setReverseMarkers();
}

bool QLegend_ShowToolTips(const QLegend* self) {
    return self->showToolTips();
}

void QLegend_SetShowToolTips(QLegend* self, bool show) {
    self->setShowToolTips(show);
}

bool QLegend_IsInteractive(const QLegend* self) {
    return self->isInteractive();
}

void QLegend_SetInteractive(QLegend* self, bool interactive) {
    self->setInteractive(interactive);
}

int QLegend_MarkerShape(const QLegend* self) {
    return static_cast<int>(self->markerShape());
}

void QLegend_SetMarkerShape(QLegend* self, int shape) {
    self->setMarkerShape(static_cast<QLegend::MarkerShape>(shape));
}

void QLegend_BackgroundVisibleChanged(QLegend* self, bool visible) {
    self->backgroundVisibleChanged(visible);
}

void QLegend_Connect_BackgroundVisibleChanged(QLegend* self, intptr_t slot) {
    void (*slotFunc)(QLegend*, bool) = reinterpret_cast<void (*)(QLegend*, bool)>(slot);
    QLegend::connect(self, &QLegend::backgroundVisibleChanged, [self, slotFunc](bool visible) {
        bool sigval1 = visible;
        slotFunc(self, sigval1);
    });
}

void QLegend_ColorChanged(QLegend* self, QColor* color) {
    self->colorChanged(*color);
}

void QLegend_Connect_ColorChanged(QLegend* self, intptr_t slot) {
    void (*slotFunc)(QLegend*, QColor*) = reinterpret_cast<void (*)(QLegend*, QColor*)>(slot);
    QLegend::connect(self, &QLegend::colorChanged, [self, slotFunc](QColor color) {
        QColor* sigval1 = new QColor(color);
        slotFunc(self, sigval1);
    });
}

void QLegend_BorderColorChanged(QLegend* self, QColor* color) {
    self->borderColorChanged(*color);
}

void QLegend_Connect_BorderColorChanged(QLegend* self, intptr_t slot) {
    void (*slotFunc)(QLegend*, QColor*) = reinterpret_cast<void (*)(QLegend*, QColor*)>(slot);
    QLegend::connect(self, &QLegend::borderColorChanged, [self, slotFunc](QColor color) {
        QColor* sigval1 = new QColor(color);
        slotFunc(self, sigval1);
    });
}

void QLegend_FontChanged(QLegend* self, QFont* font) {
    self->fontChanged(*font);
}

void QLegend_Connect_FontChanged(QLegend* self, intptr_t slot) {
    void (*slotFunc)(QLegend*, QFont*) = reinterpret_cast<void (*)(QLegend*, QFont*)>(slot);
    QLegend::connect(self, &QLegend::fontChanged, [self, slotFunc](QFont font) {
        QFont* sigval1 = new QFont(font);
        slotFunc(self, sigval1);
    });
}

void QLegend_LabelColorChanged(QLegend* self, QColor* color) {
    self->labelColorChanged(*color);
}

void QLegend_Connect_LabelColorChanged(QLegend* self, intptr_t slot) {
    void (*slotFunc)(QLegend*, QColor*) = reinterpret_cast<void (*)(QLegend*, QColor*)>(slot);
    QLegend::connect(self, &QLegend::labelColorChanged, [self, slotFunc](QColor color) {
        QColor* sigval1 = new QColor(color);
        slotFunc(self, sigval1);
    });
}

void QLegend_ReverseMarkersChanged(QLegend* self, bool reverseMarkers) {
    self->reverseMarkersChanged(reverseMarkers);
}

void QLegend_Connect_ReverseMarkersChanged(QLegend* self, intptr_t slot) {
    void (*slotFunc)(QLegend*, bool) = reinterpret_cast<void (*)(QLegend*, bool)>(slot);
    QLegend::connect(self, &QLegend::reverseMarkersChanged, [self, slotFunc](bool reverseMarkers) {
        bool sigval1 = reverseMarkers;
        slotFunc(self, sigval1);
    });
}

void QLegend_ShowToolTipsChanged(QLegend* self, bool showToolTips) {
    self->showToolTipsChanged(showToolTips);
}

void QLegend_Connect_ShowToolTipsChanged(QLegend* self, intptr_t slot) {
    void (*slotFunc)(QLegend*, bool) = reinterpret_cast<void (*)(QLegend*, bool)>(slot);
    QLegend::connect(self, &QLegend::showToolTipsChanged, [self, slotFunc](bool showToolTips) {
        bool sigval1 = showToolTips;
        slotFunc(self, sigval1);
    });
}

void QLegend_MarkerShapeChanged(QLegend* self, int shape) {
    self->markerShapeChanged(static_cast<QLegend::MarkerShape>(shape));
}

void QLegend_Connect_MarkerShapeChanged(QLegend* self, intptr_t slot) {
    void (*slotFunc)(QLegend*, int) = reinterpret_cast<void (*)(QLegend*, int)>(slot);
    QLegend::connect(self, &QLegend::markerShapeChanged, [self, slotFunc](QLegend::MarkerShape shape) {
        int sigval1 = static_cast<int>(shape);
        slotFunc(self, sigval1);
    });
}

void QLegend_AttachedToChartChanged(QLegend* self, bool attachedToChart) {
    self->attachedToChartChanged(attachedToChart);
}

void QLegend_Connect_AttachedToChartChanged(QLegend* self, intptr_t slot) {
    void (*slotFunc)(QLegend*, bool) = reinterpret_cast<void (*)(QLegend*, bool)>(slot);
    QLegend::connect(self, &QLegend::attachedToChartChanged, [self, slotFunc](bool attachedToChart) {
        bool sigval1 = attachedToChart;
        slotFunc(self, sigval1);
    });
}

void QLegend_InteractiveChanged(QLegend* self, bool interactive) {
    self->interactiveChanged(interactive);
}

void QLegend_Connect_InteractiveChanged(QLegend* self, intptr_t slot) {
    void (*slotFunc)(QLegend*, bool) = reinterpret_cast<void (*)(QLegend*, bool)>(slot);
    QLegend::connect(self, &QLegend::interactiveChanged, [self, slotFunc](bool interactive) {
        bool sigval1 = interactive;
        slotFunc(self, sigval1);
    });
}

libqt_string QLegend_Tr2(const char* s, const char* c) {
    QString _ret = QLegend::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QLegend_Tr3(const char* s, const char* c, int n) {
    QString _ret = QLegend::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QLegend_SetBackgroundVisible1(QLegend* self, bool visible) {
    self->setBackgroundVisible(visible);
}

libqt_list /* of QLegendMarker* */ QLegend_Markers1(const QLegend* self, QAbstractSeries* series) {
    QList<QLegendMarker*> _ret = self->markers(series);
    // Convert QList<> from C++ memory to manually-managed C memory
    QLegendMarker** _arr = static_cast<QLegendMarker**>(malloc(sizeof(QLegendMarker*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QLegend_SetReverseMarkers1(QLegend* self, bool reverseMarkers) {
    self->setReverseMarkers(reverseMarkers);
}

void QLegend_Delete(QLegend* self) {
    delete self;
}
