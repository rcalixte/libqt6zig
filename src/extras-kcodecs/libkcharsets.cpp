#include <KCharsets>
#include <QChar>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kcharsets.h>
#include "libkcharsets.h"
#include "libkcharsets.hxx"

libqt_string KCharsets_Tr(const char* sourceText) {
    QString _ret = KCharsets::tr(sourceText);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KCharsets* KCharsets_Charsets() {
    return KCharsets::charsets();
}

libqt_string KCharsets_ToEntity(const QChar* ch) {
    QString _ret = KCharsets::toEntity(*ch);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KCharsets_ResolveEntities(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString _ret = KCharsets::resolveEntities(text_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KCharsets_AvailableEncodingNames(const KCharsets* self) {
    QList<QString> _ret = self->availableEncodingNames();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ KCharsets_DescriptiveEncodingNames(const KCharsets* self) {
    QList<QString> _ret = self->descriptiveEncodingNames();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_list  of libqt_string  */ KCharsets_EncodingsByScript(const KCharsets* self) {
    QList<QList<QString>> _ret = self->encodingsByScript();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_list /* of libqt_string */* _arr = static_cast<libqt_list /* of libqt_string */*>(malloc(sizeof(libqt_list /* of libqt_string */) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QList<QString> _lv_ret = _ret[i];
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _lv_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _lv_ret.size()));
        for (qsizetype i = 0; i < _lv_ret.size(); ++i) {
            QString _lv_lv_ret = _lv_ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_lv_b = _lv_lv_ret.toUtf8();
            libqt_string _lv_lv_str;
            _lv_lv_str.len = _lv_lv_b.length();
            _lv_lv_str.data = static_cast<const char*>(malloc(_lv_lv_str.len + 1));
            memcpy((void*)_lv_lv_str.data, _lv_lv_b.data(), _lv_lv_str.len);
            ((char*)_lv_lv_str.data)[_lv_lv_str.len] = '\0';
            _lv_arr[i] = _lv_lv_str;
        }
        libqt_list _lv_out;
        _lv_out.len = _lv_ret.size();
        _lv_out.data = static_cast<void*>(_lv_arr);
        _arr[i] = _lv_out;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string KCharsets_EncodingForName(const KCharsets* self, const libqt_string descriptiveName) {
    QString descriptiveName_QString = QString::fromUtf8(descriptiveName.data, descriptiveName.len);
    QString _ret = self->encodingForName(descriptiveName_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KCharsets_Tr2(const char* sourceText, const char* disambiguation) {
    QString _ret = KCharsets::tr(sourceText, disambiguation);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KCharsets_Tr3(const char* sourceText, const char* disambiguation, int n) {
    QString _ret = KCharsets::tr(sourceText, disambiguation, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KCharsets_Delete(KCharsets* self) {
    delete self;
}
