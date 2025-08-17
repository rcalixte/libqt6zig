#include <QGlyphRun>
#include <QList>
#include <QPointF>
#include <QRawFont>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qglyphrun.h>
#include "libqglyphrun.h"
#include "libqglyphrun.hxx"

QGlyphRun* QGlyphRun_new() {
    return new QGlyphRun();
}

QGlyphRun* QGlyphRun_new2(const QGlyphRun* other) {
    return new QGlyphRun(*other);
}

void QGlyphRun_OperatorAssign(QGlyphRun* self, const QGlyphRun* other) {
    self->operator=(*other);
}

void QGlyphRun_Swap(QGlyphRun* self, QGlyphRun* other) {
    self->swap(*other);
}

QRawFont* QGlyphRun_RawFont(const QGlyphRun* self) {
    return new QRawFont(self->rawFont());
}

void QGlyphRun_SetRawFont(QGlyphRun* self, const QRawFont* rawFont) {
    self->setRawFont(*rawFont);
}

void QGlyphRun_SetRawData(QGlyphRun* self, const unsigned int* glyphIndexArray, const QPointF* glyphPositionArray, int size) {
    self->setRawData(static_cast<const quint32*>(glyphIndexArray), glyphPositionArray, static_cast<int>(size));
}

libqt_list /* of unsigned int */ QGlyphRun_GlyphIndexes(const QGlyphRun* self) {
    QList<unsigned int> _ret = self->glyphIndexes();
    // Convert QList<> from C++ memory to manually-managed C memory
    unsigned int* _arr = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QGlyphRun_SetGlyphIndexes(QGlyphRun* self, const libqt_list /* of unsigned int */ glyphIndexes) {
    QList<unsigned int> glyphIndexes_QList;
    glyphIndexes_QList.reserve(glyphIndexes.len);
    unsigned int* glyphIndexes_arr = static_cast<unsigned int*>(glyphIndexes.data);
    for (size_t i = 0; i < glyphIndexes.len; ++i) {
        glyphIndexes_QList.push_back(static_cast<unsigned int>(glyphIndexes_arr[i]));
    }
    self->setGlyphIndexes(glyphIndexes_QList);
}

libqt_list /* of QPointF* */ QGlyphRun_Positions(const QGlyphRun* self) {
    QList<QPointF> _ret = self->positions();
    // Convert QList<> from C++ memory to manually-managed C memory
    QPointF** _arr = static_cast<QPointF**>(malloc(sizeof(QPointF*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QPointF(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QGlyphRun_SetPositions(QGlyphRun* self, const libqt_list /* of QPointF* */ positions) {
    QList<QPointF> positions_QList;
    positions_QList.reserve(positions.len);
    QPointF** positions_arr = static_cast<QPointF**>(positions.data);
    for (size_t i = 0; i < positions.len; ++i) {
        positions_QList.push_back(*(positions_arr[i]));
    }
    self->setPositions(positions_QList);
}

void QGlyphRun_Clear(QGlyphRun* self) {
    self->clear();
}

bool QGlyphRun_OperatorEqual(const QGlyphRun* self, const QGlyphRun* other) {
    return (*self == *other);
}

bool QGlyphRun_OperatorNotEqual(const QGlyphRun* self, const QGlyphRun* other) {
    return (*self != *other);
}

void QGlyphRun_SetOverline(QGlyphRun* self, bool overline) {
    self->setOverline(overline);
}

bool QGlyphRun_Overline(const QGlyphRun* self) {
    return self->overline();
}

void QGlyphRun_SetUnderline(QGlyphRun* self, bool underline) {
    self->setUnderline(underline);
}

bool QGlyphRun_Underline(const QGlyphRun* self) {
    return self->underline();
}

void QGlyphRun_SetStrikeOut(QGlyphRun* self, bool strikeOut) {
    self->setStrikeOut(strikeOut);
}

bool QGlyphRun_StrikeOut(const QGlyphRun* self) {
    return self->strikeOut();
}

void QGlyphRun_SetRightToLeft(QGlyphRun* self, bool on) {
    self->setRightToLeft(on);
}

bool QGlyphRun_IsRightToLeft(const QGlyphRun* self) {
    return self->isRightToLeft();
}

void QGlyphRun_SetFlag(QGlyphRun* self, int flag) {
    self->setFlag(static_cast<QGlyphRun::GlyphRunFlag>(flag));
}

void QGlyphRun_SetFlags(QGlyphRun* self, int flags) {
    self->setFlags(static_cast<QGlyphRun::GlyphRunFlags>(flags));
}

int QGlyphRun_Flags(const QGlyphRun* self) {
    return static_cast<int>(self->flags());
}

void QGlyphRun_SetBoundingRect(QGlyphRun* self, const QRectF* boundingRect) {
    self->setBoundingRect(*boundingRect);
}

QRectF* QGlyphRun_BoundingRect(const QGlyphRun* self) {
    return new QRectF(self->boundingRect());
}

libqt_list /* of ptrdiff_t */ QGlyphRun_StringIndexes(const QGlyphRun* self) {
    QList<QIntegerForSizeof<std::size_t>::Signed> _ret = self->stringIndexes();
    // Convert QList<> from C++ memory to manually-managed C memory
    ptrdiff_t* _arr = static_cast<ptrdiff_t*>(malloc(sizeof(ptrdiff_t) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QGlyphRun_SetStringIndexes(QGlyphRun* self, const libqt_list /* of ptrdiff_t */ stringIndexes) {
    QList<QIntegerForSizeof<std::size_t>::Signed> stringIndexes_QList;
    stringIndexes_QList.reserve(stringIndexes.len);
    ptrdiff_t* stringIndexes_arr = static_cast<ptrdiff_t*>(stringIndexes.data);
    for (size_t i = 0; i < stringIndexes.len; ++i) {
        stringIndexes_QList.push_back(static_cast<QIntegerForSizeof<std::size_t>::Signed>(stringIndexes_arr[i]));
    }
    self->setStringIndexes(stringIndexes_QList);
}

void QGlyphRun_SetSourceString(QGlyphRun* self, const libqt_string sourceString) {
    QString sourceString_QString = QString::fromUtf8(sourceString.data, sourceString.len);
    self->setSourceString(sourceString_QString);
}

libqt_string QGlyphRun_SourceString(const QGlyphRun* self) {
    QString _ret = self->sourceString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QGlyphRun_IsEmpty(const QGlyphRun* self) {
    return self->isEmpty();
}

void QGlyphRun_SetFlag2(QGlyphRun* self, int flag, bool enabled) {
    self->setFlag(static_cast<QGlyphRun::GlyphRunFlag>(flag), enabled);
}

void QGlyphRun_Delete(QGlyphRun* self) {
    delete self;
}
