#include <QChildEvent>
#include <QColor>
#include <QCustom3DItem>
#include <QCustom3DVolume>
#include <QEvent>
#include <QImage>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQuaternion>
#include <QString>
#include <QTimerEvent>
#include <QVector3D>
#include <qcustom3dvolume.h>
#include "libqcustom3dvolume.h"
#include "libqcustom3dvolume.hxx"

QCustom3DVolume* QCustom3DVolume_new() {
    return new VirtualQCustom3DVolume();
}

QCustom3DVolume* QCustom3DVolume_new2(const QVector3D* position, const QVector3D* scaling, const QQuaternion* rotation, int textureWidth, int textureHeight, int textureDepth, libqt_list /* of unsigned char */ textureData, int textureFormat, const libqt_list /* of unsigned int */ colorTable) {
    QList<unsigned char>* textureData_QList = new QList<unsigned char>();
    textureData_QList->reserve(textureData.len);
    unsigned char* textureData_arr = static_cast<unsigned char*>(textureData.data);
    for (size_t i = 0; i < textureData.len; ++i) {
        textureData_QList->push_back(static_cast<unsigned char>(textureData_arr[i]));
    }
    QList<unsigned int> colorTable_QList;
    colorTable_QList.reserve(colorTable.len);
    unsigned int* colorTable_arr = static_cast<unsigned int*>(colorTable.data);
    for (size_t i = 0; i < colorTable.len; ++i) {
        colorTable_QList.push_back(static_cast<unsigned int>(colorTable_arr[i]));
    }
    return new VirtualQCustom3DVolume(*position, *scaling, *rotation, static_cast<int>(textureWidth), static_cast<int>(textureHeight), static_cast<int>(textureDepth), textureData_QList, static_cast<QImage::Format>(textureFormat), colorTable_QList);
}

QCustom3DVolume* QCustom3DVolume_new3(QObject* parent) {
    return new VirtualQCustom3DVolume(parent);
}

QCustom3DVolume* QCustom3DVolume_new4(const QVector3D* position, const QVector3D* scaling, const QQuaternion* rotation, int textureWidth, int textureHeight, int textureDepth, libqt_list /* of unsigned char */ textureData, int textureFormat, const libqt_list /* of unsigned int */ colorTable, QObject* parent) {
    QList<unsigned char>* textureData_QList = new QList<unsigned char>();
    textureData_QList->reserve(textureData.len);
    unsigned char* textureData_arr = static_cast<unsigned char*>(textureData.data);
    for (size_t i = 0; i < textureData.len; ++i) {
        textureData_QList->push_back(static_cast<unsigned char>(textureData_arr[i]));
    }
    QList<unsigned int> colorTable_QList;
    colorTable_QList.reserve(colorTable.len);
    unsigned int* colorTable_arr = static_cast<unsigned int*>(colorTable.data);
    for (size_t i = 0; i < colorTable.len; ++i) {
        colorTable_QList.push_back(static_cast<unsigned int>(colorTable_arr[i]));
    }
    return new VirtualQCustom3DVolume(*position, *scaling, *rotation, static_cast<int>(textureWidth), static_cast<int>(textureHeight), static_cast<int>(textureDepth), textureData_QList, static_cast<QImage::Format>(textureFormat), colorTable_QList, parent);
}

QMetaObject* QCustom3DVolume_MetaObject(const QCustom3DVolume* self) {
    return (QMetaObject*)self->metaObject();
}

void* QCustom3DVolume_Metacast(QCustom3DVolume* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QCustom3DVolume_Metacall(QCustom3DVolume* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QCustom3DVolume_Tr(const char* s) {
    auto _ret = QCustom3DVolume::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QCustom3DVolume_SetTextureWidth(QCustom3DVolume* self, int value) {
    self->setTextureWidth(static_cast<int>(value));
}

int QCustom3DVolume_TextureWidth(const QCustom3DVolume* self) {
    return self->textureWidth();
}

void QCustom3DVolume_SetTextureHeight(QCustom3DVolume* self, int value) {
    self->setTextureHeight(static_cast<int>(value));
}

int QCustom3DVolume_TextureHeight(const QCustom3DVolume* self) {
    return self->textureHeight();
}

void QCustom3DVolume_SetTextureDepth(QCustom3DVolume* self, int value) {
    self->setTextureDepth(static_cast<int>(value));
}

int QCustom3DVolume_TextureDepth(const QCustom3DVolume* self) {
    return self->textureDepth();
}

void QCustom3DVolume_SetTextureDimensions(QCustom3DVolume* self, int width, int height, int depth) {
    self->setTextureDimensions(static_cast<int>(width), static_cast<int>(height), static_cast<int>(depth));
}

int QCustom3DVolume_TextureDataWidth(const QCustom3DVolume* self) {
    return self->textureDataWidth();
}

void QCustom3DVolume_SetSliceIndexX(QCustom3DVolume* self, int value) {
    self->setSliceIndexX(static_cast<int>(value));
}

int QCustom3DVolume_SliceIndexX(const QCustom3DVolume* self) {
    return self->sliceIndexX();
}

void QCustom3DVolume_SetSliceIndexY(QCustom3DVolume* self, int value) {
    self->setSliceIndexY(static_cast<int>(value));
}

int QCustom3DVolume_SliceIndexY(const QCustom3DVolume* self) {
    return self->sliceIndexY();
}

void QCustom3DVolume_SetSliceIndexZ(QCustom3DVolume* self, int value) {
    self->setSliceIndexZ(static_cast<int>(value));
}

int QCustom3DVolume_SliceIndexZ(const QCustom3DVolume* self) {
    return self->sliceIndexZ();
}

void QCustom3DVolume_SetSliceIndices(QCustom3DVolume* self, int x, int y, int z) {
    self->setSliceIndices(static_cast<int>(x), static_cast<int>(y), static_cast<int>(z));
}

void QCustom3DVolume_SetColorTable(QCustom3DVolume* self, const libqt_list /* of unsigned int */ colors) {
    QList<unsigned int> colors_QList;
    colors_QList.reserve(colors.len);
    unsigned int* colors_arr = static_cast<unsigned int*>(colors.data);
    for (size_t i = 0; i < colors.len; ++i) {
        colors_QList.push_back(static_cast<unsigned int>(colors_arr[i]));
    }
    self->setColorTable(colors_QList);
}

libqt_list /* of unsigned int */ QCustom3DVolume_ColorTable(const QCustom3DVolume* self) {
    QList<unsigned int> _ret = self->colorTable();
    // Convert QList<> from C++ memory to manually-managed C memory
    unsigned int* _arr = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QCustom3DVolume_SetTextureData(QCustom3DVolume* self, libqt_list /* of unsigned char */ data) {
    QList<unsigned char>* data_QList = new QList<unsigned char>();
    data_QList->reserve(data.len);
    unsigned char* data_arr = static_cast<unsigned char*>(data.data);
    for (size_t i = 0; i < data.len; ++i) {
        data_QList->push_back(static_cast<unsigned char>(data_arr[i]));
    }
    self->setTextureData(data_QList);
}

libqt_list /* of unsigned char */ QCustom3DVolume_CreateTextureData(QCustom3DVolume* self, const libqt_list /* of QImage* */ images) {
    QList<QImage*> images_QList;
    images_QList.reserve(images.len);
    QImage** images_arr = static_cast<QImage**>(images.data);
    for (size_t i = 0; i < images.len; ++i) {
        images_QList.push_back(images_arr[i]);
    }
    QList<unsigned char>* _ret = self->createTextureData(images_QList);
    // Convert QList<> from C++ memory to manually-managed C memory
    unsigned char* _arr = static_cast<unsigned char*>(malloc(sizeof(unsigned char) * (_ret->size())));
    for (qsizetype i = 0; i < _ret->size(); ++i) {
        _arr[i] = (*_ret)[i];
    }
    libqt_list _out;
    _out.len = _ret->size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of unsigned char */ QCustom3DVolume_TextureData(const QCustom3DVolume* self) {
    QList<unsigned char>* _ret = self->textureData();
    // Convert QList<> from C++ memory to manually-managed C memory
    unsigned char* _arr = static_cast<unsigned char*>(malloc(sizeof(unsigned char) * (_ret->size())));
    for (qsizetype i = 0; i < _ret->size(); ++i) {
        _arr[i] = (*_ret)[i];
    }
    libqt_list _out;
    _out.len = _ret->size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QCustom3DVolume_SetSubTextureData(QCustom3DVolume* self, int axis, int index, const unsigned char* data) {
    self->setSubTextureData(static_cast<Qt::Axis>(axis), static_cast<int>(index), static_cast<const uchar*>(data));
}

void QCustom3DVolume_SetSubTextureData2(QCustom3DVolume* self, int axis, int index, const QImage* image) {
    self->setSubTextureData(static_cast<Qt::Axis>(axis), static_cast<int>(index), *image);
}

void QCustom3DVolume_SetTextureFormat(QCustom3DVolume* self, int format) {
    self->setTextureFormat(static_cast<QImage::Format>(format));
}

int QCustom3DVolume_TextureFormat(const QCustom3DVolume* self) {
    return static_cast<int>(self->textureFormat());
}

void QCustom3DVolume_SetAlphaMultiplier(QCustom3DVolume* self, float mult) {
    self->setAlphaMultiplier(static_cast<float>(mult));
}

float QCustom3DVolume_AlphaMultiplier(const QCustom3DVolume* self) {
    return self->alphaMultiplier();
}

void QCustom3DVolume_SetPreserveOpacity(QCustom3DVolume* self, bool enable) {
    self->setPreserveOpacity(enable);
}

bool QCustom3DVolume_PreserveOpacity(const QCustom3DVolume* self) {
    return self->preserveOpacity();
}

void QCustom3DVolume_SetUseHighDefShader(QCustom3DVolume* self, bool enable) {
    self->setUseHighDefShader(enable);
}

bool QCustom3DVolume_UseHighDefShader(const QCustom3DVolume* self) {
    return self->useHighDefShader();
}

void QCustom3DVolume_SetDrawSlices(QCustom3DVolume* self, bool enable) {
    self->setDrawSlices(enable);
}

bool QCustom3DVolume_DrawSlices(const QCustom3DVolume* self) {
    return self->drawSlices();
}

void QCustom3DVolume_SetDrawSliceFrames(QCustom3DVolume* self, bool enable) {
    self->setDrawSliceFrames(enable);
}

bool QCustom3DVolume_DrawSliceFrames(const QCustom3DVolume* self) {
    return self->drawSliceFrames();
}

void QCustom3DVolume_SetSliceFrameColor(QCustom3DVolume* self, const QColor* color) {
    self->setSliceFrameColor(*color);
}

QColor* QCustom3DVolume_SliceFrameColor(const QCustom3DVolume* self) {
    return new QColor(self->sliceFrameColor());
}

void QCustom3DVolume_SetSliceFrameWidths(QCustom3DVolume* self, const QVector3D* values) {
    self->setSliceFrameWidths(*values);
}

QVector3D* QCustom3DVolume_SliceFrameWidths(const QCustom3DVolume* self) {
    return new QVector3D(self->sliceFrameWidths());
}

void QCustom3DVolume_SetSliceFrameGaps(QCustom3DVolume* self, const QVector3D* values) {
    self->setSliceFrameGaps(*values);
}

QVector3D* QCustom3DVolume_SliceFrameGaps(const QCustom3DVolume* self) {
    return new QVector3D(self->sliceFrameGaps());
}

void QCustom3DVolume_SetSliceFrameThicknesses(QCustom3DVolume* self, const QVector3D* values) {
    self->setSliceFrameThicknesses(*values);
}

QVector3D* QCustom3DVolume_SliceFrameThicknesses(const QCustom3DVolume* self) {
    return new QVector3D(self->sliceFrameThicknesses());
}

QImage* QCustom3DVolume_RenderSlice(QCustom3DVolume* self, int axis, int index) {
    return new QImage(self->renderSlice(static_cast<Qt::Axis>(axis), static_cast<int>(index)));
}

void QCustom3DVolume_TextureWidthChanged(QCustom3DVolume* self, int value) {
    self->textureWidthChanged(static_cast<int>(value));
}

void QCustom3DVolume_Connect_TextureWidthChanged(QCustom3DVolume* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DVolume*, int) = reinterpret_cast<void (*)(QCustom3DVolume*, int)>(slot);
    QCustom3DVolume::connect(self,
                             static_cast<void (QCustom3DVolume::*)(int)>(&QCustom3DVolume::textureWidthChanged),
                             [self, slotFunc](int value) {
                                 int sigval1 = value;
                                 slotFunc(self, sigval1);
                             });
}

void QCustom3DVolume_TextureHeightChanged(QCustom3DVolume* self, int value) {
    self->textureHeightChanged(static_cast<int>(value));
}

void QCustom3DVolume_Connect_TextureHeightChanged(QCustom3DVolume* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DVolume*, int) = reinterpret_cast<void (*)(QCustom3DVolume*, int)>(slot);
    QCustom3DVolume::connect(self,
                             static_cast<void (QCustom3DVolume::*)(int)>(&QCustom3DVolume::textureHeightChanged),
                             [self, slotFunc](int value) {
                                 int sigval1 = value;
                                 slotFunc(self, sigval1);
                             });
}

void QCustom3DVolume_TextureDepthChanged(QCustom3DVolume* self, int value) {
    self->textureDepthChanged(static_cast<int>(value));
}

void QCustom3DVolume_Connect_TextureDepthChanged(QCustom3DVolume* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DVolume*, int) = reinterpret_cast<void (*)(QCustom3DVolume*, int)>(slot);
    QCustom3DVolume::connect(self,
                             static_cast<void (QCustom3DVolume::*)(int)>(&QCustom3DVolume::textureDepthChanged),
                             [self, slotFunc](int value) {
                                 int sigval1 = value;
                                 slotFunc(self, sigval1);
                             });
}

void QCustom3DVolume_SliceIndexXChanged(QCustom3DVolume* self, int value) {
    self->sliceIndexXChanged(static_cast<int>(value));
}

void QCustom3DVolume_Connect_SliceIndexXChanged(QCustom3DVolume* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DVolume*, int) = reinterpret_cast<void (*)(QCustom3DVolume*, int)>(slot);
    QCustom3DVolume::connect(self,
                             static_cast<void (QCustom3DVolume::*)(int)>(&QCustom3DVolume::sliceIndexXChanged),
                             [self, slotFunc](int value) {
                                 int sigval1 = value;
                                 slotFunc(self, sigval1);
                             });
}

void QCustom3DVolume_SliceIndexYChanged(QCustom3DVolume* self, int value) {
    self->sliceIndexYChanged(static_cast<int>(value));
}

void QCustom3DVolume_Connect_SliceIndexYChanged(QCustom3DVolume* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DVolume*, int) = reinterpret_cast<void (*)(QCustom3DVolume*, int)>(slot);
    QCustom3DVolume::connect(self,
                             static_cast<void (QCustom3DVolume::*)(int)>(&QCustom3DVolume::sliceIndexYChanged),
                             [self, slotFunc](int value) {
                                 int sigval1 = value;
                                 slotFunc(self, sigval1);
                             });
}

void QCustom3DVolume_SliceIndexZChanged(QCustom3DVolume* self, int value) {
    self->sliceIndexZChanged(static_cast<int>(value));
}

void QCustom3DVolume_Connect_SliceIndexZChanged(QCustom3DVolume* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DVolume*, int) = reinterpret_cast<void (*)(QCustom3DVolume*, int)>(slot);
    QCustom3DVolume::connect(self,
                             static_cast<void (QCustom3DVolume::*)(int)>(&QCustom3DVolume::sliceIndexZChanged),
                             [self, slotFunc](int value) {
                                 int sigval1 = value;
                                 slotFunc(self, sigval1);
                             });
}

void QCustom3DVolume_ColorTableChanged(QCustom3DVolume* self) {
    self->colorTableChanged();
}

void QCustom3DVolume_Connect_ColorTableChanged(QCustom3DVolume* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DVolume*) = reinterpret_cast<void (*)(QCustom3DVolume*)>(slot);
    QCustom3DVolume::connect(self,
                             static_cast<void (QCustom3DVolume::*)()>(&QCustom3DVolume::colorTableChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QCustom3DVolume_TextureDataChanged(QCustom3DVolume* self, libqt_list /* of unsigned char */ data) {
    QList<unsigned char>* data_QList = new QList<unsigned char>();
    data_QList->reserve(data.len);
    unsigned char* data_arr = static_cast<unsigned char*>(data.data);
    for (size_t i = 0; i < data.len; ++i) {
        data_QList->push_back(static_cast<unsigned char>(data_arr[i]));
    }
    self->textureDataChanged(data_QList);
}

void QCustom3DVolume_Connect_TextureDataChanged(QCustom3DVolume* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DVolume*, libqt_list /* of unsigned char */) = reinterpret_cast<void (*)(QCustom3DVolume*, libqt_list /* of unsigned char */)>(slot);
    QCustom3DVolume::connect(self,
                             static_cast<void (QCustom3DVolume::*)(QList<unsigned char>*)>(&QCustom3DVolume::textureDataChanged),
                             [self, slotFunc](QList<unsigned char>* data) {
                                 QList<unsigned char>* data_ret = data;
                                 // Convert QList<> from C++ memory to manually-managed C memory
                                 unsigned char* data_arr = static_cast<unsigned char*>(malloc(sizeof(unsigned char) * (data_ret->size())));
                                 for (qsizetype i = 0; i < data_ret->size(); ++i) {
                                     data_arr[i] = (*data_ret)[i];
                                 }
                                 libqt_list data_out;
                                 data_out.len = data_ret->size();
                                 data_out.data = static_cast<void*>(data_arr);
                                 libqt_list /* of unsigned char */ sigval1 = data_out;
                                 slotFunc(self, sigval1);
                                 free(data_arr);
                             });
}

void QCustom3DVolume_TextureFormatChanged(QCustom3DVolume* self, int format) {
    self->textureFormatChanged(static_cast<QImage::Format>(format));
}

void QCustom3DVolume_Connect_TextureFormatChanged(QCustom3DVolume* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DVolume*, int) = reinterpret_cast<void (*)(QCustom3DVolume*, int)>(slot);
    QCustom3DVolume::connect(self,
                             static_cast<void (QCustom3DVolume::*)(QImage::Format)>(&QCustom3DVolume::textureFormatChanged),
                             [self, slotFunc](QImage::Format format) {
                                 int sigval1 = static_cast<int>(format);
                                 slotFunc(self, sigval1);
                             });
}

void QCustom3DVolume_AlphaMultiplierChanged(QCustom3DVolume* self, float mult) {
    self->alphaMultiplierChanged(static_cast<float>(mult));
}

void QCustom3DVolume_Connect_AlphaMultiplierChanged(QCustom3DVolume* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DVolume*, float) = reinterpret_cast<void (*)(QCustom3DVolume*, float)>(slot);
    QCustom3DVolume::connect(self,
                             static_cast<void (QCustom3DVolume::*)(float)>(&QCustom3DVolume::alphaMultiplierChanged),
                             [self, slotFunc](float mult) {
                                 float sigval1 = mult;
                                 slotFunc(self, sigval1);
                             });
}

void QCustom3DVolume_PreserveOpacityChanged(QCustom3DVolume* self, bool enabled) {
    self->preserveOpacityChanged(enabled);
}

void QCustom3DVolume_Connect_PreserveOpacityChanged(QCustom3DVolume* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DVolume*, bool) = reinterpret_cast<void (*)(QCustom3DVolume*, bool)>(slot);
    QCustom3DVolume::connect(self,
                             static_cast<void (QCustom3DVolume::*)(bool)>(&QCustom3DVolume::preserveOpacityChanged),
                             [self, slotFunc](bool enabled) {
                                 bool sigval1 = enabled;
                                 slotFunc(self, sigval1);
                             });
}

void QCustom3DVolume_UseHighDefShaderChanged(QCustom3DVolume* self, bool enabled) {
    self->useHighDefShaderChanged(enabled);
}

void QCustom3DVolume_Connect_UseHighDefShaderChanged(QCustom3DVolume* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DVolume*, bool) = reinterpret_cast<void (*)(QCustom3DVolume*, bool)>(slot);
    QCustom3DVolume::connect(self,
                             static_cast<void (QCustom3DVolume::*)(bool)>(&QCustom3DVolume::useHighDefShaderChanged),
                             [self, slotFunc](bool enabled) {
                                 bool sigval1 = enabled;
                                 slotFunc(self, sigval1);
                             });
}

void QCustom3DVolume_DrawSlicesChanged(QCustom3DVolume* self, bool enabled) {
    self->drawSlicesChanged(enabled);
}

void QCustom3DVolume_Connect_DrawSlicesChanged(QCustom3DVolume* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DVolume*, bool) = reinterpret_cast<void (*)(QCustom3DVolume*, bool)>(slot);
    QCustom3DVolume::connect(self,
                             static_cast<void (QCustom3DVolume::*)(bool)>(&QCustom3DVolume::drawSlicesChanged),
                             [self, slotFunc](bool enabled) {
                                 bool sigval1 = enabled;
                                 slotFunc(self, sigval1);
                             });
}

void QCustom3DVolume_DrawSliceFramesChanged(QCustom3DVolume* self, bool enabled) {
    self->drawSliceFramesChanged(enabled);
}

void QCustom3DVolume_Connect_DrawSliceFramesChanged(QCustom3DVolume* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DVolume*, bool) = reinterpret_cast<void (*)(QCustom3DVolume*, bool)>(slot);
    QCustom3DVolume::connect(self,
                             static_cast<void (QCustom3DVolume::*)(bool)>(&QCustom3DVolume::drawSliceFramesChanged),
                             [self, slotFunc](bool enabled) {
                                 bool sigval1 = enabled;
                                 slotFunc(self, sigval1);
                             });
}

void QCustom3DVolume_SliceFrameColorChanged(QCustom3DVolume* self, const QColor* color) {
    self->sliceFrameColorChanged(*color);
}

void QCustom3DVolume_Connect_SliceFrameColorChanged(QCustom3DVolume* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DVolume*, QColor*) = reinterpret_cast<void (*)(QCustom3DVolume*, QColor*)>(slot);
    QCustom3DVolume::connect(self,
                             static_cast<void (QCustom3DVolume::*)(const QColor&)>(&QCustom3DVolume::sliceFrameColorChanged),
                             [self, slotFunc](const QColor& color) {
                                 const QColor& color_ret = color;
                                 // Cast returned reference into pointer
                                 QColor* sigval1 = const_cast<QColor*>(&color_ret);
                                 slotFunc(self, sigval1);
                             });
}

void QCustom3DVolume_SliceFrameWidthsChanged(QCustom3DVolume* self, const QVector3D* values) {
    self->sliceFrameWidthsChanged(*values);
}

void QCustom3DVolume_Connect_SliceFrameWidthsChanged(QCustom3DVolume* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DVolume*, QVector3D*) = reinterpret_cast<void (*)(QCustom3DVolume*, QVector3D*)>(slot);
    QCustom3DVolume::connect(self,
                             static_cast<void (QCustom3DVolume::*)(const QVector3D&)>(&QCustom3DVolume::sliceFrameWidthsChanged),
                             [self, slotFunc](const QVector3D& values) {
                                 const QVector3D& values_ret = values;
                                 // Cast returned reference into pointer
                                 QVector3D* sigval1 = const_cast<QVector3D*>(&values_ret);
                                 slotFunc(self, sigval1);
                             });
}

void QCustom3DVolume_SliceFrameGapsChanged(QCustom3DVolume* self, const QVector3D* values) {
    self->sliceFrameGapsChanged(*values);
}

void QCustom3DVolume_Connect_SliceFrameGapsChanged(QCustom3DVolume* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DVolume*, QVector3D*) = reinterpret_cast<void (*)(QCustom3DVolume*, QVector3D*)>(slot);
    QCustom3DVolume::connect(self,
                             static_cast<void (QCustom3DVolume::*)(const QVector3D&)>(&QCustom3DVolume::sliceFrameGapsChanged),
                             [self, slotFunc](const QVector3D& values) {
                                 const QVector3D& values_ret = values;
                                 // Cast returned reference into pointer
                                 QVector3D* sigval1 = const_cast<QVector3D*>(&values_ret);
                                 slotFunc(self, sigval1);
                             });
}

void QCustom3DVolume_SliceFrameThicknessesChanged(QCustom3DVolume* self, const QVector3D* values) {
    self->sliceFrameThicknessesChanged(*values);
}

void QCustom3DVolume_Connect_SliceFrameThicknessesChanged(QCustom3DVolume* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DVolume*, QVector3D*) = reinterpret_cast<void (*)(QCustom3DVolume*, QVector3D*)>(slot);
    QCustom3DVolume::connect(self,
                             static_cast<void (QCustom3DVolume::*)(const QVector3D&)>(&QCustom3DVolume::sliceFrameThicknessesChanged),
                             [self, slotFunc](const QVector3D& values) {
                                 const QVector3D& values_ret = values;
                                 // Cast returned reference into pointer
                                 QVector3D* sigval1 = const_cast<QVector3D*>(&values_ret);
                                 slotFunc(self, sigval1);
                             });
}

libqt_string QCustom3DVolume_Tr2(const char* s, const char* c) {
    auto _ret = QCustom3DVolume::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QCustom3DVolume_Tr3(const char* s, const char* c, int n) {
    auto _ret = QCustom3DVolume::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
QMetaObject* QCustom3DVolume_SuperMetaObject(const QCustom3DVolume* self) {
    return (QMetaObject*)self->QCustom3DVolume::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QCustom3DVolume_OnMetaObject(QCustom3DVolume* self, intptr_t slot) {
    if (auto* vqcustom3dvolume = const_cast<VirtualQCustom3DVolume*>(dynamic_cast<const VirtualQCustom3DVolume*>(self)))
        vqcustom3dvolume->qcustom3dvolume_metaobject_callback = reinterpret_cast<VirtualQCustom3DVolume::QCustom3DVolume_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QCustom3DVolume_SuperMetacast(QCustom3DVolume* self, const char* param1) {
    return self->QCustom3DVolume::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QCustom3DVolume_OnMetacast(QCustom3DVolume* self, intptr_t slot) {
    if (auto* vqcustom3dvolume = dynamic_cast<VirtualQCustom3DVolume*>(self))
        vqcustom3dvolume->qcustom3dvolume_metacast_callback = reinterpret_cast<VirtualQCustom3DVolume::QCustom3DVolume_Metacast_Callback>(slot);
}

// Base class handler implementation
int QCustom3DVolume_SuperMetacall(QCustom3DVolume* self, int param1, int param2, void** param3) {
    return self->QCustom3DVolume::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QCustom3DVolume_OnMetacall(QCustom3DVolume* self, intptr_t slot) {
    if (auto* vqcustom3dvolume = dynamic_cast<VirtualQCustom3DVolume*>(self))
        vqcustom3dvolume->qcustom3dvolume_metacall_callback = reinterpret_cast<VirtualQCustom3DVolume::QCustom3DVolume_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QCustom3DVolume_Event(QCustom3DVolume* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QCustom3DVolume_SuperEvent(QCustom3DVolume* self, QEvent* event) {
    return self->QCustom3DVolume::event(event);
}

// Auxiliary method to allow providing re-implementation
void QCustom3DVolume_OnEvent(QCustom3DVolume* self, intptr_t slot) {
    if (auto* vqcustom3dvolume = dynamic_cast<VirtualQCustom3DVolume*>(self))
        vqcustom3dvolume->qcustom3dvolume_event_callback = reinterpret_cast<VirtualQCustom3DVolume::QCustom3DVolume_Event_Callback>(slot);
}

// Derived class handler implementation
bool QCustom3DVolume_EventFilter(QCustom3DVolume* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QCustom3DVolume_SuperEventFilter(QCustom3DVolume* self, QObject* watched, QEvent* event) {
    return self->QCustom3DVolume::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QCustom3DVolume_OnEventFilter(QCustom3DVolume* self, intptr_t slot) {
    if (auto* vqcustom3dvolume = dynamic_cast<VirtualQCustom3DVolume*>(self))
        vqcustom3dvolume->qcustom3dvolume_eventfilter_callback = reinterpret_cast<VirtualQCustom3DVolume::QCustom3DVolume_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QCustom3DVolume_TimerEvent(QCustom3DVolume* self, QTimerEvent* event) {
    auto* vqcustom3dvolume = dynamic_cast<VirtualQCustom3DVolume*>(self);
    if (vqcustom3dvolume) {
        vqcustom3dvolume->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCustom3DVolume::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCustom3DVolume_SuperTimerEvent(QCustom3DVolume* self, QTimerEvent* event) {
    if (auto* vqcustom3dvolume = dynamic_cast<VirtualQCustom3DVolume*>(self)) {
        vqcustom3dvolume->QCustom3DVolume::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QCustom3DVolume::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCustom3DVolume_OnTimerEvent(QCustom3DVolume* self, intptr_t slot) {
    if (auto* vqcustom3dvolume = dynamic_cast<VirtualQCustom3DVolume*>(self))
        vqcustom3dvolume->qcustom3dvolume_timerevent_callback = reinterpret_cast<VirtualQCustom3DVolume::QCustom3DVolume_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QCustom3DVolume_ChildEvent(QCustom3DVolume* self, QChildEvent* event) {
    auto* vqcustom3dvolume = dynamic_cast<VirtualQCustom3DVolume*>(self);
    if (vqcustom3dvolume) {
        vqcustom3dvolume->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCustom3DVolume::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCustom3DVolume_SuperChildEvent(QCustom3DVolume* self, QChildEvent* event) {
    if (auto* vqcustom3dvolume = dynamic_cast<VirtualQCustom3DVolume*>(self)) {
        vqcustom3dvolume->QCustom3DVolume::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QCustom3DVolume::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCustom3DVolume_OnChildEvent(QCustom3DVolume* self, intptr_t slot) {
    if (auto* vqcustom3dvolume = dynamic_cast<VirtualQCustom3DVolume*>(self))
        vqcustom3dvolume->qcustom3dvolume_childevent_callback = reinterpret_cast<VirtualQCustom3DVolume::QCustom3DVolume_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QCustom3DVolume_CustomEvent(QCustom3DVolume* self, QEvent* event) {
    auto* vqcustom3dvolume = dynamic_cast<VirtualQCustom3DVolume*>(self);
    if (vqcustom3dvolume) {
        vqcustom3dvolume->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCustom3DVolume::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCustom3DVolume_SuperCustomEvent(QCustom3DVolume* self, QEvent* event) {
    if (auto* vqcustom3dvolume = dynamic_cast<VirtualQCustom3DVolume*>(self)) {
        vqcustom3dvolume->QCustom3DVolume::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QCustom3DVolume::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCustom3DVolume_OnCustomEvent(QCustom3DVolume* self, intptr_t slot) {
    if (auto* vqcustom3dvolume = dynamic_cast<VirtualQCustom3DVolume*>(self))
        vqcustom3dvolume->qcustom3dvolume_customevent_callback = reinterpret_cast<VirtualQCustom3DVolume::QCustom3DVolume_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QCustom3DVolume_ConnectNotify(QCustom3DVolume* self, const QMetaMethod* signal) {
    auto* vqcustom3dvolume = dynamic_cast<VirtualQCustom3DVolume*>(self);
    if (vqcustom3dvolume) {
        vqcustom3dvolume->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QCustom3DVolume::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QCustom3DVolume_SuperConnectNotify(QCustom3DVolume* self, const QMetaMethod* signal) {
    if (auto* vqcustom3dvolume = dynamic_cast<VirtualQCustom3DVolume*>(self)) {
        vqcustom3dvolume->QCustom3DVolume::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QCustom3DVolume::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCustom3DVolume_OnConnectNotify(QCustom3DVolume* self, intptr_t slot) {
    if (auto* vqcustom3dvolume = dynamic_cast<VirtualQCustom3DVolume*>(self))
        vqcustom3dvolume->qcustom3dvolume_connectnotify_callback = reinterpret_cast<VirtualQCustom3DVolume::QCustom3DVolume_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QCustom3DVolume_DisconnectNotify(QCustom3DVolume* self, const QMetaMethod* signal) {
    auto* vqcustom3dvolume = dynamic_cast<VirtualQCustom3DVolume*>(self);
    if (vqcustom3dvolume) {
        vqcustom3dvolume->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QCustom3DVolume::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QCustom3DVolume_SuperDisconnectNotify(QCustom3DVolume* self, const QMetaMethod* signal) {
    if (auto* vqcustom3dvolume = dynamic_cast<VirtualQCustom3DVolume*>(self)) {
        vqcustom3dvolume->QCustom3DVolume::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QCustom3DVolume::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCustom3DVolume_OnDisconnectNotify(QCustom3DVolume* self, intptr_t slot) {
    if (auto* vqcustom3dvolume = dynamic_cast<VirtualQCustom3DVolume*>(self))
        vqcustom3dvolume->qcustom3dvolume_disconnectnotify_callback = reinterpret_cast<VirtualQCustom3DVolume::QCustom3DVolume_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QCustom3DVolume_Sender(const QCustom3DVolume* self) {
    if (auto* vqcustom3dvolume = const_cast<VirtualQCustom3DVolume*>(dynamic_cast<const VirtualQCustom3DVolume*>(self))) {
        return vqcustom3dvolume->VirtualQCustom3DVolume::sender();
    } else
        qFatal("Error: Protected method QCustom3DVolume::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QCustom3DVolume_SenderSignalIndex(const QCustom3DVolume* self) {
    if (auto* vqcustom3dvolume = const_cast<VirtualQCustom3DVolume*>(dynamic_cast<const VirtualQCustom3DVolume*>(self))) {
        return vqcustom3dvolume->VirtualQCustom3DVolume::senderSignalIndex();
    } else
        qFatal("Error: Protected method QCustom3DVolume::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QCustom3DVolume_Receivers(const QCustom3DVolume* self, const char* signal) {
    if (auto* vqcustom3dvolume = const_cast<VirtualQCustom3DVolume*>(dynamic_cast<const VirtualQCustom3DVolume*>(self))) {
        return vqcustom3dvolume->VirtualQCustom3DVolume::receivers(signal);
    } else
        qFatal("Error: Protected method QCustom3DVolume::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QCustom3DVolume_IsSignalConnected(const QCustom3DVolume* self, const QMetaMethod* signal) {
    if (auto* vqcustom3dvolume = const_cast<VirtualQCustom3DVolume*>(dynamic_cast<const VirtualQCustom3DVolume*>(self))) {
        return vqcustom3dvolume->VirtualQCustom3DVolume::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QCustom3DVolume::isSignalConnected called without a directly constructed type");
}

void QCustom3DVolume_Delete(QCustom3DVolume* self) {
    delete self;
}
