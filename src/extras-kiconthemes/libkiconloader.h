#pragma once
#ifndef SRC_EXTRAS_KICONTHEMESC_LIBKICONLOADER_H
#define SRC_EXTRAS_KICONTHEMESC_LIBKICONLOADER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KDE KDE;
typedef struct KIconColors KIconColors;
typedef struct KIconEffect KIconEffect;
typedef struct KIconLoader KIconLoader;
typedef struct KIconTheme KIconTheme;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIcon QIcon;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMovie QMovie;
typedef struct QObject QObject;
typedef struct QPalette QPalette;
typedef struct QPixmap QPixmap;
typedef struct QTimerEvent QTimerEvent;
#endif

KIconLoader* KIconLoader_new();
KIconLoader* KIconLoader_new2(const libqt_string appname);
KIconLoader* KIconLoader_new3(const libqt_string appname, const libqt_list /* of libqt_string */ extraSearchPaths);
KIconLoader* KIconLoader_new4(const libqt_string appname, const libqt_list /* of libqt_string */ extraSearchPaths, QObject* parent);
QMetaObject* KIconLoader_MetaObject(const KIconLoader* self);
void* KIconLoader_Metacast(KIconLoader* self, const char* param1);
int KIconLoader_Metacall(KIconLoader* self, int param1, int param2, void** param3);
libqt_string KIconLoader_Tr(const char* s);
KIconLoader* KIconLoader_Global();
void KIconLoader_AddAppDir(KIconLoader* self, const libqt_string appname);
QPixmap* KIconLoader_LoadIcon(const KIconLoader* self, const libqt_string name, int group);
QPixmap* KIconLoader_LoadMimeTypeIcon(const KIconLoader* self, const libqt_string iconName, int group);
libqt_string KIconLoader_IconPath(const KIconLoader* self, const libqt_string name, int group_or_size);
libqt_string KIconLoader_IconPath2(const KIconLoader* self, const libqt_string name, int group_or_size, bool canReturnNull, double scale);
QMovie* KIconLoader_LoadMovie(const KIconLoader* self, const libqt_string name, int group);
libqt_string KIconLoader_MoviePath(const KIconLoader* self, const libqt_string name, int group);
libqt_list /* of libqt_string */ KIconLoader_LoadAnimated(const KIconLoader* self, const libqt_string name, int group);
libqt_list /* of libqt_string */ KIconLoader_QueryIcons(const KIconLoader* self);
libqt_list /* of libqt_string */ KIconLoader_QueryIcons2(const KIconLoader* self, int group_or_size);
libqt_list /* of libqt_string */ KIconLoader_QueryIconsByContext(const KIconLoader* self, int group_or_size);
bool KIconLoader_HasContext(const KIconLoader* self, int context);
libqt_list /* of libqt_string */ KIconLoader_QueryIconsByDir(const KIconLoader* self, const libqt_string iconsDir);
libqt_list /* of libqt_string */ KIconLoader_SearchPaths(const KIconLoader* self);
int KIconLoader_CurrentSize(const KIconLoader* self, int group);
KIconTheme* KIconLoader_Theme(const KIconLoader* self);
KIconEffect* KIconLoader_IconEffect(const KIconLoader* self);
void KIconLoader_Reconfigure(KIconLoader* self, const libqt_string appname);
QPixmap* KIconLoader_Unknown();
void KIconLoader_DrawOverlays(const KIconLoader* self, const libqt_list /* of libqt_string */ overlays, QPixmap* pixmap, int group);
bool KIconLoader_HasIcon(const KIconLoader* self, const libqt_string iconName);
void KIconLoader_SetCustomPalette(KIconLoader* self, const QPalette* palette);
QPalette* KIconLoader_CustomPalette(const KIconLoader* self);
void KIconLoader_ResetPalette(KIconLoader* self);
bool KIconLoader_HasCustomPalette(const KIconLoader* self);
void KIconLoader_NewIconLoader(KIconLoader* self);
void KIconLoader_EmitChange(int group);
void KIconLoader_IconLoaderSettingsChanged(KIconLoader* self);
void KIconLoader_Connect_IconLoaderSettingsChanged(KIconLoader* self, intptr_t slot);
void KIconLoader_IconChanged(KIconLoader* self, int group);
void KIconLoader_Connect_IconChanged(KIconLoader* self, intptr_t slot);
libqt_string KIconLoader_Tr2(const char* s, const char* c);
libqt_string KIconLoader_Tr3(const char* s, const char* c, int n);
void KIconLoader_AddAppDir2(KIconLoader* self, const libqt_string appname, const libqt_string themeBaseDir);
QPixmap* KIconLoader_LoadIcon3(const KIconLoader* self, const libqt_string name, int group, int size);
QPixmap* KIconLoader_LoadIcon4(const KIconLoader* self, const libqt_string name, int group, int size, int state);
QPixmap* KIconLoader_LoadIcon5(const KIconLoader* self, const libqt_string name, int group, int size, int state, const libqt_list /* of libqt_string */ overlays);
QPixmap* KIconLoader_LoadMimeTypeIcon3(const KIconLoader* self, const libqt_string iconName, int group, int size);
QPixmap* KIconLoader_LoadMimeTypeIcon4(const KIconLoader* self, const libqt_string iconName, int group, int size, int state);
QPixmap* KIconLoader_LoadMimeTypeIcon5(const KIconLoader* self, const libqt_string iconName, int group, int size, int state, const libqt_list /* of libqt_string */ overlays);
libqt_string KIconLoader_IconPath3(const KIconLoader* self, const libqt_string name, int group_or_size, bool canReturnNull);
QMovie* KIconLoader_LoadMovie3(const KIconLoader* self, const libqt_string name, int group, int size);
QMovie* KIconLoader_LoadMovie4(const KIconLoader* self, const libqt_string name, int group, int size, QObject* parent);
libqt_string KIconLoader_MoviePath3(const KIconLoader* self, const libqt_string name, int group, int size);
libqt_list /* of libqt_string */ KIconLoader_LoadAnimated3(const KIconLoader* self, const libqt_string name, int group, int size);
libqt_list /* of libqt_string */ KIconLoader_QueryIcons22(const KIconLoader* self, int group_or_size, int context);
libqt_list /* of libqt_string */ KIconLoader_QueryIconsByContext2(const KIconLoader* self, int group_or_size, int context);
void KIconLoader_Reconfigure2(KIconLoader* self, const libqt_string appname, const libqt_list /* of libqt_string */ extraSearchPaths);
void KIconLoader_DrawOverlays4(const KIconLoader* self, const libqt_list /* of libqt_string */ overlays, QPixmap* pixmap, int group, int state);
void KIconLoader_OnMetacall(KIconLoader* self, intptr_t slot);
int KIconLoader_QBaseMetacall(KIconLoader* self, int param1, int param2, void** param3);
bool KIconLoader_Event(KIconLoader* self, QEvent* event);
void KIconLoader_OnEvent(KIconLoader* self, intptr_t slot);
bool KIconLoader_QBaseEvent(KIconLoader* self, QEvent* event);
bool KIconLoader_EventFilter(KIconLoader* self, QObject* watched, QEvent* event);
void KIconLoader_OnEventFilter(KIconLoader* self, intptr_t slot);
bool KIconLoader_QBaseEventFilter(KIconLoader* self, QObject* watched, QEvent* event);
void KIconLoader_TimerEvent(KIconLoader* self, QTimerEvent* event);
void KIconLoader_OnTimerEvent(KIconLoader* self, intptr_t slot);
void KIconLoader_QBaseTimerEvent(KIconLoader* self, QTimerEvent* event);
void KIconLoader_ChildEvent(KIconLoader* self, QChildEvent* event);
void KIconLoader_OnChildEvent(KIconLoader* self, intptr_t slot);
void KIconLoader_QBaseChildEvent(KIconLoader* self, QChildEvent* event);
void KIconLoader_CustomEvent(KIconLoader* self, QEvent* event);
void KIconLoader_OnCustomEvent(KIconLoader* self, intptr_t slot);
void KIconLoader_QBaseCustomEvent(KIconLoader* self, QEvent* event);
void KIconLoader_ConnectNotify(KIconLoader* self, const QMetaMethod* signal);
void KIconLoader_OnConnectNotify(KIconLoader* self, intptr_t slot);
void KIconLoader_QBaseConnectNotify(KIconLoader* self, const QMetaMethod* signal);
void KIconLoader_DisconnectNotify(KIconLoader* self, const QMetaMethod* signal);
void KIconLoader_OnDisconnectNotify(KIconLoader* self, intptr_t slot);
void KIconLoader_QBaseDisconnectNotify(KIconLoader* self, const QMetaMethod* signal);
QObject* KIconLoader_Sender(const KIconLoader* self);
void KIconLoader_OnSender(const KIconLoader* self, intptr_t slot);
QObject* KIconLoader_QBaseSender(const KIconLoader* self);
int KIconLoader_SenderSignalIndex(const KIconLoader* self);
void KIconLoader_OnSenderSignalIndex(const KIconLoader* self, intptr_t slot);
int KIconLoader_QBaseSenderSignalIndex(const KIconLoader* self);
int KIconLoader_Receivers(const KIconLoader* self, const char* signal);
void KIconLoader_OnReceivers(const KIconLoader* self, intptr_t slot);
int KIconLoader_QBaseReceivers(const KIconLoader* self, const char* signal);
bool KIconLoader_IsSignalConnected(const KIconLoader* self, const QMetaMethod* signal);
void KIconLoader_OnIsSignalConnected(const KIconLoader* self, intptr_t slot);
bool KIconLoader_QBaseIsSignalConnected(const KIconLoader* self, const QMetaMethod* signal);
void KIconLoader_Delete(KIconLoader* self);

QIcon* KDE_Icon(const libqt_string param1, KIconLoader* param2);
QIcon* KDE_Icon2(const libqt_string param1, const KIconColors* param2, KIconLoader* param3);
QIcon* KDE_Icon3(const libqt_string param1, const libqt_list /* of libqt_string */ param2, KIconLoader* param3);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
