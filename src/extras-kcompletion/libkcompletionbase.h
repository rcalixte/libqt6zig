#pragma once
#ifndef SRC_EXTRAS_KCOMPLETIONC_LIBKCOMPLETIONBASE_H
#define SRC_EXTRAS_KCOMPLETIONC_LIBKCOMPLETIONBASE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KCompletion KCompletion;
typedef struct KCompletionBase KCompletionBase;
typedef struct QKeySequence QKeySequence;
#endif

KCompletionBase* KCompletionBase_new();
KCompletion* KCompletionBase_CompletionObject(KCompletionBase* self);
void KCompletionBase_SetCompletionObject(KCompletionBase* self, KCompletion* completionObject, bool handleSignals);
void KCompletionBase_SetHandleSignals(KCompletionBase* self, bool handle);
bool KCompletionBase_IsCompletionObjectAutoDeleted(const KCompletionBase* self);
void KCompletionBase_SetAutoDeleteCompletionObject(KCompletionBase* self, bool autoDelete);
void KCompletionBase_SetEnableSignals(KCompletionBase* self, bool enable);
bool KCompletionBase_HandleSignals(const KCompletionBase* self);
bool KCompletionBase_EmitSignals(const KCompletionBase* self);
void KCompletionBase_SetEmitSignals(KCompletionBase* self, bool emitRotationSignals);
void KCompletionBase_SetCompletionMode(KCompletionBase* self, int mode);
int KCompletionBase_CompletionMode(const KCompletionBase* self);
bool KCompletionBase_SetKeyBinding(KCompletionBase* self, int item, const libqt_list /* of QKeySequence* */ key);
libqt_list /* of QKeySequence* */ KCompletionBase_KeyBinding(const KCompletionBase* self, int item);
void KCompletionBase_UseGlobalKeyBindings(KCompletionBase* self);
void KCompletionBase_SetCompletedText(KCompletionBase* self, const libqt_string text);
void KCompletionBase_SetCompletedItems(KCompletionBase* self, const libqt_list /* of libqt_string */ items, bool autoSuggest);
KCompletion* KCompletionBase_CompObj(const KCompletionBase* self);
void KCompletionBase_VirtualHook(KCompletionBase* self, int id, void* data);
KCompletion* KCompletionBase_CompletionObject1(KCompletionBase* self, bool handleSignals);
void KCompletionBase_OnSetCompletionObject(KCompletionBase* self, intptr_t slot);
void KCompletionBase_QBaseSetCompletionObject(KCompletionBase* self, KCompletion* completionObject, bool handleSignals);
void KCompletionBase_OnSetHandleSignals(KCompletionBase* self, intptr_t slot);
void KCompletionBase_QBaseSetHandleSignals(KCompletionBase* self, bool handle);
void KCompletionBase_OnSetCompletionMode(KCompletionBase* self, intptr_t slot);
void KCompletionBase_QBaseSetCompletionMode(KCompletionBase* self, int mode);
void KCompletionBase_OnSetCompletedText(KCompletionBase* self, intptr_t slot);
void KCompletionBase_QBaseSetCompletedText(KCompletionBase* self, const libqt_string text);
void KCompletionBase_OnSetCompletedItems(KCompletionBase* self, intptr_t slot);
void KCompletionBase_QBaseSetCompletedItems(KCompletionBase* self, const libqt_list /* of libqt_string */ items, bool autoSuggest);
void KCompletionBase_OnVirtualHook(KCompletionBase* self, intptr_t slot);
void KCompletionBase_QBaseVirtualHook(KCompletionBase* self, int id, void* data);
libqt_map /* of int to libqt_list  of QKeySequence*  */ KCompletionBase_KeyBindingMap(const KCompletionBase* self);
void KCompletionBase_OnKeyBindingMap(const KCompletionBase* self, intptr_t slot);
libqt_map /* of int to libqt_list  of QKeySequence*  */ KCompletionBase_QBaseKeyBindingMap(const KCompletionBase* self);
void KCompletionBase_SetKeyBindingMap(KCompletionBase* self, libqt_map /* of int to libqt_list  of QKeySequence*  */ keyBindingMap);
void KCompletionBase_OnSetKeyBindingMap(KCompletionBase* self, intptr_t slot);
void KCompletionBase_QBaseSetKeyBindingMap(KCompletionBase* self, libqt_map /* of int to libqt_list  of QKeySequence*  */ keyBindingMap);
void KCompletionBase_SetDelegate(KCompletionBase* self, KCompletionBase* delegate);
void KCompletionBase_OnSetDelegate(KCompletionBase* self, intptr_t slot);
void KCompletionBase_QBaseSetDelegate(KCompletionBase* self, KCompletionBase* delegate);
KCompletionBase* KCompletionBase_Delegate(const KCompletionBase* self);
void KCompletionBase_OnDelegate(const KCompletionBase* self, intptr_t slot);
KCompletionBase* KCompletionBase_QBaseDelegate(const KCompletionBase* self);
void KCompletionBase_Delete(KCompletionBase* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
