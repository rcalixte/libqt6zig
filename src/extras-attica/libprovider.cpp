#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Achievement
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__BuildServiceJob
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__DeleteJob
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Message
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__PostJob
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Project
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Provider
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Publisher
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__PublisherField
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__PutJob
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__RemoteAccount
#include <QByteArray>
#include <QDateTime>
#include <QIODevice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QVariant>
#include <provider.h>
#include "libprovider.h"
#include "libprovider.hxx"

Attica__Provider* Attica__Provider_new() {
    return new Attica::Provider();
}

Attica__Provider* Attica__Provider_new2(const Attica__Provider* other) {
    return new Attica::Provider(*other);
}

void Attica__Provider_OperatorAssign(Attica__Provider* self, const Attica__Provider* other) {
    self->operator=(*other);
}

bool Attica__Provider_IsValid(const Attica__Provider* self) {
    return self->isValid();
}

bool Attica__Provider_IsEnabled(const Attica__Provider* self) {
    return self->isEnabled();
}

void Attica__Provider_SetEnabled(Attica__Provider* self, bool enabled) {
    self->setEnabled(enabled);
}

void Attica__Provider_SetAdditionalAgentInformation(Attica__Provider* self, const libqt_string additionalInformation) {
    QString additionalInformation_QString = QString::fromUtf8(additionalInformation.data, additionalInformation.len);
    self->setAdditionalAgentInformation(additionalInformation_QString);
}

libqt_string Attica__Provider_AdditionalAgentInformation(const Attica__Provider* self) {
    QString _ret = self->additionalAgentInformation();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* Attica__Provider_BaseUrl(const Attica__Provider* self) {
    return new QUrl(self->baseUrl());
}

libqt_string Attica__Provider_Name(const Attica__Provider* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* Attica__Provider_Icon(const Attica__Provider* self) {
    return new QUrl(self->icon());
}

bool Attica__Provider_HasPersonService(const Attica__Provider* self) {
    return self->hasPersonService();
}

libqt_string Attica__Provider_PersonServiceVersion(const Attica__Provider* self) {
    QString _ret = self->personServiceVersion();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Attica__Provider_HasFriendService(const Attica__Provider* self) {
    return self->hasFriendService();
}

libqt_string Attica__Provider_FriendServiceVersion(const Attica__Provider* self) {
    QString _ret = self->friendServiceVersion();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Attica__Provider_HasMessageService(const Attica__Provider* self) {
    return self->hasMessageService();
}

libqt_string Attica__Provider_MessageServiceVersion(const Attica__Provider* self) {
    QString _ret = self->messageServiceVersion();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Attica__Provider_HasAchievementService(const Attica__Provider* self) {
    return self->hasAchievementService();
}

libqt_string Attica__Provider_AchievementServiceVersion(const Attica__Provider* self) {
    QString _ret = self->achievementServiceVersion();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Attica__Provider_HasActivityService(const Attica__Provider* self) {
    return self->hasActivityService();
}

libqt_string Attica__Provider_ActivityServiceVersion(const Attica__Provider* self) {
    QString _ret = self->activityServiceVersion();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Attica__Provider_HasContentService(const Attica__Provider* self) {
    return self->hasContentService();
}

libqt_string Attica__Provider_ContentServiceVersion(const Attica__Provider* self) {
    QString _ret = self->contentServiceVersion();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Attica__Provider_HasFanService(const Attica__Provider* self) {
    return self->hasFanService();
}

libqt_string Attica__Provider_FanServiceVersion(const Attica__Provider* self) {
    QString _ret = self->fanServiceVersion();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Attica__Provider_HasForumService(const Attica__Provider* self) {
    return self->hasForumService();
}

libqt_string Attica__Provider_ForumServiceVersion(const Attica__Provider* self) {
    QString _ret = self->forumServiceVersion();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Attica__Provider_HasKnowledgebaseService(const Attica__Provider* self) {
    return self->hasKnowledgebaseService();
}

libqt_string Attica__Provider_KnowledgebaseServiceVersion(const Attica__Provider* self) {
    QString _ret = self->knowledgebaseServiceVersion();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Attica__Provider_HasCommentService(const Attica__Provider* self) {
    return self->hasCommentService();
}

libqt_string Attica__Provider_CommentServiceVersion(const Attica__Provider* self) {
    QString _ret = self->commentServiceVersion();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Attica__Provider_HasCredentials(const Attica__Provider* self) {
    return self->hasCredentials();
}

bool Attica__Provider_HasCredentials2(Attica__Provider* self) {
    return self->hasCredentials();
}

bool Attica__Provider_LoadCredentials(Attica__Provider* self, libqt_string user, libqt_string password) {
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString password_QString = QString::fromUtf8(password.data, password.len);
    return self->loadCredentials(user_QString, password_QString);
}

bool Attica__Provider_SaveCredentials(Attica__Provider* self, const libqt_string user, const libqt_string password) {
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString password_QString = QString::fromUtf8(password.data, password.len);
    return self->saveCredentials(user_QString, password_QString);
}

Attica__PostJob* Attica__Provider_CheckLogin(Attica__Provider* self, const libqt_string user, const libqt_string password) {
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString password_QString = QString::fromUtf8(password.data, password.len);
    return self->checkLogin(user_QString, password_QString);
}

Attica__PostJob* Attica__Provider_RegisterAccount(Attica__Provider* self, const libqt_string id, const libqt_string password, const libqt_string mail, const libqt_string firstName, const libqt_string lastName) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    QString password_QString = QString::fromUtf8(password.data, password.len);
    QString mail_QString = QString::fromUtf8(mail.data, mail.len);
    QString firstName_QString = QString::fromUtf8(firstName.data, firstName.len);
    QString lastName_QString = QString::fromUtf8(lastName.data, lastName.len);
    return self->registerAccount(id_QString, password_QString, mail_QString, firstName_QString, lastName_QString);
}

Attica__PostJob* Attica__Provider_PostLocation(Attica__Provider* self, double latitude, double longitude) {
    return self->postLocation(static_cast<qreal>(latitude), static_cast<qreal>(longitude));
}

Attica__PostJob* Attica__Provider_SetPrivateData(Attica__Provider* self, const libqt_string app, const libqt_string key, const libqt_string value) {
    QString app_QString = QString::fromUtf8(app.data, app.len);
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    return self->setPrivateData(app_QString, key_QString, value_QString);
}

Attica__PostJob* Attica__Provider_InviteFriend(Attica__Provider* self, const libqt_string to, const libqt_string message) {
    QString to_QString = QString::fromUtf8(to.data, to.len);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    return self->inviteFriend(to_QString, message_QString);
}

Attica__PostJob* Attica__Provider_ApproveFriendship(Attica__Provider* self, const libqt_string to) {
    QString to_QString = QString::fromUtf8(to.data, to.len);
    return self->approveFriendship(to_QString);
}

Attica__PostJob* Attica__Provider_DeclineFriendship(Attica__Provider* self, const libqt_string to) {
    QString to_QString = QString::fromUtf8(to.data, to.len);
    return self->declineFriendship(to_QString);
}

Attica__PostJob* Attica__Provider_CancelFriendship(Attica__Provider* self, const libqt_string to) {
    QString to_QString = QString::fromUtf8(to.data, to.len);
    return self->cancelFriendship(to_QString);
}

Attica__PostJob* Attica__Provider_PostMessage(Attica__Provider* self, const Attica__Message* message) {
    return self->postMessage(*message);
}

Attica__PutJob* Attica__Provider_EditAchievement(Attica__Provider* self, const libqt_string contentId, const libqt_string achievementId, const Attica__Achievement* achievement) {
    QString contentId_QString = QString::fromUtf8(contentId.data, contentId.len);
    QString achievementId_QString = QString::fromUtf8(achievementId.data, achievementId.len);
    return self->editAchievement(contentId_QString, achievementId_QString, *achievement);
}

Attica__DeleteJob* Attica__Provider_DeleteAchievement(Attica__Provider* self, const libqt_string contentId, const libqt_string achievementId) {
    QString contentId_QString = QString::fromUtf8(contentId.data, contentId.len);
    QString achievementId_QString = QString::fromUtf8(achievementId.data, achievementId.len);
    return self->deleteAchievement(contentId_QString, achievementId_QString);
}

Attica__PostJob* Attica__Provider_SetAchievementProgress(Attica__Provider* self, const libqt_string id, const QVariant* progress, const QDateTime* timestamp) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return self->setAchievementProgress(id_QString, *progress, *timestamp);
}

Attica__DeleteJob* Attica__Provider_ResetAchievementProgress(Attica__Provider* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return self->resetAchievementProgress(id_QString);
}

Attica__PostJob* Attica__Provider_PostActivity(Attica__Provider* self, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    return self->postActivity(message_QString);
}

Attica__PostJob* Attica__Provider_CreateProject(Attica__Provider* self, const Attica__Project* project) {
    return self->createProject(*project);
}

Attica__PostJob* Attica__Provider_DeleteProject(Attica__Provider* self, const Attica__Project* project) {
    return self->deleteProject(*project);
}

Attica__PostJob* Attica__Provider_EditProject(Attica__Provider* self, const Attica__Project* project) {
    return self->editProject(*project);
}

Attica__PostJob* Attica__Provider_SavePublisherField(Attica__Provider* self, const Attica__Project* project, const Attica__PublisherField* field) {
    return self->savePublisherField(*project, *field);
}

Attica__PostJob* Attica__Provider_PublishBuildJob(Attica__Provider* self, const Attica__BuildServiceJob* buildjob, const Attica__Publisher* publisher) {
    return self->publishBuildJob(*buildjob, *publisher);
}

Attica__PostJob* Attica__Provider_CreateBuildServiceJob(Attica__Provider* self, const Attica__BuildServiceJob* job) {
    return self->createBuildServiceJob(*job);
}

Attica__PostJob* Attica__Provider_CancelBuildServiceJob(Attica__Provider* self, const Attica__BuildServiceJob* job) {
    return self->cancelBuildServiceJob(*job);
}

Attica__PostJob* Attica__Provider_DeleteRemoteAccount(Attica__Provider* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return self->deleteRemoteAccount(id_QString);
}

Attica__PostJob* Attica__Provider_CreateRemoteAccount(Attica__Provider* self, const Attica__RemoteAccount* account) {
    return self->createRemoteAccount(*account);
}

Attica__PostJob* Attica__Provider_EditRemoteAccount(Attica__Provider* self, const Attica__RemoteAccount* account) {
    return self->editRemoteAccount(*account);
}

Attica__PostJob* Attica__Provider_UploadTarballToBuildService(Attica__Provider* self, const libqt_string projectId, const libqt_string fileName, const libqt_string payload) {
    QString projectId_QString = QString::fromUtf8(projectId.data, projectId.len);
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QByteArray payload_QByteArray(payload.data, payload.len);
    return self->uploadTarballToBuildService(projectId_QString, fileName_QString, payload_QByteArray);
}

Attica__PostJob* Attica__Provider_VoteForContent(Attica__Provider* self, const libqt_string contentId, unsigned int rating) {
    QString contentId_QString = QString::fromUtf8(contentId.data, contentId.len);
    return self->voteForContent(contentId_QString, static_cast<uint>(rating));
}

Attica__PostJob* Attica__Provider_DeleteContent(Attica__Provider* self, const libqt_string contentId) {
    QString contentId_QString = QString::fromUtf8(contentId.data, contentId.len);
    return self->deleteContent(contentId_QString);
}

Attica__PostJob* Attica__Provider_SetDownloadFile(Attica__Provider* self, const libqt_string contentId, const libqt_string fileName, QIODevice* payload) {
    QString contentId_QString = QString::fromUtf8(contentId.data, contentId.len);
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return self->setDownloadFile(contentId_QString, fileName_QString, payload);
}

Attica__PostJob* Attica__Provider_SetDownloadFile2(Attica__Provider* self, const libqt_string contentId, const libqt_string fileName, const libqt_string payload) {
    QString contentId_QString = QString::fromUtf8(contentId.data, contentId.len);
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QByteArray payload_QByteArray(payload.data, payload.len);
    return self->setDownloadFile(contentId_QString, fileName_QString, payload_QByteArray);
}

Attica__PostJob* Attica__Provider_DeleteDownloadFile(Attica__Provider* self, const libqt_string contentId) {
    QString contentId_QString = QString::fromUtf8(contentId.data, contentId.len);
    return self->deleteDownloadFile(contentId_QString);
}

Attica__PostJob* Attica__Provider_SetPreviewImage(Attica__Provider* self, const libqt_string contentId, const libqt_string previewId, const libqt_string fileName, const libqt_string image) {
    QString contentId_QString = QString::fromUtf8(contentId.data, contentId.len);
    QString previewId_QString = QString::fromUtf8(previewId.data, previewId.len);
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QByteArray image_QByteArray(image.data, image.len);
    return self->setPreviewImage(contentId_QString, previewId_QString, fileName_QString, image_QByteArray);
}

Attica__PostJob* Attica__Provider_DeletePreviewImage(Attica__Provider* self, const libqt_string contentId, const libqt_string previewId) {
    QString contentId_QString = QString::fromUtf8(contentId.data, contentId.len);
    QString previewId_QString = QString::fromUtf8(previewId.data, previewId.len);
    return self->deletePreviewImage(contentId_QString, previewId_QString);
}

Attica__PostJob* Attica__Provider_VoteForComment(Attica__Provider* self, const libqt_string id, unsigned int rating) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return self->voteForComment(id_QString, static_cast<uint>(rating));
}

Attica__PostJob* Attica__Provider_BecomeFan(Attica__Provider* self, const libqt_string contentId) {
    QString contentId_QString = QString::fromUtf8(contentId.data, contentId.len);
    return self->becomeFan(contentId_QString);
}

Attica__PostJob* Attica__Provider_PostTopic(Attica__Provider* self, const libqt_string forumId, const libqt_string subject, const libqt_string content) {
    QString forumId_QString = QString::fromUtf8(forumId.data, forumId.len);
    QString subject_QString = QString::fromUtf8(subject.data, subject.len);
    QString content_QString = QString::fromUtf8(content.data, content.len);
    return self->postTopic(forumId_QString, subject_QString, content_QString);
}

libqt_string Attica__Provider_GetRegisterAccountUrl(const Attica__Provider* self) {
    const QString _ret = self->getRegisterAccountUrl();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

Attica__PostJob* Attica__Provider_PostLocation3(Attica__Provider* self, double latitude, double longitude, const libqt_string city) {
    QString city_QString = QString::fromUtf8(city.data, city.len);
    return self->postLocation(static_cast<qreal>(latitude), static_cast<qreal>(longitude), city_QString);
}

Attica__PostJob* Attica__Provider_PostLocation4(Attica__Provider* self, double latitude, double longitude, const libqt_string city, const libqt_string country) {
    QString city_QString = QString::fromUtf8(city.data, city.len);
    QString country_QString = QString::fromUtf8(country.data, country.len);
    return self->postLocation(static_cast<qreal>(latitude), static_cast<qreal>(longitude), city_QString, country_QString);
}

void Attica__Provider_Delete(Attica__Provider* self) {
    delete self;
}
