#pragma once
#ifndef SRC_EXTRAS_SOLIDC_LIBNETWORKSHARE_H
#define SRC_EXTRAS_SOLIDC_LIBNETWORKSHARE_H

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Solid__NetworkShare)
typedef Solid::NetworkShare Solid__NetworkShare;
#endif
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
typedef struct Solid__DeviceInterface Solid__DeviceInterface;
typedef struct Solid__NetworkShare Solid__NetworkShare;
#endif

QMetaObject* Solid__NetworkShare_MetaObject(const Solid__NetworkShare* self);
void* Solid__NetworkShare_Metacast(Solid__NetworkShare* self, const char* param1);
int Solid__NetworkShare_Metacall(Solid__NetworkShare* self, int param1, int param2, void** param3);
libqt_string Solid__NetworkShare_Tr(const char* s);
int Solid__NetworkShare_DeviceInterfaceType();
int Solid__NetworkShare_Type(const Solid__NetworkShare* self);
QUrl* Solid__NetworkShare_Url(const Solid__NetworkShare* self);
libqt_string Solid__NetworkShare_Tr2(const char* s, const char* c);
libqt_string Solid__NetworkShare_Tr3(const char* s, const char* c, int n);
void Solid__NetworkShare_Delete(Solid__NetworkShare* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
