#include <QAnyStringView>
#include <QByteArrayView>
#include <QChar>
#include <QStringConverter>
#include <QStringConverterBase>
#include <QStringDecoder>
#include <QStringEncoder>
#include <qstringconverter.h>
#include "libqstringconverter.h"
#include "libqstringconverter.hxx"

QStringEncoder* QStringEncoder_new() {
    return new QStringEncoder();
}

QStringEncoder* QStringEncoder_new2(int encoding) {
    return new QStringEncoder(static_cast<QStringConverter::Encoding>(encoding));
}

QStringEncoder* QStringEncoder_new3(const char* name) {
    return new QStringEncoder(QAnyStringView(name));
}

QStringEncoder* QStringEncoder_new4(int encoding, int flags) {
    return new QStringEncoder(static_cast<QStringConverter::Encoding>(encoding), static_cast<QStringConverterBase::Flags>(flags));
}

QStringEncoder* QStringEncoder_new5(const char* name, int flags) {
    return new QStringEncoder(QAnyStringView(name), static_cast<QStringConverterBase::Flags>(flags));
}

ptrdiff_t QStringEncoder_RequiredSpace(const QStringEncoder* self, ptrdiff_t inputLength) {
    return static_cast<ptrdiff_t>(self->requiredSpace((qsizetype)(inputLength)));
}

void QStringEncoder_Delete(QStringEncoder* self) {
    delete self;
}

QStringDecoder* QStringDecoder_new(int encoding) {
    return new QStringDecoder(static_cast<QStringConverter::Encoding>(encoding));
}

QStringDecoder* QStringDecoder_new2() {
    return new QStringDecoder();
}

QStringDecoder* QStringDecoder_new3(const char* name) {
    return new QStringDecoder(QAnyStringView(name));
}

QStringDecoder* QStringDecoder_new4(int encoding, int flags) {
    return new QStringDecoder(static_cast<QStringConverter::Encoding>(encoding), static_cast<QStringConverterBase::Flags>(flags));
}

QStringDecoder* QStringDecoder_new5(const char* name, int f) {
    return new QStringDecoder(QAnyStringView(name), static_cast<QStringConverterBase::Flags>(f));
}

ptrdiff_t QStringDecoder_RequiredSpace(const QStringDecoder* self, ptrdiff_t inputLength) {
    return static_cast<ptrdiff_t>(self->requiredSpace((qsizetype)(inputLength)));
}

QChar* QStringDecoder_AppendToBuffer(QStringDecoder* self, QChar* out, libqt_string ba) {
    QByteArrayView ba_QByteArrayView(ba.data, ba.len);
    return self->appendToBuffer(out, ba_QByteArrayView);
}

QStringDecoder* QStringDecoder_DecoderForHtml(libqt_string data) {
    QByteArrayView data_QByteArrayView(data.data, data.len);
    return new QStringDecoder(QStringDecoder::decoderForHtml(data_QByteArrayView));
}

void QStringDecoder_Delete(QStringDecoder* self) {
    delete self;
}
