#include <KLocalizedContext>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <klocalizedcontext.h>
#include "libklocalizedcontext.h"
#include "libklocalizedcontext.hxx"

KLocalizedContext* KLocalizedContext_new() {
    return new VirtualKLocalizedContext();
}

KLocalizedContext* KLocalizedContext_new2(QObject* parent) {
    return new VirtualKLocalizedContext(parent);
}

QMetaObject* KLocalizedContext_MetaObject(const KLocalizedContext* self) {
    return (QMetaObject*)self->metaObject();
}

void* KLocalizedContext_Metacast(KLocalizedContext* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KLocalizedContext_Metacall(KLocalizedContext* self, int param1, int param2, void** param3) {
    auto* vklocalizedcontext = dynamic_cast<VirtualKLocalizedContext*>(self);
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKLocalizedContext*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KLocalizedContext_Tr(const char* s) {
    QString _ret = KLocalizedContext::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_TranslationDomain(const KLocalizedContext* self) {
    QString _ret = self->translationDomain();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KLocalizedContext_SetTranslationDomain(KLocalizedContext* self, const libqt_string domain) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    self->setTranslationDomain(domain_QString);
}

libqt_string KLocalizedContext_I18n(const KLocalizedContext* self, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18n(message_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18nc(const KLocalizedContext* self, const libqt_string context, const libqt_string message) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18nc(context_QString, message_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18np(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural) {
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18np(singular_QString, plural_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ncp(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ncp(context_QString, singular_QString, plural_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18nd(const KLocalizedContext* self, const libqt_string domain, const libqt_string message) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18nd(domain_QString, message_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndc(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18ndc(domain_QString, context_QString, message_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndp(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ndp(domain_QString, singular_QString, plural_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndcp(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ndcp(domain_QString, context_QString, singular_QString, plural_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18n(const KLocalizedContext* self, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18n(message_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18nc(const KLocalizedContext* self, const libqt_string context, const libqt_string message) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18nc(context_QString, message_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18np(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural) {
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18np(singular_QString, plural_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ncp(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ncp(context_QString, singular_QString, plural_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18nd(const KLocalizedContext* self, const libqt_string domain, const libqt_string message) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18nd(domain_QString, message_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndc(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18ndc(domain_QString, context_QString, message_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndp(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ndp(domain_QString, singular_QString, plural_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndcp(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ndcp(domain_QString, context_QString, singular_QString, plural_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KLocalizedContext_TranslationDomainChanged(KLocalizedContext* self, const libqt_string translationDomain) {
    QString translationDomain_QString = QString::fromUtf8(translationDomain.data, translationDomain.len);
    self->translationDomainChanged(translationDomain_QString);
}

void KLocalizedContext_Connect_TranslationDomainChanged(KLocalizedContext* self, intptr_t slot) {
    void (*slotFunc)(KLocalizedContext*, const char*) = reinterpret_cast<void (*)(KLocalizedContext*, const char*)>(slot);
    KLocalizedContext::connect(self, &KLocalizedContext::translationDomainChanged, [self, slotFunc](const QString& translationDomain) {
        const QString translationDomain_ret = translationDomain;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray translationDomain_b = translationDomain_ret.toUtf8();
        const char* translationDomain_str = static_cast<const char*>(malloc(translationDomain_b.length() + 1));
        memcpy((void*)translationDomain_str, translationDomain_b.data(), translationDomain_b.length());
        ((char*)translationDomain_str)[translationDomain_b.length()] = '\0';
        const char* sigval1 = translationDomain_str;
        slotFunc(self, sigval1);
        libqt_free(translationDomain_str);
    });
}

libqt_string KLocalizedContext_Tr2(const char* s, const char* c) {
    QString _ret = KLocalizedContext::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Tr3(const char* s, const char* c, int n) {
    QString _ret = KLocalizedContext::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18n2(const KLocalizedContext* self, const libqt_string message, const QVariant* param1) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18n(message_QString, *param1);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18n3(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18n(message_QString, *param1, *param2);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18n4(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18n(message_QString, *param1, *param2, *param3);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18n5(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18n(message_QString, *param1, *param2, *param3, *param4);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18n6(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18n(message_QString, *param1, *param2, *param3, *param4, *param5);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18n7(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18n(message_QString, *param1, *param2, *param3, *param4, *param5, *param6);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18n8(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18n(message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18n9(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18n(message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18n10(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18n(message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18n11(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18n(message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9, *param10);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18nc3(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18nc(context_QString, message_QString, *param1);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18nc4(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18nc(context_QString, message_QString, *param1, *param2);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18nc5(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18nc(context_QString, message_QString, *param1, *param2, *param3);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18nc6(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18nc(context_QString, message_QString, *param1, *param2, *param3, *param4);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18nc7(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18nc(context_QString, message_QString, *param1, *param2, *param3, *param4, *param5);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18nc8(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18nc(context_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18nc9(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18nc(context_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18nc10(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18nc(context_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18nc11(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18nc(context_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18nc12(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18nc(context_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9, *param10);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18np3(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1) {
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18np(singular_QString, plural_QString, *param1);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18np4(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2) {
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18np(singular_QString, plural_QString, *param1, *param2);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18np5(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18np(singular_QString, plural_QString, *param1, *param2, *param3);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18np6(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18np(singular_QString, plural_QString, *param1, *param2, *param3, *param4);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18np7(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18np(singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18np8(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18np(singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18np9(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18np(singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18np10(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18np(singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18np11(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18np(singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18np12(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18np(singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9, *param10);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ncp4(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ncp(context_QString, singular_QString, plural_QString, *param1);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ncp5(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ncp(context_QString, singular_QString, plural_QString, *param1, *param2);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ncp6(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ncp(context_QString, singular_QString, plural_QString, *param1, *param2, *param3);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ncp7(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ncp(context_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ncp8(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ncp(context_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ncp9(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ncp(context_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ncp10(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ncp(context_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ncp11(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ncp(context_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ncp12(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ncp(context_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ncp13(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ncp(context_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9, *param10);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18nd3(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18nd(domain_QString, message_QString, *param1);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18nd4(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18nd(domain_QString, message_QString, *param1, *param2);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18nd5(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18nd(domain_QString, message_QString, *param1, *param2, *param3);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18nd6(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18nd(domain_QString, message_QString, *param1, *param2, *param3, *param4);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18nd7(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18nd(domain_QString, message_QString, *param1, *param2, *param3, *param4, *param5);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18nd8(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18nd(domain_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18nd9(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18nd(domain_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18nd10(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18nd(domain_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18nd11(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18nd(domain_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18nd12(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18nd(domain_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9, *param10);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndc4(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18ndc(domain_QString, context_QString, message_QString, *param1);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndc5(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18ndc(domain_QString, context_QString, message_QString, *param1, *param2);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndc6(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18ndc(domain_QString, context_QString, message_QString, *param1, *param2, *param3);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndc7(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18ndc(domain_QString, context_QString, message_QString, *param1, *param2, *param3, *param4);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndc8(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18ndc(domain_QString, context_QString, message_QString, *param1, *param2, *param3, *param4, *param5);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndc9(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18ndc(domain_QString, context_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndc10(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18ndc(domain_QString, context_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndc11(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18ndc(domain_QString, context_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndc12(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18ndc(domain_QString, context_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndc13(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->i18ndc(domain_QString, context_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9, *param10);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndp4(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ndp(domain_QString, singular_QString, plural_QString, *param1);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndp5(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ndp(domain_QString, singular_QString, plural_QString, *param1, *param2);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndp6(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ndp(domain_QString, singular_QString, plural_QString, *param1, *param2, *param3);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndp7(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ndp(domain_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndp8(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ndp(domain_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndp9(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ndp(domain_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndp10(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ndp(domain_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndp11(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ndp(domain_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndp12(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ndp(domain_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndp13(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ndp(domain_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9, *param10);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndcp5(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ndcp(domain_QString, context_QString, singular_QString, plural_QString, *param1);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndcp6(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ndcp(domain_QString, context_QString, singular_QString, plural_QString, *param1, *param2);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndcp7(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ndcp(domain_QString, context_QString, singular_QString, plural_QString, *param1, *param2, *param3);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndcp8(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ndcp(domain_QString, context_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndcp9(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ndcp(domain_QString, context_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndcp10(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ndcp(domain_QString, context_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndcp11(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ndcp(domain_QString, context_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndcp12(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ndcp(domain_QString, context_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndcp13(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ndcp(domain_QString, context_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_I18ndcp14(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->i18ndcp(domain_QString, context_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9, *param10);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18n2(const KLocalizedContext* self, const libqt_string message, const QVariant* param1) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18n(message_QString, *param1);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18n3(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18n(message_QString, *param1, *param2);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18n4(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18n(message_QString, *param1, *param2, *param3);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18n5(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18n(message_QString, *param1, *param2, *param3, *param4);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18n6(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18n(message_QString, *param1, *param2, *param3, *param4, *param5);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18n7(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18n(message_QString, *param1, *param2, *param3, *param4, *param5, *param6);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18n8(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18n(message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18n9(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18n(message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18n10(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18n(message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18n11(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18n(message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9, *param10);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18nc3(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18nc(context_QString, message_QString, *param1);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18nc4(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18nc(context_QString, message_QString, *param1, *param2);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18nc5(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18nc(context_QString, message_QString, *param1, *param2, *param3);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18nc6(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18nc(context_QString, message_QString, *param1, *param2, *param3, *param4);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18nc7(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18nc(context_QString, message_QString, *param1, *param2, *param3, *param4, *param5);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18nc8(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18nc(context_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18nc9(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18nc(context_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18nc10(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18nc(context_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18nc11(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18nc(context_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18nc12(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18nc(context_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9, *param10);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18np3(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1) {
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18np(singular_QString, plural_QString, *param1);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18np4(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2) {
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18np(singular_QString, plural_QString, *param1, *param2);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18np5(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18np(singular_QString, plural_QString, *param1, *param2, *param3);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18np6(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18np(singular_QString, plural_QString, *param1, *param2, *param3, *param4);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18np7(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18np(singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18np8(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18np(singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18np9(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18np(singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18np10(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18np(singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18np11(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18np(singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18np12(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18np(singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9, *param10);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ncp4(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ncp(context_QString, singular_QString, plural_QString, *param1);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ncp5(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ncp(context_QString, singular_QString, plural_QString, *param1, *param2);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ncp6(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ncp(context_QString, singular_QString, plural_QString, *param1, *param2, *param3);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ncp7(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ncp(context_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ncp8(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ncp(context_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ncp9(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ncp(context_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ncp10(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ncp(context_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ncp11(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ncp(context_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ncp12(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ncp(context_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ncp13(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ncp(context_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9, *param10);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18nd3(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18nd(domain_QString, message_QString, *param1);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18nd4(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18nd(domain_QString, message_QString, *param1, *param2);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18nd5(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18nd(domain_QString, message_QString, *param1, *param2, *param3);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18nd6(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18nd(domain_QString, message_QString, *param1, *param2, *param3, *param4);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18nd7(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18nd(domain_QString, message_QString, *param1, *param2, *param3, *param4, *param5);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18nd8(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18nd(domain_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18nd9(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18nd(domain_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18nd10(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18nd(domain_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18nd11(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18nd(domain_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18nd12(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18nd(domain_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9, *param10);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndc4(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18ndc(domain_QString, context_QString, message_QString, *param1);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndc5(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18ndc(domain_QString, context_QString, message_QString, *param1, *param2);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndc6(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18ndc(domain_QString, context_QString, message_QString, *param1, *param2, *param3);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndc7(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18ndc(domain_QString, context_QString, message_QString, *param1, *param2, *param3, *param4);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndc8(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18ndc(domain_QString, context_QString, message_QString, *param1, *param2, *param3, *param4, *param5);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndc9(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18ndc(domain_QString, context_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndc10(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18ndc(domain_QString, context_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndc11(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18ndc(domain_QString, context_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndc12(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18ndc(domain_QString, context_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndc13(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    QString _ret = self->xi18ndc(domain_QString, context_QString, message_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9, *param10);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndp4(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ndp(domain_QString, singular_QString, plural_QString, *param1);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndp5(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ndp(domain_QString, singular_QString, plural_QString, *param1, *param2);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndp6(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ndp(domain_QString, singular_QString, plural_QString, *param1, *param2, *param3);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndp7(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ndp(domain_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndp8(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ndp(domain_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndp9(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ndp(domain_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndp10(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ndp(domain_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndp11(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ndp(domain_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndp12(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ndp(domain_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndp13(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ndp(domain_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9, *param10);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndcp5(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ndcp(domain_QString, context_QString, singular_QString, plural_QString, *param1);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndcp6(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ndcp(domain_QString, context_QString, singular_QString, plural_QString, *param1, *param2);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndcp7(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ndcp(domain_QString, context_QString, singular_QString, plural_QString, *param1, *param2, *param3);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndcp8(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ndcp(domain_QString, context_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndcp9(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ndcp(domain_QString, context_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndcp10(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ndcp(domain_QString, context_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndcp11(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ndcp(domain_QString, context_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndcp12(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ndcp(domain_QString, context_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndcp13(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ndcp(domain_QString, context_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedContext_Xi18ndcp14(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    QString context_QString = QString::fromUtf8(context.data, context.len);
    QString singular_QString = QString::fromUtf8(singular.data, singular.len);
    QString plural_QString = QString::fromUtf8(plural.data, plural.len);
    QString _ret = self->xi18ndcp(domain_QString, context_QString, singular_QString, plural_QString, *param1, *param2, *param3, *param4, *param5, *param6, *param7, *param8, *param9, *param10);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
int KLocalizedContext_QBaseMetacall(KLocalizedContext* self, int param1, int param2, void** param3) {
    auto* vklocalizedcontext = dynamic_cast<VirtualKLocalizedContext*>(self);
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        vklocalizedcontext->setKLocalizedContext_Metacall_IsBase(true);
        return vklocalizedcontext->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KLocalizedContext::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedContext_OnMetacall(KLocalizedContext* self, intptr_t slot) {
    auto* vklocalizedcontext = dynamic_cast<VirtualKLocalizedContext*>(self);
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        vklocalizedcontext->setKLocalizedContext_Metacall_Callback(reinterpret_cast<VirtualKLocalizedContext::KLocalizedContext_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLocalizedContext_Event(KLocalizedContext* self, QEvent* event) {
    auto* vklocalizedcontext = dynamic_cast<VirtualKLocalizedContext*>(self);
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        return vklocalizedcontext->event(event);
    } else {
        return self->KLocalizedContext::event(event);
    }
}

// Base class handler implementation
bool KLocalizedContext_QBaseEvent(KLocalizedContext* self, QEvent* event) {
    auto* vklocalizedcontext = dynamic_cast<VirtualKLocalizedContext*>(self);
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        vklocalizedcontext->setKLocalizedContext_Event_IsBase(true);
        return vklocalizedcontext->event(event);
    } else {
        return self->KLocalizedContext::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedContext_OnEvent(KLocalizedContext* self, intptr_t slot) {
    auto* vklocalizedcontext = dynamic_cast<VirtualKLocalizedContext*>(self);
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        vklocalizedcontext->setKLocalizedContext_Event_Callback(reinterpret_cast<VirtualKLocalizedContext::KLocalizedContext_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLocalizedContext_EventFilter(KLocalizedContext* self, QObject* watched, QEvent* event) {
    auto* vklocalizedcontext = dynamic_cast<VirtualKLocalizedContext*>(self);
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        return vklocalizedcontext->eventFilter(watched, event);
    } else {
        return self->KLocalizedContext::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KLocalizedContext_QBaseEventFilter(KLocalizedContext* self, QObject* watched, QEvent* event) {
    auto* vklocalizedcontext = dynamic_cast<VirtualKLocalizedContext*>(self);
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        vklocalizedcontext->setKLocalizedContext_EventFilter_IsBase(true);
        return vklocalizedcontext->eventFilter(watched, event);
    } else {
        return self->KLocalizedContext::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedContext_OnEventFilter(KLocalizedContext* self, intptr_t slot) {
    auto* vklocalizedcontext = dynamic_cast<VirtualKLocalizedContext*>(self);
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        vklocalizedcontext->setKLocalizedContext_EventFilter_Callback(reinterpret_cast<VirtualKLocalizedContext::KLocalizedContext_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KLocalizedContext_TimerEvent(KLocalizedContext* self, QTimerEvent* event) {
    auto* vklocalizedcontext = dynamic_cast<VirtualKLocalizedContext*>(self);
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        vklocalizedcontext->timerEvent(event);
    } else {
        ((VirtualKLocalizedContext*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KLocalizedContext_QBaseTimerEvent(KLocalizedContext* self, QTimerEvent* event) {
    auto* vklocalizedcontext = dynamic_cast<VirtualKLocalizedContext*>(self);
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        vklocalizedcontext->setKLocalizedContext_TimerEvent_IsBase(true);
        vklocalizedcontext->timerEvent(event);
    } else {
        ((VirtualKLocalizedContext*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedContext_OnTimerEvent(KLocalizedContext* self, intptr_t slot) {
    auto* vklocalizedcontext = dynamic_cast<VirtualKLocalizedContext*>(self);
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        vklocalizedcontext->setKLocalizedContext_TimerEvent_Callback(reinterpret_cast<VirtualKLocalizedContext::KLocalizedContext_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLocalizedContext_ChildEvent(KLocalizedContext* self, QChildEvent* event) {
    auto* vklocalizedcontext = dynamic_cast<VirtualKLocalizedContext*>(self);
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        vklocalizedcontext->childEvent(event);
    } else {
        ((VirtualKLocalizedContext*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KLocalizedContext_QBaseChildEvent(KLocalizedContext* self, QChildEvent* event) {
    auto* vklocalizedcontext = dynamic_cast<VirtualKLocalizedContext*>(self);
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        vklocalizedcontext->setKLocalizedContext_ChildEvent_IsBase(true);
        vklocalizedcontext->childEvent(event);
    } else {
        ((VirtualKLocalizedContext*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedContext_OnChildEvent(KLocalizedContext* self, intptr_t slot) {
    auto* vklocalizedcontext = dynamic_cast<VirtualKLocalizedContext*>(self);
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        vklocalizedcontext->setKLocalizedContext_ChildEvent_Callback(reinterpret_cast<VirtualKLocalizedContext::KLocalizedContext_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLocalizedContext_CustomEvent(KLocalizedContext* self, QEvent* event) {
    auto* vklocalizedcontext = dynamic_cast<VirtualKLocalizedContext*>(self);
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        vklocalizedcontext->customEvent(event);
    } else {
        ((VirtualKLocalizedContext*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KLocalizedContext_QBaseCustomEvent(KLocalizedContext* self, QEvent* event) {
    auto* vklocalizedcontext = dynamic_cast<VirtualKLocalizedContext*>(self);
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        vklocalizedcontext->setKLocalizedContext_CustomEvent_IsBase(true);
        vklocalizedcontext->customEvent(event);
    } else {
        ((VirtualKLocalizedContext*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedContext_OnCustomEvent(KLocalizedContext* self, intptr_t slot) {
    auto* vklocalizedcontext = dynamic_cast<VirtualKLocalizedContext*>(self);
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        vklocalizedcontext->setKLocalizedContext_CustomEvent_Callback(reinterpret_cast<VirtualKLocalizedContext::KLocalizedContext_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLocalizedContext_ConnectNotify(KLocalizedContext* self, const QMetaMethod* signal) {
    auto* vklocalizedcontext = dynamic_cast<VirtualKLocalizedContext*>(self);
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        vklocalizedcontext->connectNotify(*signal);
    } else {
        ((VirtualKLocalizedContext*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KLocalizedContext_QBaseConnectNotify(KLocalizedContext* self, const QMetaMethod* signal) {
    auto* vklocalizedcontext = dynamic_cast<VirtualKLocalizedContext*>(self);
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        vklocalizedcontext->setKLocalizedContext_ConnectNotify_IsBase(true);
        vklocalizedcontext->connectNotify(*signal);
    } else {
        ((VirtualKLocalizedContext*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedContext_OnConnectNotify(KLocalizedContext* self, intptr_t slot) {
    auto* vklocalizedcontext = dynamic_cast<VirtualKLocalizedContext*>(self);
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        vklocalizedcontext->setKLocalizedContext_ConnectNotify_Callback(reinterpret_cast<VirtualKLocalizedContext::KLocalizedContext_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KLocalizedContext_DisconnectNotify(KLocalizedContext* self, const QMetaMethod* signal) {
    auto* vklocalizedcontext = dynamic_cast<VirtualKLocalizedContext*>(self);
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        vklocalizedcontext->disconnectNotify(*signal);
    } else {
        ((VirtualKLocalizedContext*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KLocalizedContext_QBaseDisconnectNotify(KLocalizedContext* self, const QMetaMethod* signal) {
    auto* vklocalizedcontext = dynamic_cast<VirtualKLocalizedContext*>(self);
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        vklocalizedcontext->setKLocalizedContext_DisconnectNotify_IsBase(true);
        vklocalizedcontext->disconnectNotify(*signal);
    } else {
        ((VirtualKLocalizedContext*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedContext_OnDisconnectNotify(KLocalizedContext* self, intptr_t slot) {
    auto* vklocalizedcontext = dynamic_cast<VirtualKLocalizedContext*>(self);
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        vklocalizedcontext->setKLocalizedContext_DisconnectNotify_Callback(reinterpret_cast<VirtualKLocalizedContext::KLocalizedContext_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KLocalizedContext_Sender(const KLocalizedContext* self) {
    auto* vklocalizedcontext = const_cast<VirtualKLocalizedContext*>(dynamic_cast<const VirtualKLocalizedContext*>(self));
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        return vklocalizedcontext->sender();
    } else {
        return ((VirtualKLocalizedContext*)self)->sender();
    }
}

// Base class handler implementation
QObject* KLocalizedContext_QBaseSender(const KLocalizedContext* self) {
    auto* vklocalizedcontext = const_cast<VirtualKLocalizedContext*>(dynamic_cast<const VirtualKLocalizedContext*>(self));
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        vklocalizedcontext->setKLocalizedContext_Sender_IsBase(true);
        return vklocalizedcontext->sender();
    } else {
        return ((VirtualKLocalizedContext*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedContext_OnSender(const KLocalizedContext* self, intptr_t slot) {
    auto* vklocalizedcontext = const_cast<VirtualKLocalizedContext*>(dynamic_cast<const VirtualKLocalizedContext*>(self));
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        vklocalizedcontext->setKLocalizedContext_Sender_Callback(reinterpret_cast<VirtualKLocalizedContext::KLocalizedContext_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KLocalizedContext_SenderSignalIndex(const KLocalizedContext* self) {
    auto* vklocalizedcontext = const_cast<VirtualKLocalizedContext*>(dynamic_cast<const VirtualKLocalizedContext*>(self));
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        return vklocalizedcontext->senderSignalIndex();
    } else {
        return ((VirtualKLocalizedContext*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KLocalizedContext_QBaseSenderSignalIndex(const KLocalizedContext* self) {
    auto* vklocalizedcontext = const_cast<VirtualKLocalizedContext*>(dynamic_cast<const VirtualKLocalizedContext*>(self));
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        vklocalizedcontext->setKLocalizedContext_SenderSignalIndex_IsBase(true);
        return vklocalizedcontext->senderSignalIndex();
    } else {
        return ((VirtualKLocalizedContext*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedContext_OnSenderSignalIndex(const KLocalizedContext* self, intptr_t slot) {
    auto* vklocalizedcontext = const_cast<VirtualKLocalizedContext*>(dynamic_cast<const VirtualKLocalizedContext*>(self));
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        vklocalizedcontext->setKLocalizedContext_SenderSignalIndex_Callback(reinterpret_cast<VirtualKLocalizedContext::KLocalizedContext_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KLocalizedContext_Receivers(const KLocalizedContext* self, const char* signal) {
    auto* vklocalizedcontext = const_cast<VirtualKLocalizedContext*>(dynamic_cast<const VirtualKLocalizedContext*>(self));
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        return vklocalizedcontext->receivers(signal);
    } else {
        return ((VirtualKLocalizedContext*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KLocalizedContext_QBaseReceivers(const KLocalizedContext* self, const char* signal) {
    auto* vklocalizedcontext = const_cast<VirtualKLocalizedContext*>(dynamic_cast<const VirtualKLocalizedContext*>(self));
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        vklocalizedcontext->setKLocalizedContext_Receivers_IsBase(true);
        return vklocalizedcontext->receivers(signal);
    } else {
        return ((VirtualKLocalizedContext*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedContext_OnReceivers(const KLocalizedContext* self, intptr_t slot) {
    auto* vklocalizedcontext = const_cast<VirtualKLocalizedContext*>(dynamic_cast<const VirtualKLocalizedContext*>(self));
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        vklocalizedcontext->setKLocalizedContext_Receivers_Callback(reinterpret_cast<VirtualKLocalizedContext::KLocalizedContext_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLocalizedContext_IsSignalConnected(const KLocalizedContext* self, const QMetaMethod* signal) {
    auto* vklocalizedcontext = const_cast<VirtualKLocalizedContext*>(dynamic_cast<const VirtualKLocalizedContext*>(self));
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        return vklocalizedcontext->isSignalConnected(*signal);
    } else {
        return ((VirtualKLocalizedContext*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KLocalizedContext_QBaseIsSignalConnected(const KLocalizedContext* self, const QMetaMethod* signal) {
    auto* vklocalizedcontext = const_cast<VirtualKLocalizedContext*>(dynamic_cast<const VirtualKLocalizedContext*>(self));
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        vklocalizedcontext->setKLocalizedContext_IsSignalConnected_IsBase(true);
        return vklocalizedcontext->isSignalConnected(*signal);
    } else {
        return ((VirtualKLocalizedContext*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedContext_OnIsSignalConnected(const KLocalizedContext* self, intptr_t slot) {
    auto* vklocalizedcontext = const_cast<VirtualKLocalizedContext*>(dynamic_cast<const VirtualKLocalizedContext*>(self));
    if (vklocalizedcontext && vklocalizedcontext->isVirtualKLocalizedContext) {
        vklocalizedcontext->setKLocalizedContext_IsSignalConnected_Callback(reinterpret_cast<VirtualKLocalizedContext::KLocalizedContext_IsSignalConnected_Callback>(slot));
    }
}

void KLocalizedContext_Delete(KLocalizedContext* self) {
    delete self;
}
