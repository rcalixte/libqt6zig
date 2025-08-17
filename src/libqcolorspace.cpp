#include <QByteArray>
#include <QColorSpace>
#include <QColorTransform>
#include <QList>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qcolorspace.h>
#include "libqcolorspace.h"
#include "libqcolorspace.hxx"

QColorSpace* QColorSpace_new() {
    return new QColorSpace();
}

QColorSpace* QColorSpace_new2(int namedColorSpace) {
    return new QColorSpace(static_cast<QColorSpace::NamedColorSpace>(namedColorSpace));
}

QColorSpace* QColorSpace_new3(QPointF* whitePoint, int transferFunction) {
    return new QColorSpace(*whitePoint, static_cast<QColorSpace::TransferFunction>(transferFunction));
}

QColorSpace* QColorSpace_new4(QPointF* whitePoint, const libqt_list /* of uint16_t */ transferFunctionTable) {
    QList<uint16_t> transferFunctionTable_QList;
    transferFunctionTable_QList.reserve(transferFunctionTable.len);
    uint16_t* transferFunctionTable_arr = static_cast<uint16_t*>(transferFunctionTable.data);
    for (size_t i = 0; i < transferFunctionTable.len; ++i) {
        transferFunctionTable_QList.push_back(static_cast<uint16_t>(transferFunctionTable_arr[i]));
    }
    return new QColorSpace(*whitePoint, transferFunctionTable_QList);
}

QColorSpace* QColorSpace_new5(int primaries, int transferFunction) {
    return new QColorSpace(static_cast<QColorSpace::Primaries>(primaries), static_cast<QColorSpace::TransferFunction>(transferFunction));
}

QColorSpace* QColorSpace_new6(int primaries, float gamma) {
    return new QColorSpace(static_cast<QColorSpace::Primaries>(primaries), static_cast<float>(gamma));
}

QColorSpace* QColorSpace_new7(int primaries, const libqt_list /* of uint16_t */ transferFunctionTable) {
    QList<uint16_t> transferFunctionTable_QList;
    transferFunctionTable_QList.reserve(transferFunctionTable.len);
    uint16_t* transferFunctionTable_arr = static_cast<uint16_t*>(transferFunctionTable.data);
    for (size_t i = 0; i < transferFunctionTable.len; ++i) {
        transferFunctionTable_QList.push_back(static_cast<uint16_t>(transferFunctionTable_arr[i]));
    }
    return new QColorSpace(static_cast<QColorSpace::Primaries>(primaries), transferFunctionTable_QList);
}

QColorSpace* QColorSpace_new8(const QPointF* whitePoint, const QPointF* redPoint, const QPointF* greenPoint, const QPointF* bluePoint, int transferFunction) {
    return new QColorSpace(*whitePoint, *redPoint, *greenPoint, *bluePoint, static_cast<QColorSpace::TransferFunction>(transferFunction));
}

QColorSpace* QColorSpace_new9(const QPointF* whitePoint, const QPointF* redPoint, const QPointF* greenPoint, const QPointF* bluePoint, const libqt_list /* of uint16_t */ transferFunctionTable) {
    QList<uint16_t> transferFunctionTable_QList;
    transferFunctionTable_QList.reserve(transferFunctionTable.len);
    uint16_t* transferFunctionTable_arr = static_cast<uint16_t*>(transferFunctionTable.data);
    for (size_t i = 0; i < transferFunctionTable.len; ++i) {
        transferFunctionTable_QList.push_back(static_cast<uint16_t>(transferFunctionTable_arr[i]));
    }
    return new QColorSpace(*whitePoint, *redPoint, *greenPoint, *bluePoint, transferFunctionTable_QList);
}

QColorSpace* QColorSpace_new10(const QPointF* whitePoint, const QPointF* redPoint, const QPointF* greenPoint, const QPointF* bluePoint, const libqt_list /* of uint16_t */ redTransferFunctionTable, const libqt_list /* of uint16_t */ greenTransferFunctionTable, const libqt_list /* of uint16_t */ blueTransferFunctionTable) {
    QList<uint16_t> redTransferFunctionTable_QList;
    redTransferFunctionTable_QList.reserve(redTransferFunctionTable.len);
    uint16_t* redTransferFunctionTable_arr = static_cast<uint16_t*>(redTransferFunctionTable.data);
    for (size_t i = 0; i < redTransferFunctionTable.len; ++i) {
        redTransferFunctionTable_QList.push_back(static_cast<uint16_t>(redTransferFunctionTable_arr[i]));
    }
    QList<uint16_t> greenTransferFunctionTable_QList;
    greenTransferFunctionTable_QList.reserve(greenTransferFunctionTable.len);
    uint16_t* greenTransferFunctionTable_arr = static_cast<uint16_t*>(greenTransferFunctionTable.data);
    for (size_t i = 0; i < greenTransferFunctionTable.len; ++i) {
        greenTransferFunctionTable_QList.push_back(static_cast<uint16_t>(greenTransferFunctionTable_arr[i]));
    }
    QList<uint16_t> blueTransferFunctionTable_QList;
    blueTransferFunctionTable_QList.reserve(blueTransferFunctionTable.len);
    uint16_t* blueTransferFunctionTable_arr = static_cast<uint16_t*>(blueTransferFunctionTable.data);
    for (size_t i = 0; i < blueTransferFunctionTable.len; ++i) {
        blueTransferFunctionTable_QList.push_back(static_cast<uint16_t>(blueTransferFunctionTable_arr[i]));
    }
    return new QColorSpace(*whitePoint, *redPoint, *greenPoint, *bluePoint, redTransferFunctionTable_QList, greenTransferFunctionTable_QList, blueTransferFunctionTable_QList);
}

QColorSpace* QColorSpace_new11(const QColorSpace* colorSpace) {
    return new QColorSpace(*colorSpace);
}

QColorSpace* QColorSpace_new12(QPointF* whitePoint, int transferFunction, float gamma) {
    return new QColorSpace(*whitePoint, static_cast<QColorSpace::TransferFunction>(transferFunction), static_cast<float>(gamma));
}

QColorSpace* QColorSpace_new13(int primaries, int transferFunction, float gamma) {
    return new QColorSpace(static_cast<QColorSpace::Primaries>(primaries), static_cast<QColorSpace::TransferFunction>(transferFunction), static_cast<float>(gamma));
}

QColorSpace* QColorSpace_new14(const QPointF* whitePoint, const QPointF* redPoint, const QPointF* greenPoint, const QPointF* bluePoint, int transferFunction, float gamma) {
    return new QColorSpace(*whitePoint, *redPoint, *greenPoint, *bluePoint, static_cast<QColorSpace::TransferFunction>(transferFunction), static_cast<float>(gamma));
}

void QColorSpace_OperatorAssign(QColorSpace* self, const QColorSpace* colorSpace) {
    self->operator=(*colorSpace);
}

void QColorSpace_Swap(QColorSpace* self, QColorSpace* colorSpace) {
    self->swap(*colorSpace);
}

int QColorSpace_Primaries(const QColorSpace* self) {
    return static_cast<int>(self->primaries());
}

int QColorSpace_TransferFunction(const QColorSpace* self) {
    return static_cast<int>(self->transferFunction());
}

float QColorSpace_Gamma(const QColorSpace* self) {
    return self->gamma();
}

libqt_string QColorSpace_Description(const QColorSpace* self) {
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

void QColorSpace_SetDescription(QColorSpace* self, const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->setDescription(description_QString);
}

void QColorSpace_SetTransferFunction(QColorSpace* self, int transferFunction) {
    self->setTransferFunction(static_cast<QColorSpace::TransferFunction>(transferFunction));
}

void QColorSpace_SetTransferFunction2(QColorSpace* self, const libqt_list /* of uint16_t */ transferFunctionTable) {
    QList<uint16_t> transferFunctionTable_QList;
    transferFunctionTable_QList.reserve(transferFunctionTable.len);
    uint16_t* transferFunctionTable_arr = static_cast<uint16_t*>(transferFunctionTable.data);
    for (size_t i = 0; i < transferFunctionTable.len; ++i) {
        transferFunctionTable_QList.push_back(static_cast<uint16_t>(transferFunctionTable_arr[i]));
    }
    self->setTransferFunction(transferFunctionTable_QList);
}

void QColorSpace_SetTransferFunctions(QColorSpace* self, const libqt_list /* of uint16_t */ redTransferFunctionTable, const libqt_list /* of uint16_t */ greenTransferFunctionTable, const libqt_list /* of uint16_t */ blueTransferFunctionTable) {
    QList<uint16_t> redTransferFunctionTable_QList;
    redTransferFunctionTable_QList.reserve(redTransferFunctionTable.len);
    uint16_t* redTransferFunctionTable_arr = static_cast<uint16_t*>(redTransferFunctionTable.data);
    for (size_t i = 0; i < redTransferFunctionTable.len; ++i) {
        redTransferFunctionTable_QList.push_back(static_cast<uint16_t>(redTransferFunctionTable_arr[i]));
    }
    QList<uint16_t> greenTransferFunctionTable_QList;
    greenTransferFunctionTable_QList.reserve(greenTransferFunctionTable.len);
    uint16_t* greenTransferFunctionTable_arr = static_cast<uint16_t*>(greenTransferFunctionTable.data);
    for (size_t i = 0; i < greenTransferFunctionTable.len; ++i) {
        greenTransferFunctionTable_QList.push_back(static_cast<uint16_t>(greenTransferFunctionTable_arr[i]));
    }
    QList<uint16_t> blueTransferFunctionTable_QList;
    blueTransferFunctionTable_QList.reserve(blueTransferFunctionTable.len);
    uint16_t* blueTransferFunctionTable_arr = static_cast<uint16_t*>(blueTransferFunctionTable.data);
    for (size_t i = 0; i < blueTransferFunctionTable.len; ++i) {
        blueTransferFunctionTable_QList.push_back(static_cast<uint16_t>(blueTransferFunctionTable_arr[i]));
    }
    self->setTransferFunctions(redTransferFunctionTable_QList, greenTransferFunctionTable_QList, blueTransferFunctionTable_QList);
}

QColorSpace* QColorSpace_WithTransferFunction(const QColorSpace* self, int transferFunction) {
    return new QColorSpace(self->withTransferFunction(static_cast<QColorSpace::TransferFunction>(transferFunction)));
}

QColorSpace* QColorSpace_WithTransferFunction2(const QColorSpace* self, const libqt_list /* of uint16_t */ transferFunctionTable) {
    QList<uint16_t> transferFunctionTable_QList;
    transferFunctionTable_QList.reserve(transferFunctionTable.len);
    uint16_t* transferFunctionTable_arr = static_cast<uint16_t*>(transferFunctionTable.data);
    for (size_t i = 0; i < transferFunctionTable.len; ++i) {
        transferFunctionTable_QList.push_back(static_cast<uint16_t>(transferFunctionTable_arr[i]));
    }
    return new QColorSpace(self->withTransferFunction(transferFunctionTable_QList));
}

QColorSpace* QColorSpace_WithTransferFunctions(const QColorSpace* self, const libqt_list /* of uint16_t */ redTransferFunctionTable, const libqt_list /* of uint16_t */ greenTransferFunctionTable, const libqt_list /* of uint16_t */ blueTransferFunctionTable) {
    QList<uint16_t> redTransferFunctionTable_QList;
    redTransferFunctionTable_QList.reserve(redTransferFunctionTable.len);
    uint16_t* redTransferFunctionTable_arr = static_cast<uint16_t*>(redTransferFunctionTable.data);
    for (size_t i = 0; i < redTransferFunctionTable.len; ++i) {
        redTransferFunctionTable_QList.push_back(static_cast<uint16_t>(redTransferFunctionTable_arr[i]));
    }
    QList<uint16_t> greenTransferFunctionTable_QList;
    greenTransferFunctionTable_QList.reserve(greenTransferFunctionTable.len);
    uint16_t* greenTransferFunctionTable_arr = static_cast<uint16_t*>(greenTransferFunctionTable.data);
    for (size_t i = 0; i < greenTransferFunctionTable.len; ++i) {
        greenTransferFunctionTable_QList.push_back(static_cast<uint16_t>(greenTransferFunctionTable_arr[i]));
    }
    QList<uint16_t> blueTransferFunctionTable_QList;
    blueTransferFunctionTable_QList.reserve(blueTransferFunctionTable.len);
    uint16_t* blueTransferFunctionTable_arr = static_cast<uint16_t*>(blueTransferFunctionTable.data);
    for (size_t i = 0; i < blueTransferFunctionTable.len; ++i) {
        blueTransferFunctionTable_QList.push_back(static_cast<uint16_t>(blueTransferFunctionTable_arr[i]));
    }
    return new QColorSpace(self->withTransferFunctions(redTransferFunctionTable_QList, greenTransferFunctionTable_QList, blueTransferFunctionTable_QList));
}

void QColorSpace_SetPrimaries(QColorSpace* self, int primariesId) {
    self->setPrimaries(static_cast<QColorSpace::Primaries>(primariesId));
}

void QColorSpace_SetPrimaries2(QColorSpace* self, const QPointF* whitePoint, const QPointF* redPoint, const QPointF* greenPoint, const QPointF* bluePoint) {
    self->setPrimaries(*whitePoint, *redPoint, *greenPoint, *bluePoint);
}

void QColorSpace_SetWhitePoint(QColorSpace* self, QPointF* whitePoint) {
    self->setWhitePoint(*whitePoint);
}

QPointF* QColorSpace_WhitePoint(const QColorSpace* self) {
    return new QPointF(self->whitePoint());
}

uint8_t QColorSpace_TransformModel(const QColorSpace* self) {
    return static_cast<uint8_t>(self->transformModel());
}

uint8_t QColorSpace_ColorModel(const QColorSpace* self) {
    return static_cast<uint8_t>(self->colorModel());
}

void QColorSpace_Detach(QColorSpace* self) {
    self->detach();
}

bool QColorSpace_IsValid(const QColorSpace* self) {
    return self->isValid();
}

bool QColorSpace_IsValidTarget(const QColorSpace* self) {
    return self->isValidTarget();
}

QColorSpace* QColorSpace_FromIccProfile(const libqt_string iccProfile) {
    QByteArray iccProfile_QByteArray(iccProfile.data, iccProfile.len);
    return new QColorSpace(QColorSpace::fromIccProfile(iccProfile_QByteArray));
}

libqt_string QColorSpace_IccProfile(const QColorSpace* self) {
    QByteArray _qb = self->iccProfile();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QColorTransform* QColorSpace_TransformationToColorSpace(const QColorSpace* self, const QColorSpace* colorspace) {
    return new QColorTransform(self->transformationToColorSpace(*colorspace));
}

QVariant* QColorSpace_ToQVariant(const QColorSpace* self) {
    return new QVariant(self->operator QVariant());
}

void QColorSpace_SetTransferFunction22(QColorSpace* self, int transferFunction, float gamma) {
    self->setTransferFunction(static_cast<QColorSpace::TransferFunction>(transferFunction), static_cast<float>(gamma));
}

QColorSpace* QColorSpace_WithTransferFunction22(const QColorSpace* self, int transferFunction, float gamma) {
    return new QColorSpace(self->withTransferFunction(static_cast<QColorSpace::TransferFunction>(transferFunction), static_cast<float>(gamma)));
}

void QColorSpace_Delete(QColorSpace* self) {
    delete self;
}
