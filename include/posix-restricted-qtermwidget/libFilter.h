#pragma once
#ifndef SRC_POSIX_RESTRICTED_QTERMWIDGETC_LIBFILTER_H
#define SRC_POSIX_RESTRICTED_QTERMWIDGETC_LIBFILTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Konsole__Filter)
typedef Konsole::Filter Konsole__Filter;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Konsole__Filter__HotSpot)
typedef Konsole::Filter::HotSpot Konsole__Filter__HotSpot;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Konsole__FilterChain)
typedef Konsole::FilterChain Konsole__FilterChain;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Konsole__FilterObject)
typedef Konsole::FilterObject Konsole__FilterObject;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Konsole__RegExpFilter)
typedef Konsole::RegExpFilter Konsole__RegExpFilter;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Konsole__RegExpFilter__HotSpot)
typedef Konsole::RegExpFilter::HotSpot Konsole__RegExpFilter__HotSpot;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Konsole__TerminalImageFilterChain)
typedef Konsole::TerminalImageFilterChain Konsole__TerminalImageFilterChain;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Konsole__UrlFilter)
typedef Konsole::UrlFilter Konsole__UrlFilter;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Konsole__UrlFilter__HotSpot)
typedef Konsole::UrlFilter::HotSpot Konsole__UrlFilter__HotSpot;
#endif
#else
typedef struct Konsole__Filter Konsole__Filter;
typedef struct Konsole__FilterChain Konsole__FilterChain;
typedef struct Konsole__FilterObject Konsole__FilterObject;
typedef struct Konsole__Filter__HotSpot Konsole__Filter__HotSpot;
typedef struct Konsole__RegExpFilter Konsole__RegExpFilter;
typedef struct Konsole__RegExpFilter__HotSpot Konsole__RegExpFilter__HotSpot;
typedef struct Konsole__TerminalImageFilterChain Konsole__TerminalImageFilterChain;
typedef struct Konsole__UrlFilter Konsole__UrlFilter;
typedef struct Konsole__UrlFilter__HotSpot Konsole__UrlFilter__HotSpot;
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRegularExpression QRegularExpression;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

Konsole__Filter* Konsole__Filter_new();
void Konsole__Filter_Process(Konsole__Filter* self);
void Konsole__Filter_Reset(Konsole__Filter* self);
Konsole__Filter__HotSpot* Konsole__Filter_HotSpotAt(const Konsole__Filter* self, int line, int column);
void Konsole__Filter_OnProcess(Konsole__Filter* self, intptr_t slot);
void Konsole__Filter_QBaseProcess(Konsole__Filter* self);
int Konsole__Filter_Metacall(Konsole__Filter* self, int param1, int param2, void** param3);
void Konsole__Filter_OnMetacall(Konsole__Filter* self, intptr_t slot);
int Konsole__Filter_QBaseMetacall(Konsole__Filter* self, int param1, int param2, void** param3);
bool Konsole__Filter_Event(Konsole__Filter* self, QEvent* event);
void Konsole__Filter_OnEvent(Konsole__Filter* self, intptr_t slot);
bool Konsole__Filter_QBaseEvent(Konsole__Filter* self, QEvent* event);
bool Konsole__Filter_EventFilter(Konsole__Filter* self, QObject* watched, QEvent* event);
void Konsole__Filter_OnEventFilter(Konsole__Filter* self, intptr_t slot);
bool Konsole__Filter_QBaseEventFilter(Konsole__Filter* self, QObject* watched, QEvent* event);
void Konsole__Filter_TimerEvent(Konsole__Filter* self, QTimerEvent* event);
void Konsole__Filter_OnTimerEvent(Konsole__Filter* self, intptr_t slot);
void Konsole__Filter_QBaseTimerEvent(Konsole__Filter* self, QTimerEvent* event);
void Konsole__Filter_ChildEvent(Konsole__Filter* self, QChildEvent* event);
void Konsole__Filter_OnChildEvent(Konsole__Filter* self, intptr_t slot);
void Konsole__Filter_QBaseChildEvent(Konsole__Filter* self, QChildEvent* event);
void Konsole__Filter_CustomEvent(Konsole__Filter* self, QEvent* event);
void Konsole__Filter_OnCustomEvent(Konsole__Filter* self, intptr_t slot);
void Konsole__Filter_QBaseCustomEvent(Konsole__Filter* self, QEvent* event);
void Konsole__Filter_ConnectNotify(Konsole__Filter* self, const QMetaMethod* signal);
void Konsole__Filter_OnConnectNotify(Konsole__Filter* self, intptr_t slot);
void Konsole__Filter_QBaseConnectNotify(Konsole__Filter* self, const QMetaMethod* signal);
void Konsole__Filter_DisconnectNotify(Konsole__Filter* self, const QMetaMethod* signal);
void Konsole__Filter_OnDisconnectNotify(Konsole__Filter* self, intptr_t slot);
void Konsole__Filter_QBaseDisconnectNotify(Konsole__Filter* self, const QMetaMethod* signal);
void Konsole__Filter_AddHotSpot(Konsole__Filter* self, Konsole__Filter__HotSpot* param1);
void Konsole__Filter_OnAddHotSpot(Konsole__Filter* self, intptr_t slot);
void Konsole__Filter_QBaseAddHotSpot(Konsole__Filter* self, Konsole__Filter__HotSpot* param1);
libqt_string Konsole__Filter_Buffer(Konsole__Filter* self);
void Konsole__Filter_OnBuffer(Konsole__Filter* self, intptr_t slot);
libqt_string Konsole__Filter_QBaseBuffer(Konsole__Filter* self);
void Konsole__Filter_GetLineColumn(Konsole__Filter* self, int position, int* startLine, int* startColumn);
void Konsole__Filter_OnGetLineColumn(Konsole__Filter* self, intptr_t slot);
void Konsole__Filter_QBaseGetLineColumn(Konsole__Filter* self, int position, int* startLine, int* startColumn);
QObject* Konsole__Filter_Sender(const Konsole__Filter* self);
void Konsole__Filter_OnSender(const Konsole__Filter* self, intptr_t slot);
QObject* Konsole__Filter_QBaseSender(const Konsole__Filter* self);
int Konsole__Filter_SenderSignalIndex(const Konsole__Filter* self);
void Konsole__Filter_OnSenderSignalIndex(const Konsole__Filter* self, intptr_t slot);
int Konsole__Filter_QBaseSenderSignalIndex(const Konsole__Filter* self);
int Konsole__Filter_Receivers(const Konsole__Filter* self, const char* signal);
void Konsole__Filter_OnReceivers(const Konsole__Filter* self, intptr_t slot);
int Konsole__Filter_QBaseReceivers(const Konsole__Filter* self, const char* signal);
bool Konsole__Filter_IsSignalConnected(const Konsole__Filter* self, const QMetaMethod* signal);
void Konsole__Filter_OnIsSignalConnected(const Konsole__Filter* self, intptr_t slot);
bool Konsole__Filter_QBaseIsSignalConnected(const Konsole__Filter* self, const QMetaMethod* signal);
void Konsole__Filter_Delete(Konsole__Filter* self);

Konsole__RegExpFilter* Konsole__RegExpFilter_new();
void Konsole__RegExpFilter_SetRegExp(Konsole__RegExpFilter* self, const QRegularExpression* text);
QRegularExpression* Konsole__RegExpFilter_RegExp(const Konsole__RegExpFilter* self);
void Konsole__RegExpFilter_Process(Konsole__RegExpFilter* self);
Konsole__RegExpFilter__HotSpot* Konsole__RegExpFilter_NewHotSpot(Konsole__RegExpFilter* self, int startLine, int startColumn, int endLine, int endColumn);
void Konsole__RegExpFilter_OnProcess(Konsole__RegExpFilter* self, intptr_t slot);
void Konsole__RegExpFilter_QBaseProcess(Konsole__RegExpFilter* self);
void Konsole__RegExpFilter_OnNewHotSpot(Konsole__RegExpFilter* self, intptr_t slot);
Konsole__RegExpFilter__HotSpot* Konsole__RegExpFilter_QBaseNewHotSpot(Konsole__RegExpFilter* self, int startLine, int startColumn, int endLine, int endColumn);
int Konsole__RegExpFilter_Metacall(Konsole__RegExpFilter* self, int param1, int param2, void** param3);
void Konsole__RegExpFilter_OnMetacall(Konsole__RegExpFilter* self, intptr_t slot);
int Konsole__RegExpFilter_QBaseMetacall(Konsole__RegExpFilter* self, int param1, int param2, void** param3);
bool Konsole__RegExpFilter_Event(Konsole__RegExpFilter* self, QEvent* event);
void Konsole__RegExpFilter_OnEvent(Konsole__RegExpFilter* self, intptr_t slot);
bool Konsole__RegExpFilter_QBaseEvent(Konsole__RegExpFilter* self, QEvent* event);
bool Konsole__RegExpFilter_EventFilter(Konsole__RegExpFilter* self, QObject* watched, QEvent* event);
void Konsole__RegExpFilter_OnEventFilter(Konsole__RegExpFilter* self, intptr_t slot);
bool Konsole__RegExpFilter_QBaseEventFilter(Konsole__RegExpFilter* self, QObject* watched, QEvent* event);
void Konsole__RegExpFilter_TimerEvent(Konsole__RegExpFilter* self, QTimerEvent* event);
void Konsole__RegExpFilter_OnTimerEvent(Konsole__RegExpFilter* self, intptr_t slot);
void Konsole__RegExpFilter_QBaseTimerEvent(Konsole__RegExpFilter* self, QTimerEvent* event);
void Konsole__RegExpFilter_ChildEvent(Konsole__RegExpFilter* self, QChildEvent* event);
void Konsole__RegExpFilter_OnChildEvent(Konsole__RegExpFilter* self, intptr_t slot);
void Konsole__RegExpFilter_QBaseChildEvent(Konsole__RegExpFilter* self, QChildEvent* event);
void Konsole__RegExpFilter_CustomEvent(Konsole__RegExpFilter* self, QEvent* event);
void Konsole__RegExpFilter_OnCustomEvent(Konsole__RegExpFilter* self, intptr_t slot);
void Konsole__RegExpFilter_QBaseCustomEvent(Konsole__RegExpFilter* self, QEvent* event);
void Konsole__RegExpFilter_ConnectNotify(Konsole__RegExpFilter* self, const QMetaMethod* signal);
void Konsole__RegExpFilter_OnConnectNotify(Konsole__RegExpFilter* self, intptr_t slot);
void Konsole__RegExpFilter_QBaseConnectNotify(Konsole__RegExpFilter* self, const QMetaMethod* signal);
void Konsole__RegExpFilter_DisconnectNotify(Konsole__RegExpFilter* self, const QMetaMethod* signal);
void Konsole__RegExpFilter_OnDisconnectNotify(Konsole__RegExpFilter* self, intptr_t slot);
void Konsole__RegExpFilter_QBaseDisconnectNotify(Konsole__RegExpFilter* self, const QMetaMethod* signal);
void Konsole__RegExpFilter_AddHotSpot(Konsole__RegExpFilter* self, Konsole__Filter__HotSpot* param1);
void Konsole__RegExpFilter_OnAddHotSpot(Konsole__RegExpFilter* self, intptr_t slot);
void Konsole__RegExpFilter_QBaseAddHotSpot(Konsole__RegExpFilter* self, Konsole__Filter__HotSpot* param1);
libqt_string Konsole__RegExpFilter_Buffer(Konsole__RegExpFilter* self);
void Konsole__RegExpFilter_OnBuffer(Konsole__RegExpFilter* self, intptr_t slot);
libqt_string Konsole__RegExpFilter_QBaseBuffer(Konsole__RegExpFilter* self);
void Konsole__RegExpFilter_GetLineColumn(Konsole__RegExpFilter* self, int position, int* startLine, int* startColumn);
void Konsole__RegExpFilter_OnGetLineColumn(Konsole__RegExpFilter* self, intptr_t slot);
void Konsole__RegExpFilter_QBaseGetLineColumn(Konsole__RegExpFilter* self, int position, int* startLine, int* startColumn);
QObject* Konsole__RegExpFilter_Sender(const Konsole__RegExpFilter* self);
void Konsole__RegExpFilter_OnSender(const Konsole__RegExpFilter* self, intptr_t slot);
QObject* Konsole__RegExpFilter_QBaseSender(const Konsole__RegExpFilter* self);
int Konsole__RegExpFilter_SenderSignalIndex(const Konsole__RegExpFilter* self);
void Konsole__RegExpFilter_OnSenderSignalIndex(const Konsole__RegExpFilter* self, intptr_t slot);
int Konsole__RegExpFilter_QBaseSenderSignalIndex(const Konsole__RegExpFilter* self);
int Konsole__RegExpFilter_Receivers(const Konsole__RegExpFilter* self, const char* signal);
void Konsole__RegExpFilter_OnReceivers(const Konsole__RegExpFilter* self, intptr_t slot);
int Konsole__RegExpFilter_QBaseReceivers(const Konsole__RegExpFilter* self, const char* signal);
bool Konsole__RegExpFilter_IsSignalConnected(const Konsole__RegExpFilter* self, const QMetaMethod* signal);
void Konsole__RegExpFilter_OnIsSignalConnected(const Konsole__RegExpFilter* self, intptr_t slot);
bool Konsole__RegExpFilter_QBaseIsSignalConnected(const Konsole__RegExpFilter* self, const QMetaMethod* signal);
void Konsole__RegExpFilter_Delete(Konsole__RegExpFilter* self);

Konsole__UrlFilter* Konsole__UrlFilter_new();
QMetaObject* Konsole__UrlFilter_MetaObject(const Konsole__UrlFilter* self);
void* Konsole__UrlFilter_Metacast(Konsole__UrlFilter* self, const char* param1);
int Konsole__UrlFilter_Metacall(Konsole__UrlFilter* self, int param1, int param2, void** param3);
libqt_string Konsole__UrlFilter_Tr(const char* s);
Konsole__RegExpFilter__HotSpot* Konsole__UrlFilter_NewHotSpot(Konsole__UrlFilter* self, int param1, int param2, int param3, int param4);
void Konsole__UrlFilter_Activated(Konsole__UrlFilter* self, const QUrl* url, bool fromContextMenu);
void Konsole__UrlFilter_Connect_Activated(Konsole__UrlFilter* self, intptr_t slot);
libqt_string Konsole__UrlFilter_Tr2(const char* s, const char* c);
libqt_string Konsole__UrlFilter_Tr3(const char* s, const char* c, int n);
void Konsole__UrlFilter_OnMetacall(Konsole__UrlFilter* self, intptr_t slot);
int Konsole__UrlFilter_QBaseMetacall(Konsole__UrlFilter* self, int param1, int param2, void** param3);
void Konsole__UrlFilter_OnNewHotSpot(Konsole__UrlFilter* self, intptr_t slot);
Konsole__RegExpFilter__HotSpot* Konsole__UrlFilter_QBaseNewHotSpot(Konsole__UrlFilter* self, int param1, int param2, int param3, int param4);
void Konsole__UrlFilter_Process(Konsole__UrlFilter* self);
void Konsole__UrlFilter_OnProcess(Konsole__UrlFilter* self, intptr_t slot);
void Konsole__UrlFilter_QBaseProcess(Konsole__UrlFilter* self);
bool Konsole__UrlFilter_Event(Konsole__UrlFilter* self, QEvent* event);
void Konsole__UrlFilter_OnEvent(Konsole__UrlFilter* self, intptr_t slot);
bool Konsole__UrlFilter_QBaseEvent(Konsole__UrlFilter* self, QEvent* event);
bool Konsole__UrlFilter_EventFilter(Konsole__UrlFilter* self, QObject* watched, QEvent* event);
void Konsole__UrlFilter_OnEventFilter(Konsole__UrlFilter* self, intptr_t slot);
bool Konsole__UrlFilter_QBaseEventFilter(Konsole__UrlFilter* self, QObject* watched, QEvent* event);
void Konsole__UrlFilter_TimerEvent(Konsole__UrlFilter* self, QTimerEvent* event);
void Konsole__UrlFilter_OnTimerEvent(Konsole__UrlFilter* self, intptr_t slot);
void Konsole__UrlFilter_QBaseTimerEvent(Konsole__UrlFilter* self, QTimerEvent* event);
void Konsole__UrlFilter_ChildEvent(Konsole__UrlFilter* self, QChildEvent* event);
void Konsole__UrlFilter_OnChildEvent(Konsole__UrlFilter* self, intptr_t slot);
void Konsole__UrlFilter_QBaseChildEvent(Konsole__UrlFilter* self, QChildEvent* event);
void Konsole__UrlFilter_CustomEvent(Konsole__UrlFilter* self, QEvent* event);
void Konsole__UrlFilter_OnCustomEvent(Konsole__UrlFilter* self, intptr_t slot);
void Konsole__UrlFilter_QBaseCustomEvent(Konsole__UrlFilter* self, QEvent* event);
void Konsole__UrlFilter_ConnectNotify(Konsole__UrlFilter* self, const QMetaMethod* signal);
void Konsole__UrlFilter_OnConnectNotify(Konsole__UrlFilter* self, intptr_t slot);
void Konsole__UrlFilter_QBaseConnectNotify(Konsole__UrlFilter* self, const QMetaMethod* signal);
void Konsole__UrlFilter_DisconnectNotify(Konsole__UrlFilter* self, const QMetaMethod* signal);
void Konsole__UrlFilter_OnDisconnectNotify(Konsole__UrlFilter* self, intptr_t slot);
void Konsole__UrlFilter_QBaseDisconnectNotify(Konsole__UrlFilter* self, const QMetaMethod* signal);
void Konsole__UrlFilter_AddHotSpot(Konsole__UrlFilter* self, Konsole__Filter__HotSpot* param1);
void Konsole__UrlFilter_OnAddHotSpot(Konsole__UrlFilter* self, intptr_t slot);
void Konsole__UrlFilter_QBaseAddHotSpot(Konsole__UrlFilter* self, Konsole__Filter__HotSpot* param1);
libqt_string Konsole__UrlFilter_Buffer(Konsole__UrlFilter* self);
void Konsole__UrlFilter_OnBuffer(Konsole__UrlFilter* self, intptr_t slot);
libqt_string Konsole__UrlFilter_QBaseBuffer(Konsole__UrlFilter* self);
void Konsole__UrlFilter_GetLineColumn(Konsole__UrlFilter* self, int position, int* startLine, int* startColumn);
void Konsole__UrlFilter_OnGetLineColumn(Konsole__UrlFilter* self, intptr_t slot);
void Konsole__UrlFilter_QBaseGetLineColumn(Konsole__UrlFilter* self, int position, int* startLine, int* startColumn);
QObject* Konsole__UrlFilter_Sender(const Konsole__UrlFilter* self);
void Konsole__UrlFilter_OnSender(const Konsole__UrlFilter* self, intptr_t slot);
QObject* Konsole__UrlFilter_QBaseSender(const Konsole__UrlFilter* self);
int Konsole__UrlFilter_SenderSignalIndex(const Konsole__UrlFilter* self);
void Konsole__UrlFilter_OnSenderSignalIndex(const Konsole__UrlFilter* self, intptr_t slot);
int Konsole__UrlFilter_QBaseSenderSignalIndex(const Konsole__UrlFilter* self);
int Konsole__UrlFilter_Receivers(const Konsole__UrlFilter* self, const char* signal);
void Konsole__UrlFilter_OnReceivers(const Konsole__UrlFilter* self, intptr_t slot);
int Konsole__UrlFilter_QBaseReceivers(const Konsole__UrlFilter* self, const char* signal);
bool Konsole__UrlFilter_IsSignalConnected(const Konsole__UrlFilter* self, const QMetaMethod* signal);
void Konsole__UrlFilter_OnIsSignalConnected(const Konsole__UrlFilter* self, intptr_t slot);
bool Konsole__UrlFilter_QBaseIsSignalConnected(const Konsole__UrlFilter* self, const QMetaMethod* signal);
void Konsole__UrlFilter_Delete(Konsole__UrlFilter* self);

Konsole__FilterObject* Konsole__FilterObject_new(Konsole__Filter__HotSpot* filter);
QMetaObject* Konsole__FilterObject_MetaObject(const Konsole__FilterObject* self);
void* Konsole__FilterObject_Metacast(Konsole__FilterObject* self, const char* param1);
int Konsole__FilterObject_Metacall(Konsole__FilterObject* self, int param1, int param2, void** param3);
libqt_string Konsole__FilterObject_Tr(const char* s);
void Konsole__FilterObject_EmitActivated(Konsole__FilterObject* self, const QUrl* url, bool fromContextMenu);
void Konsole__FilterObject_Activate(Konsole__FilterObject* self);
void Konsole__FilterObject_Activated(Konsole__FilterObject* self, const QUrl* url, bool fromContextMenu);
void Konsole__FilterObject_Connect_Activated(Konsole__FilterObject* self, intptr_t slot);
libqt_string Konsole__FilterObject_Tr2(const char* s, const char* c);
libqt_string Konsole__FilterObject_Tr3(const char* s, const char* c, int n);
void Konsole__FilterObject_OnMetacall(Konsole__FilterObject* self, intptr_t slot);
int Konsole__FilterObject_QBaseMetacall(Konsole__FilterObject* self, int param1, int param2, void** param3);
bool Konsole__FilterObject_Event(Konsole__FilterObject* self, QEvent* event);
void Konsole__FilterObject_OnEvent(Konsole__FilterObject* self, intptr_t slot);
bool Konsole__FilterObject_QBaseEvent(Konsole__FilterObject* self, QEvent* event);
bool Konsole__FilterObject_EventFilter(Konsole__FilterObject* self, QObject* watched, QEvent* event);
void Konsole__FilterObject_OnEventFilter(Konsole__FilterObject* self, intptr_t slot);
bool Konsole__FilterObject_QBaseEventFilter(Konsole__FilterObject* self, QObject* watched, QEvent* event);
void Konsole__FilterObject_TimerEvent(Konsole__FilterObject* self, QTimerEvent* event);
void Konsole__FilterObject_OnTimerEvent(Konsole__FilterObject* self, intptr_t slot);
void Konsole__FilterObject_QBaseTimerEvent(Konsole__FilterObject* self, QTimerEvent* event);
void Konsole__FilterObject_ChildEvent(Konsole__FilterObject* self, QChildEvent* event);
void Konsole__FilterObject_OnChildEvent(Konsole__FilterObject* self, intptr_t slot);
void Konsole__FilterObject_QBaseChildEvent(Konsole__FilterObject* self, QChildEvent* event);
void Konsole__FilterObject_CustomEvent(Konsole__FilterObject* self, QEvent* event);
void Konsole__FilterObject_OnCustomEvent(Konsole__FilterObject* self, intptr_t slot);
void Konsole__FilterObject_QBaseCustomEvent(Konsole__FilterObject* self, QEvent* event);
void Konsole__FilterObject_ConnectNotify(Konsole__FilterObject* self, const QMetaMethod* signal);
void Konsole__FilterObject_OnConnectNotify(Konsole__FilterObject* self, intptr_t slot);
void Konsole__FilterObject_QBaseConnectNotify(Konsole__FilterObject* self, const QMetaMethod* signal);
void Konsole__FilterObject_DisconnectNotify(Konsole__FilterObject* self, const QMetaMethod* signal);
void Konsole__FilterObject_OnDisconnectNotify(Konsole__FilterObject* self, intptr_t slot);
void Konsole__FilterObject_QBaseDisconnectNotify(Konsole__FilterObject* self, const QMetaMethod* signal);
QObject* Konsole__FilterObject_Sender(const Konsole__FilterObject* self);
void Konsole__FilterObject_OnSender(const Konsole__FilterObject* self, intptr_t slot);
QObject* Konsole__FilterObject_QBaseSender(const Konsole__FilterObject* self);
int Konsole__FilterObject_SenderSignalIndex(const Konsole__FilterObject* self);
void Konsole__FilterObject_OnSenderSignalIndex(const Konsole__FilterObject* self, intptr_t slot);
int Konsole__FilterObject_QBaseSenderSignalIndex(const Konsole__FilterObject* self);
int Konsole__FilterObject_Receivers(const Konsole__FilterObject* self, const char* signal);
void Konsole__FilterObject_OnReceivers(const Konsole__FilterObject* self, intptr_t slot);
int Konsole__FilterObject_QBaseReceivers(const Konsole__FilterObject* self, const char* signal);
bool Konsole__FilterObject_IsSignalConnected(const Konsole__FilterObject* self, const QMetaMethod* signal);
void Konsole__FilterObject_OnIsSignalConnected(const Konsole__FilterObject* self, intptr_t slot);
bool Konsole__FilterObject_QBaseIsSignalConnected(const Konsole__FilterObject* self, const QMetaMethod* signal);
void Konsole__FilterObject_Delete(Konsole__FilterObject* self);

Konsole__FilterChain* Konsole__FilterChain_new(const Konsole__FilterChain* param1);
void Konsole__FilterChain_AddFilter(Konsole__FilterChain* self, Konsole__Filter* filter);
void Konsole__FilterChain_RemoveFilter(Konsole__FilterChain* self, Konsole__Filter* filter);
bool Konsole__FilterChain_ContainsFilter(Konsole__FilterChain* self, Konsole__Filter* filter);
void Konsole__FilterChain_Clear(Konsole__FilterChain* self);
void Konsole__FilterChain_Reset(Konsole__FilterChain* self);
void Konsole__FilterChain_Process(Konsole__FilterChain* self);
Konsole__Filter__HotSpot* Konsole__FilterChain_HotSpotAt(const Konsole__FilterChain* self, int line, int column);
libqt_list /* of Konsole__Filter__HotSpot* */ Konsole__FilterChain_HotSpots(const Konsole__FilterChain* self);
void Konsole__FilterChain_OperatorAssign(Konsole__FilterChain* self, const Konsole__FilterChain* param1);
void Konsole__FilterChain_Delete(Konsole__FilterChain* self);

Konsole__TerminalImageFilterChain* Konsole__TerminalImageFilterChain_new();
Konsole__TerminalImageFilterChain* Konsole__TerminalImageFilterChain_new2(const Konsole__TerminalImageFilterChain* param1);
void Konsole__TerminalImageFilterChain_Delete(Konsole__TerminalImageFilterChain* self);

Konsole__Filter__HotSpot* Konsole__Filter__HotSpot_new(int startLine, int startColumn, int endLine, int endColumn);
Konsole__Filter__HotSpot* Konsole__Filter__HotSpot_new2(const Konsole__Filter__HotSpot* param1);
int Konsole__Filter__HotSpot_StartLine(const Konsole__Filter__HotSpot* self);
int Konsole__Filter__HotSpot_EndLine(const Konsole__Filter__HotSpot* self);
int Konsole__Filter__HotSpot_StartColumn(const Konsole__Filter__HotSpot* self);
int Konsole__Filter__HotSpot_EndColumn(const Konsole__Filter__HotSpot* self);
int Konsole__Filter__HotSpot_Type(const Konsole__Filter__HotSpot* self);
void Konsole__Filter__HotSpot_Activate(Konsole__Filter__HotSpot* self, const libqt_string action);
libqt_list /* of QAction* */ Konsole__Filter__HotSpot_Actions(Konsole__Filter__HotSpot* self);
void Konsole__Filter__HotSpot_OnActivate(Konsole__Filter__HotSpot* self, intptr_t slot);
void Konsole__Filter__HotSpot_QBaseActivate(Konsole__Filter__HotSpot* self, const libqt_string action);
void Konsole__Filter__HotSpot_OnActions(Konsole__Filter__HotSpot* self, intptr_t slot);
libqt_list /* of QAction* */ Konsole__Filter__HotSpot_QBaseActions(Konsole__Filter__HotSpot* self);
void Konsole__Filter__HotSpot_SetType(Konsole__Filter__HotSpot* self, int typeVal);
void Konsole__Filter__HotSpot_OnSetType(Konsole__Filter__HotSpot* self, intptr_t slot);
void Konsole__Filter__HotSpot_QBaseSetType(Konsole__Filter__HotSpot* self, int typeVal);
void Konsole__Filter__HotSpot_Delete(Konsole__Filter__HotSpot* self);

Konsole__RegExpFilter__HotSpot* Konsole__RegExpFilter__HotSpot_new(int startLine, int startColumn, int endLine, int endColumn);
Konsole__RegExpFilter__HotSpot* Konsole__RegExpFilter__HotSpot_new2(const Konsole__RegExpFilter__HotSpot* param1);
void Konsole__RegExpFilter__HotSpot_Activate(Konsole__RegExpFilter__HotSpot* self, const libqt_string action);
void Konsole__RegExpFilter__HotSpot_SetCapturedTexts(Konsole__RegExpFilter__HotSpot* self, const libqt_list /* of libqt_string */ texts);
libqt_list /* of libqt_string */ Konsole__RegExpFilter__HotSpot_CapturedTexts(const Konsole__RegExpFilter__HotSpot* self);
void Konsole__RegExpFilter__HotSpot_OnActivate(Konsole__RegExpFilter__HotSpot* self, intptr_t slot);
void Konsole__RegExpFilter__HotSpot_QBaseActivate(Konsole__RegExpFilter__HotSpot* self, const libqt_string action);
libqt_list /* of QAction* */ Konsole__RegExpFilter__HotSpot_Actions(Konsole__RegExpFilter__HotSpot* self);
void Konsole__RegExpFilter__HotSpot_OnActions(Konsole__RegExpFilter__HotSpot* self, intptr_t slot);
libqt_list /* of QAction* */ Konsole__RegExpFilter__HotSpot_QBaseActions(Konsole__RegExpFilter__HotSpot* self);
void Konsole__RegExpFilter__HotSpot_SetType(Konsole__RegExpFilter__HotSpot* self, int typeVal);
void Konsole__RegExpFilter__HotSpot_OnSetType(Konsole__RegExpFilter__HotSpot* self, intptr_t slot);
void Konsole__RegExpFilter__HotSpot_QBaseSetType(Konsole__RegExpFilter__HotSpot* self, int typeVal);
void Konsole__RegExpFilter__HotSpot_Delete(Konsole__RegExpFilter__HotSpot* self);

Konsole__UrlFilter__HotSpot* Konsole__UrlFilter__HotSpot_new(int startLine, int startColumn, int endLine, int endColumn);
Konsole__FilterObject* Konsole__UrlFilter__HotSpot_GetUrlObject(const Konsole__UrlFilter__HotSpot* self);
libqt_list /* of QAction* */ Konsole__UrlFilter__HotSpot_Actions(Konsole__UrlFilter__HotSpot* self);
void Konsole__UrlFilter__HotSpot_Activate(Konsole__UrlFilter__HotSpot* self, const libqt_string action);
void Konsole__UrlFilter__HotSpot_OnActions(Konsole__UrlFilter__HotSpot* self, intptr_t slot);
libqt_list /* of QAction* */ Konsole__UrlFilter__HotSpot_QBaseActions(Konsole__UrlFilter__HotSpot* self);
void Konsole__UrlFilter__HotSpot_OnActivate(Konsole__UrlFilter__HotSpot* self, intptr_t slot);
void Konsole__UrlFilter__HotSpot_QBaseActivate(Konsole__UrlFilter__HotSpot* self, const libqt_string action);
void Konsole__UrlFilter__HotSpot_SetType(Konsole__UrlFilter__HotSpot* self, int typeVal);
void Konsole__UrlFilter__HotSpot_OnSetType(Konsole__UrlFilter__HotSpot* self, intptr_t slot);
void Konsole__UrlFilter__HotSpot_QBaseSetType(Konsole__UrlFilter__HotSpot* self, int typeVal);
void Konsole__UrlFilter__HotSpot_Delete(Konsole__UrlFilter__HotSpot* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
