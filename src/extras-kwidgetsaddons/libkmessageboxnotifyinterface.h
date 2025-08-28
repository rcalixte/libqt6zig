#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKMESSAGEBOXNOTIFYINTERFACE_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKMESSAGEBOXNOTIFYINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KMessageBoxNotifyInterface KMessageBoxNotifyInterface;
typedef struct QWidget QWidget;
#endif

KMessageBoxNotifyInterface* KMessageBoxNotifyInterface_new();
void KMessageBoxNotifyInterface_SendNotification(KMessageBoxNotifyInterface* self, int notificationType, const libqt_string message, QWidget* parent);
void KMessageBoxNotifyInterface_OperatorAssign(KMessageBoxNotifyInterface* self, const KMessageBoxNotifyInterface* param1);
void KMessageBoxNotifyInterface_OnSendNotification(KMessageBoxNotifyInterface* self, intptr_t slot);
void KMessageBoxNotifyInterface_QBaseSendNotification(KMessageBoxNotifyInterface* self, int notificationType, const libqt_string message, QWidget* parent);
void KMessageBoxNotifyInterface_Delete(KMessageBoxNotifyInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
