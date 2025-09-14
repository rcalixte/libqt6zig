#pragma once
#ifndef SRC_EXTRAS_SOLIDC_LIBPROCESSOR_H
#define SRC_EXTRAS_SOLIDC_LIBPROCESSOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Solid__DeviceInterface)
typedef Solid::DeviceInterface Solid__DeviceInterface;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Solid__Processor)
typedef Solid::Processor Solid__Processor;
#endif
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct Solid__DeviceInterface Solid__DeviceInterface;
typedef struct Solid__Processor Solid__Processor;
#endif

QMetaObject* Solid__Processor_MetaObject(const Solid__Processor* self);
void* Solid__Processor_Metacast(Solid__Processor* self, const char* param1);
int Solid__Processor_Metacall(Solid__Processor* self, int param1, int param2, void** param3);
libqt_string Solid__Processor_Tr(const char* s);
int Solid__Processor_DeviceInterfaceType();
int Solid__Processor_Number(const Solid__Processor* self);
int Solid__Processor_MaxSpeed(const Solid__Processor* self);
bool Solid__Processor_CanChangeFrequency(const Solid__Processor* self);
int Solid__Processor_InstructionSets(const Solid__Processor* self);
libqt_string Solid__Processor_Tr2(const char* s, const char* c);
libqt_string Solid__Processor_Tr3(const char* s, const char* c, int n);
void Solid__Processor_Delete(Solid__Processor* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
