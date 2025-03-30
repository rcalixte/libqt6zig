#include <QAbstractSeries>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QBrush>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QFont>
#include <QLegendMarker>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QPen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qlegendmarker.h>
#include "libqlegendmarker.h"
#include "libqlegendmarker.hxx"

QMetaObject* QLegendMarker_MetaObject(const QLegendMarker* self) {
    return (QMetaObject*)self->metaObject();
}

void* QLegendMarker_Metacast(QLegendMarker* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QLegendMarker_Metacall(QLegendMarker* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QLegendMarker_Tr(const char* s) {
    QString _ret = QLegendMarker::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QLegendMarker_Type(QLegendMarker* self) {
    return static_cast<int>(self->type());
}

libqt_string QLegendMarker_Label(const QLegendMarker* self) {
    QString _ret = self->label();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QLegendMarker_SetLabel(QLegendMarker* self, libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->setLabel(label_QString);
}

QBrush* QLegendMarker_LabelBrush(const QLegendMarker* self) {
    return new QBrush(self->labelBrush());
}

void QLegendMarker_SetLabelBrush(QLegendMarker* self, QBrush* brush) {
    self->setLabelBrush(*brush);
}

QFont* QLegendMarker_Font(const QLegendMarker* self) {
    return new QFont(self->font());
}

void QLegendMarker_SetFont(QLegendMarker* self, QFont* font) {
    self->setFont(*font);
}

QPen* QLegendMarker_Pen(const QLegendMarker* self) {
    return new QPen(self->pen());
}

void QLegendMarker_SetPen(QLegendMarker* self, QPen* pen) {
    self->setPen(*pen);
}

QBrush* QLegendMarker_Brush(const QLegendMarker* self) {
    return new QBrush(self->brush());
}

void QLegendMarker_SetBrush(QLegendMarker* self, QBrush* brush) {
    self->setBrush(*brush);
}

bool QLegendMarker_IsVisible(const QLegendMarker* self) {
    return self->isVisible();
}

void QLegendMarker_SetVisible(QLegendMarker* self, bool visible) {
    self->setVisible(visible);
}

int QLegendMarker_Shape(const QLegendMarker* self) {
    return static_cast<int>(self->shape());
}

void QLegendMarker_SetShape(QLegendMarker* self, int shape) {
    self->setShape(static_cast<QLegend::MarkerShape>(shape));
}

QAbstractSeries* QLegendMarker_Series(QLegendMarker* self) {
    return self->series();
}

void QLegendMarker_Clicked(QLegendMarker* self) {
    self->clicked();
}

void QLegendMarker_Connect_Clicked(QLegendMarker* self, intptr_t slot) {
    void (*slotFunc)(QLegendMarker*) = reinterpret_cast<void (*)(QLegendMarker*)>(slot);
    QLegendMarker::connect(self, &QLegendMarker::clicked, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QLegendMarker_Hovered(QLegendMarker* self, bool status) {
    self->hovered(status);
}

void QLegendMarker_Connect_Hovered(QLegendMarker* self, intptr_t slot) {
    void (*slotFunc)(QLegendMarker*, bool) = reinterpret_cast<void (*)(QLegendMarker*, bool)>(slot);
    QLegendMarker::connect(self, &QLegendMarker::hovered, [self, slotFunc](bool status) {
        bool sigval1 = status;
        slotFunc(self, sigval1);
    });
}

void QLegendMarker_LabelChanged(QLegendMarker* self) {
    self->labelChanged();
}

void QLegendMarker_Connect_LabelChanged(QLegendMarker* self, intptr_t slot) {
    void (*slotFunc)(QLegendMarker*) = reinterpret_cast<void (*)(QLegendMarker*)>(slot);
    QLegendMarker::connect(self, &QLegendMarker::labelChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QLegendMarker_LabelBrushChanged(QLegendMarker* self) {
    self->labelBrushChanged();
}

void QLegendMarker_Connect_LabelBrushChanged(QLegendMarker* self, intptr_t slot) {
    void (*slotFunc)(QLegendMarker*) = reinterpret_cast<void (*)(QLegendMarker*)>(slot);
    QLegendMarker::connect(self, &QLegendMarker::labelBrushChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QLegendMarker_FontChanged(QLegendMarker* self) {
    self->fontChanged();
}

void QLegendMarker_Connect_FontChanged(QLegendMarker* self, intptr_t slot) {
    void (*slotFunc)(QLegendMarker*) = reinterpret_cast<void (*)(QLegendMarker*)>(slot);
    QLegendMarker::connect(self, &QLegendMarker::fontChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QLegendMarker_PenChanged(QLegendMarker* self) {
    self->penChanged();
}

void QLegendMarker_Connect_PenChanged(QLegendMarker* self, intptr_t slot) {
    void (*slotFunc)(QLegendMarker*) = reinterpret_cast<void (*)(QLegendMarker*)>(slot);
    QLegendMarker::connect(self, &QLegendMarker::penChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QLegendMarker_BrushChanged(QLegendMarker* self) {
    self->brushChanged();
}

void QLegendMarker_Connect_BrushChanged(QLegendMarker* self, intptr_t slot) {
    void (*slotFunc)(QLegendMarker*) = reinterpret_cast<void (*)(QLegendMarker*)>(slot);
    QLegendMarker::connect(self, &QLegendMarker::brushChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QLegendMarker_VisibleChanged(QLegendMarker* self) {
    self->visibleChanged();
}

void QLegendMarker_Connect_VisibleChanged(QLegendMarker* self, intptr_t slot) {
    void (*slotFunc)(QLegendMarker*) = reinterpret_cast<void (*)(QLegendMarker*)>(slot);
    QLegendMarker::connect(self, &QLegendMarker::visibleChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QLegendMarker_ShapeChanged(QLegendMarker* self) {
    self->shapeChanged();
}

void QLegendMarker_Connect_ShapeChanged(QLegendMarker* self, intptr_t slot) {
    void (*slotFunc)(QLegendMarker*) = reinterpret_cast<void (*)(QLegendMarker*)>(slot);
    QLegendMarker::connect(self, &QLegendMarker::shapeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QLegendMarker_Tr2(const char* s, const char* c) {
    QString _ret = QLegendMarker::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QLegendMarker_Tr3(const char* s, const char* c, int n) {
    QString _ret = QLegendMarker::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QLegendMarker_Event(QLegendMarker* self, QEvent* event) {
    return self->event(event);
}

bool QLegendMarker_EventFilter(QLegendMarker* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

void QLegendMarker_Delete(QLegendMarker* self) {
    delete self;
}
