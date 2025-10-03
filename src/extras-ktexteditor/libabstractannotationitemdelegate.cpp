#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__AbstractAnnotationItemDelegate
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__AnnotationModel
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__StyleOptionAnnotationItem
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__View
#include <QFontMetricsF>
#include <QHelpEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOption>
#include <abstractannotationitemdelegate.h>
#include "libabstractannotationitemdelegate.h"
#include "libabstractannotationitemdelegate.hxx"

KTextEditor__StyleOptionAnnotationItem* KTextEditor__StyleOptionAnnotationItem_new() {
    return new KTextEditor::StyleOptionAnnotationItem();
}

KTextEditor__StyleOptionAnnotationItem* KTextEditor__StyleOptionAnnotationItem_new2(const KTextEditor__StyleOptionAnnotationItem* other) {
    return new KTextEditor::StyleOptionAnnotationItem(*other);
}

int KTextEditor__StyleOptionAnnotationItem_WrappedLine(const KTextEditor__StyleOptionAnnotationItem* self) {
    return self->wrappedLine;
}

void KTextEditor__StyleOptionAnnotationItem_SetWrappedLine(KTextEditor__StyleOptionAnnotationItem* self, int wrappedLine) {
    self->wrappedLine = static_cast<int>(wrappedLine);
}

int KTextEditor__StyleOptionAnnotationItem_WrappedLineCount(const KTextEditor__StyleOptionAnnotationItem* self) {
    return self->wrappedLineCount;
}

void KTextEditor__StyleOptionAnnotationItem_SetWrappedLineCount(KTextEditor__StyleOptionAnnotationItem* self, int wrappedLineCount) {
    self->wrappedLineCount = static_cast<int>(wrappedLineCount);
}

int KTextEditor__StyleOptionAnnotationItem_VisibleWrappedLineInGroup(const KTextEditor__StyleOptionAnnotationItem* self) {
    return self->visibleWrappedLineInGroup;
}

void KTextEditor__StyleOptionAnnotationItem_SetVisibleWrappedLineInGroup(KTextEditor__StyleOptionAnnotationItem* self, int visibleWrappedLineInGroup) {
    self->visibleWrappedLineInGroup = static_cast<int>(visibleWrappedLineInGroup);
}

KTextEditor__View* KTextEditor__StyleOptionAnnotationItem_View(const KTextEditor__StyleOptionAnnotationItem* self) {
    return self->view;
}

void KTextEditor__StyleOptionAnnotationItem_SetView(KTextEditor__StyleOptionAnnotationItem* self, KTextEditor__View* view) {
    self->view = view;
}

QSize* KTextEditor__StyleOptionAnnotationItem_DecorationSize(const KTextEditor__StyleOptionAnnotationItem* self) {
    return new QSize(self->decorationSize);
}

void KTextEditor__StyleOptionAnnotationItem_SetDecorationSize(KTextEditor__StyleOptionAnnotationItem* self, QSize* decorationSize) {
    self->decorationSize = *decorationSize;
}

QFontMetricsF* KTextEditor__StyleOptionAnnotationItem_ContentFontMetrics(const KTextEditor__StyleOptionAnnotationItem* self) {
    return new QFontMetricsF(self->contentFontMetrics);
}

void KTextEditor__StyleOptionAnnotationItem_SetContentFontMetrics(KTextEditor__StyleOptionAnnotationItem* self, QFontMetricsF* contentFontMetrics) {
    self->contentFontMetrics = *contentFontMetrics;
}

int KTextEditor__StyleOptionAnnotationItem_AnnotationItemGroupingPosition(const KTextEditor__StyleOptionAnnotationItem* self) {
    return static_cast<int>(self->annotationItemGroupingPosition);
}

void KTextEditor__StyleOptionAnnotationItem_SetAnnotationItemGroupingPosition(KTextEditor__StyleOptionAnnotationItem* self, int annotationItemGroupingPosition) {
    self->annotationItemGroupingPosition = static_cast<QFlags<KTextEditor::StyleOptionAnnotationItem::AnnotationItemGroupPosition>>(annotationItemGroupingPosition);
}

void KTextEditor__StyleOptionAnnotationItem_OperatorAssign(KTextEditor__StyleOptionAnnotationItem* self, const KTextEditor__StyleOptionAnnotationItem* param1) {
    self->operator=(*param1);
}

void KTextEditor__StyleOptionAnnotationItem_Delete(KTextEditor__StyleOptionAnnotationItem* self) {
    delete self;
}

QMetaObject* KTextEditor__AbstractAnnotationItemDelegate_MetaObject(const KTextEditor__AbstractAnnotationItemDelegate* self) {
    return (QMetaObject*)self->metaObject();
}

void* KTextEditor__AbstractAnnotationItemDelegate_Metacast(KTextEditor__AbstractAnnotationItemDelegate* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KTextEditor__AbstractAnnotationItemDelegate_Metacall(KTextEditor__AbstractAnnotationItemDelegate* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KTextEditor__AbstractAnnotationItemDelegate_Tr(const char* s) {
    QString _ret = KTextEditor::AbstractAnnotationItemDelegate::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KTextEditor__AbstractAnnotationItemDelegate_Paint(const KTextEditor__AbstractAnnotationItemDelegate* self, QPainter* painter, const KTextEditor__StyleOptionAnnotationItem* option, KTextEditor__AnnotationModel* model, int line) {
    self->paint(painter, *option, model, static_cast<int>(line));
}

QSize* KTextEditor__AbstractAnnotationItemDelegate_SizeHint(const KTextEditor__AbstractAnnotationItemDelegate* self, const KTextEditor__StyleOptionAnnotationItem* option, KTextEditor__AnnotationModel* model, int line) {
    return new QSize(self->sizeHint(*option, model, static_cast<int>(line)));
}

bool KTextEditor__AbstractAnnotationItemDelegate_HelpEvent(KTextEditor__AbstractAnnotationItemDelegate* self, QHelpEvent* event, KTextEditor__View* view, const KTextEditor__StyleOptionAnnotationItem* option, KTextEditor__AnnotationModel* model, int line) {
    return self->helpEvent(event, view, *option, model, static_cast<int>(line));
}

void KTextEditor__AbstractAnnotationItemDelegate_HideTooltip(KTextEditor__AbstractAnnotationItemDelegate* self, KTextEditor__View* view) {
    self->hideTooltip(view);
}

void KTextEditor__AbstractAnnotationItemDelegate_SizeHintChanged(KTextEditor__AbstractAnnotationItemDelegate* self, KTextEditor__AnnotationModel* model, int line) {
    self->sizeHintChanged(model, static_cast<int>(line));
}

void KTextEditor__AbstractAnnotationItemDelegate_Connect_SizeHintChanged(KTextEditor__AbstractAnnotationItemDelegate* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__AbstractAnnotationItemDelegate*, KTextEditor__AnnotationModel*, int) = reinterpret_cast<void (*)(KTextEditor__AbstractAnnotationItemDelegate*, KTextEditor__AnnotationModel*, int)>(slot);
    KTextEditor::AbstractAnnotationItemDelegate::connect(self, &KTextEditor::AbstractAnnotationItemDelegate::sizeHintChanged, [self, slotFunc](KTextEditor::AnnotationModel* model, int line) {
        KTextEditor__AnnotationModel* sigval1 = model;
        int sigval2 = line;
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string KTextEditor__AbstractAnnotationItemDelegate_Tr2(const char* s, const char* c) {
    QString _ret = KTextEditor::AbstractAnnotationItemDelegate::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTextEditor__AbstractAnnotationItemDelegate_Tr3(const char* s, const char* c, int n) {
    QString _ret = KTextEditor::AbstractAnnotationItemDelegate::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KTextEditor__AbstractAnnotationItemDelegate_Delete(KTextEditor__AbstractAnnotationItemDelegate* self) {
    delete self;
}
