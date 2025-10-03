#include <KTextEditor/Cursor>
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__LineRange
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Range
#include <QString>
#include <QByteArray>
#include <cstring>
#include <range.h>
#include "librange.h"
#include "librange.hxx"

KTextEditor__Range* KTextEditor__Range_new(const KTextEditor__Range* other) {
    return new KTextEditor::Range(*other);
}

KTextEditor__Range* KTextEditor__Range_new2(KTextEditor__Range* other) {
    return new KTextEditor::Range(std::move(*other));
}

KTextEditor__Range* KTextEditor__Range_new3() {
    return new KTextEditor::Range();
}

KTextEditor__Range* KTextEditor__Range_new4(KTextEditor__Cursor* start, KTextEditor__Cursor* end) {
    return new KTextEditor::Range(*start, *end);
}

KTextEditor__Range* KTextEditor__Range_new5(KTextEditor__Cursor* start, int width) {
    return new KTextEditor::Range(*start, static_cast<int>(width));
}

KTextEditor__Range* KTextEditor__Range_new6(KTextEditor__Cursor* start, int endLine, int endColumn) {
    return new KTextEditor::Range(*start, static_cast<int>(endLine), static_cast<int>(endColumn));
}

KTextEditor__Range* KTextEditor__Range_new7(int startLine, int startColumn, int endLine, int endColumn) {
    return new KTextEditor::Range(static_cast<int>(startLine), static_cast<int>(startColumn), static_cast<int>(endLine), static_cast<int>(endColumn));
}

KTextEditor__Range* KTextEditor__Range_new8(const KTextEditor__Range* param1) {
    return new KTextEditor::Range(*param1);
}

void KTextEditor__Range_CopyAssign(KTextEditor__Range* self, KTextEditor__Range* other) {
    *self = *other;
}

void KTextEditor__Range_MoveAssign(KTextEditor__Range* self, KTextEditor__Range* other) {
    *self = std::move(*other);
}

bool KTextEditor__Range_IsValid(const KTextEditor__Range* self) {
    return self->isValid();
}

KTextEditor__Range* KTextEditor__Range_Invalid() {
    return new KTextEditor::Range(KTextEditor::Range::invalid());
}

libqt_string KTextEditor__Range_ToString(const KTextEditor__Range* self) {
    QString _ret = self->toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KTextEditor__Cursor* KTextEditor__Range_Start(const KTextEditor__Range* self) {
    return new KTextEditor::Cursor(self->start());
}

KTextEditor__Cursor* KTextEditor__Range_End(const KTextEditor__Range* self) {
    return new KTextEditor::Cursor(self->end());
}

KTextEditor__LineRange* KTextEditor__Range_ToLineRange(const KTextEditor__Range* self) {
    return new KTextEditor::LineRange(self->toLineRange());
}

void KTextEditor__Range_SetBothLines(KTextEditor__Range* self, int line) {
    self->setBothLines(static_cast<int>(line));
}

void KTextEditor__Range_SetBothColumns(KTextEditor__Range* self, int column) {
    self->setBothColumns(static_cast<int>(column));
}

void KTextEditor__Range_SetRange(KTextEditor__Range* self, KTextEditor__Range* range) {
    self->setRange(*range);
}

void KTextEditor__Range_SetRange2(KTextEditor__Range* self, KTextEditor__Cursor* start, KTextEditor__Cursor* end) {
    self->setRange(*start, *end);
}

void KTextEditor__Range_SetStart(KTextEditor__Range* self, KTextEditor__Cursor* start) {
    self->setStart(*start);
}

void KTextEditor__Range_SetEnd(KTextEditor__Range* self, KTextEditor__Cursor* end) {
    self->setEnd(*end);
}

bool KTextEditor__Range_ExpandToRange(KTextEditor__Range* self, KTextEditor__Range* range) {
    return self->expandToRange(*range);
}

bool KTextEditor__Range_ConfineToRange(KTextEditor__Range* self, KTextEditor__Range* range) {
    return self->confineToRange(*range);
}

bool KTextEditor__Range_OnSingleLine(const KTextEditor__Range* self) {
    return self->onSingleLine();
}

int KTextEditor__Range_NumberOfLines(const KTextEditor__Range* self) {
    return self->numberOfLines();
}

int KTextEditor__Range_ColumnWidth(const KTextEditor__Range* self) {
    return self->columnWidth();
}

bool KTextEditor__Range_IsEmpty(const KTextEditor__Range* self) {
    return self->isEmpty();
}

bool KTextEditor__Range_Contains(const KTextEditor__Range* self, KTextEditor__Range* range) {
    return self->contains(*range);
}

bool KTextEditor__Range_Contains2(const KTextEditor__Range* self, KTextEditor__Cursor* cursor) {
    return self->contains(*cursor);
}

bool KTextEditor__Range_ContainsLine(const KTextEditor__Range* self, int line) {
    return self->containsLine(static_cast<int>(line));
}

bool KTextEditor__Range_ContainsColumn(const KTextEditor__Range* self, int column) {
    return self->containsColumn(static_cast<int>(column));
}

bool KTextEditor__Range_Overlaps(const KTextEditor__Range* self, KTextEditor__Range* range) {
    return self->overlaps(*range);
}

bool KTextEditor__Range_OverlapsLine(const KTextEditor__Range* self, int line) {
    return self->overlapsLine(static_cast<int>(line));
}

bool KTextEditor__Range_OverlapsColumn(const KTextEditor__Range* self, int column) {
    return self->overlapsColumn(static_cast<int>(column));
}

bool KTextEditor__Range_BoundaryAtCursor(const KTextEditor__Range* self, KTextEditor__Cursor* cursor) {
    return self->boundaryAtCursor(*cursor);
}

KTextEditor__Range* KTextEditor__Range_Intersect(const KTextEditor__Range* self, KTextEditor__Range* range) {
    return new KTextEditor::Range(self->intersect(*range));
}

KTextEditor__Range* KTextEditor__Range_Encompass(const KTextEditor__Range* self, KTextEditor__Range* range) {
    return new KTextEditor::Range(self->encompass(*range));
}

void KTextEditor__Range_Delete(KTextEditor__Range* self) {
    delete self;
}
