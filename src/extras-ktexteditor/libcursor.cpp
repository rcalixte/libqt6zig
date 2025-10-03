#include <KTextEditor/Cursor>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <cursor.h>
#include "libcursor.h"
#include "libcursor.hxx"

KTextEditor__Cursor* KTextEditor__Cursor_new(const KTextEditor__Cursor* other) {
    return new KTextEditor::Cursor(*other);
}

KTextEditor__Cursor* KTextEditor__Cursor_new2(KTextEditor__Cursor* other) {
    return new KTextEditor::Cursor(std::move(*other));
}

KTextEditor__Cursor* KTextEditor__Cursor_new3() {
    return new KTextEditor::Cursor();
}

KTextEditor__Cursor* KTextEditor__Cursor_new4(int line, int column) {
    return new KTextEditor::Cursor(static_cast<int>(line), static_cast<int>(column));
}

KTextEditor__Cursor* KTextEditor__Cursor_new5(const KTextEditor__Cursor* param1) {
    return new KTextEditor::Cursor(*param1);
}

void KTextEditor__Cursor_CopyAssign(KTextEditor__Cursor* self, KTextEditor__Cursor* other) {
    *self = *other;
}

void KTextEditor__Cursor_MoveAssign(KTextEditor__Cursor* self, KTextEditor__Cursor* other) {
    *self = std::move(*other);
}

bool KTextEditor__Cursor_IsValid(const KTextEditor__Cursor* self) {
    return self->isValid();
}

KTextEditor__Cursor* KTextEditor__Cursor_Invalid() {
    return new KTextEditor::Cursor(KTextEditor::Cursor::invalid());
}

KTextEditor__Cursor* KTextEditor__Cursor_Start() {
    return new KTextEditor::Cursor(KTextEditor::Cursor::start());
}

libqt_string KTextEditor__Cursor_ToString(const KTextEditor__Cursor* self) {
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

void KTextEditor__Cursor_SetPosition(KTextEditor__Cursor* self, KTextEditor__Cursor* position) {
    self->setPosition(*position);
}

void KTextEditor__Cursor_SetPosition2(KTextEditor__Cursor* self, int line, int column) {
    self->setPosition(static_cast<int>(line), static_cast<int>(column));
}

int KTextEditor__Cursor_Line(const KTextEditor__Cursor* self) {
    return self->line();
}

void KTextEditor__Cursor_SetLine(KTextEditor__Cursor* self, int line) {
    self->setLine(static_cast<int>(line));
}

int KTextEditor__Cursor_Column(const KTextEditor__Cursor* self) {
    return self->column();
}

void KTextEditor__Cursor_SetColumn(KTextEditor__Cursor* self, int column) {
    self->setColumn(static_cast<int>(column));
}

bool KTextEditor__Cursor_AtStartOfLine(const KTextEditor__Cursor* self) {
    return self->atStartOfLine();
}

bool KTextEditor__Cursor_AtStartOfDocument(const KTextEditor__Cursor* self) {
    return self->atStartOfDocument();
}

void KTextEditor__Cursor_Position(const KTextEditor__Cursor* self, int* line, int* column) {
    self->position(static_cast<int&>(*line), static_cast<int&>(*column));
}

void KTextEditor__Cursor_Delete(KTextEditor__Cursor* self) {
    delete self;
}
