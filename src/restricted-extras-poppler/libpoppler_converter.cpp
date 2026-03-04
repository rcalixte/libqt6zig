#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__BaseConverter
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__PDFConverter
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__PDFConverter__NewSignatureData
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__PSConverter
#include <QByteArray>
#include <QColor>
#include <QIODevice>
#include <QList>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <poppler-converter.h>
#include "libpoppler_converter.h"
#include "libpoppler_converter.hxx"

void Poppler__BaseConverter_SetOutputFileName(Poppler__BaseConverter* self, const libqt_string outputFileName) {
    QString outputFileName_QString = QString::fromUtf8(outputFileName.data, outputFileName.len);
    self->setOutputFileName(outputFileName_QString);
}

void Poppler__BaseConverter_SetOutputDevice(Poppler__BaseConverter* self, QIODevice* device) {
    self->setOutputDevice(device);
}

bool Poppler__BaseConverter_Convert(Poppler__BaseConverter* self) {
    return self->convert();
}

int Poppler__BaseConverter_LastError(const Poppler__BaseConverter* self) {
    return static_cast<int>(self->lastError());
}

void Poppler__BaseConverter_Delete(Poppler__BaseConverter* self) {
    delete self;
}

void Poppler__PSConverter_SetPageList(Poppler__PSConverter* self, const libqt_list /* of int */ pageList) {
    QList<int> pageList_QList;
    pageList_QList.reserve(pageList.len);
    int* pageList_arr = static_cast<int*>(pageList.data);
    for (size_t i = 0; i < pageList.len; ++i) {
        pageList_QList.push_back(static_cast<int>(pageList_arr[i]));
    }
    self->setPageList(pageList_QList);
}

void Poppler__PSConverter_SetTitle(Poppler__PSConverter* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setTitle(title_QString);
}

void Poppler__PSConverter_SetHDPI(Poppler__PSConverter* self, double hDPI) {
    self->setHDPI(static_cast<double>(hDPI));
}

void Poppler__PSConverter_SetVDPI(Poppler__PSConverter* self, double vDPI) {
    self->setVDPI(static_cast<double>(vDPI));
}

void Poppler__PSConverter_SetRotate(Poppler__PSConverter* self, int rotate) {
    self->setRotate(static_cast<int>(rotate));
}

void Poppler__PSConverter_SetPaperWidth(Poppler__PSConverter* self, int paperWidth) {
    self->setPaperWidth(static_cast<int>(paperWidth));
}

void Poppler__PSConverter_SetPaperHeight(Poppler__PSConverter* self, int paperHeight) {
    self->setPaperHeight(static_cast<int>(paperHeight));
}

void Poppler__PSConverter_SetRightMargin(Poppler__PSConverter* self, int marginRight) {
    self->setRightMargin(static_cast<int>(marginRight));
}

void Poppler__PSConverter_SetBottomMargin(Poppler__PSConverter* self, int marginBottom) {
    self->setBottomMargin(static_cast<int>(marginBottom));
}

void Poppler__PSConverter_SetLeftMargin(Poppler__PSConverter* self, int marginLeft) {
    self->setLeftMargin(static_cast<int>(marginLeft));
}

void Poppler__PSConverter_SetTopMargin(Poppler__PSConverter* self, int marginTop) {
    self->setTopMargin(static_cast<int>(marginTop));
}

void Poppler__PSConverter_SetStrictMargins(Poppler__PSConverter* self, bool strictMargins) {
    self->setStrictMargins(strictMargins);
}

void Poppler__PSConverter_SetForceOverprintPreview(Poppler__PSConverter* self, bool forceOverprintPreview) {
    self->setForceOverprintPreview(forceOverprintPreview);
}

void Poppler__PSConverter_SetForceRasterize(Poppler__PSConverter* self, bool forceRasterize) {
    self->setForceRasterize(forceRasterize);
}

void Poppler__PSConverter_SetPSOptions(Poppler__PSConverter* self, int options) {
    self->setPSOptions(static_cast<Poppler::PSConverter::PSOptions>(options));
}

int Poppler__PSConverter_PsOptions(const Poppler__PSConverter* self) {
    return static_cast<int>(self->psOptions());
}

bool Poppler__PSConverter_Convert(Poppler__PSConverter* self) {
    return self->convert();
}

void Poppler__PSConverter_Delete(Poppler__PSConverter* self) {
    delete self;
}

void Poppler__PDFConverter_SetPDFOptions(Poppler__PDFConverter* self, int options) {
    self->setPDFOptions(static_cast<Poppler::PDFConverter::PDFOptions>(options));
}

int Poppler__PDFConverter_PdfOptions(const Poppler__PDFConverter* self) {
    return static_cast<int>(self->pdfOptions());
}

bool Poppler__PDFConverter_Sign(Poppler__PDFConverter* self, const Poppler__PDFConverter__NewSignatureData* data) {
    return self->sign(*data);
}

bool Poppler__PDFConverter_Convert(Poppler__PDFConverter* self) {
    return self->convert();
}

void Poppler__PDFConverter_Delete(Poppler__PDFConverter* self) {
    delete self;
}

Poppler__PDFConverter__NewSignatureData* Poppler__PDFConverter__NewSignatureData_new() {
    return new Poppler::PDFConverter::NewSignatureData();
}

libqt_string Poppler__PDFConverter__NewSignatureData_CertNickname(const Poppler__PDFConverter__NewSignatureData* self) {
    QString _ret = self->certNickname();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Poppler__PDFConverter__NewSignatureData_SetCertNickname(Poppler__PDFConverter__NewSignatureData* self, const libqt_string certNickname) {
    QString certNickname_QString = QString::fromUtf8(certNickname.data, certNickname.len);
    self->setCertNickname(certNickname_QString);
}

libqt_string Poppler__PDFConverter__NewSignatureData_Password(const Poppler__PDFConverter__NewSignatureData* self) {
    QString _ret = self->password();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Poppler__PDFConverter__NewSignatureData_SetPassword(Poppler__PDFConverter__NewSignatureData* self, const libqt_string password) {
    QString password_QString = QString::fromUtf8(password.data, password.len);
    self->setPassword(password_QString);
}

int Poppler__PDFConverter__NewSignatureData_Page(const Poppler__PDFConverter__NewSignatureData* self) {
    return self->page();
}

void Poppler__PDFConverter__NewSignatureData_SetPage(Poppler__PDFConverter__NewSignatureData* self, int page) {
    self->setPage(static_cast<int>(page));
}

QRectF* Poppler__PDFConverter__NewSignatureData_BoundingRectangle(const Poppler__PDFConverter__NewSignatureData* self) {
    return new QRectF(self->boundingRectangle());
}

void Poppler__PDFConverter__NewSignatureData_SetBoundingRectangle(Poppler__PDFConverter__NewSignatureData* self, const QRectF* rect) {
    self->setBoundingRectangle(*rect);
}

libqt_string Poppler__PDFConverter__NewSignatureData_SignatureText(const Poppler__PDFConverter__NewSignatureData* self) {
    QString _ret = self->signatureText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Poppler__PDFConverter__NewSignatureData_SetSignatureText(Poppler__PDFConverter__NewSignatureData* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setSignatureText(text_QString);
}

libqt_string Poppler__PDFConverter__NewSignatureData_SignatureLeftText(const Poppler__PDFConverter__NewSignatureData* self) {
    QString _ret = self->signatureLeftText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Poppler__PDFConverter__NewSignatureData_SetSignatureLeftText(Poppler__PDFConverter__NewSignatureData* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setSignatureLeftText(text_QString);
}

libqt_string Poppler__PDFConverter__NewSignatureData_Reason(const Poppler__PDFConverter__NewSignatureData* self) {
    QString _ret = self->reason();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Poppler__PDFConverter__NewSignatureData_SetReason(Poppler__PDFConverter__NewSignatureData* self, const libqt_string reason) {
    QString reason_QString = QString::fromUtf8(reason.data, reason.len);
    self->setReason(reason_QString);
}

libqt_string Poppler__PDFConverter__NewSignatureData_Location(const Poppler__PDFConverter__NewSignatureData* self) {
    QString _ret = self->location();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Poppler__PDFConverter__NewSignatureData_SetLocation(Poppler__PDFConverter__NewSignatureData* self, const libqt_string location) {
    QString location_QString = QString::fromUtf8(location.data, location.len);
    self->setLocation(location_QString);
}

double Poppler__PDFConverter__NewSignatureData_FontSize(const Poppler__PDFConverter__NewSignatureData* self) {
    return self->fontSize();
}

void Poppler__PDFConverter__NewSignatureData_SetFontSize(Poppler__PDFConverter__NewSignatureData* self, double fontSize) {
    self->setFontSize(static_cast<double>(fontSize));
}

double Poppler__PDFConverter__NewSignatureData_LeftFontSize(const Poppler__PDFConverter__NewSignatureData* self) {
    return self->leftFontSize();
}

void Poppler__PDFConverter__NewSignatureData_SetLeftFontSize(Poppler__PDFConverter__NewSignatureData* self, double fontSize) {
    self->setLeftFontSize(static_cast<double>(fontSize));
}

QColor* Poppler__PDFConverter__NewSignatureData_FontColor(const Poppler__PDFConverter__NewSignatureData* self) {
    return new QColor(self->fontColor());
}

void Poppler__PDFConverter__NewSignatureData_SetFontColor(Poppler__PDFConverter__NewSignatureData* self, const QColor* color) {
    self->setFontColor(*color);
}

QColor* Poppler__PDFConverter__NewSignatureData_BorderColor(const Poppler__PDFConverter__NewSignatureData* self) {
    return new QColor(self->borderColor());
}

void Poppler__PDFConverter__NewSignatureData_SetBorderColor(Poppler__PDFConverter__NewSignatureData* self, const QColor* color) {
    self->setBorderColor(*color);
}

double Poppler__PDFConverter__NewSignatureData_BorderWidth(const Poppler__PDFConverter__NewSignatureData* self) {
    return self->borderWidth();
}

void Poppler__PDFConverter__NewSignatureData_SetBorderWidth(Poppler__PDFConverter__NewSignatureData* self, double width) {
    self->setBorderWidth(static_cast<double>(width));
}

QColor* Poppler__PDFConverter__NewSignatureData_BackgroundColor(const Poppler__PDFConverter__NewSignatureData* self) {
    return new QColor(self->backgroundColor());
}

void Poppler__PDFConverter__NewSignatureData_SetBackgroundColor(Poppler__PDFConverter__NewSignatureData* self, const QColor* color) {
    self->setBackgroundColor(*color);
}

libqt_string Poppler__PDFConverter__NewSignatureData_FieldPartialName(const Poppler__PDFConverter__NewSignatureData* self) {
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

void Poppler__PDFConverter__NewSignatureData_SetFieldPartialName(Poppler__PDFConverter__NewSignatureData* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setFieldPartialName(name_QString);
}

libqt_string Poppler__PDFConverter__NewSignatureData_DocumentOwnerPassword(const Poppler__PDFConverter__NewSignatureData* self) {
    QByteArray _qb = self->documentOwnerPassword();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void Poppler__PDFConverter__NewSignatureData_SetDocumentOwnerPassword(Poppler__PDFConverter__NewSignatureData* self, const libqt_string password) {
    QByteArray password_QByteArray(password.data, password.len);
    self->setDocumentOwnerPassword(password_QByteArray);
}

libqt_string Poppler__PDFConverter__NewSignatureData_DocumentUserPassword(const Poppler__PDFConverter__NewSignatureData* self) {
    QByteArray _qb = self->documentUserPassword();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void Poppler__PDFConverter__NewSignatureData_SetDocumentUserPassword(Poppler__PDFConverter__NewSignatureData* self, const libqt_string password) {
    QByteArray password_QByteArray(password.data, password.len);
    self->setDocumentUserPassword(password_QByteArray);
}

libqt_string Poppler__PDFConverter__NewSignatureData_ImagePath(const Poppler__PDFConverter__NewSignatureData* self) {
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

void Poppler__PDFConverter__NewSignatureData_SetImagePath(Poppler__PDFConverter__NewSignatureData* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->setImagePath(path_QString);
}

void Poppler__PDFConverter__NewSignatureData_Delete(Poppler__PDFConverter__NewSignatureData* self) {
    delete self;
}
