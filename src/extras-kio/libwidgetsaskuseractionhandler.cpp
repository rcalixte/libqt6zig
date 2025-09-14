#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__AskUserActionInterface
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__WidgetsAskUserActionHandler
#include <KJob>
#include <QChildEvent>
#include <QDateTime>
#include <QEvent>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWidget>
#include <widgetsaskuseractionhandler.h>
#include "libwidgetsaskuseractionhandler.h"
#include "libwidgetsaskuseractionhandler.hxx"

KIO__WidgetsAskUserActionHandler* KIO__WidgetsAskUserActionHandler_new() {
    return new VirtualKIOWidgetsAskUserActionHandler();
}

KIO__WidgetsAskUserActionHandler* KIO__WidgetsAskUserActionHandler_new2(QObject* parent) {
    return new VirtualKIOWidgetsAskUserActionHandler(parent);
}

QMetaObject* KIO__WidgetsAskUserActionHandler_MetaObject(const KIO__WidgetsAskUserActionHandler* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__WidgetsAskUserActionHandler_Metacast(KIO__WidgetsAskUserActionHandler* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__WidgetsAskUserActionHandler_Metacall(KIO__WidgetsAskUserActionHandler* self, int param1, int param2, void** param3) {
    auto* vkio__widgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkio__widgetsaskuseractionhandler && vkio__widgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKIOWidgetsAskUserActionHandler*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KIO__WidgetsAskUserActionHandler_Tr(const char* s) {
    QString _ret = KIO::WidgetsAskUserActionHandler::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__WidgetsAskUserActionHandler_AskUserRename(KIO__WidgetsAskUserActionHandler* self, KJob* job, const libqt_string title, const QUrl* src, const QUrl* dest, int options, unsigned long long sizeSrc, unsigned long long sizeDest, const QDateTime* ctimeSrc, const QDateTime* ctimeDest, const QDateTime* mtimeSrc, const QDateTime* mtimeDest) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    auto* vkio__widgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkio__widgetsaskuseractionhandler && vkio__widgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        self->askUserRename(job, title_QString, *src, *dest, static_cast<KIO::RenameDialog_Options>(options), static_cast<KIO::filesize_t>(sizeSrc), static_cast<KIO::filesize_t>(sizeDest), *ctimeSrc, *ctimeDest, *mtimeSrc, *mtimeDest);
    } else {
        ((VirtualKIOWidgetsAskUserActionHandler*)self)->askUserRename(job, title_QString, *src, *dest, static_cast<KIO::RenameDialog_Options>(options), static_cast<KIO::filesize_t>(sizeSrc), static_cast<KIO::filesize_t>(sizeDest), *ctimeSrc, *ctimeDest, *mtimeSrc, *mtimeDest);
    }
}

void KIO__WidgetsAskUserActionHandler_AskUserSkip(KIO__WidgetsAskUserActionHandler* self, KJob* job, int options, const libqt_string error_text) {
    QString error_text_QString = QString::fromUtf8(error_text.data, error_text.len);
    auto* vkio__widgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkio__widgetsaskuseractionhandler && vkio__widgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        self->askUserSkip(job, static_cast<KIO::SkipDialog_Options>(options), error_text_QString);
    } else {
        ((VirtualKIOWidgetsAskUserActionHandler*)self)->askUserSkip(job, static_cast<KIO::SkipDialog_Options>(options), error_text_QString);
    }
}

void KIO__WidgetsAskUserActionHandler_AskUserDelete(KIO__WidgetsAskUserActionHandler* self, const libqt_list /* of QUrl* */ urls, int deletionType, int confirmationType, QWidget* parent) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    auto* vkio__widgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkio__widgetsaskuseractionhandler && vkio__widgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        self->askUserDelete(urls_QList, static_cast<KIO::AskUserActionInterface::DeletionType>(deletionType), static_cast<KIO::AskUserActionInterface::ConfirmationType>(confirmationType), parent);
    } else {
        ((VirtualKIOWidgetsAskUserActionHandler*)self)->askUserDelete(urls_QList, static_cast<KIO::AskUserActionInterface::DeletionType>(deletionType), static_cast<KIO::AskUserActionInterface::ConfirmationType>(confirmationType), parent);
    }
}

void KIO__WidgetsAskUserActionHandler_RequestUserMessageBox(KIO__WidgetsAskUserActionHandler* self, int typeVal, const libqt_string text, const libqt_string title, const libqt_string primaryActionText, const libqt_string secondaryActionText, const libqt_string primaryActionIconName, const libqt_string secondaryActionIconName, const libqt_string dontAskAgainName, const libqt_string details, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString primaryActionText_QString = QString::fromUtf8(primaryActionText.data, primaryActionText.len);
    QString secondaryActionText_QString = QString::fromUtf8(secondaryActionText.data, secondaryActionText.len);
    QString primaryActionIconName_QString = QString::fromUtf8(primaryActionIconName.data, primaryActionIconName.len);
    QString secondaryActionIconName_QString = QString::fromUtf8(secondaryActionIconName.data, secondaryActionIconName.len);
    QString dontAskAgainName_QString = QString::fromUtf8(dontAskAgainName.data, dontAskAgainName.len);
    QString details_QString = QString::fromUtf8(details.data, details.len);
    auto* vkio__widgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkio__widgetsaskuseractionhandler && vkio__widgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        self->requestUserMessageBox(static_cast<KIO::AskUserActionInterface::MessageDialogType>(typeVal), text_QString, title_QString, primaryActionText_QString, secondaryActionText_QString, primaryActionIconName_QString, secondaryActionIconName_QString, dontAskAgainName_QString, details_QString, parent);
    } else {
        ((VirtualKIOWidgetsAskUserActionHandler*)self)->requestUserMessageBox(static_cast<KIO::AskUserActionInterface::MessageDialogType>(typeVal), text_QString, title_QString, primaryActionText_QString, secondaryActionText_QString, primaryActionIconName_QString, secondaryActionIconName_QString, dontAskAgainName_QString, details_QString, parent);
    }
}

void KIO__WidgetsAskUserActionHandler_AskIgnoreSslErrors(KIO__WidgetsAskUserActionHandler* self, const libqt_map /* of libqt_string to QVariant* */ sslErrorData, QWidget* parent) {
    QMap<QString, QVariant> sslErrorData_QMap;
    libqt_string* sslErrorData_karr = static_cast<libqt_string*>(sslErrorData.keys);
    QVariant** sslErrorData_varr = static_cast<QVariant**>(sslErrorData.values);
    for (size_t i = 0; i < sslErrorData.len; ++i) {
        QString sslErrorData_karr_i_QString = QString::fromUtf8(sslErrorData_karr[i].data, sslErrorData_karr[i].len);
        sslErrorData_QMap[sslErrorData_karr_i_QString] = *(sslErrorData_varr[i]);
    }
    auto* vkio__widgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkio__widgetsaskuseractionhandler && vkio__widgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        self->askIgnoreSslErrors(sslErrorData_QMap, parent);
    } else {
        ((VirtualKIOWidgetsAskUserActionHandler*)self)->askIgnoreSslErrors(sslErrorData_QMap, parent);
    }
}

void KIO__WidgetsAskUserActionHandler_SetWindow(KIO__WidgetsAskUserActionHandler* self, QWidget* window) {
    self->setWindow(window);
}

libqt_string KIO__WidgetsAskUserActionHandler_Tr2(const char* s, const char* c) {
    QString _ret = KIO::WidgetsAskUserActionHandler::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__WidgetsAskUserActionHandler_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIO::WidgetsAskUserActionHandler::tr(s, c, static_cast<int>(n));
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
int KIO__WidgetsAskUserActionHandler_QBaseMetacall(KIO__WidgetsAskUserActionHandler* self, int param1, int param2, void** param3) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_Metacall_IsBase(true);
        return vkiowidgetsaskuseractionhandler->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KIO::WidgetsAskUserActionHandler::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WidgetsAskUserActionHandler_OnMetacall(KIO__WidgetsAskUserActionHandler* self, intptr_t slot) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_Metacall_Callback(reinterpret_cast<VirtualKIOWidgetsAskUserActionHandler::KIO__WidgetsAskUserActionHandler_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KIO__WidgetsAskUserActionHandler_QBaseAskUserRename(KIO__WidgetsAskUserActionHandler* self, KJob* job, const libqt_string title, const QUrl* src, const QUrl* dest, int options, unsigned long long sizeSrc, unsigned long long sizeDest, const QDateTime* ctimeSrc, const QDateTime* ctimeDest, const QDateTime* mtimeSrc, const QDateTime* mtimeDest) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_AskUserRename_IsBase(true);
        vkiowidgetsaskuseractionhandler->askUserRename(job, title_QString, *src, *dest, static_cast<KIO::RenameDialog_Options>(options), static_cast<KIO::filesize_t>(sizeSrc), static_cast<KIO::filesize_t>(sizeDest), *ctimeSrc, *ctimeDest, *mtimeSrc, *mtimeDest);
    } else {
        self->KIO::WidgetsAskUserActionHandler::askUserRename(job, title_QString, *src, *dest, static_cast<KIO::RenameDialog_Options>(options), static_cast<KIO::filesize_t>(sizeSrc), static_cast<KIO::filesize_t>(sizeDest), *ctimeSrc, *ctimeDest, *mtimeSrc, *mtimeDest);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WidgetsAskUserActionHandler_OnAskUserRename(KIO__WidgetsAskUserActionHandler* self, intptr_t slot) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_AskUserRename_Callback(reinterpret_cast<VirtualKIOWidgetsAskUserActionHandler::KIO__WidgetsAskUserActionHandler_AskUserRename_Callback>(slot));
    }
}

// Base class handler implementation
void KIO__WidgetsAskUserActionHandler_QBaseAskUserSkip(KIO__WidgetsAskUserActionHandler* self, KJob* job, int options, const libqt_string error_text) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    QString error_text_QString = QString::fromUtf8(error_text.data, error_text.len);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_AskUserSkip_IsBase(true);
        vkiowidgetsaskuseractionhandler->askUserSkip(job, static_cast<KIO::SkipDialog_Options>(options), error_text_QString);
    } else {
        self->KIO::WidgetsAskUserActionHandler::askUserSkip(job, static_cast<KIO::SkipDialog_Options>(options), error_text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WidgetsAskUserActionHandler_OnAskUserSkip(KIO__WidgetsAskUserActionHandler* self, intptr_t slot) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_AskUserSkip_Callback(reinterpret_cast<VirtualKIOWidgetsAskUserActionHandler::KIO__WidgetsAskUserActionHandler_AskUserSkip_Callback>(slot));
    }
}

// Base class handler implementation
void KIO__WidgetsAskUserActionHandler_QBaseAskUserDelete(KIO__WidgetsAskUserActionHandler* self, const libqt_list /* of QUrl* */ urls, int deletionType, int confirmationType, QWidget* parent) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_AskUserDelete_IsBase(true);
        vkiowidgetsaskuseractionhandler->askUserDelete(urls_QList, static_cast<KIO::AskUserActionInterface::DeletionType>(deletionType), static_cast<KIO::AskUserActionInterface::ConfirmationType>(confirmationType), parent);
    } else {
        self->KIO::WidgetsAskUserActionHandler::askUserDelete(urls_QList, static_cast<KIO::AskUserActionInterface::DeletionType>(deletionType), static_cast<KIO::AskUserActionInterface::ConfirmationType>(confirmationType), parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WidgetsAskUserActionHandler_OnAskUserDelete(KIO__WidgetsAskUserActionHandler* self, intptr_t slot) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_AskUserDelete_Callback(reinterpret_cast<VirtualKIOWidgetsAskUserActionHandler::KIO__WidgetsAskUserActionHandler_AskUserDelete_Callback>(slot));
    }
}

// Base class handler implementation
void KIO__WidgetsAskUserActionHandler_QBaseRequestUserMessageBox(KIO__WidgetsAskUserActionHandler* self, int typeVal, const libqt_string text, const libqt_string title, const libqt_string primaryActionText, const libqt_string secondaryActionText, const libqt_string primaryActionIconName, const libqt_string secondaryActionIconName, const libqt_string dontAskAgainName, const libqt_string details, QWidget* parent) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString primaryActionText_QString = QString::fromUtf8(primaryActionText.data, primaryActionText.len);
    QString secondaryActionText_QString = QString::fromUtf8(secondaryActionText.data, secondaryActionText.len);
    QString primaryActionIconName_QString = QString::fromUtf8(primaryActionIconName.data, primaryActionIconName.len);
    QString secondaryActionIconName_QString = QString::fromUtf8(secondaryActionIconName.data, secondaryActionIconName.len);
    QString dontAskAgainName_QString = QString::fromUtf8(dontAskAgainName.data, dontAskAgainName.len);
    QString details_QString = QString::fromUtf8(details.data, details.len);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_RequestUserMessageBox_IsBase(true);
        vkiowidgetsaskuseractionhandler->requestUserMessageBox(static_cast<KIO::AskUserActionInterface::MessageDialogType>(typeVal), text_QString, title_QString, primaryActionText_QString, secondaryActionText_QString, primaryActionIconName_QString, secondaryActionIconName_QString, dontAskAgainName_QString, details_QString, parent);
    } else {
        self->KIO::WidgetsAskUserActionHandler::requestUserMessageBox(static_cast<KIO::AskUserActionInterface::MessageDialogType>(typeVal), text_QString, title_QString, primaryActionText_QString, secondaryActionText_QString, primaryActionIconName_QString, secondaryActionIconName_QString, dontAskAgainName_QString, details_QString, parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WidgetsAskUserActionHandler_OnRequestUserMessageBox(KIO__WidgetsAskUserActionHandler* self, intptr_t slot) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_RequestUserMessageBox_Callback(reinterpret_cast<VirtualKIOWidgetsAskUserActionHandler::KIO__WidgetsAskUserActionHandler_RequestUserMessageBox_Callback>(slot));
    }
}

// Base class handler implementation
void KIO__WidgetsAskUserActionHandler_QBaseAskIgnoreSslErrors(KIO__WidgetsAskUserActionHandler* self, const libqt_map /* of libqt_string to QVariant* */ sslErrorData, QWidget* parent) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    QMap<QString, QVariant> sslErrorData_QMap;
    libqt_string* sslErrorData_karr = static_cast<libqt_string*>(sslErrorData.keys);
    QVariant** sslErrorData_varr = static_cast<QVariant**>(sslErrorData.values);
    for (size_t i = 0; i < sslErrorData.len; ++i) {
        QString sslErrorData_karr_i_QString = QString::fromUtf8(sslErrorData_karr[i].data, sslErrorData_karr[i].len);
        sslErrorData_QMap[sslErrorData_karr_i_QString] = *(sslErrorData_varr[i]);
    }
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_AskIgnoreSslErrors_IsBase(true);
        vkiowidgetsaskuseractionhandler->askIgnoreSslErrors(sslErrorData_QMap, parent);
    } else {
        self->KIO::WidgetsAskUserActionHandler::askIgnoreSslErrors(sslErrorData_QMap, parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WidgetsAskUserActionHandler_OnAskIgnoreSslErrors(KIO__WidgetsAskUserActionHandler* self, intptr_t slot) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_AskIgnoreSslErrors_Callback(reinterpret_cast<VirtualKIOWidgetsAskUserActionHandler::KIO__WidgetsAskUserActionHandler_AskIgnoreSslErrors_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__WidgetsAskUserActionHandler_Event(KIO__WidgetsAskUserActionHandler* self, QEvent* event) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        return vkiowidgetsaskuseractionhandler->event(event);
    } else {
        return self->KIO::WidgetsAskUserActionHandler::event(event);
    }
}

// Base class handler implementation
bool KIO__WidgetsAskUserActionHandler_QBaseEvent(KIO__WidgetsAskUserActionHandler* self, QEvent* event) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_Event_IsBase(true);
        return vkiowidgetsaskuseractionhandler->event(event);
    } else {
        return self->KIO::WidgetsAskUserActionHandler::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WidgetsAskUserActionHandler_OnEvent(KIO__WidgetsAskUserActionHandler* self, intptr_t slot) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_Event_Callback(reinterpret_cast<VirtualKIOWidgetsAskUserActionHandler::KIO__WidgetsAskUserActionHandler_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__WidgetsAskUserActionHandler_EventFilter(KIO__WidgetsAskUserActionHandler* self, QObject* watched, QEvent* event) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        return vkiowidgetsaskuseractionhandler->eventFilter(watched, event);
    } else {
        return self->KIO::WidgetsAskUserActionHandler::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KIO__WidgetsAskUserActionHandler_QBaseEventFilter(KIO__WidgetsAskUserActionHandler* self, QObject* watched, QEvent* event) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_EventFilter_IsBase(true);
        return vkiowidgetsaskuseractionhandler->eventFilter(watched, event);
    } else {
        return self->KIO::WidgetsAskUserActionHandler::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WidgetsAskUserActionHandler_OnEventFilter(KIO__WidgetsAskUserActionHandler* self, intptr_t slot) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_EventFilter_Callback(reinterpret_cast<VirtualKIOWidgetsAskUserActionHandler::KIO__WidgetsAskUserActionHandler_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__WidgetsAskUserActionHandler_TimerEvent(KIO__WidgetsAskUserActionHandler* self, QTimerEvent* event) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->timerEvent(event);
    } else {
        ((VirtualKIOWidgetsAskUserActionHandler*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KIO__WidgetsAskUserActionHandler_QBaseTimerEvent(KIO__WidgetsAskUserActionHandler* self, QTimerEvent* event) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_TimerEvent_IsBase(true);
        vkiowidgetsaskuseractionhandler->timerEvent(event);
    } else {
        ((VirtualKIOWidgetsAskUserActionHandler*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WidgetsAskUserActionHandler_OnTimerEvent(KIO__WidgetsAskUserActionHandler* self, intptr_t slot) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_TimerEvent_Callback(reinterpret_cast<VirtualKIOWidgetsAskUserActionHandler::KIO__WidgetsAskUserActionHandler_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__WidgetsAskUserActionHandler_ChildEvent(KIO__WidgetsAskUserActionHandler* self, QChildEvent* event) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->childEvent(event);
    } else {
        ((VirtualKIOWidgetsAskUserActionHandler*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KIO__WidgetsAskUserActionHandler_QBaseChildEvent(KIO__WidgetsAskUserActionHandler* self, QChildEvent* event) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_ChildEvent_IsBase(true);
        vkiowidgetsaskuseractionhandler->childEvent(event);
    } else {
        ((VirtualKIOWidgetsAskUserActionHandler*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WidgetsAskUserActionHandler_OnChildEvent(KIO__WidgetsAskUserActionHandler* self, intptr_t slot) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_ChildEvent_Callback(reinterpret_cast<VirtualKIOWidgetsAskUserActionHandler::KIO__WidgetsAskUserActionHandler_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__WidgetsAskUserActionHandler_CustomEvent(KIO__WidgetsAskUserActionHandler* self, QEvent* event) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->customEvent(event);
    } else {
        ((VirtualKIOWidgetsAskUserActionHandler*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KIO__WidgetsAskUserActionHandler_QBaseCustomEvent(KIO__WidgetsAskUserActionHandler* self, QEvent* event) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_CustomEvent_IsBase(true);
        vkiowidgetsaskuseractionhandler->customEvent(event);
    } else {
        ((VirtualKIOWidgetsAskUserActionHandler*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WidgetsAskUserActionHandler_OnCustomEvent(KIO__WidgetsAskUserActionHandler* self, intptr_t slot) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_CustomEvent_Callback(reinterpret_cast<VirtualKIOWidgetsAskUserActionHandler::KIO__WidgetsAskUserActionHandler_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__WidgetsAskUserActionHandler_ConnectNotify(KIO__WidgetsAskUserActionHandler* self, const QMetaMethod* signal) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->connectNotify(*signal);
    } else {
        ((VirtualKIOWidgetsAskUserActionHandler*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__WidgetsAskUserActionHandler_QBaseConnectNotify(KIO__WidgetsAskUserActionHandler* self, const QMetaMethod* signal) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_ConnectNotify_IsBase(true);
        vkiowidgetsaskuseractionhandler->connectNotify(*signal);
    } else {
        ((VirtualKIOWidgetsAskUserActionHandler*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WidgetsAskUserActionHandler_OnConnectNotify(KIO__WidgetsAskUserActionHandler* self, intptr_t slot) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_ConnectNotify_Callback(reinterpret_cast<VirtualKIOWidgetsAskUserActionHandler::KIO__WidgetsAskUserActionHandler_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__WidgetsAskUserActionHandler_DisconnectNotify(KIO__WidgetsAskUserActionHandler* self, const QMetaMethod* signal) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->disconnectNotify(*signal);
    } else {
        ((VirtualKIOWidgetsAskUserActionHandler*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__WidgetsAskUserActionHandler_QBaseDisconnectNotify(KIO__WidgetsAskUserActionHandler* self, const QMetaMethod* signal) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_DisconnectNotify_IsBase(true);
        vkiowidgetsaskuseractionhandler->disconnectNotify(*signal);
    } else {
        ((VirtualKIOWidgetsAskUserActionHandler*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WidgetsAskUserActionHandler_OnDisconnectNotify(KIO__WidgetsAskUserActionHandler* self, intptr_t slot) {
    auto* vkiowidgetsaskuseractionhandler = dynamic_cast<VirtualKIOWidgetsAskUserActionHandler*>(self);
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_DisconnectNotify_Callback(reinterpret_cast<VirtualKIOWidgetsAskUserActionHandler::KIO__WidgetsAskUserActionHandler_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KIO__WidgetsAskUserActionHandler_Sender(const KIO__WidgetsAskUserActionHandler* self) {
    auto* vkiowidgetsaskuseractionhandler = const_cast<VirtualKIOWidgetsAskUserActionHandler*>(dynamic_cast<const VirtualKIOWidgetsAskUserActionHandler*>(self));
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        return vkiowidgetsaskuseractionhandler->sender();
    } else {
        return ((VirtualKIOWidgetsAskUserActionHandler*)self)->sender();
    }
}

// Base class handler implementation
QObject* KIO__WidgetsAskUserActionHandler_QBaseSender(const KIO__WidgetsAskUserActionHandler* self) {
    auto* vkiowidgetsaskuseractionhandler = const_cast<VirtualKIOWidgetsAskUserActionHandler*>(dynamic_cast<const VirtualKIOWidgetsAskUserActionHandler*>(self));
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_Sender_IsBase(true);
        return vkiowidgetsaskuseractionhandler->sender();
    } else {
        return ((VirtualKIOWidgetsAskUserActionHandler*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WidgetsAskUserActionHandler_OnSender(const KIO__WidgetsAskUserActionHandler* self, intptr_t slot) {
    auto* vkiowidgetsaskuseractionhandler = const_cast<VirtualKIOWidgetsAskUserActionHandler*>(dynamic_cast<const VirtualKIOWidgetsAskUserActionHandler*>(self));
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_Sender_Callback(reinterpret_cast<VirtualKIOWidgetsAskUserActionHandler::KIO__WidgetsAskUserActionHandler_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__WidgetsAskUserActionHandler_SenderSignalIndex(const KIO__WidgetsAskUserActionHandler* self) {
    auto* vkiowidgetsaskuseractionhandler = const_cast<VirtualKIOWidgetsAskUserActionHandler*>(dynamic_cast<const VirtualKIOWidgetsAskUserActionHandler*>(self));
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        return vkiowidgetsaskuseractionhandler->senderSignalIndex();
    } else {
        return ((VirtualKIOWidgetsAskUserActionHandler*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KIO__WidgetsAskUserActionHandler_QBaseSenderSignalIndex(const KIO__WidgetsAskUserActionHandler* self) {
    auto* vkiowidgetsaskuseractionhandler = const_cast<VirtualKIOWidgetsAskUserActionHandler*>(dynamic_cast<const VirtualKIOWidgetsAskUserActionHandler*>(self));
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_SenderSignalIndex_IsBase(true);
        return vkiowidgetsaskuseractionhandler->senderSignalIndex();
    } else {
        return ((VirtualKIOWidgetsAskUserActionHandler*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WidgetsAskUserActionHandler_OnSenderSignalIndex(const KIO__WidgetsAskUserActionHandler* self, intptr_t slot) {
    auto* vkiowidgetsaskuseractionhandler = const_cast<VirtualKIOWidgetsAskUserActionHandler*>(dynamic_cast<const VirtualKIOWidgetsAskUserActionHandler*>(self));
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_SenderSignalIndex_Callback(reinterpret_cast<VirtualKIOWidgetsAskUserActionHandler::KIO__WidgetsAskUserActionHandler_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__WidgetsAskUserActionHandler_Receivers(const KIO__WidgetsAskUserActionHandler* self, const char* signal) {
    auto* vkiowidgetsaskuseractionhandler = const_cast<VirtualKIOWidgetsAskUserActionHandler*>(dynamic_cast<const VirtualKIOWidgetsAskUserActionHandler*>(self));
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        return vkiowidgetsaskuseractionhandler->receivers(signal);
    } else {
        return ((VirtualKIOWidgetsAskUserActionHandler*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KIO__WidgetsAskUserActionHandler_QBaseReceivers(const KIO__WidgetsAskUserActionHandler* self, const char* signal) {
    auto* vkiowidgetsaskuseractionhandler = const_cast<VirtualKIOWidgetsAskUserActionHandler*>(dynamic_cast<const VirtualKIOWidgetsAskUserActionHandler*>(self));
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_Receivers_IsBase(true);
        return vkiowidgetsaskuseractionhandler->receivers(signal);
    } else {
        return ((VirtualKIOWidgetsAskUserActionHandler*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WidgetsAskUserActionHandler_OnReceivers(const KIO__WidgetsAskUserActionHandler* self, intptr_t slot) {
    auto* vkiowidgetsaskuseractionhandler = const_cast<VirtualKIOWidgetsAskUserActionHandler*>(dynamic_cast<const VirtualKIOWidgetsAskUserActionHandler*>(self));
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_Receivers_Callback(reinterpret_cast<VirtualKIOWidgetsAskUserActionHandler::KIO__WidgetsAskUserActionHandler_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__WidgetsAskUserActionHandler_IsSignalConnected(const KIO__WidgetsAskUserActionHandler* self, const QMetaMethod* signal) {
    auto* vkiowidgetsaskuseractionhandler = const_cast<VirtualKIOWidgetsAskUserActionHandler*>(dynamic_cast<const VirtualKIOWidgetsAskUserActionHandler*>(self));
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        return vkiowidgetsaskuseractionhandler->isSignalConnected(*signal);
    } else {
        return ((VirtualKIOWidgetsAskUserActionHandler*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KIO__WidgetsAskUserActionHandler_QBaseIsSignalConnected(const KIO__WidgetsAskUserActionHandler* self, const QMetaMethod* signal) {
    auto* vkiowidgetsaskuseractionhandler = const_cast<VirtualKIOWidgetsAskUserActionHandler*>(dynamic_cast<const VirtualKIOWidgetsAskUserActionHandler*>(self));
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_IsSignalConnected_IsBase(true);
        return vkiowidgetsaskuseractionhandler->isSignalConnected(*signal);
    } else {
        return ((VirtualKIOWidgetsAskUserActionHandler*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WidgetsAskUserActionHandler_OnIsSignalConnected(const KIO__WidgetsAskUserActionHandler* self, intptr_t slot) {
    auto* vkiowidgetsaskuseractionhandler = const_cast<VirtualKIOWidgetsAskUserActionHandler*>(dynamic_cast<const VirtualKIOWidgetsAskUserActionHandler*>(self));
    if (vkiowidgetsaskuseractionhandler && vkiowidgetsaskuseractionhandler->isVirtualKIOWidgetsAskUserActionHandler) {
        vkiowidgetsaskuseractionhandler->setKIO__WidgetsAskUserActionHandler_IsSignalConnected_Callback(reinterpret_cast<VirtualKIOWidgetsAskUserActionHandler::KIO__WidgetsAskUserActionHandler_IsSignalConnected_Callback>(slot));
    }
}

void KIO__WidgetsAskUserActionHandler_Delete(KIO__WidgetsAskUserActionHandler* self) {
    delete self;
}
