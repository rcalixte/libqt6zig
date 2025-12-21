#pragma once
#ifndef SRC_DESIGNERC_LIBABSTRACTFORMWINDOW_H
#define SRC_DESIGNERC_LIBABSTRACTFORMWINDOW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDesignerFormEditorInterface QDesignerFormEditorInterface;
typedef struct QDesignerFormWindowCursorInterface QDesignerFormWindowCursorInterface;
typedef struct QDesignerFormWindowInterface QDesignerFormWindowInterface;
typedef struct QDesignerFormWindowToolInterface QDesignerFormWindowToolInterface;
typedef struct QDir QDir;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPoint QPoint;
typedef struct QUndoStack QUndoStack;
typedef struct QWidget QWidget;
#endif

QMetaObject* QDesignerFormWindowInterface_MetaObject(const QDesignerFormWindowInterface* self);
void* QDesignerFormWindowInterface_Metacast(QDesignerFormWindowInterface* self, const char* param1);
int QDesignerFormWindowInterface_Metacall(QDesignerFormWindowInterface* self, int param1, int param2, void** param3);
libqt_string QDesignerFormWindowInterface_FileName(const QDesignerFormWindowInterface* self);
QDir* QDesignerFormWindowInterface_AbsoluteDir(const QDesignerFormWindowInterface* self);
libqt_string QDesignerFormWindowInterface_Contents(const QDesignerFormWindowInterface* self);
libqt_list /* of libqt_string */ QDesignerFormWindowInterface_CheckContents(const QDesignerFormWindowInterface* self);
int QDesignerFormWindowInterface_Features(const QDesignerFormWindowInterface* self);
bool QDesignerFormWindowInterface_HasFeature(const QDesignerFormWindowInterface* self, int f);
libqt_string QDesignerFormWindowInterface_Author(const QDesignerFormWindowInterface* self);
void QDesignerFormWindowInterface_SetAuthor(QDesignerFormWindowInterface* self, const libqt_string author);
libqt_string QDesignerFormWindowInterface_Comment(const QDesignerFormWindowInterface* self);
void QDesignerFormWindowInterface_SetComment(QDesignerFormWindowInterface* self, const libqt_string comment);
void QDesignerFormWindowInterface_LayoutDefault(QDesignerFormWindowInterface* self, int* margin, int* spacing);
void QDesignerFormWindowInterface_SetLayoutDefault(QDesignerFormWindowInterface* self, int margin, int spacing);
void QDesignerFormWindowInterface_SetLayoutFunction(QDesignerFormWindowInterface* self, const libqt_string margin, const libqt_string spacing);
libqt_string QDesignerFormWindowInterface_PixmapFunction(const QDesignerFormWindowInterface* self);
void QDesignerFormWindowInterface_SetPixmapFunction(QDesignerFormWindowInterface* self, const libqt_string pixmapFunction);
libqt_string QDesignerFormWindowInterface_ExportMacro(const QDesignerFormWindowInterface* self);
void QDesignerFormWindowInterface_SetExportMacro(QDesignerFormWindowInterface* self, const libqt_string exportMacro);
libqt_list /* of libqt_string */ QDesignerFormWindowInterface_IncludeHints(const QDesignerFormWindowInterface* self);
void QDesignerFormWindowInterface_SetIncludeHints(QDesignerFormWindowInterface* self, const libqt_list /* of libqt_string */ includeHints);
int QDesignerFormWindowInterface_ResourceFileSaveMode(const QDesignerFormWindowInterface* self);
void QDesignerFormWindowInterface_SetResourceFileSaveMode(QDesignerFormWindowInterface* self, int behaviour);
libqt_list /* of libqt_string */ QDesignerFormWindowInterface_ActiveResourceFilePaths(const QDesignerFormWindowInterface* self);
QDesignerFormEditorInterface* QDesignerFormWindowInterface_Core(const QDesignerFormWindowInterface* self);
QDesignerFormWindowCursorInterface* QDesignerFormWindowInterface_Cursor(const QDesignerFormWindowInterface* self);
int QDesignerFormWindowInterface_ToolCount(const QDesignerFormWindowInterface* self);
int QDesignerFormWindowInterface_CurrentTool(const QDesignerFormWindowInterface* self);
void QDesignerFormWindowInterface_SetCurrentTool(QDesignerFormWindowInterface* self, int index);
QDesignerFormWindowToolInterface* QDesignerFormWindowInterface_Tool(const QDesignerFormWindowInterface* self, int index);
void QDesignerFormWindowInterface_RegisterTool(QDesignerFormWindowInterface* self, QDesignerFormWindowToolInterface* tool);
QPoint* QDesignerFormWindowInterface_Grid(const QDesignerFormWindowInterface* self);
QWidget* QDesignerFormWindowInterface_MainContainer(const QDesignerFormWindowInterface* self);
void QDesignerFormWindowInterface_SetMainContainer(QDesignerFormWindowInterface* self, QWidget* mainContainer);
QWidget* QDesignerFormWindowInterface_FormContainer(const QDesignerFormWindowInterface* self);
bool QDesignerFormWindowInterface_IsManaged(const QDesignerFormWindowInterface* self, QWidget* widget);
bool QDesignerFormWindowInterface_IsDirty(const QDesignerFormWindowInterface* self);
QDesignerFormWindowInterface* QDesignerFormWindowInterface_FindFormWindow(QWidget* w);
QDesignerFormWindowInterface* QDesignerFormWindowInterface_FindFormWindow2(QObject* obj);
QUndoStack* QDesignerFormWindowInterface_CommandHistory(const QDesignerFormWindowInterface* self);
void QDesignerFormWindowInterface_BeginCommand(QDesignerFormWindowInterface* self, const libqt_string description);
void QDesignerFormWindowInterface_EndCommand(QDesignerFormWindowInterface* self);
void QDesignerFormWindowInterface_SimplifySelection(const QDesignerFormWindowInterface* self, libqt_list /* of QWidget* */ widgets);
void QDesignerFormWindowInterface_EmitSelectionChanged(QDesignerFormWindowInterface* self);
libqt_list /* of libqt_string */ QDesignerFormWindowInterface_ResourceFiles(const QDesignerFormWindowInterface* self);
void QDesignerFormWindowInterface_AddResourceFile(QDesignerFormWindowInterface* self, const libqt_string path);
void QDesignerFormWindowInterface_RemoveResourceFile(QDesignerFormWindowInterface* self, const libqt_string path);
void QDesignerFormWindowInterface_EnsureUniqueObjectName(QDesignerFormWindowInterface* self, QObject* object);
void QDesignerFormWindowInterface_ManageWidget(QDesignerFormWindowInterface* self, QWidget* widget);
void QDesignerFormWindowInterface_UnmanageWidget(QDesignerFormWindowInterface* self, QWidget* widget);
void QDesignerFormWindowInterface_SetFeatures(QDesignerFormWindowInterface* self, int f);
void QDesignerFormWindowInterface_SetDirty(QDesignerFormWindowInterface* self, bool dirty);
void QDesignerFormWindowInterface_ClearSelection(QDesignerFormWindowInterface* self, bool changePropertyDisplay);
void QDesignerFormWindowInterface_SelectWidget(QDesignerFormWindowInterface* self, QWidget* w, bool selectVal);
void QDesignerFormWindowInterface_SetGrid(QDesignerFormWindowInterface* self, const QPoint* grid);
void QDesignerFormWindowInterface_SetFileName(QDesignerFormWindowInterface* self, const libqt_string fileName);
bool QDesignerFormWindowInterface_SetContents2(QDesignerFormWindowInterface* self, const libqt_string contents);
void QDesignerFormWindowInterface_EditWidgets(QDesignerFormWindowInterface* self);
void QDesignerFormWindowInterface_ActivateResourceFilePaths(QDesignerFormWindowInterface* self, const libqt_list /* of libqt_string */ paths);
void QDesignerFormWindowInterface_MainContainerChanged(QDesignerFormWindowInterface* self, QWidget* mainContainer);
void QDesignerFormWindowInterface_Connect_MainContainerChanged(QDesignerFormWindowInterface* self, intptr_t slot);
void QDesignerFormWindowInterface_ToolChanged(QDesignerFormWindowInterface* self, int toolIndex);
void QDesignerFormWindowInterface_Connect_ToolChanged(QDesignerFormWindowInterface* self, intptr_t slot);
void QDesignerFormWindowInterface_FileNameChanged(QDesignerFormWindowInterface* self, const libqt_string fileName);
void QDesignerFormWindowInterface_Connect_FileNameChanged(QDesignerFormWindowInterface* self, intptr_t slot);
void QDesignerFormWindowInterface_FeatureChanged(QDesignerFormWindowInterface* self, int f);
void QDesignerFormWindowInterface_Connect_FeatureChanged(QDesignerFormWindowInterface* self, intptr_t slot);
void QDesignerFormWindowInterface_SelectionChanged(QDesignerFormWindowInterface* self);
void QDesignerFormWindowInterface_Connect_SelectionChanged(QDesignerFormWindowInterface* self, intptr_t slot);
void QDesignerFormWindowInterface_GeometryChanged(QDesignerFormWindowInterface* self);
void QDesignerFormWindowInterface_Connect_GeometryChanged(QDesignerFormWindowInterface* self, intptr_t slot);
void QDesignerFormWindowInterface_ResourceFilesChanged(QDesignerFormWindowInterface* self);
void QDesignerFormWindowInterface_Connect_ResourceFilesChanged(QDesignerFormWindowInterface* self, intptr_t slot);
void QDesignerFormWindowInterface_WidgetManaged(QDesignerFormWindowInterface* self, QWidget* widget);
void QDesignerFormWindowInterface_Connect_WidgetManaged(QDesignerFormWindowInterface* self, intptr_t slot);
void QDesignerFormWindowInterface_WidgetUnmanaged(QDesignerFormWindowInterface* self, QWidget* widget);
void QDesignerFormWindowInterface_Connect_WidgetUnmanaged(QDesignerFormWindowInterface* self, intptr_t slot);
void QDesignerFormWindowInterface_AboutToUnmanageWidget(QDesignerFormWindowInterface* self, QWidget* widget);
void QDesignerFormWindowInterface_Connect_AboutToUnmanageWidget(QDesignerFormWindowInterface* self, intptr_t slot);
void QDesignerFormWindowInterface_Activated(QDesignerFormWindowInterface* self, QWidget* widget);
void QDesignerFormWindowInterface_Connect_Activated(QDesignerFormWindowInterface* self, intptr_t slot);
void QDesignerFormWindowInterface_Changed(QDesignerFormWindowInterface* self);
void QDesignerFormWindowInterface_Connect_Changed(QDesignerFormWindowInterface* self, intptr_t slot);
void QDesignerFormWindowInterface_WidgetRemoved(QDesignerFormWindowInterface* self, QWidget* w);
void QDesignerFormWindowInterface_Connect_WidgetRemoved(QDesignerFormWindowInterface* self, intptr_t slot);
void QDesignerFormWindowInterface_ObjectRemoved(QDesignerFormWindowInterface* self, QObject* o);
void QDesignerFormWindowInterface_Connect_ObjectRemoved(QDesignerFormWindowInterface* self, intptr_t slot);
void QDesignerFormWindowInterface_ActivateResourceFilePaths2(QDesignerFormWindowInterface* self, const libqt_list /* of libqt_string */ paths, int* errorCount);
void QDesignerFormWindowInterface_Delete(QDesignerFormWindowInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
