#pragma once
#ifndef SRC_POSIX_RESTRICTED_QTERMWIDGETC_LIBQTERMWIDGET_INTERFACE_H
#define SRC_POSIX_RESTRICTED_QTERMWIDGETC_LIBQTERMWIDGET_INTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAction QAction;
typedef struct QFont QFont;
typedef struct QKeyEvent QKeyEvent;
typedef struct QPoint QPoint;
typedef struct QTermWidgetInterface QTermWidgetInterface;
#endif

void QTermWidgetInterface_SetTerminalSizeHint(QTermWidgetInterface* self, bool enabled);
bool QTermWidgetInterface_TerminalSizeHint(QTermWidgetInterface* self);
void QTermWidgetInterface_StartShellProgram(QTermWidgetInterface* self);
void QTermWidgetInterface_StartTerminalTeletype(QTermWidgetInterface* self);
int QTermWidgetInterface_GetShellPID(QTermWidgetInterface* self);
int QTermWidgetInterface_GetForegroundProcessId(QTermWidgetInterface* self);
void QTermWidgetInterface_ChangeDir(QTermWidgetInterface* self, const libqt_string dir);
void QTermWidgetInterface_SetTerminalFont(QTermWidgetInterface* self, const QFont* font);
QFont* QTermWidgetInterface_GetTerminalFont(QTermWidgetInterface* self);
void QTermWidgetInterface_SetTerminalOpacity(QTermWidgetInterface* self, double level);
void QTermWidgetInterface_SetTerminalBackgroundImage(QTermWidgetInterface* self, const libqt_string backgroundImage);
void QTermWidgetInterface_SetTerminalBackgroundMode(QTermWidgetInterface* self, int mode);
void QTermWidgetInterface_SetEnvironment(QTermWidgetInterface* self, const libqt_list /* of libqt_string */ environment);
void QTermWidgetInterface_SetShellProgram(QTermWidgetInterface* self, const libqt_string program);
void QTermWidgetInterface_SetWorkingDirectory(QTermWidgetInterface* self, const libqt_string dir);
libqt_string QTermWidgetInterface_WorkingDirectory(QTermWidgetInterface* self);
void QTermWidgetInterface_SetArgs(QTermWidgetInterface* self, const libqt_list /* of libqt_string */ args);
void QTermWidgetInterface_SetColorScheme(QTermWidgetInterface* self, const libqt_string name);
libqt_list /* of libqt_string */ QTermWidgetInterface_GetAvailableColorSchemes(QTermWidgetInterface* self);
void QTermWidgetInterface_SetHistorySize(QTermWidgetInterface* self, int lines);
int QTermWidgetInterface_HistorySize(const QTermWidgetInterface* self);
void QTermWidgetInterface_SetScrollBarPosition(QTermWidgetInterface* self, int scrollBarPosition);
void QTermWidgetInterface_ScrollToEnd(QTermWidgetInterface* self);
void QTermWidgetInterface_SendText(QTermWidgetInterface* self, const libqt_string text);
void QTermWidgetInterface_SendKeyEvent(QTermWidgetInterface* self, QKeyEvent* e);
void QTermWidgetInterface_SetFlowControlEnabled(QTermWidgetInterface* self, bool enabled);
bool QTermWidgetInterface_FlowControlEnabled(QTermWidgetInterface* self);
void QTermWidgetInterface_SetFlowControlWarningEnabled(QTermWidgetInterface* self, bool enabled);
libqt_string QTermWidgetInterface_KeyBindings(QTermWidgetInterface* self);
void QTermWidgetInterface_SetMotionAfterPasting(QTermWidgetInterface* self, int motionAfterPasting);
int QTermWidgetInterface_HistoryLinesCount(QTermWidgetInterface* self);
int QTermWidgetInterface_ScreenColumnsCount(QTermWidgetInterface* self);
int QTermWidgetInterface_ScreenLinesCount(QTermWidgetInterface* self);
void QTermWidgetInterface_SetSelectionStart(QTermWidgetInterface* self, int row, int column);
void QTermWidgetInterface_SetSelectionEnd(QTermWidgetInterface* self, int row, int column);
void QTermWidgetInterface_GetSelectionStart(QTermWidgetInterface* self, int* row, int* column);
void QTermWidgetInterface_GetSelectionEnd(QTermWidgetInterface* self, int* row, int* column);
libqt_string QTermWidgetInterface_SelectedText(QTermWidgetInterface* self, bool preserveLineBreaks);
void QTermWidgetInterface_SetMonitorActivity(QTermWidgetInterface* self, bool monitorActivity);
void QTermWidgetInterface_SetMonitorSilence(QTermWidgetInterface* self, bool monitorSilence);
void QTermWidgetInterface_SetSilenceTimeout(QTermWidgetInterface* self, int seconds);
libqt_list /* of QAction* */ QTermWidgetInterface_FilterActions(QTermWidgetInterface* self, const QPoint* position);
int QTermWidgetInterface_GetPtySlaveFd(const QTermWidgetInterface* self);
void QTermWidgetInterface_SetBlinkingCursor(QTermWidgetInterface* self, bool blink);
void QTermWidgetInterface_SetBidiEnabled(QTermWidgetInterface* self, bool enabled);
bool QTermWidgetInterface_IsBidiEnabled(QTermWidgetInterface* self);
void QTermWidgetInterface_SetAutoClose(QTermWidgetInterface* self, bool autoClose);
libqt_string QTermWidgetInterface_Title(const QTermWidgetInterface* self);
libqt_string QTermWidgetInterface_Icon(const QTermWidgetInterface* self);
bool QTermWidgetInterface_IsTitleChanged(const QTermWidgetInterface* self);
void QTermWidgetInterface_BracketText(QTermWidgetInterface* self, libqt_string text);
void QTermWidgetInterface_DisableBracketedPasteMode(QTermWidgetInterface* self, bool disable);
bool QTermWidgetInterface_BracketedPasteModeIsDisabled(const QTermWidgetInterface* self);
void QTermWidgetInterface_SetMargin(QTermWidgetInterface* self, int margin);
int QTermWidgetInterface_GetMargin(const QTermWidgetInterface* self);
void QTermWidgetInterface_SetDrawLineChars(QTermWidgetInterface* self, bool drawLineChars);
void QTermWidgetInterface_SetBoldIntense(QTermWidgetInterface* self, bool boldIntense);
void QTermWidgetInterface_SetConfirmMultilinePaste(QTermWidgetInterface* self, bool confirmMultilinePaste);
void QTermWidgetInterface_SetTrimPastedTrailingNewlines(QTermWidgetInterface* self, bool trimPastedTrailingNewlines);
libqt_string QTermWidgetInterface_WordCharacters(const QTermWidgetInterface* self);
void QTermWidgetInterface_SetWordCharacters(QTermWidgetInterface* self, const libqt_string chars);
QTermWidgetInterface* QTermWidgetInterface_CreateWidget(const QTermWidgetInterface* self, int startnow);
void QTermWidgetInterface_OperatorAssign(QTermWidgetInterface* self, const QTermWidgetInterface* param1);
void QTermWidgetInterface_Delete(QTermWidgetInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
