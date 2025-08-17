#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSessionManager>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsessionmanager.h>
#include "libqsessionmanager.h"
#include "libqsessionmanager.hxx"

QMetaObject* QSessionManager_MetaObject(const QSessionManager* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSessionManager_Metacast(QSessionManager* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSessionManager_Metacall(QSessionManager* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSessionManager_Tr(const char* s) {
    QString _ret = QSessionManager::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSessionManager_SessionId(const QSessionManager* self) {
    QString _ret = self->sessionId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSessionManager_SessionKey(const QSessionManager* self) {
    QString _ret = self->sessionKey();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QSessionManager_AllowsInteraction(QSessionManager* self) {
    return self->allowsInteraction();
}

bool QSessionManager_AllowsErrorInteraction(QSessionManager* self) {
    return self->allowsErrorInteraction();
}

void QSessionManager_Release(QSessionManager* self) {
    self->release();
}

void QSessionManager_Cancel(QSessionManager* self) {
    self->cancel();
}

void QSessionManager_SetRestartHint(QSessionManager* self, int restartHint) {
    self->setRestartHint(static_cast<QSessionManager::RestartHint>(restartHint));
}

int QSessionManager_RestartHint(const QSessionManager* self) {
    return static_cast<int>(self->restartHint());
}

void QSessionManager_SetRestartCommand(QSessionManager* self, const libqt_list /* of libqt_string */ restartCommand) {
    QList<QString> restartCommand_QList;
    restartCommand_QList.reserve(restartCommand.len);
    libqt_string* restartCommand_arr = static_cast<libqt_string*>(restartCommand.data);
    for (size_t i = 0; i < restartCommand.len; ++i) {
        QString restartCommand_arr_i_QString = QString::fromUtf8(restartCommand_arr[i].data, restartCommand_arr[i].len);
        restartCommand_QList.push_back(restartCommand_arr_i_QString);
    }
    self->setRestartCommand(restartCommand_QList);
}

libqt_list /* of libqt_string */ QSessionManager_RestartCommand(const QSessionManager* self) {
    QList<QString> _ret = self->restartCommand();
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

void QSessionManager_SetDiscardCommand(QSessionManager* self, const libqt_list /* of libqt_string */ discardCommand) {
    QList<QString> discardCommand_QList;
    discardCommand_QList.reserve(discardCommand.len);
    libqt_string* discardCommand_arr = static_cast<libqt_string*>(discardCommand.data);
    for (size_t i = 0; i < discardCommand.len; ++i) {
        QString discardCommand_arr_i_QString = QString::fromUtf8(discardCommand_arr[i].data, discardCommand_arr[i].len);
        discardCommand_QList.push_back(discardCommand_arr_i_QString);
    }
    self->setDiscardCommand(discardCommand_QList);
}

libqt_list /* of libqt_string */ QSessionManager_DiscardCommand(const QSessionManager* self) {
    QList<QString> _ret = self->discardCommand();
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

void QSessionManager_SetManagerProperty(QSessionManager* self, const libqt_string name, const libqt_string value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->setManagerProperty(name_QString, value_QString);
}

void QSessionManager_SetManagerProperty2(QSessionManager* self, const libqt_string name, const libqt_list /* of libqt_string */ value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QList<QString> value_QList;
    value_QList.reserve(value.len);
    libqt_string* value_arr = static_cast<libqt_string*>(value.data);
    for (size_t i = 0; i < value.len; ++i) {
        QString value_arr_i_QString = QString::fromUtf8(value_arr[i].data, value_arr[i].len);
        value_QList.push_back(value_arr_i_QString);
    }
    self->setManagerProperty(name_QString, value_QList);
}

bool QSessionManager_IsPhase2(const QSessionManager* self) {
    return self->isPhase2();
}

void QSessionManager_RequestPhase2(QSessionManager* self) {
    self->requestPhase2();
}

libqt_string QSessionManager_Tr2(const char* s, const char* c) {
    QString _ret = QSessionManager::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSessionManager_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSessionManager::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
