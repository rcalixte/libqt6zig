#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBACHIEVEMENT_H
#define SRC_EXTRAS_ATTICAC_LIBACHIEVEMENT_H

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
#else
typedef struct Attica__Achievement Attica__Achievement;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

Attica__Achievement* Attica__Achievement_new();
Attica__Achievement* Attica__Achievement_new2(const Attica__Achievement* other);
int Attica__Achievement_StringToAchievementType(const libqt_string achievementTypeString);
libqt_string Attica__Achievement_AchievementTypeToString(const int typeVal);
int Attica__Achievement_StringToAchievementVisibility(const libqt_string achievementVisibilityString);
libqt_string Attica__Achievement_AchievementVisibilityToString(const int visibility);
void Attica__Achievement_OperatorAssign(Attica__Achievement* self, const Attica__Achievement* other);
void Attica__Achievement_SetId(Attica__Achievement* self, const libqt_string id);
libqt_string Attica__Achievement_Id(const Attica__Achievement* self);
void Attica__Achievement_SetContentId(Attica__Achievement* self, const libqt_string contentId);
libqt_string Attica__Achievement_ContentId(const Attica__Achievement* self);
void Attica__Achievement_SetName(Attica__Achievement* self, const libqt_string name);
libqt_string Attica__Achievement_Name(const Attica__Achievement* self);
void Attica__Achievement_SetDescription(Attica__Achievement* self, const libqt_string description);
libqt_string Attica__Achievement_Description(const Attica__Achievement* self);
void Attica__Achievement_SetExplanation(Attica__Achievement* self, const libqt_string explanation);
libqt_string Attica__Achievement_Explanation(const Attica__Achievement* self);
void Attica__Achievement_SetPoints(Attica__Achievement* self, const int points);
int Attica__Achievement_Points(const Attica__Achievement* self);
void Attica__Achievement_SetImage(Attica__Achievement* self, const QUrl* image);
QUrl* Attica__Achievement_Image(const Attica__Achievement* self);
void Attica__Achievement_SetDependencies(Attica__Achievement* self, const libqt_list /* of libqt_string */ dependencies);
void Attica__Achievement_AddDependency(Attica__Achievement* self, const libqt_string dependency);
void Attica__Achievement_RemoveDependency(Attica__Achievement* self, const libqt_string dependency);
libqt_list /* of libqt_string */ Attica__Achievement_Dependencies(const Attica__Achievement* self);
void Attica__Achievement_SetVisibility(Attica__Achievement* self, int visibility);
int Attica__Achievement_Visibility(const Attica__Achievement* self);
void Attica__Achievement_SetType(Attica__Achievement* self, int typeVal);
int Attica__Achievement_Type(const Attica__Achievement* self);
void Attica__Achievement_SetOptions(Attica__Achievement* self, const libqt_list /* of libqt_string */ options);
void Attica__Achievement_AddOption(Attica__Achievement* self, const libqt_string option);
void Attica__Achievement_RemoveOption(Attica__Achievement* self, const libqt_string option);
libqt_list /* of libqt_string */ Attica__Achievement_Options(const Attica__Achievement* self);
void Attica__Achievement_SetSteps(Attica__Achievement* self, const int steps);
int Attica__Achievement_Steps(const Attica__Achievement* self);
void Attica__Achievement_SetProgress(Attica__Achievement* self, const QVariant* progress);
QVariant* Attica__Achievement_Progress(const Attica__Achievement* self);
bool Attica__Achievement_IsValid(const Attica__Achievement* self);
void Attica__Achievement_Delete(Attica__Achievement* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
