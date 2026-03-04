#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_POPPLERC_LIBPOPPLER_LINK_H
#define SRC_RESTRICTED_EXTRAS_POPPLERC_LIBPOPPLER_LINK_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__Link)
typedef Poppler::Link Poppler__Link;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkAction)
typedef Poppler::LinkAction Poppler__LinkAction;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkBrowse)
typedef Poppler::LinkBrowse Poppler__LinkBrowse;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkDestination)
typedef Poppler::LinkDestination Poppler__LinkDestination;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkExecute)
typedef Poppler::LinkExecute Poppler__LinkExecute;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkGoto)
typedef Poppler::LinkGoto Poppler__LinkGoto;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkHide)
typedef Poppler::LinkHide Poppler__LinkHide;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkJavaScript)
typedef Poppler::LinkJavaScript Poppler__LinkJavaScript;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkMovie)
typedef Poppler::LinkMovie Poppler__LinkMovie;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkOCGState)
typedef Poppler::LinkOCGState Poppler__LinkOCGState;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkRendition)
typedef Poppler::LinkRendition Poppler__LinkRendition;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkResetForm)
typedef Poppler::LinkResetForm Poppler__LinkResetForm;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkSound)
typedef Poppler::LinkSound Poppler__LinkSound;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkSubmitForm)
typedef Poppler::LinkSubmitForm Poppler__LinkSubmitForm;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__MediaRendition)
typedef Poppler::MediaRendition Poppler__MediaRendition;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__MovieAnnotation)
typedef Poppler::MovieAnnotation Poppler__MovieAnnotation;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__ScreenAnnotation)
typedef Poppler::ScreenAnnotation Poppler__ScreenAnnotation;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__SoundObject)
typedef Poppler::SoundObject Poppler__SoundObject;
#endif
#else
typedef struct Poppler__Link Poppler__Link;
typedef struct Poppler__LinkAction Poppler__LinkAction;
typedef struct Poppler__LinkBrowse Poppler__LinkBrowse;
typedef struct Poppler__LinkDestination Poppler__LinkDestination;
typedef struct Poppler__LinkExecute Poppler__LinkExecute;
typedef struct Poppler__LinkGoto Poppler__LinkGoto;
typedef struct Poppler__LinkHide Poppler__LinkHide;
typedef struct Poppler__LinkJavaScript Poppler__LinkJavaScript;
typedef struct Poppler__LinkMovie Poppler__LinkMovie;
typedef struct Poppler__LinkOCGState Poppler__LinkOCGState;
typedef struct Poppler__LinkRendition Poppler__LinkRendition;
typedef struct Poppler__LinkResetForm Poppler__LinkResetForm;
typedef struct Poppler__LinkSound Poppler__LinkSound;
typedef struct Poppler__LinkSubmitForm Poppler__LinkSubmitForm;
typedef struct Poppler__MediaRendition Poppler__MediaRendition;
typedef struct Poppler__MovieAnnotation Poppler__MovieAnnotation;
typedef struct Poppler__ScreenAnnotation Poppler__ScreenAnnotation;
typedef struct Poppler__SoundObject Poppler__SoundObject;
typedef struct QRectF QRectF;
#endif

Poppler__LinkDestination* Poppler__LinkDestination_new(const libqt_string description);
Poppler__LinkDestination* Poppler__LinkDestination_new2(const Poppler__LinkDestination* other);
int Poppler__LinkDestination_Kind(const Poppler__LinkDestination* self);
int Poppler__LinkDestination_PageNumber(const Poppler__LinkDestination* self);
double Poppler__LinkDestination_Left(const Poppler__LinkDestination* self);
double Poppler__LinkDestination_Bottom(const Poppler__LinkDestination* self);
double Poppler__LinkDestination_Right(const Poppler__LinkDestination* self);
double Poppler__LinkDestination_Top(const Poppler__LinkDestination* self);
double Poppler__LinkDestination_Zoom(const Poppler__LinkDestination* self);
bool Poppler__LinkDestination_IsChangeLeft(const Poppler__LinkDestination* self);
bool Poppler__LinkDestination_IsChangeTop(const Poppler__LinkDestination* self);
bool Poppler__LinkDestination_IsChangeZoom(const Poppler__LinkDestination* self);
libqt_string Poppler__LinkDestination_ToString(const Poppler__LinkDestination* self);
libqt_string Poppler__LinkDestination_DestinationName(const Poppler__LinkDestination* self);
void Poppler__LinkDestination_OperatorAssign(Poppler__LinkDestination* self, const Poppler__LinkDestination* other);
void Poppler__LinkDestination_Delete(Poppler__LinkDestination* self);

Poppler__Link* Poppler__Link_new(const QRectF* linkArea);
int Poppler__Link_LinkType(const Poppler__Link* self);
QRectF* Poppler__Link_LinkArea(const Poppler__Link* self);
libqt_list /* of Poppler__Link* */ Poppler__Link_NextLinks(const Poppler__Link* self);
void Poppler__Link_OnLinkType(const Poppler__Link* self, intptr_t slot);
int Poppler__Link_SuperLinkType(const Poppler__Link* self);
void Poppler__Link_Delete(Poppler__Link* self);

Poppler__LinkGoto* Poppler__LinkGoto_new(const QRectF* linkArea, const libqt_string extFileName, const Poppler__LinkDestination* destination);
bool Poppler__LinkGoto_IsExternal(const Poppler__LinkGoto* self);
libqt_string Poppler__LinkGoto_FileName(const Poppler__LinkGoto* self);
Poppler__LinkDestination* Poppler__LinkGoto_Destination(const Poppler__LinkGoto* self);
int Poppler__LinkGoto_LinkType(const Poppler__LinkGoto* self);
void Poppler__LinkGoto_OnLinkType(const Poppler__LinkGoto* self, intptr_t slot);
int Poppler__LinkGoto_SuperLinkType(const Poppler__LinkGoto* self);
void Poppler__LinkGoto_Delete(Poppler__LinkGoto* self);

Poppler__LinkExecute* Poppler__LinkExecute_new(const QRectF* linkArea, const libqt_string file, const libqt_string params);
libqt_string Poppler__LinkExecute_FileName(const Poppler__LinkExecute* self);
libqt_string Poppler__LinkExecute_Parameters(const Poppler__LinkExecute* self);
int Poppler__LinkExecute_LinkType(const Poppler__LinkExecute* self);
void Poppler__LinkExecute_OnLinkType(const Poppler__LinkExecute* self, intptr_t slot);
int Poppler__LinkExecute_SuperLinkType(const Poppler__LinkExecute* self);
void Poppler__LinkExecute_Delete(Poppler__LinkExecute* self);

Poppler__LinkBrowse* Poppler__LinkBrowse_new(const QRectF* linkArea, const libqt_string url);
libqt_string Poppler__LinkBrowse_Url(const Poppler__LinkBrowse* self);
int Poppler__LinkBrowse_LinkType(const Poppler__LinkBrowse* self);
void Poppler__LinkBrowse_OnLinkType(const Poppler__LinkBrowse* self, intptr_t slot);
int Poppler__LinkBrowse_SuperLinkType(const Poppler__LinkBrowse* self);
void Poppler__LinkBrowse_Delete(Poppler__LinkBrowse* self);

Poppler__LinkAction* Poppler__LinkAction_new(const QRectF* linkArea, int actionType);
int Poppler__LinkAction_ActionType(const Poppler__LinkAction* self);
int Poppler__LinkAction_LinkType(const Poppler__LinkAction* self);
void Poppler__LinkAction_OnLinkType(const Poppler__LinkAction* self, intptr_t slot);
int Poppler__LinkAction_SuperLinkType(const Poppler__LinkAction* self);
void Poppler__LinkAction_Delete(Poppler__LinkAction* self);

Poppler__LinkSound* Poppler__LinkSound_new(const QRectF* linkArea, double volume, bool sync, bool repeat, bool mix, Poppler__SoundObject* sound);
int Poppler__LinkSound_LinkType(const Poppler__LinkSound* self);
double Poppler__LinkSound_Volume(const Poppler__LinkSound* self);
bool Poppler__LinkSound_Synchronous(const Poppler__LinkSound* self);
bool Poppler__LinkSound_Repeat(const Poppler__LinkSound* self);
bool Poppler__LinkSound_Mix(const Poppler__LinkSound* self);
Poppler__SoundObject* Poppler__LinkSound_Sound(const Poppler__LinkSound* self);
void Poppler__LinkSound_OnLinkType(const Poppler__LinkSound* self, intptr_t slot);
int Poppler__LinkSound_SuperLinkType(const Poppler__LinkSound* self);
void Poppler__LinkSound_Delete(Poppler__LinkSound* self);

int Poppler__LinkRendition_LinkType(const Poppler__LinkRendition* self);
Poppler__MediaRendition* Poppler__LinkRendition_Rendition(const Poppler__LinkRendition* self);
int Poppler__LinkRendition_Action(const Poppler__LinkRendition* self);
libqt_string Poppler__LinkRendition_Script(const Poppler__LinkRendition* self);
bool Poppler__LinkRendition_IsReferencedAnnotation(const Poppler__LinkRendition* self, const Poppler__ScreenAnnotation* annotation);
void Poppler__LinkRendition_Delete(Poppler__LinkRendition* self);

Poppler__LinkJavaScript* Poppler__LinkJavaScript_new(const QRectF* linkArea, const libqt_string js);
int Poppler__LinkJavaScript_LinkType(const Poppler__LinkJavaScript* self);
libqt_string Poppler__LinkJavaScript_Script(const Poppler__LinkJavaScript* self);
void Poppler__LinkJavaScript_OnLinkType(const Poppler__LinkJavaScript* self, intptr_t slot);
int Poppler__LinkJavaScript_SuperLinkType(const Poppler__LinkJavaScript* self);
void Poppler__LinkJavaScript_Delete(Poppler__LinkJavaScript* self);

int Poppler__LinkMovie_LinkType(const Poppler__LinkMovie* self);
int Poppler__LinkMovie_Operation(const Poppler__LinkMovie* self);
bool Poppler__LinkMovie_IsReferencedAnnotation(const Poppler__LinkMovie* self, const Poppler__MovieAnnotation* annotation);
void Poppler__LinkMovie_Delete(Poppler__LinkMovie* self);

int Poppler__LinkOCGState_LinkType(const Poppler__LinkOCGState* self);
void Poppler__LinkOCGState_Delete(Poppler__LinkOCGState* self);

int Poppler__LinkHide_LinkType(const Poppler__LinkHide* self);
libqt_list /* of libqt_string */ Poppler__LinkHide_Targets(const Poppler__LinkHide* self);
bool Poppler__LinkHide_IsShowAction(const Poppler__LinkHide* self);
void Poppler__LinkHide_Delete(Poppler__LinkHide* self);

int Poppler__LinkResetForm_LinkType(const Poppler__LinkResetForm* self);
void Poppler__LinkResetForm_Delete(Poppler__LinkResetForm* self);

int Poppler__LinkSubmitForm_LinkType(const Poppler__LinkSubmitForm* self);
libqt_list /* of int */ Poppler__LinkSubmitForm_GetFieldIds(const Poppler__LinkSubmitForm* self);
libqt_string Poppler__LinkSubmitForm_GetUrl(const Poppler__LinkSubmitForm* self);
int Poppler__LinkSubmitForm_GetFlags(const Poppler__LinkSubmitForm* self);
void Poppler__LinkSubmitForm_Delete(Poppler__LinkSubmitForm* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
