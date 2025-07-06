#include <QFactoryInterface>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qfactoryinterface.h>
#include "libqfactoryinterface.h"
#include "libqfactoryinterface.hxx"

libqt_list /* of libqt_string */ QFactoryInterface_Keys(const QFactoryInterface* self) {
    QList<QString> _ret = self->keys();
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

void QFactoryInterface_Delete(QFactoryInterface* self) {
    delete self;
}
