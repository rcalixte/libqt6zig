#include <KHamburgerMenu>
#include <KRecentFilesAction>
#include <KStandardAction>
#include <KToggleAction>
#include <KToggleFullScreenAction>
#include <QAction>
#include <QList>
#include <QObject>
#include <QString>
#include <QWidget>
#include <kstandardaction.h>
#include "libkstandardaction.h"
#include "libkstandardaction.hxx"

QAction* KStandardAction_Create(int id, const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::create(static_cast<KStandardAction::StandardAction>(id), recvr, slot, parent);
}

QAction* KStandardAction_KCreateInternal(int id, QObject* parent) {
    return KStandardAction::_k_createInternal(static_cast<KStandardAction::StandardAction>(id), parent);
}

libqt_string KStandardAction_Name(int id) {
    auto _ret = KStandardAction::name(static_cast<KStandardAction::StandardAction>(id));
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
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int KStandardAction_ShortcutForActionId(int id) {
    return static_cast<int>(KStandardAction::shortcutForActionId(static_cast<KStandardAction::StandardAction>(id)));
}

QAction* KStandardAction_OpenNew(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::openNew(recvr, slot, parent);
}

QAction* KStandardAction_Open(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::open(recvr, slot, parent);
}

KRecentFilesAction* KStandardAction_OpenRecent(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::openRecent(recvr, slot, parent);
}

QAction* KStandardAction_Save(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::save(recvr, slot, parent);
}

QAction* KStandardAction_SaveAs(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::saveAs(recvr, slot, parent);
}

QAction* KStandardAction_Revert(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::revert(recvr, slot, parent);
}

QAction* KStandardAction_Close(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::close(recvr, slot, parent);
}

QAction* KStandardAction_Print(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::print(recvr, slot, parent);
}

QAction* KStandardAction_PrintPreview(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::printPreview(recvr, slot, parent);
}

QAction* KStandardAction_Mail(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::mail(recvr, slot, parent);
}

QAction* KStandardAction_Quit(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::quit(recvr, slot, parent);
}

QAction* KStandardAction_Undo(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::undo(recvr, slot, parent);
}

QAction* KStandardAction_Redo(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::redo(recvr, slot, parent);
}

QAction* KStandardAction_Cut(QObject* parent) {
    return KStandardAction::cut(parent);
}

QAction* KStandardAction_Copy(QObject* parent) {
    return KStandardAction::copy(parent);
}

QAction* KStandardAction_Paste(QObject* parent) {
    return KStandardAction::paste(parent);
}

QAction* KStandardAction_Clear(QObject* parent) {
    return KStandardAction::clear(parent);
}

QAction* KStandardAction_SelectAll(QObject* parent) {
    return KStandardAction::selectAll(parent);
}

QAction* KStandardAction_Cut2(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::cut(recvr, slot, parent);
}

QAction* KStandardAction_Copy2(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::copy(recvr, slot, parent);
}

QAction* KStandardAction_Paste2(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::paste(recvr, slot, parent);
}

QAction* KStandardAction_Clear2(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::clear(recvr, slot, parent);
}

QAction* KStandardAction_SelectAll2(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::selectAll(recvr, slot, parent);
}

QAction* KStandardAction_Deselect(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::deselect(recvr, slot, parent);
}

QAction* KStandardAction_Find(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::find(recvr, slot, parent);
}

QAction* KStandardAction_FindNext(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::findNext(recvr, slot, parent);
}

QAction* KStandardAction_FindPrev(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::findPrev(recvr, slot, parent);
}

QAction* KStandardAction_Replace(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::replace(recvr, slot, parent);
}

QAction* KStandardAction_ActualSize(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::actualSize(recvr, slot, parent);
}

QAction* KStandardAction_FitToPage(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::fitToPage(recvr, slot, parent);
}

QAction* KStandardAction_FitToWidth(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::fitToWidth(recvr, slot, parent);
}

QAction* KStandardAction_FitToHeight(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::fitToHeight(recvr, slot, parent);
}

QAction* KStandardAction_ZoomIn(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::zoomIn(recvr, slot, parent);
}

QAction* KStandardAction_ZoomOut(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::zoomOut(recvr, slot, parent);
}

QAction* KStandardAction_Zoom(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::zoom(recvr, slot, parent);
}

QAction* KStandardAction_Redisplay(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::redisplay(recvr, slot, parent);
}

QAction* KStandardAction_Up(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::up(recvr, slot, parent);
}

QAction* KStandardAction_Back(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::back(recvr, slot, parent);
}

QAction* KStandardAction_Forward(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::forward(recvr, slot, parent);
}

QAction* KStandardAction_Home(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::home(recvr, slot, parent);
}

QAction* KStandardAction_Prior(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::prior(recvr, slot, parent);
}

QAction* KStandardAction_Next(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::next(recvr, slot, parent);
}

QAction* KStandardAction_GoTo(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::goTo(recvr, slot, parent);
}

QAction* KStandardAction_GotoPage(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::gotoPage(recvr, slot, parent);
}

QAction* KStandardAction_GotoLine(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::gotoLine(recvr, slot, parent);
}

QAction* KStandardAction_FirstPage(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::firstPage(recvr, slot, parent);
}

QAction* KStandardAction_LastPage(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::lastPage(recvr, slot, parent);
}

QAction* KStandardAction_DocumentBack(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::documentBack(recvr, slot, parent);
}

QAction* KStandardAction_DocumentForward(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::documentForward(recvr, slot, parent);
}

QAction* KStandardAction_AddBookmark(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::addBookmark(recvr, slot, parent);
}

QAction* KStandardAction_EditBookmarks(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::editBookmarks(recvr, slot, parent);
}

QAction* KStandardAction_Spelling(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::spelling(recvr, slot, parent);
}

KToggleAction* KStandardAction_ShowMenubar(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::showMenubar(recvr, slot, parent);
}

KToggleAction* KStandardAction_ShowStatusbar(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::showStatusbar(recvr, slot, parent);
}

KToggleFullScreenAction* KStandardAction_FullScreen(const QObject* recvr, const char* slot, QWidget* window, QObject* parent) {
    return KStandardAction::fullScreen(recvr, slot, window, parent);
}

QAction* KStandardAction_KeyBindings(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::keyBindings(recvr, slot, parent);
}

QAction* KStandardAction_Preferences(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::preferences(recvr, slot, parent);
}

QAction* KStandardAction_ConfigureToolbars(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::configureToolbars(recvr, slot, parent);
}

QAction* KStandardAction_ConfigureNotifications(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::configureNotifications(recvr, slot, parent);
}

QAction* KStandardAction_SwitchApplicationLanguage(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::switchApplicationLanguage(recvr, slot, parent);
}

QAction* KStandardAction_HelpContents(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::helpContents(recvr, slot, parent);
}

QAction* KStandardAction_WhatsThis(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::whatsThis(recvr, slot, parent);
}

QAction* KStandardAction_ReportBug(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::reportBug(recvr, slot, parent);
}

QAction* KStandardAction_AboutApp(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::aboutApp(recvr, slot, parent);
}

QAction* KStandardAction_AboutKDE(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::aboutKDE(recvr, slot, parent);
}

QAction* KStandardAction_DeleteFile(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::deleteFile(recvr, slot, parent);
}

QAction* KStandardAction_RenameFile(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::renameFile(recvr, slot, parent);
}

QAction* KStandardAction_MoveToTrash(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::moveToTrash(recvr, slot, parent);
}

QAction* KStandardAction_Donate(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::donate(recvr, slot, parent);
}

KHamburgerMenu* KStandardAction_HamburgerMenu(const QObject* recvr, const char* slot, QObject* parent) {
    return KStandardAction::hamburgerMenu(recvr, slot, parent);
}
