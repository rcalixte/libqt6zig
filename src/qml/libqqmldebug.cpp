#include <QHash>
#include <QList>
#include <QQmlDebuggingEnabler>
#include <QString>
#include <QVariant>
#include <qqmldebug.h>
#include "libqqmldebug.h"
#include "libqqmldebug.hxx"

QQmlDebuggingEnabler* QQmlDebuggingEnabler_new(const QQmlDebuggingEnabler* other) {
    return new QQmlDebuggingEnabler(*other);
}

QQmlDebuggingEnabler* QQmlDebuggingEnabler_new2(QQmlDebuggingEnabler* other) {
    return new QQmlDebuggingEnabler(std::move(*other));
}

QQmlDebuggingEnabler* QQmlDebuggingEnabler_new3() {
    return new QQmlDebuggingEnabler();
}

QQmlDebuggingEnabler* QQmlDebuggingEnabler_new4(bool printWarning) {
    return new QQmlDebuggingEnabler(printWarning);
}

void QQmlDebuggingEnabler_CopyAssign(QQmlDebuggingEnabler* self, QQmlDebuggingEnabler* other) {
    *self = *other;
}

void QQmlDebuggingEnabler_MoveAssign(QQmlDebuggingEnabler* self, QQmlDebuggingEnabler* other) {
    *self = std::move(*other);
}

void QQmlDebuggingEnabler_EnableDebugging(bool printWarning) {
    QQmlDebuggingEnabler::enableDebugging(printWarning);
}

libqt_list /* of libqt_string */ QQmlDebuggingEnabler_DebuggerServices() {
    QList<QString> _ret = QQmlDebuggingEnabler::debuggerServices();
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

libqt_list /* of libqt_string */ QQmlDebuggingEnabler_InspectorServices() {
    QList<QString> _ret = QQmlDebuggingEnabler::inspectorServices();
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

libqt_list /* of libqt_string */ QQmlDebuggingEnabler_ProfilerServices() {
    QList<QString> _ret = QQmlDebuggingEnabler::profilerServices();
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

libqt_list /* of libqt_string */ QQmlDebuggingEnabler_NativeDebuggerServices() {
    QList<QString> _ret = QQmlDebuggingEnabler::nativeDebuggerServices();
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

void QQmlDebuggingEnabler_SetServices(const libqt_list /* of libqt_string */ services) {
    QList<QString> services_QList;
    services_QList.reserve(services.len);
    libqt_string* services_arr = static_cast<libqt_string*>(services.data);
    for (size_t i = 0; i < services.len; ++i) {
        QString services_arr_i_QString = QString::fromUtf8(services_arr[i].data, services_arr[i].len);
        services_QList.push_back(services_arr_i_QString);
    }
    QQmlDebuggingEnabler::setServices(services_QList);
}

bool QQmlDebuggingEnabler_StartTcpDebugServer(int port) {
    return QQmlDebuggingEnabler::startTcpDebugServer(static_cast<int>(port));
}

bool QQmlDebuggingEnabler_ConnectToLocalDebugger(const libqt_string socketFileName) {
    QString socketFileName_QString = QString::fromUtf8(socketFileName.data, socketFileName.len);
    return QQmlDebuggingEnabler::connectToLocalDebugger(socketFileName_QString);
}

bool QQmlDebuggingEnabler_StartDebugConnector(const libqt_string pluginName) {
    QString pluginName_QString = QString::fromUtf8(pluginName.data, pluginName.len);
    return QQmlDebuggingEnabler::startDebugConnector(pluginName_QString);
}

bool QQmlDebuggingEnabler_StartTcpDebugServer2(int port, int mode) {
    return QQmlDebuggingEnabler::startTcpDebugServer(static_cast<int>(port), static_cast<QQmlDebuggingEnabler::StartMode>(mode));
}

bool QQmlDebuggingEnabler_StartTcpDebugServer3(int port, int mode, const libqt_string hostName) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    return QQmlDebuggingEnabler::startTcpDebugServer(static_cast<int>(port), static_cast<QQmlDebuggingEnabler::StartMode>(mode), hostName_QString);
}

bool QQmlDebuggingEnabler_ConnectToLocalDebugger2(const libqt_string socketFileName, int mode) {
    QString socketFileName_QString = QString::fromUtf8(socketFileName.data, socketFileName.len);
    return QQmlDebuggingEnabler::connectToLocalDebugger(socketFileName_QString, static_cast<QQmlDebuggingEnabler::StartMode>(mode));
}

bool QQmlDebuggingEnabler_StartDebugConnector2(const libqt_string pluginName, const libqt_map /* of libqt_string to QVariant* */ configuration) {
    QString pluginName_QString = QString::fromUtf8(pluginName.data, pluginName.len);
    QHash<QString, QVariant> configuration_QHash;
    configuration_QHash.reserve(configuration.len);
    libqt_string* configuration_karr = static_cast<libqt_string*>(configuration.keys);
    QVariant** configuration_varr = static_cast<QVariant**>(configuration.values);
    for (size_t i = 0; i < configuration.len; ++i) {
        QString configuration_karr_i_QString = QString::fromUtf8(configuration_karr[i].data, configuration_karr[i].len);
        configuration_QHash.insert(configuration_karr_i_QString, *(configuration_varr[i]));
    }
    return QQmlDebuggingEnabler::startDebugConnector(pluginName_QString, configuration_QHash);
}

void QQmlDebuggingEnabler_Delete(QQmlDebuggingEnabler* self) {
    delete self;
}
