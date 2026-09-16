#include <QByteArray>
#include <QList>
#include <QQuickGraphicsConfiguration>
#include <QString>
#include <qquickgraphicsconfiguration.h>
#include "libqquickgraphicsconfiguration.h"
#include "libqquickgraphicsconfiguration.hxx"

QQuickGraphicsConfiguration* QQuickGraphicsConfiguration_new() {
    return new QQuickGraphicsConfiguration();
}

QQuickGraphicsConfiguration* QQuickGraphicsConfiguration_new2(const QQuickGraphicsConfiguration* other) {
    return new QQuickGraphicsConfiguration(*other);
}

void QQuickGraphicsConfiguration_OperatorAssign(QQuickGraphicsConfiguration* self, const QQuickGraphicsConfiguration* other) {
    self->operator=(*other);
}

libqt_list /* of libqt_string */ QQuickGraphicsConfiguration_PreferredInstanceExtensions() {
    QList<QByteArray> _ret = QQuickGraphicsConfiguration::preferredInstanceExtensions();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QByteArray _lv_qb = _ret[i];
        libqt_string _lv_str;
        _lv_str.len = _lv_qb.length();
        _lv_str.data = static_cast<char*>(malloc(_lv_str.len));
        memcpy((void*)_lv_str.data, _lv_qb.data(), _lv_str.len);
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QQuickGraphicsConfiguration_SetDeviceExtensions(QQuickGraphicsConfiguration* self, const libqt_list /* of libqt_string */ extensions) {
    QList<QByteArray> extensions_QList;
    extensions_QList.reserve(extensions.len);
    libqt_string* extensions_arr = static_cast<libqt_string*>(extensions.data);
    for (size_t i = 0; i < extensions.len; ++i) {
        QByteArray extensions_arr_i_QByteArray(extensions_arr[i].data, extensions_arr[i].len);
        extensions_QList.push_back(extensions_arr_i_QByteArray);
    }
    self->setDeviceExtensions(extensions_QList);
}

libqt_list /* of libqt_string */ QQuickGraphicsConfiguration_DeviceExtensions(const QQuickGraphicsConfiguration* self) {
    QList<QByteArray> _ret = self->deviceExtensions();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QByteArray _lv_qb = _ret[i];
        libqt_string _lv_str;
        _lv_str.len = _lv_qb.length();
        _lv_str.data = static_cast<char*>(malloc(_lv_str.len));
        memcpy((void*)_lv_str.data, _lv_qb.data(), _lv_str.len);
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QQuickGraphicsConfiguration_SetDepthBufferFor2D(QQuickGraphicsConfiguration* self, bool enable) {
    self->setDepthBufferFor2D(enable);
}

bool QQuickGraphicsConfiguration_IsDepthBufferEnabledFor2D(const QQuickGraphicsConfiguration* self) {
    return self->isDepthBufferEnabledFor2D();
}

void QQuickGraphicsConfiguration_SetDebugLayer(QQuickGraphicsConfiguration* self, bool enable) {
    self->setDebugLayer(enable);
}

bool QQuickGraphicsConfiguration_IsDebugLayerEnabled(const QQuickGraphicsConfiguration* self) {
    return self->isDebugLayerEnabled();
}

void QQuickGraphicsConfiguration_SetDebugMarkers(QQuickGraphicsConfiguration* self, bool enable) {
    self->setDebugMarkers(enable);
}

bool QQuickGraphicsConfiguration_IsDebugMarkersEnabled(const QQuickGraphicsConfiguration* self) {
    return self->isDebugMarkersEnabled();
}

void QQuickGraphicsConfiguration_SetTimestamps(QQuickGraphicsConfiguration* self, bool enable) {
    self->setTimestamps(enable);
}

bool QQuickGraphicsConfiguration_TimestampsEnabled(const QQuickGraphicsConfiguration* self) {
    return self->timestampsEnabled();
}

void QQuickGraphicsConfiguration_SetPreferSoftwareDevice(QQuickGraphicsConfiguration* self, bool enable) {
    self->setPreferSoftwareDevice(enable);
}

bool QQuickGraphicsConfiguration_PrefersSoftwareDevice(const QQuickGraphicsConfiguration* self) {
    return self->prefersSoftwareDevice();
}

void QQuickGraphicsConfiguration_SetAutomaticPipelineCache(QQuickGraphicsConfiguration* self, bool enable) {
    self->setAutomaticPipelineCache(enable);
}

bool QQuickGraphicsConfiguration_IsAutomaticPipelineCacheEnabled(const QQuickGraphicsConfiguration* self) {
    return self->isAutomaticPipelineCacheEnabled();
}

void QQuickGraphicsConfiguration_SetPipelineCacheSaveFile(QQuickGraphicsConfiguration* self, const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    self->setPipelineCacheSaveFile(filename_QString);
}

libqt_string QQuickGraphicsConfiguration_PipelineCacheSaveFile(const QQuickGraphicsConfiguration* self) {
    auto _ret = self->pipelineCacheSaveFile();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQuickGraphicsConfiguration_SetPipelineCacheLoadFile(QQuickGraphicsConfiguration* self, const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    self->setPipelineCacheLoadFile(filename_QString);
}

libqt_string QQuickGraphicsConfiguration_PipelineCacheLoadFile(const QQuickGraphicsConfiguration* self) {
    auto _ret = self->pipelineCacheLoadFile();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQuickGraphicsConfiguration_Delete(QQuickGraphicsConfiguration* self) {
    delete self;
}
