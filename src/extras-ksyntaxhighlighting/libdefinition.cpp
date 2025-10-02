#include <KSyntaxHighlighting/Definition>
#include <KSyntaxHighlighting/Format>
#include <QChar>
#include <QList>
#include <QPair>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <definition.h>
#include "libdefinition.h"
#include "libdefinition.hxx"

KSyntaxHighlighting__Definition* KSyntaxHighlighting__Definition_new() {
    return new KSyntaxHighlighting::Definition();
}

KSyntaxHighlighting__Definition* KSyntaxHighlighting__Definition_new2(const KSyntaxHighlighting__Definition* other) {
    return new KSyntaxHighlighting::Definition(*other);
}

void KSyntaxHighlighting__Definition_OperatorAssign(KSyntaxHighlighting__Definition* self, const KSyntaxHighlighting__Definition* rhs) {
    self->operator=(*rhs);
}

bool KSyntaxHighlighting__Definition_OperatorEqual(const KSyntaxHighlighting__Definition* self, const KSyntaxHighlighting__Definition* other) {
    return (*self == *other);
}

bool KSyntaxHighlighting__Definition_OperatorNotEqual(const KSyntaxHighlighting__Definition* self, const KSyntaxHighlighting__Definition* other) {
    return (*self != *other);
}

bool KSyntaxHighlighting__Definition_IsValid(const KSyntaxHighlighting__Definition* self) {
    return self->isValid();
}

libqt_string KSyntaxHighlighting__Definition_FilePath(const KSyntaxHighlighting__Definition* self) {
    QString _ret = self->filePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSyntaxHighlighting__Definition_Name(const KSyntaxHighlighting__Definition* self) {
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

libqt_list /* of libqt_string */ KSyntaxHighlighting__Definition_AlternativeNames(const KSyntaxHighlighting__Definition* self) {
    QList<QString> _ret = self->alternativeNames();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
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

libqt_string KSyntaxHighlighting__Definition_TranslatedName(const KSyntaxHighlighting__Definition* self) {
    QString _ret = self->translatedName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSyntaxHighlighting__Definition_Section(const KSyntaxHighlighting__Definition* self) {
    QString _ret = self->section();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSyntaxHighlighting__Definition_TranslatedSection(const KSyntaxHighlighting__Definition* self) {
    QString _ret = self->translatedSection();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KSyntaxHighlighting__Definition_MimeTypes(const KSyntaxHighlighting__Definition* self) {
    QList<QString> _ret = self->mimeTypes();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
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

libqt_list /* of libqt_string */ KSyntaxHighlighting__Definition_Extensions(const KSyntaxHighlighting__Definition* self) {
    QList<QString> _ret = self->extensions();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
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

int KSyntaxHighlighting__Definition_Version(const KSyntaxHighlighting__Definition* self) {
    return self->version();
}

int KSyntaxHighlighting__Definition_Priority(const KSyntaxHighlighting__Definition* self) {
    return self->priority();
}

bool KSyntaxHighlighting__Definition_IsHidden(const KSyntaxHighlighting__Definition* self) {
    return self->isHidden();
}

libqt_string KSyntaxHighlighting__Definition_Style(const KSyntaxHighlighting__Definition* self) {
    QString _ret = self->style();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSyntaxHighlighting__Definition_Indenter(const KSyntaxHighlighting__Definition* self) {
    QString _ret = self->indenter();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSyntaxHighlighting__Definition_Author(const KSyntaxHighlighting__Definition* self) {
    QString _ret = self->author();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSyntaxHighlighting__Definition_License(const KSyntaxHighlighting__Definition* self) {
    QString _ret = self->license();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KSyntaxHighlighting__Definition_IsWordDelimiter(const KSyntaxHighlighting__Definition* self, QChar* c) {
    return self->isWordDelimiter(*c);
}

bool KSyntaxHighlighting__Definition_IsWordWrapDelimiter(const KSyntaxHighlighting__Definition* self, QChar* c) {
    return self->isWordWrapDelimiter(*c);
}

bool KSyntaxHighlighting__Definition_FoldingEnabled(const KSyntaxHighlighting__Definition* self) {
    return self->foldingEnabled();
}

bool KSyntaxHighlighting__Definition_IndentationBasedFoldingEnabled(const KSyntaxHighlighting__Definition* self) {
    return self->indentationBasedFoldingEnabled();
}

libqt_list /* of libqt_string */ KSyntaxHighlighting__Definition_FoldingIgnoreList(const KSyntaxHighlighting__Definition* self) {
    QList<QString> _ret = self->foldingIgnoreList();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
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

libqt_list /* of libqt_string */ KSyntaxHighlighting__Definition_KeywordLists(const KSyntaxHighlighting__Definition* self) {
    QList<QString> _ret = self->keywordLists();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
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

libqt_list /* of libqt_string */ KSyntaxHighlighting__Definition_KeywordList(const KSyntaxHighlighting__Definition* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QList<QString> _ret = self->keywordList(name_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
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

bool KSyntaxHighlighting__Definition_SetKeywordList(KSyntaxHighlighting__Definition* self, const libqt_string name, const libqt_list /* of libqt_string */ content) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QList<QString> content_QList;
    content_QList.reserve(content.len);
    libqt_string* content_arr = static_cast<libqt_string*>(content.data);
    for (size_t i = 0; i < content.len; ++i) {
        QString content_arr_i_QString = QString::fromUtf8(content_arr[i].data, content_arr[i].len);
        content_QList.push_back(content_arr_i_QString);
    }
    return self->setKeywordList(name_QString, content_QList);
}

libqt_list /* of KSyntaxHighlighting__Format* */ KSyntaxHighlighting__Definition_Formats(const KSyntaxHighlighting__Definition* self) {
    QList<KSyntaxHighlighting::Format> _ret = self->formats();
    // Convert QList<> from C++ memory to manually-managed C memory
    KSyntaxHighlighting__Format** _arr = static_cast<KSyntaxHighlighting__Format**>(malloc(sizeof(KSyntaxHighlighting__Format*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KSyntaxHighlighting::Format(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of KSyntaxHighlighting__Definition* */ KSyntaxHighlighting__Definition_IncludedDefinitions(const KSyntaxHighlighting__Definition* self) {
    QList<KSyntaxHighlighting::Definition> _ret = self->includedDefinitions();
    // Convert QList<> from C++ memory to manually-managed C memory
    KSyntaxHighlighting__Definition** _arr = static_cast<KSyntaxHighlighting__Definition**>(malloc(sizeof(KSyntaxHighlighting__Definition*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KSyntaxHighlighting::Definition(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string KSyntaxHighlighting__Definition_SingleLineCommentMarker(const KSyntaxHighlighting__Definition* self) {
    QString _ret = self->singleLineCommentMarker();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KSyntaxHighlighting__Definition_SingleLineCommentPosition(const KSyntaxHighlighting__Definition* self) {
    return static_cast<int>(self->singleLineCommentPosition());
}

libqt_pair /* tuple of libqt_string and libqt_string */ KSyntaxHighlighting__Definition_MultiLineCommentMarker(const KSyntaxHighlighting__Definition* self) {
    QPair<QString, QString> _ret = self->multiLineCommentMarker();
    // Convert QPair<> from C++ memory to manually-managed C memory
    libqt_string* _first = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
    libqt_string* _second = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
    QString _first_ret = _ret.first;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _first_b = _first_ret.toUtf8();
    libqt_string _first_str;
    _first_str.len = _first_b.length();
    _first_str.data = static_cast<const char*>(malloc(_first_str.len + 1));
    memcpy((void*)_first_str.data, _first_b.data(), _first_str.len);
    ((char*)_first_str.data)[_first_str.len] = '\0';
    *_first = _first_str;
    QString _second_ret = _ret.second;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _second_b = _second_ret.toUtf8();
    libqt_string _second_str;
    _second_str.len = _second_b.length();
    _second_str.data = static_cast<const char*>(malloc(_second_str.len + 1));
    memcpy((void*)_second_str.data, _second_b.data(), _second_str.len);
    ((char*)_second_str.data)[_second_str.len] = '\0';
    *_second = _second_str;
    libqt_pair _out;
    _out.first = static_cast<void*>(_first);
    _out.second = static_cast<void*>(_second);
    return _out;
}

libqt_list /* of libqt_pair  tuple of QChar* and libqt_string  */ KSyntaxHighlighting__Definition_CharacterEncodings(const KSyntaxHighlighting__Definition* self) {
    QList<QPair<QChar, QString>> _ret = self->characterEncodings();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_pair /* tuple of QChar* and libqt_string */* _arr = static_cast<libqt_pair /* tuple of QChar* and libqt_string */*>(malloc(sizeof(libqt_pair /* tuple of QChar* and libqt_string */) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QPair<QChar, QString> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        QChar** _lv_first = static_cast<QChar**>(malloc(sizeof(QChar*)));
        libqt_string* _lv_second = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
        *_lv_first = new QChar(_lv_ret.first);
        QString _lv_second_ret = _lv_ret.second;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_second_b = _lv_second_ret.toUtf8();
        libqt_string _lv_second_str;
        _lv_second_str.len = _lv_second_b.length();
        _lv_second_str.data = static_cast<const char*>(malloc(_lv_second_str.len + 1));
        memcpy((void*)_lv_second_str.data, _lv_second_b.data(), _lv_second_str.len);
        ((char*)_lv_second_str.data)[_lv_second_str.len] = '\0';
        *_lv_second = _lv_second_str;
        libqt_pair _lv_out;
        _lv_out.first = static_cast<void*>(_lv_first);
        _lv_out.second = static_cast<void*>(_lv_second);
        _arr[i] = _lv_out;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KSyntaxHighlighting__Definition_Delete(KSyntaxHighlighting__Definition* self) {
    delete self;
}
