#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscistyledtext.h>
#include "libqscistyledtext.h"
#include "libqscistyledtext.hxx"

QsciStyledText* QsciStyledText_new(const libqt_string text, int style) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QsciStyledText(text_QString, static_cast<int>(style));
}

QsciStyledText* QsciStyledText_new2(const libqt_string text, const QsciStyle* style) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QsciStyledText(text_QString, *style);
}

QsciStyledText* QsciStyledText_new3(const QsciStyledText* param1) {
    return new QsciStyledText(*param1);
}

void QsciStyledText_Apply(const QsciStyledText* self, QsciScintillaBase* sci) {
    self->apply(sci);
}

libqt_string QsciStyledText_Text(const QsciStyledText* self) {
    const QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QsciStyledText_Style(const QsciStyledText* self) {
    return self->style();
}

void QsciStyledText_Delete(QsciStyledText* self) {
    delete self;
}
