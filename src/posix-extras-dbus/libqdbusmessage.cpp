#include <QDBusError>
#include <QDBusMessage>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qdbusmessage.h>
#include "libqdbusmessage.h"
#include "libqdbusmessage.hxx"

QDBusMessage* QDBusMessage_new() {
    return new QDBusMessage();
}

QDBusMessage* QDBusMessage_new2(const QDBusMessage* other) {
    return new QDBusMessage(*other);
}

void QDBusMessage_OperatorAssign(QDBusMessage* self, const QDBusMessage* other) {
    self->operator=(*other);
}

void QDBusMessage_Swap(QDBusMessage* self, QDBusMessage* other) {
    self->swap(*other);
}

QDBusMessage* QDBusMessage_CreateSignal(const libqt_string path, const libqt_string interface, const libqt_string name) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QString interface_QString = QString::fromUtf8(interface.data, interface.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QDBusMessage(QDBusMessage::createSignal(path_QString, interface_QString, name_QString));
}

QDBusMessage* QDBusMessage_CreateTargetedSignal(const libqt_string service, const libqt_string path, const libqt_string interface, const libqt_string name) {
    QString service_QString = QString::fromUtf8(service.data, service.len);
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QString interface_QString = QString::fromUtf8(interface.data, interface.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QDBusMessage(QDBusMessage::createTargetedSignal(service_QString, path_QString, interface_QString, name_QString));
}

QDBusMessage* QDBusMessage_CreateMethodCall(const libqt_string destination, const libqt_string path, const libqt_string interface, const libqt_string method) {
    QString destination_QString = QString::fromUtf8(destination.data, destination.len);
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QString interface_QString = QString::fromUtf8(interface.data, interface.len);
    QString method_QString = QString::fromUtf8(method.data, method.len);
    return new QDBusMessage(QDBusMessage::createMethodCall(destination_QString, path_QString, interface_QString, method_QString));
}

QDBusMessage* QDBusMessage_CreateError(const libqt_string name, const libqt_string msg) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString msg_QString = QString::fromUtf8(msg.data, msg.len);
    return new QDBusMessage(QDBusMessage::createError(name_QString, msg_QString));
}

QDBusMessage* QDBusMessage_CreateError2(const QDBusError* err) {
    return new QDBusMessage(QDBusMessage::createError(*err));
}

QDBusMessage* QDBusMessage_CreateError3(int typeVal, const libqt_string msg) {
    QString msg_QString = QString::fromUtf8(msg.data, msg.len);
    return new QDBusMessage(QDBusMessage::createError(static_cast<QDBusError::ErrorType>(typeVal), msg_QString));
}

QDBusMessage* QDBusMessage_CreateReply(const QDBusMessage* self) {
    return new QDBusMessage(self->createReply());
}

QDBusMessage* QDBusMessage_CreateReply2(const QDBusMessage* self, const QVariant* argument) {
    return new QDBusMessage(self->createReply(*argument));
}

QDBusMessage* QDBusMessage_CreateErrorReply(const QDBusMessage* self, const libqt_string name, const libqt_string msg) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString msg_QString = QString::fromUtf8(msg.data, msg.len);
    return new QDBusMessage(self->createErrorReply(name_QString, msg_QString));
}

QDBusMessage* QDBusMessage_CreateErrorReply2(const QDBusMessage* self, const QDBusError* err) {
    return new QDBusMessage(self->createErrorReply(*err));
}

QDBusMessage* QDBusMessage_CreateErrorReply3(const QDBusMessage* self, int typeVal, const libqt_string msg) {
    QString msg_QString = QString::fromUtf8(msg.data, msg.len);
    return new QDBusMessage(self->createErrorReply(static_cast<QDBusError::ErrorType>(typeVal), msg_QString));
}

libqt_string QDBusMessage_Service(const QDBusMessage* self) {
    QString _ret = self->service();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDBusMessage_Path(const QDBusMessage* self) {
    QString _ret = self->path();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDBusMessage_Interface(const QDBusMessage* self) {
    QString _ret = self->interface();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDBusMessage_Member(const QDBusMessage* self) {
    QString _ret = self->member();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDBusMessage_ErrorName(const QDBusMessage* self) {
    QString _ret = self->errorName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDBusMessage_ErrorMessage(const QDBusMessage* self) {
    QString _ret = self->errorMessage();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QDBusMessage_Type(const QDBusMessage* self) {
    return static_cast<int>(self->type());
}

libqt_string QDBusMessage_Signature(const QDBusMessage* self) {
    QString _ret = self->signature();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QDBusMessage_IsReplyRequired(const QDBusMessage* self) {
    return self->isReplyRequired();
}

void QDBusMessage_SetDelayedReply(const QDBusMessage* self, bool enable) {
    self->setDelayedReply(enable);
}

bool QDBusMessage_IsDelayedReply(const QDBusMessage* self) {
    return self->isDelayedReply();
}

void QDBusMessage_SetAutoStartService(QDBusMessage* self, bool enable) {
    self->setAutoStartService(enable);
}

bool QDBusMessage_AutoStartService(const QDBusMessage* self) {
    return self->autoStartService();
}

void QDBusMessage_SetInteractiveAuthorizationAllowed(QDBusMessage* self, bool enable) {
    self->setInteractiveAuthorizationAllowed(enable);
}

bool QDBusMessage_IsInteractiveAuthorizationAllowed(const QDBusMessage* self) {
    return self->isInteractiveAuthorizationAllowed();
}

void QDBusMessage_SetArguments(QDBusMessage* self, const libqt_list /* of QVariant* */ arguments) {
    QList<QVariant> arguments_QList;
    arguments_QList.reserve(arguments.len);
    QVariant** arguments_arr = static_cast<QVariant**>(arguments.data);
    for (size_t i = 0; i < arguments.len; ++i) {
        arguments_QList.push_back(*(arguments_arr[i]));
    }
    self->setArguments(arguments_QList);
}

libqt_list /* of QVariant* */ QDBusMessage_Arguments(const QDBusMessage* self) {
    QList<QVariant> _ret = self->arguments();
    // Convert QList<> from C++ memory to manually-managed C memory
    QVariant** _arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QVariant(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QDBusMessage* QDBusMessage_OperatorShiftLeft(QDBusMessage* self, const QVariant* arg) {
    QDBusMessage& _ret = self->operator<<(*arg);
    // Cast returned reference into pointer
    return &_ret;
}

QDBusMessage* QDBusMessage_CreateReply1(const QDBusMessage* self, const libqt_list /* of QVariant* */ arguments) {
    QList<QVariant> arguments_QList;
    arguments_QList.reserve(arguments.len);
    QVariant** arguments_arr = static_cast<QVariant**>(arguments.data);
    for (size_t i = 0; i < arguments.len; ++i) {
        arguments_QList.push_back(*(arguments_arr[i]));
    }
    return new QDBusMessage(self->createReply(arguments_QList));
}

void QDBusMessage_Delete(QDBusMessage* self) {
    delete self;
}
