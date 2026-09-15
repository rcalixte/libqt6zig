#pragma once
#ifndef QML_LIBQQMLDEBUG_H
#define QML_LIBQQMLDEBUG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QQmlDebuggingEnabler QQmlDebuggingEnabler;
typedef struct QVariant QVariant;
#endif

QQmlDebuggingEnabler* QQmlDebuggingEnabler_new(const QQmlDebuggingEnabler* other);
QQmlDebuggingEnabler* QQmlDebuggingEnabler_new2(QQmlDebuggingEnabler* other);
QQmlDebuggingEnabler* QQmlDebuggingEnabler_new3();
QQmlDebuggingEnabler* QQmlDebuggingEnabler_new4(bool printWarning);
void QQmlDebuggingEnabler_CopyAssign(QQmlDebuggingEnabler* self, QQmlDebuggingEnabler* other);
void QQmlDebuggingEnabler_MoveAssign(QQmlDebuggingEnabler* self, QQmlDebuggingEnabler* other);
void QQmlDebuggingEnabler_EnableDebugging(bool printWarning);
libqt_list /* of libqt_string */ QQmlDebuggingEnabler_DebuggerServices();
libqt_list /* of libqt_string */ QQmlDebuggingEnabler_InspectorServices();
libqt_list /* of libqt_string */ QQmlDebuggingEnabler_ProfilerServices();
libqt_list /* of libqt_string */ QQmlDebuggingEnabler_NativeDebuggerServices();
void QQmlDebuggingEnabler_SetServices(const libqt_list /* of libqt_string */ services);
bool QQmlDebuggingEnabler_StartTcpDebugServer(int port);
bool QQmlDebuggingEnabler_ConnectToLocalDebugger(const libqt_string socketFileName);
bool QQmlDebuggingEnabler_StartDebugConnector(const libqt_string pluginName);
bool QQmlDebuggingEnabler_StartTcpDebugServer2(int port, int mode);
bool QQmlDebuggingEnabler_StartTcpDebugServer3(int port, int mode, const libqt_string hostName);
bool QQmlDebuggingEnabler_ConnectToLocalDebugger2(const libqt_string socketFileName, int mode);
bool QQmlDebuggingEnabler_StartDebugConnector2(const libqt_string pluginName, const libqt_map /* of libqt_string to QVariant* */ configuration);
void QQmlDebuggingEnabler_Delete(QQmlDebuggingEnabler* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
