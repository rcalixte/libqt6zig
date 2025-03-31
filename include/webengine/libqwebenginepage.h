#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINEPAGE_H
#define SRC_WEBENGINEC_LIBQWEBENGINEPAGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAction QAction;
typedef struct QAnyStringView QAnyStringView;
typedef struct QAuthenticator QAuthenticator;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QIcon QIcon;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QPageLayout QPageLayout;
typedef struct QPageRanges QPageRanges;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QSizeF QSizeF;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWebChannel QWebChannel;
typedef struct QWebEngineCertificateError QWebEngineCertificateError;
typedef struct QWebEngineClientCertificateSelection QWebEngineClientCertificateSelection;
typedef struct QWebEngineFileSystemAccessRequest QWebEngineFileSystemAccessRequest;
typedef struct QWebEngineFindTextResult QWebEngineFindTextResult;
typedef struct QWebEngineFullScreenRequest QWebEngineFullScreenRequest;
typedef struct QWebEngineHistory QWebEngineHistory;
typedef struct QWebEngineHttpRequest QWebEngineHttpRequest;
typedef struct QWebEngineLoadingInfo QWebEngineLoadingInfo;
typedef struct QWebEngineNavigationRequest QWebEngineNavigationRequest;
typedef struct QWebEngineNewWindowRequest QWebEngineNewWindowRequest;
typedef struct QWebEnginePage QWebEnginePage;
typedef struct QWebEngineProfile QWebEngineProfile;
typedef struct QWebEngineQuotaRequest QWebEngineQuotaRequest;
typedef struct QWebEngineRegisterProtocolHandlerRequest QWebEngineRegisterProtocolHandlerRequest;
typedef struct QWebEngineScriptCollection QWebEngineScriptCollection;
typedef struct QWebEngineSettings QWebEngineSettings;
typedef struct QWebEngineUrlRequestInterceptor QWebEngineUrlRequestInterceptor;
#endif

#ifdef __cplusplus
typedef QWebEnginePage::Feature Feature;                                               // C++ enum
typedef QWebEnginePage::FileSelectionMode FileSelectionMode;                           // C++ enum
typedef QWebEnginePage::FindFlag FindFlag;                                             // C++ enum
typedef QWebEnginePage::FindFlags FindFlags;                                           // C++ QFlags
typedef QWebEnginePage::JavaScriptConsoleMessageLevel JavaScriptConsoleMessageLevel;   // C++ enum
typedef QWebEnginePage::LifecycleState LifecycleState;                                 // C++ enum
typedef QWebEnginePage::NavigationType NavigationType;                                 // C++ enum
typedef QWebEnginePage::PermissionPolicy PermissionPolicy;                             // C++ enum
typedef QWebEnginePage::RenderProcessTerminationStatus RenderProcessTerminationStatus; // C++ enum
typedef QWebEnginePage::WebAction WebAction;                                           // C++ enum
typedef QWebEnginePage::WebWindowType WebWindowType;                                   // C++ enum
#else
typedef int Feature;                        // C ABI enum
typedef int FileSelectionMode;              // C ABI enum
typedef int FindFlag;                       // C ABI enum
typedef int FindFlags;                      // C ABI QFlags
typedef int JavaScriptConsoleMessageLevel;  // C ABI enum
typedef int LifecycleState;                 // C ABI enum
typedef int NavigationType;                 // C ABI enum
typedef int PermissionPolicy;               // C ABI enum
typedef int RenderProcessTerminationStatus; // C ABI enum
typedef int WebAction;                      // C ABI enum
typedef int WebWindowType;                  // C ABI enum
#endif

QWebEnginePage* QWebEnginePage_new();
QWebEnginePage* QWebEnginePage_new2(QWebEngineProfile* profile);
QWebEnginePage* QWebEnginePage_new3(QObject* parent);
QWebEnginePage* QWebEnginePage_new4(QWebEngineProfile* profile, QObject* parent);
QMetaObject* QWebEnginePage_MetaObject(const QWebEnginePage* self);
void* QWebEnginePage_Metacast(QWebEnginePage* self, const char* param1);
int QWebEnginePage_Metacall(QWebEnginePage* self, int param1, int param2, void** param3);
void QWebEnginePage_OnMetacall(QWebEnginePage* self, intptr_t slot);
int QWebEnginePage_QBaseMetacall(QWebEnginePage* self, int param1, int param2, void** param3);
libqt_string QWebEnginePage_Tr(const char* s);
QWebEngineHistory* QWebEnginePage_History(const QWebEnginePage* self);
bool QWebEnginePage_HasSelection(const QWebEnginePage* self);
libqt_string QWebEnginePage_SelectedText(const QWebEnginePage* self);
QWebEngineProfile* QWebEnginePage_Profile(const QWebEnginePage* self);
QAction* QWebEnginePage_Action(const QWebEnginePage* self, int action);
void QWebEnginePage_TriggerAction(QWebEnginePage* self, int action, bool checked);
void QWebEnginePage_OnTriggerAction(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_QBaseTriggerAction(QWebEnginePage* self, int action, bool checked);
void QWebEnginePage_ReplaceMisspelledWord(QWebEnginePage* self, libqt_string replacement);
bool QWebEnginePage_Event(QWebEnginePage* self, QEvent* param1);
void QWebEnginePage_OnEvent(QWebEnginePage* self, intptr_t slot);
bool QWebEnginePage_QBaseEvent(QWebEnginePage* self, QEvent* param1);
void QWebEnginePage_SetFeaturePermission(QWebEnginePage* self, QUrl* securityOrigin, int feature, int policy);
bool QWebEnginePage_IsLoading(const QWebEnginePage* self);
void QWebEnginePage_Load(QWebEnginePage* self, QUrl* url);
void QWebEnginePage_LoadWithRequest(QWebEnginePage* self, QWebEngineHttpRequest* request);
void QWebEnginePage_Download(QWebEnginePage* self, QUrl* url);
void QWebEnginePage_SetHtml(QWebEnginePage* self, libqt_string html);
void QWebEnginePage_SetContent(QWebEnginePage* self, libqt_string data);
libqt_string QWebEnginePage_Title(const QWebEnginePage* self);
void QWebEnginePage_SetUrl(QWebEnginePage* self, QUrl* url);
QUrl* QWebEnginePage_Url(const QWebEnginePage* self);
QUrl* QWebEnginePage_RequestedUrl(const QWebEnginePage* self);
QUrl* QWebEnginePage_IconUrl(const QWebEnginePage* self);
QIcon* QWebEnginePage_Icon(const QWebEnginePage* self);
double QWebEnginePage_ZoomFactor(const QWebEnginePage* self);
void QWebEnginePage_SetZoomFactor(QWebEnginePage* self, double factor);
QPointF* QWebEnginePage_ScrollPosition(const QWebEnginePage* self);
QSizeF* QWebEnginePage_ContentsSize(const QWebEnginePage* self);
QWebEngineScriptCollection* QWebEnginePage_Scripts(QWebEnginePage* self);
QWebEngineSettings* QWebEnginePage_Settings(const QWebEnginePage* self);
QWebChannel* QWebEnginePage_WebChannel(const QWebEnginePage* self);
void QWebEnginePage_SetWebChannel(QWebEnginePage* self, QWebChannel* param1);
QColor* QWebEnginePage_BackgroundColor(const QWebEnginePage* self);
void QWebEnginePage_SetBackgroundColor(QWebEnginePage* self, QColor* color);
void QWebEnginePage_Save(const QWebEnginePage* self, libqt_string filePath);
bool QWebEnginePage_IsAudioMuted(const QWebEnginePage* self);
void QWebEnginePage_SetAudioMuted(QWebEnginePage* self, bool muted);
bool QWebEnginePage_RecentlyAudible(const QWebEnginePage* self);
long long QWebEnginePage_RenderProcessPid(const QWebEnginePage* self);
void QWebEnginePage_PrintToPdf(QWebEnginePage* self, libqt_string filePath);
void QWebEnginePage_SetInspectedPage(QWebEnginePage* self, QWebEnginePage* page);
QWebEnginePage* QWebEnginePage_InspectedPage(const QWebEnginePage* self);
void QWebEnginePage_SetDevToolsPage(QWebEnginePage* self, QWebEnginePage* page);
QWebEnginePage* QWebEnginePage_DevToolsPage(const QWebEnginePage* self);
void QWebEnginePage_SetUrlRequestInterceptor(QWebEnginePage* self, QWebEngineUrlRequestInterceptor* interceptor);
int QWebEnginePage_LifecycleState(const QWebEnginePage* self);
void QWebEnginePage_SetLifecycleState(QWebEnginePage* self, int state);
int QWebEnginePage_RecommendedState(const QWebEnginePage* self);
bool QWebEnginePage_IsVisible(const QWebEnginePage* self);
void QWebEnginePage_SetVisible(QWebEnginePage* self, bool visible);
void QWebEnginePage_AcceptAsNewWindow(QWebEnginePage* self, QWebEngineNewWindowRequest* request);
void QWebEnginePage_LoadStarted(QWebEnginePage* self);
void QWebEnginePage_Connect_LoadStarted(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_LoadProgress(QWebEnginePage* self, int progress);
void QWebEnginePage_Connect_LoadProgress(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_LoadFinished(QWebEnginePage* self, bool ok);
void QWebEnginePage_Connect_LoadFinished(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_LoadingChanged(QWebEnginePage* self, QWebEngineLoadingInfo* loadingInfo);
void QWebEnginePage_Connect_LoadingChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_LinkHovered(QWebEnginePage* self, libqt_string url);
void QWebEnginePage_Connect_LinkHovered(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_SelectionChanged(QWebEnginePage* self);
void QWebEnginePage_Connect_SelectionChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_GeometryChangeRequested(QWebEnginePage* self, QRect* geom);
void QWebEnginePage_Connect_GeometryChangeRequested(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_WindowCloseRequested(QWebEnginePage* self);
void QWebEnginePage_Connect_WindowCloseRequested(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_FeaturePermissionRequested(QWebEnginePage* self, QUrl* securityOrigin, int feature);
void QWebEnginePage_Connect_FeaturePermissionRequested(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_FeaturePermissionRequestCanceled(QWebEnginePage* self, QUrl* securityOrigin, int feature);
void QWebEnginePage_Connect_FeaturePermissionRequestCanceled(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_FullScreenRequested(QWebEnginePage* self, QWebEngineFullScreenRequest* fullScreenRequest);
void QWebEnginePage_Connect_FullScreenRequested(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_QuotaRequested(QWebEnginePage* self, QWebEngineQuotaRequest* quotaRequest);
void QWebEnginePage_Connect_QuotaRequested(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_RegisterProtocolHandlerRequested(QWebEnginePage* self, QWebEngineRegisterProtocolHandlerRequest* request);
void QWebEnginePage_Connect_RegisterProtocolHandlerRequested(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_FileSystemAccessRequested(QWebEnginePage* self, QWebEngineFileSystemAccessRequest* request);
void QWebEnginePage_Connect_FileSystemAccessRequested(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_SelectClientCertificate(QWebEnginePage* self, QWebEngineClientCertificateSelection* clientCertSelection);
void QWebEnginePage_Connect_SelectClientCertificate(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_AuthenticationRequired(QWebEnginePage* self, QUrl* requestUrl, QAuthenticator* authenticator);
void QWebEnginePage_Connect_AuthenticationRequired(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_ProxyAuthenticationRequired(QWebEnginePage* self, QUrl* requestUrl, QAuthenticator* authenticator, libqt_string proxyHost);
void QWebEnginePage_Connect_ProxyAuthenticationRequired(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_RenderProcessTerminated(QWebEnginePage* self, int terminationStatus, int exitCode);
void QWebEnginePage_Connect_RenderProcessTerminated(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_CertificateError(QWebEnginePage* self, QWebEngineCertificateError* certificateError);
void QWebEnginePage_Connect_CertificateError(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_NavigationRequested(QWebEnginePage* self, QWebEngineNavigationRequest* request);
void QWebEnginePage_Connect_NavigationRequested(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_NewWindowRequested(QWebEnginePage* self, QWebEngineNewWindowRequest* request);
void QWebEnginePage_Connect_NewWindowRequested(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_TitleChanged(QWebEnginePage* self, libqt_string title);
void QWebEnginePage_Connect_TitleChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_UrlChanged(QWebEnginePage* self, QUrl* url);
void QWebEnginePage_Connect_UrlChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_IconUrlChanged(QWebEnginePage* self, QUrl* url);
void QWebEnginePage_Connect_IconUrlChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_IconChanged(QWebEnginePage* self, QIcon* icon);
void QWebEnginePage_Connect_IconChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_ScrollPositionChanged(QWebEnginePage* self, QPointF* position);
void QWebEnginePage_Connect_ScrollPositionChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_ContentsSizeChanged(QWebEnginePage* self, QSizeF* size);
void QWebEnginePage_Connect_ContentsSizeChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_AudioMutedChanged(QWebEnginePage* self, bool muted);
void QWebEnginePage_Connect_AudioMutedChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_RecentlyAudibleChanged(QWebEnginePage* self, bool recentlyAudible);
void QWebEnginePage_Connect_RecentlyAudibleChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_RenderProcessPidChanged(QWebEnginePage* self, long long pid);
void QWebEnginePage_Connect_RenderProcessPidChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_PdfPrintingFinished(QWebEnginePage* self, libqt_string filePath, bool success);
void QWebEnginePage_Connect_PdfPrintingFinished(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_PrintRequested(QWebEnginePage* self);
void QWebEnginePage_Connect_PrintRequested(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_VisibleChanged(QWebEnginePage* self, bool visible);
void QWebEnginePage_Connect_VisibleChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_LifecycleStateChanged(QWebEnginePage* self, int state);
void QWebEnginePage_Connect_LifecycleStateChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_RecommendedStateChanged(QWebEnginePage* self, int state);
void QWebEnginePage_Connect_RecommendedStateChanged(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_FindTextFinished(QWebEnginePage* self, QWebEngineFindTextResult* result);
void QWebEnginePage_Connect_FindTextFinished(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_QAboutToDelete(QWebEnginePage* self);
void QWebEnginePage_Connect_QAboutToDelete(QWebEnginePage* self, intptr_t slot);
QWebEnginePage* QWebEnginePage_CreateWindow(QWebEnginePage* self, int typeVal);
void QWebEnginePage_OnCreateWindow(QWebEnginePage* self, intptr_t slot);
QWebEnginePage* QWebEnginePage_QBaseCreateWindow(QWebEnginePage* self, int typeVal);
libqt_list /* of libqt_string */ QWebEnginePage_ChooseFiles(QWebEnginePage* self, int mode, libqt_list /* of libqt_string */ oldFiles, libqt_list /* of libqt_string */ acceptedMimeTypes);
void QWebEnginePage_OnChooseFiles(QWebEnginePage* self, intptr_t slot);
libqt_list /* of libqt_string */ QWebEnginePage_QBaseChooseFiles(QWebEnginePage* self, int mode, libqt_list /* of libqt_string */ oldFiles, libqt_list /* of libqt_string */ acceptedMimeTypes);
void QWebEnginePage_JavaScriptAlert(QWebEnginePage* self, QUrl* securityOrigin, libqt_string msg);
void QWebEnginePage_OnJavaScriptAlert(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_QBaseJavaScriptAlert(QWebEnginePage* self, QUrl* securityOrigin, libqt_string msg);
bool QWebEnginePage_JavaScriptConfirm(QWebEnginePage* self, QUrl* securityOrigin, libqt_string msg);
void QWebEnginePage_OnJavaScriptConfirm(QWebEnginePage* self, intptr_t slot);
bool QWebEnginePage_QBaseJavaScriptConfirm(QWebEnginePage* self, QUrl* securityOrigin, libqt_string msg);
void QWebEnginePage_JavaScriptConsoleMessage(QWebEnginePage* self, int level, libqt_string message, int lineNumber, libqt_string sourceID);
void QWebEnginePage_OnJavaScriptConsoleMessage(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_QBaseJavaScriptConsoleMessage(QWebEnginePage* self, int level, libqt_string message, int lineNumber, libqt_string sourceID);
bool QWebEnginePage_AcceptNavigationRequest(QWebEnginePage* self, QUrl* url, int typeVal, bool isMainFrame);
void QWebEnginePage_OnAcceptNavigationRequest(QWebEnginePage* self, intptr_t slot);
bool QWebEnginePage_QBaseAcceptNavigationRequest(QWebEnginePage* self, QUrl* url, int typeVal, bool isMainFrame);
libqt_string QWebEnginePage_Tr2(const char* s, const char* c);
libqt_string QWebEnginePage_Tr3(const char* s, const char* c, int n);
void QWebEnginePage_Download2(QWebEnginePage* self, QUrl* url, libqt_string filename);
void QWebEnginePage_SetHtml2(QWebEnginePage* self, libqt_string html, QUrl* baseUrl);
void QWebEnginePage_SetContent2(QWebEnginePage* self, libqt_string data, libqt_string mimeType);
void QWebEnginePage_SetContent3(QWebEnginePage* self, libqt_string data, libqt_string mimeType, QUrl* baseUrl);
void QWebEnginePage_SetWebChannel2(QWebEnginePage* self, QWebChannel* param1, unsigned int worldId);
void QWebEnginePage_Save2(const QWebEnginePage* self, libqt_string filePath, int format);
void QWebEnginePage_PrintToPdf2(QWebEnginePage* self, libqt_string filePath, QPageLayout* layout);
void QWebEnginePage_PrintToPdf3(QWebEnginePage* self, libqt_string filePath, QPageLayout* layout, QPageRanges* ranges);
bool QWebEnginePage_EventFilter(QWebEnginePage* self, QObject* watched, QEvent* event);
void QWebEnginePage_OnEventFilter(QWebEnginePage* self, intptr_t slot);
bool QWebEnginePage_QBaseEventFilter(QWebEnginePage* self, QObject* watched, QEvent* event);
void QWebEnginePage_TimerEvent(QWebEnginePage* self, QTimerEvent* event);
void QWebEnginePage_OnTimerEvent(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_QBaseTimerEvent(QWebEnginePage* self, QTimerEvent* event);
void QWebEnginePage_ChildEvent(QWebEnginePage* self, QChildEvent* event);
void QWebEnginePage_OnChildEvent(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_QBaseChildEvent(QWebEnginePage* self, QChildEvent* event);
void QWebEnginePage_CustomEvent(QWebEnginePage* self, QEvent* event);
void QWebEnginePage_OnCustomEvent(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_QBaseCustomEvent(QWebEnginePage* self, QEvent* event);
void QWebEnginePage_ConnectNotify(QWebEnginePage* self, QMetaMethod* signal);
void QWebEnginePage_OnConnectNotify(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_QBaseConnectNotify(QWebEnginePage* self, QMetaMethod* signal);
void QWebEnginePage_DisconnectNotify(QWebEnginePage* self, QMetaMethod* signal);
void QWebEnginePage_OnDisconnectNotify(QWebEnginePage* self, intptr_t slot);
void QWebEnginePage_QBaseDisconnectNotify(QWebEnginePage* self, QMetaMethod* signal);
QObject* QWebEnginePage_Sender(const QWebEnginePage* self);
void QWebEnginePage_OnSender(const QWebEnginePage* self, intptr_t slot);
QObject* QWebEnginePage_QBaseSender(const QWebEnginePage* self);
int QWebEnginePage_SenderSignalIndex(const QWebEnginePage* self);
void QWebEnginePage_OnSenderSignalIndex(const QWebEnginePage* self, intptr_t slot);
int QWebEnginePage_QBaseSenderSignalIndex(const QWebEnginePage* self);
int QWebEnginePage_Receivers(const QWebEnginePage* self, const char* signal);
void QWebEnginePage_OnReceivers(const QWebEnginePage* self, intptr_t slot);
int QWebEnginePage_QBaseReceivers(const QWebEnginePage* self, const char* signal);
bool QWebEnginePage_IsSignalConnected(const QWebEnginePage* self, QMetaMethod* signal);
void QWebEnginePage_OnIsSignalConnected(const QWebEnginePage* self, intptr_t slot);
bool QWebEnginePage_QBaseIsSignalConnected(const QWebEnginePage* self, QMetaMethod* signal);
void QWebEnginePage_Delete(QWebEnginePage* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
