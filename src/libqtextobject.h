#pragma once
#ifndef SRCC_LIBQTEXTOBJECT_H
#define SRCC_LIBQTEXTOBJECT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTextBlock__iterator)
typedef QTextBlock::iterator QTextBlock__iterator;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTextFrame__iterator)
typedef QTextFrame::iterator QTextFrame__iterator;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTextLayout__FormatRange)
typedef QTextLayout::FormatRange QTextLayout__FormatRange;
#endif
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QGlyphRun QGlyphRun;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTextBlock QTextBlock;
typedef struct QTextBlockFormat QTextBlockFormat;
typedef struct QTextBlockGroup QTextBlockGroup;
typedef struct QTextBlockUserData QTextBlockUserData;
typedef struct QTextBlock__iterator QTextBlock__iterator;
typedef struct QTextCharFormat QTextCharFormat;
typedef struct QTextCursor QTextCursor;
typedef struct QTextDocument QTextDocument;
typedef struct QTextFormat QTextFormat;
typedef struct QTextFragment QTextFragment;
typedef struct QTextFrame QTextFrame;
typedef struct QTextFrameFormat QTextFrameFormat;
typedef struct QTextFrameLayoutData QTextFrameLayoutData;
typedef struct QTextFrame__iterator QTextFrame__iterator;
typedef struct QTextLayout QTextLayout;
typedef struct QTextLayout__FormatRange QTextLayout__FormatRange;
typedef struct QTextList QTextList;
typedef struct QTextObject QTextObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QMetaObject* QTextObject_MetaObject(const QTextObject* self);
void* QTextObject_Metacast(QTextObject* self, const char* param1);
int QTextObject_Metacall(QTextObject* self, int param1, int param2, void** param3);
libqt_string QTextObject_Tr(const char* s);
QTextFormat* QTextObject_Format(const QTextObject* self);
int QTextObject_FormatIndex(const QTextObject* self);
QTextDocument* QTextObject_Document(const QTextObject* self);
int QTextObject_ObjectIndex(const QTextObject* self);
libqt_string QTextObject_Tr2(const char* s, const char* c);
libqt_string QTextObject_Tr3(const char* s, const char* c, int n);

QMetaObject* QTextBlockGroup_MetaObject(const QTextBlockGroup* self);
void* QTextBlockGroup_Metacast(QTextBlockGroup* self, const char* param1);
int QTextBlockGroup_Metacall(QTextBlockGroup* self, int param1, int param2, void** param3);
libqt_string QTextBlockGroup_Tr(const char* s);
libqt_string QTextBlockGroup_Tr2(const char* s, const char* c);
libqt_string QTextBlockGroup_Tr3(const char* s, const char* c, int n);

void QTextFrameLayoutData_OperatorAssign(QTextFrameLayoutData* self, const QTextFrameLayoutData* param1);
void QTextFrameLayoutData_Delete(QTextFrameLayoutData* self);

QTextFrame* QTextFrame_new(QTextDocument* doc);
QMetaObject* QTextFrame_MetaObject(const QTextFrame* self);
void* QTextFrame_Metacast(QTextFrame* self, const char* param1);
int QTextFrame_Metacall(QTextFrame* self, int param1, int param2, void** param3);
void QTextFrame_OnMetacall(QTextFrame* self, intptr_t slot);
int QTextFrame_QBaseMetacall(QTextFrame* self, int param1, int param2, void** param3);
libqt_string QTextFrame_Tr(const char* s);
void QTextFrame_SetFrameFormat(QTextFrame* self, const QTextFrameFormat* format);
QTextFrameFormat* QTextFrame_FrameFormat(const QTextFrame* self);
QTextCursor* QTextFrame_FirstCursorPosition(const QTextFrame* self);
QTextCursor* QTextFrame_LastCursorPosition(const QTextFrame* self);
int QTextFrame_FirstPosition(const QTextFrame* self);
int QTextFrame_LastPosition(const QTextFrame* self);
QTextFrameLayoutData* QTextFrame_LayoutData(const QTextFrame* self);
void QTextFrame_SetLayoutData(QTextFrame* self, QTextFrameLayoutData* data);
libqt_list /* of QTextFrame* */ QTextFrame_ChildFrames(const QTextFrame* self);
QTextFrame* QTextFrame_ParentFrame(const QTextFrame* self);
QTextFrame__iterator* QTextFrame_Begin(const QTextFrame* self);
QTextFrame__iterator* QTextFrame_End(const QTextFrame* self);
libqt_string QTextFrame_Tr2(const char* s, const char* c);
libqt_string QTextFrame_Tr3(const char* s, const char* c, int n);
bool QTextFrame_Event(QTextFrame* self, QEvent* event);
void QTextFrame_OnEvent(QTextFrame* self, intptr_t slot);
bool QTextFrame_QBaseEvent(QTextFrame* self, QEvent* event);
bool QTextFrame_EventFilter(QTextFrame* self, QObject* watched, QEvent* event);
void QTextFrame_OnEventFilter(QTextFrame* self, intptr_t slot);
bool QTextFrame_QBaseEventFilter(QTextFrame* self, QObject* watched, QEvent* event);
void QTextFrame_TimerEvent(QTextFrame* self, QTimerEvent* event);
void QTextFrame_OnTimerEvent(QTextFrame* self, intptr_t slot);
void QTextFrame_QBaseTimerEvent(QTextFrame* self, QTimerEvent* event);
void QTextFrame_ChildEvent(QTextFrame* self, QChildEvent* event);
void QTextFrame_OnChildEvent(QTextFrame* self, intptr_t slot);
void QTextFrame_QBaseChildEvent(QTextFrame* self, QChildEvent* event);
void QTextFrame_CustomEvent(QTextFrame* self, QEvent* event);
void QTextFrame_OnCustomEvent(QTextFrame* self, intptr_t slot);
void QTextFrame_QBaseCustomEvent(QTextFrame* self, QEvent* event);
void QTextFrame_ConnectNotify(QTextFrame* self, const QMetaMethod* signal);
void QTextFrame_OnConnectNotify(QTextFrame* self, intptr_t slot);
void QTextFrame_QBaseConnectNotify(QTextFrame* self, const QMetaMethod* signal);
void QTextFrame_DisconnectNotify(QTextFrame* self, const QMetaMethod* signal);
void QTextFrame_OnDisconnectNotify(QTextFrame* self, intptr_t slot);
void QTextFrame_QBaseDisconnectNotify(QTextFrame* self, const QMetaMethod* signal);
void QTextFrame_SetFormat(QTextFrame* self, const QTextFormat* format);
void QTextFrame_OnSetFormat(QTextFrame* self, intptr_t slot);
void QTextFrame_QBaseSetFormat(QTextFrame* self, const QTextFormat* format);
QObject* QTextFrame_Sender(const QTextFrame* self);
void QTextFrame_OnSender(const QTextFrame* self, intptr_t slot);
QObject* QTextFrame_QBaseSender(const QTextFrame* self);
int QTextFrame_SenderSignalIndex(const QTextFrame* self);
void QTextFrame_OnSenderSignalIndex(const QTextFrame* self, intptr_t slot);
int QTextFrame_QBaseSenderSignalIndex(const QTextFrame* self);
int QTextFrame_Receivers(const QTextFrame* self, const char* signal);
void QTextFrame_OnReceivers(const QTextFrame* self, intptr_t slot);
int QTextFrame_QBaseReceivers(const QTextFrame* self, const char* signal);
bool QTextFrame_IsSignalConnected(const QTextFrame* self, const QMetaMethod* signal);
void QTextFrame_OnIsSignalConnected(const QTextFrame* self, intptr_t slot);
bool QTextFrame_QBaseIsSignalConnected(const QTextFrame* self, const QMetaMethod* signal);
void QTextFrame_Delete(QTextFrame* self);

void QTextBlockUserData_OperatorAssign(QTextBlockUserData* self, const QTextBlockUserData* param1);
void QTextBlockUserData_Delete(QTextBlockUserData* self);

QTextBlock* QTextBlock_new();
QTextBlock* QTextBlock_new2(const QTextBlock* o);
void QTextBlock_OperatorAssign(QTextBlock* self, const QTextBlock* o);
bool QTextBlock_IsValid(const QTextBlock* self);
bool QTextBlock_OperatorEqual(const QTextBlock* self, const QTextBlock* o);
bool QTextBlock_OperatorNotEqual(const QTextBlock* self, const QTextBlock* o);
bool QTextBlock_OperatorLesser(const QTextBlock* self, const QTextBlock* o);
int QTextBlock_Position(const QTextBlock* self);
int QTextBlock_Length(const QTextBlock* self);
bool QTextBlock_Contains(const QTextBlock* self, int position);
QTextLayout* QTextBlock_Layout(const QTextBlock* self);
void QTextBlock_ClearLayout(QTextBlock* self);
QTextBlockFormat* QTextBlock_BlockFormat(const QTextBlock* self);
int QTextBlock_BlockFormatIndex(const QTextBlock* self);
QTextCharFormat* QTextBlock_CharFormat(const QTextBlock* self);
int QTextBlock_CharFormatIndex(const QTextBlock* self);
int QTextBlock_TextDirection(const QTextBlock* self);
libqt_string QTextBlock_Text(const QTextBlock* self);
libqt_list /* of QTextLayout__FormatRange* */ QTextBlock_TextFormats(const QTextBlock* self);
QTextDocument* QTextBlock_Document(const QTextBlock* self);
QTextList* QTextBlock_TextList(const QTextBlock* self);
QTextBlockUserData* QTextBlock_UserData(const QTextBlock* self);
void QTextBlock_SetUserData(QTextBlock* self, QTextBlockUserData* data);
int QTextBlock_UserState(const QTextBlock* self);
void QTextBlock_SetUserState(QTextBlock* self, int state);
int QTextBlock_Revision(const QTextBlock* self);
void QTextBlock_SetRevision(QTextBlock* self, int rev);
bool QTextBlock_IsVisible(const QTextBlock* self);
void QTextBlock_SetVisible(QTextBlock* self, bool visible);
int QTextBlock_BlockNumber(const QTextBlock* self);
int QTextBlock_FirstLineNumber(const QTextBlock* self);
void QTextBlock_SetLineCount(QTextBlock* self, int count);
int QTextBlock_LineCount(const QTextBlock* self);
QTextBlock__iterator* QTextBlock_Begin(const QTextBlock* self);
QTextBlock__iterator* QTextBlock_End(const QTextBlock* self);
QTextBlock* QTextBlock_Next(const QTextBlock* self);
QTextBlock* QTextBlock_Previous(const QTextBlock* self);
int QTextBlock_FragmentIndex(const QTextBlock* self);
void QTextBlock_Delete(QTextBlock* self);

QTextFragment* QTextFragment_new();
QTextFragment* QTextFragment_new2(const QTextFragment* o);
void QTextFragment_OperatorAssign(QTextFragment* self, const QTextFragment* o);
bool QTextFragment_IsValid(const QTextFragment* self);
bool QTextFragment_OperatorEqual(const QTextFragment* self, const QTextFragment* o);
bool QTextFragment_OperatorNotEqual(const QTextFragment* self, const QTextFragment* o);
bool QTextFragment_OperatorLesser(const QTextFragment* self, const QTextFragment* o);
int QTextFragment_Position(const QTextFragment* self);
int QTextFragment_Length(const QTextFragment* self);
bool QTextFragment_Contains(const QTextFragment* self, int position);
QTextCharFormat* QTextFragment_CharFormat(const QTextFragment* self);
int QTextFragment_CharFormatIndex(const QTextFragment* self);
libqt_string QTextFragment_Text(const QTextFragment* self);
libqt_list /* of QGlyphRun* */ QTextFragment_GlyphRuns(const QTextFragment* self);
libqt_list /* of QGlyphRun* */ QTextFragment_GlyphRuns1(const QTextFragment* self, int from);
libqt_list /* of QGlyphRun* */ QTextFragment_GlyphRuns2(const QTextFragment* self, int from, int length);
void QTextFragment_Delete(QTextFragment* self);

QTextFrame__iterator* QTextFrame__iterator_new(const QTextFrame__iterator* other);
QTextFrame__iterator* QTextFrame__iterator_new2(QTextFrame__iterator* other);
QTextFrame__iterator* QTextFrame__iterator_new3();
QTextFrame__iterator* QTextFrame__iterator_new4(const QTextFrame__iterator* param1);
void QTextFrame__iterator_CopyAssign(QTextFrame__iterator* self, QTextFrame__iterator* other);
void QTextFrame__iterator_MoveAssign(QTextFrame__iterator* self, QTextFrame__iterator* other);
QTextFrame* QTextFrame__iterator_ParentFrame(const QTextFrame__iterator* self);
QTextFrame* QTextFrame__iterator_CurrentFrame(const QTextFrame__iterator* self);
QTextBlock* QTextFrame__iterator_CurrentBlock(const QTextFrame__iterator* self);
bool QTextFrame__iterator_AtEnd(const QTextFrame__iterator* self);
bool QTextFrame__iterator_OperatorEqual(const QTextFrame__iterator* self, const QTextFrame__iterator* o);
bool QTextFrame__iterator_OperatorNotEqual(const QTextFrame__iterator* self, const QTextFrame__iterator* o);
QTextFrame__iterator* QTextFrame__iterator_OperatorPlusPlus(QTextFrame__iterator* self);
QTextFrame__iterator* QTextFrame__iterator_OperatorPlusPlus2(QTextFrame__iterator* self, int param1);
QTextFrame__iterator* QTextFrame__iterator_OperatorMinusMinus(QTextFrame__iterator* self);
QTextFrame__iterator* QTextFrame__iterator_OperatorMinusMinus2(QTextFrame__iterator* self, int param1);
void QTextFrame__iterator_Delete(QTextFrame__iterator* self);

QTextBlock__iterator* QTextBlock__iterator_new(const QTextBlock__iterator* other);
QTextBlock__iterator* QTextBlock__iterator_new2(QTextBlock__iterator* other);
QTextBlock__iterator* QTextBlock__iterator_new3();
QTextBlock__iterator* QTextBlock__iterator_new4(const QTextBlock__iterator* param1);
void QTextBlock__iterator_CopyAssign(QTextBlock__iterator* self, QTextBlock__iterator* other);
void QTextBlock__iterator_MoveAssign(QTextBlock__iterator* self, QTextBlock__iterator* other);
QTextFragment* QTextBlock__iterator_Fragment(const QTextBlock__iterator* self);
bool QTextBlock__iterator_AtEnd(const QTextBlock__iterator* self);
bool QTextBlock__iterator_OperatorEqual(const QTextBlock__iterator* self, const QTextBlock__iterator* o);
bool QTextBlock__iterator_OperatorNotEqual(const QTextBlock__iterator* self, const QTextBlock__iterator* o);
QTextBlock__iterator* QTextBlock__iterator_OperatorPlusPlus(QTextBlock__iterator* self);
QTextBlock__iterator* QTextBlock__iterator_OperatorPlusPlus2(QTextBlock__iterator* self, int param1);
QTextBlock__iterator* QTextBlock__iterator_OperatorMinusMinus(QTextBlock__iterator* self);
QTextBlock__iterator* QTextBlock__iterator_OperatorMinusMinus2(QTextBlock__iterator* self, int param1);
void QTextBlock__iterator_Delete(QTextBlock__iterator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
