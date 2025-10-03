#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBKDE_TERMINAL_INTERFACE_H
#define SRC_EXTRAS_KPARTSC_LIBKDE_TERMINAL_INTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QVariant QVariant;
typedef struct TerminalInterface TerminalInterface;
#endif

void TerminalInterface_StartProgram(TerminalInterface* self, const libqt_string program, const libqt_list /* of libqt_string */ args);
void TerminalInterface_ShowShellInDir(TerminalInterface* self, const libqt_string dir);
void TerminalInterface_SendInput(TerminalInterface* self, const libqt_string text);
int TerminalInterface_TerminalProcessId(TerminalInterface* self);
int TerminalInterface_ForegroundProcessId(TerminalInterface* self);
libqt_string TerminalInterface_ForegroundProcessName(TerminalInterface* self);
libqt_string TerminalInterface_CurrentWorkingDirectory(const TerminalInterface* self);
libqt_list /* of libqt_string */ TerminalInterface_AvailableProfiles(const TerminalInterface* self);
libqt_string TerminalInterface_CurrentProfileName(const TerminalInterface* self);
bool TerminalInterface_SetCurrentProfile(TerminalInterface* self, const libqt_string profileName);
QVariant* TerminalInterface_ProfileProperty(const TerminalInterface* self, const libqt_string profileProperty);
void TerminalInterface_OperatorAssign(TerminalInterface* self, const TerminalInterface* param1);
void TerminalInterface_Delete(TerminalInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
