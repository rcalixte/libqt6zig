#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBPROVIDER_H
#define SRC_EXTRAS_ATTICAC_LIBPROVIDER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Achievement)
typedef Attica::Achievement Attica__Achievement;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__BuildServiceJob)
typedef Attica::BuildServiceJob Attica__BuildServiceJob;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__DeleteJob)
typedef Attica::DeleteJob Attica__DeleteJob;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Message)
typedef Attica::Message Attica__Message;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__PostJob)
typedef Attica::PostJob Attica__PostJob;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Project)
typedef Attica::Project Attica__Project;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Provider)
typedef Attica::Provider Attica__Provider;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Publisher)
typedef Attica::Publisher Attica__Publisher;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__PublisherField)
typedef Attica::PublisherField Attica__PublisherField;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__PutJob)
typedef Attica::PutJob Attica__PutJob;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__RemoteAccount)
typedef Attica::RemoteAccount Attica__RemoteAccount;
#endif
#else
typedef struct Attica__Achievement Attica__Achievement;
typedef struct Attica__BuildServiceJob Attica__BuildServiceJob;
typedef struct Attica__DeleteJob Attica__DeleteJob;
typedef struct Attica__Message Attica__Message;
typedef struct Attica__PostJob Attica__PostJob;
typedef struct Attica__Project Attica__Project;
typedef struct Attica__Provider Attica__Provider;
typedef struct Attica__Publisher Attica__Publisher;
typedef struct Attica__PublisherField Attica__PublisherField;
typedef struct Attica__PutJob Attica__PutJob;
typedef struct Attica__RemoteAccount Attica__RemoteAccount;
typedef struct QDateTime QDateTime;
typedef struct QIODevice QIODevice;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

Attica__Provider* Attica__Provider_new();
Attica__Provider* Attica__Provider_new2(const Attica__Provider* other);
void Attica__Provider_OperatorAssign(Attica__Provider* self, const Attica__Provider* other);
bool Attica__Provider_IsValid(const Attica__Provider* self);
bool Attica__Provider_IsEnabled(const Attica__Provider* self);
void Attica__Provider_SetEnabled(Attica__Provider* self, bool enabled);
void Attica__Provider_SetAdditionalAgentInformation(Attica__Provider* self, const libqt_string additionalInformation);
libqt_string Attica__Provider_AdditionalAgentInformation(const Attica__Provider* self);
QUrl* Attica__Provider_BaseUrl(const Attica__Provider* self);
libqt_string Attica__Provider_Name(const Attica__Provider* self);
QUrl* Attica__Provider_Icon(const Attica__Provider* self);
bool Attica__Provider_HasPersonService(const Attica__Provider* self);
libqt_string Attica__Provider_PersonServiceVersion(const Attica__Provider* self);
bool Attica__Provider_HasFriendService(const Attica__Provider* self);
libqt_string Attica__Provider_FriendServiceVersion(const Attica__Provider* self);
bool Attica__Provider_HasMessageService(const Attica__Provider* self);
libqt_string Attica__Provider_MessageServiceVersion(const Attica__Provider* self);
bool Attica__Provider_HasAchievementService(const Attica__Provider* self);
libqt_string Attica__Provider_AchievementServiceVersion(const Attica__Provider* self);
bool Attica__Provider_HasActivityService(const Attica__Provider* self);
libqt_string Attica__Provider_ActivityServiceVersion(const Attica__Provider* self);
bool Attica__Provider_HasContentService(const Attica__Provider* self);
libqt_string Attica__Provider_ContentServiceVersion(const Attica__Provider* self);
bool Attica__Provider_HasFanService(const Attica__Provider* self);
libqt_string Attica__Provider_FanServiceVersion(const Attica__Provider* self);
bool Attica__Provider_HasForumService(const Attica__Provider* self);
libqt_string Attica__Provider_ForumServiceVersion(const Attica__Provider* self);
bool Attica__Provider_HasKnowledgebaseService(const Attica__Provider* self);
libqt_string Attica__Provider_KnowledgebaseServiceVersion(const Attica__Provider* self);
bool Attica__Provider_HasCommentService(const Attica__Provider* self);
libqt_string Attica__Provider_CommentServiceVersion(const Attica__Provider* self);
bool Attica__Provider_HasCredentials(const Attica__Provider* self);
bool Attica__Provider_HasCredentials2(Attica__Provider* self);
bool Attica__Provider_LoadCredentials(Attica__Provider* self, libqt_string user, libqt_string password);
bool Attica__Provider_SaveCredentials(Attica__Provider* self, const libqt_string user, const libqt_string password);
Attica__PostJob* Attica__Provider_CheckLogin(Attica__Provider* self, const libqt_string user, const libqt_string password);
Attica__PostJob* Attica__Provider_RegisterAccount(Attica__Provider* self, const libqt_string id, const libqt_string password, const libqt_string mail, const libqt_string firstName, const libqt_string lastName);
Attica__PostJob* Attica__Provider_PostLocation(Attica__Provider* self, double latitude, double longitude);
Attica__PostJob* Attica__Provider_SetPrivateData(Attica__Provider* self, const libqt_string app, const libqt_string key, const libqt_string value);
Attica__PostJob* Attica__Provider_InviteFriend(Attica__Provider* self, const libqt_string to, const libqt_string message);
Attica__PostJob* Attica__Provider_ApproveFriendship(Attica__Provider* self, const libqt_string to);
Attica__PostJob* Attica__Provider_DeclineFriendship(Attica__Provider* self, const libqt_string to);
Attica__PostJob* Attica__Provider_CancelFriendship(Attica__Provider* self, const libqt_string to);
Attica__PostJob* Attica__Provider_PostMessage(Attica__Provider* self, const Attica__Message* message);
Attica__PutJob* Attica__Provider_EditAchievement(Attica__Provider* self, const libqt_string contentId, const libqt_string achievementId, const Attica__Achievement* achievement);
Attica__DeleteJob* Attica__Provider_DeleteAchievement(Attica__Provider* self, const libqt_string contentId, const libqt_string achievementId);
Attica__PostJob* Attica__Provider_SetAchievementProgress(Attica__Provider* self, const libqt_string id, const QVariant* progress, const QDateTime* timestamp);
Attica__DeleteJob* Attica__Provider_ResetAchievementProgress(Attica__Provider* self, const libqt_string id);
Attica__PostJob* Attica__Provider_PostActivity(Attica__Provider* self, const libqt_string message);
Attica__PostJob* Attica__Provider_CreateProject(Attica__Provider* self, const Attica__Project* project);
Attica__PostJob* Attica__Provider_DeleteProject(Attica__Provider* self, const Attica__Project* project);
Attica__PostJob* Attica__Provider_EditProject(Attica__Provider* self, const Attica__Project* project);
Attica__PostJob* Attica__Provider_SavePublisherField(Attica__Provider* self, const Attica__Project* project, const Attica__PublisherField* field);
Attica__PostJob* Attica__Provider_PublishBuildJob(Attica__Provider* self, const Attica__BuildServiceJob* buildjob, const Attica__Publisher* publisher);
Attica__PostJob* Attica__Provider_CreateBuildServiceJob(Attica__Provider* self, const Attica__BuildServiceJob* job);
Attica__PostJob* Attica__Provider_CancelBuildServiceJob(Attica__Provider* self, const Attica__BuildServiceJob* job);
Attica__PostJob* Attica__Provider_DeleteRemoteAccount(Attica__Provider* self, const libqt_string id);
Attica__PostJob* Attica__Provider_CreateRemoteAccount(Attica__Provider* self, const Attica__RemoteAccount* account);
Attica__PostJob* Attica__Provider_EditRemoteAccount(Attica__Provider* self, const Attica__RemoteAccount* account);
Attica__PostJob* Attica__Provider_UploadTarballToBuildService(Attica__Provider* self, const libqt_string projectId, const libqt_string fileName, const libqt_string payload);
Attica__PostJob* Attica__Provider_VoteForContent(Attica__Provider* self, const libqt_string contentId, unsigned int rating);
Attica__PostJob* Attica__Provider_DeleteContent(Attica__Provider* self, const libqt_string contentId);
Attica__PostJob* Attica__Provider_SetDownloadFile(Attica__Provider* self, const libqt_string contentId, const libqt_string fileName, QIODevice* payload);
Attica__PostJob* Attica__Provider_SetDownloadFile2(Attica__Provider* self, const libqt_string contentId, const libqt_string fileName, const libqt_string payload);
Attica__PostJob* Attica__Provider_DeleteDownloadFile(Attica__Provider* self, const libqt_string contentId);
Attica__PostJob* Attica__Provider_SetPreviewImage(Attica__Provider* self, const libqt_string contentId, const libqt_string previewId, const libqt_string fileName, const libqt_string image);
Attica__PostJob* Attica__Provider_DeletePreviewImage(Attica__Provider* self, const libqt_string contentId, const libqt_string previewId);
Attica__PostJob* Attica__Provider_VoteForComment(Attica__Provider* self, const libqt_string id, unsigned int rating);
Attica__PostJob* Attica__Provider_BecomeFan(Attica__Provider* self, const libqt_string contentId);
Attica__PostJob* Attica__Provider_PostTopic(Attica__Provider* self, const libqt_string forumId, const libqt_string subject, const libqt_string content);
libqt_string Attica__Provider_GetRegisterAccountUrl(const Attica__Provider* self);
Attica__PostJob* Attica__Provider_PostLocation3(Attica__Provider* self, double latitude, double longitude, const libqt_string city);
Attica__PostJob* Attica__Provider_PostLocation4(Attica__Provider* self, double latitude, double longitude, const libqt_string city, const libqt_string country);
void Attica__Provider_Delete(Attica__Provider* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
