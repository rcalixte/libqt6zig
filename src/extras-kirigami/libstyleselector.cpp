#define WORKAROUND_INNER_CLASS_DEFINITION_Kirigami__Platform__StyleSelector
#include <QList>
#include <QString>
#include <QUrl>
#include <styleselector.h>
#include "libstyleselector.h"
#include "libstyleselector.hxx"

Kirigami__Platform__StyleSelector* Kirigami__Platform__StyleSelector_new(const Kirigami__Platform__StyleSelector* other) {
    return new Kirigami::Platform::StyleSelector(*other);
}

Kirigami__Platform__StyleSelector* Kirigami__Platform__StyleSelector_new2(Kirigami__Platform__StyleSelector* other) {
    return new Kirigami::Platform::StyleSelector(std::move(*other));
}

void Kirigami__Platform__StyleSelector_CopyAssign(Kirigami__Platform__StyleSelector* self, Kirigami__Platform__StyleSelector* other) {
    *self = *other;
}

void Kirigami__Platform__StyleSelector_MoveAssign(Kirigami__Platform__StyleSelector* self, Kirigami__Platform__StyleSelector* other) {
    *self = std::move(*other);
}

libqt_string Kirigami__Platform__StyleSelector_Style() {
    auto _ret = Kirigami::Platform::StyleSelector::style();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ Kirigami__Platform__StyleSelector_StyleChain() {
    QList<QString> _ret = Kirigami::Platform::StyleSelector::styleChain();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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

QUrl* Kirigami__Platform__StyleSelector_ComponentUrl(const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new QUrl(Kirigami::Platform::StyleSelector::componentUrl(fileName_QString));
}

void Kirigami__Platform__StyleSelector_SetBaseUrl(const QUrl* baseUrl) {
    Kirigami::Platform::StyleSelector::setBaseUrl(*baseUrl);
}

libqt_string Kirigami__Platform__StyleSelector_ResolveFilePath(const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    auto _ret = Kirigami::Platform::StyleSelector::resolveFilePath(path_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Kirigami__Platform__StyleSelector_ResolveFileUrl(const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    auto _ret = Kirigami::Platform::StyleSelector::resolveFileUrl(path_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Kirigami__Platform__StyleSelector_Delete(Kirigami__Platform__StyleSelector* self) {
    delete self;
}
