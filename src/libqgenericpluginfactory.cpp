#include <QGenericPluginFactory>
#include <QList>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qgenericpluginfactory.h>
#include "libqgenericpluginfactory.h"
#include "libqgenericpluginfactory.hxx"

QGenericPluginFactory* QGenericPluginFactory_new(const QGenericPluginFactory* other) {
    return new QGenericPluginFactory(*other);
}

QGenericPluginFactory* QGenericPluginFactory_new2(QGenericPluginFactory* other) {
    return new QGenericPluginFactory(std::move(*other));
}

void QGenericPluginFactory_CopyAssign(QGenericPluginFactory* self, QGenericPluginFactory* other) {
    *self = *other;
}

void QGenericPluginFactory_MoveAssign(QGenericPluginFactory* self, QGenericPluginFactory* other) {
    *self = std::move(*other);
}

libqt_list /* of libqt_string */ QGenericPluginFactory_Keys() {
    QStringList _ret = QGenericPluginFactory::keys();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QObject* QGenericPluginFactory_Create(const libqt_string param1, const libqt_string param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    return QGenericPluginFactory::create(param1_QString, param2_QString);
}

void QGenericPluginFactory_Delete(QGenericPluginFactory* self) {
    delete self;
}
