#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__SearchPreset
#include <KNSCore/SearchRequest>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <searchpreset.h>
#include "libsearchpreset.h"
#include "libsearchpreset.hxx"

KNSCore__SearchPreset* KNSCore__SearchPreset_new(const KNSCore__SearchPreset* param1) {
    return new KNSCore::SearchPreset(*param1);
}

KNSCore__SearchRequest* KNSCore__SearchPreset_Request(const KNSCore__SearchPreset* self) {
    return new KNSCore::SearchRequest(self->request());
}

libqt_string KNSCore__SearchPreset_DisplayName(const KNSCore__SearchPreset* self) {
    QString _ret = self->displayName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNSCore__SearchPreset_IconName(const KNSCore__SearchPreset* self) {
    QString _ret = self->iconName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KNSCore__SearchPreset_Type(const KNSCore__SearchPreset* self) {
    return static_cast<int>(self->type());
}

libqt_string KNSCore__SearchPreset_ProviderId(const KNSCore__SearchPreset* self) {
    QString _ret = self->providerId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__SearchPreset_Delete(KNSCore__SearchPreset* self) {
    delete self;
}
