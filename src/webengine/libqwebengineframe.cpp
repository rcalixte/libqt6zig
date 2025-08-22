#include <QList>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineFrame>
#include <qwebengineframe.h>
#include "libqwebengineframe.h"
#include "libqwebengineframe.hxx"

QWebEngineFrame* QWebEngineFrame_new(const QWebEngineFrame* param1) {
    return new QWebEngineFrame(*param1);
}

bool QWebEngineFrame_IsValid(const QWebEngineFrame* self) {
    return self->isValid();
}

libqt_string QWebEngineFrame_Name(const QWebEngineFrame* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWebEngineFrame_HtmlName(const QWebEngineFrame* self) {
    QString _ret = self->htmlName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QWebEngineFrame* */ QWebEngineFrame_Children(const QWebEngineFrame* self) {
    QList<QWebEngineFrame> _ret = self->children();
    // Convert QList<> from C++ memory to manually-managed C memory
    QWebEngineFrame** _arr = static_cast<QWebEngineFrame**>(malloc(sizeof(QWebEngineFrame*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QWebEngineFrame(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QUrl* QWebEngineFrame_Url(const QWebEngineFrame* self) {
    return new QUrl(self->url());
}

QSizeF* QWebEngineFrame_Size(const QWebEngineFrame* self) {
    return new QSizeF(self->size());
}

bool QWebEngineFrame_IsMainFrame(const QWebEngineFrame* self) {
    return self->isMainFrame();
}

void QWebEngineFrame_RunJavaScript(QWebEngineFrame* self, const libqt_string script) {
    QString script_QString = QString::fromUtf8(script.data, script.len);
    self->runJavaScript(script_QString);
}

void QWebEngineFrame_PrintToPdf(QWebEngineFrame* self, const libqt_string filePath) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    self->printToPdf(filePath_QString);
}

void QWebEngineFrame_RunJavaScript22(QWebEngineFrame* self, const libqt_string script, unsigned int worldId) {
    QString script_QString = QString::fromUtf8(script.data, script.len);
    self->runJavaScript(script_QString, static_cast<quint32>(worldId));
}

void QWebEngineFrame_Delete(QWebEngineFrame* self) {
    delete self;
}
