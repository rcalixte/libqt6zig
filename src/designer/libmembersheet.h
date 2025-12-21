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
int QDesignerMemberSheetExtension_QBaseCount(const QDesignerMemberSheetExtension* self);
void QDesignerMemberSheetExtension_OnIndexOf(const QDesignerMemberSheetExtension* self, intptr_t slot);
int QDesignerMemberSheetExtension_QBaseIndexOf(const QDesignerMemberSheetExtension* self, const libqt_string name);
void QDesignerMemberSheetExtension_OnMemberName(const QDesignerMemberSheetExtension* self, intptr_t slot);
libqt_string QDesignerMemberSheetExtension_QBaseMemberName(const QDesignerMemberSheetExtension* self, int index);
void QDesignerMemberSheetExtension_OnMemberGroup(const QDesignerMemberSheetExtension* self, intptr_t slot);
libqt_string QDesignerMemberSheetExtension_QBaseMemberGroup(const QDesignerMemberSheetExtension* self, int index);
void QDesignerMemberSheetExtension_OnSetMemberGroup(QDesignerMemberSheetExtension* self, intptr_t slot);
void QDesignerMemberSheetExtension_QBaseSetMemberGroup(QDesignerMemberSheetExtension* self, int index, const libqt_string group);
void QDesignerMemberSheetExtension_OnIsVisible(const QDesignerMemberSheetExtension* self, intptr_t slot);
bool QDesignerMemberSheetExtension_QBaseIsVisible(const QDesignerMemberSheetExtension* self, int index);
void QDesignerMemberSheetExtension_OnSetVisible(QDesignerMemberSheetExtension* self, intptr_t slot);
void QDesignerMemberSheetExtension_QBaseSetVisible(QDesignerMemberSheetExtension* self, int index, bool b);
void QDesignerMemberSheetExtension_OnIsSignal(const QDesignerMemberSheetExtension* self, intptr_t slot);
bool QDesignerMemberSheetExtension_QBaseIsSignal(const QDesignerMemberSheetExtension* self, int index);
void QDesignerMemberSheetExtension_OnIsSlot(const QDesignerMemberSheetExtension* self, intptr_t slot);
bool QDesignerMemberSheetExtension_QBaseIsSlot(const QDesignerMemberSheetExtension* self, int index);
void QDesignerMemberSheetExtension_OnInheritedFromWidget(const QDesignerMemberSheetExtension* self, intptr_t slot);
bool QDesignerMemberSheetExtension_QBaseInheritedFromWidget(const QDesignerMemberSheetExtension* self, int index);
void QDesignerMemberSheetExtension_OnDeclaredInClass(const QDesignerMemberSheetExtension* self, intptr_t slot);
libqt_string QDesignerMemberSheetExtension_QBaseDeclaredInClass(const QDesignerMemberSheetExtension* self, int index);
void QDesignerMemberSheetExtension_OnSignature(const QDesignerMemberSheetExtension* self, intptr_t slot);
libqt_string QDesignerMemberSheetExtension_QBaseSignature(const QDesignerMemberSheetExtension* self, int index);
void QDesignerMemberSheetExtension_OnParameterTypes(const QDesignerMemberSheetExtension* self, intptr_t slot);
libqt_list /* of libqt_string */ QDesignerMemberSheetExtension_QBaseParameterTypes(const QDesignerMemberSheetExtension* self, int index);
void QDesignerMemberSheetExtension_OnParameterNames(const QDesignerMemberSheetExtension* self, intptr_t slot);
libqt_list /* of libqt_string */ QDesignerMemberSheetExtension_QBaseParameterNames(const QDesignerMemberSheetExtension* self, int index);
void QDesignerMemberSheetExtension_Delete(QDesignerMemberSheetExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
