#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKUSER_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKUSER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KUser KUser;
typedef struct KUserGroup KUserGroup;
typedef struct QVariant QVariant;
#endif

KUser* KUser_new();
KUser* KUser_new2(uid_t uid);
KUser* KUser_new3(const libqt_string name);
KUser* KUser_new4(const char* name);
KUser* KUser_new5(const KUser* user);
KUser* KUser_new6(int mode);
void KUser_OperatorAssign(KUser* self, const KUser* user);
bool KUser_OperatorEqual(const KUser* self, const KUser* user);
bool KUser_OperatorNotEqual(const KUser* self, const KUser* user);
bool KUser_IsValid(const KUser* self);
bool KUser_IsSuperUser(const KUser* self);
libqt_string KUser_LoginName(const KUser* self);
libqt_string KUser_HomeDir(const KUser* self);
libqt_string KUser_FaceIconPath(const KUser* self);
libqt_string KUser_Shell(const KUser* self);
libqt_list /* of KUserGroup* */ KUser_Groups(const KUser* self);
libqt_list /* of libqt_string */ KUser_GroupNames(const KUser* self);
QVariant* KUser_Property(const KUser* self, int which);
libqt_list /* of KUser* */ KUser_AllUsers();
libqt_list /* of libqt_string */ KUser_AllUserNames();
libqt_list /* of KUserGroup* */ KUser_Groups1(const KUser* self, unsigned int maxCount);
libqt_list /* of libqt_string */ KUser_GroupNames1(const KUser* self, unsigned int maxCount);
libqt_list /* of KUser* */ KUser_AllUsers1(unsigned int maxCount);
libqt_list /* of libqt_string */ KUser_AllUserNames1(unsigned int maxCount);
void KUser_Delete(KUser* self);

KUserGroup* KUserGroup_new(const libqt_string name);
KUserGroup* KUserGroup_new2(const char* name);
KUserGroup* KUserGroup_new3();
KUserGroup* KUserGroup_new4(gid_t gid);
KUserGroup* KUserGroup_new5(const KUserGroup* group);
KUserGroup* KUserGroup_new6(int mode);
void KUserGroup_OperatorAssign(KUserGroup* self, const KUserGroup* group);
bool KUserGroup_OperatorEqual(const KUserGroup* self, const KUserGroup* group);
bool KUserGroup_OperatorNotEqual(const KUserGroup* self, const KUserGroup* group);
bool KUserGroup_IsValid(const KUserGroup* self);
libqt_string KUserGroup_Name(const KUserGroup* self);
libqt_list /* of KUser* */ KUserGroup_Users(const KUserGroup* self);
libqt_list /* of libqt_string */ KUserGroup_UserNames(const KUserGroup* self);
libqt_list /* of KUserGroup* */ KUserGroup_AllGroups();
libqt_list /* of libqt_string */ KUserGroup_AllGroupNames();
libqt_list /* of KUser* */ KUserGroup_Users1(const KUserGroup* self, unsigned int maxCount);
libqt_list /* of libqt_string */ KUserGroup_UserNames1(const KUserGroup* self, unsigned int maxCount);
libqt_list /* of KUserGroup* */ KUserGroup_AllGroups1(unsigned int maxCount);
libqt_list /* of libqt_string */ KUserGroup_AllGroupNames1(unsigned int maxCount);
void KUserGroup_Delete(KUserGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
