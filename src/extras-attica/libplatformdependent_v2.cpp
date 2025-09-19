#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__PlatformDependent
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__PlatformDependentV2
#include <QByteArray>
#include <QIODevice>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <platformdependent_v2.h>
#include "libplatformdependent_v2.h"
#include "libplatformdependent_v2.hxx"

QNetworkReply* Attica__PlatformDependentV2_DeleteResource(Attica__PlatformDependentV2* self, const QNetworkRequest* request) {
    return self->deleteResource(*request);
}

QNetworkReply* Attica__PlatformDependentV2_Put(Attica__PlatformDependentV2* self, const QNetworkRequest* request, QIODevice* data) {
    return self->put(*request, data);
}

QNetworkReply* Attica__PlatformDependentV2_Put2(Attica__PlatformDependentV2* self, const QNetworkRequest* request, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    return self->put(*request, data_QByteArray);
}

void Attica__PlatformDependentV2_OperatorAssign(Attica__PlatformDependentV2* self, const Attica__PlatformDependentV2* param1) {
    self->operator=(*param1);
}

void Attica__PlatformDependentV2_Delete(Attica__PlatformDependentV2* self) {
    delete self;
}
