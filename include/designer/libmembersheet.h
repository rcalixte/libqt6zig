#pragma once
#ifndef SRC_DESIGNERC_LIBMEMBERSHEET_H
#define SRC_DESIGNERC_LIBMEMBERSHEET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDesignerMemberSheetExtension QDesignerMemberSheetExtension;
#endif

QDesignerMemberSheetExtension* QDesignerMemberSheetExtension_new();
int QDesignerMemberSheetExtension_Count(const QDesignerMemberSheetExtension* self);
int QDesignerMemberSheetExtension_IndexOf(const QDesignerMemberSheetExtension* self, const libqt_string name);
libqt_string QDesignerMemberSheetExtension_MemberName(const QDesignerMemberSheetExtension* self, int index);
libqt_string QDesignerMemberSheetExtension_MemberGroup(const QDesignerMemberSheetExtension* self, int index);
void QDesignerMemberSheetExtension_SetMemberGroup(QDesignerMemberSheetExtension* self, int index, const libqt_string group);
bool QDesignerMemberSheetExtension_IsVisible(const QDesignerMemberSheetExtension* self, int index);
void QDesignerMemberSheetExtension_SetVisible(QDesignerMemberSheetExtension* self, int index, bool b);
bool QDesignerMemberSheetExtension_IsSignal(const QDesignerMemberSheetExtension* self, int index);
bool QDesignerMemberSheetExtension_IsSlot(const QDesignerMemberSheetExtension* self, int index);
bool QDesignerMemberSheetExtension_InheritedFromWidget(const QDesignerMemberSheetExtension* self, int index);
libqt_string QDesignerMemberSheetExtension_DeclaredInClass(const QDesignerMemberSheetExtension* self, int index);
libqt_string QDesignerMemberSheetExtension_Signature(const QDesignerMemberSheetExtension* self, int index);
libqt_list /* of libqt_string */ QDesignerMemberSheetExtension_ParameterTypes(const QDesignerMemberSheetExtension* self, int index);
libqt_list /* of libqt_string */ QDesignerMemberSheetExtension_ParameterNames(const QDesignerMemberSheetExtension* self, int index);
void QDesignerMemberSheetExtension_OnCount(const QDesignerMemberSheetExtension* self, intptr_t slot);
int QDesignerMemberSheetExtension_SuperCount(const QDesignerMemberSheetExtension* self);
void QDesignerMemberSheetExtension_OnIndexOf(const QDesignerMemberSheetExtension* self, intptr_t slot);
int QDesignerMemberSheetExtension_SuperIndexOf(const QDesignerMemberSheetExtension* self, const libqt_string name);
void QDesignerMemberSheetExtension_OnMemberName(const QDesignerMemberSheetExtension* self, intptr_t slot);
libqt_string QDesignerMemberSheetExtension_SuperMemberName(const QDesignerMemberSheetExtension* self, int index);
void QDesignerMemberSheetExtension_OnMemberGroup(const QDesignerMemberSheetExtension* self, intptr_t slot);
libqt_string QDesignerMemberSheetExtension_SuperMemberGroup(const QDesignerMemberSheetExtension* self, int index);
void QDesignerMemberSheetExtension_OnSetMemberGroup(QDesignerMemberSheetExtension* self, intptr_t slot);
void QDesignerMemberSheetExtension_SuperSetMemberGroup(QDesignerMemberSheetExtension* self, int index, const libqt_string group);
void QDesignerMemberSheetExtension_OnIsVisible(const QDesignerMemberSheetExtension* self, intptr_t slot);
bool QDesignerMemberSheetExtension_SuperIsVisible(const QDesignerMemberSheetExtension* self, int index);
void QDesignerMemberSheetExtension_OnSetVisible(QDesignerMemberSheetExtension* self, intptr_t slot);
void QDesignerMemberSheetExtension_SuperSetVisible(QDesignerMemberSheetExtension* self, int index, bool b);
void QDesignerMemberSheetExtension_OnIsSignal(const QDesignerMemberSheetExtension* self, intptr_t slot);
bool QDesignerMemberSheetExtension_SuperIsSignal(const QDesignerMemberSheetExtension* self, int index);
void QDesignerMemberSheetExtension_OnIsSlot(const QDesignerMemberSheetExtension* self, intptr_t slot);
bool QDesignerMemberSheetExtension_SuperIsSlot(const QDesignerMemberSheetExtension* self, int index);
void QDesignerMemberSheetExtension_OnInheritedFromWidget(const QDesignerMemberSheetExtension* self, intptr_t slot);
bool QDesignerMemberSheetExtension_SuperInheritedFromWidget(const QDesignerMemberSheetExtension* self, int index);
void QDesignerMemberSheetExtension_OnDeclaredInClass(const QDesignerMemberSheetExtension* self, intptr_t slot);
libqt_string QDesignerMemberSheetExtension_SuperDeclaredInClass(const QDesignerMemberSheetExtension* self, int index);
void QDesignerMemberSheetExtension_OnSignature(const QDesignerMemberSheetExtension* self, intptr_t slot);
libqt_string QDesignerMemberSheetExtension_SuperSignature(const QDesignerMemberSheetExtension* self, int index);
void QDesignerMemberSheetExtension_OnParameterTypes(const QDesignerMemberSheetExtension* self, intptr_t slot);
libqt_list /* of libqt_string */ QDesignerMemberSheetExtension_SuperParameterTypes(const QDesignerMemberSheetExtension* self, int index);
void QDesignerMemberSheetExtension_OnParameterNames(const QDesignerMemberSheetExtension* self, intptr_t slot);
libqt_list /* of libqt_string */ QDesignerMemberSheetExtension_SuperParameterNames(const QDesignerMemberSheetExtension* self, int index);
void QDesignerMemberSheetExtension_Delete(QDesignerMemberSheetExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
