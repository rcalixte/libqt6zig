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

int KMessageBox_QuestionTwoActions(QWidget* param1, const libqt_string param2, const libqt_string param3, const KGuiItem* param4, const KGuiItem* param5, const libqt_string param6, int param7);
int KMessageBox_QuestionTwoActionsCancel(QWidget* param1, const libqt_string param2, const libqt_string param3, const KGuiItem* param4, const KGuiItem* param5, const KGuiItem* param6, const libqt_string param7, int param8);
int KMessageBox_QuestionTwoActionsList(QWidget* param1, const libqt_string param2, const libqt_list /* of libqt_string */ param3, const libqt_string param4, const KGuiItem* param5, const KGuiItem* param6, const libqt_string param7, int param8);
int KMessageBox_WarningTwoActions(QWidget* param1, const libqt_string param2, const libqt_string param3, const KGuiItem* param4, const KGuiItem* param5, const libqt_string param6, int param7);
int KMessageBox_WarningTwoActionsList(QWidget* param1, const libqt_string param2, const libqt_list /* of libqt_string */ param3, const libqt_string param4, const KGuiItem* param5, const KGuiItem* param6, const libqt_string param7, int param8);
int KMessageBox_WarningContinueCancel(QWidget* param1, const libqt_string param2, const libqt_string param3, const KGuiItem* param4, const KGuiItem* param5, const libqt_string param6, int param7);
int KMessageBox_WarningContinueCancelDetailed(QWidget* param1, const libqt_string param2, const libqt_string param3, const KGuiItem* param4, const KGuiItem* param5, const libqt_string param6, int param7, const libqt_string param8);
int KMessageBox_WarningContinueCancelList(QWidget* param1, const libqt_string param2, const libqt_list /* of libqt_string */ param3, const libqt_string param4, const KGuiItem* param5, const KGuiItem* param6, const libqt_string param7, int param8);
int KMessageBox_WarningTwoActionsCancel(QWidget* param1, const libqt_string param2, const libqt_string param3, const KGuiItem* param4, const KGuiItem* param5, const KGuiItem* param6, const libqt_string param7, int param8);
int KMessageBox_WarningTwoActionsCancelList(QWidget* param1, const libqt_string param2, const libqt_list /* of libqt_string */ param3, const libqt_string param4, const KGuiItem* param5, const KGuiItem* param6, const KGuiItem* param7, const libqt_string param8, int param9);
void KMessageBox_Error(QWidget* param1, const libqt_string param2, const libqt_string param3, int param4);
void KMessageBox_Error2(QWidget* param1, const libqt_string param2, const libqt_string param3, const KGuiItem* param4, int param5);
void KMessageBox_ErrorList(QWidget* param1, const libqt_string param2, const libqt_list /* of libqt_string */ param3, const libqt_string param4, int param5);
void KMessageBox_DetailedError(QWidget* param1, const libqt_string param2, const libqt_string param3, const libqt_string param4, int param5);
void KMessageBox_DetailedError2(QWidget* param1, const libqt_string param2, const libqt_string param3, const libqt_string param4, const KGuiItem* param5, int param6);
void KMessageBox_Information(QWidget* param1, const libqt_string param2, const libqt_string param3, const libqt_string param4, int param5);
void KMessageBox_InformationList(QWidget* param1, const libqt_string param2, const libqt_list /* of libqt_string */ param3, const libqt_string param4, const libqt_string param5, int param6);
void KMessageBox_EnableAllMessages();
void KMessageBox_EnableMessage(const libqt_string param1);
int KMessageBox_MessageBox(QWidget* param1, int param2, const libqt_string param3, const libqt_string param4, const KGuiItem* param5, const KGuiItem* param6, const KGuiItem* param7, const libqt_string param8, int param9);
bool KMessageBox_ShouldBeShownTwoActions(const libqt_string param1, int* param2);
bool KMessageBox_ShouldBeShownContinue(const libqt_string param1);
void KMessageBox_SaveDontShowAgainTwoActions(const libqt_string param1, int param2);
void KMessageBox_SaveDontShowAgainContinue(const libqt_string param1);
void KMessageBox_SetDontShowAgainConfig(KConfig* param1);
void KMessageBox_SetDontShowAgainInterface(KMessageBoxDontAskAgainInterface* param1);
void KMessageBox_SetNotifyInterface(KMessageBoxNotifyInterface* param1);
int KMessageBox_CreateKMessageBox(QDialog* param1, QDialogButtonBox* param2, int param3, const libqt_string param4, const libqt_list /* of libqt_string */ param5, const libqt_string param6, bool* param7, int param8, const libqt_string param9);
int KMessageBox_CreateKMessageBox2(QDialog* param1, QDialogButtonBox* param2, const QIcon* param3, const libqt_string param4, const libqt_list /* of libqt_string */ param5, const libqt_string param6, bool* param7, int param8, const libqt_string param9, int param10);
int KMessageBox_QuestionTwoActionsWId(uintptr_t param1, const libqt_string param2, const libqt_string param3, const KGuiItem* param4, const KGuiItem* param5, const libqt_string param6, int param7);
int KMessageBox_QuestionTwoActionsCancelWId(uintptr_t param1, const libqt_string param2, const libqt_string param3, const KGuiItem* param4, const KGuiItem* param5, const KGuiItem* param6, const libqt_string param7, int param8);
int KMessageBox_QuestionTwoActionsListWId(uintptr_t param1, const libqt_string param2, const libqt_list /* of libqt_string */ param3, const libqt_string param4, const KGuiItem* param5, const KGuiItem* param6, const libqt_string param7, int param8);
int KMessageBox_WarningTwoActionsWId(uintptr_t param1, const libqt_string param2, const libqt_string param3, const KGuiItem* param4, const KGuiItem* param5, const libqt_string param6, int param7);
int KMessageBox_WarningTwoActionsListWId(uintptr_t param1, const libqt_string param2, const libqt_list /* of libqt_string */ param3, const libqt_string param4, const KGuiItem* param5, const KGuiItem* param6, const libqt_string param7, int param8);
int KMessageBox_WarningContinueCancelWId(uintptr_t param1, const libqt_string param2, const libqt_string param3, const KGuiItem* param4, const KGuiItem* param5, const libqt_string param6, int param7);
int KMessageBox_WarningContinueCancelListWId(uintptr_t param1, const libqt_string param2, const libqt_list /* of libqt_string */ param3, const libqt_string param4, const KGuiItem* param5, const KGuiItem* param6, const libqt_string param7, int param8);
int KMessageBox_WarningTwoActionsCancelWId(uintptr_t param1, const libqt_string param2, const libqt_string param3, const KGuiItem* param4, const KGuiItem* param5, const KGuiItem* param6, const libqt_string param7, int param8);
int KMessageBox_WarningTwoActionsCancelListWId(uintptr_t param1, const libqt_string param2, const libqt_list /* of libqt_string */ param3, const libqt_string param4, const KGuiItem* param5, const KGuiItem* param6, const KGuiItem* param7, const libqt_string param8, int param9);
void KMessageBox_ErrorWId(uintptr_t param1, const libqt_string param2, const libqt_string param3, int param4);
void KMessageBox_ErrorListWId(uintptr_t param1, const libqt_string param2, const libqt_list /* of libqt_string */ param3, const libqt_string param4, int param5);
void KMessageBox_DetailedErrorWId(uintptr_t param1, const libqt_string param2, const libqt_string param3, const libqt_string param4, int param5);
void KMessageBox_DetailedErrorWId2(uintptr_t param1, const libqt_string param2, const libqt_string param3, const libqt_string param4, const KGuiItem* param5, int param6);
void KMessageBox_InformationWId(uintptr_t param1, const libqt_string param2, const libqt_string param3, const libqt_string param4, int param5);
void KMessageBox_InformationListWId(uintptr_t param1, const libqt_string param2, const libqt_list /* of libqt_string */ param3, const libqt_string param4, const libqt_string param5, int param6);
int KMessageBox_MessageBoxWId(uintptr_t param1, int param2, const libqt_string param3, const libqt_string param4, const KGuiItem* param5, const KGuiItem* param6, const KGuiItem* param7, const libqt_string param8, int param9);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
