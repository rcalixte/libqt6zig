#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBJOBUIDELEGATEFACTORY_H
#define SRC_EXTRAS_KIOC_LIBJOBUIDELEGATEFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__JobUiDelegateFactory)
typedef KIO::JobUiDelegateFactory KIO__JobUiDelegateFactory;
#endif
#else
typedef struct KIO KIO;
typedef struct KIO__JobUiDelegateFactory KIO__JobUiDelegateFactory;
typedef struct KJobUiDelegate KJobUiDelegate;
typedef struct QWidget QWidget;
#endif

KJobUiDelegate* KIO__JobUiDelegateFactory_CreateDelegate(const KIO__JobUiDelegateFactory* self);
KJobUiDelegate* KIO__JobUiDelegateFactory_CreateDelegate2(const KIO__JobUiDelegateFactory* self, int flags, QWidget* window);

KJobUiDelegate* KIO_CreateDefaultJobUiDelegate();
KJobUiDelegate* KIO_CreateDefaultJobUiDelegate2(int param1, QWidget* param2);
KIO__JobUiDelegateFactory* KIO_DefaultJobUiDelegateFactory();
void KIO_SetDefaultJobUiDelegateFactory(KIO__JobUiDelegateFactory* param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
