#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBEMOJIMODEL_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBEMOJIMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__CustomEmoji)
typedef TextEmoticonsCore::CustomEmoji TextEmoticonsCore__CustomEmoji;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__CustomEmojiIconManager)
typedef TextEmoticonsCore::CustomEmojiIconManager TextEmoticonsCore__CustomEmojiIconManager;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__EmojiModel)
typedef TextEmoticonsCore::EmojiModel TextEmoticonsCore__EmojiModel;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__UnicodeEmoticon)
typedef TextEmoticonsCore::UnicodeEmoticon TextEmoticonsCore__UnicodeEmoticon;
#endif
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractListModel QAbstractListModel;
typedef struct QChildEvent QChildEvent;
typedef struct QDataStream QDataStream;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QModelRoleDataSpan QModelRoleDataSpan;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct TextEmoticonsCore__CustomEmoji TextEmoticonsCore__CustomEmoji;
typedef struct TextEmoticonsCore__CustomEmojiIconManager TextEmoticonsCore__CustomEmojiIconManager;
typedef struct TextEmoticonsCore__EmojiModel TextEmoticonsCore__EmojiModel;
typedef struct TextEmoticonsCore__UnicodeEmoticon TextEmoticonsCore__UnicodeEmoticon;
#endif

TextEmoticonsCore__EmojiModel* TextEmoticonsCore__EmojiModel_new();
TextEmoticonsCore__EmojiModel* TextEmoticonsCore__EmojiModel_new2(QObject* parent);
QMetaObject* TextEmoticonsCore__EmojiModel_MetaObject(const TextEmoticonsCore__EmojiModel* self);
void* TextEmoticonsCore__EmojiModel_Metacast(TextEmoticonsCore__EmojiModel* self, const char* param1);
int TextEmoticonsCore__EmojiModel_Metacall(TextEmoticonsCore__EmojiModel* self, int param1, int param2, void** param3);
int TextEmoticonsCore__EmojiModel_RowCount(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent);
QVariant* TextEmoticonsCore__EmojiModel_Data(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index, int role);
libqt_list /* of TextEmoticonsCore__UnicodeEmoticon* */ TextEmoticonsCore__EmojiModel_EmoticonList(const TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_SetUnicodeEmoticonList(TextEmoticonsCore__EmojiModel* self, const libqt_list /* of TextEmoticonsCore__UnicodeEmoticon* */ newEmoticonList);
libqt_list /* of TextEmoticonsCore__CustomEmoji* */ TextEmoticonsCore__EmojiModel_CustomEmojiList(const TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_SetCustomEmojiList(TextEmoticonsCore__EmojiModel* self, const libqt_list /* of TextEmoticonsCore__CustomEmoji* */ newCustomEmojiList);
TextEmoticonsCore__CustomEmojiIconManager* TextEmoticonsCore__EmojiModel_CustomEmojiIconManager(const TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_SetCustomEmojiIconManager(TextEmoticonsCore__EmojiModel* self, TextEmoticonsCore__CustomEmojiIconManager* newCustomEmojiIconManager);
void TextEmoticonsCore__EmojiModel_SetExcludeEmoticons(TextEmoticonsCore__EmojiModel* self, const libqt_list /* of libqt_string */ emoticons);
void TextEmoticonsCore__EmojiModel_OnMetaObject(const TextEmoticonsCore__EmojiModel* self, intptr_t slot);
QMetaObject* TextEmoticonsCore__EmojiModel_SuperMetaObject(const TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_OnMetacast(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
void* TextEmoticonsCore__EmojiModel_SuperMetacast(TextEmoticonsCore__EmojiModel* self, const char* param1);
void TextEmoticonsCore__EmojiModel_OnMetacall(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
int TextEmoticonsCore__EmojiModel_SuperMetacall(TextEmoticonsCore__EmojiModel* self, int param1, int param2, void** param3);
void TextEmoticonsCore__EmojiModel_OnRowCount(const TextEmoticonsCore__EmojiModel* self, intptr_t slot);
int TextEmoticonsCore__EmojiModel_SuperRowCount(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent);
void TextEmoticonsCore__EmojiModel_OnData(const TextEmoticonsCore__EmojiModel* self, intptr_t slot);
QVariant* TextEmoticonsCore__EmojiModel_SuperData(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index, int role);
QModelIndex* TextEmoticonsCore__EmojiModel_Index(const TextEmoticonsCore__EmojiModel* self, int row, int column, const QModelIndex* parent);
void TextEmoticonsCore__EmojiModel_OnIndex(const TextEmoticonsCore__EmojiModel* self, intptr_t slot);
QModelIndex* TextEmoticonsCore__EmojiModel_SuperIndex(const TextEmoticonsCore__EmojiModel* self, int row, int column, const QModelIndex* parent);
QModelIndex* TextEmoticonsCore__EmojiModel_Sibling(const TextEmoticonsCore__EmojiModel* self, int row, int column, const QModelIndex* idx);
void TextEmoticonsCore__EmojiModel_OnSibling(const TextEmoticonsCore__EmojiModel* self, intptr_t slot);
QModelIndex* TextEmoticonsCore__EmojiModel_SuperSibling(const TextEmoticonsCore__EmojiModel* self, int row, int column, const QModelIndex* idx);
bool TextEmoticonsCore__EmojiModel_DropMimeData(TextEmoticonsCore__EmojiModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void TextEmoticonsCore__EmojiModel_OnDropMimeData(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
bool TextEmoticonsCore__EmojiModel_SuperDropMimeData(TextEmoticonsCore__EmojiModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
int TextEmoticonsCore__EmojiModel_Flags(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index);
void TextEmoticonsCore__EmojiModel_OnFlags(const TextEmoticonsCore__EmojiModel* self, intptr_t slot);
int TextEmoticonsCore__EmojiModel_SuperFlags(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index);
bool TextEmoticonsCore__EmojiModel_SetData(TextEmoticonsCore__EmojiModel* self, const QModelIndex* index, const QVariant* value, int role);
void TextEmoticonsCore__EmojiModel_OnSetData(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
bool TextEmoticonsCore__EmojiModel_SuperSetData(TextEmoticonsCore__EmojiModel* self, const QModelIndex* index, const QVariant* value, int role);
QVariant* TextEmoticonsCore__EmojiModel_HeaderData(const TextEmoticonsCore__EmojiModel* self, int section, int orientation, int role);
void TextEmoticonsCore__EmojiModel_OnHeaderData(const TextEmoticonsCore__EmojiModel* self, intptr_t slot);
QVariant* TextEmoticonsCore__EmojiModel_SuperHeaderData(const TextEmoticonsCore__EmojiModel* self, int section, int orientation, int role);
bool TextEmoticonsCore__EmojiModel_SetHeaderData(TextEmoticonsCore__EmojiModel* self, int section, int orientation, const QVariant* value, int role);
void TextEmoticonsCore__EmojiModel_OnSetHeaderData(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
bool TextEmoticonsCore__EmojiModel_SuperSetHeaderData(TextEmoticonsCore__EmojiModel* self, int section, int orientation, const QVariant* value, int role);
libqt_map /* of int to QVariant* */ TextEmoticonsCore__EmojiModel_ItemData(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index);
void TextEmoticonsCore__EmojiModel_OnItemData(const TextEmoticonsCore__EmojiModel* self, intptr_t slot);
libqt_map /* of int to QVariant* */ TextEmoticonsCore__EmojiModel_SuperItemData(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index);
bool TextEmoticonsCore__EmojiModel_SetItemData(TextEmoticonsCore__EmojiModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
void TextEmoticonsCore__EmojiModel_OnSetItemData(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
bool TextEmoticonsCore__EmojiModel_SuperSetItemData(TextEmoticonsCore__EmojiModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles);
bool TextEmoticonsCore__EmojiModel_ClearItemData(TextEmoticonsCore__EmojiModel* self, const QModelIndex* index);
void TextEmoticonsCore__EmojiModel_OnClearItemData(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
bool TextEmoticonsCore__EmojiModel_SuperClearItemData(TextEmoticonsCore__EmojiModel* self, const QModelIndex* index);
libqt_list /* of libqt_string */ TextEmoticonsCore__EmojiModel_MimeTypes(const TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_OnMimeTypes(const TextEmoticonsCore__EmojiModel* self, intptr_t slot);
libqt_list /* of libqt_string */ TextEmoticonsCore__EmojiModel_SuperMimeTypes(const TextEmoticonsCore__EmojiModel* self);
QMimeData* TextEmoticonsCore__EmojiModel_MimeData(const TextEmoticonsCore__EmojiModel* self, const libqt_list /* of QModelIndex* */ indexes);
void TextEmoticonsCore__EmojiModel_OnMimeData(const TextEmoticonsCore__EmojiModel* self, intptr_t slot);
QMimeData* TextEmoticonsCore__EmojiModel_SuperMimeData(const TextEmoticonsCore__EmojiModel* self, const libqt_list /* of QModelIndex* */ indexes);
bool TextEmoticonsCore__EmojiModel_CanDropMimeData(const TextEmoticonsCore__EmojiModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void TextEmoticonsCore__EmojiModel_OnCanDropMimeData(const TextEmoticonsCore__EmojiModel* self, intptr_t slot);
bool TextEmoticonsCore__EmojiModel_SuperCanDropMimeData(const TextEmoticonsCore__EmojiModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
int TextEmoticonsCore__EmojiModel_SupportedDropActions(const TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_OnSupportedDropActions(const TextEmoticonsCore__EmojiModel* self, intptr_t slot);
int TextEmoticonsCore__EmojiModel_SuperSupportedDropActions(const TextEmoticonsCore__EmojiModel* self);
int TextEmoticonsCore__EmojiModel_SupportedDragActions(const TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_OnSupportedDragActions(const TextEmoticonsCore__EmojiModel* self, intptr_t slot);
int TextEmoticonsCore__EmojiModel_SuperSupportedDragActions(const TextEmoticonsCore__EmojiModel* self);
bool TextEmoticonsCore__EmojiModel_InsertRows(TextEmoticonsCore__EmojiModel* self, int row, int count, const QModelIndex* parent);
void TextEmoticonsCore__EmojiModel_OnInsertRows(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
bool TextEmoticonsCore__EmojiModel_SuperInsertRows(TextEmoticonsCore__EmojiModel* self, int row, int count, const QModelIndex* parent);
bool TextEmoticonsCore__EmojiModel_InsertColumns(TextEmoticonsCore__EmojiModel* self, int column, int count, const QModelIndex* parent);
void TextEmoticonsCore__EmojiModel_OnInsertColumns(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
bool TextEmoticonsCore__EmojiModel_SuperInsertColumns(TextEmoticonsCore__EmojiModel* self, int column, int count, const QModelIndex* parent);
bool TextEmoticonsCore__EmojiModel_RemoveRows(TextEmoticonsCore__EmojiModel* self, int row, int count, const QModelIndex* parent);
void TextEmoticonsCore__EmojiModel_OnRemoveRows(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
bool TextEmoticonsCore__EmojiModel_SuperRemoveRows(TextEmoticonsCore__EmojiModel* self, int row, int count, const QModelIndex* parent);
bool TextEmoticonsCore__EmojiModel_RemoveColumns(TextEmoticonsCore__EmojiModel* self, int column, int count, const QModelIndex* parent);
void TextEmoticonsCore__EmojiModel_OnRemoveColumns(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
bool TextEmoticonsCore__EmojiModel_SuperRemoveColumns(TextEmoticonsCore__EmojiModel* self, int column, int count, const QModelIndex* parent);
bool TextEmoticonsCore__EmojiModel_MoveRows(TextEmoticonsCore__EmojiModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
void TextEmoticonsCore__EmojiModel_OnMoveRows(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
bool TextEmoticonsCore__EmojiModel_SuperMoveRows(TextEmoticonsCore__EmojiModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
bool TextEmoticonsCore__EmojiModel_MoveColumns(TextEmoticonsCore__EmojiModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void TextEmoticonsCore__EmojiModel_OnMoveColumns(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
bool TextEmoticonsCore__EmojiModel_SuperMoveColumns(TextEmoticonsCore__EmojiModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void TextEmoticonsCore__EmojiModel_FetchMore(TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent);
void TextEmoticonsCore__EmojiModel_OnFetchMore(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
void TextEmoticonsCore__EmojiModel_SuperFetchMore(TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent);
bool TextEmoticonsCore__EmojiModel_CanFetchMore(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent);
void TextEmoticonsCore__EmojiModel_OnCanFetchMore(const TextEmoticonsCore__EmojiModel* self, intptr_t slot);
bool TextEmoticonsCore__EmojiModel_SuperCanFetchMore(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent);
void TextEmoticonsCore__EmojiModel_Sort(TextEmoticonsCore__EmojiModel* self, int column, int order);
void TextEmoticonsCore__EmojiModel_OnSort(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
void TextEmoticonsCore__EmojiModel_SuperSort(TextEmoticonsCore__EmojiModel* self, int column, int order);
QModelIndex* TextEmoticonsCore__EmojiModel_Buddy(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index);
void TextEmoticonsCore__EmojiModel_OnBuddy(const TextEmoticonsCore__EmojiModel* self, intptr_t slot);
QModelIndex* TextEmoticonsCore__EmojiModel_SuperBuddy(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index);
libqt_list /* of QModelIndex* */ TextEmoticonsCore__EmojiModel_Match(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
void TextEmoticonsCore__EmojiModel_OnMatch(const TextEmoticonsCore__EmojiModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ TextEmoticonsCore__EmojiModel_SuperMatch(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
QSize* TextEmoticonsCore__EmojiModel_Span(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index);
void TextEmoticonsCore__EmojiModel_OnSpan(const TextEmoticonsCore__EmojiModel* self, intptr_t slot);
QSize* TextEmoticonsCore__EmojiModel_SuperSpan(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index);
libqt_map /* of int to libqt_string */ TextEmoticonsCore__EmojiModel_RoleNames(const TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_OnRoleNames(const TextEmoticonsCore__EmojiModel* self, intptr_t slot);
libqt_map /* of int to libqt_string */ TextEmoticonsCore__EmojiModel_SuperRoleNames(const TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_MultiData(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
void TextEmoticonsCore__EmojiModel_OnMultiData(const TextEmoticonsCore__EmojiModel* self, intptr_t slot);
void TextEmoticonsCore__EmojiModel_SuperMultiData(const TextEmoticonsCore__EmojiModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
bool TextEmoticonsCore__EmojiModel_Submit(TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_OnSubmit(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
bool TextEmoticonsCore__EmojiModel_SuperSubmit(TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_Revert(TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_OnRevert(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
void TextEmoticonsCore__EmojiModel_SuperRevert(TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_ResetInternalData(TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_OnResetInternalData(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
void TextEmoticonsCore__EmojiModel_SuperResetInternalData(TextEmoticonsCore__EmojiModel* self);
bool TextEmoticonsCore__EmojiModel_Event(TextEmoticonsCore__EmojiModel* self, QEvent* event);
void TextEmoticonsCore__EmojiModel_OnEvent(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
bool TextEmoticonsCore__EmojiModel_SuperEvent(TextEmoticonsCore__EmojiModel* self, QEvent* event);
bool TextEmoticonsCore__EmojiModel_EventFilter(TextEmoticonsCore__EmojiModel* self, QObject* watched, QEvent* event);
void TextEmoticonsCore__EmojiModel_OnEventFilter(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
bool TextEmoticonsCore__EmojiModel_SuperEventFilter(TextEmoticonsCore__EmojiModel* self, QObject* watched, QEvent* event);
void TextEmoticonsCore__EmojiModel_TimerEvent(TextEmoticonsCore__EmojiModel* self, QTimerEvent* event);
void TextEmoticonsCore__EmojiModel_OnTimerEvent(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
void TextEmoticonsCore__EmojiModel_SuperTimerEvent(TextEmoticonsCore__EmojiModel* self, QTimerEvent* event);
void TextEmoticonsCore__EmojiModel_ChildEvent(TextEmoticonsCore__EmojiModel* self, QChildEvent* event);
void TextEmoticonsCore__EmojiModel_OnChildEvent(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
void TextEmoticonsCore__EmojiModel_SuperChildEvent(TextEmoticonsCore__EmojiModel* self, QChildEvent* event);
void TextEmoticonsCore__EmojiModel_CustomEvent(TextEmoticonsCore__EmojiModel* self, QEvent* event);
void TextEmoticonsCore__EmojiModel_OnCustomEvent(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
void TextEmoticonsCore__EmojiModel_SuperCustomEvent(TextEmoticonsCore__EmojiModel* self, QEvent* event);
void TextEmoticonsCore__EmojiModel_ConnectNotify(TextEmoticonsCore__EmojiModel* self, const QMetaMethod* signal);
void TextEmoticonsCore__EmojiModel_OnConnectNotify(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
void TextEmoticonsCore__EmojiModel_SuperConnectNotify(TextEmoticonsCore__EmojiModel* self, const QMetaMethod* signal);
void TextEmoticonsCore__EmojiModel_DisconnectNotify(TextEmoticonsCore__EmojiModel* self, const QMetaMethod* signal);
void TextEmoticonsCore__EmojiModel_OnDisconnectNotify(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
void TextEmoticonsCore__EmojiModel_SuperDisconnectNotify(TextEmoticonsCore__EmojiModel* self, const QMetaMethod* signal);
QModelIndex* TextEmoticonsCore__EmojiModel_CreateIndex(const TextEmoticonsCore__EmojiModel* self, int row, int column);
void TextEmoticonsCore__EmojiModel_OnCreateIndex(const TextEmoticonsCore__EmojiModel* self, intptr_t slot);
QModelIndex* TextEmoticonsCore__EmojiModel_SuperCreateIndex(const TextEmoticonsCore__EmojiModel* self, int row, int column);
void TextEmoticonsCore__EmojiModel_EncodeData(const TextEmoticonsCore__EmojiModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
void TextEmoticonsCore__EmojiModel_OnEncodeData(const TextEmoticonsCore__EmojiModel* self, intptr_t slot);
void TextEmoticonsCore__EmojiModel_SuperEncodeData(const TextEmoticonsCore__EmojiModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
bool TextEmoticonsCore__EmojiModel_DecodeData(TextEmoticonsCore__EmojiModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void TextEmoticonsCore__EmojiModel_OnDecodeData(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
bool TextEmoticonsCore__EmojiModel_SuperDecodeData(TextEmoticonsCore__EmojiModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
void TextEmoticonsCore__EmojiModel_BeginInsertRows(TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent, int first, int last);
void TextEmoticonsCore__EmojiModel_OnBeginInsertRows(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
void TextEmoticonsCore__EmojiModel_SuperBeginInsertRows(TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent, int first, int last);
void TextEmoticonsCore__EmojiModel_EndInsertRows(TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_OnEndInsertRows(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
void TextEmoticonsCore__EmojiModel_SuperEndInsertRows(TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_BeginRemoveRows(TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent, int first, int last);
void TextEmoticonsCore__EmojiModel_OnBeginRemoveRows(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
void TextEmoticonsCore__EmojiModel_SuperBeginRemoveRows(TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent, int first, int last);
void TextEmoticonsCore__EmojiModel_EndRemoveRows(TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_OnEndRemoveRows(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
void TextEmoticonsCore__EmojiModel_SuperEndRemoveRows(TextEmoticonsCore__EmojiModel* self);
bool TextEmoticonsCore__EmojiModel_BeginMoveRows(TextEmoticonsCore__EmojiModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void TextEmoticonsCore__EmojiModel_OnBeginMoveRows(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
bool TextEmoticonsCore__EmojiModel_SuperBeginMoveRows(TextEmoticonsCore__EmojiModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
void TextEmoticonsCore__EmojiModel_EndMoveRows(TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_OnEndMoveRows(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
void TextEmoticonsCore__EmojiModel_SuperEndMoveRows(TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_BeginInsertColumns(TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent, int first, int last);
void TextEmoticonsCore__EmojiModel_OnBeginInsertColumns(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
void TextEmoticonsCore__EmojiModel_SuperBeginInsertColumns(TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent, int first, int last);
void TextEmoticonsCore__EmojiModel_EndInsertColumns(TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_OnEndInsertColumns(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
void TextEmoticonsCore__EmojiModel_SuperEndInsertColumns(TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_BeginRemoveColumns(TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent, int first, int last);
void TextEmoticonsCore__EmojiModel_OnBeginRemoveColumns(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
void TextEmoticonsCore__EmojiModel_SuperBeginRemoveColumns(TextEmoticonsCore__EmojiModel* self, const QModelIndex* parent, int first, int last);
void TextEmoticonsCore__EmojiModel_EndRemoveColumns(TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_OnEndRemoveColumns(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
void TextEmoticonsCore__EmojiModel_SuperEndRemoveColumns(TextEmoticonsCore__EmojiModel* self);
bool TextEmoticonsCore__EmojiModel_BeginMoveColumns(TextEmoticonsCore__EmojiModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void TextEmoticonsCore__EmojiModel_OnBeginMoveColumns(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
bool TextEmoticonsCore__EmojiModel_SuperBeginMoveColumns(TextEmoticonsCore__EmojiModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
void TextEmoticonsCore__EmojiModel_EndMoveColumns(TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_OnEndMoveColumns(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
void TextEmoticonsCore__EmojiModel_SuperEndMoveColumns(TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_BeginResetModel(TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_OnBeginResetModel(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
void TextEmoticonsCore__EmojiModel_SuperBeginResetModel(TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_EndResetModel(TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_OnEndResetModel(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
void TextEmoticonsCore__EmojiModel_SuperEndResetModel(TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_ChangePersistentIndex(TextEmoticonsCore__EmojiModel* self, const QModelIndex* from, const QModelIndex* to);
void TextEmoticonsCore__EmojiModel_OnChangePersistentIndex(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
void TextEmoticonsCore__EmojiModel_SuperChangePersistentIndex(TextEmoticonsCore__EmojiModel* self, const QModelIndex* from, const QModelIndex* to);
void TextEmoticonsCore__EmojiModel_ChangePersistentIndexList(TextEmoticonsCore__EmojiModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
void TextEmoticonsCore__EmojiModel_OnChangePersistentIndexList(TextEmoticonsCore__EmojiModel* self, intptr_t slot);
void TextEmoticonsCore__EmojiModel_SuperChangePersistentIndexList(TextEmoticonsCore__EmojiModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
libqt_list /* of QModelIndex* */ TextEmoticonsCore__EmojiModel_PersistentIndexList(const TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_OnPersistentIndexList(const TextEmoticonsCore__EmojiModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ TextEmoticonsCore__EmojiModel_SuperPersistentIndexList(const TextEmoticonsCore__EmojiModel* self);
QObject* TextEmoticonsCore__EmojiModel_Sender(const TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_OnSender(const TextEmoticonsCore__EmojiModel* self, intptr_t slot);
QObject* TextEmoticonsCore__EmojiModel_SuperSender(const TextEmoticonsCore__EmojiModel* self);
int TextEmoticonsCore__EmojiModel_SenderSignalIndex(const TextEmoticonsCore__EmojiModel* self);
void TextEmoticonsCore__EmojiModel_OnSenderSignalIndex(const TextEmoticonsCore__EmojiModel* self, intptr_t slot);
int TextEmoticonsCore__EmojiModel_SuperSenderSignalIndex(const TextEmoticonsCore__EmojiModel* self);
int TextEmoticonsCore__EmojiModel_Receivers(const TextEmoticonsCore__EmojiModel* self, const char* signal);
void TextEmoticonsCore__EmojiModel_OnReceivers(const TextEmoticonsCore__EmojiModel* self, intptr_t slot);
int TextEmoticonsCore__EmojiModel_SuperReceivers(const TextEmoticonsCore__EmojiModel* self, const char* signal);
bool TextEmoticonsCore__EmojiModel_IsSignalConnected(const TextEmoticonsCore__EmojiModel* self, const QMetaMethod* signal);
void TextEmoticonsCore__EmojiModel_OnIsSignalConnected(const TextEmoticonsCore__EmojiModel* self, intptr_t slot);
bool TextEmoticonsCore__EmojiModel_SuperIsSignalConnected(const TextEmoticonsCore__EmojiModel* self, const QMetaMethod* signal);
void TextEmoticonsCore__EmojiModel_Delete(TextEmoticonsCore__EmojiModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
