#include <QByteArray>
#include <QColor>
#include <QIODevice>
#include <QImage>
#include <QImageReader>
#include <QList>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qimagereader.h>
#include "libqimagereader.h"
#include "libqimagereader.hxx"

QImageReader* QImageReader_new() {
    return new QImageReader();
}

QImageReader* QImageReader_new2(QIODevice* device) {
    return new QImageReader(device);
}

QImageReader* QImageReader_new3(const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new QImageReader(fileName_QString);
}

QImageReader* QImageReader_new4(QIODevice* device, const libqt_string format) {
    QByteArray format_QByteArray(format.data, format.len);
    return new QImageReader(device, format_QByteArray);
}

QImageReader* QImageReader_new5(const libqt_string fileName, const libqt_string format) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QByteArray format_QByteArray(format.data, format.len);
    return new QImageReader(fileName_QString, format_QByteArray);
}

libqt_string QImageReader_Tr(const char* sourceText) {
    QString _ret = QImageReader::tr(sourceText);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QImageReader_SetFormat(QImageReader* self, const libqt_string format) {
    QByteArray format_QByteArray(format.data, format.len);
    self->setFormat(format_QByteArray);
}

libqt_string QImageReader_Format(const QImageReader* self) {
    QByteArray _qb = self->format();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QImageReader_SetAutoDetectImageFormat(QImageReader* self, bool enabled) {
    self->setAutoDetectImageFormat(enabled);
}

bool QImageReader_AutoDetectImageFormat(const QImageReader* self) {
    return self->autoDetectImageFormat();
}

void QImageReader_SetDecideFormatFromContent(QImageReader* self, bool ignored) {
    self->setDecideFormatFromContent(ignored);
}

bool QImageReader_DecideFormatFromContent(const QImageReader* self) {
    return self->decideFormatFromContent();
}

void QImageReader_SetDevice(QImageReader* self, QIODevice* device) {
    self->setDevice(device);
}

QIODevice* QImageReader_Device(const QImageReader* self) {
    return self->device();
}

void QImageReader_SetFileName(QImageReader* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->setFileName(fileName_QString);
}

libqt_string QImageReader_FileName(const QImageReader* self) {
    QString _ret = self->fileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QSize* QImageReader_Size(const QImageReader* self) {
    return new QSize(self->size());
}

int QImageReader_ImageFormat(const QImageReader* self) {
    return static_cast<int>(self->imageFormat());
}

libqt_list /* of libqt_string */ QImageReader_TextKeys(const QImageReader* self) {
    QStringList _ret = self->textKeys();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QImageReader_Text(const QImageReader* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString _ret = self->text(key_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QImageReader_SetClipRect(QImageReader* self, const QRect* rect) {
    self->setClipRect(*rect);
}

QRect* QImageReader_ClipRect(const QImageReader* self) {
    return new QRect(self->clipRect());
}

void QImageReader_SetScaledSize(QImageReader* self, const QSize* size) {
    self->setScaledSize(*size);
}

QSize* QImageReader_ScaledSize(const QImageReader* self) {
    return new QSize(self->scaledSize());
}

void QImageReader_SetQuality(QImageReader* self, int quality) {
    self->setQuality(static_cast<int>(quality));
}

int QImageReader_Quality(const QImageReader* self) {
    return self->quality();
}

void QImageReader_SetScaledClipRect(QImageReader* self, const QRect* rect) {
    self->setScaledClipRect(*rect);
}

QRect* QImageReader_ScaledClipRect(const QImageReader* self) {
    return new QRect(self->scaledClipRect());
}

void QImageReader_SetBackgroundColor(QImageReader* self, const QColor* color) {
    self->setBackgroundColor(*color);
}

QColor* QImageReader_BackgroundColor(const QImageReader* self) {
    return new QColor(self->backgroundColor());
}

bool QImageReader_SupportsAnimation(const QImageReader* self) {
    return self->supportsAnimation();
}

int QImageReader_Transformation(const QImageReader* self) {
    return static_cast<int>(self->transformation());
}

void QImageReader_SetAutoTransform(QImageReader* self, bool enabled) {
    self->setAutoTransform(enabled);
}

bool QImageReader_AutoTransform(const QImageReader* self) {
    return self->autoTransform();
}

libqt_string QImageReader_SubType(const QImageReader* self) {
    QByteArray _qb = self->subType();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QImageReader_SupportedSubTypes(const QImageReader* self) {
    QList<QByteArray> _ret = self->supportedSubTypes();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QByteArray _lv_qb = _ret[i];
        libqt_string _lv_str;
        _lv_str.len = _lv_qb.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_qb.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool QImageReader_CanRead(const QImageReader* self) {
    return self->canRead();
}

QImage* QImageReader_Read(QImageReader* self) {
    return new QImage(self->read());
}

bool QImageReader_ReadWithImage(QImageReader* self, QImage* image) {
    return self->read(image);
}

bool QImageReader_JumpToNextImage(QImageReader* self) {
    return self->jumpToNextImage();
}

bool QImageReader_JumpToImage(QImageReader* self, int imageNumber) {
    return self->jumpToImage(static_cast<int>(imageNumber));
}

int QImageReader_LoopCount(const QImageReader* self) {
    return self->loopCount();
}

int QImageReader_ImageCount(const QImageReader* self) {
    return self->imageCount();
}

int QImageReader_NextImageDelay(const QImageReader* self) {
    return self->nextImageDelay();
}

int QImageReader_CurrentImageNumber(const QImageReader* self) {
    return self->currentImageNumber();
}

QRect* QImageReader_CurrentImageRect(const QImageReader* self) {
    return new QRect(self->currentImageRect());
}

int QImageReader_Error(const QImageReader* self) {
    return static_cast<int>(self->error());
}

libqt_string QImageReader_ErrorString(const QImageReader* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QImageReader_SupportsOption(const QImageReader* self, int option) {
    return self->supportsOption(static_cast<QImageIOHandler::ImageOption>(option));
}

libqt_string QImageReader_ImageFormatWithFileName(const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QByteArray _qb = QImageReader::imageFormat(fileName_QString);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QImageReader_ImageFormatWithDevice(QIODevice* device) {
    QByteArray _qb = QImageReader::imageFormat(device);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QImageReader_SupportedImageFormats() {
    QList<QByteArray> _ret = QImageReader::supportedImageFormats();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QByteArray _lv_qb = _ret[i];
        libqt_string _lv_str;
        _lv_str.len = _lv_qb.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_qb.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ QImageReader_SupportedMimeTypes() {
    QList<QByteArray> _ret = QImageReader::supportedMimeTypes();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QByteArray _lv_qb = _ret[i];
        libqt_string _lv_str;
        _lv_str.len = _lv_qb.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_qb.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ QImageReader_ImageFormatsForMimeType(const libqt_string mimeType) {
    QByteArray mimeType_QByteArray(mimeType.data, mimeType.len);
    QList<QByteArray> _ret = QImageReader::imageFormatsForMimeType(mimeType_QByteArray);
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QByteArray _lv_qb = _ret[i];
        libqt_string _lv_str;
        _lv_str.len = _lv_qb.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_qb.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QImageReader_AllocationLimit() {
    return QImageReader::allocationLimit();
}

void QImageReader_SetAllocationLimit(int mbLimit) {
    QImageReader::setAllocationLimit(static_cast<int>(mbLimit));
}

libqt_string QImageReader_Tr2(const char* sourceText, const char* disambiguation) {
    QString _ret = QImageReader::tr(sourceText, disambiguation);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QImageReader_Tr3(const char* sourceText, const char* disambiguation, int n) {
    QString _ret = QImageReader::tr(sourceText, disambiguation, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QImageReader_Delete(QImageReader* self) {
    delete self;
}
