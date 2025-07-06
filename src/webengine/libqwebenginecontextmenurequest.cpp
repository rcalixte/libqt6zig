#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPoint>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineContextMenuRequest>
#include <qwebenginecontextmenurequest.h>
#include "libqwebenginecontextmenurequest.h"
#include "libqwebenginecontextmenurequest.hxx"

QMetaObject* QWebEngineContextMenuRequest_MetaObject(const QWebEngineContextMenuRequest* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWebEngineContextMenuRequest_Metacast(QWebEngineContextMenuRequest* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWebEngineContextMenuRequest_Metacall(QWebEngineContextMenuRequest* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QWebEngineContextMenuRequest_Tr(const char* s) {
    QString _ret = QWebEngineContextMenuRequest::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QPoint* QWebEngineContextMenuRequest_Position(const QWebEngineContextMenuRequest* self) {
    return new QPoint(self->position());
}

libqt_string QWebEngineContextMenuRequest_SelectedText(const QWebEngineContextMenuRequest* self) {
    QString _ret = self->selectedText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWebEngineContextMenuRequest_LinkText(const QWebEngineContextMenuRequest* self) {
    QString _ret = self->linkText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* QWebEngineContextMenuRequest_LinkUrl(const QWebEngineContextMenuRequest* self) {
    return new QUrl(self->linkUrl());
}

QUrl* QWebEngineContextMenuRequest_MediaUrl(const QWebEngineContextMenuRequest* self) {
    return new QUrl(self->mediaUrl());
}

int QWebEngineContextMenuRequest_MediaType(const QWebEngineContextMenuRequest* self) {
    return static_cast<int>(self->mediaType());
}

bool QWebEngineContextMenuRequest_IsContentEditable(const QWebEngineContextMenuRequest* self) {
    return self->isContentEditable();
}

libqt_string QWebEngineContextMenuRequest_MisspelledWord(const QWebEngineContextMenuRequest* self) {
    QString _ret = self->misspelledWord();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QWebEngineContextMenuRequest_SpellCheckerSuggestions(const QWebEngineContextMenuRequest* self) {
    QList<QString> _ret = self->spellCheckerSuggestions();
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

bool QWebEngineContextMenuRequest_IsAccepted(const QWebEngineContextMenuRequest* self) {
    return self->isAccepted();
}

void QWebEngineContextMenuRequest_SetAccepted(QWebEngineContextMenuRequest* self, bool accepted) {
    self->setAccepted(accepted);
}

int QWebEngineContextMenuRequest_MediaFlags(const QWebEngineContextMenuRequest* self) {
    return static_cast<int>(self->mediaFlags());
}

int QWebEngineContextMenuRequest_EditFlags(const QWebEngineContextMenuRequest* self) {
    return static_cast<int>(self->editFlags());
}

libqt_string QWebEngineContextMenuRequest_Tr2(const char* s, const char* c) {
    QString _ret = QWebEngineContextMenuRequest::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWebEngineContextMenuRequest_Tr3(const char* s, const char* c, int n) {
    QString _ret = QWebEngineContextMenuRequest::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWebEngineContextMenuRequest_Delete(QWebEngineContextMenuRequest* self) {
    delete self;
}
