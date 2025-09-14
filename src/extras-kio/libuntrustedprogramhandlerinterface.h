#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBUNTRUSTEDPROGRAMHANDLERINTERFACE_H
#define SRC_EXTRAS_KIOC_LIBUNTRUSTEDPROGRAMHANDLERINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__UntrustedProgramHandlerInterface)
typedef KIO::UntrustedProgramHandlerInterface KIO__UntrustedProgramHandlerInterface;
#endif
#else
typedef struct KIO__UntrustedProgramHandlerInterface KIO__UntrustedProgramHandlerInterface;
typedef struct KJob KJob;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* KIO__UntrustedProgramHandlerInterface_MetaObject(const KIO__UntrustedProgramHandlerInterface* self);
void* KIO__UntrustedProgramHandlerInterface_Metacast(KIO__UntrustedProgramHandlerInterface* self, const char* param1);
int KIO__UntrustedProgramHandlerInterface_Metacall(KIO__UntrustedProgramHandlerInterface* self, int param1, int param2, void** param3);
libqt_string KIO__UntrustedProgramHandlerInterface_Tr(const char* s);
void KIO__UntrustedProgramHandlerInterface_ShowUntrustedProgramWarning(KIO__UntrustedProgramHandlerInterface* self, KJob* job, const libqt_string programName);
bool KIO__UntrustedProgramHandlerInterface_MakeServiceFileExecutable(KIO__UntrustedProgramHandlerInterface* self, const libqt_string fileName, libqt_string errorString);
bool KIO__UntrustedProgramHandlerInterface_SetExecuteBit(KIO__UntrustedProgramHandlerInterface* self, const libqt_string fileName, libqt_string errorString);
void KIO__UntrustedProgramHandlerInterface_Result(KIO__UntrustedProgramHandlerInterface* self, bool confirmed);
void KIO__UntrustedProgramHandlerInterface_Connect_Result(KIO__UntrustedProgramHandlerInterface* self, intptr_t slot);
libqt_string KIO__UntrustedProgramHandlerInterface_Tr2(const char* s, const char* c);
libqt_string KIO__UntrustedProgramHandlerInterface_Tr3(const char* s, const char* c, int n);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
