#pragma once
#ifndef SRCC_LIBQTEXTDOCUMENT_H
#define SRCC_LIBQTEXTDOCUMENT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractTextDocumentLayout QAbstractTextDocumentLayout;
typedef struct QAbstractUndoItem QAbstractUndoItem;
typedef struct QChar QChar;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPagedPaintDevice QPagedPaintDevice;
typedef struct QPainter QPainter;
typedef struct QRectF QRectF;
typedef struct QRegularExpression QRegularExpression;
typedef struct QSizeF QSizeF;
typedef struct QTextBlock QTextBlock;
typedef struct QTextCursor QTextCursor;
typedef struct QTextDocument QTextDocument;
typedef struct QTextFormat QTextFormat;
typedef struct QTextFrame QTextFrame;
typedef struct QTextObject QTextObject;
typedef struct QTextOption QTextOption;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

void QAbstractUndoItem_Undo(QAbstractUndoItem* self);
void QAbstractUndoItem_Redo(QAbstractUndoItem* self);
void QAbstractUndoItem_OperatorAssign(QAbstractUndoItem* self, const QAbstractUndoItem* param1);
void QAbstractUndoItem_Delete(QAbstractUndoItem* self);

QTextDocument* QTextDocument_new();
QTextDocument* QTextDocument_new2(const libqt_string text);
QTextDocument* QTextDocument_new3(QObject* parent);
QTextDocument* QTextDocument_new4(const libqt_string text, QObject* parent);
QMetaObject* QTextDocument_MetaObject(const QTextDocument* self);
void* QTextDocument_Metacast(QTextDocument* self, const char* param1);
int QTextDocument_Metacall(QTextDocument* self, int param1, int param2, void** param3);
void QTextDocument_OnMetacall(QTextDocument* self, intptr_t slot);
int QTextDocument_QBaseMetacall(QTextDocument* self, int param1, int param2, void** param3);
libqt_string QTextDocument_Tr(const char* s);
QTextDocument* QTextDocument_Clone(const QTextDocument* self);
bool QTextDocument_IsEmpty(const QTextDocument* self);
void QTextDocument_Clear(QTextDocument* self);
void QTextDocument_OnClear(QTextDocument* self, intptr_t slot);
void QTextDocument_QBaseClear(QTextDocument* self);
void QTextDocument_SetUndoRedoEnabled(QTextDocument* self, bool enable);
bool QTextDocument_IsUndoRedoEnabled(const QTextDocument* self);
bool QTextDocument_IsUndoAvailable(const QTextDocument* self);
bool QTextDocument_IsRedoAvailable(const QTextDocument* self);
int QTextDocument_AvailableUndoSteps(const QTextDocument* self);
int QTextDocument_AvailableRedoSteps(const QTextDocument* self);
int QTextDocument_Revision(const QTextDocument* self);
void QTextDocument_SetDocumentLayout(QTextDocument* self, QAbstractTextDocumentLayout* layout);
QAbstractTextDocumentLayout* QTextDocument_DocumentLayout(const QTextDocument* self);
void QTextDocument_SetMetaInformation(QTextDocument* self, int info, const libqt_string param2);
libqt_string QTextDocument_MetaInformation(const QTextDocument* self, int info);
libqt_string QTextDocument_ToHtml(const QTextDocument* self);
void QTextDocument_SetHtml(QTextDocument* self, const libqt_string html);
libqt_string QTextDocument_ToMarkdown(const QTextDocument* self);
void QTextDocument_SetMarkdown(QTextDocument* self, const libqt_string markdown);
libqt_string QTextDocument_ToRawText(const QTextDocument* self);
libqt_string QTextDocument_ToPlainText(const QTextDocument* self);
void QTextDocument_SetPlainText(QTextDocument* self, const libqt_string text);
QChar* QTextDocument_CharacterAt(const QTextDocument* self, int pos);
QTextCursor* QTextDocument_Find(const QTextDocument* self, const libqt_string subString);
QTextCursor* QTextDocument_Find2(const QTextDocument* self, const libqt_string subString, const QTextCursor* cursor);
QTextCursor* QTextDocument_Find3(const QTextDocument* self, const QRegularExpression* expr);
QTextCursor* QTextDocument_Find4(const QTextDocument* self, const QRegularExpression* expr, const QTextCursor* cursor);
QTextFrame* QTextDocument_FrameAt(const QTextDocument* self, int pos);
QTextFrame* QTextDocument_RootFrame(const QTextDocument* self);
QTextObject* QTextDocument_Object(const QTextDocument* self, int objectIndex);
QTextObject* QTextDocument_ObjectForFormat(const QTextDocument* self, const QTextFormat* param1);
QTextBlock* QTextDocument_FindBlock(const QTextDocument* self, int pos);
QTextBlock* QTextDocument_FindBlockByNumber(const QTextDocument* self, int blockNumber);
QTextBlock* QTextDocument_FindBlockByLineNumber(const QTextDocument* self, int blockNumber);
QTextBlock* QTextDocument_Begin(const QTextDocument* self);
QTextBlock* QTextDocument_End(const QTextDocument* self);
QTextBlock* QTextDocument_FirstBlock(const QTextDocument* self);
QTextBlock* QTextDocument_LastBlock(const QTextDocument* self);
void QTextDocument_SetPageSize(QTextDocument* self, const QSizeF* size);
QSizeF* QTextDocument_PageSize(const QTextDocument* self);
void QTextDocument_SetDefaultFont(QTextDocument* self, const QFont* font);
QFont* QTextDocument_DefaultFont(const QTextDocument* self);
void QTextDocument_SetSuperScriptBaseline(QTextDocument* self, double baseline);
double QTextDocument_SuperScriptBaseline(const QTextDocument* self);
void QTextDocument_SetSubScriptBaseline(QTextDocument* self, double baseline);
double QTextDocument_SubScriptBaseline(const QTextDocument* self);
void QTextDocument_SetBaselineOffset(QTextDocument* self, double baseline);
double QTextDocument_BaselineOffset(const QTextDocument* self);
int QTextDocument_PageCount(const QTextDocument* self);
bool QTextDocument_IsModified(const QTextDocument* self);
void QTextDocument_Print(const QTextDocument* self, QPagedPaintDevice* printer);
QVariant* QTextDocument_Resource(const QTextDocument* self, int typeVal, const QUrl* name);
void QTextDocument_AddResource(QTextDocument* self, int typeVal, const QUrl* name, const QVariant* resource);
libqt_list /* of QTextFormat* */ QTextDocument_AllFormats(const QTextDocument* self);
void QTextDocument_MarkContentsDirty(QTextDocument* self, int from, int length);
void QTextDocument_SetUseDesignMetrics(QTextDocument* self, bool b);
bool QTextDocument_UseDesignMetrics(const QTextDocument* self);
void QTextDocument_SetLayoutEnabled(QTextDocument* self, bool b);
bool QTextDocument_IsLayoutEnabled(const QTextDocument* self);
void QTextDocument_DrawContents(QTextDocument* self, QPainter* painter);
void QTextDocument_SetTextWidth(QTextDocument* self, double width);
double QTextDocument_TextWidth(const QTextDocument* self);
double QTextDocument_IdealWidth(const QTextDocument* self);
double QTextDocument_IndentWidth(const QTextDocument* self);
void QTextDocument_SetIndentWidth(QTextDocument* self, double width);
double QTextDocument_DocumentMargin(const QTextDocument* self);
void QTextDocument_SetDocumentMargin(QTextDocument* self, double margin);
void QTextDocument_AdjustSize(QTextDocument* self);
QSizeF* QTextDocument_Size(const QTextDocument* self);
int QTextDocument_BlockCount(const QTextDocument* self);
int QTextDocument_LineCount(const QTextDocument* self);
int QTextDocument_CharacterCount(const QTextDocument* self);
void QTextDocument_SetDefaultStyleSheet(QTextDocument* self, const libqt_string sheet);
libqt_string QTextDocument_DefaultStyleSheet(const QTextDocument* self);
void QTextDocument_Undo(QTextDocument* self, QTextCursor* cursor);
void QTextDocument_Redo(QTextDocument* self, QTextCursor* cursor);
void QTextDocument_ClearUndoRedoStacks(QTextDocument* self);
int QTextDocument_MaximumBlockCount(const QTextDocument* self);
void QTextDocument_SetMaximumBlockCount(QTextDocument* self, int maximum);
QTextOption* QTextDocument_DefaultTextOption(const QTextDocument* self);
void QTextDocument_SetDefaultTextOption(QTextDocument* self, const QTextOption* option);
QUrl* QTextDocument_BaseUrl(const QTextDocument* self);
void QTextDocument_SetBaseUrl(QTextDocument* self, const QUrl* url);
int QTextDocument_DefaultCursorMoveStyle(const QTextDocument* self);
void QTextDocument_SetDefaultCursorMoveStyle(QTextDocument* self, int style);
void QTextDocument_ContentsChange(QTextDocument* self, int from, int charsRemoved, int charsAdded);
void QTextDocument_Connect_ContentsChange(QTextDocument* self, intptr_t slot);
void QTextDocument_ContentsChanged(QTextDocument* self);
void QTextDocument_Connect_ContentsChanged(QTextDocument* self, intptr_t slot);
void QTextDocument_UndoAvailable(QTextDocument* self, bool param1);
void QTextDocument_Connect_UndoAvailable(QTextDocument* self, intptr_t slot);
void QTextDocument_RedoAvailable(QTextDocument* self, bool param1);
void QTextDocument_Connect_RedoAvailable(QTextDocument* self, intptr_t slot);
void QTextDocument_UndoCommandAdded(QTextDocument* self);
void QTextDocument_Connect_UndoCommandAdded(QTextDocument* self, intptr_t slot);
void QTextDocument_ModificationChanged(QTextDocument* self, bool m);
void QTextDocument_Connect_ModificationChanged(QTextDocument* self, intptr_t slot);
void QTextDocument_CursorPositionChanged(QTextDocument* self, const QTextCursor* cursor);
void QTextDocument_Connect_CursorPositionChanged(QTextDocument* self, intptr_t slot);
void QTextDocument_BlockCountChanged(QTextDocument* self, int newBlockCount);
void QTextDocument_Connect_BlockCountChanged(QTextDocument* self, intptr_t slot);
void QTextDocument_BaseUrlChanged(QTextDocument* self, const QUrl* url);
void QTextDocument_Connect_BaseUrlChanged(QTextDocument* self, intptr_t slot);
void QTextDocument_DocumentLayoutChanged(QTextDocument* self);
void QTextDocument_Connect_DocumentLayoutChanged(QTextDocument* self, intptr_t slot);
void QTextDocument_Undo2(QTextDocument* self);
void QTextDocument_Redo2(QTextDocument* self);
void QTextDocument_AppendUndoItem(QTextDocument* self, QAbstractUndoItem* param1);
void QTextDocument_SetModified(QTextDocument* self);
QTextObject* QTextDocument_CreateObject(QTextDocument* self, const QTextFormat* f);
void QTextDocument_OnCreateObject(QTextDocument* self, intptr_t slot);
QTextObject* QTextDocument_QBaseCreateObject(QTextDocument* self, const QTextFormat* f);
QVariant* QTextDocument_LoadResource(QTextDocument* self, int typeVal, const QUrl* name);
void QTextDocument_OnLoadResource(QTextDocument* self, intptr_t slot);
QVariant* QTextDocument_QBaseLoadResource(QTextDocument* self, int typeVal, const QUrl* name);
libqt_string QTextDocument_Tr2(const char* s, const char* c);
libqt_string QTextDocument_Tr3(const char* s, const char* c, int n);
QTextDocument* QTextDocument_Clone1(const QTextDocument* self, QObject* parent);
libqt_string QTextDocument_ToMarkdown1(const QTextDocument* self, int features);
void QTextDocument_SetMarkdown2(QTextDocument* self, const libqt_string markdown, int features);
QTextCursor* QTextDocument_Find22(const QTextDocument* self, const libqt_string subString, int from);
QTextCursor* QTextDocument_Find32(const QTextDocument* self, const libqt_string subString, int from, int options);
QTextCursor* QTextDocument_Find33(const QTextDocument* self, const libqt_string subString, const QTextCursor* cursor, int options);
QTextCursor* QTextDocument_Find23(const QTextDocument* self, const QRegularExpression* expr, int from);
QTextCursor* QTextDocument_Find34(const QTextDocument* self, const QRegularExpression* expr, int from, int options);
QTextCursor* QTextDocument_Find35(const QTextDocument* self, const QRegularExpression* expr, const QTextCursor* cursor, int options);
void QTextDocument_DrawContents2(QTextDocument* self, QPainter* painter, const QRectF* rect);
void QTextDocument_ClearUndoRedoStacks1(QTextDocument* self, int historyToClear);
void QTextDocument_SetModified1(QTextDocument* self, bool m);
bool QTextDocument_Event(QTextDocument* self, QEvent* event);
void QTextDocument_OnEvent(QTextDocument* self, intptr_t slot);
bool QTextDocument_QBaseEvent(QTextDocument* self, QEvent* event);
bool QTextDocument_EventFilter(QTextDocument* self, QObject* watched, QEvent* event);
void QTextDocument_OnEventFilter(QTextDocument* self, intptr_t slot);
bool QTextDocument_QBaseEventFilter(QTextDocument* self, QObject* watched, QEvent* event);
void QTextDocument_TimerEvent(QTextDocument* self, QTimerEvent* event);
void QTextDocument_OnTimerEvent(QTextDocument* self, intptr_t slot);
void QTextDocument_QBaseTimerEvent(QTextDocument* self, QTimerEvent* event);
void QTextDocument_ChildEvent(QTextDocument* self, QChildEvent* event);
void QTextDocument_OnChildEvent(QTextDocument* self, intptr_t slot);
void QTextDocument_QBaseChildEvent(QTextDocument* self, QChildEvent* event);
void QTextDocument_CustomEvent(QTextDocument* self, QEvent* event);
void QTextDocument_OnCustomEvent(QTextDocument* self, intptr_t slot);
void QTextDocument_QBaseCustomEvent(QTextDocument* self, QEvent* event);
void QTextDocument_ConnectNotify(QTextDocument* self, const QMetaMethod* signal);
void QTextDocument_OnConnectNotify(QTextDocument* self, intptr_t slot);
void QTextDocument_QBaseConnectNotify(QTextDocument* self, const QMetaMethod* signal);
void QTextDocument_DisconnectNotify(QTextDocument* self, const QMetaMethod* signal);
void QTextDocument_OnDisconnectNotify(QTextDocument* self, intptr_t slot);
void QTextDocument_QBaseDisconnectNotify(QTextDocument* self, const QMetaMethod* signal);
QObject* QTextDocument_Sender(const QTextDocument* self);
void QTextDocument_OnSender(const QTextDocument* self, intptr_t slot);
QObject* QTextDocument_QBaseSender(const QTextDocument* self);
int QTextDocument_SenderSignalIndex(const QTextDocument* self);
void QTextDocument_OnSenderSignalIndex(const QTextDocument* self, intptr_t slot);
int QTextDocument_QBaseSenderSignalIndex(const QTextDocument* self);
int QTextDocument_Receivers(const QTextDocument* self, const char* signal);
void QTextDocument_OnReceivers(const QTextDocument* self, intptr_t slot);
int QTextDocument_QBaseReceivers(const QTextDocument* self, const char* signal);
bool QTextDocument_IsSignalConnected(const QTextDocument* self, const QMetaMethod* signal);
void QTextDocument_OnIsSignalConnected(const QTextDocument* self, intptr_t slot);
bool QTextDocument_QBaseIsSignalConnected(const QTextDocument* self, const QMetaMethod* signal);
void QTextDocument_Delete(QTextDocument* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
