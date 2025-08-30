#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETSC_LIBKSTANDARDACTION_H
#define SRC_EXTRAS_KCONFIGWIDGETSC_LIBKSTANDARDACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KHamburgerMenu KHamburgerMenu;
typedef struct KRecentFilesAction KRecentFilesAction;
typedef struct KStandardAction KStandardAction;
typedef struct KToggleAction KToggleAction;
typedef struct KToggleFullScreenAction KToggleFullScreenAction;
typedef struct QAction QAction;
typedef struct QObject QObject;
typedef struct QWidget QWidget;
#endif

QAction* KStandardAction_Create(int param1, const QObject* param2, const char* param3, QObject* param4);
QAction* KStandardAction_KCreateInternal(int param1, QObject* param2);
libqt_string KStandardAction_Name(int param1);
libqt_list /* of libqt_string */ KStandardAction_StdNames();
libqt_list /* of int */ KStandardAction_ActionIds();
int KStandardAction_ShortcutForActionId(int param1);
QAction* KStandardAction_OpenNew(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_Open(const QObject* param1, const char* param2, QObject* param3);
KRecentFilesAction* KStandardAction_OpenRecent(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_Save(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_SaveAs(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_Revert(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_Close(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_Print(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_PrintPreview(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_Mail(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_Quit(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_Undo(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_Redo(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_Cut(QObject* param1);
QAction* KStandardAction_Copy(QObject* param1);
QAction* KStandardAction_Paste(QObject* param1);
QAction* KStandardAction_Clear(QObject* param1);
QAction* KStandardAction_SelectAll(QObject* param1);
QAction* KStandardAction_Cut2(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_Copy2(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_Paste2(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_Clear2(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_SelectAll2(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_Deselect(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_Find(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_FindNext(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_FindPrev(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_Replace(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_ActualSize(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_FitToPage(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_FitToWidth(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_FitToHeight(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_ZoomIn(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_ZoomOut(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_Zoom(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_Redisplay(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_Up(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_Back(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_Forward(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_Home(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_Prior(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_Next(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_GoTo(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_GotoPage(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_GotoLine(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_FirstPage(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_LastPage(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_DocumentBack(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_DocumentForward(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_AddBookmark(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_EditBookmarks(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_Spelling(const QObject* param1, const char* param2, QObject* param3);
KToggleAction* KStandardAction_ShowMenubar(const QObject* param1, const char* param2, QObject* param3);
KToggleAction* KStandardAction_ShowStatusbar(const QObject* param1, const char* param2, QObject* param3);
KToggleFullScreenAction* KStandardAction_FullScreen(const QObject* param1, const char* param2, QWidget* param3, QObject* param4);
QAction* KStandardAction_KeyBindings(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_Preferences(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_ConfigureToolbars(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_ConfigureNotifications(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_SwitchApplicationLanguage(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_HelpContents(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_WhatsThis(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_ReportBug(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_AboutApp(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_AboutKDE(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_DeleteFile(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_RenameFile(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_MoveToTrash(const QObject* param1, const char* param2, QObject* param3);
QAction* KStandardAction_Donate(const QObject* param1, const char* param2, QObject* param3);
KHamburgerMenu* KStandardAction_HamburgerMenu(const QObject* param1, const char* param2, QObject* param3);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
