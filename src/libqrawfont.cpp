#include <QByteArray>
#include <QChar>
#include <QFont>
#define WORKAROUND_INNER_CLASS_DEFINITION_QFont__Tag
#include <QImage>
#include <QList>
#include <QPainterPath>
#include <QPointF>
#include <QRawFont>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTransform>
#include <qrawfont.h>
#include "libqrawfont.h"
#include "libqrawfont.hxx"

QRawFont* QRawFont_new() {
    return new QRawFont();
}

QRawFont* QRawFont_new2(const libqt_string fileName, double pixelSize) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new QRawFont(fileName_QString, static_cast<qreal>(pixelSize));
}

QRawFont* QRawFont_new3(const libqt_string fontData, double pixelSize) {
    QByteArray fontData_QByteArray(fontData.data, fontData.len);
    return new QRawFont(fontData_QByteArray, static_cast<qreal>(pixelSize));
}

QRawFont* QRawFont_new4(const QRawFont* other) {
    return new QRawFont(*other);
}

QRawFont* QRawFont_new5(const libqt_string fileName, double pixelSize, int hintingPreference) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new QRawFont(fileName_QString, static_cast<qreal>(pixelSize), static_cast<QFont::HintingPreference>(hintingPreference));
}

QRawFont* QRawFont_new6(const libqt_string fontData, double pixelSize, int hintingPreference) {
    QByteArray fontData_QByteArray(fontData.data, fontData.len);
    return new QRawFont(fontData_QByteArray, static_cast<qreal>(pixelSize), static_cast<QFont::HintingPreference>(hintingPreference));
}

void QRawFont_OperatorAssign(QRawFont* self, const QRawFont* other) {
    self->operator=(*other);
}

void QRawFont_Swap(QRawFont* self, QRawFont* other) {
    self->swap(*other);
}

bool QRawFont_IsValid(const QRawFont* self) {
    return self->isValid();
}

bool QRawFont_OperatorEqual(const QRawFont* self, const QRawFont* other) {
    return (*self == *other);
}

bool QRawFont_OperatorNotEqual(const QRawFont* self, const QRawFont* other) {
    return (*self != *other);
}

libqt_string QRawFont_FamilyName(const QRawFont* self) {
    QString _ret = self->familyName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QRawFont_StyleName(const QRawFont* self) {
    QString _ret = self->styleName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QRawFont_Style(const QRawFont* self) {
    return static_cast<int>(self->style());
}

int QRawFont_Weight(const QRawFont* self) {
    return self->weight();
}

libqt_list /* of unsigned int */ QRawFont_GlyphIndexesForString(const QRawFont* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<unsigned int> _ret = self->glyphIndexesForString(text_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    unsigned int* _arr = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QPointF* */ QRawFont_AdvancesForGlyphIndexes(const QRawFont* self, const libqt_list /* of unsigned int */ glyphIndexes) {
    QList<unsigned int> glyphIndexes_QList;
    glyphIndexes_QList.reserve(glyphIndexes.len);
    unsigned int* glyphIndexes_arr = static_cast<unsigned int*>(glyphIndexes.data);
    for (size_t i = 0; i < glyphIndexes.len; ++i) {
        glyphIndexes_QList.push_back(static_cast<unsigned int>(glyphIndexes_arr[i]));
    }
    QList<QPointF> _ret = self->advancesForGlyphIndexes(glyphIndexes_QList);
    // Convert QList<> from C++ memory to manually-managed C memory
    QPointF** _arr = static_cast<QPointF**>(malloc(sizeof(QPointF*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QPointF(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QPointF* */ QRawFont_AdvancesForGlyphIndexes2(const QRawFont* self, const libqt_list /* of unsigned int */ glyphIndexes, int layoutFlags) {
    QList<unsigned int> glyphIndexes_QList;
    glyphIndexes_QList.reserve(glyphIndexes.len);
    unsigned int* glyphIndexes_arr = static_cast<unsigned int*>(glyphIndexes.data);
    for (size_t i = 0; i < glyphIndexes.len; ++i) {
        glyphIndexes_QList.push_back(static_cast<unsigned int>(glyphIndexes_arr[i]));
    }
    QList<QPointF> _ret = self->advancesForGlyphIndexes(glyphIndexes_QList, static_cast<QRawFont::LayoutFlags>(layoutFlags));
    // Convert QList<> from C++ memory to manually-managed C memory
    QPointF** _arr = static_cast<QPointF**>(malloc(sizeof(QPointF*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QPointF(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool QRawFont_GlyphIndexesForChars(const QRawFont* self, const QChar* chars, int numChars, unsigned int* glyphIndexes, int* numGlyphs) {
    return self->glyphIndexesForChars(chars, static_cast<int>(numChars), static_cast<quint32*>(glyphIndexes), static_cast<int*>(numGlyphs));
}

bool QRawFont_AdvancesForGlyphIndexes3(const QRawFont* self, const unsigned int* glyphIndexes, QPointF* advances, int numGlyphs) {
    return self->advancesForGlyphIndexes(static_cast<const quint32*>(glyphIndexes), advances, static_cast<int>(numGlyphs));
}

bool QRawFont_AdvancesForGlyphIndexes4(const QRawFont* self, const unsigned int* glyphIndexes, QPointF* advances, int numGlyphs, int layoutFlags) {
    return self->advancesForGlyphIndexes(static_cast<const quint32*>(glyphIndexes), advances, static_cast<int>(numGlyphs), static_cast<QRawFont::LayoutFlags>(layoutFlags));
}

QImage* QRawFont_AlphaMapForGlyph(const QRawFont* self, unsigned int glyphIndex) {
    return new QImage(self->alphaMapForGlyph(static_cast<quint32>(glyphIndex)));
}

QPainterPath* QRawFont_PathForGlyph(const QRawFont* self, unsigned int glyphIndex) {
    return new QPainterPath(self->pathForGlyph(static_cast<quint32>(glyphIndex)));
}

QRectF* QRawFont_BoundingRect(const QRawFont* self, unsigned int glyphIndex) {
    return new QRectF(self->boundingRect(static_cast<quint32>(glyphIndex)));
}

void QRawFont_SetPixelSize(QRawFont* self, double pixelSize) {
    self->setPixelSize(static_cast<qreal>(pixelSize));
}

double QRawFont_PixelSize(const QRawFont* self) {
    return static_cast<double>(self->pixelSize());
}

int QRawFont_HintingPreference(const QRawFont* self) {
    return static_cast<int>(self->hintingPreference());
}

double QRawFont_Ascent(const QRawFont* self) {
    return static_cast<double>(self->ascent());
}

double QRawFont_CapHeight(const QRawFont* self) {
    return static_cast<double>(self->capHeight());
}

double QRawFont_Descent(const QRawFont* self) {
    return static_cast<double>(self->descent());
}

double QRawFont_Leading(const QRawFont* self) {
    return static_cast<double>(self->leading());
}

double QRawFont_XHeight(const QRawFont* self) {
    return static_cast<double>(self->xHeight());
}

double QRawFont_AverageCharWidth(const QRawFont* self) {
    return static_cast<double>(self->averageCharWidth());
}

double QRawFont_MaxCharWidth(const QRawFont* self) {
    return static_cast<double>(self->maxCharWidth());
}

double QRawFont_LineThickness(const QRawFont* self) {
    return static_cast<double>(self->lineThickness());
}

double QRawFont_UnderlinePosition(const QRawFont* self) {
    return static_cast<double>(self->underlinePosition());
}

double QRawFont_UnitsPerEm(const QRawFont* self) {
    return static_cast<double>(self->unitsPerEm());
}

void QRawFont_LoadFromFile(QRawFont* self, const libqt_string fileName, double pixelSize, int hintingPreference) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->loadFromFile(fileName_QString, static_cast<qreal>(pixelSize), static_cast<QFont::HintingPreference>(hintingPreference));
}

void QRawFont_LoadFromData(QRawFont* self, const libqt_string fontData, double pixelSize, int hintingPreference) {
    QByteArray fontData_QByteArray(fontData.data, fontData.len);
    self->loadFromData(fontData_QByteArray, static_cast<qreal>(pixelSize), static_cast<QFont::HintingPreference>(hintingPreference));
}

bool QRawFont_SupportsCharacter(const QRawFont* self, unsigned int ucs4) {
    return self->supportsCharacter(static_cast<uint>(ucs4));
}

bool QRawFont_SupportsCharacter2(const QRawFont* self, QChar* character) {
    return self->supportsCharacter(*character);
}

libqt_list /* of int */ QRawFont_SupportedWritingSystems(const QRawFont* self) {
    QList<QFontDatabase::WritingSystem> _ret = self->supportedWritingSystems();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QRawFont_FontTable(const QRawFont* self, const char* tagName) {
    QByteArray _qb = self->fontTable(tagName);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QRawFont_FontTable2(const QRawFont* self, QFont__Tag* tag) {
    QByteArray _qb = self->fontTable(*tag);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QRawFont* QRawFont_FromFont(const QFont* font) {
    return new QRawFont(QRawFont::fromFont(*font));
}

QImage* QRawFont_AlphaMapForGlyph2(const QRawFont* self, unsigned int glyphIndex, int antialiasingType) {
    return new QImage(self->alphaMapForGlyph(static_cast<quint32>(glyphIndex), static_cast<QRawFont::AntialiasingType>(antialiasingType)));
}

QImage* QRawFont_AlphaMapForGlyph3(const QRawFont* self, unsigned int glyphIndex, int antialiasingType, const QTransform* transform) {
    return new QImage(self->alphaMapForGlyph(static_cast<quint32>(glyphIndex), static_cast<QRawFont::AntialiasingType>(antialiasingType), *transform));
}

QRawFont* QRawFont_FromFont2(const QFont* font, int writingSystem) {
    return new QRawFont(QRawFont::fromFont(*font, static_cast<QFontDatabase::WritingSystem>(writingSystem)));
}

void QRawFont_Delete(QRawFont* self) {
    delete self;
}
