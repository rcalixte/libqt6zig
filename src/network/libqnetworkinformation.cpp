#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkInformation>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qnetworkinformation.h>
#include "libqnetworkinformation.h"
#include "libqnetworkinformation.hxx"

QMetaObject* QNetworkInformation_MetaObject(const QNetworkInformation* self) {
    return (QMetaObject*)self->metaObject();
}

void* QNetworkInformation_Metacast(QNetworkInformation* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QNetworkInformation_Metacall(QNetworkInformation* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QNetworkInformation_Tr(const char* s) {
    QString _ret = QNetworkInformation::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QNetworkInformation_Reachability(const QNetworkInformation* self) {
    return static_cast<int>(self->reachability());
}

bool QNetworkInformation_IsBehindCaptivePortal(const QNetworkInformation* self) {
    return self->isBehindCaptivePortal();
}

int QNetworkInformation_TransportMedium(const QNetworkInformation* self) {
    return static_cast<int>(self->transportMedium());
}

bool QNetworkInformation_IsMetered(const QNetworkInformation* self) {
    return self->isMetered();
}

libqt_string QNetworkInformation_BackendName(const QNetworkInformation* self) {
    QString _ret = self->backendName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QNetworkInformation_Supports(const QNetworkInformation* self, int features) {
    return self->supports(static_cast<QNetworkInformation::Features>(features));
}

int QNetworkInformation_SupportedFeatures(const QNetworkInformation* self) {
    return static_cast<int>(self->supportedFeatures());
}

bool QNetworkInformation_LoadDefaultBackend() {
    return QNetworkInformation::loadDefaultBackend();
}

bool QNetworkInformation_LoadBackendByFeatures(int features) {
    return QNetworkInformation::loadBackendByFeatures(static_cast<QNetworkInformation::Features>(features));
}

bool QNetworkInformation_Load2(int features) {
    return QNetworkInformation::load(static_cast<QNetworkInformation::Features>(features));
}

libqt_list /* of libqt_string */ QNetworkInformation_AvailableBackends() {
    QList<QString> _ret = QNetworkInformation::availableBackends();
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

QNetworkInformation* QNetworkInformation_Instance() {
    return QNetworkInformation::instance();
}

void QNetworkInformation_ReachabilityChanged(QNetworkInformation* self, int newReachability) {
    self->reachabilityChanged(static_cast<QNetworkInformation::Reachability>(newReachability));
}

void QNetworkInformation_Connect_ReachabilityChanged(QNetworkInformation* self, intptr_t slot) {
    void (*slotFunc)(QNetworkInformation*, int) = reinterpret_cast<void (*)(QNetworkInformation*, int)>(slot);
    QNetworkInformation::connect(self, &QNetworkInformation::reachabilityChanged, [self, slotFunc](QNetworkInformation::Reachability newReachability) {
        int sigval1 = static_cast<int>(newReachability);
        slotFunc(self, sigval1);
    });
}

void QNetworkInformation_IsBehindCaptivePortalChanged(QNetworkInformation* self, bool state) {
    self->isBehindCaptivePortalChanged(state);
}

void QNetworkInformation_Connect_IsBehindCaptivePortalChanged(QNetworkInformation* self, intptr_t slot) {
    void (*slotFunc)(QNetworkInformation*, bool) = reinterpret_cast<void (*)(QNetworkInformation*, bool)>(slot);
    QNetworkInformation::connect(self, &QNetworkInformation::isBehindCaptivePortalChanged, [self, slotFunc](bool state) {
        bool sigval1 = state;
        slotFunc(self, sigval1);
    });
}

void QNetworkInformation_TransportMediumChanged(QNetworkInformation* self, int current) {
    self->transportMediumChanged(static_cast<QNetworkInformation::TransportMedium>(current));
}

void QNetworkInformation_Connect_TransportMediumChanged(QNetworkInformation* self, intptr_t slot) {
    void (*slotFunc)(QNetworkInformation*, int) = reinterpret_cast<void (*)(QNetworkInformation*, int)>(slot);
    QNetworkInformation::connect(self, &QNetworkInformation::transportMediumChanged, [self, slotFunc](QNetworkInformation::TransportMedium current) {
        int sigval1 = static_cast<int>(current);
        slotFunc(self, sigval1);
    });
}

void QNetworkInformation_IsMeteredChanged(QNetworkInformation* self, bool isMetered) {
    self->isMeteredChanged(isMetered);
}

void QNetworkInformation_Connect_IsMeteredChanged(QNetworkInformation* self, intptr_t slot) {
    void (*slotFunc)(QNetworkInformation*, bool) = reinterpret_cast<void (*)(QNetworkInformation*, bool)>(slot);
    QNetworkInformation::connect(self, &QNetworkInformation::isMeteredChanged, [self, slotFunc](bool isMetered) {
        bool sigval1 = isMetered;
        slotFunc(self, sigval1);
    });
}

libqt_string QNetworkInformation_Tr2(const char* s, const char* c) {
    QString _ret = QNetworkInformation::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QNetworkInformation_Tr3(const char* s, const char* c, int n) {
    QString _ret = QNetworkInformation::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
