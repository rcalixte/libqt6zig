#pragma once
#ifndef SRCC_LIBQFILEDIALOG_H
#define SRCC_LIBQFILEDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAbstractFileIconProvider QAbstractFileIconProvider;
typedef struct QAbstractItemDelegate QAbstractItemDelegate;
typedef struct QAbstractProxyModel QAbstractProxyModel;
typedef struct QAction QAction;
typedef struct QActionEvent QActionEvent;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBackingStore QBackingStore;
typedef struct QBindingStorage QBindingStorage;
typedef struct QBitmap QBitmap;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QCursor QCursor;
typedef struct QDialog QDialog;
typedef struct QDir QDir;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEnterEvent QEnterEvent;
typedef struct QEvent QEvent;
typedef struct QFileDialog QFileDialog;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFont QFont;
typedef struct QFontInfo QFontInfo;
typedef struct QFontMetrics QFontMetrics;
typedef struct QGraphicsEffect QGraphicsEffect;
typedef struct QGraphicsProxyWidget QGraphicsProxyWidget;
typedef struct QHideEvent QHideEvent;
typedef struct QIcon QIcon;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QKeySequence QKeySequence;
typedef struct QLayout QLayout;
typedef struct QLocale QLocale;
typedef struct QMargins QMargins;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPalette QPalette;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QResizeEvent QResizeEvent;
typedef struct QScreen QScreen;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSizePolicy QSizePolicy;
typedef struct QStyle QStyle;
typedef struct QTabletEvent QTabletEvent;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QWindow QWindow;
#endif

#ifdef __cplusplus
typedef QFileDialog::AcceptMode AcceptMode;   // C++ enum
typedef QFileDialog::DialogLabel DialogLabel; // C++ enum
typedef QFileDialog::FileMode FileMode;       // C++ enum
typedef QFileDialog::Option Option;           // C++ enum
typedef QFileDialog::Options Options;         // C++ QFlags
typedef QFileDialog::ViewMode ViewMode;       // C++ enum
#else
typedef int AcceptMode;  // C ABI enum
typedef int DialogLabel; // C ABI enum
typedef int FileMode;    // C ABI enum
typedef int Option;      // C ABI enum
typedef int Options;     // C ABI QFlags
typedef int ViewMode;    // C ABI enum
#endif

QFileDialog* QFileDialog_new(QWidget* parent);
QFileDialog* QFileDialog_new2(QWidget* parent, int f);
QFileDialog* QFileDialog_new3();
QFileDialog* QFileDialog_new4(QWidget* parent, libqt_string caption);
QFileDialog* QFileDialog_new5(QWidget* parent, libqt_string caption, libqt_string directory);
QFileDialog* QFileDialog_new6(QWidget* parent, libqt_string caption, libqt_string directory, libqt_string filter);
QMetaObject* QFileDialog_MetaObject(const QFileDialog* self);
void* QFileDialog_Metacast(QFileDialog* self, const char* param1);
int QFileDialog_Metacall(QFileDialog* self, int param1, int param2, void** param3);
void QFileDialog_OnMetacall(QFileDialog* self, intptr_t slot);
int QFileDialog_QBaseMetacall(QFileDialog* self, int param1, int param2, void** param3);
libqt_string QFileDialog_Tr(const char* s);
void QFileDialog_SetDirectory(QFileDialog* self, libqt_string directory);
void QFileDialog_SetDirectoryWithDirectory(QFileDialog* self, QDir* directory);
QDir* QFileDialog_Directory(const QFileDialog* self);
void QFileDialog_SetDirectoryUrl(QFileDialog* self, QUrl* directory);
QUrl* QFileDialog_DirectoryUrl(const QFileDialog* self);
void QFileDialog_SelectFile(QFileDialog* self, libqt_string filename);
libqt_list /* of libqt_string */ QFileDialog_SelectedFiles(const QFileDialog* self);
void QFileDialog_SelectUrl(QFileDialog* self, QUrl* url);
libqt_list /* of QUrl* */ QFileDialog_SelectedUrls(const QFileDialog* self);
void QFileDialog_SetNameFilter(QFileDialog* self, libqt_string filter);
void QFileDialog_SetNameFilters(QFileDialog* self, libqt_list /* of libqt_string */ filters);
libqt_list /* of libqt_string */ QFileDialog_NameFilters(const QFileDialog* self);
void QFileDialog_SelectNameFilter(QFileDialog* self, libqt_string filter);
libqt_string QFileDialog_SelectedMimeTypeFilter(const QFileDialog* self);
libqt_string QFileDialog_SelectedNameFilter(const QFileDialog* self);
void QFileDialog_SetMimeTypeFilters(QFileDialog* self, libqt_list /* of libqt_string */ filters);
libqt_list /* of libqt_string */ QFileDialog_MimeTypeFilters(const QFileDialog* self);
void QFileDialog_SelectMimeTypeFilter(QFileDialog* self, libqt_string filter);
int QFileDialog_Filter(const QFileDialog* self);
void QFileDialog_SetFilter(QFileDialog* self, int filters);
void QFileDialog_SetViewMode(QFileDialog* self, int mode);
int QFileDialog_ViewMode(const QFileDialog* self);
void QFileDialog_SetFileMode(QFileDialog* self, int mode);
int QFileDialog_FileMode(const QFileDialog* self);
void QFileDialog_SetAcceptMode(QFileDialog* self, int mode);
int QFileDialog_AcceptMode(const QFileDialog* self);
void QFileDialog_SetSidebarUrls(QFileDialog* self, libqt_list /* of QUrl* */ urls);
libqt_list /* of QUrl* */ QFileDialog_SidebarUrls(const QFileDialog* self);
libqt_string QFileDialog_SaveState(const QFileDialog* self);
bool QFileDialog_RestoreState(QFileDialog* self, libqt_string state);
void QFileDialog_SetDefaultSuffix(QFileDialog* self, libqt_string suffix);
libqt_string QFileDialog_DefaultSuffix(const QFileDialog* self);
void QFileDialog_SetHistory(QFileDialog* self, libqt_list /* of libqt_string */ paths);
libqt_list /* of libqt_string */ QFileDialog_History(const QFileDialog* self);
void QFileDialog_SetItemDelegate(QFileDialog* self, QAbstractItemDelegate* delegate);
QAbstractItemDelegate* QFileDialog_ItemDelegate(const QFileDialog* self);
void QFileDialog_SetIconProvider(QFileDialog* self, QAbstractFileIconProvider* provider);
QAbstractFileIconProvider* QFileDialog_IconProvider(const QFileDialog* self);
void QFileDialog_SetLabelText(QFileDialog* self, int label, libqt_string text);
libqt_string QFileDialog_LabelText(const QFileDialog* self, int label);
void QFileDialog_SetSupportedSchemes(QFileDialog* self, libqt_list /* of libqt_string */ schemes);
libqt_list /* of libqt_string */ QFileDialog_SupportedSchemes(const QFileDialog* self);
void QFileDialog_SetProxyModel(QFileDialog* self, QAbstractProxyModel* model);
QAbstractProxyModel* QFileDialog_ProxyModel(const QFileDialog* self);
void QFileDialog_SetOption(QFileDialog* self, int option);
bool QFileDialog_TestOption(const QFileDialog* self, int option);
void QFileDialog_SetOptions(QFileDialog* self, int options);
int QFileDialog_Options(const QFileDialog* self);
void QFileDialog_SetVisible(QFileDialog* self, bool visible);
void QFileDialog_OnSetVisible(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseSetVisible(QFileDialog* self, bool visible);
void QFileDialog_FileSelected(QFileDialog* self, libqt_string file);
void QFileDialog_Connect_FileSelected(QFileDialog* self, intptr_t slot);
void QFileDialog_FilesSelected(QFileDialog* self, libqt_list /* of libqt_string */ files);
void QFileDialog_Connect_FilesSelected(QFileDialog* self, intptr_t slot);
void QFileDialog_CurrentChanged(QFileDialog* self, libqt_string path);
void QFileDialog_Connect_CurrentChanged(QFileDialog* self, intptr_t slot);
void QFileDialog_DirectoryEntered(QFileDialog* self, libqt_string directory);
void QFileDialog_Connect_DirectoryEntered(QFileDialog* self, intptr_t slot);
void QFileDialog_UrlSelected(QFileDialog* self, QUrl* url);
void QFileDialog_Connect_UrlSelected(QFileDialog* self, intptr_t slot);
void QFileDialog_UrlsSelected(QFileDialog* self, libqt_list /* of QUrl* */ urls);
void QFileDialog_Connect_UrlsSelected(QFileDialog* self, intptr_t slot);
void QFileDialog_CurrentUrlChanged(QFileDialog* self, QUrl* url);
void QFileDialog_Connect_CurrentUrlChanged(QFileDialog* self, intptr_t slot);
void QFileDialog_DirectoryUrlEntered(QFileDialog* self, QUrl* directory);
void QFileDialog_Connect_DirectoryUrlEntered(QFileDialog* self, intptr_t slot);
void QFileDialog_FilterSelected(QFileDialog* self, libqt_string filter);
void QFileDialog_Connect_FilterSelected(QFileDialog* self, intptr_t slot);
libqt_string QFileDialog_GetOpenFileName();
QUrl* QFileDialog_GetOpenFileUrl();
libqt_string QFileDialog_GetSaveFileName();
QUrl* QFileDialog_GetSaveFileUrl();
libqt_string QFileDialog_GetExistingDirectory();
QUrl* QFileDialog_GetExistingDirectoryUrl();
libqt_list /* of libqt_string */ QFileDialog_GetOpenFileNames();
libqt_list /* of QUrl* */ QFileDialog_GetOpenFileUrls();
void QFileDialog_SaveFileContent(libqt_string fileContent, libqt_string fileNameHint);
void QFileDialog_Done(QFileDialog* self, int result);
void QFileDialog_OnDone(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseDone(QFileDialog* self, int result);
void QFileDialog_Accept(QFileDialog* self);
void QFileDialog_OnAccept(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseAccept(QFileDialog* self);
void QFileDialog_ChangeEvent(QFileDialog* self, QEvent* e);
void QFileDialog_OnChangeEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseChangeEvent(QFileDialog* self, QEvent* e);
libqt_string QFileDialog_Tr2(const char* s, const char* c);
libqt_string QFileDialog_Tr3(const char* s, const char* c, int n);
void QFileDialog_SetOption2(QFileDialog* self, int option, bool on);
libqt_string QFileDialog_GetOpenFileName1(QWidget* parent);
libqt_string QFileDialog_GetOpenFileName2(QWidget* parent, libqt_string caption);
libqt_string QFileDialog_GetOpenFileName3(QWidget* parent, libqt_string caption, libqt_string dir);
libqt_string QFileDialog_GetOpenFileName4(QWidget* parent, libqt_string caption, libqt_string dir, libqt_string filter);
QUrl* QFileDialog_GetOpenFileUrl1(QWidget* parent);
QUrl* QFileDialog_GetOpenFileUrl2(QWidget* parent, libqt_string caption);
QUrl* QFileDialog_GetOpenFileUrl3(QWidget* parent, libqt_string caption, QUrl* dir);
QUrl* QFileDialog_GetOpenFileUrl4(QWidget* parent, libqt_string caption, QUrl* dir, libqt_string filter);
libqt_string QFileDialog_GetSaveFileName1(QWidget* parent);
libqt_string QFileDialog_GetSaveFileName2(QWidget* parent, libqt_string caption);
libqt_string QFileDialog_GetSaveFileName3(QWidget* parent, libqt_string caption, libqt_string dir);
libqt_string QFileDialog_GetSaveFileName4(QWidget* parent, libqt_string caption, libqt_string dir, libqt_string filter);
QUrl* QFileDialog_GetSaveFileUrl1(QWidget* parent);
QUrl* QFileDialog_GetSaveFileUrl2(QWidget* parent, libqt_string caption);
QUrl* QFileDialog_GetSaveFileUrl3(QWidget* parent, libqt_string caption, QUrl* dir);
QUrl* QFileDialog_GetSaveFileUrl4(QWidget* parent, libqt_string caption, QUrl* dir, libqt_string filter);
libqt_string QFileDialog_GetExistingDirectory1(QWidget* parent);
libqt_string QFileDialog_GetExistingDirectory2(QWidget* parent, libqt_string caption);
libqt_string QFileDialog_GetExistingDirectory3(QWidget* parent, libqt_string caption, libqt_string dir);
libqt_string QFileDialog_GetExistingDirectory4(QWidget* parent, libqt_string caption, libqt_string dir, int options);
QUrl* QFileDialog_GetExistingDirectoryUrl1(QWidget* parent);
QUrl* QFileDialog_GetExistingDirectoryUrl2(QWidget* parent, libqt_string caption);
QUrl* QFileDialog_GetExistingDirectoryUrl3(QWidget* parent, libqt_string caption, QUrl* dir);
QUrl* QFileDialog_GetExistingDirectoryUrl4(QWidget* parent, libqt_string caption, QUrl* dir, int options);
QUrl* QFileDialog_GetExistingDirectoryUrl5(QWidget* parent, libqt_string caption, QUrl* dir, int options, libqt_list /* of libqt_string */ supportedSchemes);
libqt_list /* of libqt_string */ QFileDialog_GetOpenFileNames1(QWidget* parent);
libqt_list /* of libqt_string */ QFileDialog_GetOpenFileNames2(QWidget* parent, libqt_string caption);
libqt_list /* of libqt_string */ QFileDialog_GetOpenFileNames3(QWidget* parent, libqt_string caption, libqt_string dir);
libqt_list /* of libqt_string */ QFileDialog_GetOpenFileNames4(QWidget* parent, libqt_string caption, libqt_string dir, libqt_string filter);
libqt_list /* of QUrl* */ QFileDialog_GetOpenFileUrls1(QWidget* parent);
libqt_list /* of QUrl* */ QFileDialog_GetOpenFileUrls2(QWidget* parent, libqt_string caption);
libqt_list /* of QUrl* */ QFileDialog_GetOpenFileUrls3(QWidget* parent, libqt_string caption, QUrl* dir);
libqt_list /* of QUrl* */ QFileDialog_GetOpenFileUrls4(QWidget* parent, libqt_string caption, QUrl* dir, libqt_string filter);
QSize* QFileDialog_SizeHint(const QFileDialog* self);
void QFileDialog_OnSizeHint(const QFileDialog* self, intptr_t slot);
QSize* QFileDialog_QBaseSizeHint(const QFileDialog* self);
QSize* QFileDialog_MinimumSizeHint(const QFileDialog* self);
void QFileDialog_OnMinimumSizeHint(const QFileDialog* self, intptr_t slot);
QSize* QFileDialog_QBaseMinimumSizeHint(const QFileDialog* self);
void QFileDialog_Open(QFileDialog* self);
void QFileDialog_OnOpen(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseOpen(QFileDialog* self);
int QFileDialog_Exec(QFileDialog* self);
void QFileDialog_OnExec(QFileDialog* self, intptr_t slot);
int QFileDialog_QBaseExec(QFileDialog* self);
void QFileDialog_Reject(QFileDialog* self);
void QFileDialog_OnReject(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseReject(QFileDialog* self);
void QFileDialog_KeyPressEvent(QFileDialog* self, QKeyEvent* param1);
void QFileDialog_OnKeyPressEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseKeyPressEvent(QFileDialog* self, QKeyEvent* param1);
void QFileDialog_CloseEvent(QFileDialog* self, QCloseEvent* param1);
void QFileDialog_OnCloseEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseCloseEvent(QFileDialog* self, QCloseEvent* param1);
void QFileDialog_ShowEvent(QFileDialog* self, QShowEvent* param1);
void QFileDialog_OnShowEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseShowEvent(QFileDialog* self, QShowEvent* param1);
void QFileDialog_ResizeEvent(QFileDialog* self, QResizeEvent* param1);
void QFileDialog_OnResizeEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseResizeEvent(QFileDialog* self, QResizeEvent* param1);
void QFileDialog_ContextMenuEvent(QFileDialog* self, QContextMenuEvent* param1);
void QFileDialog_OnContextMenuEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseContextMenuEvent(QFileDialog* self, QContextMenuEvent* param1);
bool QFileDialog_EventFilter(QFileDialog* self, QObject* param1, QEvent* param2);
void QFileDialog_OnEventFilter(QFileDialog* self, intptr_t slot);
bool QFileDialog_QBaseEventFilter(QFileDialog* self, QObject* param1, QEvent* param2);
int QFileDialog_DevType(const QFileDialog* self);
void QFileDialog_OnDevType(const QFileDialog* self, intptr_t slot);
int QFileDialog_QBaseDevType(const QFileDialog* self);
int QFileDialog_HeightForWidth(const QFileDialog* self, int param1);
void QFileDialog_OnHeightForWidth(const QFileDialog* self, intptr_t slot);
int QFileDialog_QBaseHeightForWidth(const QFileDialog* self, int param1);
bool QFileDialog_HasHeightForWidth(const QFileDialog* self);
void QFileDialog_OnHasHeightForWidth(const QFileDialog* self, intptr_t slot);
bool QFileDialog_QBaseHasHeightForWidth(const QFileDialog* self);
QPaintEngine* QFileDialog_PaintEngine(const QFileDialog* self);
void QFileDialog_OnPaintEngine(const QFileDialog* self, intptr_t slot);
QPaintEngine* QFileDialog_QBasePaintEngine(const QFileDialog* self);
bool QFileDialog_Event(QFileDialog* self, QEvent* event);
void QFileDialog_OnEvent(QFileDialog* self, intptr_t slot);
bool QFileDialog_QBaseEvent(QFileDialog* self, QEvent* event);
void QFileDialog_MousePressEvent(QFileDialog* self, QMouseEvent* event);
void QFileDialog_OnMousePressEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseMousePressEvent(QFileDialog* self, QMouseEvent* event);
void QFileDialog_MouseReleaseEvent(QFileDialog* self, QMouseEvent* event);
void QFileDialog_OnMouseReleaseEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseMouseReleaseEvent(QFileDialog* self, QMouseEvent* event);
void QFileDialog_MouseDoubleClickEvent(QFileDialog* self, QMouseEvent* event);
void QFileDialog_OnMouseDoubleClickEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseMouseDoubleClickEvent(QFileDialog* self, QMouseEvent* event);
void QFileDialog_MouseMoveEvent(QFileDialog* self, QMouseEvent* event);
void QFileDialog_OnMouseMoveEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseMouseMoveEvent(QFileDialog* self, QMouseEvent* event);
void QFileDialog_WheelEvent(QFileDialog* self, QWheelEvent* event);
void QFileDialog_OnWheelEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseWheelEvent(QFileDialog* self, QWheelEvent* event);
void QFileDialog_KeyReleaseEvent(QFileDialog* self, QKeyEvent* event);
void QFileDialog_OnKeyReleaseEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseKeyReleaseEvent(QFileDialog* self, QKeyEvent* event);
void QFileDialog_FocusInEvent(QFileDialog* self, QFocusEvent* event);
void QFileDialog_OnFocusInEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseFocusInEvent(QFileDialog* self, QFocusEvent* event);
void QFileDialog_FocusOutEvent(QFileDialog* self, QFocusEvent* event);
void QFileDialog_OnFocusOutEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseFocusOutEvent(QFileDialog* self, QFocusEvent* event);
void QFileDialog_EnterEvent(QFileDialog* self, QEnterEvent* event);
void QFileDialog_OnEnterEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseEnterEvent(QFileDialog* self, QEnterEvent* event);
void QFileDialog_LeaveEvent(QFileDialog* self, QEvent* event);
void QFileDialog_OnLeaveEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseLeaveEvent(QFileDialog* self, QEvent* event);
void QFileDialog_PaintEvent(QFileDialog* self, QPaintEvent* event);
void QFileDialog_OnPaintEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBasePaintEvent(QFileDialog* self, QPaintEvent* event);
void QFileDialog_MoveEvent(QFileDialog* self, QMoveEvent* event);
void QFileDialog_OnMoveEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseMoveEvent(QFileDialog* self, QMoveEvent* event);
void QFileDialog_TabletEvent(QFileDialog* self, QTabletEvent* event);
void QFileDialog_OnTabletEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseTabletEvent(QFileDialog* self, QTabletEvent* event);
void QFileDialog_ActionEvent(QFileDialog* self, QActionEvent* event);
void QFileDialog_OnActionEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseActionEvent(QFileDialog* self, QActionEvent* event);
void QFileDialog_DragEnterEvent(QFileDialog* self, QDragEnterEvent* event);
void QFileDialog_OnDragEnterEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseDragEnterEvent(QFileDialog* self, QDragEnterEvent* event);
void QFileDialog_DragMoveEvent(QFileDialog* self, QDragMoveEvent* event);
void QFileDialog_OnDragMoveEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseDragMoveEvent(QFileDialog* self, QDragMoveEvent* event);
void QFileDialog_DragLeaveEvent(QFileDialog* self, QDragLeaveEvent* event);
void QFileDialog_OnDragLeaveEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseDragLeaveEvent(QFileDialog* self, QDragLeaveEvent* event);
void QFileDialog_DropEvent(QFileDialog* self, QDropEvent* event);
void QFileDialog_OnDropEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseDropEvent(QFileDialog* self, QDropEvent* event);
void QFileDialog_HideEvent(QFileDialog* self, QHideEvent* event);
void QFileDialog_OnHideEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseHideEvent(QFileDialog* self, QHideEvent* event);
bool QFileDialog_NativeEvent(QFileDialog* self, libqt_string eventType, void* message, intptr_t* result);
void QFileDialog_OnNativeEvent(QFileDialog* self, intptr_t slot);
bool QFileDialog_QBaseNativeEvent(QFileDialog* self, libqt_string eventType, void* message, intptr_t* result);
void QFileDialog_InputMethodEvent(QFileDialog* self, QInputMethodEvent* param1);
void QFileDialog_OnInputMethodEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseInputMethodEvent(QFileDialog* self, QInputMethodEvent* param1);
QVariant* QFileDialog_InputMethodQuery(const QFileDialog* self, int param1);
void QFileDialog_OnInputMethodQuery(const QFileDialog* self, intptr_t slot);
QVariant* QFileDialog_QBaseInputMethodQuery(const QFileDialog* self, int param1);
bool QFileDialog_FocusNextPrevChild(QFileDialog* self, bool next);
void QFileDialog_OnFocusNextPrevChild(QFileDialog* self, intptr_t slot);
bool QFileDialog_QBaseFocusNextPrevChild(QFileDialog* self, bool next);
void QFileDialog_TimerEvent(QFileDialog* self, QTimerEvent* event);
void QFileDialog_OnTimerEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseTimerEvent(QFileDialog* self, QTimerEvent* event);
void QFileDialog_ChildEvent(QFileDialog* self, QChildEvent* event);
void QFileDialog_OnChildEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseChildEvent(QFileDialog* self, QChildEvent* event);
void QFileDialog_CustomEvent(QFileDialog* self, QEvent* event);
void QFileDialog_OnCustomEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseCustomEvent(QFileDialog* self, QEvent* event);
void QFileDialog_ConnectNotify(QFileDialog* self, QMetaMethod* signal);
void QFileDialog_OnConnectNotify(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseConnectNotify(QFileDialog* self, QMetaMethod* signal);
void QFileDialog_DisconnectNotify(QFileDialog* self, QMetaMethod* signal);
void QFileDialog_OnDisconnectNotify(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseDisconnectNotify(QFileDialog* self, QMetaMethod* signal);
int QFileDialog_Metric(const QFileDialog* self, int param1);
void QFileDialog_OnMetric(const QFileDialog* self, intptr_t slot);
int QFileDialog_QBaseMetric(const QFileDialog* self, int param1);
void QFileDialog_InitPainter(const QFileDialog* self, QPainter* painter);
void QFileDialog_OnInitPainter(const QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseInitPainter(const QFileDialog* self, QPainter* painter);
QPaintDevice* QFileDialog_Redirected(const QFileDialog* self, QPoint* offset);
void QFileDialog_OnRedirected(const QFileDialog* self, intptr_t slot);
QPaintDevice* QFileDialog_QBaseRedirected(const QFileDialog* self, QPoint* offset);
QPainter* QFileDialog_SharedPainter(const QFileDialog* self);
void QFileDialog_OnSharedPainter(const QFileDialog* self, intptr_t slot);
QPainter* QFileDialog_QBaseSharedPainter(const QFileDialog* self);
void QFileDialog_AdjustPosition(QFileDialog* self, QWidget* param1);
void QFileDialog_OnAdjustPosition(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseAdjustPosition(QFileDialog* self, QWidget* param1);
void QFileDialog_UpdateMicroFocus(QFileDialog* self);
void QFileDialog_OnUpdateMicroFocus(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseUpdateMicroFocus(QFileDialog* self);
void QFileDialog_Create(QFileDialog* self);
void QFileDialog_OnCreate(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseCreate(QFileDialog* self);
void QFileDialog_Destroy(QFileDialog* self);
void QFileDialog_OnDestroy(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseDestroy(QFileDialog* self);
bool QFileDialog_FocusNextChild(QFileDialog* self);
void QFileDialog_OnFocusNextChild(QFileDialog* self, intptr_t slot);
bool QFileDialog_QBaseFocusNextChild(QFileDialog* self);
bool QFileDialog_FocusPreviousChild(QFileDialog* self);
void QFileDialog_OnFocusPreviousChild(QFileDialog* self, intptr_t slot);
bool QFileDialog_QBaseFocusPreviousChild(QFileDialog* self);
QObject* QFileDialog_Sender(const QFileDialog* self);
void QFileDialog_OnSender(const QFileDialog* self, intptr_t slot);
QObject* QFileDialog_QBaseSender(const QFileDialog* self);
int QFileDialog_SenderSignalIndex(const QFileDialog* self);
void QFileDialog_OnSenderSignalIndex(const QFileDialog* self, intptr_t slot);
int QFileDialog_QBaseSenderSignalIndex(const QFileDialog* self);
int QFileDialog_Receivers(const QFileDialog* self, const char* signal);
void QFileDialog_OnReceivers(const QFileDialog* self, intptr_t slot);
int QFileDialog_QBaseReceivers(const QFileDialog* self, const char* signal);
bool QFileDialog_IsSignalConnected(const QFileDialog* self, QMetaMethod* signal);
void QFileDialog_OnIsSignalConnected(const QFileDialog* self, intptr_t slot);
bool QFileDialog_QBaseIsSignalConnected(const QFileDialog* self, QMetaMethod* signal);
void QFileDialog_Delete(QFileDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
