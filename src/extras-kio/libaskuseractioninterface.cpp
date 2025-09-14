#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__AskUserActionInterface
#include <KJob>
#include <QDateTime>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QVariant>
#include <QWidget>
#include <askuseractioninterface.h>
#include "libaskuseractioninterface.h"
#include "libaskuseractioninterface.hxx"

QMetaObject* KIO__AskUserActionInterface_MetaObject(const KIO__AskUserActionInterface* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__AskUserActionInterface_Metacast(KIO__AskUserActionInterface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__AskUserActionInterface_Metacall(KIO__AskUserActionInterface* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__AskUserActionInterface_Tr(const char* s) {
    QString _ret = KIO::AskUserActionInterface::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__AskUserActionInterface_AskUserRename(KIO__AskUserActionInterface* self, KJob* job, const libqt_string title, const QUrl* src, const QUrl* dest, int options, unsigned long long sizeSrc, unsigned long long sizeDest, const QDateTime* ctimeSrc, const QDateTime* ctimeDest, const QDateTime* mtimeSrc, const QDateTime* mtimeDest) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->askUserRename(job, title_QString, *src, *dest, static_cast<KIO::RenameDialog_Options>(options), static_cast<KIO::filesize_t>(sizeSrc), static_cast<KIO::filesize_t>(sizeDest), *ctimeSrc, *ctimeDest, *mtimeSrc, *mtimeDest);
}

void KIO__AskUserActionInterface_AskUserSkip(KIO__AskUserActionInterface* self, KJob* job, int options, const libqt_string errorText) {
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    self->askUserSkip(job, static_cast<KIO::SkipDialog_Options>(options), errorText_QString);
}

void KIO__AskUserActionInterface_AskUserDelete(KIO__AskUserActionInterface* self, const libqt_list /* of QUrl* */ urls, int deletionType, int confirmationType, QWidget* parent) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    self->askUserDelete(urls_QList, static_cast<KIO::AskUserActionInterface::DeletionType>(deletionType), static_cast<KIO::AskUserActionInterface::ConfirmationType>(confirmationType), parent);
}

void KIO__AskUserActionInterface_RequestUserMessageBox(KIO__AskUserActionInterface* self, int typeVal, const libqt_string text, const libqt_string title, const libqt_string primaryActionText, const libqt_string secondatyActionText, const libqt_string primaryActionIconName, const libqt_string secondatyActionIconName, const libqt_string dontAskAgainName, const libqt_string details, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString primaryActionText_QString = QString::fromUtf8(primaryActionText.data, primaryActionText.len);
    QString secondatyActionText_QString = QString::fromUtf8(secondatyActionText.data, secondatyActionText.len);
    QString primaryActionIconName_QString = QString::fromUtf8(primaryActionIconName.data, primaryActionIconName.len);
    QString secondatyActionIconName_QString = QString::fromUtf8(secondatyActionIconName.data, secondatyActionIconName.len);
    QString dontAskAgainName_QString = QString::fromUtf8(dontAskAgainName.data, dontAskAgainName.len);
    QString details_QString = QString::fromUtf8(details.data, details.len);
    self->requestUserMessageBox(static_cast<KIO::AskUserActionInterface::MessageDialogType>(typeVal), text_QString, title_QString, primaryActionText_QString, secondatyActionText_QString, primaryActionIconName_QString, secondatyActionIconName_QString, dontAskAgainName_QString, details_QString, parent);
}

void KIO__AskUserActionInterface_AskIgnoreSslErrors(KIO__AskUserActionInterface* self, const libqt_map /* of libqt_string to QVariant* */ sslErrorData, QWidget* parent) {
    QMap<QString, QVariant> sslErrorData_QMap;
    libqt_string* sslErrorData_karr = static_cast<libqt_string*>(sslErrorData.keys);
    QVariant** sslErrorData_varr = static_cast<QVariant**>(sslErrorData.values);
    for (size_t i = 0; i < sslErrorData.len; ++i) {
        QString sslErrorData_karr_i_QString = QString::fromUtf8(sslErrorData_karr[i].data, sslErrorData_karr[i].len);
        sslErrorData_QMap[sslErrorData_karr_i_QString] = *(sslErrorData_varr[i]);
    }
    self->askIgnoreSslErrors(sslErrorData_QMap, parent);
}

void KIO__AskUserActionInterface_AskUserRenameResult(KIO__AskUserActionInterface* self, int result, const QUrl* newUrl, KJob* parentJob) {
    self->askUserRenameResult(static_cast<KIO::RenameDialog_Result>(result), *newUrl, parentJob);
}

void KIO__AskUserActionInterface_Connect_AskUserRenameResult(KIO__AskUserActionInterface* self, intptr_t slot) {
    void (*slotFunc)(KIO__AskUserActionInterface*, int, QUrl*, KJob*) = reinterpret_cast<void (*)(KIO__AskUserActionInterface*, int, QUrl*, KJob*)>(slot);
    KIO::AskUserActionInterface::connect(self, &KIO::AskUserActionInterface::askUserRenameResult, [self, slotFunc](KIO::RenameDialog_Result result, const QUrl& newUrl, KJob* parentJob) {
        int sigval1 = static_cast<int>(result);
        const QUrl& newUrl_ret = newUrl;
        // Cast returned reference into pointer
        QUrl* sigval2 = const_cast<QUrl*>(&newUrl_ret);
        KJob* sigval3 = parentJob;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void KIO__AskUserActionInterface_AskUserSkipResult(KIO__AskUserActionInterface* self, int result, KJob* parentJob) {
    self->askUserSkipResult(static_cast<KIO::SkipDialog_Result>(result), parentJob);
}

void KIO__AskUserActionInterface_Connect_AskUserSkipResult(KIO__AskUserActionInterface* self, intptr_t slot) {
    void (*slotFunc)(KIO__AskUserActionInterface*, int, KJob*) = reinterpret_cast<void (*)(KIO__AskUserActionInterface*, int, KJob*)>(slot);
    KIO::AskUserActionInterface::connect(self, &KIO::AskUserActionInterface::askUserSkipResult, [self, slotFunc](KIO::SkipDialog_Result result, KJob* parentJob) {
        int sigval1 = static_cast<int>(result);
        KJob* sigval2 = parentJob;
        slotFunc(self, sigval1, sigval2);
    });
}

void KIO__AskUserActionInterface_AskUserDeleteResult(KIO__AskUserActionInterface* self, bool allowDelete, const libqt_list /* of QUrl* */ urls, int deletionType, QWidget* parent) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    self->askUserDeleteResult(allowDelete, urls_QList, static_cast<KIO::AskUserActionInterface::DeletionType>(deletionType), parent);
}

void KIO__AskUserActionInterface_Connect_AskUserDeleteResult(KIO__AskUserActionInterface* self, intptr_t slot) {
    void (*slotFunc)(KIO__AskUserActionInterface*, bool, QUrl**, int, QWidget*) = reinterpret_cast<void (*)(KIO__AskUserActionInterface*, bool, QUrl**, int, QWidget*)>(slot);
    KIO::AskUserActionInterface::connect(self, &KIO::AskUserActionInterface::askUserDeleteResult, [self, slotFunc](bool allowDelete, const QList<QUrl>& urls, KIO::AskUserActionInterface::DeletionType deletionType, QWidget* parent) {
        bool sigval1 = allowDelete;
        const QList<QUrl>& urls_ret = urls;
        // Convert QList<> from C++ memory to manually-managed C memory
        QUrl** urls_arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (urls_ret.size() + 1)));
        for (qsizetype i = 0; i < urls_ret.size(); ++i) {
            urls_arr[i] = new QUrl(urls_ret[i]);
        }
        // Append sentinel value to the list
        urls_arr[urls_ret.size()] = nullptr;
        QUrl** sigval2 = urls_arr;
        int sigval3 = static_cast<int>(deletionType);
        QWidget* sigval4 = parent;
        slotFunc(self, sigval1, sigval2, sigval3, sigval4);
        free(urls_arr);
    });
}

void KIO__AskUserActionInterface_MessageBoxResult(KIO__AskUserActionInterface* self, int result) {
    self->messageBoxResult(static_cast<int>(result));
}

void KIO__AskUserActionInterface_Connect_MessageBoxResult(KIO__AskUserActionInterface* self, intptr_t slot) {
    void (*slotFunc)(KIO__AskUserActionInterface*, int) = reinterpret_cast<void (*)(KIO__AskUserActionInterface*, int)>(slot);
    KIO::AskUserActionInterface::connect(self, &KIO::AskUserActionInterface::messageBoxResult, [self, slotFunc](int result) {
        int sigval1 = result;
        slotFunc(self, sigval1);
    });
}

void KIO__AskUserActionInterface_AskIgnoreSslErrorsResult(KIO__AskUserActionInterface* self, int result) {
    self->askIgnoreSslErrorsResult(static_cast<int>(result));
}

void KIO__AskUserActionInterface_Connect_AskIgnoreSslErrorsResult(KIO__AskUserActionInterface* self, intptr_t slot) {
    void (*slotFunc)(KIO__AskUserActionInterface*, int) = reinterpret_cast<void (*)(KIO__AskUserActionInterface*, int)>(slot);
    KIO::AskUserActionInterface::connect(self, &KIO::AskUserActionInterface::askIgnoreSslErrorsResult, [self, slotFunc](int result) {
        int sigval1 = result;
        slotFunc(self, sigval1);
    });
}

libqt_string KIO__AskUserActionInterface_Tr2(const char* s, const char* c) {
    QString _ret = KIO::AskUserActionInterface::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__AskUserActionInterface_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIO::AskUserActionInterface::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__AskUserActionInterface_Delete(KIO__AskUserActionInterface* self) {
    delete self;
}
