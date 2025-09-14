#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__OpenWith
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__OpenWith__AcceptResult
#include <QString>
#include <QByteArray>
#include <cstring>
#include <openwith.h>
#include "libopenwith.h"
#include "libopenwith.hxx"

KIO__OpenWith* KIO__OpenWith_new(const KIO__OpenWith* other) {
    return new KIO::OpenWith(*other);
}

KIO__OpenWith* KIO__OpenWith_new2(KIO__OpenWith* other) {
    return new KIO::OpenWith(std::move(*other));
}

void KIO__OpenWith_CopyAssign(KIO__OpenWith* self, KIO__OpenWith* other) {
    *self = *other;
}

void KIO__OpenWith_MoveAssign(KIO__OpenWith* self, KIO__OpenWith* other) {
    *self = std::move(*other);
}

void KIO__OpenWith_Delete(KIO__OpenWith* self) {
    delete self;
}

KIO__OpenWith__AcceptResult* KIO__OpenWith__AcceptResult_new(const KIO__OpenWith__AcceptResult* param1) {
    return new KIO::OpenWith::AcceptResult(*param1);
}

bool KIO__OpenWith__AcceptResult_Accept(const KIO__OpenWith__AcceptResult* self) {
    return self->accept;
}

void KIO__OpenWith__AcceptResult_SetAccept(KIO__OpenWith__AcceptResult* self, bool accept) {
    self->accept = accept;
}

libqt_string KIO__OpenWith__AcceptResult_Error(const KIO__OpenWith__AcceptResult* self) {
    QString error_ret = self->error;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray error_b = error_ret.toUtf8();
    libqt_string error_str;
    error_str.len = error_b.length();
    error_str.data = static_cast<const char*>(malloc(error_str.len + 1));
    memcpy((void*)error_str.data, error_b.data(), error_str.len);
    ((char*)error_str.data)[error_str.len] = '\0';
    return error_str;
}

void KIO__OpenWith__AcceptResult_SetError(KIO__OpenWith__AcceptResult* self, libqt_string error) {
    QString error_QString = QString::fromUtf8(error.data, error.len);
    self->error = error_QString;
}

bool KIO__OpenWith__AcceptResult_RebuildSycoca(const KIO__OpenWith__AcceptResult* self) {
    return self->rebuildSycoca;
}

void KIO__OpenWith__AcceptResult_SetRebuildSycoca(KIO__OpenWith__AcceptResult* self, bool rebuildSycoca) {
    self->rebuildSycoca = rebuildSycoca;
}

void KIO__OpenWith__AcceptResult_OperatorAssign(KIO__OpenWith__AcceptResult* self, const KIO__OpenWith__AcceptResult* param1) {
    self->operator=(*param1);
}

void KIO__OpenWith__AcceptResult_Delete(KIO__OpenWith__AcceptResult* self) {
    delete self;
}
