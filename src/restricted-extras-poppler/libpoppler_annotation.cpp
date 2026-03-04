#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__Annotation
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__Annotation__Popup
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__Annotation__Style
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__AnnotationAppearance
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__CaretAnnotation
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__EmbeddedFile
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__FileAttachmentAnnotation
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__GeomAnnotation
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__HighlightAnnotation
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__HighlightAnnotation__Quad
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__InkAnnotation
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LineAnnotation
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__Link
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkAnnotation
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkRendition
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__MovieAnnotation
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__MovieObject
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__PDFConverter__NewSignatureData
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__RichMediaAnnotation
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__RichMediaAnnotation__Activation
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__RichMediaAnnotation__Asset
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__RichMediaAnnotation__Configuration
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__RichMediaAnnotation__Content
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__RichMediaAnnotation__Deactivation
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__RichMediaAnnotation__Instance
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__RichMediaAnnotation__Params
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__RichMediaAnnotation__Settings
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__ScreenAnnotation
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__SignatureAnnotation
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__SoundAnnotation
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__SoundObject
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__StampAnnotation
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__TextAnnotation
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__WidgetAnnotation
#include <QColor>
#include <QDateTime>
#include <QFont>
#include <QImage>
#include <QList>
#include <QPointF>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVector>
#include <poppler-link.h>
#include <poppler-annotation.h>
#include "libpoppler_annotation.h"
#include "libpoppler_annotation.hxx"

libqt_string Poppler__Annotation_Author(const Poppler__Annotation* self) {
    QString _ret = self->author();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Poppler__Annotation_SetAuthor(Poppler__Annotation* self, const libqt_string author) {
    QString author_QString = QString::fromUtf8(author.data, author.len);
    self->setAuthor(author_QString);
}

libqt_string Poppler__Annotation_Contents(const Poppler__Annotation* self) {
    QString _ret = self->contents();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Poppler__Annotation_SetContents(Poppler__Annotation* self, const libqt_string contents) {
    QString contents_QString = QString::fromUtf8(contents.data, contents.len);
    self->setContents(contents_QString);
}

libqt_string Poppler__Annotation_UniqueName(const Poppler__Annotation* self) {
    QString _ret = self->uniqueName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Poppler__Annotation_SetUniqueName(Poppler__Annotation* self, const libqt_string uniqueName) {
    QString uniqueName_QString = QString::fromUtf8(uniqueName.data, uniqueName.len);
    self->setUniqueName(uniqueName_QString);
}

QDateTime* Poppler__Annotation_ModificationDate(const Poppler__Annotation* self) {
    return new QDateTime(self->modificationDate());
}

void Poppler__Annotation_SetModificationDate(Poppler__Annotation* self, const QDateTime* date) {
    self->setModificationDate(*date);
}

QDateTime* Poppler__Annotation_CreationDate(const Poppler__Annotation* self) {
    return new QDateTime(self->creationDate());
}

void Poppler__Annotation_SetCreationDate(Poppler__Annotation* self, const QDateTime* date) {
    self->setCreationDate(*date);
}

int Poppler__Annotation_Flags(const Poppler__Annotation* self) {
    return static_cast<int>(self->flags());
}

void Poppler__Annotation_SetFlags(Poppler__Annotation* self, int flags) {
    self->setFlags(static_cast<Poppler::Annotation::Flags>(flags));
}

QRectF* Poppler__Annotation_Boundary(const Poppler__Annotation* self) {
    return new QRectF(self->boundary());
}

void Poppler__Annotation_SetBoundary(Poppler__Annotation* self, const QRectF* boundary) {
    self->setBoundary(*boundary);
}

Poppler__Annotation__Style* Poppler__Annotation_Style(const Poppler__Annotation* self) {
    return new Poppler::Annotation::Style(self->style());
}

void Poppler__Annotation_SetStyle(Poppler__Annotation* self, const Poppler__Annotation__Style* style) {
    self->setStyle(*style);
}

Poppler__Annotation__Popup* Poppler__Annotation_Popup(const Poppler__Annotation* self) {
    return new Poppler::Annotation::Popup(self->popup());
}

void Poppler__Annotation_SetPopup(Poppler__Annotation* self, const Poppler__Annotation__Popup* popup) {
    self->setPopup(*popup);
}

int Poppler__Annotation_RevisionScope(const Poppler__Annotation* self) {
    return static_cast<int>(self->revisionScope());
}

int Poppler__Annotation_RevisionType(const Poppler__Annotation* self) {
    return static_cast<int>(self->revisionType());
}

libqt_list /* of Poppler__Annotation* */ Poppler__Annotation_Revisions(const Poppler__Annotation* self) {
    std::vector<std::unique_ptr<Poppler::Annotation>> _ret = self->revisions();
    // Convert std::vector<> from C++ memory to manually-managed C memory
    Poppler__Annotation** _arr = static_cast<Poppler__Annotation**>(malloc(sizeof(Poppler__Annotation*) * (_ret.size())));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i].release();
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int Poppler__Annotation_SubType(const Poppler__Annotation* self) {
    return static_cast<int>(self->subType());
}

Poppler__AnnotationAppearance* Poppler__Annotation_AnnotationAppearance(const Poppler__Annotation* self) {
    return self->annotationAppearance().release();
}

void Poppler__Annotation_SetAnnotationAppearance(Poppler__Annotation* self, const Poppler__AnnotationAppearance* annotationAppearance) {
    self->setAnnotationAppearance(*annotationAppearance);
}

void Poppler__Annotation_Delete(Poppler__Annotation* self) {
    delete self;
}

Poppler__TextAnnotation* Poppler__TextAnnotation_new(int typeVal) {
    return new VirtualPopplerTextAnnotation(static_cast<Poppler::TextAnnotation::TextType>(typeVal));
}

int Poppler__TextAnnotation_SubType(const Poppler__TextAnnotation* self) {
    auto* vpoppler__textannotation = dynamic_cast<const VirtualPopplerTextAnnotation*>(self);
    if (vpoppler__textannotation && vpoppler__textannotation->isVirtualPopplerTextAnnotation) {
        return static_cast<int>(self->subType());
    } else {
        return static_cast<int>(((VirtualPopplerTextAnnotation*)self)->subType());
    }
}

int Poppler__TextAnnotation_TextType(const Poppler__TextAnnotation* self) {
    return static_cast<int>(self->textType());
}

libqt_string Poppler__TextAnnotation_TextIcon(const Poppler__TextAnnotation* self) {
    QString _ret = self->textIcon();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Poppler__TextAnnotation_SetTextIcon(Poppler__TextAnnotation* self, const libqt_string icon) {
    QString icon_QString = QString::fromUtf8(icon.data, icon.len);
    self->setTextIcon(icon_QString);
}

QFont* Poppler__TextAnnotation_TextFont(const Poppler__TextAnnotation* self) {
    return new QFont(self->textFont());
}

void Poppler__TextAnnotation_SetTextFont(Poppler__TextAnnotation* self, const QFont* font) {
    self->setTextFont(*font);
}

QColor* Poppler__TextAnnotation_TextColor(const Poppler__TextAnnotation* self) {
    return new QColor(self->textColor());
}

void Poppler__TextAnnotation_SetTextColor(Poppler__TextAnnotation* self, const QColor* color) {
    self->setTextColor(*color);
}

int Poppler__TextAnnotation_InplaceAlign(const Poppler__TextAnnotation* self) {
    return static_cast<int>(self->inplaceAlign());
}

void Poppler__TextAnnotation_SetInplaceAlign(Poppler__TextAnnotation* self, int alignVal) {
    self->setInplaceAlign(static_cast<Poppler::TextAnnotation::InplaceAlignPosition>(alignVal));
}

QPointF* Poppler__TextAnnotation_CalloutPoint(const Poppler__TextAnnotation* self, int id) {
    return new QPointF(self->calloutPoint(static_cast<int>(id)));
}

libqt_list /* of QPointF* */ Poppler__TextAnnotation_CalloutPoints(const Poppler__TextAnnotation* self) {
    QVector<QPointF> _ret = self->calloutPoints();
    // Convert QVector<> from C++ memory to manually-managed C memory
    QPointF** _arr = static_cast<QPointF**>(malloc(sizeof(QPointF*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QPointF(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void Poppler__TextAnnotation_SetCalloutPoints(Poppler__TextAnnotation* self, const libqt_list /* of QPointF* */ points) {
    QVector<QPointF> points_QVector;
    points_QVector.reserve(points.len);
    QPointF** points_arr = static_cast<QPointF**>(points.data);
    for (size_t i = 0; i < points.len; ++i) {
        points_QVector.push_back(*(points_arr[i]));
    }
    self->setCalloutPoints(points_QVector);
}

int Poppler__TextAnnotation_InplaceIntent(const Poppler__TextAnnotation* self) {
    return static_cast<int>(self->inplaceIntent());
}

void Poppler__TextAnnotation_SetInplaceIntent(Poppler__TextAnnotation* self, int intent) {
    self->setInplaceIntent(static_cast<Poppler::TextAnnotation::InplaceIntent>(intent));
}

// Base class handler implementation
int Poppler__TextAnnotation_SuperSubType(const Poppler__TextAnnotation* self) {
    auto* vpopplertextannotation = const_cast<VirtualPopplerTextAnnotation*>(dynamic_cast<const VirtualPopplerTextAnnotation*>(self));
    if (vpopplertextannotation && vpopplertextannotation->isVirtualPopplerTextAnnotation) {
        vpopplertextannotation->setPoppler__TextAnnotation_SubType_IsBase(true);
        return static_cast<int>(vpopplertextannotation->subType());
    } else {
        return static_cast<int>(self->Poppler::TextAnnotation::subType());
    }
}

// Auxiliary method to allow providing re-implementation
void Poppler__TextAnnotation_OnSubType(const Poppler__TextAnnotation* self, intptr_t slot) {
    auto* vpopplertextannotation = const_cast<VirtualPopplerTextAnnotation*>(dynamic_cast<const VirtualPopplerTextAnnotation*>(self));
    if (vpopplertextannotation && vpopplertextannotation->isVirtualPopplerTextAnnotation) {
        vpopplertextannotation->setPoppler__TextAnnotation_SubType_Callback(reinterpret_cast<VirtualPopplerTextAnnotation::Poppler__TextAnnotation_SubType_Callback>(slot));
    }
}

void Poppler__TextAnnotation_Delete(Poppler__TextAnnotation* self) {
    delete self;
}

Poppler__LineAnnotation* Poppler__LineAnnotation_new(int typeVal) {
    return new VirtualPopplerLineAnnotation(static_cast<Poppler::LineAnnotation::LineType>(typeVal));
}

int Poppler__LineAnnotation_SubType(const Poppler__LineAnnotation* self) {
    auto* vpoppler__lineannotation = dynamic_cast<const VirtualPopplerLineAnnotation*>(self);
    if (vpoppler__lineannotation && vpoppler__lineannotation->isVirtualPopplerLineAnnotation) {
        return static_cast<int>(self->subType());
    } else {
        return static_cast<int>(((VirtualPopplerLineAnnotation*)self)->subType());
    }
}

int Poppler__LineAnnotation_LineType(const Poppler__LineAnnotation* self) {
    return static_cast<int>(self->lineType());
}

libqt_list /* of QPointF* */ Poppler__LineAnnotation_LinePoints(const Poppler__LineAnnotation* self) {
    QVector<QPointF> _ret = self->linePoints();
    // Convert QVector<> from C++ memory to manually-managed C memory
    QPointF** _arr = static_cast<QPointF**>(malloc(sizeof(QPointF*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QPointF(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void Poppler__LineAnnotation_SetLinePoints(Poppler__LineAnnotation* self, const libqt_list /* of QPointF* */ points) {
    QVector<QPointF> points_QVector;
    points_QVector.reserve(points.len);
    QPointF** points_arr = static_cast<QPointF**>(points.data);
    for (size_t i = 0; i < points.len; ++i) {
        points_QVector.push_back(*(points_arr[i]));
    }
    self->setLinePoints(points_QVector);
}

int Poppler__LineAnnotation_LineStartStyle(const Poppler__LineAnnotation* self) {
    return static_cast<int>(self->lineStartStyle());
}

void Poppler__LineAnnotation_SetLineStartStyle(Poppler__LineAnnotation* self, int style) {
    self->setLineStartStyle(static_cast<Poppler::LineAnnotation::TermStyle>(style));
}

int Poppler__LineAnnotation_LineEndStyle(const Poppler__LineAnnotation* self) {
    return static_cast<int>(self->lineEndStyle());
}

void Poppler__LineAnnotation_SetLineEndStyle(Poppler__LineAnnotation* self, int style) {
    self->setLineEndStyle(static_cast<Poppler::LineAnnotation::TermStyle>(style));
}

bool Poppler__LineAnnotation_IsLineClosed(const Poppler__LineAnnotation* self) {
    return self->isLineClosed();
}

void Poppler__LineAnnotation_SetLineClosed(Poppler__LineAnnotation* self, bool closed) {
    self->setLineClosed(closed);
}

QColor* Poppler__LineAnnotation_LineInnerColor(const Poppler__LineAnnotation* self) {
    return new QColor(self->lineInnerColor());
}

void Poppler__LineAnnotation_SetLineInnerColor(Poppler__LineAnnotation* self, const QColor* color) {
    self->setLineInnerColor(*color);
}

double Poppler__LineAnnotation_LineLeadingForwardPoint(const Poppler__LineAnnotation* self) {
    return self->lineLeadingForwardPoint();
}

void Poppler__LineAnnotation_SetLineLeadingForwardPoint(Poppler__LineAnnotation* self, double point) {
    self->setLineLeadingForwardPoint(static_cast<double>(point));
}

double Poppler__LineAnnotation_LineLeadingBackPoint(const Poppler__LineAnnotation* self) {
    return self->lineLeadingBackPoint();
}

void Poppler__LineAnnotation_SetLineLeadingBackPoint(Poppler__LineAnnotation* self, double point) {
    self->setLineLeadingBackPoint(static_cast<double>(point));
}

bool Poppler__LineAnnotation_LineShowCaption(const Poppler__LineAnnotation* self) {
    return self->lineShowCaption();
}

void Poppler__LineAnnotation_SetLineShowCaption(Poppler__LineAnnotation* self, bool show) {
    self->setLineShowCaption(show);
}

int Poppler__LineAnnotation_LineIntent(const Poppler__LineAnnotation* self) {
    return static_cast<int>(self->lineIntent());
}

void Poppler__LineAnnotation_SetLineIntent(Poppler__LineAnnotation* self, int intent) {
    self->setLineIntent(static_cast<Poppler::LineAnnotation::LineIntent>(intent));
}

// Base class handler implementation
int Poppler__LineAnnotation_SuperSubType(const Poppler__LineAnnotation* self) {
    auto* vpopplerlineannotation = const_cast<VirtualPopplerLineAnnotation*>(dynamic_cast<const VirtualPopplerLineAnnotation*>(self));
    if (vpopplerlineannotation && vpopplerlineannotation->isVirtualPopplerLineAnnotation) {
        vpopplerlineannotation->setPoppler__LineAnnotation_SubType_IsBase(true);
        return static_cast<int>(vpopplerlineannotation->subType());
    } else {
        return static_cast<int>(self->Poppler::LineAnnotation::subType());
    }
}

// Auxiliary method to allow providing re-implementation
void Poppler__LineAnnotation_OnSubType(const Poppler__LineAnnotation* self, intptr_t slot) {
    auto* vpopplerlineannotation = const_cast<VirtualPopplerLineAnnotation*>(dynamic_cast<const VirtualPopplerLineAnnotation*>(self));
    if (vpopplerlineannotation && vpopplerlineannotation->isVirtualPopplerLineAnnotation) {
        vpopplerlineannotation->setPoppler__LineAnnotation_SubType_Callback(reinterpret_cast<VirtualPopplerLineAnnotation::Poppler__LineAnnotation_SubType_Callback>(slot));
    }
}

void Poppler__LineAnnotation_Delete(Poppler__LineAnnotation* self) {
    delete self;
}

Poppler__GeomAnnotation* Poppler__GeomAnnotation_new() {
    return new VirtualPopplerGeomAnnotation();
}

int Poppler__GeomAnnotation_SubType(const Poppler__GeomAnnotation* self) {
    auto* vpoppler__geomannotation = dynamic_cast<const VirtualPopplerGeomAnnotation*>(self);
    if (vpoppler__geomannotation && vpoppler__geomannotation->isVirtualPopplerGeomAnnotation) {
        return static_cast<int>(self->subType());
    } else {
        return static_cast<int>(((VirtualPopplerGeomAnnotation*)self)->subType());
    }
}

int Poppler__GeomAnnotation_GeomType(const Poppler__GeomAnnotation* self) {
    return static_cast<int>(self->geomType());
}

void Poppler__GeomAnnotation_SetGeomType(Poppler__GeomAnnotation* self, int typeVal) {
    self->setGeomType(static_cast<Poppler::GeomAnnotation::GeomType>(typeVal));
}

QColor* Poppler__GeomAnnotation_GeomInnerColor(const Poppler__GeomAnnotation* self) {
    return new QColor(self->geomInnerColor());
}

void Poppler__GeomAnnotation_SetGeomInnerColor(Poppler__GeomAnnotation* self, const QColor* color) {
    self->setGeomInnerColor(*color);
}

// Base class handler implementation
int Poppler__GeomAnnotation_SuperSubType(const Poppler__GeomAnnotation* self) {
    auto* vpopplergeomannotation = const_cast<VirtualPopplerGeomAnnotation*>(dynamic_cast<const VirtualPopplerGeomAnnotation*>(self));
    if (vpopplergeomannotation && vpopplergeomannotation->isVirtualPopplerGeomAnnotation) {
        vpopplergeomannotation->setPoppler__GeomAnnotation_SubType_IsBase(true);
        return static_cast<int>(vpopplergeomannotation->subType());
    } else {
        return static_cast<int>(self->Poppler::GeomAnnotation::subType());
    }
}

// Auxiliary method to allow providing re-implementation
void Poppler__GeomAnnotation_OnSubType(const Poppler__GeomAnnotation* self, intptr_t slot) {
    auto* vpopplergeomannotation = const_cast<VirtualPopplerGeomAnnotation*>(dynamic_cast<const VirtualPopplerGeomAnnotation*>(self));
    if (vpopplergeomannotation && vpopplergeomannotation->isVirtualPopplerGeomAnnotation) {
        vpopplergeomannotation->setPoppler__GeomAnnotation_SubType_Callback(reinterpret_cast<VirtualPopplerGeomAnnotation::Poppler__GeomAnnotation_SubType_Callback>(slot));
    }
}

void Poppler__GeomAnnotation_Delete(Poppler__GeomAnnotation* self) {
    delete self;
}

Poppler__HighlightAnnotation* Poppler__HighlightAnnotation_new() {
    return new VirtualPopplerHighlightAnnotation();
}

int Poppler__HighlightAnnotation_SubType(const Poppler__HighlightAnnotation* self) {
    auto* vpoppler__highlightannotation = dynamic_cast<const VirtualPopplerHighlightAnnotation*>(self);
    if (vpoppler__highlightannotation && vpoppler__highlightannotation->isVirtualPopplerHighlightAnnotation) {
        return static_cast<int>(self->subType());
    } else {
        return static_cast<int>(((VirtualPopplerHighlightAnnotation*)self)->subType());
    }
}

int Poppler__HighlightAnnotation_HighlightType(const Poppler__HighlightAnnotation* self) {
    return static_cast<int>(self->highlightType());
}

void Poppler__HighlightAnnotation_SetHighlightType(Poppler__HighlightAnnotation* self, int typeVal) {
    self->setHighlightType(static_cast<Poppler::HighlightAnnotation::HighlightType>(typeVal));
}

libqt_list /* of Poppler__HighlightAnnotation__Quad* */ Poppler__HighlightAnnotation_HighlightQuads(const Poppler__HighlightAnnotation* self) {
    QList<Poppler::HighlightAnnotation::Quad> _ret = self->highlightQuads();
    // Convert QList<> from C++ memory to manually-managed C memory
    Poppler__HighlightAnnotation__Quad** _arr = static_cast<Poppler__HighlightAnnotation__Quad**>(malloc(sizeof(Poppler__HighlightAnnotation__Quad*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Poppler::HighlightAnnotation::Quad(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void Poppler__HighlightAnnotation_SetHighlightQuads(Poppler__HighlightAnnotation* self, const libqt_list /* of Poppler__HighlightAnnotation__Quad* */ quads) {
    QList<Poppler::HighlightAnnotation::Quad> quads_QList;
    quads_QList.reserve(quads.len);
    Poppler__HighlightAnnotation__Quad** quads_arr = static_cast<Poppler__HighlightAnnotation__Quad**>(quads.data);
    for (size_t i = 0; i < quads.len; ++i) {
        quads_QList.push_back(*(quads_arr[i]));
    }
    self->setHighlightQuads(quads_QList);
}

// Base class handler implementation
int Poppler__HighlightAnnotation_SuperSubType(const Poppler__HighlightAnnotation* self) {
    auto* vpopplerhighlightannotation = const_cast<VirtualPopplerHighlightAnnotation*>(dynamic_cast<const VirtualPopplerHighlightAnnotation*>(self));
    if (vpopplerhighlightannotation && vpopplerhighlightannotation->isVirtualPopplerHighlightAnnotation) {
        vpopplerhighlightannotation->setPoppler__HighlightAnnotation_SubType_IsBase(true);
        return static_cast<int>(vpopplerhighlightannotation->subType());
    } else {
        return static_cast<int>(self->Poppler::HighlightAnnotation::subType());
    }
}

// Auxiliary method to allow providing re-implementation
void Poppler__HighlightAnnotation_OnSubType(const Poppler__HighlightAnnotation* self, intptr_t slot) {
    auto* vpopplerhighlightannotation = const_cast<VirtualPopplerHighlightAnnotation*>(dynamic_cast<const VirtualPopplerHighlightAnnotation*>(self));
    if (vpopplerhighlightannotation && vpopplerhighlightannotation->isVirtualPopplerHighlightAnnotation) {
        vpopplerhighlightannotation->setPoppler__HighlightAnnotation_SubType_Callback(reinterpret_cast<VirtualPopplerHighlightAnnotation::Poppler__HighlightAnnotation_SubType_Callback>(slot));
    }
}

void Poppler__HighlightAnnotation_Delete(Poppler__HighlightAnnotation* self) {
    delete self;
}

Poppler__StampAnnotation* Poppler__StampAnnotation_new() {
    return new VirtualPopplerStampAnnotation();
}

int Poppler__StampAnnotation_SubType(const Poppler__StampAnnotation* self) {
    auto* vpoppler__stampannotation = dynamic_cast<const VirtualPopplerStampAnnotation*>(self);
    if (vpoppler__stampannotation && vpoppler__stampannotation->isVirtualPopplerStampAnnotation) {
        return static_cast<int>(self->subType());
    } else {
        return static_cast<int>(((VirtualPopplerStampAnnotation*)self)->subType());
    }
}

libqt_string Poppler__StampAnnotation_StampIconName(const Poppler__StampAnnotation* self) {
    QString _ret = self->stampIconName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Poppler__StampAnnotation_SetStampIconName(Poppler__StampAnnotation* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setStampIconName(name_QString);
}

void Poppler__StampAnnotation_SetStampCustomImage(Poppler__StampAnnotation* self, const QImage* image) {
    self->setStampCustomImage(*image);
}

// Base class handler implementation
int Poppler__StampAnnotation_SuperSubType(const Poppler__StampAnnotation* self) {
    auto* vpopplerstampannotation = const_cast<VirtualPopplerStampAnnotation*>(dynamic_cast<const VirtualPopplerStampAnnotation*>(self));
    if (vpopplerstampannotation && vpopplerstampannotation->isVirtualPopplerStampAnnotation) {
        vpopplerstampannotation->setPoppler__StampAnnotation_SubType_IsBase(true);
        return static_cast<int>(vpopplerstampannotation->subType());
    } else {
        return static_cast<int>(self->Poppler::StampAnnotation::subType());
    }
}

// Auxiliary method to allow providing re-implementation
void Poppler__StampAnnotation_OnSubType(const Poppler__StampAnnotation* self, intptr_t slot) {
    auto* vpopplerstampannotation = const_cast<VirtualPopplerStampAnnotation*>(dynamic_cast<const VirtualPopplerStampAnnotation*>(self));
    if (vpopplerstampannotation && vpopplerstampannotation->isVirtualPopplerStampAnnotation) {
        vpopplerstampannotation->setPoppler__StampAnnotation_SubType_Callback(reinterpret_cast<VirtualPopplerStampAnnotation::Poppler__StampAnnotation_SubType_Callback>(slot));
    }
}

void Poppler__StampAnnotation_Delete(Poppler__StampAnnotation* self) {
    delete self;
}

Poppler__SignatureAnnotation* Poppler__SignatureAnnotation_new() {
    return new VirtualPopplerSignatureAnnotation();
}

int Poppler__SignatureAnnotation_SubType(const Poppler__SignatureAnnotation* self) {
    auto* vpoppler__signatureannotation = dynamic_cast<const VirtualPopplerSignatureAnnotation*>(self);
    if (vpoppler__signatureannotation && vpoppler__signatureannotation->isVirtualPopplerSignatureAnnotation) {
        return static_cast<int>(self->subType());
    } else {
        return static_cast<int>(((VirtualPopplerSignatureAnnotation*)self)->subType());
    }
}

void Poppler__SignatureAnnotation_SetText(Poppler__SignatureAnnotation* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

void Poppler__SignatureAnnotation_SetLeftText(Poppler__SignatureAnnotation* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setLeftText(text_QString);
}

double Poppler__SignatureAnnotation_FontSize(const Poppler__SignatureAnnotation* self) {
    return self->fontSize();
}

void Poppler__SignatureAnnotation_SetFontSize(Poppler__SignatureAnnotation* self, double fontSize) {
    self->setFontSize(static_cast<double>(fontSize));
}

double Poppler__SignatureAnnotation_LeftFontSize(const Poppler__SignatureAnnotation* self) {
    return self->leftFontSize();
}

void Poppler__SignatureAnnotation_SetLeftFontSize(Poppler__SignatureAnnotation* self, double fontSize) {
    self->setLeftFontSize(static_cast<double>(fontSize));
}

QColor* Poppler__SignatureAnnotation_FontColor(const Poppler__SignatureAnnotation* self) {
    return new QColor(self->fontColor());
}

void Poppler__SignatureAnnotation_SetFontColor(Poppler__SignatureAnnotation* self, const QColor* color) {
    self->setFontColor(*color);
}

QColor* Poppler__SignatureAnnotation_BorderColor(const Poppler__SignatureAnnotation* self) {
    return new QColor(self->borderColor());
}

void Poppler__SignatureAnnotation_SetBorderColor(Poppler__SignatureAnnotation* self, const QColor* color) {
    self->setBorderColor(*color);
}

double Poppler__SignatureAnnotation_BorderWidth(const Poppler__SignatureAnnotation* self) {
    return self->borderWidth();
}

void Poppler__SignatureAnnotation_SetBorderWidth(Poppler__SignatureAnnotation* self, double width) {
    self->setBorderWidth(static_cast<double>(width));
}

QColor* Poppler__SignatureAnnotation_BackgroundColor(const Poppler__SignatureAnnotation* self) {
    return new QColor(self->backgroundColor());
}

void Poppler__SignatureAnnotation_SetBackgroundColor(Poppler__SignatureAnnotation* self, const QColor* color) {
    self->setBackgroundColor(*color);
}

libqt_string Poppler__SignatureAnnotation_ImagePath(const Poppler__SignatureAnnotation* self) {
    QString _ret = self->imagePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Poppler__SignatureAnnotation_SetImagePath(Poppler__SignatureAnnotation* self, const libqt_string imagePath) {
    QString imagePath_QString = QString::fromUtf8(imagePath.data, imagePath.len);
    self->setImagePath(imagePath_QString);
}

libqt_string Poppler__SignatureAnnotation_FieldPartialName(const Poppler__SignatureAnnotation* self) {
    QString _ret = self->fieldPartialName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Poppler__SignatureAnnotation_SetFieldPartialName(Poppler__SignatureAnnotation* self, const libqt_string fieldPartialName) {
    QString fieldPartialName_QString = QString::fromUtf8(fieldPartialName.data, fieldPartialName.len);
    self->setFieldPartialName(fieldPartialName_QString);
}

int Poppler__SignatureAnnotation_Sign(Poppler__SignatureAnnotation* self, const libqt_string outputFileName, const Poppler__PDFConverter__NewSignatureData* data) {
    QString outputFileName_QString = QString::fromUtf8(outputFileName.data, outputFileName.len);
    return static_cast<int>(self->sign(outputFileName_QString, *data));
}

// Base class handler implementation
int Poppler__SignatureAnnotation_SuperSubType(const Poppler__SignatureAnnotation* self) {
    auto* vpopplersignatureannotation = const_cast<VirtualPopplerSignatureAnnotation*>(dynamic_cast<const VirtualPopplerSignatureAnnotation*>(self));
    if (vpopplersignatureannotation && vpopplersignatureannotation->isVirtualPopplerSignatureAnnotation) {
        vpopplersignatureannotation->setPoppler__SignatureAnnotation_SubType_IsBase(true);
        return static_cast<int>(vpopplersignatureannotation->subType());
    } else {
        return static_cast<int>(self->Poppler::SignatureAnnotation::subType());
    }
}

// Auxiliary method to allow providing re-implementation
void Poppler__SignatureAnnotation_OnSubType(const Poppler__SignatureAnnotation* self, intptr_t slot) {
    auto* vpopplersignatureannotation = const_cast<VirtualPopplerSignatureAnnotation*>(dynamic_cast<const VirtualPopplerSignatureAnnotation*>(self));
    if (vpopplersignatureannotation && vpopplersignatureannotation->isVirtualPopplerSignatureAnnotation) {
        vpopplersignatureannotation->setPoppler__SignatureAnnotation_SubType_Callback(reinterpret_cast<VirtualPopplerSignatureAnnotation::Poppler__SignatureAnnotation_SubType_Callback>(slot));
    }
}

void Poppler__SignatureAnnotation_Delete(Poppler__SignatureAnnotation* self) {
    delete self;
}

Poppler__InkAnnotation* Poppler__InkAnnotation_new() {
    return new VirtualPopplerInkAnnotation();
}

int Poppler__InkAnnotation_SubType(const Poppler__InkAnnotation* self) {
    auto* vpoppler__inkannotation = dynamic_cast<const VirtualPopplerInkAnnotation*>(self);
    if (vpoppler__inkannotation && vpoppler__inkannotation->isVirtualPopplerInkAnnotation) {
        return static_cast<int>(self->subType());
    } else {
        return static_cast<int>(((VirtualPopplerInkAnnotation*)self)->subType());
    }
}

libqt_list /* of libqt_list of QPointF* */ Poppler__InkAnnotation_InkPaths(const Poppler__InkAnnotation* self) {
    QList<QVector<QPointF>> _ret = self->inkPaths();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_list /* of QPointF* */* _arr = static_cast<libqt_list /* of QPointF* */*>(malloc(sizeof(libqt_list /* of QPointF* */) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        const QVector<QPointF>& _lv_ret = _ret[i];
        // Convert QVector<> from C++ memory to manually-managed C memory
        QPointF** _lv_arr = static_cast<QPointF**>(malloc(sizeof(QPointF*) * (_lv_ret.size())));
        for (qsizetype j = 0; j < _lv_ret.size(); ++j) {
            _lv_arr[j] = new QPointF(_lv_ret[j]);
        }
        libqt_list _lv_out;
        _lv_out.len = _lv_ret.size();
        _lv_out.data = static_cast<void*>(_lv_arr);
        _arr[i] = _lv_out;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void Poppler__InkAnnotation_SetInkPaths(Poppler__InkAnnotation* self, const libqt_list /* of libqt_list of QPointF* */ paths) {
    QList<QVector<QPointF>> paths_QList;
    paths_QList.reserve(paths.len);
    libqt_list /* of QPointF* */* paths_arr = static_cast<libqt_list /* of QPointF* */*>(paths.data);
    for (size_t i = 0; i < paths.len; ++i) {
        QVector<QPointF> paths_arr_i_QVector;
        paths_arr_i_QVector.reserve(paths_arr[i].len);
        QPointF** paths_arr_i_arr = static_cast<QPointF**>(paths_arr[i].data);
        for (size_t j = 0; j < paths_arr[i].len; ++j) {
            paths_arr_i_QVector.push_back(*(paths_arr_i_arr[j]));
        }
        paths_QList.push_back(paths_arr_i_QVector);
    }
    self->setInkPaths(paths_QList);
}

// Base class handler implementation
int Poppler__InkAnnotation_SuperSubType(const Poppler__InkAnnotation* self) {
    auto* vpopplerinkannotation = const_cast<VirtualPopplerInkAnnotation*>(dynamic_cast<const VirtualPopplerInkAnnotation*>(self));
    if (vpopplerinkannotation && vpopplerinkannotation->isVirtualPopplerInkAnnotation) {
        vpopplerinkannotation->setPoppler__InkAnnotation_SubType_IsBase(true);
        return static_cast<int>(vpopplerinkannotation->subType());
    } else {
        return static_cast<int>(self->Poppler::InkAnnotation::subType());
    }
}

// Auxiliary method to allow providing re-implementation
void Poppler__InkAnnotation_OnSubType(const Poppler__InkAnnotation* self, intptr_t slot) {
    auto* vpopplerinkannotation = const_cast<VirtualPopplerInkAnnotation*>(dynamic_cast<const VirtualPopplerInkAnnotation*>(self));
    if (vpopplerinkannotation && vpopplerinkannotation->isVirtualPopplerInkAnnotation) {
        vpopplerinkannotation->setPoppler__InkAnnotation_SubType_Callback(reinterpret_cast<VirtualPopplerInkAnnotation::Poppler__InkAnnotation_SubType_Callback>(slot));
    }
}

void Poppler__InkAnnotation_Delete(Poppler__InkAnnotation* self) {
    delete self;
}

int Poppler__LinkAnnotation_SubType(const Poppler__LinkAnnotation* self) {
    return static_cast<int>(self->subType());
}

Poppler__Link* Poppler__LinkAnnotation_LinkDestination(const Poppler__LinkAnnotation* self) {
    return self->linkDestination();
}

int Poppler__LinkAnnotation_LinkHighlightMode(const Poppler__LinkAnnotation* self) {
    return static_cast<int>(self->linkHighlightMode());
}

void Poppler__LinkAnnotation_SetLinkHighlightMode(Poppler__LinkAnnotation* self, int mode) {
    self->setLinkHighlightMode(static_cast<Poppler::LinkAnnotation::HighlightMode>(mode));
}

QPointF* Poppler__LinkAnnotation_LinkRegionPoint(const Poppler__LinkAnnotation* self, int id) {
    return new QPointF(self->linkRegionPoint(static_cast<int>(id)));
}

void Poppler__LinkAnnotation_SetLinkRegionPoint(Poppler__LinkAnnotation* self, int id, const QPointF* point) {
    self->setLinkRegionPoint(static_cast<int>(id), *point);
}

void Poppler__LinkAnnotation_Delete(Poppler__LinkAnnotation* self) {
    delete self;
}

Poppler__CaretAnnotation* Poppler__CaretAnnotation_new() {
    return new VirtualPopplerCaretAnnotation();
}

int Poppler__CaretAnnotation_SubType(const Poppler__CaretAnnotation* self) {
    auto* vpoppler__caretannotation = dynamic_cast<const VirtualPopplerCaretAnnotation*>(self);
    if (vpoppler__caretannotation && vpoppler__caretannotation->isVirtualPopplerCaretAnnotation) {
        return static_cast<int>(self->subType());
    } else {
        return static_cast<int>(((VirtualPopplerCaretAnnotation*)self)->subType());
    }
}

int Poppler__CaretAnnotation_CaretSymbol(const Poppler__CaretAnnotation* self) {
    return static_cast<int>(self->caretSymbol());
}

void Poppler__CaretAnnotation_SetCaretSymbol(Poppler__CaretAnnotation* self, int symbol) {
    self->setCaretSymbol(static_cast<Poppler::CaretAnnotation::CaretSymbol>(symbol));
}

// Base class handler implementation
int Poppler__CaretAnnotation_SuperSubType(const Poppler__CaretAnnotation* self) {
    auto* vpopplercaretannotation = const_cast<VirtualPopplerCaretAnnotation*>(dynamic_cast<const VirtualPopplerCaretAnnotation*>(self));
    if (vpopplercaretannotation && vpopplercaretannotation->isVirtualPopplerCaretAnnotation) {
        vpopplercaretannotation->setPoppler__CaretAnnotation_SubType_IsBase(true);
        return static_cast<int>(vpopplercaretannotation->subType());
    } else {
        return static_cast<int>(self->Poppler::CaretAnnotation::subType());
    }
}

// Auxiliary method to allow providing re-implementation
void Poppler__CaretAnnotation_OnSubType(const Poppler__CaretAnnotation* self, intptr_t slot) {
    auto* vpopplercaretannotation = const_cast<VirtualPopplerCaretAnnotation*>(dynamic_cast<const VirtualPopplerCaretAnnotation*>(self));
    if (vpopplercaretannotation && vpopplercaretannotation->isVirtualPopplerCaretAnnotation) {
        vpopplercaretannotation->setPoppler__CaretAnnotation_SubType_Callback(reinterpret_cast<VirtualPopplerCaretAnnotation::Poppler__CaretAnnotation_SubType_Callback>(slot));
    }
}

void Poppler__CaretAnnotation_Delete(Poppler__CaretAnnotation* self) {
    delete self;
}

int Poppler__FileAttachmentAnnotation_SubType(const Poppler__FileAttachmentAnnotation* self) {
    return static_cast<int>(self->subType());
}

libqt_string Poppler__FileAttachmentAnnotation_FileIconName(const Poppler__FileAttachmentAnnotation* self) {
    QString _ret = self->fileIconName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Poppler__FileAttachmentAnnotation_SetFileIconName(Poppler__FileAttachmentAnnotation* self, const libqt_string icon) {
    QString icon_QString = QString::fromUtf8(icon.data, icon.len);
    self->setFileIconName(icon_QString);
}

Poppler__EmbeddedFile* Poppler__FileAttachmentAnnotation_EmbeddedFile(const Poppler__FileAttachmentAnnotation* self) {
    return self->embeddedFile();
}

void Poppler__FileAttachmentAnnotation_SetEmbeddedFile(Poppler__FileAttachmentAnnotation* self, Poppler__EmbeddedFile* ef) {
    self->setEmbeddedFile(ef);
}

void Poppler__FileAttachmentAnnotation_Delete(Poppler__FileAttachmentAnnotation* self) {
    delete self;
}

int Poppler__SoundAnnotation_SubType(const Poppler__SoundAnnotation* self) {
    return static_cast<int>(self->subType());
}

libqt_string Poppler__SoundAnnotation_SoundIconName(const Poppler__SoundAnnotation* self) {
    QString _ret = self->soundIconName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Poppler__SoundAnnotation_SetSoundIconName(Poppler__SoundAnnotation* self, const libqt_string icon) {
    QString icon_QString = QString::fromUtf8(icon.data, icon.len);
    self->setSoundIconName(icon_QString);
}

Poppler__SoundObject* Poppler__SoundAnnotation_Sound(const Poppler__SoundAnnotation* self) {
    return self->sound();
}

void Poppler__SoundAnnotation_SetSound(Poppler__SoundAnnotation* self, Poppler__SoundObject* s) {
    self->setSound(s);
}

void Poppler__SoundAnnotation_Delete(Poppler__SoundAnnotation* self) {
    delete self;
}

int Poppler__MovieAnnotation_SubType(const Poppler__MovieAnnotation* self) {
    return static_cast<int>(self->subType());
}

Poppler__MovieObject* Poppler__MovieAnnotation_Movie(const Poppler__MovieAnnotation* self) {
    return self->movie();
}

void Poppler__MovieAnnotation_SetMovie(Poppler__MovieAnnotation* self, Poppler__MovieObject* movie) {
    self->setMovie(movie);
}

libqt_string Poppler__MovieAnnotation_MovieTitle(const Poppler__MovieAnnotation* self) {
    QString _ret = self->movieTitle();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Poppler__MovieAnnotation_SetMovieTitle(Poppler__MovieAnnotation* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setMovieTitle(title_QString);
}

void Poppler__MovieAnnotation_Delete(Poppler__MovieAnnotation* self) {
    delete self;
}

int Poppler__ScreenAnnotation_SubType(const Poppler__ScreenAnnotation* self) {
    return static_cast<int>(self->subType());
}

Poppler__LinkRendition* Poppler__ScreenAnnotation_Action(const Poppler__ScreenAnnotation* self) {
    return self->action();
}

void Poppler__ScreenAnnotation_SetAction(Poppler__ScreenAnnotation* self, Poppler__LinkRendition* action) {
    self->setAction(action);
}

libqt_string Poppler__ScreenAnnotation_ScreenTitle(const Poppler__ScreenAnnotation* self) {
    QString _ret = self->screenTitle();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Poppler__ScreenAnnotation_SetScreenTitle(Poppler__ScreenAnnotation* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setScreenTitle(title_QString);
}

Poppler__Link* Poppler__ScreenAnnotation_AdditionalAction(const Poppler__ScreenAnnotation* self, int typeVal) {
    return self->additionalAction(static_cast<Poppler::Annotation::AdditionalActionType>(typeVal)).release();
}

void Poppler__ScreenAnnotation_Delete(Poppler__ScreenAnnotation* self) {
    delete self;
}

int Poppler__WidgetAnnotation_SubType(const Poppler__WidgetAnnotation* self) {
    return static_cast<int>(self->subType());
}

Poppler__Link* Poppler__WidgetAnnotation_AdditionalAction(const Poppler__WidgetAnnotation* self, int typeVal) {
    return self->additionalAction(static_cast<Poppler::Annotation::AdditionalActionType>(typeVal)).release();
}

void Poppler__WidgetAnnotation_Delete(Poppler__WidgetAnnotation* self) {
    delete self;
}

int Poppler__RichMediaAnnotation_SubType(const Poppler__RichMediaAnnotation* self) {
    return static_cast<int>(self->subType());
}

Poppler__RichMediaAnnotation__Settings* Poppler__RichMediaAnnotation_Settings(const Poppler__RichMediaAnnotation* self) {
    return self->settings();
}

Poppler__RichMediaAnnotation__Content* Poppler__RichMediaAnnotation_Content(const Poppler__RichMediaAnnotation* self) {
    return self->content();
}

void Poppler__RichMediaAnnotation_Delete(Poppler__RichMediaAnnotation* self) {
    delete self;
}

Poppler__Annotation__Style* Poppler__Annotation__Style_new() {
    return new Poppler::Annotation::Style();
}

Poppler__Annotation__Style* Poppler__Annotation__Style_new2(const Poppler__Annotation__Style* other) {
    return new Poppler::Annotation::Style(*other);
}

void Poppler__Annotation__Style_OperatorAssign(Poppler__Annotation__Style* self, const Poppler__Annotation__Style* other) {
    self->operator=(*other);
}

QColor* Poppler__Annotation__Style_Color(const Poppler__Annotation__Style* self) {
    return new QColor(self->color());
}

void Poppler__Annotation__Style_SetColor(Poppler__Annotation__Style* self, const QColor* color) {
    self->setColor(*color);
}

double Poppler__Annotation__Style_Opacity(const Poppler__Annotation__Style* self) {
    return self->opacity();
}

void Poppler__Annotation__Style_SetOpacity(Poppler__Annotation__Style* self, double opacity) {
    self->setOpacity(static_cast<double>(opacity));
}

double Poppler__Annotation__Style_Width(const Poppler__Annotation__Style* self) {
    return self->width();
}

void Poppler__Annotation__Style_SetWidth(Poppler__Annotation__Style* self, double width) {
    self->setWidth(static_cast<double>(width));
}

int Poppler__Annotation__Style_LineStyle(const Poppler__Annotation__Style* self) {
    return static_cast<int>(self->lineStyle());
}

void Poppler__Annotation__Style_SetLineStyle(Poppler__Annotation__Style* self, int style) {
    self->setLineStyle(static_cast<Poppler::Annotation::LineStyle>(style));
}

double Poppler__Annotation__Style_XCorners(const Poppler__Annotation__Style* self) {
    return self->xCorners();
}

void Poppler__Annotation__Style_SetXCorners(Poppler__Annotation__Style* self, double radius) {
    self->setXCorners(static_cast<double>(radius));
}

double Poppler__Annotation__Style_YCorners(const Poppler__Annotation__Style* self) {
    return self->yCorners();
}

void Poppler__Annotation__Style_SetYCorners(Poppler__Annotation__Style* self, double radius) {
    self->setYCorners(static_cast<double>(radius));
}

libqt_list /* of double */ Poppler__Annotation__Style_DashArray(const Poppler__Annotation__Style* self) {
    const QVector<double>& _ret = self->dashArray();
    // Convert QVector<> from C++ memory to manually-managed C memory
    double* _arr = static_cast<double*>(malloc(sizeof(double) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void Poppler__Annotation__Style_SetDashArray(Poppler__Annotation__Style* self, const libqt_list /* of double */ array) {
    QVector<double> array_QVector;
    array_QVector.reserve(array.len);
    double* array_arr = static_cast<double*>(array.data);
    for (size_t i = 0; i < array.len; ++i) {
        array_QVector.push_back(static_cast<double>(array_arr[i]));
    }
    self->setDashArray(array_QVector);
}

int Poppler__Annotation__Style_LineEffect(const Poppler__Annotation__Style* self) {
    return static_cast<int>(self->lineEffect());
}

void Poppler__Annotation__Style_SetLineEffect(Poppler__Annotation__Style* self, int effect) {
    self->setLineEffect(static_cast<Poppler::Annotation::LineEffect>(effect));
}

double Poppler__Annotation__Style_EffectIntensity(const Poppler__Annotation__Style* self) {
    return self->effectIntensity();
}

void Poppler__Annotation__Style_SetEffectIntensity(Poppler__Annotation__Style* self, double intens) {
    self->setEffectIntensity(static_cast<double>(intens));
}

void Poppler__Annotation__Style_Delete(Poppler__Annotation__Style* self) {
    delete self;
}

Poppler__Annotation__Popup* Poppler__Annotation__Popup_new() {
    return new Poppler::Annotation::Popup();
}

Poppler__Annotation__Popup* Poppler__Annotation__Popup_new2(const Poppler__Annotation__Popup* other) {
    return new Poppler::Annotation::Popup(*other);
}

void Poppler__Annotation__Popup_OperatorAssign(Poppler__Annotation__Popup* self, const Poppler__Annotation__Popup* other) {
    self->operator=(*other);
}

int Poppler__Annotation__Popup_Flags(const Poppler__Annotation__Popup* self) {
    return self->flags();
}

void Poppler__Annotation__Popup_SetFlags(Poppler__Annotation__Popup* self, int flags) {
    self->setFlags(static_cast<int>(flags));
}

QRectF* Poppler__Annotation__Popup_Geometry(const Poppler__Annotation__Popup* self) {
    return new QRectF(self->geometry());
}

void Poppler__Annotation__Popup_SetGeometry(Poppler__Annotation__Popup* self, const QRectF* geom) {
    self->setGeometry(*geom);
}

libqt_string Poppler__Annotation__Popup_Title(const Poppler__Annotation__Popup* self) {
    QString _ret = self->title();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Poppler__Annotation__Popup_SetTitle(Poppler__Annotation__Popup* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setTitle(title_QString);
}

libqt_string Poppler__Annotation__Popup_Summary(const Poppler__Annotation__Popup* self) {
    QString _ret = self->summary();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Poppler__Annotation__Popup_SetSummary(Poppler__Annotation__Popup* self, const libqt_string summary) {
    QString summary_QString = QString::fromUtf8(summary.data, summary.len);
    self->setSummary(summary_QString);
}

libqt_string Poppler__Annotation__Popup_Text(const Poppler__Annotation__Popup* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Poppler__Annotation__Popup_SetText(Poppler__Annotation__Popup* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

void Poppler__Annotation__Popup_Delete(Poppler__Annotation__Popup* self) {
    delete self;
}

bool Poppler__HighlightAnnotation__Quad_CapStart(const Poppler__HighlightAnnotation__Quad* self) {
    return self->capStart;
}

void Poppler__HighlightAnnotation__Quad_SetCapStart(Poppler__HighlightAnnotation__Quad* self, bool capStart) {
    self->capStart = capStart;
}

bool Poppler__HighlightAnnotation__Quad_CapEnd(const Poppler__HighlightAnnotation__Quad* self) {
    return self->capEnd;
}

void Poppler__HighlightAnnotation__Quad_SetCapEnd(Poppler__HighlightAnnotation__Quad* self, bool capEnd) {
    self->capEnd = capEnd;
}

double Poppler__HighlightAnnotation__Quad_Feather(const Poppler__HighlightAnnotation__Quad* self) {
    return self->feather;
}

void Poppler__HighlightAnnotation__Quad_SetFeather(Poppler__HighlightAnnotation__Quad* self, double feather) {
    self->feather = static_cast<double>(feather);
}

void Poppler__HighlightAnnotation__Quad_Delete(Poppler__HighlightAnnotation__Quad* self) {
    delete self;
}

Poppler__RichMediaAnnotation__Params* Poppler__RichMediaAnnotation__Params_new() {
    return new Poppler::RichMediaAnnotation::Params();
}

libqt_string Poppler__RichMediaAnnotation__Params_FlashVars(const Poppler__RichMediaAnnotation__Params* self) {
    QString _ret = self->flashVars();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Poppler__RichMediaAnnotation__Params_Delete(Poppler__RichMediaAnnotation__Params* self) {
    delete self;
}

Poppler__RichMediaAnnotation__Instance* Poppler__RichMediaAnnotation__Instance_new() {
    return new Poppler::RichMediaAnnotation::Instance();
}

int Poppler__RichMediaAnnotation__Instance_Type(const Poppler__RichMediaAnnotation__Instance* self) {
    return static_cast<int>(self->type());
}

Poppler__RichMediaAnnotation__Params* Poppler__RichMediaAnnotation__Instance_Params(const Poppler__RichMediaAnnotation__Instance* self) {
    return self->params();
}

void Poppler__RichMediaAnnotation__Instance_Delete(Poppler__RichMediaAnnotation__Instance* self) {
    delete self;
}

Poppler__RichMediaAnnotation__Configuration* Poppler__RichMediaAnnotation__Configuration_new() {
    return new Poppler::RichMediaAnnotation::Configuration();
}

int Poppler__RichMediaAnnotation__Configuration_Type(const Poppler__RichMediaAnnotation__Configuration* self) {
    return static_cast<int>(self->type());
}

libqt_string Poppler__RichMediaAnnotation__Configuration_Name(const Poppler__RichMediaAnnotation__Configuration* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of Poppler__RichMediaAnnotation__Instance* */ Poppler__RichMediaAnnotation__Configuration_Instances(const Poppler__RichMediaAnnotation__Configuration* self) {
    QList<Poppler::RichMediaAnnotation::Instance*> _ret = self->instances();
    // Convert QList<> from C++ memory to manually-managed C memory
    Poppler__RichMediaAnnotation__Instance** _arr = static_cast<Poppler__RichMediaAnnotation__Instance**>(malloc(sizeof(Poppler__RichMediaAnnotation__Instance*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void Poppler__RichMediaAnnotation__Configuration_Delete(Poppler__RichMediaAnnotation__Configuration* self) {
    delete self;
}

Poppler__RichMediaAnnotation__Asset* Poppler__RichMediaAnnotation__Asset_new() {
    return new Poppler::RichMediaAnnotation::Asset();
}

libqt_string Poppler__RichMediaAnnotation__Asset_Name(const Poppler__RichMediaAnnotation__Asset* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

Poppler__EmbeddedFile* Poppler__RichMediaAnnotation__Asset_EmbeddedFile(const Poppler__RichMediaAnnotation__Asset* self) {
    return self->embeddedFile();
}

void Poppler__RichMediaAnnotation__Asset_Delete(Poppler__RichMediaAnnotation__Asset* self) {
    delete self;
}

Poppler__RichMediaAnnotation__Content* Poppler__RichMediaAnnotation__Content_new() {
    return new Poppler::RichMediaAnnotation::Content();
}

libqt_list /* of Poppler__RichMediaAnnotation__Configuration* */ Poppler__RichMediaAnnotation__Content_Configurations(const Poppler__RichMediaAnnotation__Content* self) {
    QList<Poppler::RichMediaAnnotation::Configuration*> _ret = self->configurations();
    // Convert QList<> from C++ memory to manually-managed C memory
    Poppler__RichMediaAnnotation__Configuration** _arr = static_cast<Poppler__RichMediaAnnotation__Configuration**>(malloc(sizeof(Poppler__RichMediaAnnotation__Configuration*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of Poppler__RichMediaAnnotation__Asset* */ Poppler__RichMediaAnnotation__Content_Assets(const Poppler__RichMediaAnnotation__Content* self) {
    QList<Poppler::RichMediaAnnotation::Asset*> _ret = self->assets();
    // Convert QList<> from C++ memory to manually-managed C memory
    Poppler__RichMediaAnnotation__Asset** _arr = static_cast<Poppler__RichMediaAnnotation__Asset**>(malloc(sizeof(Poppler__RichMediaAnnotation__Asset*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void Poppler__RichMediaAnnotation__Content_Delete(Poppler__RichMediaAnnotation__Content* self) {
    delete self;
}

Poppler__RichMediaAnnotation__Activation* Poppler__RichMediaAnnotation__Activation_new() {
    return new Poppler::RichMediaAnnotation::Activation();
}

int Poppler__RichMediaAnnotation__Activation_Condition(const Poppler__RichMediaAnnotation__Activation* self) {
    return static_cast<int>(self->condition());
}

void Poppler__RichMediaAnnotation__Activation_Delete(Poppler__RichMediaAnnotation__Activation* self) {
    delete self;
}

Poppler__RichMediaAnnotation__Deactivation* Poppler__RichMediaAnnotation__Deactivation_new() {
    return new Poppler::RichMediaAnnotation::Deactivation();
}

int Poppler__RichMediaAnnotation__Deactivation_Condition(const Poppler__RichMediaAnnotation__Deactivation* self) {
    return static_cast<int>(self->condition());
}

void Poppler__RichMediaAnnotation__Deactivation_Delete(Poppler__RichMediaAnnotation__Deactivation* self) {
    delete self;
}

Poppler__RichMediaAnnotation__Settings* Poppler__RichMediaAnnotation__Settings_new() {
    return new Poppler::RichMediaAnnotation::Settings();
}

Poppler__RichMediaAnnotation__Activation* Poppler__RichMediaAnnotation__Settings_Activation(const Poppler__RichMediaAnnotation__Settings* self) {
    return self->activation();
}

Poppler__RichMediaAnnotation__Deactivation* Poppler__RichMediaAnnotation__Settings_Deactivation(const Poppler__RichMediaAnnotation__Settings* self) {
    return self->deactivation();
}

void Poppler__RichMediaAnnotation__Settings_Delete(Poppler__RichMediaAnnotation__Settings* self) {
    delete self;
}
