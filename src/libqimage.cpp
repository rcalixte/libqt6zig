#include <QByteArray>
#include <QByteArrayView>
#include <QColor>
#include <QColorSpace>
#include <QColorTransform>
#include <QIODevice>
#include <QImage>
#include <QList>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPixelFormat>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTransform>
#include <QVariant>
#include <qimage.h>
#include "libqimage.h"
#include "libqimage.hxx"

QImage* QImage_new() {
    return new VirtualQImage();
}

QImage* QImage_new2(const QSize* size, int format) {
    return new VirtualQImage(*size, static_cast<QImage::Format>(format));
}

QImage* QImage_new3(int width, int height, int format) {
    return new VirtualQImage(static_cast<int>(width), static_cast<int>(height), static_cast<QImage::Format>(format));
}

QImage* QImage_new4(unsigned char* data, int width, int height, int format) {
    return new VirtualQImage(static_cast<uchar*>(data), static_cast<int>(width), static_cast<int>(height), static_cast<QImage::Format>(format));
}

QImage* QImage_new5(const unsigned char* data, int width, int height, int format) {
    return new VirtualQImage(static_cast<const uchar*>(data), static_cast<int>(width), static_cast<int>(height), static_cast<QImage::Format>(format));
}

QImage* QImage_new6(unsigned char* data, int width, int height, ptrdiff_t bytesPerLine, int format) {
    return new VirtualQImage(static_cast<uchar*>(data), static_cast<int>(width), static_cast<int>(height), (qsizetype)(bytesPerLine), static_cast<QImage::Format>(format));
}

QImage* QImage_new7(const unsigned char* data, int width, int height, ptrdiff_t bytesPerLine, int format) {
    return new VirtualQImage(static_cast<const uchar*>(data), static_cast<int>(width), static_cast<int>(height), (qsizetype)(bytesPerLine), static_cast<QImage::Format>(format));
}

QImage* QImage_new8(const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQImage(fileName_QString);
}

QImage* QImage_new9(const QImage* param1) {
    return new VirtualQImage(*param1);
}

QImage* QImage_new10(const libqt_string fileName, const char* format) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQImage(fileName_QString, format);
}

void QImage_OperatorAssign(QImage* self, const QImage* param1) {
    self->operator=(*param1);
}

void QImage_Swap(QImage* self, QImage* other) {
    self->swap(*other);
}

bool QImage_IsNull(const QImage* self) {
    return self->isNull();
}

bool QImage_OperatorEqual(const QImage* self, const QImage* param1) {
    return (*self == *param1);
}

bool QImage_OperatorNotEqual(const QImage* self, const QImage* param1) {
    return (*self != *param1);
}

QVariant* QImage_ToQVariant(const QImage* self) {
    return new QVariant(self->operator QVariant());
}

void QImage_Detach(QImage* self) {
    self->detach();
}

bool QImage_IsDetached(const QImage* self) {
    return self->isDetached();
}

QImage* QImage_Copy(const QImage* self) {
    return new QImage(self->copy());
}

QImage* QImage_Copy2(const QImage* self, int x, int y, int w, int h) {
    return new QImage(self->copy(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h)));
}

int QImage_Format(const QImage* self) {
    return static_cast<int>(self->format());
}

QImage* QImage_ConvertToFormat(const QImage* self, int f) {
    return new QImage(self->convertToFormat(static_cast<QImage::Format>(f)));
}

QImage* QImage_ConvertToFormat2(const QImage* self, int f, const libqt_list /* of unsigned int */ colorTable) {
    QList<unsigned int> colorTable_QList;
    colorTable_QList.reserve(colorTable.len);
    unsigned int* colorTable_arr = static_cast<unsigned int*>(colorTable.data);
    for (size_t i = 0; i < colorTable.len; ++i) {
        colorTable_QList.push_back(static_cast<unsigned int>(colorTable_arr[i]));
    }
    return new QImage(self->convertToFormat(static_cast<QImage::Format>(f), colorTable_QList));
}

bool QImage_ReinterpretAsFormat(QImage* self, int f) {
    return self->reinterpretAsFormat(static_cast<QImage::Format>(f));
}

QImage* QImage_ConvertedTo(const QImage* self, int f) {
    return new QImage(self->convertedTo(static_cast<QImage::Format>(f)));
}

void QImage_ConvertTo(QImage* self, int f) {
    self->convertTo(static_cast<QImage::Format>(f));
}

int QImage_Width(const QImage* self) {
    return self->width();
}

int QImage_Height(const QImage* self) {
    return self->height();
}

QSize* QImage_Size(const QImage* self) {
    return new QSize(self->size());
}

QRect* QImage_Rect(const QImage* self) {
    return new QRect(self->rect());
}

int QImage_Depth(const QImage* self) {
    return self->depth();
}

int QImage_ColorCount(const QImage* self) {
    return self->colorCount();
}

int QImage_BitPlaneCount(const QImage* self) {
    return self->bitPlaneCount();
}

unsigned int QImage_Color(const QImage* self, int i) {
    return static_cast<unsigned int>(self->color(static_cast<int>(i)));
}

void QImage_SetColor(QImage* self, int i, unsigned int c) {
    self->setColor(static_cast<int>(i), static_cast<QRgb>(c));
}

void QImage_SetColorCount(QImage* self, int colorCount) {
    self->setColorCount(static_cast<int>(colorCount));
}

bool QImage_AllGray(const QImage* self) {
    return self->allGray();
}

bool QImage_IsGrayscale(const QImage* self) {
    return self->isGrayscale();
}

unsigned char* QImage_Bits(QImage* self) {
    return static_cast<unsigned char*>(self->bits());
}

const unsigned char* QImage_Bits2(const QImage* self) {
    return static_cast<const unsigned char*>(self->bits());
}

const unsigned char* QImage_ConstBits(const QImage* self) {
    return static_cast<const unsigned char*>(self->constBits());
}

ptrdiff_t QImage_SizeInBytes(const QImage* self) {
    return static_cast<ptrdiff_t>(self->sizeInBytes());
}

unsigned char* QImage_ScanLine(QImage* self, int param1) {
    return static_cast<unsigned char*>(self->scanLine(static_cast<int>(param1)));
}

const unsigned char* QImage_ScanLineWithInt(const QImage* self, int param1) {
    return static_cast<const unsigned char*>(self->scanLine(static_cast<int>(param1)));
}

const unsigned char* QImage_ConstScanLine(const QImage* self, int param1) {
    return static_cast<const unsigned char*>(self->constScanLine(static_cast<int>(param1)));
}

ptrdiff_t QImage_BytesPerLine(const QImage* self) {
    return static_cast<ptrdiff_t>(self->bytesPerLine());
}

bool QImage_Valid(const QImage* self, int x, int y) {
    return self->valid(static_cast<int>(x), static_cast<int>(y));
}

bool QImage_ValidWithPt(const QImage* self, const QPoint* pt) {
    return self->valid(*pt);
}

int QImage_PixelIndex(const QImage* self, int x, int y) {
    return self->pixelIndex(static_cast<int>(x), static_cast<int>(y));
}

int QImage_PixelIndexWithPt(const QImage* self, const QPoint* pt) {
    return self->pixelIndex(*pt);
}

unsigned int QImage_Pixel(const QImage* self, int x, int y) {
    return static_cast<unsigned int>(self->pixel(static_cast<int>(x), static_cast<int>(y)));
}

unsigned int QImage_PixelWithPt(const QImage* self, const QPoint* pt) {
    return static_cast<unsigned int>(self->pixel(*pt));
}

void QImage_SetPixel(QImage* self, int x, int y, unsigned int index_or_rgb) {
    self->setPixel(static_cast<int>(x), static_cast<int>(y), static_cast<uint>(index_or_rgb));
}

void QImage_SetPixel2(QImage* self, const QPoint* pt, unsigned int index_or_rgb) {
    self->setPixel(*pt, static_cast<uint>(index_or_rgb));
}

QColor* QImage_PixelColor(const QImage* self, int x, int y) {
    return new QColor(self->pixelColor(static_cast<int>(x), static_cast<int>(y)));
}

QColor* QImage_PixelColorWithPt(const QImage* self, const QPoint* pt) {
    return new QColor(self->pixelColor(*pt));
}

void QImage_SetPixelColor(QImage* self, int x, int y, const QColor* c) {
    self->setPixelColor(static_cast<int>(x), static_cast<int>(y), *c);
}

void QImage_SetPixelColor2(QImage* self, const QPoint* pt, const QColor* c) {
    self->setPixelColor(*pt, *c);
}

libqt_list /* of unsigned int */ QImage_ColorTable(const QImage* self) {
    QList<unsigned int> _ret = self->colorTable();
    // Convert QList<> from C++ memory to manually-managed C memory
    unsigned int* _arr = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QImage_SetColorTable(QImage* self, const libqt_list /* of unsigned int */ colors) {
    QList<unsigned int> colors_QList;
    colors_QList.reserve(colors.len);
    unsigned int* colors_arr = static_cast<unsigned int*>(colors.data);
    for (size_t i = 0; i < colors.len; ++i) {
        colors_QList.push_back(static_cast<unsigned int>(colors_arr[i]));
    }
    self->setColorTable(colors_QList);
}

double QImage_DevicePixelRatio(const QImage* self) {
    return static_cast<double>(self->devicePixelRatio());
}

void QImage_SetDevicePixelRatio(QImage* self, double scaleFactor) {
    self->setDevicePixelRatio(static_cast<qreal>(scaleFactor));
}

QSizeF* QImage_DeviceIndependentSize(const QImage* self) {
    return new QSizeF(self->deviceIndependentSize());
}

void QImage_Fill(QImage* self, unsigned int pixel) {
    self->fill(static_cast<uint>(pixel));
}

void QImage_FillWithColor(QImage* self, const QColor* color) {
    self->fill(*color);
}

void QImage_Fill2(QImage* self, int color) {
    self->fill(static_cast<Qt::GlobalColor>(color));
}

bool QImage_HasAlphaChannel(const QImage* self) {
    return self->hasAlphaChannel();
}

void QImage_SetAlphaChannel(QImage* self, const QImage* alphaChannel) {
    self->setAlphaChannel(*alphaChannel);
}

QImage* QImage_CreateAlphaMask(const QImage* self) {
    return new QImage(self->createAlphaMask());
}

QImage* QImage_CreateHeuristicMask(const QImage* self) {
    return new QImage(self->createHeuristicMask());
}

QImage* QImage_CreateMaskFromColor(const QImage* self, unsigned int color) {
    return new QImage(self->createMaskFromColor(static_cast<QRgb>(color)));
}

QImage* QImage_Scaled(const QImage* self, int w, int h) {
    return new QImage(self->scaled(static_cast<int>(w), static_cast<int>(h)));
}

QImage* QImage_ScaledWithQSize(const QImage* self, const QSize* s) {
    return new QImage(self->scaled(*s));
}

QImage* QImage_ScaledToWidth(const QImage* self, int w) {
    return new QImage(self->scaledToWidth(static_cast<int>(w)));
}

QImage* QImage_ScaledToHeight(const QImage* self, int h) {
    return new QImage(self->scaledToHeight(static_cast<int>(h)));
}

QImage* QImage_Transformed(const QImage* self, const QTransform* matrix) {
    return new QImage(self->transformed(*matrix));
}

QTransform* QImage_TrueMatrix(const QTransform* param1, int w, int h) {
    return new QTransform(QImage::trueMatrix(*param1, static_cast<int>(w), static_cast<int>(h)));
}

QImage* QImage_Mirrored(const QImage* self) {
    return new QImage(self->mirrored());
}

QImage* QImage_RgbSwapped(const QImage* self) {
    return new QImage(self->rgbSwapped());
}

void QImage_Mirror(QImage* self) {
    self->mirror();
}

void QImage_RgbSwap(QImage* self) {
    self->rgbSwap();
}

void QImage_InvertPixels(QImage* self) {
    self->invertPixels();
}

QColorSpace* QImage_ColorSpace(const QImage* self) {
    return new QColorSpace(self->colorSpace());
}

QImage* QImage_ConvertedToColorSpace(const QImage* self, const QColorSpace* colorSpace) {
    return new QImage(self->convertedToColorSpace(*colorSpace));
}

QImage* QImage_ConvertedToColorSpace2(const QImage* self, const QColorSpace* colorSpace, int format) {
    return new QImage(self->convertedToColorSpace(*colorSpace, static_cast<QImage::Format>(format)));
}

void QImage_ConvertToColorSpace(QImage* self, const QColorSpace* colorSpace) {
    self->convertToColorSpace(*colorSpace);
}

void QImage_ConvertToColorSpace2(QImage* self, const QColorSpace* colorSpace, int format) {
    self->convertToColorSpace(*colorSpace, static_cast<QImage::Format>(format));
}

void QImage_SetColorSpace(QImage* self, const QColorSpace* colorSpace) {
    self->setColorSpace(*colorSpace);
}

QImage* QImage_ColorTransformed(const QImage* self, const QColorTransform* transform) {
    return new QImage(self->colorTransformed(*transform));
}

QImage* QImage_ColorTransformed2(const QImage* self, const QColorTransform* transform, int format) {
    return new QImage(self->colorTransformed(*transform, static_cast<QImage::Format>(format)));
}

void QImage_ApplyColorTransform(QImage* self, const QColorTransform* transform) {
    self->applyColorTransform(*transform);
}

void QImage_ApplyColorTransform2(QImage* self, const QColorTransform* transform, int format) {
    self->applyColorTransform(*transform, static_cast<QImage::Format>(format));
}

bool QImage_Load(QImage* self, QIODevice* device, const char* format) {
    return self->load(device, format);
}

bool QImage_LoadWithFileName(QImage* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return self->load(fileName_QString);
}

bool QImage_LoadFromData(QImage* self, QByteArrayView* data) {
    return self->loadFromData(*data);
}

bool QImage_LoadFromData2(QImage* self, const unsigned char* buf, int lenVal) {
    return self->loadFromData(static_cast<const uchar*>(buf), static_cast<int>(lenVal));
}

bool QImage_LoadFromDataWithData(QImage* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    return self->loadFromData(data_QByteArray);
}

bool QImage_Save(const QImage* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return self->save(fileName_QString);
}

bool QImage_SaveWithDevice(const QImage* self, QIODevice* device) {
    return self->save(device);
}

QImage* QImage_FromData(QByteArrayView* data) {
    return new QImage(QImage::fromData(*data));
}

QImage* QImage_FromData2(const unsigned char* data, int size) {
    return new QImage(QImage::fromData(static_cast<const uchar*>(data), static_cast<int>(size)));
}

QImage* QImage_FromDataWithData(const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    return new QImage(QImage::fromData(data_QByteArray));
}

long long QImage_CacheKey(const QImage* self) {
    return static_cast<long long>(self->cacheKey());
}

int QImage_DotsPerMeterX(const QImage* self) {
    return self->dotsPerMeterX();
}

int QImage_DotsPerMeterY(const QImage* self) {
    return self->dotsPerMeterY();
}

void QImage_SetDotsPerMeterX(QImage* self, int dotsPerMeterX) {
    self->setDotsPerMeterX(static_cast<int>(dotsPerMeterX));
}

void QImage_SetDotsPerMeterY(QImage* self, int dotsPerMeterY) {
    self->setDotsPerMeterY(static_cast<int>(dotsPerMeterY));
}

QPoint* QImage_Offset(const QImage* self) {
    return new QPoint(self->offset());
}

void QImage_SetOffset(QImage* self, const QPoint* offset) {
    self->setOffset(*offset);
}

libqt_list /* of libqt_string */ QImage_TextKeys(const QImage* self) {
    QList<QString> _ret = self->textKeys();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QImage_Text(const QImage* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QImage_SetText(QImage* self, const libqt_string key, const libqt_string value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->setText(key_QString, value_QString);
}

QPixelFormat* QImage_PixelFormat(const QImage* self) {
    return new QPixelFormat(self->pixelFormat());
}

QPixelFormat* QImage_ToPixelFormat(int format) {
    return new QPixelFormat(QImage::toPixelFormat(static_cast<QImage::Format>(format)));
}

int QImage_ToImageFormat(QPixelFormat* format) {
    return static_cast<int>(QImage::toImageFormat(*format));
}

QImage* QImage_Copy1(const QImage* self, const QRect* rect) {
    return new QImage(self->copy(*rect));
}

QImage* QImage_ConvertToFormat22(const QImage* self, int f, int flags) {
    return new QImage(self->convertToFormat(static_cast<QImage::Format>(f), static_cast<Qt::ImageConversionFlags>(flags)));
}

QImage* QImage_ConvertToFormat3(const QImage* self, int f, const libqt_list /* of unsigned int */ colorTable, int flags) {
    QList<unsigned int> colorTable_QList;
    colorTable_QList.reserve(colorTable.len);
    unsigned int* colorTable_arr = static_cast<unsigned int*>(colorTable.data);
    for (size_t i = 0; i < colorTable.len; ++i) {
        colorTable_QList.push_back(static_cast<unsigned int>(colorTable_arr[i]));
    }
    return new QImage(self->convertToFormat(static_cast<QImage::Format>(f), colorTable_QList, static_cast<Qt::ImageConversionFlags>(flags)));
}

QImage* QImage_ConvertedTo2(const QImage* self, int f, int flags) {
    return new QImage(self->convertedTo(static_cast<QImage::Format>(f), static_cast<Qt::ImageConversionFlags>(flags)));
}

void QImage_ConvertTo2(QImage* self, int f, int flags) {
    self->convertTo(static_cast<QImage::Format>(f), static_cast<Qt::ImageConversionFlags>(flags));
}

QImage* QImage_CreateAlphaMask1(const QImage* self, int flags) {
    return new QImage(self->createAlphaMask(static_cast<Qt::ImageConversionFlags>(flags)));
}

QImage* QImage_CreateHeuristicMask1(const QImage* self, bool clipTight) {
    return new QImage(self->createHeuristicMask(clipTight));
}

QImage* QImage_CreateMaskFromColor2(const QImage* self, unsigned int color, int mode) {
    return new QImage(self->createMaskFromColor(static_cast<QRgb>(color), static_cast<Qt::MaskMode>(mode)));
}

QImage* QImage_Scaled3(const QImage* self, int w, int h, int aspectMode) {
    return new QImage(self->scaled(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(aspectMode)));
}

QImage* QImage_Scaled4(const QImage* self, int w, int h, int aspectMode, int mode) {
    return new QImage(self->scaled(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(aspectMode), static_cast<Qt::TransformationMode>(mode)));
}

QImage* QImage_Scaled2(const QImage* self, const QSize* s, int aspectMode) {
    return new QImage(self->scaled(*s, static_cast<Qt::AspectRatioMode>(aspectMode)));
}

QImage* QImage_Scaled32(const QImage* self, const QSize* s, int aspectMode, int mode) {
    return new QImage(self->scaled(*s, static_cast<Qt::AspectRatioMode>(aspectMode), static_cast<Qt::TransformationMode>(mode)));
}

QImage* QImage_ScaledToWidth2(const QImage* self, int w, int mode) {
    return new QImage(self->scaledToWidth(static_cast<int>(w), static_cast<Qt::TransformationMode>(mode)));
}

QImage* QImage_ScaledToHeight2(const QImage* self, int h, int mode) {
    return new QImage(self->scaledToHeight(static_cast<int>(h), static_cast<Qt::TransformationMode>(mode)));
}

QImage* QImage_Transformed2(const QImage* self, const QTransform* matrix, int mode) {
    return new QImage(self->transformed(*matrix, static_cast<Qt::TransformationMode>(mode)));
}

QImage* QImage_Mirrored1(const QImage* self, bool horizontally) {
    return new QImage(self->mirrored(horizontally));
}

QImage* QImage_Mirrored2(const QImage* self, bool horizontally, bool vertically) {
    return new QImage(self->mirrored(horizontally, vertically));
}

void QImage_Mirror1(QImage* self, bool horizontally) {
    self->mirror(horizontally);
}

void QImage_Mirror2(QImage* self, bool horizontally, bool vertically) {
    self->mirror(horizontally, vertically);
}

void QImage_InvertPixels1(QImage* self, int param1) {
    self->invertPixels(static_cast<QImage::InvertMode>(param1));
}

QImage* QImage_ConvertedToColorSpace3(const QImage* self, const QColorSpace* colorSpace, int format, int flags) {
    return new QImage(self->convertedToColorSpace(*colorSpace, static_cast<QImage::Format>(format), static_cast<Qt::ImageConversionFlags>(flags)));
}

void QImage_ConvertToColorSpace3(QImage* self, const QColorSpace* colorSpace, int format, int flags) {
    self->convertToColorSpace(*colorSpace, static_cast<QImage::Format>(format), static_cast<Qt::ImageConversionFlags>(flags));
}

QImage* QImage_ColorTransformed3(const QImage* self, const QColorTransform* transform, int format, int flags) {
    return new QImage(self->colorTransformed(*transform, static_cast<QImage::Format>(format), static_cast<Qt::ImageConversionFlags>(flags)));
}

void QImage_ApplyColorTransform3(QImage* self, const QColorTransform* transform, int format, int flags) {
    self->applyColorTransform(*transform, static_cast<QImage::Format>(format), static_cast<Qt::ImageConversionFlags>(flags));
}

bool QImage_Load2(QImage* self, const libqt_string fileName, const char* format) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return self->load(fileName_QString, format);
}

bool QImage_LoadFromData22(QImage* self, QByteArrayView* data, const char* format) {
    return self->loadFromData(*data, format);
}

bool QImage_LoadFromData3(QImage* self, const unsigned char* buf, int lenVal, const char* format) {
    return self->loadFromData(static_cast<const uchar*>(buf), static_cast<int>(lenVal), format);
}

bool QImage_LoadFromData23(QImage* self, const libqt_string data, const char* format) {
    QByteArray data_QByteArray(data.data, data.len);
    return self->loadFromData(data_QByteArray, format);
}

bool QImage_Save2(const QImage* self, const libqt_string fileName, const char* format) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return self->save(fileName_QString, format);
}

bool QImage_Save3(const QImage* self, const libqt_string fileName, const char* format, int quality) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return self->save(fileName_QString, format, static_cast<int>(quality));
}

bool QImage_Save22(const QImage* self, QIODevice* device, const char* format) {
    return self->save(device, format);
}

bool QImage_Save32(const QImage* self, QIODevice* device, const char* format, int quality) {
    return self->save(device, format, static_cast<int>(quality));
}

QImage* QImage_FromData22(QByteArrayView* data, const char* format) {
    return new QImage(QImage::fromData(*data, format));
}

QImage* QImage_FromData3(const unsigned char* data, int size, const char* format) {
    return new QImage(QImage::fromData(static_cast<const uchar*>(data), static_cast<int>(size), format));
}

QImage* QImage_FromData23(const libqt_string data, const char* format) {
    QByteArray data_QByteArray(data.data, data.len);
    return new QImage(QImage::fromData(data_QByteArray, format));
}

libqt_string QImage_Text1(const QImage* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString _ret = self->text(key_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
int QImage_DevType(const QImage* self) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        return vqimage->devType();
    } else {
        return self->QImage::devType();
    }
}

// Base class handler implementation
int QImage_QBaseDevType(const QImage* self) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_DevType_IsBase(true);
        return vqimage->devType();
    } else {
        return self->QImage::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QImage_OnDevType(const QImage* self, intptr_t slot) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_DevType_Callback(reinterpret_cast<VirtualQImage::QImage_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QImage_PaintEngine(const QImage* self) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        return vqimage->paintEngine();
    } else {
        return self->QImage::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QImage_QBasePaintEngine(const QImage* self) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_PaintEngine_IsBase(true);
        return vqimage->paintEngine();
    } else {
        return self->QImage::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QImage_OnPaintEngine(const QImage* self, intptr_t slot) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_PaintEngine_Callback(reinterpret_cast<VirtualQImage::QImage_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
int QImage_Metric(const QImage* self, int metric) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        return vqimage->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    } else {
        return ((VirtualQImage*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    }
}

// Base class handler implementation
int QImage_QBaseMetric(const QImage* self, int metric) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_Metric_IsBase(true);
        return vqimage->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    } else {
        return ((VirtualQImage*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    }
}

// Auxiliary method to allow providing re-implementation
void QImage_OnMetric(const QImage* self, intptr_t slot) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_Metric_Callback(reinterpret_cast<VirtualQImage::QImage_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QImage_InitPainter(const QImage* self, QPainter* painter) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->initPainter(painter);
    } else {
        ((VirtualQImage*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QImage_QBaseInitPainter(const QImage* self, QPainter* painter) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_InitPainter_IsBase(true);
        vqimage->initPainter(painter);
    } else {
        ((VirtualQImage*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QImage_OnInitPainter(const QImage* self, intptr_t slot) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_InitPainter_Callback(reinterpret_cast<VirtualQImage::QImage_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QImage_Redirected(const QImage* self, QPoint* offset) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        return vqimage->redirected(offset);
    } else {
        return ((VirtualQImage*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QImage_QBaseRedirected(const QImage* self, QPoint* offset) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_Redirected_IsBase(true);
        return vqimage->redirected(offset);
    } else {
        return ((VirtualQImage*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QImage_OnRedirected(const QImage* self, intptr_t slot) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_Redirected_Callback(reinterpret_cast<VirtualQImage::QImage_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QImage_SharedPainter(const QImage* self) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        return vqimage->sharedPainter();
    } else {
        return ((VirtualQImage*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QImage_QBaseSharedPainter(const QImage* self) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_SharedPainter_IsBase(true);
        return vqimage->sharedPainter();
    } else {
        return ((VirtualQImage*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QImage_OnSharedPainter(const QImage* self, intptr_t slot) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_SharedPainter_Callback(reinterpret_cast<VirtualQImage::QImage_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QImage* QImage_MirroredHelper(const QImage* self, bool horizontal, bool vertical) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        return new QImage(vqimage->mirrored_helper(horizontal, vertical));
    }
    return {};
}

// Base class handler implementation
QImage* QImage_QBaseMirroredHelper(const QImage* self, bool horizontal, bool vertical) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_MirroredHelper_IsBase(true);
        return new QImage(vqimage->mirrored_helper(horizontal, vertical));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QImage_OnMirroredHelper(const QImage* self, intptr_t slot) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_MirroredHelper_Callback(reinterpret_cast<VirtualQImage::QImage_MirroredHelper_Callback>(slot));
    }
}

// Derived class handler implementation
QImage* QImage_RgbSwappedHelper(const QImage* self) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        return new QImage(vqimage->rgbSwapped_helper());
    }
    return {};
}

// Base class handler implementation
QImage* QImage_QBaseRgbSwappedHelper(const QImage* self) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_RgbSwappedHelper_IsBase(true);
        return new QImage(vqimage->rgbSwapped_helper());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QImage_OnRgbSwappedHelper(const QImage* self, intptr_t slot) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_RgbSwappedHelper_Callback(reinterpret_cast<VirtualQImage::QImage_RgbSwappedHelper_Callback>(slot));
    }
}

// Derived class handler implementation
void QImage_MirroredInplace(QImage* self, bool horizontal, bool vertical) {
    auto* vqimage = dynamic_cast<VirtualQImage*>(self);
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->mirrored_inplace(horizontal, vertical);
    } else {
        ((VirtualQImage*)self)->mirrored_inplace(horizontal, vertical);
    }
}

// Base class handler implementation
void QImage_QBaseMirroredInplace(QImage* self, bool horizontal, bool vertical) {
    auto* vqimage = dynamic_cast<VirtualQImage*>(self);
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_MirroredInplace_IsBase(true);
        vqimage->mirrored_inplace(horizontal, vertical);
    } else {
        ((VirtualQImage*)self)->mirrored_inplace(horizontal, vertical);
    }
}

// Auxiliary method to allow providing re-implementation
void QImage_OnMirroredInplace(QImage* self, intptr_t slot) {
    auto* vqimage = dynamic_cast<VirtualQImage*>(self);
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_MirroredInplace_Callback(reinterpret_cast<VirtualQImage::QImage_MirroredInplace_Callback>(slot));
    }
}

// Derived class handler implementation
void QImage_RgbSwappedInplace(QImage* self) {
    auto* vqimage = dynamic_cast<VirtualQImage*>(self);
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->rgbSwapped_inplace();
    } else {
        ((VirtualQImage*)self)->rgbSwapped_inplace();
    }
}

// Base class handler implementation
void QImage_QBaseRgbSwappedInplace(QImage* self) {
    auto* vqimage = dynamic_cast<VirtualQImage*>(self);
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_RgbSwappedInplace_IsBase(true);
        vqimage->rgbSwapped_inplace();
    } else {
        ((VirtualQImage*)self)->rgbSwapped_inplace();
    }
}

// Auxiliary method to allow providing re-implementation
void QImage_OnRgbSwappedInplace(QImage* self, intptr_t slot) {
    auto* vqimage = dynamic_cast<VirtualQImage*>(self);
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_RgbSwappedInplace_Callback(reinterpret_cast<VirtualQImage::QImage_RgbSwappedInplace_Callback>(slot));
    }
}

// Derived class handler implementation
QImage* QImage_ConvertToFormatHelper(const QImage* self, int format, int flags) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        return new QImage(vqimage->convertToFormat_helper(static_cast<QImage::Format>(format), static_cast<Qt::ImageConversionFlags>(flags)));
    }
    return {};
}

// Base class handler implementation
QImage* QImage_QBaseConvertToFormatHelper(const QImage* self, int format, int flags) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_ConvertToFormatHelper_IsBase(true);
        return new QImage(vqimage->convertToFormat_helper(static_cast<QImage::Format>(format), static_cast<Qt::ImageConversionFlags>(flags)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QImage_OnConvertToFormatHelper(const QImage* self, intptr_t slot) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_ConvertToFormatHelper_Callback(reinterpret_cast<VirtualQImage::QImage_ConvertToFormatHelper_Callback>(slot));
    }
}

// Derived class handler implementation
bool QImage_ConvertToFormatInplace(QImage* self, int format, int flags) {
    auto* vqimage = dynamic_cast<VirtualQImage*>(self);
    if (vqimage && vqimage->isVirtualQImage) {
        return vqimage->convertToFormat_inplace(static_cast<QImage::Format>(format), static_cast<Qt::ImageConversionFlags>(flags));
    } else {
        return ((VirtualQImage*)self)->convertToFormat_inplace(static_cast<QImage::Format>(format), static_cast<Qt::ImageConversionFlags>(flags));
    }
}

// Base class handler implementation
bool QImage_QBaseConvertToFormatInplace(QImage* self, int format, int flags) {
    auto* vqimage = dynamic_cast<VirtualQImage*>(self);
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_ConvertToFormatInplace_IsBase(true);
        return vqimage->convertToFormat_inplace(static_cast<QImage::Format>(format), static_cast<Qt::ImageConversionFlags>(flags));
    } else {
        return ((VirtualQImage*)self)->convertToFormat_inplace(static_cast<QImage::Format>(format), static_cast<Qt::ImageConversionFlags>(flags));
    }
}

// Auxiliary method to allow providing re-implementation
void QImage_OnConvertToFormatInplace(QImage* self, intptr_t slot) {
    auto* vqimage = dynamic_cast<VirtualQImage*>(self);
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_ConvertToFormatInplace_Callback(reinterpret_cast<VirtualQImage::QImage_ConvertToFormatInplace_Callback>(slot));
    }
}

// Derived class handler implementation
QImage* QImage_SmoothScaled(const QImage* self, int w, int h) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        return new QImage(vqimage->smoothScaled(static_cast<int>(w), static_cast<int>(h)));
    }
    return {};
}

// Base class handler implementation
QImage* QImage_QBaseSmoothScaled(const QImage* self, int w, int h) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_SmoothScaled_IsBase(true);
        return new QImage(vqimage->smoothScaled(static_cast<int>(w), static_cast<int>(h)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QImage_OnSmoothScaled(const QImage* self, intptr_t slot) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_SmoothScaled_Callback(reinterpret_cast<VirtualQImage::QImage_SmoothScaled_Callback>(slot));
    }
}

// Derived class handler implementation
void QImage_DetachMetadata(QImage* self) {
    auto* vqimage = dynamic_cast<VirtualQImage*>(self);
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->detachMetadata();
    } else {
        ((VirtualQImage*)self)->detachMetadata();
    }
}

// Base class handler implementation
void QImage_QBaseDetachMetadata(QImage* self) {
    auto* vqimage = dynamic_cast<VirtualQImage*>(self);
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_DetachMetadata_IsBase(true);
        vqimage->detachMetadata();
    } else {
        ((VirtualQImage*)self)->detachMetadata();
    }
}

// Auxiliary method to allow providing re-implementation
void QImage_OnDetachMetadata(QImage* self, intptr_t slot) {
    auto* vqimage = dynamic_cast<VirtualQImage*>(self);
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_DetachMetadata_Callback(reinterpret_cast<VirtualQImage::QImage_DetachMetadata_Callback>(slot));
    }
}

// Derived class handler implementation
void QImage_DetachMetadata1(QImage* self, bool invalidateCache) {
    auto* vqimage = dynamic_cast<VirtualQImage*>(self);
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->detachMetadata(invalidateCache);
    } else {
        ((VirtualQImage*)self)->detachMetadata(invalidateCache);
    }
}

// Base class handler implementation
void QImage_QBaseDetachMetadata1(QImage* self, bool invalidateCache) {
    auto* vqimage = dynamic_cast<VirtualQImage*>(self);
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_DetachMetadata1_IsBase(true);
        vqimage->detachMetadata(invalidateCache);
    } else {
        ((VirtualQImage*)self)->detachMetadata(invalidateCache);
    }
}

// Auxiliary method to allow providing re-implementation
void QImage_OnDetachMetadata1(QImage* self, intptr_t slot) {
    auto* vqimage = dynamic_cast<VirtualQImage*>(self);
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_DetachMetadata1_Callback(reinterpret_cast<VirtualQImage::QImage_DetachMetadata1_Callback>(slot));
    }
}

// Derived class handler implementation
double QImage_GetDecodedMetricF(const QImage* self, int metricA, int metricB) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        return vqimage->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQImage*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QImage_QBaseGetDecodedMetricF(const QImage* self, int metricA, int metricB) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_GetDecodedMetricF_IsBase(true);
        return vqimage->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQImage*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QImage_OnGetDecodedMetricF(const QImage* self, intptr_t slot) {
    auto* vqimage = const_cast<VirtualQImage*>(dynamic_cast<const VirtualQImage*>(self));
    if (vqimage && vqimage->isVirtualQImage) {
        vqimage->setQImage_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQImage::QImage_GetDecodedMetricF_Callback>(slot));
    }
}

void QImage_Delete(QImage* self) {
    delete self;
}
