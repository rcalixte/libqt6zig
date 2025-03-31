#pragma once
#ifndef SRCC_LIBQABSTRACTTEXTDOCUMENTLAYOUT_H
#define SRCC_LIBQABSTRACTTEXTDOCUMENTLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAbstractTextDocumentLayout QAbstractTextDocumentLayout;
typedef struct QAbstractTextDocumentLayout__PaintContext QAbstractTextDocumentLayout__PaintContext;
typedef struct QAbstractTextDocumentLayout__Selection QAbstractTextDocumentLayout__Selection;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPainter QPainter;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
typedef struct QTextBlock QTextBlock;
typedef struct QTextCharFormat QTextCharFormat;
typedef struct QTextDocument QTextDocument;
typedef struct QTextFormat QTextFormat;
typedef struct QTextFrame QTextFrame;
typedef struct QTextInlineObject QTextInlineObject;
typedef struct QTextObjectInterface QTextObjectInterface;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QAbstractTextDocumentLayout* QAbstractTextDocumentLayout_new(QTextDocument* doc);
QMetaObject* QAbstractTextDocumentLayout_MetaObject(const QAbstractTextDocumentLayout* self);
void* QAbstractTextDocumentLayout_Metacast(QAbstractTextDocumentLayout* self, const char* param1);
int QAbstractTextDocumentLayout_Metacall(QAbstractTextDocumentLayout* self, int param1, int param2, void** param3);
void QAbstractTextDocumentLayout_OnMetacall(QAbstractTextDocumentLayout* self, intptr_t slot);
int QAbstractTextDocumentLayout_QBaseMetacall(QAbstractTextDocumentLayout* self, int param1, int param2, void** param3);
libqt_string QAbstractTextDocumentLayout_Tr(const char* s);
void QAbstractTextDocumentLayout_Draw(QAbstractTextDocumentLayout* self, QPainter* painter, QAbstractTextDocumentLayout__PaintContext* context);
void QAbstractTextDocumentLayout_OnDraw(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_QBaseDraw(QAbstractTextDocumentLayout* self, QPainter* painter, QAbstractTextDocumentLayout__PaintContext* context);
int QAbstractTextDocumentLayout_HitTest(const QAbstractTextDocumentLayout* self, QPointF* point, int accuracy);
void QAbstractTextDocumentLayout_OnHitTest(const QAbstractTextDocumentLayout* self, intptr_t slot);
int QAbstractTextDocumentLayout_QBaseHitTest(const QAbstractTextDocumentLayout* self, QPointF* point, int accuracy);
libqt_string QAbstractTextDocumentLayout_AnchorAt(const QAbstractTextDocumentLayout* self, QPointF* pos);
libqt_string QAbstractTextDocumentLayout_ImageAt(const QAbstractTextDocumentLayout* self, QPointF* pos);
QTextFormat* QAbstractTextDocumentLayout_FormatAt(const QAbstractTextDocumentLayout* self, QPointF* pos);
QTextBlock* QAbstractTextDocumentLayout_BlockWithMarkerAt(const QAbstractTextDocumentLayout* self, QPointF* pos);
int QAbstractTextDocumentLayout_PageCount(const QAbstractTextDocumentLayout* self);
void QAbstractTextDocumentLayout_OnPageCount(const QAbstractTextDocumentLayout* self, intptr_t slot);
int QAbstractTextDocumentLayout_QBasePageCount(const QAbstractTextDocumentLayout* self);
QSizeF* QAbstractTextDocumentLayout_DocumentSize(const QAbstractTextDocumentLayout* self);
void QAbstractTextDocumentLayout_OnDocumentSize(const QAbstractTextDocumentLayout* self, intptr_t slot);
QSizeF* QAbstractTextDocumentLayout_QBaseDocumentSize(const QAbstractTextDocumentLayout* self);
QRectF* QAbstractTextDocumentLayout_FrameBoundingRect(const QAbstractTextDocumentLayout* self, QTextFrame* frame);
void QAbstractTextDocumentLayout_OnFrameBoundingRect(const QAbstractTextDocumentLayout* self, intptr_t slot);
QRectF* QAbstractTextDocumentLayout_QBaseFrameBoundingRect(const QAbstractTextDocumentLayout* self, QTextFrame* frame);
QRectF* QAbstractTextDocumentLayout_BlockBoundingRect(const QAbstractTextDocumentLayout* self, QTextBlock* block);
void QAbstractTextDocumentLayout_OnBlockBoundingRect(const QAbstractTextDocumentLayout* self, intptr_t slot);
QRectF* QAbstractTextDocumentLayout_QBaseBlockBoundingRect(const QAbstractTextDocumentLayout* self, QTextBlock* block);
void QAbstractTextDocumentLayout_SetPaintDevice(QAbstractTextDocumentLayout* self, QPaintDevice* device);
QPaintDevice* QAbstractTextDocumentLayout_PaintDevice(const QAbstractTextDocumentLayout* self);
QTextDocument* QAbstractTextDocumentLayout_Document(const QAbstractTextDocumentLayout* self);
void QAbstractTextDocumentLayout_RegisterHandler(QAbstractTextDocumentLayout* self, int objectType, QObject* component);
void QAbstractTextDocumentLayout_UnregisterHandler(QAbstractTextDocumentLayout* self, int objectType);
QTextObjectInterface* QAbstractTextDocumentLayout_HandlerForObject(const QAbstractTextDocumentLayout* self, int objectType);
void QAbstractTextDocumentLayout_Update(QAbstractTextDocumentLayout* self);
void QAbstractTextDocumentLayout_Connect_Update(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_UpdateBlock(QAbstractTextDocumentLayout* self, QTextBlock* block);
void QAbstractTextDocumentLayout_Connect_UpdateBlock(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_DocumentSizeChanged(QAbstractTextDocumentLayout* self, QSizeF* newSize);
void QAbstractTextDocumentLayout_Connect_DocumentSizeChanged(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_PageCountChanged(QAbstractTextDocumentLayout* self, int newPages);
void QAbstractTextDocumentLayout_Connect_PageCountChanged(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_DocumentChanged(QAbstractTextDocumentLayout* self, int from, int charsRemoved, int charsAdded);
void QAbstractTextDocumentLayout_OnDocumentChanged(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_QBaseDocumentChanged(QAbstractTextDocumentLayout* self, int from, int charsRemoved, int charsAdded);
void QAbstractTextDocumentLayout_ResizeInlineObject(QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format);
void QAbstractTextDocumentLayout_OnResizeInlineObject(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_QBaseResizeInlineObject(QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format);
void QAbstractTextDocumentLayout_PositionInlineObject(QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format);
void QAbstractTextDocumentLayout_OnPositionInlineObject(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_QBasePositionInlineObject(QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format);
void QAbstractTextDocumentLayout_DrawInlineObject(QAbstractTextDocumentLayout* self, QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format);
void QAbstractTextDocumentLayout_OnDrawInlineObject(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_QBaseDrawInlineObject(QAbstractTextDocumentLayout* self, QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format);
libqt_string QAbstractTextDocumentLayout_Tr2(const char* s, const char* c);
libqt_string QAbstractTextDocumentLayout_Tr3(const char* s, const char* c, int n);
void QAbstractTextDocumentLayout_UnregisterHandler2(QAbstractTextDocumentLayout* self, int objectType, QObject* component);
void QAbstractTextDocumentLayout_Update1(QAbstractTextDocumentLayout* self, QRectF* param1);
void QAbstractTextDocumentLayout_Connect_Update1(QAbstractTextDocumentLayout* self, intptr_t slot);
bool QAbstractTextDocumentLayout_Event(QAbstractTextDocumentLayout* self, QEvent* event);
void QAbstractTextDocumentLayout_OnEvent(QAbstractTextDocumentLayout* self, intptr_t slot);
bool QAbstractTextDocumentLayout_QBaseEvent(QAbstractTextDocumentLayout* self, QEvent* event);
bool QAbstractTextDocumentLayout_EventFilter(QAbstractTextDocumentLayout* self, QObject* watched, QEvent* event);
void QAbstractTextDocumentLayout_OnEventFilter(QAbstractTextDocumentLayout* self, intptr_t slot);
bool QAbstractTextDocumentLayout_QBaseEventFilter(QAbstractTextDocumentLayout* self, QObject* watched, QEvent* event);
void QAbstractTextDocumentLayout_TimerEvent(QAbstractTextDocumentLayout* self, QTimerEvent* event);
void QAbstractTextDocumentLayout_OnTimerEvent(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_QBaseTimerEvent(QAbstractTextDocumentLayout* self, QTimerEvent* event);
void QAbstractTextDocumentLayout_ChildEvent(QAbstractTextDocumentLayout* self, QChildEvent* event);
void QAbstractTextDocumentLayout_OnChildEvent(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_QBaseChildEvent(QAbstractTextDocumentLayout* self, QChildEvent* event);
void QAbstractTextDocumentLayout_CustomEvent(QAbstractTextDocumentLayout* self, QEvent* event);
void QAbstractTextDocumentLayout_OnCustomEvent(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_QBaseCustomEvent(QAbstractTextDocumentLayout* self, QEvent* event);
void QAbstractTextDocumentLayout_ConnectNotify(QAbstractTextDocumentLayout* self, QMetaMethod* signal);
void QAbstractTextDocumentLayout_OnConnectNotify(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_QBaseConnectNotify(QAbstractTextDocumentLayout* self, QMetaMethod* signal);
void QAbstractTextDocumentLayout_DisconnectNotify(QAbstractTextDocumentLayout* self, QMetaMethod* signal);
void QAbstractTextDocumentLayout_OnDisconnectNotify(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_QBaseDisconnectNotify(QAbstractTextDocumentLayout* self, QMetaMethod* signal);
int QAbstractTextDocumentLayout_FormatIndex(QAbstractTextDocumentLayout* self, int pos);
void QAbstractTextDocumentLayout_OnFormatIndex(QAbstractTextDocumentLayout* self, intptr_t slot);
int QAbstractTextDocumentLayout_QBaseFormatIndex(QAbstractTextDocumentLayout* self, int pos);
QTextCharFormat* QAbstractTextDocumentLayout_Format(QAbstractTextDocumentLayout* self, int pos);
void QAbstractTextDocumentLayout_OnFormat(QAbstractTextDocumentLayout* self, intptr_t slot);
QTextCharFormat* QAbstractTextDocumentLayout_QBaseFormat(QAbstractTextDocumentLayout* self, int pos);
QObject* QAbstractTextDocumentLayout_Sender(const QAbstractTextDocumentLayout* self);
void QAbstractTextDocumentLayout_OnSender(const QAbstractTextDocumentLayout* self, intptr_t slot);
QObject* QAbstractTextDocumentLayout_QBaseSender(const QAbstractTextDocumentLayout* self);
int QAbstractTextDocumentLayout_SenderSignalIndex(const QAbstractTextDocumentLayout* self);
void QAbstractTextDocumentLayout_OnSenderSignalIndex(const QAbstractTextDocumentLayout* self, intptr_t slot);
int QAbstractTextDocumentLayout_QBaseSenderSignalIndex(const QAbstractTextDocumentLayout* self);
int QAbstractTextDocumentLayout_Receivers(const QAbstractTextDocumentLayout* self, const char* signal);
void QAbstractTextDocumentLayout_OnReceivers(const QAbstractTextDocumentLayout* self, intptr_t slot);
int QAbstractTextDocumentLayout_QBaseReceivers(const QAbstractTextDocumentLayout* self, const char* signal);
bool QAbstractTextDocumentLayout_IsSignalConnected(const QAbstractTextDocumentLayout* self, QMetaMethod* signal);
void QAbstractTextDocumentLayout_OnIsSignalConnected(const QAbstractTextDocumentLayout* self, intptr_t slot);
bool QAbstractTextDocumentLayout_QBaseIsSignalConnected(const QAbstractTextDocumentLayout* self, QMetaMethod* signal);
void QAbstractTextDocumentLayout_Delete(QAbstractTextDocumentLayout* self);

QSizeF* QTextObjectInterface_IntrinsicSize(QTextObjectInterface* self, QTextDocument* doc, int posInDocument, QTextFormat* format);
void QTextObjectInterface_DrawObject(QTextObjectInterface* self, QPainter* painter, QRectF* rect, QTextDocument* doc, int posInDocument, QTextFormat* format);
void QTextObjectInterface_OperatorAssign(QTextObjectInterface* self, QTextObjectInterface* param1);
void QTextObjectInterface_Delete(QTextObjectInterface* self);

QAbstractTextDocumentLayout__Selection* QAbstractTextDocumentLayout__Selection_new(QAbstractTextDocumentLayout__Selection* param1);
void QAbstractTextDocumentLayout__Selection_OperatorAssign(QAbstractTextDocumentLayout__Selection* self, QAbstractTextDocumentLayout__Selection* param1);
void QAbstractTextDocumentLayout__Selection_Delete(QAbstractTextDocumentLayout__Selection* self);

QAbstractTextDocumentLayout__PaintContext* QAbstractTextDocumentLayout__PaintContext_new();
QAbstractTextDocumentLayout__PaintContext* QAbstractTextDocumentLayout__PaintContext_new2(QAbstractTextDocumentLayout__PaintContext* param1);
void QAbstractTextDocumentLayout__PaintContext_OperatorAssign(QAbstractTextDocumentLayout__PaintContext* self, QAbstractTextDocumentLayout__PaintContext* param1);
void QAbstractTextDocumentLayout__PaintContext_Delete(QAbstractTextDocumentLayout__PaintContext* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
