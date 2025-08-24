#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBKSTANDARDSHORTCUT_H
#define SRC_EXTRAS_KCONFIGC_LIBKSTANDARDSHORTCUT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KStandardShortcut KStandardShortcut;
typedef struct QKeySequence QKeySequence;
#endif

libqt_list /* of QKeySequence* */ KStandardShortcut_Shortcut(int param1);
libqt_string KStandardShortcut_Name(int param1);
libqt_string KStandardShortcut_Label(int param1);
libqt_string KStandardShortcut_WhatsThis(int param1);
int KStandardShortcut_Find(const QKeySequence* param1);
int KStandardShortcut_FindByName(const libqt_string param1);
libqt_list /* of QKeySequence* */ KStandardShortcut_HardcodedDefaultShortcut(int param1);
void KStandardShortcut_SaveShortcut(int param1, const libqt_list /* of QKeySequence* */ param2);
int KStandardShortcut_Category(int param1);
libqt_list /* of QKeySequence* */ KStandardShortcut_Open();
libqt_list /* of QKeySequence* */ KStandardShortcut_OpenNew();
libqt_list /* of QKeySequence* */ KStandardShortcut_Close();
libqt_list /* of QKeySequence* */ KStandardShortcut_Save();
libqt_list /* of QKeySequence* */ KStandardShortcut_Print();
libqt_list /* of QKeySequence* */ KStandardShortcut_Quit();
libqt_list /* of QKeySequence* */ KStandardShortcut_Undo();
libqt_list /* of QKeySequence* */ KStandardShortcut_Redo();
libqt_list /* of QKeySequence* */ KStandardShortcut_Cut();
libqt_list /* of QKeySequence* */ KStandardShortcut_Copy();
libqt_list /* of QKeySequence* */ KStandardShortcut_Paste();
libqt_list /* of QKeySequence* */ KStandardShortcut_PasteSelection();
libqt_list /* of QKeySequence* */ KStandardShortcut_SelectAll();
libqt_list /* of QKeySequence* */ KStandardShortcut_DeleteWordBack();
libqt_list /* of QKeySequence* */ KStandardShortcut_DeleteWordForward();
libqt_list /* of QKeySequence* */ KStandardShortcut_Find2();
libqt_list /* of QKeySequence* */ KStandardShortcut_FindNext();
libqt_list /* of QKeySequence* */ KStandardShortcut_FindPrev();
libqt_list /* of QKeySequence* */ KStandardShortcut_Replace();
libqt_list /* of QKeySequence* */ KStandardShortcut_ZoomIn();
libqt_list /* of QKeySequence* */ KStandardShortcut_ZoomOut();
libqt_list /* of QKeySequence* */ KStandardShortcut_Home();
libqt_list /* of QKeySequence* */ KStandardShortcut_Begin();
libqt_list /* of QKeySequence* */ KStandardShortcut_End();
libqt_list /* of QKeySequence* */ KStandardShortcut_BeginningOfLine();
libqt_list /* of QKeySequence* */ KStandardShortcut_EndOfLine();
libqt_list /* of QKeySequence* */ KStandardShortcut_Prior();
libqt_list /* of QKeySequence* */ KStandardShortcut_Next();
libqt_list /* of QKeySequence* */ KStandardShortcut_GotoLine();
libqt_list /* of QKeySequence* */ KStandardShortcut_AddBookmark();
libqt_list /* of QKeySequence* */ KStandardShortcut_TabNext();
libqt_list /* of QKeySequence* */ KStandardShortcut_TabPrev();
libqt_list /* of QKeySequence* */ KStandardShortcut_FullScreen();
libqt_list /* of QKeySequence* */ KStandardShortcut_Help();
libqt_list /* of QKeySequence* */ KStandardShortcut_Completion();
libqt_list /* of QKeySequence* */ KStandardShortcut_PrevCompletion();
libqt_list /* of QKeySequence* */ KStandardShortcut_NextCompletion();
libqt_list /* of QKeySequence* */ KStandardShortcut_SubstringCompletion();
libqt_list /* of QKeySequence* */ KStandardShortcut_RotateUp();
libqt_list /* of QKeySequence* */ KStandardShortcut_RotateDown();
libqt_list /* of QKeySequence* */ KStandardShortcut_WhatsThis2();
libqt_list /* of QKeySequence* */ KStandardShortcut_Reload();
libqt_list /* of QKeySequence* */ KStandardShortcut_Up();
libqt_list /* of QKeySequence* */ KStandardShortcut_Back();
libqt_list /* of QKeySequence* */ KStandardShortcut_Forward();
libqt_list /* of QKeySequence* */ KStandardShortcut_BackwardWord();
libqt_list /* of QKeySequence* */ KStandardShortcut_ForwardWord();
libqt_list /* of QKeySequence* */ KStandardShortcut_ShowMenubar();
libqt_list /* of QKeySequence* */ KStandardShortcut_DeleteFile();
libqt_list /* of QKeySequence* */ KStandardShortcut_RenameFile();
libqt_list /* of QKeySequence* */ KStandardShortcut_CreateFolder();
libqt_list /* of QKeySequence* */ KStandardShortcut_MoveToTrash();
libqt_list /* of QKeySequence* */ KStandardShortcut_Preferences();
libqt_list /* of QKeySequence* */ KStandardShortcut_ShowHideHiddenFiles();
libqt_list /* of QKeySequence* */ KStandardShortcut_OpenMainMenu();
libqt_list /* of QKeySequence* */ KStandardShortcut_OpenContextMenu();

#ifdef __cplusplus
} /* extern C */
#endif

#endif
