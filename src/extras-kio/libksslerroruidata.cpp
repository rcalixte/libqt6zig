#include <KSslErrorUiData>
#include <QList>
#include <QNetworkReply>
#include <QSslError>
#include <QSslSocket>
#include <ksslerroruidata.h>
#include "libksslerroruidata.h"
#include "libksslerroruidata.hxx"

KSslErrorUiData* KSslErrorUiData_new() {
    return new KSslErrorUiData();
}

KSslErrorUiData* KSslErrorUiData_new2(const QSslSocket* socket) {
    return new KSslErrorUiData(socket);
}

KSslErrorUiData* KSslErrorUiData_new3(const QNetworkReply* reply, const libqt_list /* of QSslError* */ sslErrors) {
    QList<QSslError> sslErrors_QList;
    sslErrors_QList.reserve(sslErrors.len);
    QSslError** sslErrors_arr = static_cast<QSslError**>(sslErrors.data);
    for (size_t i = 0; i < sslErrors.len; ++i) {
        sslErrors_QList.push_back(*(sslErrors_arr[i]));
    }
    return new KSslErrorUiData(reply, sslErrors_QList);
}

KSslErrorUiData* KSslErrorUiData_new4(const KSslErrorUiData* other) {
    return new KSslErrorUiData(*other);
}

void KSslErrorUiData_OperatorAssign(KSslErrorUiData* self, const KSslErrorUiData* param1) {
    self->operator=(*param1);
}

void KSslErrorUiData_Delete(KSslErrorUiData* self) {
    delete self;
}
