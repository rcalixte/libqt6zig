#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__Annotation
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__Document
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__Document__PdfVersion
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__EmbeddedFile
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__FontInfo
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__FontIterator
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__FormField
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__FormFieldSignature
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__Link
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkDestination
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkResetForm
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__MovieObject
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__OptContentModel
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__OutlineItem
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__PDFConverter
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__PSConverter
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__Page
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__PageTransition
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__SoundObject
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__TextBox
#include <QByteArray>
#include <QColor>
#include <QDateTime>
#include <QIODevice>
#include <QImage>
#include <QList>
#include <QPainter>
#include <QRectF>
#include <QSet>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QVector>
#include <poppler-form.h>
#include <poppler-qt6.h>
#include "libpoppler_qt6.h"
#include "libpoppler_qt6.hxx"

QDateTime* Poppler_ConvertDate(const char* param1) {
    return new QDateTime(Poppler::convertDate(param1));
}

bool Poppler_IsCmsAvailable() {
    return Poppler::isCmsAvailable();
}

bool Poppler_IsOverprintPreviewAvailable() {
    return Poppler::isOverprintPreviewAvailable();
}

Poppler__TextBox* Poppler__TextBox_new(const libqt_string text, const QRectF* bBox) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new Poppler::TextBox(text_QString, *bBox);
}

libqt_string Poppler__TextBox_Text(const Poppler__TextBox* self) {
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

QRectF* Poppler__TextBox_BoundingBox(const Poppler__TextBox* self) {
    return new QRectF(self->boundingBox());
}

Poppler__TextBox* Poppler__TextBox_NextWord(const Poppler__TextBox* self) {
    return self->nextWord();
}

QRectF* Poppler__TextBox_CharBoundingBox(const Poppler__TextBox* self, int i) {
    return new QRectF(self->charBoundingBox(static_cast<int>(i)));
}

bool Poppler__TextBox_HasSpaceAfter(const Poppler__TextBox* self) {
    return self->hasSpaceAfter();
}

void Poppler__TextBox_Delete(Poppler__TextBox* self) {
    delete self;
}

Poppler__FontInfo* Poppler__FontInfo_new() {
    return new Poppler::FontInfo();
}

Poppler__FontInfo* Poppler__FontInfo_new2(const Poppler__FontInfo* fi) {
    return new Poppler::FontInfo(*fi);
}

libqt_string Poppler__FontInfo_Name(const Poppler__FontInfo* self) {
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

libqt_string Poppler__FontInfo_SubstituteName(const Poppler__FontInfo* self) {
    QString _ret = self->substituteName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Poppler__FontInfo_File(const Poppler__FontInfo* self) {
    QString _ret = self->file();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Poppler__FontInfo_IsEmbedded(const Poppler__FontInfo* self) {
    return self->isEmbedded();
}

bool Poppler__FontInfo_IsSubset(const Poppler__FontInfo* self) {
    return self->isSubset();
}

int Poppler__FontInfo_Type(const Poppler__FontInfo* self) {
    return static_cast<int>(self->type());
}

libqt_string Poppler__FontInfo_TypeName(const Poppler__FontInfo* self) {
    QString _ret = self->typeName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Poppler__FontInfo_OperatorAssign(Poppler__FontInfo* self, const Poppler__FontInfo* fi) {
    self->operator=(*fi);
}

void Poppler__FontInfo_Delete(Poppler__FontInfo* self) {
    delete self;
}

libqt_list /* of Poppler__FontInfo* */ Poppler__FontIterator_Next(Poppler__FontIterator* self) {
    QList<Poppler::FontInfo> _ret = self->next();
    // Convert QList<> from C++ memory to manually-managed C memory
    Poppler__FontInfo** _arr = static_cast<Poppler__FontInfo**>(malloc(sizeof(Poppler__FontInfo*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Poppler::FontInfo(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool Poppler__FontIterator_HasNext(const Poppler__FontIterator* self) {
    return self->hasNext();
}

int Poppler__FontIterator_CurrentPage(const Poppler__FontIterator* self) {
    return self->currentPage();
}

void Poppler__FontIterator_Delete(Poppler__FontIterator* self) {
    delete self;
}

libqt_string Poppler__EmbeddedFile_Name(const Poppler__EmbeddedFile* self) {
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

libqt_string Poppler__EmbeddedFile_Description(const Poppler__EmbeddedFile* self) {
    QString _ret = self->description();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int Poppler__EmbeddedFile_Size(const Poppler__EmbeddedFile* self) {
    return self->size();
}

QDateTime* Poppler__EmbeddedFile_ModDate(const Poppler__EmbeddedFile* self) {
    return new QDateTime(self->modDate());
}

QDateTime* Poppler__EmbeddedFile_CreateDate(const Poppler__EmbeddedFile* self) {
    return new QDateTime(self->createDate());
}

libqt_string Poppler__EmbeddedFile_Checksum(const Poppler__EmbeddedFile* self) {
    QByteArray _qb = self->checksum();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string Poppler__EmbeddedFile_MimeType(const Poppler__EmbeddedFile* self) {
    QString _ret = self->mimeType();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Poppler__EmbeddedFile_Data(Poppler__EmbeddedFile* self) {
    QByteArray _qb = self->data();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

bool Poppler__EmbeddedFile_IsValid(const Poppler__EmbeddedFile* self) {
    return self->isValid();
}

void Poppler__EmbeddedFile_Delete(Poppler__EmbeddedFile* self) {
    delete self;
}

QImage* Poppler__Page_RenderToImage(const Poppler__Page* self) {
    return new QImage(self->renderToImage());
}

QImage* Poppler__Page_RenderToImage2(const Poppler__Page* self, double xres, double yres, int x, int y, int w, int h, int rotate, intptr_t partialUpdateCallback, intptr_t shouldDoPartialUpdateCallback, const QVariant* payload) {
    auto partialUpdateCallback_func = reinterpret_cast<Poppler::Page::RenderToImagePartialUpdateFunc>(partialUpdateCallback);
    auto shouldDoPartialUpdateCallback_func = reinterpret_cast<Poppler::Page::ShouldRenderToImagePartialQueryFunc>(shouldDoPartialUpdateCallback);
    return new QImage(self->renderToImage(static_cast<double>(xres), static_cast<double>(yres), static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<Poppler::Page::Rotation>(rotate), partialUpdateCallback_func, shouldDoPartialUpdateCallback_func, *payload));
}

QImage* Poppler__Page_RenderToImage3(const Poppler__Page* self, double xres, double yres, int x, int y, int w, int h, int rotate, intptr_t partialUpdateCallback, intptr_t shouldDoPartialUpdateCallback, intptr_t shouldAbortRenderCallback, const QVariant* payload) {
    auto partialUpdateCallback_func = reinterpret_cast<Poppler::Page::RenderToImagePartialUpdateFunc>(partialUpdateCallback);
    auto shouldDoPartialUpdateCallback_func = reinterpret_cast<Poppler::Page::ShouldRenderToImagePartialQueryFunc>(shouldDoPartialUpdateCallback);
    auto shouldAbortRenderCallback_func = reinterpret_cast<Poppler::Page::ShouldAbortQueryFunc>(shouldAbortRenderCallback);
    return new QImage(self->renderToImage(static_cast<double>(xres), static_cast<double>(yres), static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<Poppler::Page::Rotation>(rotate), partialUpdateCallback_func, shouldDoPartialUpdateCallback_func, shouldAbortRenderCallback_func, *payload));
}

bool Poppler__Page_RenderToPainter(const Poppler__Page* self, QPainter* painter) {
    return self->renderToPainter(painter);
}

QImage* Poppler__Page_Thumbnail(const Poppler__Page* self) {
    return new QImage(self->thumbnail());
}

libqt_string Poppler__Page_Text(const Poppler__Page* self, const QRectF* rect, int textLayout) {
    QString _ret = self->text(*rect, static_cast<Poppler::Page::TextLayout>(textLayout));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Poppler__Page_Text2(const Poppler__Page* self, const QRectF* rect) {
    QString _ret = self->text(*rect);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Poppler__Page_Search(const Poppler__Page* self, const libqt_string text, double* sLeft, double* sTop, double* sRight, double* sBottom, int direction) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->search(text_QString, static_cast<double&>(*sLeft), static_cast<double&>(*sTop), static_cast<double&>(*sRight), static_cast<double&>(*sBottom), static_cast<Poppler::Page::SearchDirection>(direction));
}

libqt_list /* of QRectF* */ Poppler__Page_Search2(const Poppler__Page* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QRectF> _ret = self->search(text_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    QRectF** _arr = static_cast<QRectF**>(malloc(sizeof(QRectF*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QRectF(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of Poppler__TextBox* */ Poppler__Page_TextList(const Poppler__Page* self) {
    std::vector<std::unique_ptr<Poppler::TextBox>> _ret = self->textList();
    // Convert std::vector<> from C++ memory to manually-managed C memory
    Poppler__TextBox** _arr = static_cast<Poppler__TextBox**>(malloc(sizeof(Poppler__TextBox*) * (_ret.size())));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i].release();
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of Poppler__TextBox* */ Poppler__Page_TextList2(const Poppler__Page* self, int rotate, intptr_t shouldAbortExtractionCallback, const QVariant* closure) {
    auto shouldAbortExtractionCallback_func = reinterpret_cast<Poppler::Page::ShouldAbortQueryFunc>(shouldAbortExtractionCallback);
    std::vector<std::unique_ptr<Poppler::TextBox>> _ret = self->textList(static_cast<Poppler::Page::Rotation>(rotate), shouldAbortExtractionCallback_func, *closure);
    // Convert std::vector<> from C++ memory to manually-managed C memory
    Poppler__TextBox** _arr = static_cast<Poppler__TextBox**>(malloc(sizeof(Poppler__TextBox*) * (_ret.size())));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i].release();
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QSizeF* Poppler__Page_PageSizeF(const Poppler__Page* self) {
    return new QSizeF(self->pageSizeF());
}

QSize* Poppler__Page_PageSize(const Poppler__Page* self) {
    return new QSize(self->pageSize());
}

Poppler__PageTransition* Poppler__Page_Transition(const Poppler__Page* self) {
    return self->transition();
}

Poppler__Link* Poppler__Page_Action(const Poppler__Page* self, int act) {
    return self->action(static_cast<Poppler::Page::PageAction>(act)).release();
}

int Poppler__Page_Orientation(const Poppler__Page* self) {
    return static_cast<int>(self->orientation());
}

void Poppler__Page_DefaultCTM(Poppler__Page* self, double* CTM, double dpiX, double dpiY, int rotate, bool upsideDown) {
    self->defaultCTM(static_cast<double*>(CTM), static_cast<double>(dpiX), static_cast<double>(dpiY), static_cast<int>(rotate), upsideDown);
}

libqt_list /* of Poppler__Link* */ Poppler__Page_Links(const Poppler__Page* self) {
    std::vector<std::unique_ptr<Poppler::Link>> _ret = self->links();
    // Convert std::vector<> from C++ memory to manually-managed C memory
    Poppler__Link** _arr = static_cast<Poppler__Link**>(malloc(sizeof(Poppler__Link*) * (_ret.size())));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i].release();
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of Poppler__Annotation* */ Poppler__Page_Annotations(const Poppler__Page* self) {
    std::vector<std::unique_ptr<Poppler::Annotation>> _ret = self->annotations();
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

libqt_list /* of Poppler__Annotation* */ Poppler__Page_Annotations2(const Poppler__Page* self, const libqt_list /* set of int */ subtypes) {
    // Convert libqt_list to QSet<>
    QSet<Poppler::Annotation::SubType> subtypes_set;
    subtypes_set.reserve(subtypes.len);
    int* subtypes_setarr = static_cast<int*>(subtypes.data);
    for (size_t i = 0; i < subtypes.len; ++i) {
        subtypes_set.insert(static_cast<Poppler::Annotation::SubType>(subtypes_setarr[i]));
    }
    std::vector<std::unique_ptr<Poppler::Annotation>> _ret = self->annotations(subtypes_set);
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

void Poppler__Page_AddAnnotation(Poppler__Page* self, const Poppler__Annotation* ann) {
    self->addAnnotation(ann);
}

void Poppler__Page_RemoveAnnotation(Poppler__Page* self, const Poppler__Annotation* ann) {
    self->removeAnnotation(ann);
}

libqt_list /* of Poppler__FormField* */ Poppler__Page_FormFields(const Poppler__Page* self) {
    std::vector<std::unique_ptr<Poppler::FormField>> _ret = self->formFields();
    // Convert std::vector<> from C++ memory to manually-managed C memory
    Poppler__FormField** _arr = static_cast<Poppler__FormField**>(malloc(sizeof(Poppler__FormField*) * (_ret.size())));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i].release();
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

double Poppler__Page_Duration(const Poppler__Page* self) {
    return self->duration();
}

libqt_string Poppler__Page_Label(const Poppler__Page* self) {
    QString _ret = self->label();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int Poppler__Page_Index(const Poppler__Page* self) {
    return self->index();
}

QImage* Poppler__Page_RenderToImage1(const Poppler__Page* self, double xres) {
    return new QImage(self->renderToImage(static_cast<double>(xres)));
}

QImage* Poppler__Page_RenderToImage22(const Poppler__Page* self, double xres, double yres) {
    return new QImage(self->renderToImage(static_cast<double>(xres), static_cast<double>(yres)));
}

QImage* Poppler__Page_RenderToImage32(const Poppler__Page* self, double xres, double yres, int x) {
    return new QImage(self->renderToImage(static_cast<double>(xres), static_cast<double>(yres), static_cast<int>(x)));
}

QImage* Poppler__Page_RenderToImage4(const Poppler__Page* self, double xres, double yres, int x, int y) {
    return new QImage(self->renderToImage(static_cast<double>(xres), static_cast<double>(yres), static_cast<int>(x), static_cast<int>(y)));
}

QImage* Poppler__Page_RenderToImage5(const Poppler__Page* self, double xres, double yres, int x, int y, int w) {
    return new QImage(self->renderToImage(static_cast<double>(xres), static_cast<double>(yres), static_cast<int>(x), static_cast<int>(y), static_cast<int>(w)));
}

QImage* Poppler__Page_RenderToImage6(const Poppler__Page* self, double xres, double yres, int x, int y, int w, int h) {
    return new QImage(self->renderToImage(static_cast<double>(xres), static_cast<double>(yres), static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h)));
}

QImage* Poppler__Page_RenderToImage7(const Poppler__Page* self, double xres, double yres, int x, int y, int w, int h, int rotate) {
    return new QImage(self->renderToImage(static_cast<double>(xres), static_cast<double>(yres), static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<Poppler::Page::Rotation>(rotate)));
}

bool Poppler__Page_RenderToPainter2(const Poppler__Page* self, QPainter* painter, double xres) {
    return self->renderToPainter(painter, static_cast<double>(xres));
}

bool Poppler__Page_RenderToPainter3(const Poppler__Page* self, QPainter* painter, double xres, double yres) {
    return self->renderToPainter(painter, static_cast<double>(xres), static_cast<double>(yres));
}

bool Poppler__Page_RenderToPainter4(const Poppler__Page* self, QPainter* painter, double xres, double yres, int x) {
    return self->renderToPainter(painter, static_cast<double>(xres), static_cast<double>(yres), static_cast<int>(x));
}

bool Poppler__Page_RenderToPainter5(const Poppler__Page* self, QPainter* painter, double xres, double yres, int x, int y) {
    return self->renderToPainter(painter, static_cast<double>(xres), static_cast<double>(yres), static_cast<int>(x), static_cast<int>(y));
}

bool Poppler__Page_RenderToPainter6(const Poppler__Page* self, QPainter* painter, double xres, double yres, int x, int y, int w) {
    return self->renderToPainter(painter, static_cast<double>(xres), static_cast<double>(yres), static_cast<int>(x), static_cast<int>(y), static_cast<int>(w));
}

bool Poppler__Page_RenderToPainter7(const Poppler__Page* self, QPainter* painter, double xres, double yres, int x, int y, int w, int h) {
    return self->renderToPainter(painter, static_cast<double>(xres), static_cast<double>(yres), static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

bool Poppler__Page_RenderToPainter8(const Poppler__Page* self, QPainter* painter, double xres, double yres, int x, int y, int w, int h, int rotate) {
    return self->renderToPainter(painter, static_cast<double>(xres), static_cast<double>(yres), static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<Poppler::Page::Rotation>(rotate));
}

bool Poppler__Page_RenderToPainter9(const Poppler__Page* self, QPainter* painter, double xres, double yres, int x, int y, int w, int h, int rotate, int flags) {
    return self->renderToPainter(painter, static_cast<double>(xres), static_cast<double>(yres), static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<Poppler::Page::Rotation>(rotate), static_cast<Poppler::Page::PainterFlags>(flags));
}

bool Poppler__Page_Search7(const Poppler__Page* self, const libqt_string text, double* sLeft, double* sTop, double* sRight, double* sBottom, int direction, int flags) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->search(text_QString, static_cast<double&>(*sLeft), static_cast<double&>(*sTop), static_cast<double&>(*sRight), static_cast<double&>(*sBottom), static_cast<Poppler::Page::SearchDirection>(direction), static_cast<Poppler::Page::SearchFlags>(flags));
}

bool Poppler__Page_Search8(const Poppler__Page* self, const libqt_string text, double* sLeft, double* sTop, double* sRight, double* sBottom, int direction, int flags, int rotate) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->search(text_QString, static_cast<double&>(*sLeft), static_cast<double&>(*sTop), static_cast<double&>(*sRight), static_cast<double&>(*sBottom), static_cast<Poppler::Page::SearchDirection>(direction), static_cast<Poppler::Page::SearchFlags>(flags), static_cast<Poppler::Page::Rotation>(rotate));
}

libqt_list /* of QRectF* */ Poppler__Page_Search22(const Poppler__Page* self, const libqt_string text, int flags) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QRectF> _ret = self->search(text_QString, static_cast<Poppler::Page::SearchFlags>(flags));
    // Convert QList<> from C++ memory to manually-managed C memory
    QRectF** _arr = static_cast<QRectF**>(malloc(sizeof(QRectF*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QRectF(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QRectF* */ Poppler__Page_Search3(const Poppler__Page* self, const libqt_string text, int flags, int rotate) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QRectF> _ret = self->search(text_QString, static_cast<Poppler::Page::SearchFlags>(flags), static_cast<Poppler::Page::Rotation>(rotate));
    // Convert QList<> from C++ memory to manually-managed C memory
    QRectF** _arr = static_cast<QRectF**>(malloc(sizeof(QRectF*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QRectF(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of Poppler__TextBox* */ Poppler__Page_TextList1(const Poppler__Page* self, int rotate) {
    std::vector<std::unique_ptr<Poppler::TextBox>> _ret = self->textList(static_cast<Poppler::Page::Rotation>(rotate));
    // Convert std::vector<> from C++ memory to manually-managed C memory
    Poppler__TextBox** _arr = static_cast<Poppler__TextBox**>(malloc(sizeof(Poppler__TextBox*) * (_ret.size())));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i].release();
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void Poppler__Page_Delete(Poppler__Page* self) {
    delete self;
}

Poppler__OutlineItem* Poppler__OutlineItem_new() {
    return new Poppler::OutlineItem();
}

Poppler__OutlineItem* Poppler__OutlineItem_new2(const Poppler__OutlineItem* other) {
    return new Poppler::OutlineItem(*other);
}

void Poppler__OutlineItem_OperatorAssign(Poppler__OutlineItem* self, const Poppler__OutlineItem* other) {
    self->operator=(*other);
}

bool Poppler__OutlineItem_IsNull(const Poppler__OutlineItem* self) {
    return self->isNull();
}

libqt_string Poppler__OutlineItem_Name(const Poppler__OutlineItem* self) {
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

bool Poppler__OutlineItem_IsOpen(const Poppler__OutlineItem* self) {
    return self->isOpen();
}

libqt_string Poppler__OutlineItem_ExternalFileName(const Poppler__OutlineItem* self) {
    QString _ret = self->externalFileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Poppler__OutlineItem_Uri(const Poppler__OutlineItem* self) {
    QString _ret = self->uri();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Poppler__OutlineItem_HasChildren(const Poppler__OutlineItem* self) {
    return self->hasChildren();
}

libqt_list /* of Poppler__OutlineItem* */ Poppler__OutlineItem_Children(const Poppler__OutlineItem* self) {
    QVector<Poppler::OutlineItem> _ret = self->children();
    // Convert QVector<> from C++ memory to manually-managed C memory
    Poppler__OutlineItem** _arr = static_cast<Poppler__OutlineItem**>(malloc(sizeof(Poppler__OutlineItem*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Poppler::OutlineItem(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void Poppler__OutlineItem_Delete(Poppler__OutlineItem* self) {
    delete self;
}

void Poppler__Document_SetColorDisplayProfile(Poppler__Document* self, void* outputProfileA) {
    self->setColorDisplayProfile(outputProfileA);
}

void Poppler__Document_SetColorDisplayProfileName(Poppler__Document* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setColorDisplayProfileName(name_QString);
}

void* Poppler__Document_ColorRgbProfile(const Poppler__Document* self) {
    return self->colorRgbProfile();
}

void* Poppler__Document_ColorDisplayProfile(const Poppler__Document* self) {
    return self->colorDisplayProfile();
}

Poppler__Document* Poppler__Document_Load(const libqt_string filePath) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    return Poppler::Document::load(filePath_QString).release();
}

Poppler__Document* Poppler__Document_Load2(QIODevice* device) {
    return Poppler::Document::load(device).release();
}

Poppler__Document* Poppler__Document_LoadFromData(const libqt_string fileContents) {
    QByteArray fileContents_QByteArray(fileContents.data, fileContents.len);
    return Poppler::Document::loadFromData(fileContents_QByteArray).release();
}

Poppler__Page* Poppler__Document_Page(const Poppler__Document* self, int index) {
    return self->page(static_cast<int>(index)).release();
}

Poppler__Page* Poppler__Document_Page2(const Poppler__Document* self, const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return self->page(label_QString).release();
}

int Poppler__Document_NumPages(const Poppler__Document* self) {
    return self->numPages();
}

int Poppler__Document_PageMode(const Poppler__Document* self) {
    return static_cast<int>(self->pageMode());
}

int Poppler__Document_PageLayout(const Poppler__Document* self) {
    return static_cast<int>(self->pageLayout());
}

int Poppler__Document_TextDirection(const Poppler__Document* self) {
    return static_cast<int>(self->textDirection());
}

bool Poppler__Document_Unlock(Poppler__Document* self, const libqt_string ownerPassword, const libqt_string userPassword) {
    QByteArray ownerPassword_QByteArray(ownerPassword.data, ownerPassword.len);
    QByteArray userPassword_QByteArray(userPassword.data, userPassword.len);
    return self->unlock(ownerPassword_QByteArray, userPassword_QByteArray);
}

bool Poppler__Document_IsLocked(const Poppler__Document* self) {
    return self->isLocked();
}

QDateTime* Poppler__Document_Date(const Poppler__Document* self, const libqt_string typeVal) {
    QString typeVal_QString = QString::fromUtf8(typeVal.data, typeVal.len);
    return new QDateTime(self->date(typeVal_QString));
}

bool Poppler__Document_SetDate(Poppler__Document* self, const libqt_string key, const QDateTime* val) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->setDate(key_QString, *val);
}

QDateTime* Poppler__Document_CreationDate(const Poppler__Document* self) {
    return new QDateTime(self->creationDate());
}

bool Poppler__Document_SetCreationDate(Poppler__Document* self, const QDateTime* val) {
    return self->setCreationDate(*val);
}

QDateTime* Poppler__Document_ModificationDate(const Poppler__Document* self) {
    return new QDateTime(self->modificationDate());
}

bool Poppler__Document_SetModificationDate(Poppler__Document* self, const QDateTime* val) {
    return self->setModificationDate(*val);
}

libqt_string Poppler__Document_Info(const Poppler__Document* self, const libqt_string typeVal) {
    QString typeVal_QString = QString::fromUtf8(typeVal.data, typeVal.len);
    QString _ret = self->info(typeVal_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Poppler__Document_SetInfo(Poppler__Document* self, const libqt_string key, const libqt_string val) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString val_QString = QString::fromUtf8(val.data, val.len);
    return self->setInfo(key_QString, val_QString);
}

libqt_string Poppler__Document_Title(const Poppler__Document* self) {
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

bool Poppler__Document_SetTitle(Poppler__Document* self, const libqt_string val) {
    QString val_QString = QString::fromUtf8(val.data, val.len);
    return self->setTitle(val_QString);
}

libqt_string Poppler__Document_Author(const Poppler__Document* self) {
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

bool Poppler__Document_SetAuthor(Poppler__Document* self, const libqt_string val) {
    QString val_QString = QString::fromUtf8(val.data, val.len);
    return self->setAuthor(val_QString);
}

libqt_string Poppler__Document_Subject(const Poppler__Document* self) {
    QString _ret = self->subject();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Poppler__Document_SetSubject(Poppler__Document* self, const libqt_string val) {
    QString val_QString = QString::fromUtf8(val.data, val.len);
    return self->setSubject(val_QString);
}

libqt_string Poppler__Document_Keywords(const Poppler__Document* self) {
    QString _ret = self->keywords();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Poppler__Document_SetKeywords(Poppler__Document* self, const libqt_string val) {
    QString val_QString = QString::fromUtf8(val.data, val.len);
    return self->setKeywords(val_QString);
}

libqt_string Poppler__Document_Creator(const Poppler__Document* self) {
    QString _ret = self->creator();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Poppler__Document_SetCreator(Poppler__Document* self, const libqt_string val) {
    QString val_QString = QString::fromUtf8(val.data, val.len);
    return self->setCreator(val_QString);
}

libqt_string Poppler__Document_Producer(const Poppler__Document* self) {
    QString _ret = self->producer();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Poppler__Document_SetProducer(Poppler__Document* self, const libqt_string val) {
    QString val_QString = QString::fromUtf8(val.data, val.len);
    return self->setProducer(val_QString);
}

bool Poppler__Document_RemoveInfo(Poppler__Document* self) {
    return self->removeInfo();
}

libqt_list /* of libqt_string */ Poppler__Document_InfoKeys(const Poppler__Document* self) {
    QList<QString> _ret = self->infoKeys();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool Poppler__Document_IsEncrypted(const Poppler__Document* self) {
    return self->isEncrypted();
}

bool Poppler__Document_IsLinearized(const Poppler__Document* self) {
    return self->isLinearized();
}

bool Poppler__Document_OkToPrint(const Poppler__Document* self) {
    return self->okToPrint();
}

bool Poppler__Document_OkToPrintHighRes(const Poppler__Document* self) {
    return self->okToPrintHighRes();
}

bool Poppler__Document_OkToChange(const Poppler__Document* self) {
    return self->okToChange();
}

bool Poppler__Document_OkToCopy(const Poppler__Document* self) {
    return self->okToCopy();
}

bool Poppler__Document_OkToAddNotes(const Poppler__Document* self) {
    return self->okToAddNotes();
}

bool Poppler__Document_OkToFillForm(const Poppler__Document* self) {
    return self->okToFillForm();
}

bool Poppler__Document_OkToCreateFormFields(const Poppler__Document* self) {
    return self->okToCreateFormFields();
}

bool Poppler__Document_OkToExtractForAccessibility(const Poppler__Document* self) {
    return self->okToExtractForAccessibility();
}

bool Poppler__Document_OkToAssemble(const Poppler__Document* self) {
    return self->okToAssemble();
}

Poppler__Document__PdfVersion* Poppler__Document_GetPdfVersion(const Poppler__Document* self) {
    return new Poppler::Document::PdfVersion(self->getPdfVersion());
}

libqt_list /* of Poppler__FontInfo* */ Poppler__Document_Fonts(const Poppler__Document* self) {
    QList<Poppler::FontInfo> _ret = self->fonts();
    // Convert QList<> from C++ memory to manually-managed C memory
    Poppler__FontInfo** _arr = static_cast<Poppler__FontInfo**>(malloc(sizeof(Poppler__FontInfo*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Poppler::FontInfo(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

Poppler__FontIterator* Poppler__Document_NewFontIterator(const Poppler__Document* self) {
    return self->newFontIterator().release();
}

libqt_string Poppler__Document_FontData(const Poppler__Document* self, const Poppler__FontInfo* fi) {
    QByteArray _qb = self->fontData(*fi);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_list /* of Poppler__EmbeddedFile* */ Poppler__Document_EmbeddedFiles(const Poppler__Document* self) {
    QList<Poppler::EmbeddedFile*> _ret = self->embeddedFiles();
    // Convert QList<> from C++ memory to manually-managed C memory
    Poppler__EmbeddedFile** _arr = static_cast<Poppler__EmbeddedFile**>(malloc(sizeof(Poppler__EmbeddedFile*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool Poppler__Document_HasEmbeddedFiles(const Poppler__Document* self) {
    return self->hasEmbeddedFiles();
}

libqt_list /* of Poppler__OutlineItem* */ Poppler__Document_Outline(const Poppler__Document* self) {
    QVector<Poppler::OutlineItem> _ret = self->outline();
    // Convert QVector<> from C++ memory to manually-managed C memory
    Poppler__OutlineItem** _arr = static_cast<Poppler__OutlineItem**>(malloc(sizeof(Poppler__OutlineItem*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Poppler::OutlineItem(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

Poppler__LinkDestination* Poppler__Document_LinkDestination(Poppler__Document* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->linkDestination(name_QString).release();
}

void Poppler__Document_SetPaperColor(Poppler__Document* self, const QColor* color) {
    self->setPaperColor(*color);
}

QColor* Poppler__Document_PaperColor(const Poppler__Document* self) {
    return new QColor(self->paperColor());
}

void Poppler__Document_SetRenderBackend(Poppler__Document* self, int backend) {
    self->setRenderBackend(static_cast<Poppler::Document::RenderBackend>(backend));
}

int Poppler__Document_RenderBackend(const Poppler__Document* self) {
    return static_cast<int>(self->renderBackend());
}

libqt_list /* set of int */ Poppler__Document_AvailableRenderBackends() {
    QSet<Poppler::Document::RenderBackend> _ret = Poppler::Document::availableRenderBackends();
    // Convert QSet<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    int _ctr = 0;
    QSetIterator<Poppler::Document::RenderBackend> _itr(_ret);
    while (_itr.hasNext()) {
        _arr[_ctr++] = static_cast<int>(_itr.next());
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void Poppler__Document_SetRenderHint(Poppler__Document* self, int hint) {
    self->setRenderHint(static_cast<Poppler::Document::RenderHint>(hint));
}

int Poppler__Document_RenderHints(const Poppler__Document* self) {
    return static_cast<int>(self->renderHints());
}

Poppler__PSConverter* Poppler__Document_PsConverter(const Poppler__Document* self) {
    return self->psConverter().release();
}

Poppler__PDFConverter* Poppler__Document_PdfConverter(const Poppler__Document* self) {
    return self->pdfConverter().release();
}

libqt_string Poppler__Document_Metadata(const Poppler__Document* self) {
    QString _ret = self->metadata();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Poppler__Document_HasOptionalContent(const Poppler__Document* self) {
    return self->hasOptionalContent();
}

Poppler__OptContentModel* Poppler__Document_OptionalContentModel(Poppler__Document* self) {
    return self->optionalContentModel();
}

void Poppler__Document_ApplyResetFormsLink(Poppler__Document* self, const Poppler__LinkResetForm* link) {
    self->applyResetFormsLink(*link);
}

libqt_list /* of libqt_string */ Poppler__Document_Scripts(const Poppler__Document* self) {
    QList<QString> _ret = self->scripts();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

Poppler__Link* Poppler__Document_AdditionalAction(const Poppler__Document* self, int typeVal) {
    return self->additionalAction(static_cast<Poppler::Document::DocumentAdditionalActionsType>(typeVal)).release();
}

int Poppler__Document_FormType(const Poppler__Document* self) {
    return static_cast<int>(self->formType());
}

libqt_list /* of int */ Poppler__Document_FormCalculateOrder(const Poppler__Document* self) {
    QVector<int> _ret = self->formCalculateOrder();
    // Convert QVector<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of Poppler__FormFieldSignature* */ Poppler__Document_Signatures(const Poppler__Document* self) {
    std::vector<std::unique_ptr<Poppler::FormFieldSignature>> _ret = self->signatures();
    // Convert std::vector<> from C++ memory to manually-managed C memory
    Poppler__FormFieldSignature** _arr = static_cast<Poppler__FormFieldSignature**>(malloc(sizeof(Poppler__FormFieldSignature*) * (_ret.size())));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i].release();
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool Poppler__Document_XrefWasReconstructed(const Poppler__Document* self) {
    return self->xrefWasReconstructed();
}

void Poppler__Document_SetXRefReconstructedCallback(Poppler__Document* self, intptr_t callback) {
    auto callback_func = [callback]() -> void {
        reinterpret_cast<void (*)()>(callback)();
    };
    self->setXRefReconstructedCallback(callback_func);
}

Poppler__Document* Poppler__Document_Load22(const libqt_string filePath, const libqt_string ownerPassword) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    QByteArray ownerPassword_QByteArray(ownerPassword.data, ownerPassword.len);
    return Poppler::Document::load(filePath_QString, ownerPassword_QByteArray).release();
}

Poppler__Document* Poppler__Document_Load3(const libqt_string filePath, const libqt_string ownerPassword, const libqt_string userPassword) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    QByteArray ownerPassword_QByteArray(ownerPassword.data, ownerPassword.len);
    QByteArray userPassword_QByteArray(userPassword.data, userPassword.len);
    return Poppler::Document::load(filePath_QString, ownerPassword_QByteArray, userPassword_QByteArray).release();
}

Poppler__Document* Poppler__Document_Load23(QIODevice* device, const libqt_string ownerPassword) {
    QByteArray ownerPassword_QByteArray(ownerPassword.data, ownerPassword.len);
    return Poppler::Document::load(device, ownerPassword_QByteArray).release();
}

Poppler__Document* Poppler__Document_Load32(QIODevice* device, const libqt_string ownerPassword, const libqt_string userPassword) {
    QByteArray ownerPassword_QByteArray(ownerPassword.data, ownerPassword.len);
    QByteArray userPassword_QByteArray(userPassword.data, userPassword.len);
    return Poppler::Document::load(device, ownerPassword_QByteArray, userPassword_QByteArray).release();
}

Poppler__Document* Poppler__Document_LoadFromData2(const libqt_string fileContents, const libqt_string ownerPassword) {
    QByteArray fileContents_QByteArray(fileContents.data, fileContents.len);
    QByteArray ownerPassword_QByteArray(ownerPassword.data, ownerPassword.len);
    return Poppler::Document::loadFromData(fileContents_QByteArray, ownerPassword_QByteArray).release();
}

Poppler__Document* Poppler__Document_LoadFromData3(const libqt_string fileContents, const libqt_string ownerPassword, const libqt_string userPassword) {
    QByteArray fileContents_QByteArray(fileContents.data, fileContents.len);
    QByteArray ownerPassword_QByteArray(ownerPassword.data, ownerPassword.len);
    QByteArray userPassword_QByteArray(userPassword.data, userPassword.len);
    return Poppler::Document::loadFromData(fileContents_QByteArray, ownerPassword_QByteArray, userPassword_QByteArray).release();
}

Poppler__FontIterator* Poppler__Document_NewFontIterator1(const Poppler__Document* self, int startPage) {
    return self->newFontIterator(static_cast<int>(startPage)).release();
}

void Poppler__Document_SetRenderHint2(Poppler__Document* self, int hint, bool on) {
    self->setRenderHint(static_cast<Poppler::Document::RenderHint>(hint), on);
}

void Poppler__Document_Delete(Poppler__Document* self) {
    delete self;
}

int Poppler__SoundObject_SoundType(const Poppler__SoundObject* self) {
    return static_cast<int>(self->soundType());
}

libqt_string Poppler__SoundObject_Url(const Poppler__SoundObject* self) {
    QString _ret = self->url();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Poppler__SoundObject_Data(const Poppler__SoundObject* self) {
    QByteArray _qb = self->data();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

double Poppler__SoundObject_SamplingRate(const Poppler__SoundObject* self) {
    return self->samplingRate();
}

int Poppler__SoundObject_Channels(const Poppler__SoundObject* self) {
    return self->channels();
}

int Poppler__SoundObject_BitsPerSample(const Poppler__SoundObject* self) {
    return self->bitsPerSample();
}

int Poppler__SoundObject_SoundEncoding(const Poppler__SoundObject* self) {
    return static_cast<int>(self->soundEncoding());
}

void Poppler__SoundObject_Delete(Poppler__SoundObject* self) {
    delete self;
}

libqt_string Poppler__MovieObject_Url(const Poppler__MovieObject* self) {
    QString _ret = self->url();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* Poppler__MovieObject_Size(const Poppler__MovieObject* self) {
    return new QSize(self->size());
}

int Poppler__MovieObject_Rotation(const Poppler__MovieObject* self) {
    return self->rotation();
}

bool Poppler__MovieObject_ShowControls(const Poppler__MovieObject* self) {
    return self->showControls();
}

int Poppler__MovieObject_PlayMode(const Poppler__MovieObject* self) {
    return static_cast<int>(self->playMode());
}

bool Poppler__MovieObject_ShowPosterImage(const Poppler__MovieObject* self) {
    return self->showPosterImage();
}

QImage* Poppler__MovieObject_PosterImage(const Poppler__MovieObject* self) {
    return new QImage(self->posterImage());
}

void Poppler__MovieObject_Delete(Poppler__MovieObject* self) {
    delete self;
}

int Poppler__Document__PdfVersion_Major(const Poppler__Document__PdfVersion* self) {
    return self->major;
}

void Poppler__Document__PdfVersion_SetMajor(Poppler__Document__PdfVersion* self, int major) {
    self->major = static_cast<int>(major);
}

int Poppler__Document__PdfVersion_Minor(const Poppler__Document__PdfVersion* self) {
    return self->minor;
}

void Poppler__Document__PdfVersion_SetMinor(Poppler__Document__PdfVersion* self, int minor) {
    self->minor = static_cast<int>(minor);
}

void Poppler__Document__PdfVersion_Delete(Poppler__Document__PdfVersion* self) {
    delete self;
}
