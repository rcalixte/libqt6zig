#include <KConfig>
#include <KGuiItem>
#include <KMessageBox>
#include <KMessageBoxDontAskAgainInterface>
#include <KMessageBoxNotifyInterface>
#include <QDialog>
#include <QDialogButtonBox>
#include <QIcon>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <kmessagebox.h>
#include "libkmessagebox.h"
#include "libkmessagebox.hxx"

int KMessageBox_QuestionTwoActions(QWidget* param1, const libqt_string param2, const libqt_string param3, const KGuiItem* param4, const KGuiItem* param5, const libqt_string param6, int param7) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    QString param6_QString = QString::fromUtf8(param6.data, param6.len);
    return static_cast<int>(KMessageBox::questionTwoActions(param1, param2_QString, param3_QString, *param4, *param5, param6_QString, static_cast<KMessageBox::Options>(param7)));
}

int KMessageBox_QuestionTwoActionsCancel(QWidget* param1, const libqt_string param2, const libqt_string param3, const KGuiItem* param4, const KGuiItem* param5, const KGuiItem* param6, const libqt_string param7, int param8) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    QString param7_QString = QString::fromUtf8(param7.data, param7.len);
    return static_cast<int>(KMessageBox::questionTwoActionsCancel(param1, param2_QString, param3_QString, *param4, *param5, *param6, param7_QString, static_cast<KMessageBox::Options>(param8)));
}

int KMessageBox_QuestionTwoActionsList(QWidget* param1, const libqt_string param2, const libqt_list /* of libqt_string */ param3, const libqt_string param4, const KGuiItem* param5, const KGuiItem* param6, const libqt_string param7, int param8) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QList<QString> param3_QList;
    param3_QList.reserve(param3.len);
    libqt_string* param3_arr = static_cast<libqt_string*>(param3.data);
    for (size_t i = 0; i < param3.len; ++i) {
        QString param3_arr_i_QString = QString::fromUtf8(param3_arr[i].data, param3_arr[i].len);
        param3_QList.push_back(param3_arr_i_QString);
    }
    QString param4_QString = QString::fromUtf8(param4.data, param4.len);
    QString param7_QString = QString::fromUtf8(param7.data, param7.len);
    return static_cast<int>(KMessageBox::questionTwoActionsList(param1, param2_QString, param3_QList, param4_QString, *param5, *param6, param7_QString, static_cast<KMessageBox::Options>(param8)));
}

int KMessageBox_WarningTwoActions(QWidget* param1, const libqt_string param2, const libqt_string param3, const KGuiItem* param4, const KGuiItem* param5, const libqt_string param6, int param7) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    QString param6_QString = QString::fromUtf8(param6.data, param6.len);
    return static_cast<int>(KMessageBox::warningTwoActions(param1, param2_QString, param3_QString, *param4, *param5, param6_QString, static_cast<KMessageBox::Options>(param7)));
}

int KMessageBox_WarningTwoActionsList(QWidget* param1, const libqt_string param2, const libqt_list /* of libqt_string */ param3, const libqt_string param4, const KGuiItem* param5, const KGuiItem* param6, const libqt_string param7, int param8) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QList<QString> param3_QList;
    param3_QList.reserve(param3.len);
    libqt_string* param3_arr = static_cast<libqt_string*>(param3.data);
    for (size_t i = 0; i < param3.len; ++i) {
        QString param3_arr_i_QString = QString::fromUtf8(param3_arr[i].data, param3_arr[i].len);
        param3_QList.push_back(param3_arr_i_QString);
    }
    QString param4_QString = QString::fromUtf8(param4.data, param4.len);
    QString param7_QString = QString::fromUtf8(param7.data, param7.len);
    return static_cast<int>(KMessageBox::warningTwoActionsList(param1, param2_QString, param3_QList, param4_QString, *param5, *param6, param7_QString, static_cast<KMessageBox::Options>(param8)));
}

int KMessageBox_WarningContinueCancel(QWidget* param1, const libqt_string param2, const libqt_string param3, const KGuiItem* param4, const KGuiItem* param5, const libqt_string param6, int param7) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    QString param6_QString = QString::fromUtf8(param6.data, param6.len);
    return static_cast<int>(KMessageBox::warningContinueCancel(param1, param2_QString, param3_QString, *param4, *param5, param6_QString, static_cast<KMessageBox::Options>(param7)));
}

int KMessageBox_WarningContinueCancelDetailed(QWidget* param1, const libqt_string param2, const libqt_string param3, const KGuiItem* param4, const KGuiItem* param5, const libqt_string param6, int param7, const libqt_string param8) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    QString param6_QString = QString::fromUtf8(param6.data, param6.len);
    QString param8_QString = QString::fromUtf8(param8.data, param8.len);
    return static_cast<int>(KMessageBox::warningContinueCancelDetailed(param1, param2_QString, param3_QString, *param4, *param5, param6_QString, static_cast<KMessageBox::Options>(param7), param8_QString));
}

int KMessageBox_WarningContinueCancelList(QWidget* param1, const libqt_string param2, const libqt_list /* of libqt_string */ param3, const libqt_string param4, const KGuiItem* param5, const KGuiItem* param6, const libqt_string param7, int param8) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QList<QString> param3_QList;
    param3_QList.reserve(param3.len);
    libqt_string* param3_arr = static_cast<libqt_string*>(param3.data);
    for (size_t i = 0; i < param3.len; ++i) {
        QString param3_arr_i_QString = QString::fromUtf8(param3_arr[i].data, param3_arr[i].len);
        param3_QList.push_back(param3_arr_i_QString);
    }
    QString param4_QString = QString::fromUtf8(param4.data, param4.len);
    QString param7_QString = QString::fromUtf8(param7.data, param7.len);
    return static_cast<int>(KMessageBox::warningContinueCancelList(param1, param2_QString, param3_QList, param4_QString, *param5, *param6, param7_QString, static_cast<KMessageBox::Options>(param8)));
}

int KMessageBox_WarningTwoActionsCancel(QWidget* param1, const libqt_string param2, const libqt_string param3, const KGuiItem* param4, const KGuiItem* param5, const KGuiItem* param6, const libqt_string param7, int param8) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    QString param7_QString = QString::fromUtf8(param7.data, param7.len);
    return static_cast<int>(KMessageBox::warningTwoActionsCancel(param1, param2_QString, param3_QString, *param4, *param5, *param6, param7_QString, static_cast<KMessageBox::Options>(param8)));
}

int KMessageBox_WarningTwoActionsCancelList(QWidget* param1, const libqt_string param2, const libqt_list /* of libqt_string */ param3, const libqt_string param4, const KGuiItem* param5, const KGuiItem* param6, const KGuiItem* param7, const libqt_string param8, int param9) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QList<QString> param3_QList;
    param3_QList.reserve(param3.len);
    libqt_string* param3_arr = static_cast<libqt_string*>(param3.data);
    for (size_t i = 0; i < param3.len; ++i) {
        QString param3_arr_i_QString = QString::fromUtf8(param3_arr[i].data, param3_arr[i].len);
        param3_QList.push_back(param3_arr_i_QString);
    }
    QString param4_QString = QString::fromUtf8(param4.data, param4.len);
    QString param8_QString = QString::fromUtf8(param8.data, param8.len);
    return static_cast<int>(KMessageBox::warningTwoActionsCancelList(param1, param2_QString, param3_QList, param4_QString, *param5, *param6, *param7, param8_QString, static_cast<KMessageBox::Options>(param9)));
}

void KMessageBox_Error(QWidget* param1, const libqt_string param2, const libqt_string param3, int param4) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    KMessageBox::error(param1, param2_QString, param3_QString, static_cast<KMessageBox::Options>(param4));
}

void KMessageBox_Error2(QWidget* param1, const libqt_string param2, const libqt_string param3, const KGuiItem* param4, int param5) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    KMessageBox::error(param1, param2_QString, param3_QString, *param4, static_cast<KMessageBox::Options>(param5));
}

void KMessageBox_ErrorList(QWidget* param1, const libqt_string param2, const libqt_list /* of libqt_string */ param3, const libqt_string param4, int param5) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QList<QString> param3_QList;
    param3_QList.reserve(param3.len);
    libqt_string* param3_arr = static_cast<libqt_string*>(param3.data);
    for (size_t i = 0; i < param3.len; ++i) {
        QString param3_arr_i_QString = QString::fromUtf8(param3_arr[i].data, param3_arr[i].len);
        param3_QList.push_back(param3_arr_i_QString);
    }
    QString param4_QString = QString::fromUtf8(param4.data, param4.len);
    KMessageBox::errorList(param1, param2_QString, param3_QList, param4_QString, static_cast<KMessageBox::Options>(param5));
}

void KMessageBox_DetailedError(QWidget* param1, const libqt_string param2, const libqt_string param3, const libqt_string param4, int param5) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    QString param4_QString = QString::fromUtf8(param4.data, param4.len);
    KMessageBox::detailedError(param1, param2_QString, param3_QString, param4_QString, static_cast<KMessageBox::Options>(param5));
}

void KMessageBox_DetailedError2(QWidget* param1, const libqt_string param2, const libqt_string param3, const libqt_string param4, const KGuiItem* param5, int param6) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    QString param4_QString = QString::fromUtf8(param4.data, param4.len);
    KMessageBox::detailedError(param1, param2_QString, param3_QString, param4_QString, *param5, static_cast<KMessageBox::Options>(param6));
}

void KMessageBox_Information(QWidget* param1, const libqt_string param2, const libqt_string param3, const libqt_string param4, int param5) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    QString param4_QString = QString::fromUtf8(param4.data, param4.len);
    KMessageBox::information(param1, param2_QString, param3_QString, param4_QString, static_cast<KMessageBox::Options>(param5));
}

void KMessageBox_InformationList(QWidget* param1, const libqt_string param2, const libqt_list /* of libqt_string */ param3, const libqt_string param4, const libqt_string param5, int param6) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QList<QString> param3_QList;
    param3_QList.reserve(param3.len);
    libqt_string* param3_arr = static_cast<libqt_string*>(param3.data);
    for (size_t i = 0; i < param3.len; ++i) {
        QString param3_arr_i_QString = QString::fromUtf8(param3_arr[i].data, param3_arr[i].len);
        param3_QList.push_back(param3_arr_i_QString);
    }
    QString param4_QString = QString::fromUtf8(param4.data, param4.len);
    QString param5_QString = QString::fromUtf8(param5.data, param5.len);
    KMessageBox::informationList(param1, param2_QString, param3_QList, param4_QString, param5_QString, static_cast<KMessageBox::Options>(param6));
}

void KMessageBox_EnableAllMessages() {
    KMessageBox::enableAllMessages();
}

void KMessageBox_EnableMessage(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    KMessageBox::enableMessage(param1_QString);
}

int KMessageBox_MessageBox(QWidget* param1, int param2, const libqt_string param3, const libqt_string param4, const KGuiItem* param5, const KGuiItem* param6, const KGuiItem* param7, const libqt_string param8, int param9) {
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    QString param4_QString = QString::fromUtf8(param4.data, param4.len);
    QString param8_QString = QString::fromUtf8(param8.data, param8.len);
    return static_cast<int>(KMessageBox::messageBox(param1, static_cast<KMessageBox::DialogType>(param2), param3_QString, param4_QString, *param5, *param6, *param7, param8_QString, static_cast<KMessageBox::Options>(param9)));
}

bool KMessageBox_ShouldBeShownTwoActions(const libqt_string param1, int* param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return KMessageBox::shouldBeShownTwoActions(param1_QString, (KMessageBox::ButtonCode&)(*param2));
}

bool KMessageBox_ShouldBeShownContinue(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return KMessageBox::shouldBeShownContinue(param1_QString);
}

void KMessageBox_SaveDontShowAgainTwoActions(const libqt_string param1, int param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    KMessageBox::saveDontShowAgainTwoActions(param1_QString, static_cast<KMessageBox::ButtonCode>(param2));
}

void KMessageBox_SaveDontShowAgainContinue(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    KMessageBox::saveDontShowAgainContinue(param1_QString);
}

void KMessageBox_SetDontShowAgainConfig(KConfig* param1) {
    KMessageBox::setDontShowAgainConfig(param1);
}

void KMessageBox_SetDontShowAgainInterface(KMessageBoxDontAskAgainInterface* param1) {
    KMessageBox::setDontShowAgainInterface(param1);
}

void KMessageBox_SetNotifyInterface(KMessageBoxNotifyInterface* param1) {
    KMessageBox::setNotifyInterface(param1);
}

int KMessageBox_CreateKMessageBox(QDialog* param1, QDialogButtonBox* param2, int param3, const libqt_string param4, const libqt_list /* of libqt_string */ param5, const libqt_string param6, bool* param7, int param8, const libqt_string param9) {
    QString param4_QString = QString::fromUtf8(param4.data, param4.len);
    QList<QString> param5_QList;
    param5_QList.reserve(param5.len);
    libqt_string* param5_arr = static_cast<libqt_string*>(param5.data);
    for (size_t i = 0; i < param5.len; ++i) {
        QString param5_arr_i_QString = QString::fromUtf8(param5_arr[i].data, param5_arr[i].len);
        param5_QList.push_back(param5_arr_i_QString);
    }
    QString param6_QString = QString::fromUtf8(param6.data, param6.len);
    QString param9_QString = QString::fromUtf8(param9.data, param9.len);
    return static_cast<int>(KMessageBox::createKMessageBox(param1, param2, static_cast<QMessageBox::Icon>(param3), param4_QString, param5_QList, param6_QString, param7, static_cast<KMessageBox::Options>(param8), param9_QString));
}

int KMessageBox_CreateKMessageBox2(QDialog* param1, QDialogButtonBox* param2, const QIcon* param3, const libqt_string param4, const libqt_list /* of libqt_string */ param5, const libqt_string param6, bool* param7, int param8, const libqt_string param9, int param10) {
    QString param4_QString = QString::fromUtf8(param4.data, param4.len);
    QList<QString> param5_QList;
    param5_QList.reserve(param5.len);
    libqt_string* param5_arr = static_cast<libqt_string*>(param5.data);
    for (size_t i = 0; i < param5.len; ++i) {
        QString param5_arr_i_QString = QString::fromUtf8(param5_arr[i].data, param5_arr[i].len);
        param5_QList.push_back(param5_arr_i_QString);
    }
    QString param6_QString = QString::fromUtf8(param6.data, param6.len);
    QString param9_QString = QString::fromUtf8(param9.data, param9.len);
    return static_cast<int>(KMessageBox::createKMessageBox(param1, param2, *param3, param4_QString, param5_QList, param6_QString, param7, static_cast<KMessageBox::Options>(param8), param9_QString, static_cast<QMessageBox::Icon>(param10)));
}

int KMessageBox_QuestionTwoActionsWId(uintptr_t param1, const libqt_string param2, const libqt_string param3, const KGuiItem* param4, const KGuiItem* param5, const libqt_string param6, int param7) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    QString param6_QString = QString::fromUtf8(param6.data, param6.len);
    return static_cast<int>(KMessageBox::questionTwoActionsWId(static_cast<WId>(param1), param2_QString, param3_QString, *param4, *param5, param6_QString, static_cast<KMessageBox::Options>(param7)));
}

int KMessageBox_QuestionTwoActionsCancelWId(uintptr_t param1, const libqt_string param2, const libqt_string param3, const KGuiItem* param4, const KGuiItem* param5, const KGuiItem* param6, const libqt_string param7, int param8) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    QString param7_QString = QString::fromUtf8(param7.data, param7.len);
    return static_cast<int>(KMessageBox::questionTwoActionsCancelWId(static_cast<WId>(param1), param2_QString, param3_QString, *param4, *param5, *param6, param7_QString, static_cast<KMessageBox::Options>(param8)));
}

int KMessageBox_QuestionTwoActionsListWId(uintptr_t param1, const libqt_string param2, const libqt_list /* of libqt_string */ param3, const libqt_string param4, const KGuiItem* param5, const KGuiItem* param6, const libqt_string param7, int param8) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QList<QString> param3_QList;
    param3_QList.reserve(param3.len);
    libqt_string* param3_arr = static_cast<libqt_string*>(param3.data);
    for (size_t i = 0; i < param3.len; ++i) {
        QString param3_arr_i_QString = QString::fromUtf8(param3_arr[i].data, param3_arr[i].len);
        param3_QList.push_back(param3_arr_i_QString);
    }
    QString param4_QString = QString::fromUtf8(param4.data, param4.len);
    QString param7_QString = QString::fromUtf8(param7.data, param7.len);
    return static_cast<int>(KMessageBox::questionTwoActionsListWId(static_cast<WId>(param1), param2_QString, param3_QList, param4_QString, *param5, *param6, param7_QString, static_cast<KMessageBox::Options>(param8)));
}

int KMessageBox_WarningTwoActionsWId(uintptr_t param1, const libqt_string param2, const libqt_string param3, const KGuiItem* param4, const KGuiItem* param5, const libqt_string param6, int param7) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    QString param6_QString = QString::fromUtf8(param6.data, param6.len);
    return static_cast<int>(KMessageBox::warningTwoActionsWId(static_cast<WId>(param1), param2_QString, param3_QString, *param4, *param5, param6_QString, static_cast<KMessageBox::Options>(param7)));
}

int KMessageBox_WarningTwoActionsListWId(uintptr_t param1, const libqt_string param2, const libqt_list /* of libqt_string */ param3, const libqt_string param4, const KGuiItem* param5, const KGuiItem* param6, const libqt_string param7, int param8) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QList<QString> param3_QList;
    param3_QList.reserve(param3.len);
    libqt_string* param3_arr = static_cast<libqt_string*>(param3.data);
    for (size_t i = 0; i < param3.len; ++i) {
        QString param3_arr_i_QString = QString::fromUtf8(param3_arr[i].data, param3_arr[i].len);
        param3_QList.push_back(param3_arr_i_QString);
    }
    QString param4_QString = QString::fromUtf8(param4.data, param4.len);
    QString param7_QString = QString::fromUtf8(param7.data, param7.len);
    return static_cast<int>(KMessageBox::warningTwoActionsListWId(static_cast<WId>(param1), param2_QString, param3_QList, param4_QString, *param5, *param6, param7_QString, static_cast<KMessageBox::Options>(param8)));
}

int KMessageBox_WarningContinueCancelWId(uintptr_t param1, const libqt_string param2, const libqt_string param3, const KGuiItem* param4, const KGuiItem* param5, const libqt_string param6, int param7) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    QString param6_QString = QString::fromUtf8(param6.data, param6.len);
    return static_cast<int>(KMessageBox::warningContinueCancelWId(static_cast<WId>(param1), param2_QString, param3_QString, *param4, *param5, param6_QString, static_cast<KMessageBox::Options>(param7)));
}

int KMessageBox_WarningContinueCancelListWId(uintptr_t param1, const libqt_string param2, const libqt_list /* of libqt_string */ param3, const libqt_string param4, const KGuiItem* param5, const KGuiItem* param6, const libqt_string param7, int param8) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QList<QString> param3_QList;
    param3_QList.reserve(param3.len);
    libqt_string* param3_arr = static_cast<libqt_string*>(param3.data);
    for (size_t i = 0; i < param3.len; ++i) {
        QString param3_arr_i_QString = QString::fromUtf8(param3_arr[i].data, param3_arr[i].len);
        param3_QList.push_back(param3_arr_i_QString);
    }
    QString param4_QString = QString::fromUtf8(param4.data, param4.len);
    QString param7_QString = QString::fromUtf8(param7.data, param7.len);
    return static_cast<int>(KMessageBox::warningContinueCancelListWId(static_cast<WId>(param1), param2_QString, param3_QList, param4_QString, *param5, *param6, param7_QString, static_cast<KMessageBox::Options>(param8)));
}

int KMessageBox_WarningTwoActionsCancelWId(uintptr_t param1, const libqt_string param2, const libqt_string param3, const KGuiItem* param4, const KGuiItem* param5, const KGuiItem* param6, const libqt_string param7, int param8) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    QString param7_QString = QString::fromUtf8(param7.data, param7.len);
    return static_cast<int>(KMessageBox::warningTwoActionsCancelWId(static_cast<WId>(param1), param2_QString, param3_QString, *param4, *param5, *param6, param7_QString, static_cast<KMessageBox::Options>(param8)));
}

int KMessageBox_WarningTwoActionsCancelListWId(uintptr_t param1, const libqt_string param2, const libqt_list /* of libqt_string */ param3, const libqt_string param4, const KGuiItem* param5, const KGuiItem* param6, const KGuiItem* param7, const libqt_string param8, int param9) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QList<QString> param3_QList;
    param3_QList.reserve(param3.len);
    libqt_string* param3_arr = static_cast<libqt_string*>(param3.data);
    for (size_t i = 0; i < param3.len; ++i) {
        QString param3_arr_i_QString = QString::fromUtf8(param3_arr[i].data, param3_arr[i].len);
        param3_QList.push_back(param3_arr_i_QString);
    }
    QString param4_QString = QString::fromUtf8(param4.data, param4.len);
    QString param8_QString = QString::fromUtf8(param8.data, param8.len);
    return static_cast<int>(KMessageBox::warningTwoActionsCancelListWId(static_cast<WId>(param1), param2_QString, param3_QList, param4_QString, *param5, *param6, *param7, param8_QString, static_cast<KMessageBox::Options>(param9)));
}

void KMessageBox_ErrorWId(uintptr_t param1, const libqt_string param2, const libqt_string param3, int param4) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    KMessageBox::errorWId(static_cast<WId>(param1), param2_QString, param3_QString, static_cast<KMessageBox::Options>(param4));
}

void KMessageBox_ErrorListWId(uintptr_t param1, const libqt_string param2, const libqt_list /* of libqt_string */ param3, const libqt_string param4, int param5) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QList<QString> param3_QList;
    param3_QList.reserve(param3.len);
    libqt_string* param3_arr = static_cast<libqt_string*>(param3.data);
    for (size_t i = 0; i < param3.len; ++i) {
        QString param3_arr_i_QString = QString::fromUtf8(param3_arr[i].data, param3_arr[i].len);
        param3_QList.push_back(param3_arr_i_QString);
    }
    QString param4_QString = QString::fromUtf8(param4.data, param4.len);
    KMessageBox::errorListWId(static_cast<WId>(param1), param2_QString, param3_QList, param4_QString, static_cast<KMessageBox::Options>(param5));
}

void KMessageBox_DetailedErrorWId(uintptr_t param1, const libqt_string param2, const libqt_string param3, const libqt_string param4, int param5) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    QString param4_QString = QString::fromUtf8(param4.data, param4.len);
    KMessageBox::detailedErrorWId(static_cast<WId>(param1), param2_QString, param3_QString, param4_QString, static_cast<KMessageBox::Options>(param5));
}

void KMessageBox_DetailedErrorWId2(uintptr_t param1, const libqt_string param2, const libqt_string param3, const libqt_string param4, const KGuiItem* param5, int param6) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    QString param4_QString = QString::fromUtf8(param4.data, param4.len);
    KMessageBox::detailedErrorWId(static_cast<WId>(param1), param2_QString, param3_QString, param4_QString, *param5, static_cast<KMessageBox::Options>(param6));
}

void KMessageBox_InformationWId(uintptr_t param1, const libqt_string param2, const libqt_string param3, const libqt_string param4, int param5) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    QString param4_QString = QString::fromUtf8(param4.data, param4.len);
    KMessageBox::informationWId(static_cast<WId>(param1), param2_QString, param3_QString, param4_QString, static_cast<KMessageBox::Options>(param5));
}

void KMessageBox_InformationListWId(uintptr_t param1, const libqt_string param2, const libqt_list /* of libqt_string */ param3, const libqt_string param4, const libqt_string param5, int param6) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QList<QString> param3_QList;
    param3_QList.reserve(param3.len);
    libqt_string* param3_arr = static_cast<libqt_string*>(param3.data);
    for (size_t i = 0; i < param3.len; ++i) {
        QString param3_arr_i_QString = QString::fromUtf8(param3_arr[i].data, param3_arr[i].len);
        param3_QList.push_back(param3_arr_i_QString);
    }
    QString param4_QString = QString::fromUtf8(param4.data, param4.len);
    QString param5_QString = QString::fromUtf8(param5.data, param5.len);
    KMessageBox::informationListWId(static_cast<WId>(param1), param2_QString, param3_QList, param4_QString, param5_QString, static_cast<KMessageBox::Options>(param6));
}

int KMessageBox_MessageBoxWId(uintptr_t param1, int param2, const libqt_string param3, const libqt_string param4, const KGuiItem* param5, const KGuiItem* param6, const KGuiItem* param7, const libqt_string param8, int param9) {
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    QString param4_QString = QString::fromUtf8(param4.data, param4.len);
    QString param8_QString = QString::fromUtf8(param8.data, param8.len);
    return static_cast<int>(KMessageBox::messageBoxWId(static_cast<WId>(param1), static_cast<KMessageBox::DialogType>(param2), param3_QString, param4_QString, *param5, *param6, *param7, param8_QString, static_cast<KMessageBox::Options>(param9)));
}
