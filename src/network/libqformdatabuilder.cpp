#include <QAnyStringView>
#include <QByteArrayView>
#include <QFormDataBuilder>
#include <QHttpHeaders>
#include <QIODevice>
#include <qformdatabuilder.h>
#include "libqformdatabuilder.h"
#include "libqformdatabuilder.hxx"

QFormDataPartBuilder* QFormDataPartBuilder_new() {
    return new QFormDataPartBuilder();
}

QFormDataPartBuilder* QFormDataPartBuilder_new2(const QFormDataPartBuilder* param1) {
    return new QFormDataPartBuilder(*param1);
}

void QFormDataPartBuilder_Swap(QFormDataPartBuilder* self, QFormDataPartBuilder* other) {
    self->swap(*other);
}

QFormDataPartBuilder* QFormDataPartBuilder_SetBody(QFormDataPartBuilder* self, QByteArrayView* data) {
    return new QFormDataPartBuilder(self->setBody(*data));
}

QFormDataPartBuilder* QFormDataPartBuilder_SetBodyDevice(QFormDataPartBuilder* self, QIODevice* body) {
    return new QFormDataPartBuilder(self->setBodyDevice(body));
}

QFormDataPartBuilder* QFormDataPartBuilder_SetHeaders(QFormDataPartBuilder* self, const QHttpHeaders* headers) {
    return new QFormDataPartBuilder(self->setHeaders(*headers));
}

QFormDataPartBuilder* QFormDataPartBuilder_SetBody2(QFormDataPartBuilder* self, QByteArrayView* data, libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new QFormDataPartBuilder(self->setBody(*data, QAnyStringView(fileName_QString)));
}

QFormDataPartBuilder* QFormDataPartBuilder_SetBody3(QFormDataPartBuilder* self, QByteArrayView* data, libqt_string fileName, libqt_string mimeType) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    return new QFormDataPartBuilder(self->setBody(*data, QAnyStringView(fileName_QString), QAnyStringView(mimeType_QString)));
}

QFormDataPartBuilder* QFormDataPartBuilder_SetBodyDevice2(QFormDataPartBuilder* self, QIODevice* body, libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new QFormDataPartBuilder(self->setBodyDevice(body, QAnyStringView(fileName_QString)));
}

QFormDataPartBuilder* QFormDataPartBuilder_SetBodyDevice3(QFormDataPartBuilder* self, QIODevice* body, libqt_string fileName, libqt_string mimeType) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    return new QFormDataPartBuilder(self->setBodyDevice(body, QAnyStringView(fileName_QString), QAnyStringView(mimeType_QString)));
}

void QFormDataPartBuilder_Delete(QFormDataPartBuilder* self) {
    delete self;
}

QFormDataBuilder* QFormDataBuilder_new() {
    return new QFormDataBuilder();
}

void QFormDataBuilder_Swap(QFormDataBuilder* self, QFormDataBuilder* other) {
    self->swap(*other);
}

QFormDataPartBuilder* QFormDataBuilder_Part(QFormDataBuilder* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QFormDataPartBuilder(self->part(QAnyStringView(name_QString)));
}

void QFormDataBuilder_Delete(QFormDataBuilder* self) {
    delete self;
}
