#include <QAbstractSeries>
#include <QAction>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QBrush>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
#include <QCursor>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QGraphicsEffect>
#include <QGraphicsItem>
#include <QGraphicsItemGroup>
#include <QGraphicsLayout>
#include <QGraphicsLayoutItem>
#include <QGraphicsObject>
#include <QGraphicsScene>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneMoveEvent>
#include <QGraphicsSceneResizeEvent>
#include <QGraphicsSceneWheelEvent>
#include <QGraphicsTransform>
#include <QGraphicsWidget>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QKeySequence>
#include <QLegend>
#include <QLegendMarker>
#include <QList>
#include <QMarginsF>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPalette>
#include <QPen>
#include <QPointF>
#include <QRectF>
#include <QRegion>
#include <QShowEvent>
#include <QSize>
#include <QSizeF>
#include <QSizePolicy>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleOptionGraphicsItem>
#include <QThread>
#include <QTimerEvent>
#include <QTransform>
#include <QVariant>
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
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QLegend_Paint(QLegend* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->paint(painter, option, widget);
}

void QLegend_SetBrush(QLegend* self, QBrush* brush) {
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

void QLegend_SetPen(QLegend* self, QPen* pen) {
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

void QLegend_SetFont(QLegend* self, QFont* font) {
    self->setFont(*font);
}

QFont* QLegend_Font(const QLegend* self) {
    return new QFont(self->font());
}

void QLegend_SetLabelBrush(QLegend* self, QBrush* brush) {
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
    QLegendMarker** _arr = static_cast<QLegendMarker**>(malloc(sizeof(QLegendMarker*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
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
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QLegend_Tr3(const char* s, const char* c, int n) {
    QString _ret = QLegend::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QLegend_SetBackgroundVisible1(QLegend* self, bool visible) {
    self->setBackgroundVisible(visible);
}

libqt_list /* of QLegendMarker* */ QLegend_Markers1(const QLegend* self, QAbstractSeries* series) {
    QList<QLegendMarker*> _ret = self->markers(series);
    // Convert QList<> from C++ memory to manually-managed C memory
    QLegendMarker** _arr = static_cast<QLegendMarker**>(malloc(sizeof(QLegendMarker*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QLegend_SetReverseMarkers1(QLegend* self, bool reverseMarkers) {
    self->setReverseMarkers(reverseMarkers);
}

void QLegend_SetGeometry(QLegend* self, QRectF* rect) {
    self->setGeometry(*rect);
}

void QLegend_GetContentsMargins(const QLegend* self, double* left, double* top, double* right, double* bottom) {
    self->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

int QLegend_Type(const QLegend* self) {
    return self->type();
}

void QLegend_PaintWindowFrame(QLegend* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    self->paintWindowFrame(painter, option, widget);
}

QRectF* QLegend_BoundingRect(const QLegend* self) {
    return new QRectF(self->boundingRect());
}

QPainterPath* QLegend_Shape(const QLegend* self) {
    return new QPainterPath(self->shape());
}

bool QLegend_EventFilter(QLegend* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

void QLegend_Advance(QLegend* self, int phase) {
    self->advance(static_cast<int>(phase));
}

bool QLegend_Contains(const QLegend* self, QPointF* point) {
    return self->contains(*point);
}

bool QLegend_CollidesWithItem(const QLegend* self, QGraphicsItem* other, int mode) {
    return self->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

bool QLegend_CollidesWithPath(const QLegend* self, QPainterPath* path, int mode) {
    return self->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

bool QLegend_IsObscuredBy(const QLegend* self, QGraphicsItem* item) {
    return self->isObscuredBy(item);
}

QPainterPath* QLegend_OpaqueArea(const QLegend* self) {
    return new QPainterPath(self->opaqueArea());
}

bool QLegend_IsEmpty(const QLegend* self) {
    return self->isEmpty();
}

void QLegend_Delete(QLegend* self) {
    delete self;
}
