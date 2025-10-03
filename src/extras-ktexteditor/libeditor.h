#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBEDITOR_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBEDITOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__Repository)
typedef KSyntaxHighlighting::Repository KSyntaxHighlighting__Repository;
#endif
typedef KSyntaxHighlighting::Theme KSyntaxHighlighting__Theme;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Application)
typedef KTextEditor::Application KTextEditor__Application;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Command)
typedef KTextEditor::Command KTextEditor__Command;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__ConfigPage)
typedef KTextEditor::ConfigPage KTextEditor__ConfigPage;
#endif
typedef KTextEditor::Document KTextEditor__Document;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Editor)
typedef KTextEditor::Editor KTextEditor__Editor;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__View)
typedef KTextEditor::View KTextEditor__View;
#endif
#else
typedef struct KAboutData KAboutData;
typedef struct KSyntaxHighlighting__Repository KSyntaxHighlighting__Repository;
typedef struct KSyntaxHighlighting__Theme KSyntaxHighlighting__Theme;
typedef struct KTextEditor__Application KTextEditor__Application;
typedef struct KTextEditor__Command KTextEditor__Command;
typedef struct KTextEditor__ConfigPage KTextEditor__ConfigPage;
typedef struct KTextEditor__Document KTextEditor__Document;
typedef struct KTextEditor__Editor KTextEditor__Editor;
typedef struct KTextEditor__View KTextEditor__View;
typedef struct QFont QFont;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QWidget QWidget;
#endif

QMetaObject* KTextEditor__Editor_MetaObject(const KTextEditor__Editor* self);
void* KTextEditor__Editor_Metacast(KTextEditor__Editor* self, const char* param1);
int KTextEditor__Editor_Metacall(KTextEditor__Editor* self, int param1, int param2, void** param3);
libqt_string KTextEditor__Editor_Tr(const char* s);
KTextEditor__Editor* KTextEditor__Editor_Instance();
void KTextEditor__Editor_SetApplication(KTextEditor__Editor* self, KTextEditor__Application* application);
KTextEditor__Application* KTextEditor__Editor_Application(const KTextEditor__Editor* self);
KTextEditor__Document* KTextEditor__Editor_CreateDocument(KTextEditor__Editor* self, QObject* parent);
libqt_list /* of KTextEditor__Document* */ KTextEditor__Editor_Documents(KTextEditor__Editor* self);
void KTextEditor__Editor_DocumentCreated(KTextEditor__Editor* self, KTextEditor__Editor* editor, KTextEditor__Document* document);
void KTextEditor__Editor_Connect_DocumentCreated(KTextEditor__Editor* self, intptr_t slot);
KAboutData* KTextEditor__Editor_AboutData(const KTextEditor__Editor* self);
libqt_string KTextEditor__Editor_DefaultEncoding(const KTextEditor__Editor* self);
void KTextEditor__Editor_ConfigDialog(KTextEditor__Editor* self, QWidget* parent);
int KTextEditor__Editor_ConfigPages(const KTextEditor__Editor* self);
KTextEditor__ConfigPage* KTextEditor__Editor_ConfigPage(KTextEditor__Editor* self, int number, QWidget* parent);
void KTextEditor__Editor_ConfigChanged(KTextEditor__Editor* self, KTextEditor__Editor* editor);
void KTextEditor__Editor_Connect_ConfigChanged(KTextEditor__Editor* self, intptr_t slot);
QFont* KTextEditor__Editor_Font(const KTextEditor__Editor* self);
KSyntaxHighlighting__Theme* KTextEditor__Editor_Theme(const KTextEditor__Editor* self);
KSyntaxHighlighting__Repository* KTextEditor__Editor_Repository(const KTextEditor__Editor* self);
void KTextEditor__Editor_RepositoryReloaded(KTextEditor__Editor* self, KTextEditor__Editor* editor);
void KTextEditor__Editor_Connect_RepositoryReloaded(KTextEditor__Editor* self, intptr_t slot);
KTextEditor__Command* KTextEditor__Editor_QueryCommand(const KTextEditor__Editor* self, const libqt_string cmd);
libqt_list /* of KTextEditor__Command* */ KTextEditor__Editor_Commands(const KTextEditor__Editor* self);
libqt_list /* of libqt_string */ KTextEditor__Editor_CommandList(const KTextEditor__Editor* self);
bool KTextEditor__Editor_UnregisterVariable(KTextEditor__Editor* self, const libqt_string variableName);
bool KTextEditor__Editor_ExpandVariable(const KTextEditor__Editor* self, const libqt_string variable, KTextEditor__View* view, libqt_string output);
libqt_string KTextEditor__Editor_ExpandText(const KTextEditor__Editor* self, const libqt_string text, KTextEditor__View* view);
void KTextEditor__Editor_AddVariableExpansion(const KTextEditor__Editor* self, const libqt_list /* of QWidget* */ widgets);
libqt_string KTextEditor__Editor_Tr2(const char* s, const char* c);
libqt_string KTextEditor__Editor_Tr3(const char* s, const char* c, int n);
void KTextEditor__Editor_AddVariableExpansion2(const KTextEditor__Editor* self, const libqt_list /* of QWidget* */ widgets, const libqt_list /* of libqt_string */ variables);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
