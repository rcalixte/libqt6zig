#include <KLocalization>
#include <KLocalizedQmlContext>
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
#include <klocalizedqmlcontext.h>
#include "libklocalizedqmlcontext.h"
#include "libklocalizedqmlcontext.hxx"

KLocalizedQmlContext* KLocalizedQmlContext_new() {
    return new VirtualKLocalizedQmlContext();
}

KLocalizedQmlContext* KLocalizedQmlContext_new2(QObject* parent) {
    return new VirtualKLocalizedQmlContext(parent);
}

QMetaObject* KLocalizedQmlContext_MetaObject(const KLocalizedQmlContext* self) {
    return (QMetaObject*)self->metaObject();
}

void* KLocalizedQmlContext_Metacast(KLocalizedQmlContext* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KLocalizedQmlContext_Metacall(KLocalizedQmlContext* self, int param1, int param2, void** param3) {
    auto* vklocalizedqmlcontext = dynamic_cast<VirtualKLocalizedQmlContext*>(self);
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKLocalizedQmlContext*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KLocalizedQmlContext_OnMetacall(KLocalizedQmlContext* self, intptr_t slot) {
    auto* vklocalizedqmlcontext = dynamic_cast<VirtualKLocalizedQmlContext*>(self);
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        vklocalizedqmlcontext->setKLocalizedQmlContext_Metacall_Callback(reinterpret_cast<VirtualKLocalizedQmlContext::KLocalizedQmlContext_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KLocalizedQmlContext_QBaseMetacall(KLocalizedQmlContext* self, int param1, int param2, void** param3) {
    auto* vklocalizedqmlcontext = dynamic_cast<VirtualKLocalizedQmlContext*>(self);
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        vklocalizedqmlcontext->setKLocalizedQmlContext_Metacall_IsBase(true);
        return vklocalizedqmlcontext->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKLocalizedQmlContext*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KLocalizedQmlContext_Tr(const char* s) {
    QString _ret = KLocalizedQmlContext::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedQmlContext_TranslationDomain(const KLocalizedQmlContext* self) {
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

void KLocalizedQmlContext_SetTranslationDomain(KLocalizedQmlContext* self, const libqt_string domain) {
    QString domain_QString = QString::fromUtf8(domain.data, domain.len);
    self->setTranslationDomain(domain_QString);
}

libqt_string KLocalizedQmlContext_I18n(const KLocalizedQmlContext* self, const libqt_string message) {
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

libqt_string KLocalizedQmlContext_I18nc(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string message) {
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

libqt_string KLocalizedQmlContext_I18np(const KLocalizedQmlContext* self, const libqt_string singular, const libqt_string plural) {
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

libqt_string KLocalizedQmlContext_I18ncp(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural) {
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

libqt_string KLocalizedQmlContext_I18nd(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string message) {
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

libqt_string KLocalizedQmlContext_I18ndc(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string message) {
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

libqt_string KLocalizedQmlContext_I18ndp(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural) {
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

libqt_string KLocalizedQmlContext_I18ndcp(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural) {
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

libqt_string KLocalizedQmlContext_Xi18n(const KLocalizedQmlContext* self, const libqt_string message) {
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

libqt_string KLocalizedQmlContext_Xi18nc(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string message) {
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

libqt_string KLocalizedQmlContext_Xi18np(const KLocalizedQmlContext* self, const libqt_string singular, const libqt_string plural) {
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

libqt_string KLocalizedQmlContext_Xi18ncp(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural) {
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

libqt_string KLocalizedQmlContext_Xi18nd(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string message) {
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

libqt_string KLocalizedQmlContext_Xi18ndc(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string message) {
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

libqt_string KLocalizedQmlContext_Xi18ndp(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural) {
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

libqt_string KLocalizedQmlContext_Xi18ndcp(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural) {
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

void KLocalizedQmlContext_TranslationDomainChanged(KLocalizedQmlContext* self, const libqt_string translationDomain) {
    QString translationDomain_QString = QString::fromUtf8(translationDomain.data, translationDomain.len);
    self->translationDomainChanged(translationDomain_QString);
}

void KLocalizedQmlContext_Connect_TranslationDomainChanged(KLocalizedQmlContext* self, intptr_t slot) {
    void (*slotFunc)(KLocalizedQmlContext*, const char*) = reinterpret_cast<void (*)(KLocalizedQmlContext*, const char*)>(slot);
    KLocalizedQmlContext::connect(self, &KLocalizedQmlContext::translationDomainChanged, [self, slotFunc](const QString& translationDomain) {
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

libqt_string KLocalizedQmlContext_Tr2(const char* s, const char* c) {
    QString _ret = KLocalizedQmlContext::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedQmlContext_Tr3(const char* s, const char* c, int n) {
    QString _ret = KLocalizedQmlContext::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLocalizedQmlContext_I18n2(const KLocalizedQmlContext* self, const libqt_string message, const QVariant* param1) {
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

libqt_string KLocalizedQmlContext_I18n3(const KLocalizedQmlContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2) {
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

libqt_string KLocalizedQmlContext_I18n4(const KLocalizedQmlContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
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

libqt_string KLocalizedQmlContext_I18n5(const KLocalizedQmlContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
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

libqt_string KLocalizedQmlContext_I18n6(const KLocalizedQmlContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
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

libqt_string KLocalizedQmlContext_I18n7(const KLocalizedQmlContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
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

libqt_string KLocalizedQmlContext_I18n8(const KLocalizedQmlContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
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

libqt_string KLocalizedQmlContext_I18n9(const KLocalizedQmlContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
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

libqt_string KLocalizedQmlContext_I18n10(const KLocalizedQmlContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
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

libqt_string KLocalizedQmlContext_I18n11(const KLocalizedQmlContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
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

libqt_string KLocalizedQmlContext_I18nc3(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string message, const QVariant* param1) {
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

libqt_string KLocalizedQmlContext_I18nc4(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2) {
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

libqt_string KLocalizedQmlContext_I18nc5(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
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

libqt_string KLocalizedQmlContext_I18nc6(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
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

libqt_string KLocalizedQmlContext_I18nc7(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
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

libqt_string KLocalizedQmlContext_I18nc8(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
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

libqt_string KLocalizedQmlContext_I18nc9(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
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

libqt_string KLocalizedQmlContext_I18nc10(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
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

libqt_string KLocalizedQmlContext_I18nc11(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
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

libqt_string KLocalizedQmlContext_I18nc12(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
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

libqt_string KLocalizedQmlContext_I18np3(const KLocalizedQmlContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1) {
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

libqt_string KLocalizedQmlContext_I18np4(const KLocalizedQmlContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2) {
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

libqt_string KLocalizedQmlContext_I18np5(const KLocalizedQmlContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
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

libqt_string KLocalizedQmlContext_I18np6(const KLocalizedQmlContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
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

libqt_string KLocalizedQmlContext_I18np7(const KLocalizedQmlContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
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

libqt_string KLocalizedQmlContext_I18np8(const KLocalizedQmlContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
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

libqt_string KLocalizedQmlContext_I18np9(const KLocalizedQmlContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
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

libqt_string KLocalizedQmlContext_I18np10(const KLocalizedQmlContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
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

libqt_string KLocalizedQmlContext_I18np11(const KLocalizedQmlContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
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

libqt_string KLocalizedQmlContext_I18np12(const KLocalizedQmlContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
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

libqt_string KLocalizedQmlContext_I18ncp4(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1) {
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

libqt_string KLocalizedQmlContext_I18ncp5(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2) {
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

libqt_string KLocalizedQmlContext_I18ncp6(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
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

libqt_string KLocalizedQmlContext_I18ncp7(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
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

libqt_string KLocalizedQmlContext_I18ncp8(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
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

libqt_string KLocalizedQmlContext_I18ncp9(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
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

libqt_string KLocalizedQmlContext_I18ncp10(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
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

libqt_string KLocalizedQmlContext_I18ncp11(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
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

libqt_string KLocalizedQmlContext_I18ncp12(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
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

libqt_string KLocalizedQmlContext_I18ncp13(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
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

libqt_string KLocalizedQmlContext_I18nd3(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1) {
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

libqt_string KLocalizedQmlContext_I18nd4(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2) {
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

libqt_string KLocalizedQmlContext_I18nd5(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
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

libqt_string KLocalizedQmlContext_I18nd6(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
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

libqt_string KLocalizedQmlContext_I18nd7(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
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

libqt_string KLocalizedQmlContext_I18nd8(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
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

libqt_string KLocalizedQmlContext_I18nd9(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
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

libqt_string KLocalizedQmlContext_I18nd10(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
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

libqt_string KLocalizedQmlContext_I18nd11(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
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

libqt_string KLocalizedQmlContext_I18nd12(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
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

libqt_string KLocalizedQmlContext_I18ndc4(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1) {
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

libqt_string KLocalizedQmlContext_I18ndc5(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2) {
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

libqt_string KLocalizedQmlContext_I18ndc6(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
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

libqt_string KLocalizedQmlContext_I18ndc7(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
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

libqt_string KLocalizedQmlContext_I18ndc8(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
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

libqt_string KLocalizedQmlContext_I18ndc9(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
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

libqt_string KLocalizedQmlContext_I18ndc10(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
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

libqt_string KLocalizedQmlContext_I18ndc11(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
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

libqt_string KLocalizedQmlContext_I18ndc12(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
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

libqt_string KLocalizedQmlContext_I18ndc13(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
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

libqt_string KLocalizedQmlContext_I18ndp4(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1) {
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

libqt_string KLocalizedQmlContext_I18ndp5(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2) {
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

libqt_string KLocalizedQmlContext_I18ndp6(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
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

libqt_string KLocalizedQmlContext_I18ndp7(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
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

libqt_string KLocalizedQmlContext_I18ndp8(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
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

libqt_string KLocalizedQmlContext_I18ndp9(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
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

libqt_string KLocalizedQmlContext_I18ndp10(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
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

libqt_string KLocalizedQmlContext_I18ndp11(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
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

libqt_string KLocalizedQmlContext_I18ndp12(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
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

libqt_string KLocalizedQmlContext_I18ndp13(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
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

libqt_string KLocalizedQmlContext_I18ndcp5(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1) {
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

libqt_string KLocalizedQmlContext_I18ndcp6(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2) {
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

libqt_string KLocalizedQmlContext_I18ndcp7(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
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

libqt_string KLocalizedQmlContext_I18ndcp8(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
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

libqt_string KLocalizedQmlContext_I18ndcp9(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
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

libqt_string KLocalizedQmlContext_I18ndcp10(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
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

libqt_string KLocalizedQmlContext_I18ndcp11(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
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

libqt_string KLocalizedQmlContext_I18ndcp12(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
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

libqt_string KLocalizedQmlContext_I18ndcp13(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
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

libqt_string KLocalizedQmlContext_I18ndcp14(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
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

libqt_string KLocalizedQmlContext_Xi18n2(const KLocalizedQmlContext* self, const libqt_string message, const QVariant* param1) {
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

libqt_string KLocalizedQmlContext_Xi18n3(const KLocalizedQmlContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2) {
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

libqt_string KLocalizedQmlContext_Xi18n4(const KLocalizedQmlContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
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

libqt_string KLocalizedQmlContext_Xi18n5(const KLocalizedQmlContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
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

libqt_string KLocalizedQmlContext_Xi18n6(const KLocalizedQmlContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
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

libqt_string KLocalizedQmlContext_Xi18n7(const KLocalizedQmlContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
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

libqt_string KLocalizedQmlContext_Xi18n8(const KLocalizedQmlContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
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

libqt_string KLocalizedQmlContext_Xi18n9(const KLocalizedQmlContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
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

libqt_string KLocalizedQmlContext_Xi18n10(const KLocalizedQmlContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
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

libqt_string KLocalizedQmlContext_Xi18n11(const KLocalizedQmlContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
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

libqt_string KLocalizedQmlContext_Xi18nc3(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string message, const QVariant* param1) {
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

libqt_string KLocalizedQmlContext_Xi18nc4(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2) {
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

libqt_string KLocalizedQmlContext_Xi18nc5(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
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

libqt_string KLocalizedQmlContext_Xi18nc6(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
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

libqt_string KLocalizedQmlContext_Xi18nc7(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
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

libqt_string KLocalizedQmlContext_Xi18nc8(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
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

libqt_string KLocalizedQmlContext_Xi18nc9(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
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

libqt_string KLocalizedQmlContext_Xi18nc10(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
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

libqt_string KLocalizedQmlContext_Xi18nc11(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
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

libqt_string KLocalizedQmlContext_Xi18nc12(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
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

libqt_string KLocalizedQmlContext_Xi18np3(const KLocalizedQmlContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1) {
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

libqt_string KLocalizedQmlContext_Xi18np4(const KLocalizedQmlContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2) {
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

libqt_string KLocalizedQmlContext_Xi18np5(const KLocalizedQmlContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
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

libqt_string KLocalizedQmlContext_Xi18np6(const KLocalizedQmlContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
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

libqt_string KLocalizedQmlContext_Xi18np7(const KLocalizedQmlContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
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

libqt_string KLocalizedQmlContext_Xi18np8(const KLocalizedQmlContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
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

libqt_string KLocalizedQmlContext_Xi18np9(const KLocalizedQmlContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
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

libqt_string KLocalizedQmlContext_Xi18np10(const KLocalizedQmlContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
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

libqt_string KLocalizedQmlContext_Xi18np11(const KLocalizedQmlContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
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

libqt_string KLocalizedQmlContext_Xi18np12(const KLocalizedQmlContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
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

libqt_string KLocalizedQmlContext_Xi18ncp4(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1) {
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

libqt_string KLocalizedQmlContext_Xi18ncp5(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2) {
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

libqt_string KLocalizedQmlContext_Xi18ncp6(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
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

libqt_string KLocalizedQmlContext_Xi18ncp7(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
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

libqt_string KLocalizedQmlContext_Xi18ncp8(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
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

libqt_string KLocalizedQmlContext_Xi18ncp9(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
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

libqt_string KLocalizedQmlContext_Xi18ncp10(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
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

libqt_string KLocalizedQmlContext_Xi18ncp11(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
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

libqt_string KLocalizedQmlContext_Xi18ncp12(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
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

libqt_string KLocalizedQmlContext_Xi18ncp13(const KLocalizedQmlContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
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

libqt_string KLocalizedQmlContext_Xi18nd3(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1) {
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

libqt_string KLocalizedQmlContext_Xi18nd4(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2) {
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

libqt_string KLocalizedQmlContext_Xi18nd5(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
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

libqt_string KLocalizedQmlContext_Xi18nd6(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
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

libqt_string KLocalizedQmlContext_Xi18nd7(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
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

libqt_string KLocalizedQmlContext_Xi18nd8(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
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

libqt_string KLocalizedQmlContext_Xi18nd9(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
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

libqt_string KLocalizedQmlContext_Xi18nd10(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
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

libqt_string KLocalizedQmlContext_Xi18nd11(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
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

libqt_string KLocalizedQmlContext_Xi18nd12(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
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

libqt_string KLocalizedQmlContext_Xi18ndc4(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1) {
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

libqt_string KLocalizedQmlContext_Xi18ndc5(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2) {
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

libqt_string KLocalizedQmlContext_Xi18ndc6(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
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

libqt_string KLocalizedQmlContext_Xi18ndc7(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
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

libqt_string KLocalizedQmlContext_Xi18ndc8(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
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

libqt_string KLocalizedQmlContext_Xi18ndc9(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
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

libqt_string KLocalizedQmlContext_Xi18ndc10(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
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

libqt_string KLocalizedQmlContext_Xi18ndc11(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
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

libqt_string KLocalizedQmlContext_Xi18ndc12(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
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

libqt_string KLocalizedQmlContext_Xi18ndc13(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
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

libqt_string KLocalizedQmlContext_Xi18ndp4(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1) {
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

libqt_string KLocalizedQmlContext_Xi18ndp5(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2) {
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

libqt_string KLocalizedQmlContext_Xi18ndp6(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
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

libqt_string KLocalizedQmlContext_Xi18ndp7(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
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

libqt_string KLocalizedQmlContext_Xi18ndp8(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
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

libqt_string KLocalizedQmlContext_Xi18ndp9(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
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

libqt_string KLocalizedQmlContext_Xi18ndp10(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
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

libqt_string KLocalizedQmlContext_Xi18ndp11(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
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

libqt_string KLocalizedQmlContext_Xi18ndp12(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
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

libqt_string KLocalizedQmlContext_Xi18ndp13(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
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

libqt_string KLocalizedQmlContext_Xi18ndcp5(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1) {
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

libqt_string KLocalizedQmlContext_Xi18ndcp6(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2) {
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

libqt_string KLocalizedQmlContext_Xi18ndcp7(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3) {
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

libqt_string KLocalizedQmlContext_Xi18ndcp8(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4) {
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

libqt_string KLocalizedQmlContext_Xi18ndcp9(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5) {
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

libqt_string KLocalizedQmlContext_Xi18ndcp10(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6) {
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

libqt_string KLocalizedQmlContext_Xi18ndcp11(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7) {
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

libqt_string KLocalizedQmlContext_Xi18ndcp12(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8) {
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

libqt_string KLocalizedQmlContext_Xi18ndcp13(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9) {
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

libqt_string KLocalizedQmlContext_Xi18ndcp14(const KLocalizedQmlContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10) {
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

// Derived class handler implementation
bool KLocalizedQmlContext_Event(KLocalizedQmlContext* self, QEvent* event) {
    auto* vklocalizedqmlcontext = dynamic_cast<VirtualKLocalizedQmlContext*>(self);
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        return vklocalizedqmlcontext->event(event);
    } else {
        return self->KLocalizedQmlContext::event(event);
    }
}

// Base class handler implementation
bool KLocalizedQmlContext_QBaseEvent(KLocalizedQmlContext* self, QEvent* event) {
    auto* vklocalizedqmlcontext = dynamic_cast<VirtualKLocalizedQmlContext*>(self);
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        vklocalizedqmlcontext->setKLocalizedQmlContext_Event_IsBase(true);
        return vklocalizedqmlcontext->event(event);
    } else {
        return self->KLocalizedQmlContext::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedQmlContext_OnEvent(KLocalizedQmlContext* self, intptr_t slot) {
    auto* vklocalizedqmlcontext = dynamic_cast<VirtualKLocalizedQmlContext*>(self);
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        vklocalizedqmlcontext->setKLocalizedQmlContext_Event_Callback(reinterpret_cast<VirtualKLocalizedQmlContext::KLocalizedQmlContext_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KLocalizedQmlContext_TimerEvent(KLocalizedQmlContext* self, QTimerEvent* event) {
    auto* vklocalizedqmlcontext = dynamic_cast<VirtualKLocalizedQmlContext*>(self);
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        vklocalizedqmlcontext->timerEvent(event);
    } else {
        ((VirtualKLocalizedQmlContext*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KLocalizedQmlContext_QBaseTimerEvent(KLocalizedQmlContext* self, QTimerEvent* event) {
    auto* vklocalizedqmlcontext = dynamic_cast<VirtualKLocalizedQmlContext*>(self);
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        vklocalizedqmlcontext->setKLocalizedQmlContext_TimerEvent_IsBase(true);
        vklocalizedqmlcontext->timerEvent(event);
    } else {
        ((VirtualKLocalizedQmlContext*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedQmlContext_OnTimerEvent(KLocalizedQmlContext* self, intptr_t slot) {
    auto* vklocalizedqmlcontext = dynamic_cast<VirtualKLocalizedQmlContext*>(self);
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        vklocalizedqmlcontext->setKLocalizedQmlContext_TimerEvent_Callback(reinterpret_cast<VirtualKLocalizedQmlContext::KLocalizedQmlContext_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLocalizedQmlContext_ChildEvent(KLocalizedQmlContext* self, QChildEvent* event) {
    auto* vklocalizedqmlcontext = dynamic_cast<VirtualKLocalizedQmlContext*>(self);
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        vklocalizedqmlcontext->childEvent(event);
    } else {
        ((VirtualKLocalizedQmlContext*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KLocalizedQmlContext_QBaseChildEvent(KLocalizedQmlContext* self, QChildEvent* event) {
    auto* vklocalizedqmlcontext = dynamic_cast<VirtualKLocalizedQmlContext*>(self);
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        vklocalizedqmlcontext->setKLocalizedQmlContext_ChildEvent_IsBase(true);
        vklocalizedqmlcontext->childEvent(event);
    } else {
        ((VirtualKLocalizedQmlContext*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedQmlContext_OnChildEvent(KLocalizedQmlContext* self, intptr_t slot) {
    auto* vklocalizedqmlcontext = dynamic_cast<VirtualKLocalizedQmlContext*>(self);
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        vklocalizedqmlcontext->setKLocalizedQmlContext_ChildEvent_Callback(reinterpret_cast<VirtualKLocalizedQmlContext::KLocalizedQmlContext_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLocalizedQmlContext_CustomEvent(KLocalizedQmlContext* self, QEvent* event) {
    auto* vklocalizedqmlcontext = dynamic_cast<VirtualKLocalizedQmlContext*>(self);
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        vklocalizedqmlcontext->customEvent(event);
    } else {
        ((VirtualKLocalizedQmlContext*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KLocalizedQmlContext_QBaseCustomEvent(KLocalizedQmlContext* self, QEvent* event) {
    auto* vklocalizedqmlcontext = dynamic_cast<VirtualKLocalizedQmlContext*>(self);
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        vklocalizedqmlcontext->setKLocalizedQmlContext_CustomEvent_IsBase(true);
        vklocalizedqmlcontext->customEvent(event);
    } else {
        ((VirtualKLocalizedQmlContext*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedQmlContext_OnCustomEvent(KLocalizedQmlContext* self, intptr_t slot) {
    auto* vklocalizedqmlcontext = dynamic_cast<VirtualKLocalizedQmlContext*>(self);
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        vklocalizedqmlcontext->setKLocalizedQmlContext_CustomEvent_Callback(reinterpret_cast<VirtualKLocalizedQmlContext::KLocalizedQmlContext_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLocalizedQmlContext_ConnectNotify(KLocalizedQmlContext* self, const QMetaMethod* signal) {
    auto* vklocalizedqmlcontext = dynamic_cast<VirtualKLocalizedQmlContext*>(self);
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        vklocalizedqmlcontext->connectNotify(*signal);
    } else {
        ((VirtualKLocalizedQmlContext*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KLocalizedQmlContext_QBaseConnectNotify(KLocalizedQmlContext* self, const QMetaMethod* signal) {
    auto* vklocalizedqmlcontext = dynamic_cast<VirtualKLocalizedQmlContext*>(self);
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        vklocalizedqmlcontext->setKLocalizedQmlContext_ConnectNotify_IsBase(true);
        vklocalizedqmlcontext->connectNotify(*signal);
    } else {
        ((VirtualKLocalizedQmlContext*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedQmlContext_OnConnectNotify(KLocalizedQmlContext* self, intptr_t slot) {
    auto* vklocalizedqmlcontext = dynamic_cast<VirtualKLocalizedQmlContext*>(self);
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        vklocalizedqmlcontext->setKLocalizedQmlContext_ConnectNotify_Callback(reinterpret_cast<VirtualKLocalizedQmlContext::KLocalizedQmlContext_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KLocalizedQmlContext_DisconnectNotify(KLocalizedQmlContext* self, const QMetaMethod* signal) {
    auto* vklocalizedqmlcontext = dynamic_cast<VirtualKLocalizedQmlContext*>(self);
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        vklocalizedqmlcontext->disconnectNotify(*signal);
    } else {
        ((VirtualKLocalizedQmlContext*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KLocalizedQmlContext_QBaseDisconnectNotify(KLocalizedQmlContext* self, const QMetaMethod* signal) {
    auto* vklocalizedqmlcontext = dynamic_cast<VirtualKLocalizedQmlContext*>(self);
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        vklocalizedqmlcontext->setKLocalizedQmlContext_DisconnectNotify_IsBase(true);
        vklocalizedqmlcontext->disconnectNotify(*signal);
    } else {
        ((VirtualKLocalizedQmlContext*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedQmlContext_OnDisconnectNotify(KLocalizedQmlContext* self, intptr_t slot) {
    auto* vklocalizedqmlcontext = dynamic_cast<VirtualKLocalizedQmlContext*>(self);
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        vklocalizedqmlcontext->setKLocalizedQmlContext_DisconnectNotify_Callback(reinterpret_cast<VirtualKLocalizedQmlContext::KLocalizedQmlContext_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KLocalizedQmlContext_Sender(const KLocalizedQmlContext* self) {
    auto* vklocalizedqmlcontext = const_cast<VirtualKLocalizedQmlContext*>(dynamic_cast<const VirtualKLocalizedQmlContext*>(self));
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        return vklocalizedqmlcontext->sender();
    } else {
        return ((VirtualKLocalizedQmlContext*)self)->sender();
    }
}

// Base class handler implementation
QObject* KLocalizedQmlContext_QBaseSender(const KLocalizedQmlContext* self) {
    auto* vklocalizedqmlcontext = const_cast<VirtualKLocalizedQmlContext*>(dynamic_cast<const VirtualKLocalizedQmlContext*>(self));
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        vklocalizedqmlcontext->setKLocalizedQmlContext_Sender_IsBase(true);
        return vklocalizedqmlcontext->sender();
    } else {
        return ((VirtualKLocalizedQmlContext*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedQmlContext_OnSender(const KLocalizedQmlContext* self, intptr_t slot) {
    auto* vklocalizedqmlcontext = const_cast<VirtualKLocalizedQmlContext*>(dynamic_cast<const VirtualKLocalizedQmlContext*>(self));
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        vklocalizedqmlcontext->setKLocalizedQmlContext_Sender_Callback(reinterpret_cast<VirtualKLocalizedQmlContext::KLocalizedQmlContext_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KLocalizedQmlContext_SenderSignalIndex(const KLocalizedQmlContext* self) {
    auto* vklocalizedqmlcontext = const_cast<VirtualKLocalizedQmlContext*>(dynamic_cast<const VirtualKLocalizedQmlContext*>(self));
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        return vklocalizedqmlcontext->senderSignalIndex();
    } else {
        return ((VirtualKLocalizedQmlContext*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KLocalizedQmlContext_QBaseSenderSignalIndex(const KLocalizedQmlContext* self) {
    auto* vklocalizedqmlcontext = const_cast<VirtualKLocalizedQmlContext*>(dynamic_cast<const VirtualKLocalizedQmlContext*>(self));
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        vklocalizedqmlcontext->setKLocalizedQmlContext_SenderSignalIndex_IsBase(true);
        return vklocalizedqmlcontext->senderSignalIndex();
    } else {
        return ((VirtualKLocalizedQmlContext*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedQmlContext_OnSenderSignalIndex(const KLocalizedQmlContext* self, intptr_t slot) {
    auto* vklocalizedqmlcontext = const_cast<VirtualKLocalizedQmlContext*>(dynamic_cast<const VirtualKLocalizedQmlContext*>(self));
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        vklocalizedqmlcontext->setKLocalizedQmlContext_SenderSignalIndex_Callback(reinterpret_cast<VirtualKLocalizedQmlContext::KLocalizedQmlContext_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KLocalizedQmlContext_Receivers(const KLocalizedQmlContext* self, const char* signal) {
    auto* vklocalizedqmlcontext = const_cast<VirtualKLocalizedQmlContext*>(dynamic_cast<const VirtualKLocalizedQmlContext*>(self));
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        return vklocalizedqmlcontext->receivers(signal);
    } else {
        return ((VirtualKLocalizedQmlContext*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KLocalizedQmlContext_QBaseReceivers(const KLocalizedQmlContext* self, const char* signal) {
    auto* vklocalizedqmlcontext = const_cast<VirtualKLocalizedQmlContext*>(dynamic_cast<const VirtualKLocalizedQmlContext*>(self));
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        vklocalizedqmlcontext->setKLocalizedQmlContext_Receivers_IsBase(true);
        return vklocalizedqmlcontext->receivers(signal);
    } else {
        return ((VirtualKLocalizedQmlContext*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedQmlContext_OnReceivers(const KLocalizedQmlContext* self, intptr_t slot) {
    auto* vklocalizedqmlcontext = const_cast<VirtualKLocalizedQmlContext*>(dynamic_cast<const VirtualKLocalizedQmlContext*>(self));
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        vklocalizedqmlcontext->setKLocalizedQmlContext_Receivers_Callback(reinterpret_cast<VirtualKLocalizedQmlContext::KLocalizedQmlContext_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLocalizedQmlContext_IsSignalConnected(const KLocalizedQmlContext* self, const QMetaMethod* signal) {
    auto* vklocalizedqmlcontext = const_cast<VirtualKLocalizedQmlContext*>(dynamic_cast<const VirtualKLocalizedQmlContext*>(self));
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        return vklocalizedqmlcontext->isSignalConnected(*signal);
    } else {
        return ((VirtualKLocalizedQmlContext*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KLocalizedQmlContext_QBaseIsSignalConnected(const KLocalizedQmlContext* self, const QMetaMethod* signal) {
    auto* vklocalizedqmlcontext = const_cast<VirtualKLocalizedQmlContext*>(dynamic_cast<const VirtualKLocalizedQmlContext*>(self));
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        vklocalizedqmlcontext->setKLocalizedQmlContext_IsSignalConnected_IsBase(true);
        return vklocalizedqmlcontext->isSignalConnected(*signal);
    } else {
        return ((VirtualKLocalizedQmlContext*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLocalizedQmlContext_OnIsSignalConnected(const KLocalizedQmlContext* self, intptr_t slot) {
    auto* vklocalizedqmlcontext = const_cast<VirtualKLocalizedQmlContext*>(dynamic_cast<const VirtualKLocalizedQmlContext*>(self));
    if (vklocalizedqmlcontext && vklocalizedqmlcontext->isVirtualKLocalizedQmlContext) {
        vklocalizedqmlcontext->setKLocalizedQmlContext_IsSignalConnected_Callback(reinterpret_cast<VirtualKLocalizedQmlContext::KLocalizedQmlContext_IsSignalConnected_Callback>(slot));
    }
}

void KLocalizedQmlContext_Delete(KLocalizedQmlContext* self) {
    delete self;
}
