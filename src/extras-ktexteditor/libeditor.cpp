#include <KAboutData>
#define WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__Repository
#include <KSyntaxHighlighting/Theme>
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Application
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Command
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__ConfigPage
#include <KTextEditor/Document>
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Editor
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__View
#include <QFont>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <editor.h>
#include "libeditor.h"
#include "libeditor.hxx"

QMetaObject* KTextEditor__Editor_MetaObject(const KTextEditor__Editor* self) {
    return (QMetaObject*)self->metaObject();
}

void* KTextEditor__Editor_Metacast(KTextEditor__Editor* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KTextEditor__Editor_Metacall(KTextEditor__Editor* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KTextEditor__Editor_Tr(const char* s) {
    QString _ret = KTextEditor::Editor::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KTextEditor__Editor* KTextEditor__Editor_Instance() {
    return KTextEditor::Editor::instance();
}

void KTextEditor__Editor_SetApplication(KTextEditor__Editor* self, KTextEditor__Application* application) {
    self->setApplication(application);
}

KTextEditor__Application* KTextEditor__Editor_Application(const KTextEditor__Editor* self) {
    return self->application();
}

KTextEditor__Document* KTextEditor__Editor_CreateDocument(KTextEditor__Editor* self, QObject* parent) {
    return self->createDocument(parent);
}

libqt_list /* of KTextEditor__Document* */ KTextEditor__Editor_Documents(KTextEditor__Editor* self) {
    QList<KTextEditor::Document*> _ret = self->documents();
    // Convert QList<> from C++ memory to manually-managed C memory
    KTextEditor__Document** _arr = static_cast<KTextEditor__Document**>(malloc(sizeof(KTextEditor__Document*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KTextEditor__Editor_DocumentCreated(KTextEditor__Editor* self, KTextEditor__Editor* editor, KTextEditor__Document* document) {
    self->documentCreated(editor, document);
}

void KTextEditor__Editor_Connect_DocumentCreated(KTextEditor__Editor* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Editor*, KTextEditor__Editor*, KTextEditor__Document*) = reinterpret_cast<void (*)(KTextEditor__Editor*, KTextEditor__Editor*, KTextEditor__Document*)>(slot);
    KTextEditor::Editor::connect(self, &KTextEditor::Editor::documentCreated, [self, slotFunc](KTextEditor::Editor* editor, KTextEditor::Document* document) {
        KTextEditor__Editor* sigval1 = editor;
        KTextEditor__Document* sigval2 = document;
        slotFunc(self, sigval1, sigval2);
    });
}

KAboutData* KTextEditor__Editor_AboutData(const KTextEditor__Editor* self) {
    const KAboutData& _ret = self->aboutData();
    // Cast returned reference into pointer
    return const_cast<KAboutData*>(&_ret);
}

libqt_string KTextEditor__Editor_DefaultEncoding(const KTextEditor__Editor* self) {
    QString _ret = self->defaultEncoding();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KTextEditor__Editor_ConfigDialog(KTextEditor__Editor* self, QWidget* parent) {
    self->configDialog(parent);
}

int KTextEditor__Editor_ConfigPages(const KTextEditor__Editor* self) {
    return self->configPages();
}

KTextEditor__ConfigPage* KTextEditor__Editor_ConfigPage(KTextEditor__Editor* self, int number, QWidget* parent) {
    return self->configPage(static_cast<int>(number), parent);
}

void KTextEditor__Editor_ConfigChanged(KTextEditor__Editor* self, KTextEditor__Editor* editor) {
    self->configChanged(editor);
}

void KTextEditor__Editor_Connect_ConfigChanged(KTextEditor__Editor* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Editor*, KTextEditor__Editor*) = reinterpret_cast<void (*)(KTextEditor__Editor*, KTextEditor__Editor*)>(slot);
    KTextEditor::Editor::connect(self, &KTextEditor::Editor::configChanged, [self, slotFunc](KTextEditor::Editor* editor) {
        KTextEditor__Editor* sigval1 = editor;
        slotFunc(self, sigval1);
    });
}

QFont* KTextEditor__Editor_Font(const KTextEditor__Editor* self) {
    return new QFont(self->font());
}

KSyntaxHighlighting__Theme* KTextEditor__Editor_Theme(const KTextEditor__Editor* self) {
    return new KSyntaxHighlighting::Theme(self->theme());
}

KSyntaxHighlighting__Repository* KTextEditor__Editor_Repository(const KTextEditor__Editor* self) {
    const KSyntaxHighlighting::Repository& _ret = self->repository();
    // Cast returned reference into pointer
    return const_cast<KSyntaxHighlighting::Repository*>(&_ret);
}

void KTextEditor__Editor_RepositoryReloaded(KTextEditor__Editor* self, KTextEditor__Editor* editor) {
    self->repositoryReloaded(editor);
}

void KTextEditor__Editor_Connect_RepositoryReloaded(KTextEditor__Editor* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Editor*, KTextEditor__Editor*) = reinterpret_cast<void (*)(KTextEditor__Editor*, KTextEditor__Editor*)>(slot);
    KTextEditor::Editor::connect(self, &KTextEditor::Editor::repositoryReloaded, [self, slotFunc](KTextEditor::Editor* editor) {
        KTextEditor__Editor* sigval1 = editor;
        slotFunc(self, sigval1);
    });
}

KTextEditor__Command* KTextEditor__Editor_QueryCommand(const KTextEditor__Editor* self, const libqt_string cmd) {
    QString cmd_QString = QString::fromUtf8(cmd.data, cmd.len);
    return self->queryCommand(cmd_QString);
}

libqt_list /* of KTextEditor__Command* */ KTextEditor__Editor_Commands(const KTextEditor__Editor* self) {
    QList<KTextEditor::Command*> _ret = self->commands();
    // Convert QList<> from C++ memory to manually-managed C memory
    KTextEditor__Command** _arr = static_cast<KTextEditor__Command**>(malloc(sizeof(KTextEditor__Command*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ KTextEditor__Editor_CommandList(const KTextEditor__Editor* self) {
    QList<QString> _ret = self->commandList();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
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

bool KTextEditor__Editor_UnregisterVariable(KTextEditor__Editor* self, const libqt_string variableName) {
    QString variableName_QString = QString::fromUtf8(variableName.data, variableName.len);
    return self->unregisterVariable(variableName_QString);
}

bool KTextEditor__Editor_ExpandVariable(const KTextEditor__Editor* self, const libqt_string variable, KTextEditor__View* view, libqt_string output) {
    QString variable_QString = QString::fromUtf8(variable.data, variable.len);
    QString output_QString = QString::fromUtf8(output.data, output.len);
    return self->expandVariable(variable_QString, view, output_QString);
}

libqt_string KTextEditor__Editor_ExpandText(const KTextEditor__Editor* self, const libqt_string text, KTextEditor__View* view) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString _ret = self->expandText(text_QString, view);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KTextEditor__Editor_AddVariableExpansion(const KTextEditor__Editor* self, const libqt_list /* of QWidget* */ widgets) {
    QList<QWidget*> widgets_QList;
    widgets_QList.reserve(widgets.len);
    QWidget** widgets_arr = static_cast<QWidget**>(widgets.data);
    for (size_t i = 0; i < widgets.len; ++i) {
        widgets_QList.push_back(widgets_arr[i]);
    }
    self->addVariableExpansion(widgets_QList);
}

libqt_string KTextEditor__Editor_Tr2(const char* s, const char* c) {
    QString _ret = KTextEditor::Editor::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTextEditor__Editor_Tr3(const char* s, const char* c, int n) {
    QString _ret = KTextEditor::Editor::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KTextEditor__Editor_AddVariableExpansion2(const KTextEditor__Editor* self, const libqt_list /* of QWidget* */ widgets, const libqt_list /* of libqt_string */ variables) {
    QList<QWidget*> widgets_QList;
    widgets_QList.reserve(widgets.len);
    QWidget** widgets_arr = static_cast<QWidget**>(widgets.data);
    for (size_t i = 0; i < widgets.len; ++i) {
        widgets_QList.push_back(widgets_arr[i]);
    }
    QList<QString> variables_QList;
    variables_QList.reserve(variables.len);
    libqt_string* variables_arr = static_cast<libqt_string*>(variables.data);
    for (size_t i = 0; i < variables.len; ++i) {
        QString variables_arr_i_QString = QString::fromUtf8(variables_arr[i].data, variables_arr[i].len);
        variables_QList.push_back(variables_arr_i_QString);
    }
    self->addVariableExpansion(widgets_QList, variables_QList);
}
