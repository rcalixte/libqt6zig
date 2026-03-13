#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_POPPLERC_LIBPOPPLER_QT6_H
#define SRC_RESTRICTED_EXTRAS_POPPLERC_LIBPOPPLER_QT6_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__Annotation)
typedef Poppler::Annotation Poppler__Annotation;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__Document)
typedef Poppler::Document Poppler__Document;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__Document__PdfVersion)
typedef Poppler::Document::PdfVersion Poppler__Document__PdfVersion;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__EmbeddedFile)
typedef Poppler::EmbeddedFile Poppler__EmbeddedFile;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__FontInfo)
typedef Poppler::FontInfo Poppler__FontInfo;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__FontIterator)
typedef Poppler::FontIterator Poppler__FontIterator;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__FormField)
typedef Poppler::FormField Poppler__FormField;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__FormFieldSignature)
typedef Poppler::FormFieldSignature Poppler__FormFieldSignature;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__Link)
typedef Poppler::Link Poppler__Link;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkDestination)
typedef Poppler::LinkDestination Poppler__LinkDestination;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkResetForm)
typedef Poppler::LinkResetForm Poppler__LinkResetForm;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__MovieObject)
typedef Poppler::MovieObject Poppler__MovieObject;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__OptContentModel)
typedef Poppler::OptContentModel Poppler__OptContentModel;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__OutlineItem)
typedef Poppler::OutlineItem Poppler__OutlineItem;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__PDFConverter)
typedef Poppler::PDFConverter Poppler__PDFConverter;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__PSConverter)
typedef Poppler::PSConverter Poppler__PSConverter;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__Page)
typedef Poppler::Page Poppler__Page;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__PageTransition)
typedef Poppler::PageTransition Poppler__PageTransition;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__SoundObject)
typedef Poppler::SoundObject Poppler__SoundObject;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__TextBox)
typedef Poppler::TextBox Poppler__TextBox;
#endif
#else
typedef struct Poppler Poppler;
typedef struct Poppler__Annotation Poppler__Annotation;
typedef struct Poppler__Document Poppler__Document;
typedef struct Poppler__Document__PdfVersion Poppler__Document__PdfVersion;
typedef struct Poppler__EmbeddedFile Poppler__EmbeddedFile;
typedef struct Poppler__FontInfo Poppler__FontInfo;
typedef struct Poppler__FontIterator Poppler__FontIterator;
typedef struct Poppler__FormField Poppler__FormField;
typedef struct Poppler__FormFieldSignature Poppler__FormFieldSignature;
typedef struct Poppler__Link Poppler__Link;
typedef struct Poppler__LinkDestination Poppler__LinkDestination;
typedef struct Poppler__LinkResetForm Poppler__LinkResetForm;
typedef struct Poppler__MovieObject Poppler__MovieObject;
typedef struct Poppler__OptContentModel Poppler__OptContentModel;
typedef struct Poppler__OutlineItem Poppler__OutlineItem;
typedef struct Poppler__PDFConverter Poppler__PDFConverter;
typedef struct Poppler__PSConverter Poppler__PSConverter;
typedef struct Poppler__Page Poppler__Page;
typedef struct Poppler__PageTransition Poppler__PageTransition;
typedef struct Poppler__SoundObject Poppler__SoundObject;
typedef struct Poppler__TextBox Poppler__TextBox;
typedef struct QColor QColor;
typedef struct QDateTime QDateTime;
typedef struct QIODevice QIODevice;
typedef struct QImage QImage;
typedef struct QPainter QPainter;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QVariant QVariant;
#endif

QDateTime* Poppler_ConvertDate(const char* param1);
bool Poppler_IsCmsAvailable();
bool Poppler_IsOverprintPreviewAvailable();

Poppler__TextBox* Poppler__TextBox_new(const libqt_string text, const QRectF* bBox);
libqt_string Poppler__TextBox_Text(const Poppler__TextBox* self);
QRectF* Poppler__TextBox_BoundingBox(const Poppler__TextBox* self);
Poppler__TextBox* Poppler__TextBox_NextWord(const Poppler__TextBox* self);
QRectF* Poppler__TextBox_CharBoundingBox(const Poppler__TextBox* self, int i);
bool Poppler__TextBox_HasSpaceAfter(const Poppler__TextBox* self);
void Poppler__TextBox_Delete(Poppler__TextBox* self);

Poppler__FontInfo* Poppler__FontInfo_new();
Poppler__FontInfo* Poppler__FontInfo_new2(const Poppler__FontInfo* fi);
libqt_string Poppler__FontInfo_Name(const Poppler__FontInfo* self);
libqt_string Poppler__FontInfo_SubstituteName(const Poppler__FontInfo* self);
libqt_string Poppler__FontInfo_File(const Poppler__FontInfo* self);
bool Poppler__FontInfo_IsEmbedded(const Poppler__FontInfo* self);
bool Poppler__FontInfo_IsSubset(const Poppler__FontInfo* self);
int Poppler__FontInfo_Type(const Poppler__FontInfo* self);
libqt_string Poppler__FontInfo_TypeName(const Poppler__FontInfo* self);
void Poppler__FontInfo_OperatorAssign(Poppler__FontInfo* self, const Poppler__FontInfo* fi);
void Poppler__FontInfo_Delete(Poppler__FontInfo* self);

libqt_list /* of Poppler__FontInfo* */ Poppler__FontIterator_Next(Poppler__FontIterator* self);
bool Poppler__FontIterator_HasNext(const Poppler__FontIterator* self);
int Poppler__FontIterator_CurrentPage(const Poppler__FontIterator* self);
void Poppler__FontIterator_Delete(Poppler__FontIterator* self);

libqt_string Poppler__EmbeddedFile_Name(const Poppler__EmbeddedFile* self);
libqt_string Poppler__EmbeddedFile_Description(const Poppler__EmbeddedFile* self);
int Poppler__EmbeddedFile_Size(const Poppler__EmbeddedFile* self);
QDateTime* Poppler__EmbeddedFile_ModDate(const Poppler__EmbeddedFile* self);
QDateTime* Poppler__EmbeddedFile_CreateDate(const Poppler__EmbeddedFile* self);
libqt_string Poppler__EmbeddedFile_Checksum(const Poppler__EmbeddedFile* self);
libqt_string Poppler__EmbeddedFile_MimeType(const Poppler__EmbeddedFile* self);
libqt_string Poppler__EmbeddedFile_Data(Poppler__EmbeddedFile* self);
bool Poppler__EmbeddedFile_IsValid(const Poppler__EmbeddedFile* self);
void Poppler__EmbeddedFile_Delete(Poppler__EmbeddedFile* self);

QImage* Poppler__Page_RenderToImage(const Poppler__Page* self);
QImage* Poppler__Page_RenderToImage2(const Poppler__Page* self, double xres, double yres, int x, int y, int w, int h, int rotate, intptr_t partialUpdateCallback, intptr_t shouldDoPartialUpdateCallback, const QVariant* payload);
QImage* Poppler__Page_RenderToImage3(const Poppler__Page* self, double xres, double yres, int x, int y, int w, int h, int rotate, intptr_t partialUpdateCallback, intptr_t shouldDoPartialUpdateCallback, intptr_t shouldAbortRenderCallback, const QVariant* payload);
bool Poppler__Page_RenderToPainter(const Poppler__Page* self, QPainter* painter);
QImage* Poppler__Page_Thumbnail(const Poppler__Page* self);
libqt_string Poppler__Page_Text(const Poppler__Page* self, const QRectF* rect, int textLayout);
libqt_string Poppler__Page_Text2(const Poppler__Page* self, const QRectF* rect);
bool Poppler__Page_Search(const Poppler__Page* self, const libqt_string text, double* sLeft, double* sTop, double* sRight, double* sBottom, int direction);
libqt_list /* of QRectF* */ Poppler__Page_Search2(const Poppler__Page* self, const libqt_string text);
libqt_list /* of Poppler__TextBox* */ Poppler__Page_TextList(const Poppler__Page* self);
libqt_list /* of Poppler__TextBox* */ Poppler__Page_TextList2(const Poppler__Page* self, int rotate, intptr_t shouldAbortExtractionCallback, const QVariant* closure);
QSizeF* Poppler__Page_PageSizeF(const Poppler__Page* self);
QSize* Poppler__Page_PageSize(const Poppler__Page* self);
Poppler__PageTransition* Poppler__Page_Transition(const Poppler__Page* self);
Poppler__Link* Poppler__Page_Action(const Poppler__Page* self, int act);
int Poppler__Page_Orientation(const Poppler__Page* self);
void Poppler__Page_DefaultCTM(Poppler__Page* self, double* CTM, double dpiX, double dpiY, int rotate, bool upsideDown);
libqt_list /* of Poppler__Link* */ Poppler__Page_Links(const Poppler__Page* self);
libqt_list /* of Poppler__Annotation* */ Poppler__Page_Annotations(const Poppler__Page* self);
libqt_list /* of Poppler__Annotation* */ Poppler__Page_Annotations2(const Poppler__Page* self, const libqt_list /* set of int */ subtypes);
void Poppler__Page_AddAnnotation(Poppler__Page* self, const Poppler__Annotation* ann);
void Poppler__Page_RemoveAnnotation(Poppler__Page* self, const Poppler__Annotation* ann);
libqt_list /* of Poppler__FormField* */ Poppler__Page_FormFields(const Poppler__Page* self);
double Poppler__Page_Duration(const Poppler__Page* self);
libqt_string Poppler__Page_Label(const Poppler__Page* self);
int Poppler__Page_Index(const Poppler__Page* self);
QImage* Poppler__Page_RenderToImage1(const Poppler__Page* self, double xres);
QImage* Poppler__Page_RenderToImage22(const Poppler__Page* self, double xres, double yres);
QImage* Poppler__Page_RenderToImage32(const Poppler__Page* self, double xres, double yres, int x);
QImage* Poppler__Page_RenderToImage4(const Poppler__Page* self, double xres, double yres, int x, int y);
QImage* Poppler__Page_RenderToImage5(const Poppler__Page* self, double xres, double yres, int x, int y, int w);
QImage* Poppler__Page_RenderToImage6(const Poppler__Page* self, double xres, double yres, int x, int y, int w, int h);
QImage* Poppler__Page_RenderToImage7(const Poppler__Page* self, double xres, double yres, int x, int y, int w, int h, int rotate);
bool Poppler__Page_RenderToPainter2(const Poppler__Page* self, QPainter* painter, double xres);
bool Poppler__Page_RenderToPainter3(const Poppler__Page* self, QPainter* painter, double xres, double yres);
bool Poppler__Page_RenderToPainter4(const Poppler__Page* self, QPainter* painter, double xres, double yres, int x);
bool Poppler__Page_RenderToPainter5(const Poppler__Page* self, QPainter* painter, double xres, double yres, int x, int y);
bool Poppler__Page_RenderToPainter6(const Poppler__Page* self, QPainter* painter, double xres, double yres, int x, int y, int w);
bool Poppler__Page_RenderToPainter7(const Poppler__Page* self, QPainter* painter, double xres, double yres, int x, int y, int w, int h);
bool Poppler__Page_RenderToPainter8(const Poppler__Page* self, QPainter* painter, double xres, double yres, int x, int y, int w, int h, int rotate);
bool Poppler__Page_RenderToPainter9(const Poppler__Page* self, QPainter* painter, double xres, double yres, int x, int y, int w, int h, int rotate, int flags);
bool Poppler__Page_Search7(const Poppler__Page* self, const libqt_string text, double* sLeft, double* sTop, double* sRight, double* sBottom, int direction, int flags);
bool Poppler__Page_Search8(const Poppler__Page* self, const libqt_string text, double* sLeft, double* sTop, double* sRight, double* sBottom, int direction, int flags, int rotate);
libqt_list /* of QRectF* */ Poppler__Page_Search22(const Poppler__Page* self, const libqt_string text, int flags);
libqt_list /* of QRectF* */ Poppler__Page_Search3(const Poppler__Page* self, const libqt_string text, int flags, int rotate);
libqt_list /* of Poppler__TextBox* */ Poppler__Page_TextList1(const Poppler__Page* self, int rotate);
void Poppler__Page_Delete(Poppler__Page* self);

Poppler__OutlineItem* Poppler__OutlineItem_new();
Poppler__OutlineItem* Poppler__OutlineItem_new2(const Poppler__OutlineItem* other);
void Poppler__OutlineItem_OperatorAssign(Poppler__OutlineItem* self, const Poppler__OutlineItem* other);
bool Poppler__OutlineItem_IsNull(const Poppler__OutlineItem* self);
libqt_string Poppler__OutlineItem_Name(const Poppler__OutlineItem* self);
bool Poppler__OutlineItem_IsOpen(const Poppler__OutlineItem* self);
libqt_string Poppler__OutlineItem_ExternalFileName(const Poppler__OutlineItem* self);
libqt_string Poppler__OutlineItem_Uri(const Poppler__OutlineItem* self);
bool Poppler__OutlineItem_HasChildren(const Poppler__OutlineItem* self);
libqt_list /* of Poppler__OutlineItem* */ Poppler__OutlineItem_Children(const Poppler__OutlineItem* self);
void Poppler__OutlineItem_Delete(Poppler__OutlineItem* self);

void Poppler__Document_SetColorDisplayProfile(Poppler__Document* self, void* outputProfileA);
void Poppler__Document_SetColorDisplayProfileName(Poppler__Document* self, const libqt_string name);
void* Poppler__Document_ColorRgbProfile(const Poppler__Document* self);
void* Poppler__Document_ColorDisplayProfile(const Poppler__Document* self);
Poppler__Document* Poppler__Document_Load(const libqt_string filePath);
Poppler__Document* Poppler__Document_Load2(QIODevice* device);
Poppler__Document* Poppler__Document_LoadFromData(const libqt_string fileContents);
Poppler__Page* Poppler__Document_Page(const Poppler__Document* self, int index);
Poppler__Page* Poppler__Document_Page2(const Poppler__Document* self, const libqt_string label);
int Poppler__Document_NumPages(const Poppler__Document* self);
int Poppler__Document_PageMode(const Poppler__Document* self);
int Poppler__Document_PageLayout(const Poppler__Document* self);
int Poppler__Document_TextDirection(const Poppler__Document* self);
bool Poppler__Document_Unlock(Poppler__Document* self, const libqt_string ownerPassword, const libqt_string userPassword);
bool Poppler__Document_IsLocked(const Poppler__Document* self);
QDateTime* Poppler__Document_Date(const Poppler__Document* self, const libqt_string typeVal);
bool Poppler__Document_SetDate(Poppler__Document* self, const libqt_string key, const QDateTime* val);
QDateTime* Poppler__Document_CreationDate(const Poppler__Document* self);
bool Poppler__Document_SetCreationDate(Poppler__Document* self, const QDateTime* val);
QDateTime* Poppler__Document_ModificationDate(const Poppler__Document* self);
bool Poppler__Document_SetModificationDate(Poppler__Document* self, const QDateTime* val);
libqt_string Poppler__Document_Info(const Poppler__Document* self, const libqt_string typeVal);
bool Poppler__Document_SetInfo(Poppler__Document* self, const libqt_string key, const libqt_string val);
libqt_string Poppler__Document_Title(const Poppler__Document* self);
bool Poppler__Document_SetTitle(Poppler__Document* self, const libqt_string val);
libqt_string Poppler__Document_Author(const Poppler__Document* self);
bool Poppler__Document_SetAuthor(Poppler__Document* self, const libqt_string val);
libqt_string Poppler__Document_Subject(const Poppler__Document* self);
bool Poppler__Document_SetSubject(Poppler__Document* self, const libqt_string val);
libqt_string Poppler__Document_Keywords(const Poppler__Document* self);
bool Poppler__Document_SetKeywords(Poppler__Document* self, const libqt_string val);
libqt_string Poppler__Document_Creator(const Poppler__Document* self);
bool Poppler__Document_SetCreator(Poppler__Document* self, const libqt_string val);
libqt_string Poppler__Document_Producer(const Poppler__Document* self);
bool Poppler__Document_SetProducer(Poppler__Document* self, const libqt_string val);
bool Poppler__Document_RemoveInfo(Poppler__Document* self);
libqt_list /* of libqt_string */ Poppler__Document_InfoKeys(const Poppler__Document* self);
bool Poppler__Document_IsEncrypted(const Poppler__Document* self);
bool Poppler__Document_IsLinearized(const Poppler__Document* self);
bool Poppler__Document_OkToPrint(const Poppler__Document* self);
bool Poppler__Document_OkToPrintHighRes(const Poppler__Document* self);
bool Poppler__Document_OkToChange(const Poppler__Document* self);
bool Poppler__Document_OkToCopy(const Poppler__Document* self);
bool Poppler__Document_OkToAddNotes(const Poppler__Document* self);
bool Poppler__Document_OkToFillForm(const Poppler__Document* self);
bool Poppler__Document_OkToCreateFormFields(const Poppler__Document* self);
bool Poppler__Document_OkToExtractForAccessibility(const Poppler__Document* self);
bool Poppler__Document_OkToAssemble(const Poppler__Document* self);
Poppler__Document__PdfVersion* Poppler__Document_GetPdfVersion(const Poppler__Document* self);
libqt_list /* of Poppler__FontInfo* */ Poppler__Document_Fonts(const Poppler__Document* self);
Poppler__FontIterator* Poppler__Document_NewFontIterator(const Poppler__Document* self);
libqt_string Poppler__Document_FontData(const Poppler__Document* self, const Poppler__FontInfo* fi);
libqt_list /* of Poppler__EmbeddedFile* */ Poppler__Document_EmbeddedFiles(const Poppler__Document* self);
bool Poppler__Document_HasEmbeddedFiles(const Poppler__Document* self);
libqt_list /* of Poppler__OutlineItem* */ Poppler__Document_Outline(const Poppler__Document* self);
Poppler__LinkDestination* Poppler__Document_LinkDestination(Poppler__Document* self, const libqt_string name);
void Poppler__Document_SetPaperColor(Poppler__Document* self, const QColor* color);
QColor* Poppler__Document_PaperColor(const Poppler__Document* self);
void Poppler__Document_SetRenderBackend(Poppler__Document* self, int backend);
int Poppler__Document_RenderBackend(const Poppler__Document* self);
libqt_list /* set of int */ Poppler__Document_AvailableRenderBackends();
void Poppler__Document_SetRenderHint(Poppler__Document* self, int hint);
int Poppler__Document_RenderHints(const Poppler__Document* self);
Poppler__PSConverter* Poppler__Document_PsConverter(const Poppler__Document* self);
Poppler__PDFConverter* Poppler__Document_PdfConverter(const Poppler__Document* self);
libqt_string Poppler__Document_Metadata(const Poppler__Document* self);
bool Poppler__Document_HasOptionalContent(const Poppler__Document* self);
Poppler__OptContentModel* Poppler__Document_OptionalContentModel(Poppler__Document* self);
void Poppler__Document_ApplyResetFormsLink(Poppler__Document* self, const Poppler__LinkResetForm* link);
libqt_list /* of libqt_string */ Poppler__Document_Scripts(const Poppler__Document* self);
Poppler__Link* Poppler__Document_AdditionalAction(const Poppler__Document* self, int typeVal);
int Poppler__Document_FormType(const Poppler__Document* self);
libqt_list /* of int */ Poppler__Document_FormCalculateOrder(const Poppler__Document* self);
libqt_list /* of Poppler__FormFieldSignature* */ Poppler__Document_Signatures(const Poppler__Document* self);
bool Poppler__Document_XrefWasReconstructed(const Poppler__Document* self);
void Poppler__Document_SetXRefReconstructedCallback(Poppler__Document* self, intptr_t callback);
Poppler__Document* Poppler__Document_Load22(const libqt_string filePath, const libqt_string ownerPassword);
Poppler__Document* Poppler__Document_Load3(const libqt_string filePath, const libqt_string ownerPassword, const libqt_string userPassword);
Poppler__Document* Poppler__Document_Load23(QIODevice* device, const libqt_string ownerPassword);
Poppler__Document* Poppler__Document_Load32(QIODevice* device, const libqt_string ownerPassword, const libqt_string userPassword);
Poppler__Document* Poppler__Document_LoadFromData2(const libqt_string fileContents, const libqt_string ownerPassword);
Poppler__Document* Poppler__Document_LoadFromData3(const libqt_string fileContents, const libqt_string ownerPassword, const libqt_string userPassword);
Poppler__FontIterator* Poppler__Document_NewFontIterator1(const Poppler__Document* self, int startPage);
void Poppler__Document_SetRenderHint2(Poppler__Document* self, int hint, bool on);
void Poppler__Document_Delete(Poppler__Document* self);

int Poppler__SoundObject_SoundType(const Poppler__SoundObject* self);
libqt_string Poppler__SoundObject_Url(const Poppler__SoundObject* self);
libqt_string Poppler__SoundObject_Data(const Poppler__SoundObject* self);
double Poppler__SoundObject_SamplingRate(const Poppler__SoundObject* self);
int Poppler__SoundObject_Channels(const Poppler__SoundObject* self);
int Poppler__SoundObject_BitsPerSample(const Poppler__SoundObject* self);
int Poppler__SoundObject_SoundEncoding(const Poppler__SoundObject* self);
void Poppler__SoundObject_Delete(Poppler__SoundObject* self);

libqt_string Poppler__MovieObject_Url(const Poppler__MovieObject* self);
QSize* Poppler__MovieObject_Size(const Poppler__MovieObject* self);
int Poppler__MovieObject_Rotation(const Poppler__MovieObject* self);
bool Poppler__MovieObject_ShowControls(const Poppler__MovieObject* self);
int Poppler__MovieObject_PlayMode(const Poppler__MovieObject* self);
bool Poppler__MovieObject_ShowPosterImage(const Poppler__MovieObject* self);
QImage* Poppler__MovieObject_PosterImage(const Poppler__MovieObject* self);
void Poppler__MovieObject_Delete(Poppler__MovieObject* self);

int Poppler__Document__PdfVersion_Major(const Poppler__Document__PdfVersion* self);
void Poppler__Document__PdfVersion_SetMajor(Poppler__Document__PdfVersion* self, int major);
int Poppler__Document__PdfVersion_Minor(const Poppler__Document__PdfVersion* self);
void Poppler__Document__PdfVersion_SetMinor(Poppler__Document__PdfVersion* self, int minor);
void Poppler__Document__PdfVersion_Delete(Poppler__Document__PdfVersion* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
