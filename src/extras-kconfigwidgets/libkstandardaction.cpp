#include <KHamburgerMenu>
#include <KRecentFilesAction>
#include <KStandardAction>
#include <KToggleAction>
#include <KToggleFullScreenAction>
#include <QAction>
#include <QList>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <kstandardaction.h>
#include "libkstandardaction.h"
#include "libkstandardaction.hxx"

QAction* KStandardAction_Create(int param1, const QObject* param2, const char* param3, QObject* param4) {
    return KStandardAction::create(static_cast<KStandardAction::StandardAction>(param1), param2, param3, param4);
}

QAction* KStandardAction_KCreateInternal(int param1, QObject* param2) {
    return KStandardAction::_k_createInternal(static_cast<KStandardAction::StandardAction>(param1), param2);
}

libqt_string KStandardAction_Name(int param1) {
    QString _ret = KStandardAction::name(static_cast<KStandardAction::StandardAction>(param1));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KStandardAction_StdNames() {
    QList<QString> _ret = KStandardAction::stdNames();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of int */ KStandardAction_ActionIds() {
    QList<KStandardAction::StandardAction> _ret = KStandardAction::actionIds();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int KStandardAction_ShortcutForActionId(int param1) {
    return static_cast<int>(KStandardAction::shortcutForActionId(static_cast<KStandardAction::StandardAction>(param1)));
}

QAction* KStandardAction_OpenNew(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::openNew(param1, param2, param3);
}

QAction* KStandardAction_Open(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::open(param1, param2, param3);
}

KRecentFilesAction* KStandardAction_OpenRecent(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::openRecent(param1, param2, param3);
}

QAction* KStandardAction_Save(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::save(param1, param2, param3);
}

QAction* KStandardAction_SaveAs(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::saveAs(param1, param2, param3);
}

QAction* KStandardAction_Revert(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::revert(param1, param2, param3);
}

QAction* KStandardAction_Close(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::close(param1, param2, param3);
}

QAction* KStandardAction_Print(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::print(param1, param2, param3);
}

QAction* KStandardAction_PrintPreview(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::printPreview(param1, param2, param3);
}

QAction* KStandardAction_Mail(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::mail(param1, param2, param3);
}

QAction* KStandardAction_Quit(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::quit(param1, param2, param3);
}

QAction* KStandardAction_Undo(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::undo(param1, param2, param3);
}

QAction* KStandardAction_Redo(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::redo(param1, param2, param3);
}

QAction* KStandardAction_Cut(QObject* param1) {
    return KStandardAction::cut(param1);
}

QAction* KStandardAction_Copy(QObject* param1) {
    return KStandardAction::copy(param1);
}

QAction* KStandardAction_Paste(QObject* param1) {
    return KStandardAction::paste(param1);
}

QAction* KStandardAction_Clear(QObject* param1) {
    return KStandardAction::clear(param1);
}

QAction* KStandardAction_SelectAll(QObject* param1) {
    return KStandardAction::selectAll(param1);
}

QAction* KStandardAction_Cut2(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::cut(param1, param2, param3);
}

QAction* KStandardAction_Copy2(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::copy(param1, param2, param3);
}

QAction* KStandardAction_Paste2(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::paste(param1, param2, param3);
}

QAction* KStandardAction_Clear2(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::clear(param1, param2, param3);
}

QAction* KStandardAction_SelectAll2(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::selectAll(param1, param2, param3);
}

QAction* KStandardAction_Deselect(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::deselect(param1, param2, param3);
}

QAction* KStandardAction_Find(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::find(param1, param2, param3);
}

QAction* KStandardAction_FindNext(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::findNext(param1, param2, param3);
}

QAction* KStandardAction_FindPrev(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::findPrev(param1, param2, param3);
}

QAction* KStandardAction_Replace(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::replace(param1, param2, param3);
}

QAction* KStandardAction_ActualSize(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::actualSize(param1, param2, param3);
}

QAction* KStandardAction_FitToPage(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::fitToPage(param1, param2, param3);
}

QAction* KStandardAction_FitToWidth(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::fitToWidth(param1, param2, param3);
}

QAction* KStandardAction_FitToHeight(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::fitToHeight(param1, param2, param3);
}

QAction* KStandardAction_ZoomIn(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::zoomIn(param1, param2, param3);
}

QAction* KStandardAction_ZoomOut(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::zoomOut(param1, param2, param3);
}

QAction* KStandardAction_Zoom(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::zoom(param1, param2, param3);
}

QAction* KStandardAction_Redisplay(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::redisplay(param1, param2, param3);
}

QAction* KStandardAction_Up(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::up(param1, param2, param3);
}

QAction* KStandardAction_Back(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::back(param1, param2, param3);
}

QAction* KStandardAction_Forward(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::forward(param1, param2, param3);
}

QAction* KStandardAction_Home(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::home(param1, param2, param3);
}

QAction* KStandardAction_Prior(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::prior(param1, param2, param3);
}

QAction* KStandardAction_Next(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::next(param1, param2, param3);
}

QAction* KStandardAction_GoTo(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::goTo(param1, param2, param3);
}

QAction* KStandardAction_GotoPage(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::gotoPage(param1, param2, param3);
}

QAction* KStandardAction_GotoLine(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::gotoLine(param1, param2, param3);
}

QAction* KStandardAction_FirstPage(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::firstPage(param1, param2, param3);
}

QAction* KStandardAction_LastPage(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::lastPage(param1, param2, param3);
}

QAction* KStandardAction_DocumentBack(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::documentBack(param1, param2, param3);
}

QAction* KStandardAction_DocumentForward(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::documentForward(param1, param2, param3);
}

QAction* KStandardAction_AddBookmark(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::addBookmark(param1, param2, param3);
}

QAction* KStandardAction_EditBookmarks(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::editBookmarks(param1, param2, param3);
}

QAction* KStandardAction_Spelling(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::spelling(param1, param2, param3);
}

KToggleAction* KStandardAction_ShowMenubar(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::showMenubar(param1, param2, param3);
}

KToggleAction* KStandardAction_ShowStatusbar(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::showStatusbar(param1, param2, param3);
}

KToggleFullScreenAction* KStandardAction_FullScreen(const QObject* param1, const char* param2, QWidget* param3, QObject* param4) {
    return KStandardAction::fullScreen(param1, param2, param3, param4);
}

QAction* KStandardAction_KeyBindings(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::keyBindings(param1, param2, param3);
}

QAction* KStandardAction_Preferences(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::preferences(param1, param2, param3);
}

QAction* KStandardAction_ConfigureToolbars(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::configureToolbars(param1, param2, param3);
}

QAction* KStandardAction_ConfigureNotifications(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::configureNotifications(param1, param2, param3);
}

QAction* KStandardAction_SwitchApplicationLanguage(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::switchApplicationLanguage(param1, param2, param3);
}

QAction* KStandardAction_HelpContents(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::helpContents(param1, param2, param3);
}

QAction* KStandardAction_WhatsThis(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::whatsThis(param1, param2, param3);
}

QAction* KStandardAction_ReportBug(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::reportBug(param1, param2, param3);
}

QAction* KStandardAction_AboutApp(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::aboutApp(param1, param2, param3);
}

QAction* KStandardAction_AboutKDE(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::aboutKDE(param1, param2, param3);
}

QAction* KStandardAction_DeleteFile(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::deleteFile(param1, param2, param3);
}

QAction* KStandardAction_RenameFile(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::renameFile(param1, param2, param3);
}

QAction* KStandardAction_MoveToTrash(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::moveToTrash(param1, param2, param3);
}

QAction* KStandardAction_Donate(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::donate(param1, param2, param3);
}

KHamburgerMenu* KStandardAction_HamburgerMenu(const QObject* param1, const char* param2, QObject* param3) {
    return KStandardAction::hamburgerMenu(param1, param2, param3);
}
