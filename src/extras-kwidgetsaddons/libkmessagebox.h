#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKMESSAGEBOX_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKMESSAGEBOX_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KConfig KConfig;
typedef struct KGuiItem KGuiItem;
typedef struct KMessageBox KMessageBox;
typedef struct KMessageBoxDontAskAgainInterface KMessageBoxDontAskAgainInterface;
typedef struct KMessageBoxNotifyInterface KMessageBoxNotifyInterface;
typedef struct QDialog QDialog;
typedef struct QDialogButtonBox QDialogButtonBox;
typedef struct QIcon QIcon;
typedef struct QWidget QWidget;
#endif

int KMessageBox_QuestionTwoActions(QWidget* parent, const libqt_string text, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const libqt_string dontAskAgainName, int options);
int KMessageBox_QuestionTwoActionsCancel(QWidget* parent, const libqt_string text, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const KGuiItem* cancelAction, const libqt_string dontAskAgainName, int options);
int KMessageBox_QuestionTwoActionsList(QWidget* parent, const libqt_string text, const libqt_list /* of libqt_string */ strlist, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const libqt_string dontAskAgainName, int options);
int KMessageBox_WarningTwoActions(QWidget* parent, const libqt_string text, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const libqt_string dontAskAgainName, int options);
int KMessageBox_WarningTwoActionsList(QWidget* parent, const libqt_string text, const libqt_list /* of libqt_string */ strlist, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const libqt_string dontAskAgainName, int options);
int KMessageBox_WarningContinueCancel(QWidget* parent, const libqt_string text, const libqt_string title, const KGuiItem* buttonContinue, const KGuiItem* buttonCancel, const libqt_string dontAskAgainName, int options);
int KMessageBox_WarningContinueCancelDetailed(QWidget* parent, const libqt_string text, const libqt_string title, const KGuiItem* buttonContinue, const KGuiItem* buttonCancel, const libqt_string dontAskAgainName, int options, const libqt_string details);
int KMessageBox_WarningContinueCancelList(QWidget* parent, const libqt_string text, const libqt_list /* of libqt_string */ strlist, const libqt_string title, const KGuiItem* buttonContinue, const KGuiItem* buttonCancel, const libqt_string dontAskAgainName, int options);
int KMessageBox_WarningTwoActionsCancel(QWidget* parent, const libqt_string text, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const KGuiItem* cancelAction, const libqt_string dontAskAgainName, int options);
int KMessageBox_WarningTwoActionsCancelList(QWidget* parent, const libqt_string text, const libqt_list /* of libqt_string */ strlist, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const KGuiItem* cancelAction, const libqt_string dontAskAgainName, int options);
void KMessageBox_Error(QWidget* parent, const libqt_string text, const libqt_string title, int options);
void KMessageBox_Error2(QWidget* parent, const libqt_string text, const libqt_string title, const KGuiItem* buttonOk, int options);
void KMessageBox_ErrorList(QWidget* parent, const libqt_string text, const libqt_list /* of libqt_string */ strlist, const libqt_string title, int options);
void KMessageBox_DetailedError(QWidget* parent, const libqt_string text, const libqt_string details, const libqt_string title, int options);
void KMessageBox_DetailedError2(QWidget* parent, const libqt_string text, const libqt_string details, const libqt_string title, const KGuiItem* buttonOk, int options);
void KMessageBox_Information(QWidget* parent, const libqt_string text, const libqt_string title, const libqt_string dontShowAgainName, int options);
void KMessageBox_InformationList(QWidget* parent, const libqt_string text, const libqt_list /* of libqt_string */ strlist, const libqt_string title, const libqt_string dontShowAgainName, int options);
void KMessageBox_EnableAllMessages();
void KMessageBox_EnableMessage(const libqt_string dontShowAgainName);
int KMessageBox_MessageBox(QWidget* parent, int type, const libqt_string text, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const KGuiItem* cancelAction, const libqt_string dontShowAskAgainName, int options);
bool KMessageBox_ShouldBeShownTwoActions(const libqt_string dontShowAgainName, int* result);
bool KMessageBox_ShouldBeShownContinue(const libqt_string dontShowAgainName);
void KMessageBox_SaveDontShowAgainTwoActions(const libqt_string dontShowAgainName, int result);
void KMessageBox_SaveDontShowAgainContinue(const libqt_string dontShowAgainName);
void KMessageBox_SetDontShowAgainConfig(KConfig* cfg);
void KMessageBox_SetDontShowAgainInterface(KMessageBoxDontAskAgainInterface* dontAskAgainInterface);
void KMessageBox_SetNotifyInterface(KMessageBoxNotifyInterface* notifyInterface);
int KMessageBox_CreateKMessageBox(QDialog* dialog, QDialogButtonBox* buttons, int icon, const libqt_string text, const libqt_list /* of libqt_string */ strlist, const libqt_string ask, bool* checkboxReturn, int options, const libqt_string details);
int KMessageBox_CreateKMessageBox2(QDialog* dialog, QDialogButtonBox* buttons, const QIcon* icon, const libqt_string text, const libqt_list /* of libqt_string */ strlist, const libqt_string ask, bool* checkboxReturn, int options, const libqt_string details, int notifyType);
int KMessageBox_QuestionTwoActionsWId(uintptr_t parent_id, const libqt_string text, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const libqt_string dontAskAgainName, int options);
int KMessageBox_QuestionTwoActionsCancelWId(uintptr_t parent_id, const libqt_string text, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const KGuiItem* cancelAction, const libqt_string dontAskAgainName, int options);
int KMessageBox_QuestionTwoActionsListWId(uintptr_t parent_id, const libqt_string text, const libqt_list /* of libqt_string */ strlist, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const libqt_string dontAskAgainName, int options);
int KMessageBox_WarningTwoActionsWId(uintptr_t parent_id, const libqt_string text, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const libqt_string dontAskAgainName, int options);
int KMessageBox_WarningTwoActionsListWId(uintptr_t parent_id, const libqt_string text, const libqt_list /* of libqt_string */ strlist, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const libqt_string dontAskAgainName, int options);
int KMessageBox_WarningContinueCancelWId(uintptr_t parent_id, const libqt_string text, const libqt_string title, const KGuiItem* buttonContinue, const KGuiItem* buttonCancel, const libqt_string dontAskAgainName, int options);
int KMessageBox_WarningContinueCancelListWId(uintptr_t parent_id, const libqt_string text, const libqt_list /* of libqt_string */ strlist, const libqt_string title, const KGuiItem* buttonContinue, const KGuiItem* buttonCancel, const libqt_string dontAskAgainName, int options);
int KMessageBox_WarningTwoActionsCancelWId(uintptr_t parent_id, const libqt_string text, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const KGuiItem* cancelAction, const libqt_string dontAskAgainName, int options);
int KMessageBox_WarningTwoActionsCancelListWId(uintptr_t parent_id, const libqt_string text, const libqt_list /* of libqt_string */ strlist, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const KGuiItem* cancelAction, const libqt_string dontAskAgainName, int options);
void KMessageBox_ErrorWId(uintptr_t parent_id, const libqt_string text, const libqt_string title, int options);
void KMessageBox_ErrorListWId(uintptr_t parent_id, const libqt_string text, const libqt_list /* of libqt_string */ strlist, const libqt_string title, int options);
void KMessageBox_DetailedErrorWId(uintptr_t parent_id, const libqt_string text, const libqt_string details, const libqt_string title, int options);
void KMessageBox_DetailedErrorWId2(uintptr_t parent_id, const libqt_string text, const libqt_string details, const libqt_string title, const KGuiItem* buttonOk, int options);
void KMessageBox_InformationWId(uintptr_t parent_id, const libqt_string text, const libqt_string title, const libqt_string dontShowAgainName, int options);
void KMessageBox_InformationListWId(uintptr_t parent_id, const libqt_string text, const libqt_list /* of libqt_string */ strlist, const libqt_string title, const libqt_string dontShowAgainName, int options);
int KMessageBox_MessageBoxWId(uintptr_t parent_id, int type, const libqt_string text, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const KGuiItem* cancelAction, const libqt_string dontShowAskAgainName, int options);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
