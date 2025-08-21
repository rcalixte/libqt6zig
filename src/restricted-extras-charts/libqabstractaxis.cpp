#include <QAbstractAxis>
#include <QBrush>
#include <QColor>
#include <QFont>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qabstractaxis.h>
#include "libqabstractaxis.h"
#include "libqabstractaxis.hxx"

QMetaObject* QAbstractAxis_MetaObject(const QAbstractAxis* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractAxis_Metacast(QAbstractAxis* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractAxis_Metacall(QAbstractAxis* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAbstractAxis_Tr(const char* s) {
    QString _ret = QAbstractAxis::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QAbstractAxis_Type(const QAbstractAxis* self) {
    return static_cast<int>(self->type());
}

bool QAbstractAxis_IsVisible(const QAbstractAxis* self) {
    return self->isVisible();
}

void QAbstractAxis_SetVisible(QAbstractAxis* self) {
    self->setVisible();
}

void QAbstractAxis_Show(QAbstractAxis* self) {
    self->show();
}

void QAbstractAxis_Hide(QAbstractAxis* self) {
    self->hide();
}

bool QAbstractAxis_IsLineVisible(const QAbstractAxis* self) {
    return self->isLineVisible();
}

void QAbstractAxis_SetLineVisible(QAbstractAxis* self) {
    self->setLineVisible();
}

void QAbstractAxis_SetLinePen(QAbstractAxis* self, const QPen* pen) {
    self->setLinePen(*pen);
}

QPen* QAbstractAxis_LinePen(const QAbstractAxis* self) {
    return new QPen(self->linePen());
}

void QAbstractAxis_SetLinePenColor(QAbstractAxis* self, QColor* color) {
    self->setLinePenColor(*color);
}

QColor* QAbstractAxis_LinePenColor(const QAbstractAxis* self) {
    return new QColor(self->linePenColor());
}

bool QAbstractAxis_IsGridLineVisible(const QAbstractAxis* self) {
    return self->isGridLineVisible();
}

void QAbstractAxis_SetGridLineVisible(QAbstractAxis* self) {
    self->setGridLineVisible();
}

void QAbstractAxis_SetGridLinePen(QAbstractAxis* self, const QPen* pen) {
    self->setGridLinePen(*pen);
}

QPen* QAbstractAxis_GridLinePen(const QAbstractAxis* self) {
    return new QPen(self->gridLinePen());
}

bool QAbstractAxis_IsMinorGridLineVisible(const QAbstractAxis* self) {
    return self->isMinorGridLineVisible();
}

void QAbstractAxis_SetMinorGridLineVisible(QAbstractAxis* self) {
    self->setMinorGridLineVisible();
}

void QAbstractAxis_SetMinorGridLinePen(QAbstractAxis* self, const QPen* pen) {
    self->setMinorGridLinePen(*pen);
}

QPen* QAbstractAxis_MinorGridLinePen(const QAbstractAxis* self) {
    return new QPen(self->minorGridLinePen());
}

void QAbstractAxis_SetGridLineColor(QAbstractAxis* self, const QColor* color) {
    self->setGridLineColor(*color);
}

QColor* QAbstractAxis_GridLineColor(QAbstractAxis* self) {
    return new QColor(self->gridLineColor());
}

void QAbstractAxis_SetMinorGridLineColor(QAbstractAxis* self, const QColor* color) {
    self->setMinorGridLineColor(*color);
}

QColor* QAbstractAxis_MinorGridLineColor(QAbstractAxis* self) {
    return new QColor(self->minorGridLineColor());
}

bool QAbstractAxis_LabelsVisible(const QAbstractAxis* self) {
    return self->labelsVisible();
}

void QAbstractAxis_SetLabelsVisible(QAbstractAxis* self) {
    self->setLabelsVisible();
}

void QAbstractAxis_SetLabelsBrush(QAbstractAxis* self, const QBrush* brush) {
    self->setLabelsBrush(*brush);
}

QBrush* QAbstractAxis_LabelsBrush(const QAbstractAxis* self) {
    return new QBrush(self->labelsBrush());
}

void QAbstractAxis_SetLabelsFont(QAbstractAxis* self, const QFont* font) {
    self->setLabelsFont(*font);
}

QFont* QAbstractAxis_LabelsFont(const QAbstractAxis* self) {
    return new QFont(self->labelsFont());
}

void QAbstractAxis_SetLabelsAngle(QAbstractAxis* self, int angle) {
    self->setLabelsAngle(static_cast<int>(angle));
}

int QAbstractAxis_LabelsAngle(const QAbstractAxis* self) {
    return self->labelsAngle();
}

void QAbstractAxis_SetLabelsColor(QAbstractAxis* self, QColor* color) {
    self->setLabelsColor(*color);
}

QColor* QAbstractAxis_LabelsColor(const QAbstractAxis* self) {
    return new QColor(self->labelsColor());
}

bool QAbstractAxis_IsTitleVisible(const QAbstractAxis* self) {
    return self->isTitleVisible();
}

void QAbstractAxis_SetTitleVisible(QAbstractAxis* self) {
    self->setTitleVisible();
}

void QAbstractAxis_SetTitleBrush(QAbstractAxis* self, const QBrush* brush) {
    self->setTitleBrush(*brush);
}

QBrush* QAbstractAxis_TitleBrush(const QAbstractAxis* self) {
    return new QBrush(self->titleBrush());
}

void QAbstractAxis_SetTitleFont(QAbstractAxis* self, const QFont* font) {
    self->setTitleFont(*font);
}

QFont* QAbstractAxis_TitleFont(const QAbstractAxis* self) {
    return new QFont(self->titleFont());
}

void QAbstractAxis_SetTitleText(QAbstractAxis* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setTitleText(title_QString);
}

libqt_string QAbstractAxis_TitleText(const QAbstractAxis* self) {
    QString _ret = self->titleText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QAbstractAxis_ShadesVisible(const QAbstractAxis* self) {
    return self->shadesVisible();
}

void QAbstractAxis_SetShadesVisible(QAbstractAxis* self) {
    self->setShadesVisible();
}

void QAbstractAxis_SetShadesPen(QAbstractAxis* self, const QPen* pen) {
    self->setShadesPen(*pen);
}

QPen* QAbstractAxis_ShadesPen(const QAbstractAxis* self) {
    return new QPen(self->shadesPen());
}

void QAbstractAxis_SetShadesBrush(QAbstractAxis* self, const QBrush* brush) {
    self->setShadesBrush(*brush);
}

QBrush* QAbstractAxis_ShadesBrush(const QAbstractAxis* self) {
    return new QBrush(self->shadesBrush());
}

void QAbstractAxis_SetShadesColor(QAbstractAxis* self, QColor* color) {
    self->setShadesColor(*color);
}

QColor* QAbstractAxis_ShadesColor(const QAbstractAxis* self) {
    return new QColor(self->shadesColor());
}

void QAbstractAxis_SetShadesBorderColor(QAbstractAxis* self, QColor* color) {
    self->setShadesBorderColor(*color);
}

QColor* QAbstractAxis_ShadesBorderColor(const QAbstractAxis* self) {
    return new QColor(self->shadesBorderColor());
}

int QAbstractAxis_Orientation(const QAbstractAxis* self) {
    return static_cast<int>(self->orientation());
}

int QAbstractAxis_Alignment(const QAbstractAxis* self) {
    return static_cast<int>(self->alignment());
}

void QAbstractAxis_SetMin(QAbstractAxis* self, const QVariant* min) {
    self->setMin(*min);
}

void QAbstractAxis_SetMax(QAbstractAxis* self, const QVariant* max) {
    self->setMax(*max);
}

void QAbstractAxis_SetRange(QAbstractAxis* self, const QVariant* min, const QVariant* max) {
    self->setRange(*min, *max);
}

void QAbstractAxis_SetReverse(QAbstractAxis* self) {
    self->setReverse();
}

bool QAbstractAxis_IsReverse(const QAbstractAxis* self) {
    return self->isReverse();
}

void QAbstractAxis_SetLabelsEditable(QAbstractAxis* self) {
    self->setLabelsEditable();
}

bool QAbstractAxis_LabelsEditable(const QAbstractAxis* self) {
    return self->labelsEditable();
}

bool QAbstractAxis_LabelsTruncated(const QAbstractAxis* self) {
    return self->labelsTruncated();
}

void QAbstractAxis_SetTruncateLabels(QAbstractAxis* self) {
    self->setTruncateLabels();
}

bool QAbstractAxis_TruncateLabels(const QAbstractAxis* self) {
    return self->truncateLabels();
}

void QAbstractAxis_VisibleChanged(QAbstractAxis* self, bool visible) {
    self->visibleChanged(visible);
}

void QAbstractAxis_Connect_VisibleChanged(QAbstractAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAxis*, bool) = reinterpret_cast<void (*)(QAbstractAxis*, bool)>(slot);
    QAbstractAxis::connect(self, &QAbstractAxis::visibleChanged, [self, slotFunc](bool visible) {
        bool sigval1 = visible;
        slotFunc(self, sigval1);
    });
}

void QAbstractAxis_LinePenChanged(QAbstractAxis* self, const QPen* pen) {
    self->linePenChanged(*pen);
}

void QAbstractAxis_Connect_LinePenChanged(QAbstractAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAxis*, QPen*) = reinterpret_cast<void (*)(QAbstractAxis*, QPen*)>(slot);
    QAbstractAxis::connect(self, &QAbstractAxis::linePenChanged, [self, slotFunc](const QPen& pen) {
        const QPen& pen_ret = pen;
        // Cast returned reference into pointer
        QPen* sigval1 = const_cast<QPen*>(&pen_ret);
        slotFunc(self, sigval1);
    });
}

void QAbstractAxis_LineVisibleChanged(QAbstractAxis* self, bool visible) {
    self->lineVisibleChanged(visible);
}

void QAbstractAxis_Connect_LineVisibleChanged(QAbstractAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAxis*, bool) = reinterpret_cast<void (*)(QAbstractAxis*, bool)>(slot);
    QAbstractAxis::connect(self, &QAbstractAxis::lineVisibleChanged, [self, slotFunc](bool visible) {
        bool sigval1 = visible;
        slotFunc(self, sigval1);
    });
}

void QAbstractAxis_LabelsVisibleChanged(QAbstractAxis* self, bool visible) {
    self->labelsVisibleChanged(visible);
}

void QAbstractAxis_Connect_LabelsVisibleChanged(QAbstractAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAxis*, bool) = reinterpret_cast<void (*)(QAbstractAxis*, bool)>(slot);
    QAbstractAxis::connect(self, &QAbstractAxis::labelsVisibleChanged, [self, slotFunc](bool visible) {
        bool sigval1 = visible;
        slotFunc(self, sigval1);
    });
}

void QAbstractAxis_LabelsBrushChanged(QAbstractAxis* self, const QBrush* brush) {
    self->labelsBrushChanged(*brush);
}

void QAbstractAxis_Connect_LabelsBrushChanged(QAbstractAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAxis*, QBrush*) = reinterpret_cast<void (*)(QAbstractAxis*, QBrush*)>(slot);
    QAbstractAxis::connect(self, &QAbstractAxis::labelsBrushChanged, [self, slotFunc](const QBrush& brush) {
        const QBrush& brush_ret = brush;
        // Cast returned reference into pointer
        QBrush* sigval1 = const_cast<QBrush*>(&brush_ret);
        slotFunc(self, sigval1);
    });
}

void QAbstractAxis_LabelsFontChanged(QAbstractAxis* self, const QFont* pen) {
    self->labelsFontChanged(*pen);
}

void QAbstractAxis_Connect_LabelsFontChanged(QAbstractAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAxis*, QFont*) = reinterpret_cast<void (*)(QAbstractAxis*, QFont*)>(slot);
    QAbstractAxis::connect(self, &QAbstractAxis::labelsFontChanged, [self, slotFunc](const QFont& pen) {
        const QFont& pen_ret = pen;
        // Cast returned reference into pointer
        QFont* sigval1 = const_cast<QFont*>(&pen_ret);
        slotFunc(self, sigval1);
    });
}

void QAbstractAxis_LabelsAngleChanged(QAbstractAxis* self, int angle) {
    self->labelsAngleChanged(static_cast<int>(angle));
}

void QAbstractAxis_Connect_LabelsAngleChanged(QAbstractAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAxis*, int) = reinterpret_cast<void (*)(QAbstractAxis*, int)>(slot);
    QAbstractAxis::connect(self, &QAbstractAxis::labelsAngleChanged, [self, slotFunc](int angle) {
        int sigval1 = angle;
        slotFunc(self, sigval1);
    });
}

void QAbstractAxis_GridLinePenChanged(QAbstractAxis* self, const QPen* pen) {
    self->gridLinePenChanged(*pen);
}

void QAbstractAxis_Connect_GridLinePenChanged(QAbstractAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAxis*, QPen*) = reinterpret_cast<void (*)(QAbstractAxis*, QPen*)>(slot);
    QAbstractAxis::connect(self, &QAbstractAxis::gridLinePenChanged, [self, slotFunc](const QPen& pen) {
        const QPen& pen_ret = pen;
        // Cast returned reference into pointer
        QPen* sigval1 = const_cast<QPen*>(&pen_ret);
        slotFunc(self, sigval1);
    });
}

void QAbstractAxis_GridVisibleChanged(QAbstractAxis* self, bool visible) {
    self->gridVisibleChanged(visible);
}

void QAbstractAxis_Connect_GridVisibleChanged(QAbstractAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAxis*, bool) = reinterpret_cast<void (*)(QAbstractAxis*, bool)>(slot);
    QAbstractAxis::connect(self, &QAbstractAxis::gridVisibleChanged, [self, slotFunc](bool visible) {
        bool sigval1 = visible;
        slotFunc(self, sigval1);
    });
}

void QAbstractAxis_MinorGridVisibleChanged(QAbstractAxis* self, bool visible) {
    self->minorGridVisibleChanged(visible);
}

void QAbstractAxis_Connect_MinorGridVisibleChanged(QAbstractAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAxis*, bool) = reinterpret_cast<void (*)(QAbstractAxis*, bool)>(slot);
    QAbstractAxis::connect(self, &QAbstractAxis::minorGridVisibleChanged, [self, slotFunc](bool visible) {
        bool sigval1 = visible;
        slotFunc(self, sigval1);
    });
}

void QAbstractAxis_MinorGridLinePenChanged(QAbstractAxis* self, const QPen* pen) {
    self->minorGridLinePenChanged(*pen);
}

void QAbstractAxis_Connect_MinorGridLinePenChanged(QAbstractAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAxis*, QPen*) = reinterpret_cast<void (*)(QAbstractAxis*, QPen*)>(slot);
    QAbstractAxis::connect(self, &QAbstractAxis::minorGridLinePenChanged, [self, slotFunc](const QPen& pen) {
        const QPen& pen_ret = pen;
        // Cast returned reference into pointer
        QPen* sigval1 = const_cast<QPen*>(&pen_ret);
        slotFunc(self, sigval1);
    });
}

void QAbstractAxis_GridLineColorChanged(QAbstractAxis* self, const QColor* color) {
    self->gridLineColorChanged(*color);
}

void QAbstractAxis_Connect_GridLineColorChanged(QAbstractAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAxis*, QColor*) = reinterpret_cast<void (*)(QAbstractAxis*, QColor*)>(slot);
    QAbstractAxis::connect(self, &QAbstractAxis::gridLineColorChanged, [self, slotFunc](const QColor& color) {
        const QColor& color_ret = color;
        // Cast returned reference into pointer
        QColor* sigval1 = const_cast<QColor*>(&color_ret);
        slotFunc(self, sigval1);
    });
}

void QAbstractAxis_MinorGridLineColorChanged(QAbstractAxis* self, const QColor* color) {
    self->minorGridLineColorChanged(*color);
}

void QAbstractAxis_Connect_MinorGridLineColorChanged(QAbstractAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAxis*, QColor*) = reinterpret_cast<void (*)(QAbstractAxis*, QColor*)>(slot);
    QAbstractAxis::connect(self, &QAbstractAxis::minorGridLineColorChanged, [self, slotFunc](const QColor& color) {
        const QColor& color_ret = color;
        // Cast returned reference into pointer
        QColor* sigval1 = const_cast<QColor*>(&color_ret);
        slotFunc(self, sigval1);
    });
}

void QAbstractAxis_ColorChanged(QAbstractAxis* self, QColor* color) {
    self->colorChanged(*color);
}

void QAbstractAxis_Connect_ColorChanged(QAbstractAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAxis*, QColor*) = reinterpret_cast<void (*)(QAbstractAxis*, QColor*)>(slot);
    QAbstractAxis::connect(self, &QAbstractAxis::colorChanged, [self, slotFunc](QColor color) {
        QColor* sigval1 = new QColor(color);
        slotFunc(self, sigval1);
    });
}

void QAbstractAxis_LabelsColorChanged(QAbstractAxis* self, QColor* color) {
    self->labelsColorChanged(*color);
}

void QAbstractAxis_Connect_LabelsColorChanged(QAbstractAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAxis*, QColor*) = reinterpret_cast<void (*)(QAbstractAxis*, QColor*)>(slot);
    QAbstractAxis::connect(self, &QAbstractAxis::labelsColorChanged, [self, slotFunc](QColor color) {
        QColor* sigval1 = new QColor(color);
        slotFunc(self, sigval1);
    });
}

void QAbstractAxis_TitleTextChanged(QAbstractAxis* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->titleTextChanged(title_QString);
}

void QAbstractAxis_Connect_TitleTextChanged(QAbstractAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAxis*, const char*) = reinterpret_cast<void (*)(QAbstractAxis*, const char*)>(slot);
    QAbstractAxis::connect(self, &QAbstractAxis::titleTextChanged, [self, slotFunc](const QString& title) {
        const QString title_ret = title;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray title_b = title_ret.toUtf8();
        const char* title_str = static_cast<const char*>(malloc(title_b.length() + 1));
        memcpy((void*)title_str, title_b.data(), title_b.length());
        ((char*)title_str)[title_b.length()] = '\0';
        const char* sigval1 = title_str;
        slotFunc(self, sigval1);
        libqt_free(title_str);
    });
}

void QAbstractAxis_TitleBrushChanged(QAbstractAxis* self, const QBrush* brush) {
    self->titleBrushChanged(*brush);
}

void QAbstractAxis_Connect_TitleBrushChanged(QAbstractAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAxis*, QBrush*) = reinterpret_cast<void (*)(QAbstractAxis*, QBrush*)>(slot);
    QAbstractAxis::connect(self, &QAbstractAxis::titleBrushChanged, [self, slotFunc](const QBrush& brush) {
        const QBrush& brush_ret = brush;
        // Cast returned reference into pointer
        QBrush* sigval1 = const_cast<QBrush*>(&brush_ret);
        slotFunc(self, sigval1);
    });
}

void QAbstractAxis_TitleVisibleChanged(QAbstractAxis* self, bool visible) {
    self->titleVisibleChanged(visible);
}

void QAbstractAxis_Connect_TitleVisibleChanged(QAbstractAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAxis*, bool) = reinterpret_cast<void (*)(QAbstractAxis*, bool)>(slot);
    QAbstractAxis::connect(self, &QAbstractAxis::titleVisibleChanged, [self, slotFunc](bool visible) {
        bool sigval1 = visible;
        slotFunc(self, sigval1);
    });
}

void QAbstractAxis_TitleFontChanged(QAbstractAxis* self, const QFont* font) {
    self->titleFontChanged(*font);
}

void QAbstractAxis_Connect_TitleFontChanged(QAbstractAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAxis*, QFont*) = reinterpret_cast<void (*)(QAbstractAxis*, QFont*)>(slot);
    QAbstractAxis::connect(self, &QAbstractAxis::titleFontChanged, [self, slotFunc](const QFont& font) {
        const QFont& font_ret = font;
        // Cast returned reference into pointer
        QFont* sigval1 = const_cast<QFont*>(&font_ret);
        slotFunc(self, sigval1);
    });
}

void QAbstractAxis_ShadesVisibleChanged(QAbstractAxis* self, bool visible) {
    self->shadesVisibleChanged(visible);
}

void QAbstractAxis_Connect_ShadesVisibleChanged(QAbstractAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAxis*, bool) = reinterpret_cast<void (*)(QAbstractAxis*, bool)>(slot);
    QAbstractAxis::connect(self, &QAbstractAxis::shadesVisibleChanged, [self, slotFunc](bool visible) {
        bool sigval1 = visible;
        slotFunc(self, sigval1);
    });
}

void QAbstractAxis_ShadesColorChanged(QAbstractAxis* self, QColor* color) {
    self->shadesColorChanged(*color);
}

void QAbstractAxis_Connect_ShadesColorChanged(QAbstractAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAxis*, QColor*) = reinterpret_cast<void (*)(QAbstractAxis*, QColor*)>(slot);
    QAbstractAxis::connect(self, &QAbstractAxis::shadesColorChanged, [self, slotFunc](QColor color) {
        QColor* sigval1 = new QColor(color);
        slotFunc(self, sigval1);
    });
}

void QAbstractAxis_ShadesBorderColorChanged(QAbstractAxis* self, QColor* color) {
    self->shadesBorderColorChanged(*color);
}

void QAbstractAxis_Connect_ShadesBorderColorChanged(QAbstractAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAxis*, QColor*) = reinterpret_cast<void (*)(QAbstractAxis*, QColor*)>(slot);
    QAbstractAxis::connect(self, &QAbstractAxis::shadesBorderColorChanged, [self, slotFunc](QColor color) {
        QColor* sigval1 = new QColor(color);
        slotFunc(self, sigval1);
    });
}

void QAbstractAxis_ShadesPenChanged(QAbstractAxis* self, const QPen* pen) {
    self->shadesPenChanged(*pen);
}

void QAbstractAxis_Connect_ShadesPenChanged(QAbstractAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAxis*, QPen*) = reinterpret_cast<void (*)(QAbstractAxis*, QPen*)>(slot);
    QAbstractAxis::connect(self, &QAbstractAxis::shadesPenChanged, [self, slotFunc](const QPen& pen) {
        const QPen& pen_ret = pen;
        // Cast returned reference into pointer
        QPen* sigval1 = const_cast<QPen*>(&pen_ret);
        slotFunc(self, sigval1);
    });
}

void QAbstractAxis_ShadesBrushChanged(QAbstractAxis* self, const QBrush* brush) {
    self->shadesBrushChanged(*brush);
}

void QAbstractAxis_Connect_ShadesBrushChanged(QAbstractAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAxis*, QBrush*) = reinterpret_cast<void (*)(QAbstractAxis*, QBrush*)>(slot);
    QAbstractAxis::connect(self, &QAbstractAxis::shadesBrushChanged, [self, slotFunc](const QBrush& brush) {
        const QBrush& brush_ret = brush;
        // Cast returned reference into pointer
        QBrush* sigval1 = const_cast<QBrush*>(&brush_ret);
        slotFunc(self, sigval1);
    });
}

void QAbstractAxis_ReverseChanged(QAbstractAxis* self, bool reverse) {
    self->reverseChanged(reverse);
}

void QAbstractAxis_Connect_ReverseChanged(QAbstractAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAxis*, bool) = reinterpret_cast<void (*)(QAbstractAxis*, bool)>(slot);
    QAbstractAxis::connect(self, &QAbstractAxis::reverseChanged, [self, slotFunc](bool reverse) {
        bool sigval1 = reverse;
        slotFunc(self, sigval1);
    });
}

void QAbstractAxis_LabelsEditableChanged(QAbstractAxis* self, bool editable) {
    self->labelsEditableChanged(editable);
}

void QAbstractAxis_Connect_LabelsEditableChanged(QAbstractAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAxis*, bool) = reinterpret_cast<void (*)(QAbstractAxis*, bool)>(slot);
    QAbstractAxis::connect(self, &QAbstractAxis::labelsEditableChanged, [self, slotFunc](bool editable) {
        bool sigval1 = editable;
        slotFunc(self, sigval1);
    });
}

void QAbstractAxis_LabelsTruncatedChanged(QAbstractAxis* self, bool labelsTruncated) {
    self->labelsTruncatedChanged(labelsTruncated);
}

void QAbstractAxis_Connect_LabelsTruncatedChanged(QAbstractAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAxis*, bool) = reinterpret_cast<void (*)(QAbstractAxis*, bool)>(slot);
    QAbstractAxis::connect(self, &QAbstractAxis::labelsTruncatedChanged, [self, slotFunc](bool labelsTruncated) {
        bool sigval1 = labelsTruncated;
        slotFunc(self, sigval1);
    });
}

void QAbstractAxis_TruncateLabelsChanged(QAbstractAxis* self, bool truncateLabels) {
    self->truncateLabelsChanged(truncateLabels);
}

void QAbstractAxis_Connect_TruncateLabelsChanged(QAbstractAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAxis*, bool) = reinterpret_cast<void (*)(QAbstractAxis*, bool)>(slot);
    QAbstractAxis::connect(self, &QAbstractAxis::truncateLabelsChanged, [self, slotFunc](bool truncateLabels) {
        bool sigval1 = truncateLabels;
        slotFunc(self, sigval1);
    });
}

libqt_string QAbstractAxis_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractAxis::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractAxis_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAbstractAxis::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstractAxis_SetVisible1(QAbstractAxis* self, bool visible) {
    self->setVisible(visible);
}

void QAbstractAxis_SetLineVisible1(QAbstractAxis* self, bool visible) {
    self->setLineVisible(visible);
}

void QAbstractAxis_SetGridLineVisible1(QAbstractAxis* self, bool visible) {
    self->setGridLineVisible(visible);
}

void QAbstractAxis_SetMinorGridLineVisible1(QAbstractAxis* self, bool visible) {
    self->setMinorGridLineVisible(visible);
}

void QAbstractAxis_SetLabelsVisible1(QAbstractAxis* self, bool visible) {
    self->setLabelsVisible(visible);
}

void QAbstractAxis_SetTitleVisible1(QAbstractAxis* self, bool visible) {
    self->setTitleVisible(visible);
}

void QAbstractAxis_SetShadesVisible1(QAbstractAxis* self, bool visible) {
    self->setShadesVisible(visible);
}

void QAbstractAxis_SetReverse1(QAbstractAxis* self, bool reverse) {
    self->setReverse(reverse);
}

void QAbstractAxis_SetLabelsEditable1(QAbstractAxis* self, bool editable) {
    self->setLabelsEditable(editable);
}

void QAbstractAxis_SetTruncateLabels1(QAbstractAxis* self, bool truncateLabels) {
    self->setTruncateLabels(truncateLabels);
}

void QAbstractAxis_Delete(QAbstractAxis* self) {
    delete self;
}
