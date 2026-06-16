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

QAction* KStandardAction_Create(int id, const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_KCreateInternal(int id, QObject* parent);
libqt_string KStandardAction_Name(int id);
libqt_list /* of libqt_string */ KStandardAction_StdNames();
libqt_list /* of int */ KStandardAction_ActionIds();
int KStandardAction_ShortcutForActionId(int id);
QAction* KStandardAction_OpenNew(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_Open(const QObject* recvr, const char* slot, QObject* parent);
KRecentFilesAction* KStandardAction_OpenRecent(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_Save(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_SaveAs(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_Revert(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_Close(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_Print(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_PrintPreview(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_Mail(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_Quit(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_Undo(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_Redo(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_Cut(QObject* parent);
QAction* KStandardAction_Copy(QObject* parent);
QAction* KStandardAction_Paste(QObject* parent);
QAction* KStandardAction_Clear(QObject* parent);
QAction* KStandardAction_SelectAll(QObject* parent);
QAction* KStandardAction_Cut2(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_Copy2(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_Paste2(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_Clear2(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_SelectAll2(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_Deselect(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_Find(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_FindNext(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_FindPrev(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_Replace(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_ActualSize(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_FitToPage(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_FitToWidth(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_FitToHeight(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_ZoomIn(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_ZoomOut(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_Zoom(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_Redisplay(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_Up(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_Back(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_Forward(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_Home(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_Prior(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_Next(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_GoTo(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_GotoPage(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_GotoLine(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_FirstPage(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_LastPage(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_DocumentBack(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_DocumentForward(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_AddBookmark(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_EditBookmarks(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_Spelling(const QObject* recvr, const char* slot, QObject* parent);
KToggleAction* KStandardAction_ShowMenubar(const QObject* recvr, const char* slot, QObject* parent);
KToggleAction* KStandardAction_ShowStatusbar(const QObject* recvr, const char* slot, QObject* parent);
KToggleFullScreenAction* KStandardAction_FullScreen(const QObject* recvr, const char* slot, QWidget* window, QObject* parent);
QAction* KStandardAction_KeyBindings(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_Preferences(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_ConfigureToolbars(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_ConfigureNotifications(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_SwitchApplicationLanguage(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_HelpContents(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_WhatsThis(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_ReportBug(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_AboutApp(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_AboutKDE(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_DeleteFile(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_RenameFile(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_MoveToTrash(const QObject* recvr, const char* slot, QObject* parent);
QAction* KStandardAction_Donate(const QObject* recvr, const char* slot, QObject* parent);
KHamburgerMenu* KStandardAction_HamburgerMenu(const QObject* recvr, const char* slot, QObject* parent);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
