#include <QDesignerFormEditorInterface>
#include <QDesignerFormWindowCursorInterface>
#include <QDesignerFormWindowInterface>
#include <QDesignerFormWindowToolInterface>
#include <QDir>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPaintDevice>
#include <QPoint>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUndoStack>
#include <QWidget>
#include <abstractformwindow.h>
#include "libabstractformwindow.h"
#include "libabstractformwindow.hxx"

QMetaObject* QDesignerFormWindowInterface_MetaObject(const QDesignerFormWindowInterface* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDesignerFormWindowInterface_Metacast(QDesignerFormWindowInterface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDesignerFormWindowInterface_Metacall(QDesignerFormWindowInterface* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDesignerFormWindowInterface_FileName(const QDesignerFormWindowInterface* self) {
    QString _ret = self->fileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QDir* QDesignerFormWindowInterface_AbsoluteDir(const QDesignerFormWindowInterface* self) {
    return new QDir(self->absoluteDir());
}

libqt_string QDesignerFormWindowInterface_Contents(const QDesignerFormWindowInterface* self) {
    QString _ret = self->contents();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QDesignerFormWindowInterface_CheckContents(const QDesignerFormWindowInterface* self) {
    QList<QString> _ret = self->checkContents();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QDesignerFormWindowInterface_Features(const QDesignerFormWindowInterface* self) {
    return static_cast<int>(self->features());
}

bool QDesignerFormWindowInterface_HasFeature(const QDesignerFormWindowInterface* self, int f) {
    return self->hasFeature(static_cast<QDesignerFormWindowInterface::Feature>(f));
}

libqt_string QDesignerFormWindowInterface_Author(const QDesignerFormWindowInterface* self) {
    QString _ret = self->author();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDesignerFormWindowInterface_SetAuthor(QDesignerFormWindowInterface* self, const libqt_string author) {
    QString author_QString = QString::fromUtf8(author.data, author.len);
    self->setAuthor(author_QString);
}

libqt_string QDesignerFormWindowInterface_Comment(const QDesignerFormWindowInterface* self) {
    QString _ret = self->comment();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDesignerFormWindowInterface_SetComment(QDesignerFormWindowInterface* self, const libqt_string comment) {
    QString comment_QString = QString::fromUtf8(comment.data, comment.len);
    self->setComment(comment_QString);
}

void QDesignerFormWindowInterface_LayoutDefault(QDesignerFormWindowInterface* self, int* margin, int* spacing) {
    self->layoutDefault(static_cast<int*>(margin), static_cast<int*>(spacing));
}

void QDesignerFormWindowInterface_SetLayoutDefault(QDesignerFormWindowInterface* self, int margin, int spacing) {
    self->setLayoutDefault(static_cast<int>(margin), static_cast<int>(spacing));
}

void QDesignerFormWindowInterface_SetLayoutFunction(QDesignerFormWindowInterface* self, const libqt_string margin, const libqt_string spacing) {
    QString margin_QString = QString::fromUtf8(margin.data, margin.len);
    QString spacing_QString = QString::fromUtf8(spacing.data, spacing.len);
    self->setLayoutFunction(margin_QString, spacing_QString);
}

libqt_string QDesignerFormWindowInterface_PixmapFunction(const QDesignerFormWindowInterface* self) {
    QString _ret = self->pixmapFunction();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDesignerFormWindowInterface_SetPixmapFunction(QDesignerFormWindowInterface* self, const libqt_string pixmapFunction) {
    QString pixmapFunction_QString = QString::fromUtf8(pixmapFunction.data, pixmapFunction.len);
    self->setPixmapFunction(pixmapFunction_QString);
}

libqt_string QDesignerFormWindowInterface_ExportMacro(const QDesignerFormWindowInterface* self) {
    QString _ret = self->exportMacro();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDesignerFormWindowInterface_SetExportMacro(QDesignerFormWindowInterface* self, const libqt_string exportMacro) {
    QString exportMacro_QString = QString::fromUtf8(exportMacro.data, exportMacro.len);
    self->setExportMacro(exportMacro_QString);
}

libqt_list /* of libqt_string */ QDesignerFormWindowInterface_IncludeHints(const QDesignerFormWindowInterface* self) {
    QList<QString> _ret = self->includeHints();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QDesignerFormWindowInterface_SetIncludeHints(QDesignerFormWindowInterface* self, const libqt_list /* of libqt_string */ includeHints) {
    QList<QString> includeHints_QList;
    includeHints_QList.reserve(includeHints.len);
    libqt_string* includeHints_arr = static_cast<libqt_string*>(includeHints.data);
    for (size_t i = 0; i < includeHints.len; ++i) {
        QString includeHints_arr_i_QString = QString::fromUtf8(includeHints_arr[i].data, includeHints_arr[i].len);
        includeHints_QList.push_back(includeHints_arr_i_QString);
    }
    self->setIncludeHints(includeHints_QList);
}

int QDesignerFormWindowInterface_ResourceFileSaveMode(const QDesignerFormWindowInterface* self) {
    return static_cast<int>(self->resourceFileSaveMode());
}

void QDesignerFormWindowInterface_SetResourceFileSaveMode(QDesignerFormWindowInterface* self, int behaviour) {
    self->setResourceFileSaveMode(static_cast<QDesignerFormWindowInterface::ResourceFileSaveMode>(behaviour));
}

libqt_list /* of libqt_string */ QDesignerFormWindowInterface_ActiveResourceFilePaths(const QDesignerFormWindowInterface* self) {
    QList<QString> _ret = self->activeResourceFilePaths();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QDesignerFormEditorInterface* QDesignerFormWindowInterface_Core(const QDesignerFormWindowInterface* self) {
    return self->core();
}

QDesignerFormWindowCursorInterface* QDesignerFormWindowInterface_Cursor(const QDesignerFormWindowInterface* self) {
    return self->cursor();
}

int QDesignerFormWindowInterface_ToolCount(const QDesignerFormWindowInterface* self) {
    return self->toolCount();
}

int QDesignerFormWindowInterface_CurrentTool(const QDesignerFormWindowInterface* self) {
    return self->currentTool();
}

void QDesignerFormWindowInterface_SetCurrentTool(QDesignerFormWindowInterface* self, int index) {
    self->setCurrentTool(static_cast<int>(index));
}

QDesignerFormWindowToolInterface* QDesignerFormWindowInterface_Tool(const QDesignerFormWindowInterface* self, int index) {
    return self->tool(static_cast<int>(index));
}

void QDesignerFormWindowInterface_RegisterTool(QDesignerFormWindowInterface* self, QDesignerFormWindowToolInterface* tool) {
    self->registerTool(tool);
}

QPoint* QDesignerFormWindowInterface_Grid(const QDesignerFormWindowInterface* self) {
    return new QPoint(self->grid());
}

QWidget* QDesignerFormWindowInterface_MainContainer(const QDesignerFormWindowInterface* self) {
    return self->mainContainer();
}

void QDesignerFormWindowInterface_SetMainContainer(QDesignerFormWindowInterface* self, QWidget* mainContainer) {
    self->setMainContainer(mainContainer);
}

QWidget* QDesignerFormWindowInterface_FormContainer(const QDesignerFormWindowInterface* self) {
    return self->formContainer();
}

bool QDesignerFormWindowInterface_IsManaged(const QDesignerFormWindowInterface* self, QWidget* widget) {
    return self->isManaged(widget);
}

bool QDesignerFormWindowInterface_IsDirty(const QDesignerFormWindowInterface* self) {
    return self->isDirty();
}

QDesignerFormWindowInterface* QDesignerFormWindowInterface_FindFormWindow(QWidget* w) {
    return QDesignerFormWindowInterface::findFormWindow(w);
}

QDesignerFormWindowInterface* QDesignerFormWindowInterface_FindFormWindow2(QObject* obj) {
    return QDesignerFormWindowInterface::findFormWindow(obj);
}

QUndoStack* QDesignerFormWindowInterface_CommandHistory(const QDesignerFormWindowInterface* self) {
    return self->commandHistory();
}

void QDesignerFormWindowInterface_BeginCommand(QDesignerFormWindowInterface* self, const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->beginCommand(description_QString);
}

void QDesignerFormWindowInterface_EndCommand(QDesignerFormWindowInterface* self) {
    self->endCommand();
}

void QDesignerFormWindowInterface_SimplifySelection(const QDesignerFormWindowInterface* self, libqt_list /* of QWidget* */ widgets) {
    QList<QWidget*> widgets_QList;
    widgets_QList.reserve(widgets.len);
    QWidget** widgets_arr = static_cast<QWidget**>(widgets.data);
    for (size_t i = 0; i < widgets.len; ++i) {
        widgets_QList.push_back(widgets_arr[i]);
    }
    self->simplifySelection(&widgets_QList);
}

void QDesignerFormWindowInterface_EmitSelectionChanged(QDesignerFormWindowInterface* self) {
    self->emitSelectionChanged();
}

libqt_list /* of libqt_string */ QDesignerFormWindowInterface_ResourceFiles(const QDesignerFormWindowInterface* self) {
    QList<QString> _ret = self->resourceFiles();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QDesignerFormWindowInterface_AddResourceFile(QDesignerFormWindowInterface* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->addResourceFile(path_QString);
}

void QDesignerFormWindowInterface_RemoveResourceFile(QDesignerFormWindowInterface* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->removeResourceFile(path_QString);
}

void QDesignerFormWindowInterface_EnsureUniqueObjectName(QDesignerFormWindowInterface* self, QObject* object) {
    self->ensureUniqueObjectName(object);
}

void QDesignerFormWindowInterface_ManageWidget(QDesignerFormWindowInterface* self, QWidget* widget) {
    self->manageWidget(widget);
}

void QDesignerFormWindowInterface_UnmanageWidget(QDesignerFormWindowInterface* self, QWidget* widget) {
    self->unmanageWidget(widget);
}

void QDesignerFormWindowInterface_SetFeatures(QDesignerFormWindowInterface* self, int f) {
    self->setFeatures(static_cast<QDesignerFormWindowInterface::Feature>(f));
}

void QDesignerFormWindowInterface_SetDirty(QDesignerFormWindowInterface* self, bool dirty) {
    self->setDirty(dirty);
}

void QDesignerFormWindowInterface_ClearSelection(QDesignerFormWindowInterface* self, bool changePropertyDisplay) {
    self->clearSelection(changePropertyDisplay);
}

void QDesignerFormWindowInterface_SelectWidget(QDesignerFormWindowInterface* self, QWidget* w, bool selectVal) {
    self->selectWidget(w, selectVal);
}

void QDesignerFormWindowInterface_SetGrid(QDesignerFormWindowInterface* self, const QPoint* grid) {
    self->setGrid(*grid);
}

void QDesignerFormWindowInterface_SetFileName(QDesignerFormWindowInterface* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->setFileName(fileName_QString);
}

bool QDesignerFormWindowInterface_SetContents2(QDesignerFormWindowInterface* self, const libqt_string contents) {
    QString contents_QString = QString::fromUtf8(contents.data, contents.len);
    return self->setContents(contents_QString);
}

void QDesignerFormWindowInterface_EditWidgets(QDesignerFormWindowInterface* self) {
    self->editWidgets();
}

void QDesignerFormWindowInterface_ActivateResourceFilePaths(QDesignerFormWindowInterface* self, const libqt_list /* of libqt_string */ paths) {
    QList<QString> paths_QList;
    paths_QList.reserve(paths.len);
    libqt_string* paths_arr = static_cast<libqt_string*>(paths.data);
    for (size_t i = 0; i < paths.len; ++i) {
        QString paths_arr_i_QString = QString::fromUtf8(paths_arr[i].data, paths_arr[i].len);
        paths_QList.push_back(paths_arr_i_QString);
    }
    self->activateResourceFilePaths(paths_QList);
}

void QDesignerFormWindowInterface_MainContainerChanged(QDesignerFormWindowInterface* self, QWidget* mainContainer) {
    self->mainContainerChanged(mainContainer);
}

void QDesignerFormWindowInterface_Connect_MainContainerChanged(QDesignerFormWindowInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerFormWindowInterface*, QWidget*) = reinterpret_cast<void (*)(QDesignerFormWindowInterface*, QWidget*)>(slot);
    QDesignerFormWindowInterface::connect(self, &QDesignerFormWindowInterface::mainContainerChanged, [self, slotFunc](QWidget* mainContainer) {
        QWidget* sigval1 = mainContainer;
        slotFunc(self, sigval1);
    });
}

void QDesignerFormWindowInterface_ToolChanged(QDesignerFormWindowInterface* self, int toolIndex) {
    self->toolChanged(static_cast<int>(toolIndex));
}

void QDesignerFormWindowInterface_Connect_ToolChanged(QDesignerFormWindowInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerFormWindowInterface*, int) = reinterpret_cast<void (*)(QDesignerFormWindowInterface*, int)>(slot);
    QDesignerFormWindowInterface::connect(self, &QDesignerFormWindowInterface::toolChanged, [self, slotFunc](int toolIndex) {
        int sigval1 = toolIndex;
        slotFunc(self, sigval1);
    });
}

void QDesignerFormWindowInterface_FileNameChanged(QDesignerFormWindowInterface* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->fileNameChanged(fileName_QString);
}

void QDesignerFormWindowInterface_Connect_FileNameChanged(QDesignerFormWindowInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerFormWindowInterface*, const char*) = reinterpret_cast<void (*)(QDesignerFormWindowInterface*, const char*)>(slot);
    QDesignerFormWindowInterface::connect(self, &QDesignerFormWindowInterface::fileNameChanged, [self, slotFunc](const QString& fileName) {
        const QString fileName_ret = fileName;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray fileName_b = fileName_ret.toUtf8();
        auto fileName_str_len = fileName_b.length();
        const char* fileName_str = static_cast<const char*>(malloc(fileName_str_len + 1));
        memcpy((void*)fileName_str, fileName_b.data(), fileName_str_len);
        ((char*)fileName_str)[fileName_str_len] = '\0';
        const char* sigval1 = fileName_str;
        slotFunc(self, sigval1);
        libqt_free(fileName_str);
    });
}

void QDesignerFormWindowInterface_FeatureChanged(QDesignerFormWindowInterface* self, int f) {
    self->featureChanged(static_cast<QDesignerFormWindowInterface::Feature>(f));
}

void QDesignerFormWindowInterface_Connect_FeatureChanged(QDesignerFormWindowInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerFormWindowInterface*, int) = reinterpret_cast<void (*)(QDesignerFormWindowInterface*, int)>(slot);
    QDesignerFormWindowInterface::connect(self, &QDesignerFormWindowInterface::featureChanged, [self, slotFunc](QDesignerFormWindowInterface::Feature f) {
        int sigval1 = static_cast<int>(f);
        slotFunc(self, sigval1);
    });
}

void QDesignerFormWindowInterface_SelectionChanged(QDesignerFormWindowInterface* self) {
    self->selectionChanged();
}

void QDesignerFormWindowInterface_Connect_SelectionChanged(QDesignerFormWindowInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerFormWindowInterface*) = reinterpret_cast<void (*)(QDesignerFormWindowInterface*)>(slot);
    QDesignerFormWindowInterface::connect(self, &QDesignerFormWindowInterface::selectionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QDesignerFormWindowInterface_GeometryChanged(QDesignerFormWindowInterface* self) {
    self->geometryChanged();
}

void QDesignerFormWindowInterface_Connect_GeometryChanged(QDesignerFormWindowInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerFormWindowInterface*) = reinterpret_cast<void (*)(QDesignerFormWindowInterface*)>(slot);
    QDesignerFormWindowInterface::connect(self, &QDesignerFormWindowInterface::geometryChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QDesignerFormWindowInterface_ResourceFilesChanged(QDesignerFormWindowInterface* self) {
    self->resourceFilesChanged();
}

void QDesignerFormWindowInterface_Connect_ResourceFilesChanged(QDesignerFormWindowInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerFormWindowInterface*) = reinterpret_cast<void (*)(QDesignerFormWindowInterface*)>(slot);
    QDesignerFormWindowInterface::connect(self, &QDesignerFormWindowInterface::resourceFilesChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QDesignerFormWindowInterface_WidgetManaged(QDesignerFormWindowInterface* self, QWidget* widget) {
    self->widgetManaged(widget);
}

void QDesignerFormWindowInterface_Connect_WidgetManaged(QDesignerFormWindowInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerFormWindowInterface*, QWidget*) = reinterpret_cast<void (*)(QDesignerFormWindowInterface*, QWidget*)>(slot);
    QDesignerFormWindowInterface::connect(self, &QDesignerFormWindowInterface::widgetManaged, [self, slotFunc](QWidget* widget) {
        QWidget* sigval1 = widget;
        slotFunc(self, sigval1);
    });
}

void QDesignerFormWindowInterface_WidgetUnmanaged(QDesignerFormWindowInterface* self, QWidget* widget) {
    self->widgetUnmanaged(widget);
}

void QDesignerFormWindowInterface_Connect_WidgetUnmanaged(QDesignerFormWindowInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerFormWindowInterface*, QWidget*) = reinterpret_cast<void (*)(QDesignerFormWindowInterface*, QWidget*)>(slot);
    QDesignerFormWindowInterface::connect(self, &QDesignerFormWindowInterface::widgetUnmanaged, [self, slotFunc](QWidget* widget) {
        QWidget* sigval1 = widget;
        slotFunc(self, sigval1);
    });
}

void QDesignerFormWindowInterface_AboutToUnmanageWidget(QDesignerFormWindowInterface* self, QWidget* widget) {
    self->aboutToUnmanageWidget(widget);
}

void QDesignerFormWindowInterface_Connect_AboutToUnmanageWidget(QDesignerFormWindowInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerFormWindowInterface*, QWidget*) = reinterpret_cast<void (*)(QDesignerFormWindowInterface*, QWidget*)>(slot);
    QDesignerFormWindowInterface::connect(self, &QDesignerFormWindowInterface::aboutToUnmanageWidget, [self, slotFunc](QWidget* widget) {
        QWidget* sigval1 = widget;
        slotFunc(self, sigval1);
    });
}

void QDesignerFormWindowInterface_Activated(QDesignerFormWindowInterface* self, QWidget* widget) {
    self->activated(widget);
}

void QDesignerFormWindowInterface_Connect_Activated(QDesignerFormWindowInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerFormWindowInterface*, QWidget*) = reinterpret_cast<void (*)(QDesignerFormWindowInterface*, QWidget*)>(slot);
    QDesignerFormWindowInterface::connect(self, &QDesignerFormWindowInterface::activated, [self, slotFunc](QWidget* widget) {
        QWidget* sigval1 = widget;
        slotFunc(self, sigval1);
    });
}

void QDesignerFormWindowInterface_Changed(QDesignerFormWindowInterface* self) {
    self->changed();
}

void QDesignerFormWindowInterface_Connect_Changed(QDesignerFormWindowInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerFormWindowInterface*) = reinterpret_cast<void (*)(QDesignerFormWindowInterface*)>(slot);
    QDesignerFormWindowInterface::connect(self, &QDesignerFormWindowInterface::changed, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QDesignerFormWindowInterface_WidgetRemoved(QDesignerFormWindowInterface* self, QWidget* w) {
    self->widgetRemoved(w);
}

void QDesignerFormWindowInterface_Connect_WidgetRemoved(QDesignerFormWindowInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerFormWindowInterface*, QWidget*) = reinterpret_cast<void (*)(QDesignerFormWindowInterface*, QWidget*)>(slot);
    QDesignerFormWindowInterface::connect(self, &QDesignerFormWindowInterface::widgetRemoved, [self, slotFunc](QWidget* w) {
        QWidget* sigval1 = w;
        slotFunc(self, sigval1);
    });
}

void QDesignerFormWindowInterface_ObjectRemoved(QDesignerFormWindowInterface* self, QObject* o) {
    self->objectRemoved(o);
}

void QDesignerFormWindowInterface_Connect_ObjectRemoved(QDesignerFormWindowInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerFormWindowInterface*, QObject*) = reinterpret_cast<void (*)(QDesignerFormWindowInterface*, QObject*)>(slot);
    QDesignerFormWindowInterface::connect(self, &QDesignerFormWindowInterface::objectRemoved, [self, slotFunc](QObject* o) {
        QObject* sigval1 = o;
        slotFunc(self, sigval1);
    });
}

void QDesignerFormWindowInterface_ActivateResourceFilePaths2(QDesignerFormWindowInterface* self, const libqt_list /* of libqt_string */ paths, int* errorCount) {
    QList<QString> paths_QList;
    paths_QList.reserve(paths.len);
    libqt_string* paths_arr = static_cast<libqt_string*>(paths.data);
    for (size_t i = 0; i < paths.len; ++i) {
        QString paths_arr_i_QString = QString::fromUtf8(paths_arr[i].data, paths_arr[i].len);
        paths_QList.push_back(paths_arr_i_QString);
    }
    self->activateResourceFilePaths(paths_QList, static_cast<int*>(errorCount));
}

void QDesignerFormWindowInterface_Delete(QDesignerFormWindowInterface* self) {
    delete self;
}
