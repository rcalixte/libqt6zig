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
#include <QWidget>
#include <kmessagebox.h>
#include "libkmessagebox.h"
#include "libkmessagebox.hxx"

int KMessageBox_QuestionTwoActions(QWidget* parent, const libqt_string text, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const libqt_string dontAskAgainName, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString dontAskAgainName_QString = QString::fromUtf8(dontAskAgainName.data, dontAskAgainName.len);
    return static_cast<int>(KMessageBox::questionTwoActions(parent, text_QString, title_QString, *primaryAction, *secondaryAction, dontAskAgainName_QString, static_cast<KMessageBox::Options>(options)));
}

int KMessageBox_QuestionTwoActionsCancel(QWidget* parent, const libqt_string text, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const KGuiItem* cancelAction, const libqt_string dontAskAgainName, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString dontAskAgainName_QString = QString::fromUtf8(dontAskAgainName.data, dontAskAgainName.len);
    return static_cast<int>(KMessageBox::questionTwoActionsCancel(parent, text_QString, title_QString, *primaryAction, *secondaryAction, *cancelAction, dontAskAgainName_QString, static_cast<KMessageBox::Options>(options)));
}

int KMessageBox_QuestionTwoActionsList(QWidget* parent, const libqt_string text, const libqt_list /* of libqt_string */ strlist, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const libqt_string dontAskAgainName, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QString> strlist_QList;
    strlist_QList.reserve(strlist.len);
    libqt_string* strlist_arr = static_cast<libqt_string*>(strlist.data);
    for (size_t i = 0; i < strlist.len; ++i) {
        QString strlist_arr_i_QString = QString::fromUtf8(strlist_arr[i].data, strlist_arr[i].len);
        strlist_QList.push_back(strlist_arr_i_QString);
    }
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString dontAskAgainName_QString = QString::fromUtf8(dontAskAgainName.data, dontAskAgainName.len);
    return static_cast<int>(KMessageBox::questionTwoActionsList(parent, text_QString, strlist_QList, title_QString, *primaryAction, *secondaryAction, dontAskAgainName_QString, static_cast<KMessageBox::Options>(options)));
}

int KMessageBox_WarningTwoActions(QWidget* parent, const libqt_string text, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const libqt_string dontAskAgainName, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString dontAskAgainName_QString = QString::fromUtf8(dontAskAgainName.data, dontAskAgainName.len);
    return static_cast<int>(KMessageBox::warningTwoActions(parent, text_QString, title_QString, *primaryAction, *secondaryAction, dontAskAgainName_QString, static_cast<KMessageBox::Options>(options)));
}

int KMessageBox_WarningTwoActionsList(QWidget* parent, const libqt_string text, const libqt_list /* of libqt_string */ strlist, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const libqt_string dontAskAgainName, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QString> strlist_QList;
    strlist_QList.reserve(strlist.len);
    libqt_string* strlist_arr = static_cast<libqt_string*>(strlist.data);
    for (size_t i = 0; i < strlist.len; ++i) {
        QString strlist_arr_i_QString = QString::fromUtf8(strlist_arr[i].data, strlist_arr[i].len);
        strlist_QList.push_back(strlist_arr_i_QString);
    }
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString dontAskAgainName_QString = QString::fromUtf8(dontAskAgainName.data, dontAskAgainName.len);
    return static_cast<int>(KMessageBox::warningTwoActionsList(parent, text_QString, strlist_QList, title_QString, *primaryAction, *secondaryAction, dontAskAgainName_QString, static_cast<KMessageBox::Options>(options)));
}

int KMessageBox_WarningContinueCancel(QWidget* parent, const libqt_string text, const libqt_string title, const KGuiItem* buttonContinue, const KGuiItem* buttonCancel, const libqt_string dontAskAgainName, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString dontAskAgainName_QString = QString::fromUtf8(dontAskAgainName.data, dontAskAgainName.len);
    return static_cast<int>(KMessageBox::warningContinueCancel(parent, text_QString, title_QString, *buttonContinue, *buttonCancel, dontAskAgainName_QString, static_cast<KMessageBox::Options>(options)));
}

int KMessageBox_WarningContinueCancelDetailed(QWidget* parent, const libqt_string text, const libqt_string title, const KGuiItem* buttonContinue, const KGuiItem* buttonCancel, const libqt_string dontAskAgainName, int options, const libqt_string details) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString dontAskAgainName_QString = QString::fromUtf8(dontAskAgainName.data, dontAskAgainName.len);
    QString details_QString = QString::fromUtf8(details.data, details.len);
    return static_cast<int>(KMessageBox::warningContinueCancelDetailed(parent, text_QString, title_QString, *buttonContinue, *buttonCancel, dontAskAgainName_QString, static_cast<KMessageBox::Options>(options), details_QString));
}

int KMessageBox_WarningContinueCancelList(QWidget* parent, const libqt_string text, const libqt_list /* of libqt_string */ strlist, const libqt_string title, const KGuiItem* buttonContinue, const KGuiItem* buttonCancel, const libqt_string dontAskAgainName, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QString> strlist_QList;
    strlist_QList.reserve(strlist.len);
    libqt_string* strlist_arr = static_cast<libqt_string*>(strlist.data);
    for (size_t i = 0; i < strlist.len; ++i) {
        QString strlist_arr_i_QString = QString::fromUtf8(strlist_arr[i].data, strlist_arr[i].len);
        strlist_QList.push_back(strlist_arr_i_QString);
    }
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString dontAskAgainName_QString = QString::fromUtf8(dontAskAgainName.data, dontAskAgainName.len);
    return static_cast<int>(KMessageBox::warningContinueCancelList(parent, text_QString, strlist_QList, title_QString, *buttonContinue, *buttonCancel, dontAskAgainName_QString, static_cast<KMessageBox::Options>(options)));
}

int KMessageBox_WarningTwoActionsCancel(QWidget* parent, const libqt_string text, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const KGuiItem* cancelAction, const libqt_string dontAskAgainName, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString dontAskAgainName_QString = QString::fromUtf8(dontAskAgainName.data, dontAskAgainName.len);
    return static_cast<int>(KMessageBox::warningTwoActionsCancel(parent, text_QString, title_QString, *primaryAction, *secondaryAction, *cancelAction, dontAskAgainName_QString, static_cast<KMessageBox::Options>(options)));
}

int KMessageBox_WarningTwoActionsCancelList(QWidget* parent, const libqt_string text, const libqt_list /* of libqt_string */ strlist, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const KGuiItem* cancelAction, const libqt_string dontAskAgainName, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QString> strlist_QList;
    strlist_QList.reserve(strlist.len);
    libqt_string* strlist_arr = static_cast<libqt_string*>(strlist.data);
    for (size_t i = 0; i < strlist.len; ++i) {
        QString strlist_arr_i_QString = QString::fromUtf8(strlist_arr[i].data, strlist_arr[i].len);
        strlist_QList.push_back(strlist_arr_i_QString);
    }
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString dontAskAgainName_QString = QString::fromUtf8(dontAskAgainName.data, dontAskAgainName.len);
    return static_cast<int>(KMessageBox::warningTwoActionsCancelList(parent, text_QString, strlist_QList, title_QString, *primaryAction, *secondaryAction, *cancelAction, dontAskAgainName_QString, static_cast<KMessageBox::Options>(options)));
}

void KMessageBox_Error(QWidget* parent, const libqt_string text, const libqt_string title, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    KMessageBox::error(parent, text_QString, title_QString, static_cast<KMessageBox::Options>(options));
}

void KMessageBox_Error2(QWidget* parent, const libqt_string text, const libqt_string title, const KGuiItem* buttonOk, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    KMessageBox::error(parent, text_QString, title_QString, *buttonOk, static_cast<KMessageBox::Options>(options));
}

void KMessageBox_ErrorList(QWidget* parent, const libqt_string text, const libqt_list /* of libqt_string */ strlist, const libqt_string title, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QString> strlist_QList;
    strlist_QList.reserve(strlist.len);
    libqt_string* strlist_arr = static_cast<libqt_string*>(strlist.data);
    for (size_t i = 0; i < strlist.len; ++i) {
        QString strlist_arr_i_QString = QString::fromUtf8(strlist_arr[i].data, strlist_arr[i].len);
        strlist_QList.push_back(strlist_arr_i_QString);
    }
    QString title_QString = QString::fromUtf8(title.data, title.len);
    KMessageBox::errorList(parent, text_QString, strlist_QList, title_QString, static_cast<KMessageBox::Options>(options));
}

void KMessageBox_DetailedError(QWidget* parent, const libqt_string text, const libqt_string details, const libqt_string title, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString details_QString = QString::fromUtf8(details.data, details.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    KMessageBox::detailedError(parent, text_QString, details_QString, title_QString, static_cast<KMessageBox::Options>(options));
}

void KMessageBox_DetailedError2(QWidget* parent, const libqt_string text, const libqt_string details, const libqt_string title, const KGuiItem* buttonOk, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString details_QString = QString::fromUtf8(details.data, details.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    KMessageBox::detailedError(parent, text_QString, details_QString, title_QString, *buttonOk, static_cast<KMessageBox::Options>(options));
}

void KMessageBox_Information(QWidget* parent, const libqt_string text, const libqt_string title, const libqt_string dontShowAgainName, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString dontShowAgainName_QString = QString::fromUtf8(dontShowAgainName.data, dontShowAgainName.len);
    KMessageBox::information(parent, text_QString, title_QString, dontShowAgainName_QString, static_cast<KMessageBox::Options>(options));
}

void KMessageBox_InformationList(QWidget* parent, const libqt_string text, const libqt_list /* of libqt_string */ strlist, const libqt_string title, const libqt_string dontShowAgainName, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QString> strlist_QList;
    strlist_QList.reserve(strlist.len);
    libqt_string* strlist_arr = static_cast<libqt_string*>(strlist.data);
    for (size_t i = 0; i < strlist.len; ++i) {
        QString strlist_arr_i_QString = QString::fromUtf8(strlist_arr[i].data, strlist_arr[i].len);
        strlist_QList.push_back(strlist_arr_i_QString);
    }
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString dontShowAgainName_QString = QString::fromUtf8(dontShowAgainName.data, dontShowAgainName.len);
    KMessageBox::informationList(parent, text_QString, strlist_QList, title_QString, dontShowAgainName_QString, static_cast<KMessageBox::Options>(options));
}

void KMessageBox_EnableAllMessages() {
    KMessageBox::enableAllMessages();
}

void KMessageBox_EnableMessage(const libqt_string dontShowAgainName) {
    QString dontShowAgainName_QString = QString::fromUtf8(dontShowAgainName.data, dontShowAgainName.len);
    KMessageBox::enableMessage(dontShowAgainName_QString);
}

int KMessageBox_MessageBox(QWidget* parent, int type, const libqt_string text, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const KGuiItem* cancelAction, const libqt_string dontShowAskAgainName, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString dontShowAskAgainName_QString = QString::fromUtf8(dontShowAskAgainName.data, dontShowAskAgainName.len);
    return static_cast<int>(KMessageBox::messageBox(parent, static_cast<KMessageBox::DialogType>(type), text_QString, title_QString, *primaryAction, *secondaryAction, *cancelAction, dontShowAskAgainName_QString, static_cast<KMessageBox::Options>(options)));
}

bool KMessageBox_ShouldBeShownTwoActions(const libqt_string dontShowAgainName, int* result) {
    QString dontShowAgainName_QString = QString::fromUtf8(dontShowAgainName.data, dontShowAgainName.len);
    return KMessageBox::shouldBeShownTwoActions(dontShowAgainName_QString, (KMessageBox::ButtonCode&)(*result));
}

bool KMessageBox_ShouldBeShownContinue(const libqt_string dontShowAgainName) {
    QString dontShowAgainName_QString = QString::fromUtf8(dontShowAgainName.data, dontShowAgainName.len);
    return KMessageBox::shouldBeShownContinue(dontShowAgainName_QString);
}

void KMessageBox_SaveDontShowAgainTwoActions(const libqt_string dontShowAgainName, int result) {
    QString dontShowAgainName_QString = QString::fromUtf8(dontShowAgainName.data, dontShowAgainName.len);
    KMessageBox::saveDontShowAgainTwoActions(dontShowAgainName_QString, static_cast<KMessageBox::ButtonCode>(result));
}

void KMessageBox_SaveDontShowAgainContinue(const libqt_string dontShowAgainName) {
    QString dontShowAgainName_QString = QString::fromUtf8(dontShowAgainName.data, dontShowAgainName.len);
    KMessageBox::saveDontShowAgainContinue(dontShowAgainName_QString);
}

void KMessageBox_SetDontShowAgainConfig(KConfig* cfg) {
    KMessageBox::setDontShowAgainConfig(cfg);
}

void KMessageBox_SetDontShowAgainInterface(KMessageBoxDontAskAgainInterface* dontAskAgainInterface) {
    KMessageBox::setDontShowAgainInterface(dontAskAgainInterface);
}

void KMessageBox_SetNotifyInterface(KMessageBoxNotifyInterface* notifyInterface) {
    KMessageBox::setNotifyInterface(notifyInterface);
}

int KMessageBox_CreateKMessageBox(QDialog* dialog, QDialogButtonBox* buttons, int icon, const libqt_string text, const libqt_list /* of libqt_string */ strlist, const libqt_string ask, bool* checkboxReturn, int options, const libqt_string details) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QString> strlist_QList;
    strlist_QList.reserve(strlist.len);
    libqt_string* strlist_arr = static_cast<libqt_string*>(strlist.data);
    for (size_t i = 0; i < strlist.len; ++i) {
        QString strlist_arr_i_QString = QString::fromUtf8(strlist_arr[i].data, strlist_arr[i].len);
        strlist_QList.push_back(strlist_arr_i_QString);
    }
    QString ask_QString = QString::fromUtf8(ask.data, ask.len);
    QString details_QString = QString::fromUtf8(details.data, details.len);
    return static_cast<int>(KMessageBox::createKMessageBox(dialog, buttons, static_cast<QMessageBox::Icon>(icon), text_QString, strlist_QList, ask_QString, checkboxReturn, static_cast<KMessageBox::Options>(options), details_QString));
}

int KMessageBox_CreateKMessageBox2(QDialog* dialog, QDialogButtonBox* buttons, const QIcon* icon, const libqt_string text, const libqt_list /* of libqt_string */ strlist, const libqt_string ask, bool* checkboxReturn, int options, const libqt_string details, int notifyType) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QString> strlist_QList;
    strlist_QList.reserve(strlist.len);
    libqt_string* strlist_arr = static_cast<libqt_string*>(strlist.data);
    for (size_t i = 0; i < strlist.len; ++i) {
        QString strlist_arr_i_QString = QString::fromUtf8(strlist_arr[i].data, strlist_arr[i].len);
        strlist_QList.push_back(strlist_arr_i_QString);
    }
    QString ask_QString = QString::fromUtf8(ask.data, ask.len);
    QString details_QString = QString::fromUtf8(details.data, details.len);
    return static_cast<int>(KMessageBox::createKMessageBox(dialog, buttons, *icon, text_QString, strlist_QList, ask_QString, checkboxReturn, static_cast<KMessageBox::Options>(options), details_QString, static_cast<QMessageBox::Icon>(notifyType)));
}

int KMessageBox_QuestionTwoActionsWId(uintptr_t parent_id, const libqt_string text, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const libqt_string dontAskAgainName, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString dontAskAgainName_QString = QString::fromUtf8(dontAskAgainName.data, dontAskAgainName.len);
    return static_cast<int>(KMessageBox::questionTwoActionsWId(static_cast<WId>(parent_id), text_QString, title_QString, *primaryAction, *secondaryAction, dontAskAgainName_QString, static_cast<KMessageBox::Options>(options)));
}

int KMessageBox_QuestionTwoActionsCancelWId(uintptr_t parent_id, const libqt_string text, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const KGuiItem* cancelAction, const libqt_string dontAskAgainName, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString dontAskAgainName_QString = QString::fromUtf8(dontAskAgainName.data, dontAskAgainName.len);
    return static_cast<int>(KMessageBox::questionTwoActionsCancelWId(static_cast<WId>(parent_id), text_QString, title_QString, *primaryAction, *secondaryAction, *cancelAction, dontAskAgainName_QString, static_cast<KMessageBox::Options>(options)));
}

int KMessageBox_QuestionTwoActionsListWId(uintptr_t parent_id, const libqt_string text, const libqt_list /* of libqt_string */ strlist, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const libqt_string dontAskAgainName, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QString> strlist_QList;
    strlist_QList.reserve(strlist.len);
    libqt_string* strlist_arr = static_cast<libqt_string*>(strlist.data);
    for (size_t i = 0; i < strlist.len; ++i) {
        QString strlist_arr_i_QString = QString::fromUtf8(strlist_arr[i].data, strlist_arr[i].len);
        strlist_QList.push_back(strlist_arr_i_QString);
    }
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString dontAskAgainName_QString = QString::fromUtf8(dontAskAgainName.data, dontAskAgainName.len);
    return static_cast<int>(KMessageBox::questionTwoActionsListWId(static_cast<WId>(parent_id), text_QString, strlist_QList, title_QString, *primaryAction, *secondaryAction, dontAskAgainName_QString, static_cast<KMessageBox::Options>(options)));
}

int KMessageBox_WarningTwoActionsWId(uintptr_t parent_id, const libqt_string text, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const libqt_string dontAskAgainName, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString dontAskAgainName_QString = QString::fromUtf8(dontAskAgainName.data, dontAskAgainName.len);
    return static_cast<int>(KMessageBox::warningTwoActionsWId(static_cast<WId>(parent_id), text_QString, title_QString, *primaryAction, *secondaryAction, dontAskAgainName_QString, static_cast<KMessageBox::Options>(options)));
}

int KMessageBox_WarningTwoActionsListWId(uintptr_t parent_id, const libqt_string text, const libqt_list /* of libqt_string */ strlist, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const libqt_string dontAskAgainName, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QString> strlist_QList;
    strlist_QList.reserve(strlist.len);
    libqt_string* strlist_arr = static_cast<libqt_string*>(strlist.data);
    for (size_t i = 0; i < strlist.len; ++i) {
        QString strlist_arr_i_QString = QString::fromUtf8(strlist_arr[i].data, strlist_arr[i].len);
        strlist_QList.push_back(strlist_arr_i_QString);
    }
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString dontAskAgainName_QString = QString::fromUtf8(dontAskAgainName.data, dontAskAgainName.len);
    return static_cast<int>(KMessageBox::warningTwoActionsListWId(static_cast<WId>(parent_id), text_QString, strlist_QList, title_QString, *primaryAction, *secondaryAction, dontAskAgainName_QString, static_cast<KMessageBox::Options>(options)));
}

int KMessageBox_WarningContinueCancelWId(uintptr_t parent_id, const libqt_string text, const libqt_string title, const KGuiItem* buttonContinue, const KGuiItem* buttonCancel, const libqt_string dontAskAgainName, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString dontAskAgainName_QString = QString::fromUtf8(dontAskAgainName.data, dontAskAgainName.len);
    return static_cast<int>(KMessageBox::warningContinueCancelWId(static_cast<WId>(parent_id), text_QString, title_QString, *buttonContinue, *buttonCancel, dontAskAgainName_QString, static_cast<KMessageBox::Options>(options)));
}

int KMessageBox_WarningContinueCancelListWId(uintptr_t parent_id, const libqt_string text, const libqt_list /* of libqt_string */ strlist, const libqt_string title, const KGuiItem* buttonContinue, const KGuiItem* buttonCancel, const libqt_string dontAskAgainName, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QString> strlist_QList;
    strlist_QList.reserve(strlist.len);
    libqt_string* strlist_arr = static_cast<libqt_string*>(strlist.data);
    for (size_t i = 0; i < strlist.len; ++i) {
        QString strlist_arr_i_QString = QString::fromUtf8(strlist_arr[i].data, strlist_arr[i].len);
        strlist_QList.push_back(strlist_arr_i_QString);
    }
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString dontAskAgainName_QString = QString::fromUtf8(dontAskAgainName.data, dontAskAgainName.len);
    return static_cast<int>(KMessageBox::warningContinueCancelListWId(static_cast<WId>(parent_id), text_QString, strlist_QList, title_QString, *buttonContinue, *buttonCancel, dontAskAgainName_QString, static_cast<KMessageBox::Options>(options)));
}

int KMessageBox_WarningTwoActionsCancelWId(uintptr_t parent_id, const libqt_string text, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const KGuiItem* cancelAction, const libqt_string dontAskAgainName, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString dontAskAgainName_QString = QString::fromUtf8(dontAskAgainName.data, dontAskAgainName.len);
    return static_cast<int>(KMessageBox::warningTwoActionsCancelWId(static_cast<WId>(parent_id), text_QString, title_QString, *primaryAction, *secondaryAction, *cancelAction, dontAskAgainName_QString, static_cast<KMessageBox::Options>(options)));
}

int KMessageBox_WarningTwoActionsCancelListWId(uintptr_t parent_id, const libqt_string text, const libqt_list /* of libqt_string */ strlist, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const KGuiItem* cancelAction, const libqt_string dontAskAgainName, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QString> strlist_QList;
    strlist_QList.reserve(strlist.len);
    libqt_string* strlist_arr = static_cast<libqt_string*>(strlist.data);
    for (size_t i = 0; i < strlist.len; ++i) {
        QString strlist_arr_i_QString = QString::fromUtf8(strlist_arr[i].data, strlist_arr[i].len);
        strlist_QList.push_back(strlist_arr_i_QString);
    }
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString dontAskAgainName_QString = QString::fromUtf8(dontAskAgainName.data, dontAskAgainName.len);
    return static_cast<int>(KMessageBox::warningTwoActionsCancelListWId(static_cast<WId>(parent_id), text_QString, strlist_QList, title_QString, *primaryAction, *secondaryAction, *cancelAction, dontAskAgainName_QString, static_cast<KMessageBox::Options>(options)));
}

void KMessageBox_ErrorWId(uintptr_t parent_id, const libqt_string text, const libqt_string title, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    KMessageBox::errorWId(static_cast<WId>(parent_id), text_QString, title_QString, static_cast<KMessageBox::Options>(options));
}

void KMessageBox_ErrorListWId(uintptr_t parent_id, const libqt_string text, const libqt_list /* of libqt_string */ strlist, const libqt_string title, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QString> strlist_QList;
    strlist_QList.reserve(strlist.len);
    libqt_string* strlist_arr = static_cast<libqt_string*>(strlist.data);
    for (size_t i = 0; i < strlist.len; ++i) {
        QString strlist_arr_i_QString = QString::fromUtf8(strlist_arr[i].data, strlist_arr[i].len);
        strlist_QList.push_back(strlist_arr_i_QString);
    }
    QString title_QString = QString::fromUtf8(title.data, title.len);
    KMessageBox::errorListWId(static_cast<WId>(parent_id), text_QString, strlist_QList, title_QString, static_cast<KMessageBox::Options>(options));
}

void KMessageBox_DetailedErrorWId(uintptr_t parent_id, const libqt_string text, const libqt_string details, const libqt_string title, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString details_QString = QString::fromUtf8(details.data, details.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    KMessageBox::detailedErrorWId(static_cast<WId>(parent_id), text_QString, details_QString, title_QString, static_cast<KMessageBox::Options>(options));
}

void KMessageBox_DetailedErrorWId2(uintptr_t parent_id, const libqt_string text, const libqt_string details, const libqt_string title, const KGuiItem* buttonOk, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString details_QString = QString::fromUtf8(details.data, details.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    KMessageBox::detailedErrorWId(static_cast<WId>(parent_id), text_QString, details_QString, title_QString, *buttonOk, static_cast<KMessageBox::Options>(options));
}

void KMessageBox_InformationWId(uintptr_t parent_id, const libqt_string text, const libqt_string title, const libqt_string dontShowAgainName, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString dontShowAgainName_QString = QString::fromUtf8(dontShowAgainName.data, dontShowAgainName.len);
    KMessageBox::informationWId(static_cast<WId>(parent_id), text_QString, title_QString, dontShowAgainName_QString, static_cast<KMessageBox::Options>(options));
}

void KMessageBox_InformationListWId(uintptr_t parent_id, const libqt_string text, const libqt_list /* of libqt_string */ strlist, const libqt_string title, const libqt_string dontShowAgainName, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QString> strlist_QList;
    strlist_QList.reserve(strlist.len);
    libqt_string* strlist_arr = static_cast<libqt_string*>(strlist.data);
    for (size_t i = 0; i < strlist.len; ++i) {
        QString strlist_arr_i_QString = QString::fromUtf8(strlist_arr[i].data, strlist_arr[i].len);
        strlist_QList.push_back(strlist_arr_i_QString);
    }
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString dontShowAgainName_QString = QString::fromUtf8(dontShowAgainName.data, dontShowAgainName.len);
    KMessageBox::informationListWId(static_cast<WId>(parent_id), text_QString, strlist_QList, title_QString, dontShowAgainName_QString, static_cast<KMessageBox::Options>(options));
}

int KMessageBox_MessageBoxWId(uintptr_t parent_id, int type, const libqt_string text, const libqt_string title, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const KGuiItem* cancelAction, const libqt_string dontShowAskAgainName, int options) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString dontShowAskAgainName_QString = QString::fromUtf8(dontShowAskAgainName.data, dontShowAskAgainName.len);
    return static_cast<int>(KMessageBox::messageBoxWId(static_cast<WId>(parent_id), static_cast<KMessageBox::DialogType>(type), text_QString, title_QString, *primaryAction, *secondaryAction, *cancelAction, dontShowAskAgainName_QString, static_cast<KMessageBox::Options>(options)));
}
