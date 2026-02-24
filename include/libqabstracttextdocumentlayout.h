#pragma once
#ifndef SRCC_LIBQABSTRACTTEXTDOCUMENTLAYOUT_H
#define SRCC_LIBQABSTRACTTEXTDOCUMENTLAYOUT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QAbstractTextDocumentLayout__PaintContext)
typedef QAbstractTextDocumentLayout::PaintContext QAbstractTextDocumentLayout__PaintContext;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QAbstractTextDocumentLayout__Selection)
typedef QAbstractTextDocumentLayout::Selection QAbstractTextDocumentLayout__Selection;
#endif
#else
typedef struct QAbstractTextDocumentLayout QAbstractTextDocumentLayout;
typedef struct QAbstractTextDocumentLayout__PaintContext QAbstractTextDocumentLayout__PaintContext;
typedef struct QAbstractTextDocumentLayout__Selection QAbstractTextDocumentLayout__Selection;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPainter QPainter;
typedef struct QPalette QPalette;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
typedef struct QTextBlock QTextBlock;
typedef struct QTextCharFormat QTextCharFormat;
typedef struct QTextCursor QTextCursor;
typedef struct QTextDocument QTextDocument;
typedef struct QTextFormat QTextFormat;
typedef struct QTextFrame QTextFrame;
typedef struct QTextInlineObject QTextInlineObject;
typedef struct QTextObjectInterface QTextObjectInterface;
typedef struct QTimerEvent QTimerEvent;
#endif

QAbstractTextDocumentLayout* QAbstractTextDocumentLayout_new(QTextDocument* doc);
QMetaObject* QAbstractTextDocumentLayout_MetaObject(const QAbstractTextDocumentLayout* self);
void* QAbstractTextDocumentLayout_Metacast(QAbstractTextDocumentLayout* self, const char* param1);
int QAbstractTextDocumentLayout_Metacall(QAbstractTextDocumentLayout* self, int param1, int param2, void** param3);
void QAbstractTextDocumentLayout_Draw(QAbstractTextDocumentLayout* self, QPainter* painter, const QAbstractTextDocumentLayout__PaintContext* context);
int QAbstractTextDocumentLayout_HitTest(const QAbstractTextDocumentLayout* self, const QPointF* point, int accuracy);
libqt_string QAbstractTextDocumentLayout_AnchorAt(const QAbstractTextDocumentLayout* self, const QPointF* pos);
libqt_string QAbstractTextDocumentLayout_ImageAt(const QAbstractTextDocumentLayout* self, const QPointF* pos);
QTextFormat* QAbstractTextDocumentLayout_FormatAt(const QAbstractTextDocumentLayout* self, const QPointF* pos);
QTextBlock* QAbstractTextDocumentLayout_BlockWithMarkerAt(const QAbstractTextDocumentLayout* self, const QPointF* pos);
int QAbstractTextDocumentLayout_PageCount(const QAbstractTextDocumentLayout* self);
QSizeF* QAbstractTextDocumentLayout_DocumentSize(const QAbstractTextDocumentLayout* self);
QRectF* QAbstractTextDocumentLayout_FrameBoundingRect(const QAbstractTextDocumentLayout* self, QTextFrame* frame);
QRectF* QAbstractTextDocumentLayout_BlockBoundingRect(const QAbstractTextDocumentLayout* self, const QTextBlock* block);
void QAbstractTextDocumentLayout_SetPaintDevice(QAbstractTextDocumentLayout* self, QPaintDevice* device);
QPaintDevice* QAbstractTextDocumentLayout_PaintDevice(const QAbstractTextDocumentLayout* self);
QTextDocument* QAbstractTextDocumentLayout_Document(const QAbstractTextDocumentLayout* self);
void QAbstractTextDocumentLayout_RegisterHandler(QAbstractTextDocumentLayout* self, int objectType, QObject* component);
void QAbstractTextDocumentLayout_UnregisterHandler(QAbstractTextDocumentLayout* self, int objectType);
QTextObjectInterface* QAbstractTextDocumentLayout_HandlerForObject(const QAbstractTextDocumentLayout* self, int objectType);
void QAbstractTextDocumentLayout_Update(QAbstractTextDocumentLayout* self);
void QAbstractTextDocumentLayout_Connect_Update(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_UpdateBlock(QAbstractTextDocumentLayout* self, const QTextBlock* block);
void QAbstractTextDocumentLayout_Connect_UpdateBlock(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_DocumentSizeChanged(QAbstractTextDocumentLayout* self, const QSizeF* newSize);
void QAbstractTextDocumentLayout_Connect_DocumentSizeChanged(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_PageCountChanged(QAbstractTextDocumentLayout* self, int newPages);
void QAbstractTextDocumentLayout_Connect_PageCountChanged(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_DocumentChanged(QAbstractTextDocumentLayout* self, int from, int charsRemoved, int charsAdded);
void QAbstractTextDocumentLayout_ResizeInlineObject(QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, const QTextFormat* format);
void QAbstractTextDocumentLayout_PositionInlineObject(QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, const QTextFormat* format);
void QAbstractTextDocumentLayout_DrawInlineObject(QAbstractTextDocumentLayout* self, QPainter* painter, const QRectF* rect, QTextInlineObject* object, int posInDocument, const QTextFormat* format);
void QAbstractTextDocumentLayout_UnregisterHandler2(QAbstractTextDocumentLayout* self, int objectType, QObject* component);
void QAbstractTextDocumentLayout_Update1(QAbstractTextDocumentLayout* self, const QRectF* param1);
void QAbstractTextDocumentLayout_Connect_Update1(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_OnMetaObject(const QAbstractTextDocumentLayout* self, intptr_t slot);
QMetaObject* QAbstractTextDocumentLayout_SuperMetaObject(const QAbstractTextDocumentLayout* self);
void QAbstractTextDocumentLayout_OnMetacast(QAbstractTextDocumentLayout* self, intptr_t slot);
void* QAbstractTextDocumentLayout_SuperMetacast(QAbstractTextDocumentLayout* self, const char* param1);
void QAbstractTextDocumentLayout_OnMetacall(QAbstractTextDocumentLayout* self, intptr_t slot);
int QAbstractTextDocumentLayout_SuperMetacall(QAbstractTextDocumentLayout* self, int param1, int param2, void** param3);
void QAbstractTextDocumentLayout_OnDraw(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_SuperDraw(QAbstractTextDocumentLayout* self, QPainter* painter, const QAbstractTextDocumentLayout__PaintContext* context);
void QAbstractTextDocumentLayout_OnHitTest(const QAbstractTextDocumentLayout* self, intptr_t slot);
int QAbstractTextDocumentLayout_SuperHitTest(const QAbstractTextDocumentLayout* self, const QPointF* point, int accuracy);
void QAbstractTextDocumentLayout_OnPageCount(const QAbstractTextDocumentLayout* self, intptr_t slot);
int QAbstractTextDocumentLayout_SuperPageCount(const QAbstractTextDocumentLayout* self);
void QAbstractTextDocumentLayout_OnDocumentSize(const QAbstractTextDocumentLayout* self, intptr_t slot);
QSizeF* QAbstractTextDocumentLayout_SuperDocumentSize(const QAbstractTextDocumentLayout* self);
void QAbstractTextDocumentLayout_OnFrameBoundingRect(const QAbstractTextDocumentLayout* self, intptr_t slot);
QRectF* QAbstractTextDocumentLayout_SuperFrameBoundingRect(const QAbstractTextDocumentLayout* self, QTextFrame* frame);
void QAbstractTextDocumentLayout_OnBlockBoundingRect(const QAbstractTextDocumentLayout* self, intptr_t slot);
QRectF* QAbstractTextDocumentLayout_SuperBlockBoundingRect(const QAbstractTextDocumentLayout* self, const QTextBlock* block);
void QAbstractTextDocumentLayout_OnDocumentChanged(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_SuperDocumentChanged(QAbstractTextDocumentLayout* self, int from, int charsRemoved, int charsAdded);
void QAbstractTextDocumentLayout_OnResizeInlineObject(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_SuperResizeInlineObject(QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, const QTextFormat* format);
void QAbstractTextDocumentLayout_OnPositionInlineObject(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_SuperPositionInlineObject(QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, const QTextFormat* format);
void QAbstractTextDocumentLayout_OnDrawInlineObject(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_SuperDrawInlineObject(QAbstractTextDocumentLayout* self, QPainter* painter, const QRectF* rect, QTextInlineObject* object, int posInDocument, const QTextFormat* format);
bool QAbstractTextDocumentLayout_Event(QAbstractTextDocumentLayout* self, QEvent* event);
void QAbstractTextDocumentLayout_OnEvent(QAbstractTextDocumentLayout* self, intptr_t slot);
bool QAbstractTextDocumentLayout_SuperEvent(QAbstractTextDocumentLayout* self, QEvent* event);
bool QAbstractTextDocumentLayout_EventFilter(QAbstractTextDocumentLayout* self, QObject* watched, QEvent* event);
void QAbstractTextDocumentLayout_OnEventFilter(QAbstractTextDocumentLayout* self, intptr_t slot);
bool QAbstractTextDocumentLayout_SuperEventFilter(QAbstractTextDocumentLayout* self, QObject* watched, QEvent* event);
void QAbstractTextDocumentLayout_TimerEvent(QAbstractTextDocumentLayout* self, QTimerEvent* event);
void QAbstractTextDocumentLayout_OnTimerEvent(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_SuperTimerEvent(QAbstractTextDocumentLayout* self, QTimerEvent* event);
void QAbstractTextDocumentLayout_ChildEvent(QAbstractTextDocumentLayout* self, QChildEvent* event);
void QAbstractTextDocumentLayout_OnChildEvent(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_SuperChildEvent(QAbstractTextDocumentLayout* self, QChildEvent* event);
void QAbstractTextDocumentLayout_CustomEvent(QAbstractTextDocumentLayout* self, QEvent* event);
void QAbstractTextDocumentLayout_OnCustomEvent(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_SuperCustomEvent(QAbstractTextDocumentLayout* self, QEvent* event);
void QAbstractTextDocumentLayout_ConnectNotify(QAbstractTextDocumentLayout* self, const QMetaMethod* signal);
void QAbstractTextDocumentLayout_OnConnectNotify(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_SuperConnectNotify(QAbstractTextDocumentLayout* self, const QMetaMethod* signal);
void QAbstractTextDocumentLayout_DisconnectNotify(QAbstractTextDocumentLayout* self, const QMetaMethod* signal);
void QAbstractTextDocumentLayout_OnDisconnectNotify(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_SuperDisconnectNotify(QAbstractTextDocumentLayout* self, const QMetaMethod* signal);
int QAbstractTextDocumentLayout_FormatIndex(QAbstractTextDocumentLayout* self, int pos);
void QAbstractTextDocumentLayout_OnFormatIndex(QAbstractTextDocumentLayout* self, intptr_t slot);
int QAbstractTextDocumentLayout_SuperFormatIndex(QAbstractTextDocumentLayout* self, int pos);
QTextCharFormat* QAbstractTextDocumentLayout_Format(QAbstractTextDocumentLayout* self, int pos);
void QAbstractTextDocumentLayout_OnFormat(QAbstractTextDocumentLayout* self, intptr_t slot);
QTextCharFormat* QAbstractTextDocumentLayout_SuperFormat(QAbstractTextDocumentLayout* self, int pos);
QObject* QAbstractTextDocumentLayout_Sender(const QAbstractTextDocumentLayout* self);
void QAbstractTextDocumentLayout_OnSender(const QAbstractTextDocumentLayout* self, intptr_t slot);
QObject* QAbstractTextDocumentLayout_SuperSender(const QAbstractTextDocumentLayout* self);
int QAbstractTextDocumentLayout_SenderSignalIndex(const QAbstractTextDocumentLayout* self);
void QAbstractTextDocumentLayout_OnSenderSignalIndex(const QAbstractTextDocumentLayout* self, intptr_t slot);
int QAbstractTextDocumentLayout_SuperSenderSignalIndex(const QAbstractTextDocumentLayout* self);
int QAbstractTextDocumentLayout_Receivers(const QAbstractTextDocumentLayout* self, const char* signal);
void QAbstractTextDocumentLayout_OnReceivers(const QAbstractTextDocumentLayout* self, intptr_t slot);
int QAbstractTextDocumentLayout_SuperReceivers(const QAbstractTextDocumentLayout* self, const char* signal);
bool QAbstractTextDocumentLayout_IsSignalConnected(const QAbstractTextDocumentLayout* self, const QMetaMethod* signal);
void QAbstractTextDocumentLayout_OnIsSignalConnected(const QAbstractTextDocumentLayout* self, intptr_t slot);
bool QAbstractTextDocumentLayout_SuperIsSignalConnected(const QAbstractTextDocumentLayout* self, const QMetaMethod* signal);
void QAbstractTextDocumentLayout_Delete(QAbstractTextDocumentLayout* self);

QSizeF* QTextObjectInterface_IntrinsicSize(QTextObjectInterface* self, QTextDocument* doc, int posInDocument, const QTextFormat* format);
void QTextObjectInterface_DrawObject(QTextObjectInterface* self, QPainter* painter, const QRectF* rect, QTextDocument* doc, int posInDocument, const QTextFormat* format);
void QTextObjectInterface_OperatorAssign(QTextObjectInterface* self, const QTextObjectInterface* param1);
void QTextObjectInterface_Delete(QTextObjectInterface* self);

QAbstractTextDocumentLayout__Selection* QAbstractTextDocumentLayout__Selection_new(const QAbstractTextDocumentLayout__Selection* param1);
QAbstractTextDocumentLayout__Selection* QAbstractTextDocumentLayout__Selection_new2();
QTextCursor* QAbstractTextDocumentLayout__Selection_Cursor(const QAbstractTextDocumentLayout__Selection* self);
void QAbstractTextDocumentLayout__Selection_SetCursor(QAbstractTextDocumentLayout__Selection* self, QTextCursor* cursor);
QTextCharFormat* QAbstractTextDocumentLayout__Selection_Format(const QAbstractTextDocumentLayout__Selection* self);
void QAbstractTextDocumentLayout__Selection_SetFormat(QAbstractTextDocumentLayout__Selection* self, QTextCharFormat* format);
void QAbstractTextDocumentLayout__Selection_OperatorAssign(QAbstractTextDocumentLayout__Selection* self, const QAbstractTextDocumentLayout__Selection* param1);
void QAbstractTextDocumentLayout__Selection_Delete(QAbstractTextDocumentLayout__Selection* self);

QAbstractTextDocumentLayout__PaintContext* QAbstractTextDocumentLayout__PaintContext_new();
QAbstractTextDocumentLayout__PaintContext* QAbstractTextDocumentLayout__PaintContext_new2(const QAbstractTextDocumentLayout__PaintContext* param1);
int QAbstractTextDocumentLayout__PaintContext_CursorPosition(const QAbstractTextDocumentLayout__PaintContext* self);
void QAbstractTextDocumentLayout__PaintContext_SetCursorPosition(QAbstractTextDocumentLayout__PaintContext* self, int cursorPosition);
QPalette* QAbstractTextDocumentLayout__PaintContext_Palette(const QAbstractTextDocumentLayout__PaintContext* self);
void QAbstractTextDocumentLayout__PaintContext_SetPalette(QAbstractTextDocumentLayout__PaintContext* self, QPalette* palette);
QRectF* QAbstractTextDocumentLayout__PaintContext_Clip(const QAbstractTextDocumentLayout__PaintContext* self);
void QAbstractTextDocumentLayout__PaintContext_SetClip(QAbstractTextDocumentLayout__PaintContext* self, QRectF* clip);
libqt_list /* of QAbstractTextDocumentLayout__Selection* */ QAbstractTextDocumentLayout__PaintContext_Selections(const QAbstractTextDocumentLayout__PaintContext* self);
void QAbstractTextDocumentLayout__PaintContext_SetSelections(QAbstractTextDocumentLayout__PaintContext* self, libqt_list /* of QAbstractTextDocumentLayout__Selection* */ selections);
void QAbstractTextDocumentLayout__PaintContext_OperatorAssign(QAbstractTextDocumentLayout__PaintContext* self, const QAbstractTextDocumentLayout__PaintContext* param1);
void QAbstractTextDocumentLayout__PaintContext_Delete(QAbstractTextDocumentLayout__PaintContext* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
