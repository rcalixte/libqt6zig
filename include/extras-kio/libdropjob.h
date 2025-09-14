#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBDROPJOB_H
#define SRC_EXTRAS_KIOC_LIBDROPJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__CopyJob)
typedef KIO::CopyJob KIO__CopyJob;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__DropJob)
typedef KIO::DropJob KIO__DropJob;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__Job)
typedef KIO::Job KIO__Job;
#endif
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KFileItemListProperties KFileItemListProperties;
typedef struct KIO KIO;
typedef struct KIO__CopyJob KIO__CopyJob;
typedef struct KIO__DropJob KIO__DropJob;
typedef struct KIO__Job KIO__Job;
typedef struct KJob KJob;
typedef struct QAction QAction;
typedef struct QDropEvent QDropEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPoint QPoint;
typedef struct QUrl QUrl;
#endif

QMetaObject* KIO__DropJob_MetaObject(const KIO__DropJob* self);
void* KIO__DropJob_Metacast(KIO__DropJob* self, const char* param1);
int KIO__DropJob_Metacall(KIO__DropJob* self, int param1, int param2, void** param3);
libqt_string KIO__DropJob_Tr(const char* s);
void KIO__DropJob_SetApplicationActions(KIO__DropJob* self, const libqt_list /* of QAction* */ actions);
void KIO__DropJob_ShowMenu(KIO__DropJob* self, const QPoint* p);
void KIO__DropJob_ItemCreated(KIO__DropJob* self, const QUrl* url);
void KIO__DropJob_Connect_ItemCreated(KIO__DropJob* self, intptr_t slot);
void KIO__DropJob_CopyJobStarted(KIO__DropJob* self, KIO__CopyJob* job);
void KIO__DropJob_Connect_CopyJobStarted(KIO__DropJob* self, intptr_t slot);
void KIO__DropJob_PopupMenuAboutToShow(KIO__DropJob* self, const KFileItemListProperties* itemProps);
void KIO__DropJob_Connect_PopupMenuAboutToShow(KIO__DropJob* self, intptr_t slot);
libqt_string KIO__DropJob_Tr2(const char* s, const char* c);
libqt_string KIO__DropJob_Tr3(const char* s, const char* c, int n);
void KIO__DropJob_ShowMenu2(KIO__DropJob* self, const QPoint* p, QAction* atAction);
void KIO__DropJob_Delete(KIO__DropJob* self);

KIO__DropJob* KIO_Drop(const QDropEvent* param1, const QUrl* param2, int param3);
KIO__DropJob* KIO_Drop2(const QDropEvent* param1, const QUrl* param2, int param3, int param4);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
