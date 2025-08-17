#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextDocumentFragment>
#include <qtextdocumentfragment.h>
#include "libqtextdocumentfragment.h"
#include "libqtextdocumentfragment.hxx"

QTextDocumentFragment* QTextDocumentFragment_new() {
    return new QTextDocumentFragment();
}

QTextDocumentFragment* QTextDocumentFragment_new2(const QTextDocument* document) {
    return new QTextDocumentFragment(document);
}

QTextDocumentFragment* QTextDocumentFragment_new3(const QTextCursor* range) {
    return new QTextDocumentFragment(*range);
}

QTextDocumentFragment* QTextDocumentFragment_new4(const QTextDocumentFragment* rhs) {
    return new QTextDocumentFragment(*rhs);
}

void QTextDocumentFragment_OperatorAssign(QTextDocumentFragment* self, const QTextDocumentFragment* rhs) {
    self->operator=(*rhs);
}

bool QTextDocumentFragment_IsEmpty(const QTextDocumentFragment* self) {
    return self->isEmpty();
}

libqt_string QTextDocumentFragment_ToPlainText(const QTextDocumentFragment* self) {
    QString _ret = self->toPlainText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTextDocumentFragment_ToRawText(const QTextDocumentFragment* self) {
    QString _ret = self->toRawText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTextDocumentFragment_ToHtml(const QTextDocumentFragment* self) {
    QString _ret = self->toHtml();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTextDocumentFragment_ToMarkdown(const QTextDocumentFragment* self) {
    QString _ret = self->toMarkdown();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QTextDocumentFragment* QTextDocumentFragment_FromPlainText(const libqt_string plainText) {
    QString plainText_QString = QString::fromUtf8(plainText.data, plainText.len);
    return new QTextDocumentFragment(QTextDocumentFragment::fromPlainText(plainText_QString));
}

QTextDocumentFragment* QTextDocumentFragment_FromHtml(const libqt_string html) {
    QString html_QString = QString::fromUtf8(html.data, html.len);
    return new QTextDocumentFragment(QTextDocumentFragment::fromHtml(html_QString));
}

QTextDocumentFragment* QTextDocumentFragment_FromMarkdown(const libqt_string markdown) {
    QString markdown_QString = QString::fromUtf8(markdown.data, markdown.len);
    return new QTextDocumentFragment(QTextDocumentFragment::fromMarkdown(markdown_QString));
}

libqt_string QTextDocumentFragment_ToMarkdown1(const QTextDocumentFragment* self, int features) {
    QString _ret = self->toMarkdown(static_cast<QTextDocument::MarkdownFeatures>(features));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QTextDocumentFragment* QTextDocumentFragment_FromHtml2(const libqt_string html, const QTextDocument* resourceProvider) {
    QString html_QString = QString::fromUtf8(html.data, html.len);
    return new QTextDocumentFragment(QTextDocumentFragment::fromHtml(html_QString, resourceProvider));
}

QTextDocumentFragment* QTextDocumentFragment_FromMarkdown2(const libqt_string markdown, int features) {
    QString markdown_QString = QString::fromUtf8(markdown.data, markdown.len);
    return new QTextDocumentFragment(QTextDocumentFragment::fromMarkdown(markdown_QString, static_cast<QTextDocument::MarkdownFeatures>(features)));
}

void QTextDocumentFragment_Delete(QTextDocumentFragment* self) {
    delete self;
}
