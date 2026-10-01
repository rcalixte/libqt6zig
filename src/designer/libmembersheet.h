#pragma once
#ifndef DESIGNER_LIBMEMBERSHEET_H
#define DESIGNER_LIBMEMBERSHEET_H

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
void QDesignerMemberSheetExtension_OnCount(QDesignerMemberSheetExtension* self, intptr_t slot);
void QDesignerMemberSheetExtension_OnIndexOf(QDesignerMemberSheetExtension* self, intptr_t slot);
void QDesignerMemberSheetExtension_OnMemberName(QDesignerMemberSheetExtension* self, intptr_t slot);
void QDesignerMemberSheetExtension_OnMemberGroup(QDesignerMemberSheetExtension* self, intptr_t slot);
void QDesignerMemberSheetExtension_OnSetMemberGroup(QDesignerMemberSheetExtension* self, intptr_t slot);
void QDesignerMemberSheetExtension_OnIsVisible(QDesignerMemberSheetExtension* self, intptr_t slot);
void QDesignerMemberSheetExtension_OnSetVisible(QDesignerMemberSheetExtension* self, intptr_t slot);
void QDesignerMemberSheetExtension_OnIsSignal(QDesignerMemberSheetExtension* self, intptr_t slot);
void QDesignerMemberSheetExtension_OnIsSlot(QDesignerMemberSheetExtension* self, intptr_t slot);
void QDesignerMemberSheetExtension_OnInheritedFromWidget(QDesignerMemberSheetExtension* self, intptr_t slot);
void QDesignerMemberSheetExtension_OnDeclaredInClass(QDesignerMemberSheetExtension* self, intptr_t slot);
void QDesignerMemberSheetExtension_OnSignature(QDesignerMemberSheetExtension* self, intptr_t slot);
void QDesignerMemberSheetExtension_OnParameterTypes(QDesignerMemberSheetExtension* self, intptr_t slot);
void QDesignerMemberSheetExtension_OnParameterNames(QDesignerMemberSheetExtension* self, intptr_t slot);
void QDesignerMemberSheetExtension_Delete(QDesignerMemberSheetExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
