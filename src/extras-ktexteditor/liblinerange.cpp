#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__LineRange
#include <QString>
#include <QByteArray>
#include <cstring>
#include <linerange.h>
#include "liblinerange.h"
#include "liblinerange.hxx"

KTextEditor__LineRange* KTextEditor__LineRange_new(const KTextEditor__LineRange* other) {
    return new KTextEditor::LineRange(*other);
}

KTextEditor__LineRange* KTextEditor__LineRange_new2(KTextEditor__LineRange* other) {
    return new KTextEditor::LineRange(std::move(*other));
}

KTextEditor__LineRange* KTextEditor__LineRange_new3() {
    return new KTextEditor::LineRange();
}

KTextEditor__LineRange* KTextEditor__LineRange_new4(int start, int end) {
    return new KTextEditor::LineRange(static_cast<int>(start), static_cast<int>(end));
}

KTextEditor__LineRange* KTextEditor__LineRange_new5(const KTextEditor__LineRange* param1) {
    return new KTextEditor::LineRange(*param1);
}

void KTextEditor__LineRange_CopyAssign(KTextEditor__LineRange* self, KTextEditor__LineRange* other) {
    *self = *other;
}

void KTextEditor__LineRange_MoveAssign(KTextEditor__LineRange* self, KTextEditor__LineRange* other) {
    *self = std::move(*other);
}

bool KTextEditor__LineRange_IsValid(const KTextEditor__LineRange* self) {
    return self->isValid();
}

KTextEditor__LineRange* KTextEditor__LineRange_Invalid() {
    return new KTextEditor::LineRange(KTextEditor::LineRange::invalid());
}

libqt_string KTextEditor__LineRange_ToString(const KTextEditor__LineRange* self) {
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

int KTextEditor__LineRange_Start(const KTextEditor__LineRange* self) {
    return self->start();
}

int KTextEditor__LineRange_End(const KTextEditor__LineRange* self) {
    return self->end();
}

void KTextEditor__LineRange_SetRange(KTextEditor__LineRange* self, KTextEditor__LineRange* range) {
    self->setRange(*range);
}

void KTextEditor__LineRange_SetRange2(KTextEditor__LineRange* self, int start, int end) {
    self->setRange(static_cast<int>(start), static_cast<int>(end));
}

void KTextEditor__LineRange_SetBothLines(KTextEditor__LineRange* self, int line) {
    self->setBothLines(static_cast<int>(line));
}

void KTextEditor__LineRange_SetStart(KTextEditor__LineRange* self, int start) {
    self->setStart(static_cast<int>(start));
}

void KTextEditor__LineRange_SetEnd(KTextEditor__LineRange* self, int end) {
    self->setEnd(static_cast<int>(end));
}

bool KTextEditor__LineRange_ExpandToRange(KTextEditor__LineRange* self, KTextEditor__LineRange* range) {
    return self->expandToRange(*range);
}

bool KTextEditor__LineRange_ConfineToRange(KTextEditor__LineRange* self, KTextEditor__LineRange* range) {
    return self->confineToRange(*range);
}

bool KTextEditor__LineRange_OnSingleLine(const KTextEditor__LineRange* self) {
    return self->onSingleLine();
}

int KTextEditor__LineRange_NumberOfLines(const KTextEditor__LineRange* self) {
    return self->numberOfLines();
}

bool KTextEditor__LineRange_Contains(const KTextEditor__LineRange* self, KTextEditor__LineRange* range) {
    return self->contains(*range);
}

bool KTextEditor__LineRange_ContainsLine(const KTextEditor__LineRange* self, int line) {
    return self->containsLine(static_cast<int>(line));
}

bool KTextEditor__LineRange_Overlaps(const KTextEditor__LineRange* self, KTextEditor__LineRange* range) {
    return self->overlaps(*range);
}

bool KTextEditor__LineRange_OverlapsLine(const KTextEditor__LineRange* self, int line) {
    return self->overlapsLine(static_cast<int>(line));
}

KTextEditor__LineRange* KTextEditor__LineRange_Intersect(const KTextEditor__LineRange* self, KTextEditor__LineRange* range) {
    return new KTextEditor::LineRange(self->intersect(*range));
}

KTextEditor__LineRange* KTextEditor__LineRange_Encompass(const KTextEditor__LineRange* self, KTextEditor__LineRange* range) {
    return new KTextEditor::LineRange(self->encompass(*range));
}

void KTextEditor__LineRange_Delete(KTextEditor__LineRange* self) {
    delete self;
}
