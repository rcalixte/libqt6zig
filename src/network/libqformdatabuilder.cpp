#include <QAnyStringView>
#include <QByteArrayView>
#include <QFormDataBuilder>
#include <QHttpHeaders>
#include <QHttpMultiPart>
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

QFormDataPartBuilder* QFormDataPartBuilder_SetBody(QFormDataPartBuilder* self, libqt_string data) {
    QByteArrayView data_QByteArrayView(data.data, data.len);
    return new QFormDataPartBuilder(self->setBody(data_QByteArrayView));
}

QFormDataPartBuilder* QFormDataPartBuilder_SetBodyDevice(QFormDataPartBuilder* self, QIODevice* body) {
    return new QFormDataPartBuilder(self->setBodyDevice(body));
}

QFormDataPartBuilder* QFormDataPartBuilder_SetHeaders(QFormDataPartBuilder* self, const QHttpHeaders* headers) {
    return new QFormDataPartBuilder(self->setHeaders(*headers));
}

QFormDataPartBuilder* QFormDataPartBuilder_SetBody2(QFormDataPartBuilder* self, libqt_string data, const char* fileName) {
    QByteArrayView data_QByteArrayView(data.data, data.len);
    return new QFormDataPartBuilder(self->setBody(data_QByteArrayView, QAnyStringView(fileName)));
}

QFormDataPartBuilder* QFormDataPartBuilder_SetBody3(QFormDataPartBuilder* self, libqt_string data, const char* fileName, const char* mimeType) {
    QByteArrayView data_QByteArrayView(data.data, data.len);
    return new QFormDataPartBuilder(self->setBody(data_QByteArrayView, QAnyStringView(fileName), QAnyStringView(mimeType)));
}

QFormDataPartBuilder* QFormDataPartBuilder_SetBodyDevice2(QFormDataPartBuilder* self, QIODevice* body, const char* fileName) {
    return new QFormDataPartBuilder(self->setBodyDevice(body, QAnyStringView(fileName)));
}

QFormDataPartBuilder* QFormDataPartBuilder_SetBodyDevice3(QFormDataPartBuilder* self, QIODevice* body, const char* fileName, const char* mimeType) {
    return new QFormDataPartBuilder(self->setBodyDevice(body, QAnyStringView(fileName), QAnyStringView(mimeType)));
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

QFormDataPartBuilder* QFormDataBuilder_Part(QFormDataBuilder* self, const char* name) {
    return new QFormDataPartBuilder(self->part(QAnyStringView(name)));
}

QHttpMultiPart* QFormDataBuilder_BuildMultiPart(QFormDataBuilder* self) {
    return self->buildMultiPart().release();
}

QHttpMultiPart* QFormDataBuilder_BuildMultiPart1(QFormDataBuilder* self, int options) {
    return self->buildMultiPart(static_cast<QFormDataBuilder::Options>(options)).release();
}

void QFormDataBuilder_Delete(QFormDataBuilder* self) {
    delete self;
}
