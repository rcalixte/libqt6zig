#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleFactory>
#include <qstylefactory.h>
#include "libqstylefactory.h"
#include "libqstylefactory.hxx"

QStyleFactory* QStyleFactory_new(const QStyleFactory* other) {
    return new QStyleFactory(*other);
}

QStyleFactory* QStyleFactory_new2(QStyleFactory* other) {
    return new QStyleFactory(std::move(*other));
}

void QStyleFactory_CopyAssign(QStyleFactory* self, QStyleFactory* other) {
    *self = *other;
}

void QStyleFactory_MoveAssign(QStyleFactory* self, QStyleFactory* other) {
    *self = std::move(*other);
}

libqt_list /* of libqt_string */ QStyleFactory_Keys() {
    QList<QString> _ret = QStyleFactory::keys();
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

QStyle* QStyleFactory_Create(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return QStyleFactory::create(param1_QString);
}

void QStyleFactory_Delete(QStyleFactory* self) {
    delete self;
}
