#include <KConfigGroup>
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__Part
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartBase
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__ReadOnlyPart
#define WORKAROUND_INNER_CLASS_DEFINITION_KParts__ReadWritePart
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__AnnotationModel
#include <KTextEditor/Cursor>
#include <KTextEditor/Document>
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Document__EditingTransaction
#include <KTextEditor/MainWindow>
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Mark
#include <KTextEditor/Message>
#include <KTextEditor/MovingCursor>
#include <KTextEditor/MovingRange>
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Range
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__View
#include <KXMLGUIClient>
#include <QByteArray>
#include <QChar>
#include <QHash>
#include <QIcon>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPoint>
#include <QSet>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QVariant>
#include <QWidget>
#include <document.h>
#include "libdocument.h"
#include "libdocument.hxx"

int KTextEditor__Mark_Line(const KTextEditor__Mark* self) {
    return self->line;
}

void KTextEditor__Mark_SetLine(KTextEditor__Mark* self, int line) {
    self->line = static_cast<int>(line);
}

unsigned int KTextEditor__Mark_Type(const KTextEditor__Mark* self) {
    return static_cast<unsigned int>(self->type);
}

void KTextEditor__Mark_SetType(KTextEditor__Mark* self, unsigned int type) {
    self->type = static_cast<uint>(type);
}

void KTextEditor__Mark_Delete(KTextEditor__Mark* self) {
    delete self;
}

QMetaObject* KTextEditor__Document_MetaObject(const KTextEditor__Document* self) {
    return (QMetaObject*)self->metaObject();
}

void* KTextEditor__Document_Metacast(KTextEditor__Document* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KTextEditor__Document_Metacall(KTextEditor__Document* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KTextEditor__Document_Tr(const char* s) {
    QString _ret = KTextEditor::Document::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KTextEditor__View* KTextEditor__Document_CreateView(KTextEditor__Document* self, QWidget* parent, KTextEditor__MainWindow* mainWindow) {
    return self->createView(parent, mainWindow);
}

libqt_list /* of KTextEditor__View* */ KTextEditor__Document_Views(const KTextEditor__Document* self) {
    QList<KTextEditor::View*> _ret = self->views();
    // Convert QList<> from C++ memory to manually-managed C memory
    KTextEditor__View** _arr = static_cast<KTextEditor__View**>(malloc(sizeof(KTextEditor__View*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KTextEditor__Document_ViewCreated(KTextEditor__Document* self, KTextEditor__Document* document, KTextEditor__View* view) {
    self->viewCreated(document, view);
}

void KTextEditor__Document_Connect_ViewCreated(KTextEditor__Document* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Document*, KTextEditor__Document*, KTextEditor__View*) = reinterpret_cast<void (*)(KTextEditor__Document*, KTextEditor__Document*, KTextEditor__View*)>(slot);
    KTextEditor::Document::connect(self, &KTextEditor::Document::viewCreated, [self, slotFunc](KTextEditor::Document* document, KTextEditor::View* view) {
        KTextEditor__Document* sigval1 = document;
        KTextEditor__View* sigval2 = view;
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string KTextEditor__Document_DocumentName(const KTextEditor__Document* self) {
    QString _ret = self->documentName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTextEditor__Document_MimeType(KTextEditor__Document* self) {
    QString _ret = self->mimeType();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTextEditor__Document_Checksum(const KTextEditor__Document* self) {
    QByteArray _qb = self->checksum();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KTextEditor__Document_DocumentNameChanged(KTextEditor__Document* self, KTextEditor__Document* document) {
    self->documentNameChanged(document);
}

void KTextEditor__Document_Connect_DocumentNameChanged(KTextEditor__Document* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Document*, KTextEditor__Document*) = reinterpret_cast<void (*)(KTextEditor__Document*, KTextEditor__Document*)>(slot);
    KTextEditor::Document::connect(self, &KTextEditor::Document::documentNameChanged, [self, slotFunc](KTextEditor::Document* document) {
        KTextEditor__Document* sigval1 = document;
        slotFunc(self, sigval1);
    });
}

void KTextEditor__Document_DocumentUrlChanged(KTextEditor__Document* self, KTextEditor__Document* document) {
    self->documentUrlChanged(document);
}

void KTextEditor__Document_Connect_DocumentUrlChanged(KTextEditor__Document* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Document*, KTextEditor__Document*) = reinterpret_cast<void (*)(KTextEditor__Document*, KTextEditor__Document*)>(slot);
    KTextEditor::Document::connect(self, &KTextEditor::Document::documentUrlChanged, [self, slotFunc](KTextEditor::Document* document) {
        KTextEditor__Document* sigval1 = document;
        slotFunc(self, sigval1);
    });
}

void KTextEditor__Document_ModifiedChanged(KTextEditor__Document* self, KTextEditor__Document* document) {
    self->modifiedChanged(document);
}

void KTextEditor__Document_Connect_ModifiedChanged(KTextEditor__Document* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Document*, KTextEditor__Document*) = reinterpret_cast<void (*)(KTextEditor__Document*, KTextEditor__Document*)>(slot);
    KTextEditor::Document::connect(self, &KTextEditor::Document::modifiedChanged, [self, slotFunc](KTextEditor::Document* document) {
        KTextEditor__Document* sigval1 = document;
        slotFunc(self, sigval1);
    });
}

void KTextEditor__Document_ReadWriteChanged(KTextEditor__Document* self, KTextEditor__Document* document) {
    self->readWriteChanged(document);
}

void KTextEditor__Document_Connect_ReadWriteChanged(KTextEditor__Document* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Document*, KTextEditor__Document*) = reinterpret_cast<void (*)(KTextEditor__Document*, KTextEditor__Document*)>(slot);
    KTextEditor::Document::connect(self, &KTextEditor::Document::readWriteChanged, [self, slotFunc](KTextEditor::Document* document) {
        KTextEditor__Document* sigval1 = document;
        slotFunc(self, sigval1);
    });
}

bool KTextEditor__Document_SetEncoding(KTextEditor__Document* self, const libqt_string encoding) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    return self->setEncoding(encoding_QString);
}

libqt_string KTextEditor__Document_Encoding(const KTextEditor__Document* self) {
    QString _ret = self->encoding();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KTextEditor__Document_DocumentReload(KTextEditor__Document* self) {
    return self->documentReload();
}

bool KTextEditor__Document_DocumentSave(KTextEditor__Document* self) {
    return self->documentSave();
}

bool KTextEditor__Document_DocumentSaveAs(KTextEditor__Document* self) {
    return self->documentSaveAs();
}

bool KTextEditor__Document_OpeningError(const KTextEditor__Document* self) {
    return self->openingError();
}

void KTextEditor__Document_DocumentSavedOrUploaded(KTextEditor__Document* self, KTextEditor__Document* document, bool saveAs) {
    self->documentSavedOrUploaded(document, saveAs);
}

void KTextEditor__Document_Connect_DocumentSavedOrUploaded(KTextEditor__Document* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Document*, KTextEditor__Document*, bool) = reinterpret_cast<void (*)(KTextEditor__Document*, KTextEditor__Document*, bool)>(slot);
    KTextEditor::Document::connect(self, &KTextEditor::Document::documentSavedOrUploaded, [self, slotFunc](KTextEditor::Document* document, bool saveAs) {
        KTextEditor__Document* sigval1 = document;
        bool sigval2 = saveAs;
        slotFunc(self, sigval1, sigval2);
    });
}

void KTextEditor__Document_AboutToClose(KTextEditor__Document* self, KTextEditor__Document* document) {
    self->aboutToClose(document);
}

void KTextEditor__Document_Connect_AboutToClose(KTextEditor__Document* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Document*, KTextEditor__Document*) = reinterpret_cast<void (*)(KTextEditor__Document*, KTextEditor__Document*)>(slot);
    KTextEditor::Document::connect(self, &KTextEditor::Document::aboutToClose, [self, slotFunc](KTextEditor::Document* document) {
        KTextEditor__Document* sigval1 = document;
        slotFunc(self, sigval1);
    });
}

void KTextEditor__Document_AboutToReload(KTextEditor__Document* self, KTextEditor__Document* document) {
    self->aboutToReload(document);
}

void KTextEditor__Document_Connect_AboutToReload(KTextEditor__Document* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Document*, KTextEditor__Document*) = reinterpret_cast<void (*)(KTextEditor__Document*, KTextEditor__Document*)>(slot);
    KTextEditor::Document::connect(self, &KTextEditor::Document::aboutToReload, [self, slotFunc](KTextEditor::Document* document) {
        KTextEditor__Document* sigval1 = document;
        slotFunc(self, sigval1);
    });
}

void KTextEditor__Document_Reloaded(KTextEditor__Document* self, KTextEditor__Document* document) {
    self->reloaded(document);
}

void KTextEditor__Document_Connect_Reloaded(KTextEditor__Document* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Document*, KTextEditor__Document*) = reinterpret_cast<void (*)(KTextEditor__Document*, KTextEditor__Document*)>(slot);
    KTextEditor::Document::connect(self, &KTextEditor::Document::reloaded, [self, slotFunc](KTextEditor::Document* document) {
        KTextEditor__Document* sigval1 = document;
        slotFunc(self, sigval1);
    });
}

void KTextEditor__Document_AboutToSave(KTextEditor__Document* self, KTextEditor__Document* document) {
    self->aboutToSave(document);
}

void KTextEditor__Document_Connect_AboutToSave(KTextEditor__Document* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Document*, KTextEditor__Document*) = reinterpret_cast<void (*)(KTextEditor__Document*, KTextEditor__Document*)>(slot);
    KTextEditor::Document::connect(self, &KTextEditor::Document::aboutToSave, [self, slotFunc](KTextEditor::Document* document) {
        KTextEditor__Document* sigval1 = document;
        slotFunc(self, sigval1);
    });
}

bool KTextEditor__Document_IsEditingTransactionRunning(const KTextEditor__Document* self) {
    return self->isEditingTransactionRunning();
}

libqt_string KTextEditor__Document_Text(const KTextEditor__Document* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTextEditor__Document_Text2(const KTextEditor__Document* self, KTextEditor__Range* range, bool block) {
    QString _ret = self->text(*range, block);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QChar* KTextEditor__Document_CharacterAt(const KTextEditor__Document* self, KTextEditor__Cursor* position) {
    return new QChar(self->characterAt(*position));
}

libqt_string KTextEditor__Document_WordAt(const KTextEditor__Document* self, KTextEditor__Cursor* cursor) {
    QString _ret = self->wordAt(*cursor);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KTextEditor__Range* KTextEditor__Document_WordRangeAt(const KTextEditor__Document* self, KTextEditor__Cursor* cursor) {
    return new KTextEditor::Range(self->wordRangeAt(*cursor));
}

bool KTextEditor__Document_IsValidTextPosition(const KTextEditor__Document* self, KTextEditor__Cursor* cursor) {
    return self->isValidTextPosition(*cursor);
}

libqt_list /* of libqt_string */ KTextEditor__Document_TextLines(const KTextEditor__Document* self, KTextEditor__Range* range, bool block) {
    QList<QString> _ret = self->textLines(*range, block);
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

libqt_string KTextEditor__Document_Line(const KTextEditor__Document* self, int line) {
    QString _ret = self->line(static_cast<int>(line));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KTextEditor__Document_Lines(const KTextEditor__Document* self) {
    return self->lines();
}

bool KTextEditor__Document_IsLineModified(const KTextEditor__Document* self, int line) {
    return self->isLineModified(static_cast<int>(line));
}

bool KTextEditor__Document_IsLineSaved(const KTextEditor__Document* self, int line) {
    return self->isLineSaved(static_cast<int>(line));
}

bool KTextEditor__Document_IsLineTouched(const KTextEditor__Document* self, int line) {
    return self->isLineTouched(static_cast<int>(line));
}

KTextEditor__Cursor* KTextEditor__Document_DocumentEnd(const KTextEditor__Document* self) {
    return new KTextEditor::Cursor(self->documentEnd());
}

KTextEditor__Range* KTextEditor__Document_DocumentRange(const KTextEditor__Document* self) {
    return new KTextEditor::Range(self->documentRange());
}

ptrdiff_t KTextEditor__Document_TotalCharacters(const KTextEditor__Document* self) {
    return static_cast<ptrdiff_t>(self->totalCharacters());
}

bool KTextEditor__Document_IsEmpty(const KTextEditor__Document* self) {
    return self->isEmpty();
}

int KTextEditor__Document_LineLength(const KTextEditor__Document* self, int line) {
    return self->lineLength(static_cast<int>(line));
}

KTextEditor__Cursor* KTextEditor__Document_EndOfLine(const KTextEditor__Document* self, int line) {
    return new KTextEditor::Cursor(self->endOfLine(static_cast<int>(line)));
}

bool KTextEditor__Document_SetText(KTextEditor__Document* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->setText(text_QString);
}

bool KTextEditor__Document_SetText2(KTextEditor__Document* self, const libqt_list /* of libqt_string */ text) {
    QList<QString> text_QList;
    text_QList.reserve(text.len);
    libqt_string* text_arr = static_cast<libqt_string*>(text.data);
    for (size_t i = 0; i < text.len; ++i) {
        QString text_arr_i_QString = QString::fromUtf8(text_arr[i].data, text_arr[i].len);
        text_QList.push_back(text_arr_i_QString);
    }
    return self->setText(text_QList);
}

bool KTextEditor__Document_Clear(KTextEditor__Document* self) {
    return self->clear();
}

bool KTextEditor__Document_InsertText(KTextEditor__Document* self, KTextEditor__Cursor* position, const libqt_string text, bool block) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->insertText(*position, text_QString, block);
}

bool KTextEditor__Document_InsertText2(KTextEditor__Document* self, KTextEditor__Cursor* position, const libqt_list /* of libqt_string */ text, bool block) {
    QList<QString> text_QList;
    text_QList.reserve(text.len);
    libqt_string* text_arr = static_cast<libqt_string*>(text.data);
    for (size_t i = 0; i < text.len; ++i) {
        QString text_arr_i_QString = QString::fromUtf8(text_arr[i].data, text_arr[i].len);
        text_QList.push_back(text_arr_i_QString);
    }
    return self->insertText(*position, text_QList, block);
}

bool KTextEditor__Document_ReplaceText(KTextEditor__Document* self, KTextEditor__Range* range, const libqt_string text, bool block) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->replaceText(*range, text_QString, block);
}

bool KTextEditor__Document_ReplaceText2(KTextEditor__Document* self, KTextEditor__Range* range, const libqt_list /* of libqt_string */ text, bool block) {
    QList<QString> text_QList;
    text_QList.reserve(text.len);
    libqt_string* text_arr = static_cast<libqt_string*>(text.data);
    for (size_t i = 0; i < text.len; ++i) {
        QString text_arr_i_QString = QString::fromUtf8(text_arr[i].data, text_arr[i].len);
        text_QList.push_back(text_arr_i_QString);
    }
    return self->replaceText(*range, text_QList, block);
}

bool KTextEditor__Document_RemoveText(KTextEditor__Document* self, KTextEditor__Range* range, bool block) {
    return self->removeText(*range, block);
}

bool KTextEditor__Document_InsertLine(KTextEditor__Document* self, int line, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->insertLine(static_cast<int>(line), text_QString);
}

bool KTextEditor__Document_InsertLines(KTextEditor__Document* self, int line, const libqt_list /* of libqt_string */ text) {
    QList<QString> text_QList;
    text_QList.reserve(text.len);
    libqt_string* text_arr = static_cast<libqt_string*>(text.data);
    for (size_t i = 0; i < text.len; ++i) {
        QString text_arr_i_QString = QString::fromUtf8(text_arr[i].data, text_arr[i].len);
        text_QList.push_back(text_arr_i_QString);
    }
    return self->insertLines(static_cast<int>(line), text_QList);
}

bool KTextEditor__Document_RemoveLine(KTextEditor__Document* self, int line) {
    return self->removeLine(static_cast<int>(line));
}

libqt_list /* of KTextEditor__Range* */ KTextEditor__Document_SearchText(const KTextEditor__Document* self, KTextEditor__Range* range, const libqt_string pattern) {
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    QList<KTextEditor::Range> _ret = self->searchText(*range, pattern_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    KTextEditor__Range** _arr = static_cast<KTextEditor__Range**>(malloc(sizeof(KTextEditor__Range*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KTextEditor::Range(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

ptrdiff_t KTextEditor__Document_CursorToOffset(const KTextEditor__Document* self, KTextEditor__Cursor* c) {
    return static_cast<ptrdiff_t>(self->cursorToOffset(*c));
}

KTextEditor__Cursor* KTextEditor__Document_OffsetToCursor(const KTextEditor__Document* self, ptrdiff_t offset) {
    return new KTextEditor::Cursor(self->offsetToCursor((qsizetype)(offset)));
}

void KTextEditor__Document_EditingStarted(KTextEditor__Document* self, KTextEditor__Document* document) {
    self->editingStarted(document);
}

void KTextEditor__Document_Connect_EditingStarted(KTextEditor__Document* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Document*, KTextEditor__Document*) = reinterpret_cast<void (*)(KTextEditor__Document*, KTextEditor__Document*)>(slot);
    KTextEditor::Document::connect(self, &KTextEditor::Document::editingStarted, [self, slotFunc](KTextEditor::Document* document) {
        KTextEditor__Document* sigval1 = document;
        slotFunc(self, sigval1);
    });
}

void KTextEditor__Document_EditingFinished(KTextEditor__Document* self, KTextEditor__Document* document) {
    self->editingFinished(document);
}

void KTextEditor__Document_Connect_EditingFinished(KTextEditor__Document* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Document*, KTextEditor__Document*) = reinterpret_cast<void (*)(KTextEditor__Document*, KTextEditor__Document*)>(slot);
    KTextEditor::Document::connect(self, &KTextEditor::Document::editingFinished, [self, slotFunc](KTextEditor::Document* document) {
        KTextEditor__Document* sigval1 = document;
        slotFunc(self, sigval1);
    });
}

void KTextEditor__Document_LineWrapped(KTextEditor__Document* self, KTextEditor__Document* document, KTextEditor__Cursor* position) {
    self->lineWrapped(document, *position);
}

void KTextEditor__Document_Connect_LineWrapped(KTextEditor__Document* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Document*, KTextEditor__Document*, KTextEditor__Cursor*) = reinterpret_cast<void (*)(KTextEditor__Document*, KTextEditor__Document*, KTextEditor__Cursor*)>(slot);
    KTextEditor::Document::connect(self, &KTextEditor::Document::lineWrapped, [self, slotFunc](KTextEditor::Document* document, KTextEditor::Cursor position) {
        KTextEditor__Document* sigval1 = document;
        KTextEditor__Cursor* sigval2 = new KTextEditor::Cursor(position);
        slotFunc(self, sigval1, sigval2);
    });
}

void KTextEditor__Document_LineUnwrapped(KTextEditor__Document* self, KTextEditor__Document* document, int line) {
    self->lineUnwrapped(document, static_cast<int>(line));
}

void KTextEditor__Document_Connect_LineUnwrapped(KTextEditor__Document* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Document*, KTextEditor__Document*, int) = reinterpret_cast<void (*)(KTextEditor__Document*, KTextEditor__Document*, int)>(slot);
    KTextEditor::Document::connect(self, &KTextEditor::Document::lineUnwrapped, [self, slotFunc](KTextEditor::Document* document, int line) {
        KTextEditor__Document* sigval1 = document;
        int sigval2 = line;
        slotFunc(self, sigval1, sigval2);
    });
}

void KTextEditor__Document_TextInserted(KTextEditor__Document* self, KTextEditor__Document* document, KTextEditor__Cursor* position, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->textInserted(document, *position, text_QString);
}

void KTextEditor__Document_Connect_TextInserted(KTextEditor__Document* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Document*, KTextEditor__Document*, KTextEditor__Cursor*, const char*) = reinterpret_cast<void (*)(KTextEditor__Document*, KTextEditor__Document*, KTextEditor__Cursor*, const char*)>(slot);
    KTextEditor::Document::connect(self, &KTextEditor::Document::textInserted, [self, slotFunc](KTextEditor::Document* document, KTextEditor::Cursor position, const QString& text) {
        KTextEditor__Document* sigval1 = document;
        KTextEditor__Cursor* sigval2 = new KTextEditor::Cursor(position);
        const QString text_ret = text;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray text_b = text_ret.toUtf8();
        const char* text_str = static_cast<const char*>(malloc(text_b.length() + 1));
        memcpy((void*)text_str, text_b.data(), text_b.length());
        ((char*)text_str)[text_b.length()] = '\0';
        const char* sigval3 = text_str;
        slotFunc(self, sigval1, sigval2, sigval3);
        libqt_free(text_str);
    });
}

void KTextEditor__Document_TextRemoved(KTextEditor__Document* self, KTextEditor__Document* document, KTextEditor__Range* range, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->textRemoved(document, *range, text_QString);
}

void KTextEditor__Document_Connect_TextRemoved(KTextEditor__Document* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Document*, KTextEditor__Document*, KTextEditor__Range*, const char*) = reinterpret_cast<void (*)(KTextEditor__Document*, KTextEditor__Document*, KTextEditor__Range*, const char*)>(slot);
    KTextEditor::Document::connect(self, &KTextEditor::Document::textRemoved, [self, slotFunc](KTextEditor::Document* document, KTextEditor::Range range, const QString& text) {
        KTextEditor__Document* sigval1 = document;
        KTextEditor__Range* sigval2 = new KTextEditor::Range(range);
        const QString text_ret = text;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray text_b = text_ret.toUtf8();
        const char* text_str = static_cast<const char*>(malloc(text_b.length() + 1));
        memcpy((void*)text_str, text_b.data(), text_b.length());
        ((char*)text_str)[text_b.length()] = '\0';
        const char* sigval3 = text_str;
        slotFunc(self, sigval1, sigval2, sigval3);
        libqt_free(text_str);
    });
}

void KTextEditor__Document_TextChanged(KTextEditor__Document* self, KTextEditor__Document* document) {
    self->textChanged(document);
}

void KTextEditor__Document_Connect_TextChanged(KTextEditor__Document* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Document*, KTextEditor__Document*) = reinterpret_cast<void (*)(KTextEditor__Document*, KTextEditor__Document*)>(slot);
    KTextEditor::Document::connect(self, &KTextEditor::Document::textChanged, [self, slotFunc](KTextEditor::Document* document) {
        KTextEditor__Document* sigval1 = document;
        slotFunc(self, sigval1);
    });
}

int KTextEditor__Document_DefaultStyleAt(const KTextEditor__Document* self, KTextEditor__Cursor* position) {
    return static_cast<int>(self->defaultStyleAt(*position));
}

libqt_string KTextEditor__Document_Mode(const KTextEditor__Document* self) {
    QString _ret = self->mode();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTextEditor__Document_HighlightingMode(const KTextEditor__Document* self) {
    QString _ret = self->highlightingMode();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KTextEditor__Document_EmbeddedHighlightingModes(const KTextEditor__Document* self) {
    QList<QString> _ret = self->embeddedHighlightingModes();
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

libqt_string KTextEditor__Document_HighlightingModeAt(KTextEditor__Document* self, KTextEditor__Cursor* position) {
    QString _ret = self->highlightingModeAt(*position);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KTextEditor__Document_Modes(const KTextEditor__Document* self) {
    QList<QString> _ret = self->modes();
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

libqt_list /* of libqt_string */ KTextEditor__Document_HighlightingModes(const KTextEditor__Document* self) {
    QList<QString> _ret = self->highlightingModes();
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

bool KTextEditor__Document_SetMode(KTextEditor__Document* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->setMode(name_QString);
}

bool KTextEditor__Document_SetHighlightingMode(KTextEditor__Document* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->setHighlightingMode(name_QString);
}

libqt_string KTextEditor__Document_HighlightingModeSection(const KTextEditor__Document* self, int index) {
    QString _ret = self->highlightingModeSection(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTextEditor__Document_ModeSection(const KTextEditor__Document* self, int index) {
    QString _ret = self->modeSection(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KTextEditor__Document_ModeChanged(KTextEditor__Document* self, KTextEditor__Document* document) {
    self->modeChanged(document);
}

void KTextEditor__Document_Connect_ModeChanged(KTextEditor__Document* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Document*, KTextEditor__Document*) = reinterpret_cast<void (*)(KTextEditor__Document*, KTextEditor__Document*)>(slot);
    KTextEditor::Document::connect(self, &KTextEditor::Document::modeChanged, [self, slotFunc](KTextEditor::Document* document) {
        KTextEditor__Document* sigval1 = document;
        slotFunc(self, sigval1);
    });
}

void KTextEditor__Document_HighlightingModeChanged(KTextEditor__Document* self, KTextEditor__Document* document) {
    self->highlightingModeChanged(document);
}

void KTextEditor__Document_Connect_HighlightingModeChanged(KTextEditor__Document* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Document*, KTextEditor__Document*) = reinterpret_cast<void (*)(KTextEditor__Document*, KTextEditor__Document*)>(slot);
    KTextEditor::Document::connect(self, &KTextEditor::Document::highlightingModeChanged, [self, slotFunc](KTextEditor::Document* document) {
        KTextEditor__Document* sigval1 = document;
        slotFunc(self, sigval1);
    });
}

bool KTextEditor__Document_Print(KTextEditor__Document* self) {
    return self->print();
}

void KTextEditor__Document_PrintPreview(KTextEditor__Document* self) {
    self->printPreview();
}

bool KTextEditor__Document_PostMessage(KTextEditor__Document* self, KTextEditor__Message* message) {
    return self->postMessage(message);
}

void KTextEditor__Document_ReadSessionConfig(KTextEditor__Document* self, const KConfigGroup* config, const libqt_list /* set of libqt_string */ flags) {
    // Convert libqt_list to QSet<>
    QSet<QString> flags_set;
    flags_set.reserve(flags.len);
    const libqt_string* flags_strarr = static_cast<const libqt_string*>(flags.data);
    for (size_t i = 0; i < flags.len; ++i) {
        flags_set.insert(QString::fromUtf8(flags_strarr[i].data));
    }
    self->readSessionConfig(*config, flags_set);
}

void KTextEditor__Document_WriteSessionConfig(KTextEditor__Document* self, KConfigGroup* config, const libqt_list /* set of libqt_string */ flags) {
    // Convert libqt_list to QSet<>
    QSet<QString> flags_set;
    flags_set.reserve(flags.len);
    const libqt_string* flags_strarr = static_cast<const libqt_string*>(flags.data);
    for (size_t i = 0; i < flags.len; ++i) {
        flags_set.insert(QString::fromUtf8(flags_strarr[i].data));
    }
    self->writeSessionConfig(*config, flags_set);
}

bool KTextEditor__Document_IsDataRecoveryAvailable(const KTextEditor__Document* self) {
    return self->isDataRecoveryAvailable();
}

void KTextEditor__Document_RecoverData(KTextEditor__Document* self) {
    self->recoverData();
}

void KTextEditor__Document_DiscardDataRecovery(KTextEditor__Document* self) {
    self->discardDataRecovery();
}

void KTextEditor__Document_ConfigChanged(KTextEditor__Document* self, KTextEditor__Document* document) {
    self->configChanged(document);
}

void KTextEditor__Document_Connect_ConfigChanged(KTextEditor__Document* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Document*, KTextEditor__Document*) = reinterpret_cast<void (*)(KTextEditor__Document*, KTextEditor__Document*)>(slot);
    KTextEditor::Document::connect(self, &KTextEditor::Document::configChanged, [self, slotFunc](KTextEditor::Document* document) {
        KTextEditor__Document* sigval1 = document;
        slotFunc(self, sigval1);
    });
}

KTextEditor__MovingCursor* KTextEditor__Document_NewMovingCursor(KTextEditor__Document* self, KTextEditor__Cursor* position, int insertBehavior) {
    return self->newMovingCursor(*position, static_cast<KTextEditor::MovingCursor::InsertBehavior>(insertBehavior));
}

KTextEditor__MovingRange* KTextEditor__Document_NewMovingRange(KTextEditor__Document* self, KTextEditor__Range* range, int insertBehaviors, int emptyBehavior) {
    return self->newMovingRange(*range, static_cast<KTextEditor::MovingRange::InsertBehaviors>(insertBehaviors), static_cast<KTextEditor::MovingRange::EmptyBehavior>(emptyBehavior));
}

long long KTextEditor__Document_Revision(const KTextEditor__Document* self) {
    return static_cast<long long>(self->revision());
}

long long KTextEditor__Document_LastSavedRevision(const KTextEditor__Document* self) {
    return static_cast<long long>(self->lastSavedRevision());
}

void KTextEditor__Document_LockRevision(KTextEditor__Document* self, long long revision) {
    self->lockRevision(static_cast<qint64>(revision));
}

void KTextEditor__Document_UnlockRevision(KTextEditor__Document* self, long long revision) {
    self->unlockRevision(static_cast<qint64>(revision));
}

void KTextEditor__Document_TransformCursor(KTextEditor__Document* self, KTextEditor__Cursor* cursor, int insertBehavior, long long fromRevision, long long toRevision) {
    self->transformCursor(*cursor, static_cast<KTextEditor::MovingCursor::InsertBehavior>(insertBehavior), static_cast<qint64>(fromRevision), static_cast<qint64>(toRevision));
}

void KTextEditor__Document_TransformCursor2(KTextEditor__Document* self, int* line, int* column, int insertBehavior, long long fromRevision, long long toRevision) {
    self->transformCursor(static_cast<int&>(*line), static_cast<int&>(*column), static_cast<KTextEditor::MovingCursor::InsertBehavior>(insertBehavior), static_cast<qint64>(fromRevision), static_cast<qint64>(toRevision));
}

void KTextEditor__Document_TransformRange(KTextEditor__Document* self, KTextEditor__Range* range, int insertBehaviors, int emptyBehavior, long long fromRevision, long long toRevision) {
    self->transformRange(*range, static_cast<KTextEditor::MovingRange::InsertBehaviors>(insertBehaviors), static_cast<KTextEditor::MovingRange::EmptyBehavior>(emptyBehavior), static_cast<qint64>(fromRevision), static_cast<qint64>(toRevision));
}

void KTextEditor__Document_AboutToDeleteMovingInterfaceContent(KTextEditor__Document* self, KTextEditor__Document* document) {
    self->aboutToDeleteMovingInterfaceContent(document);
}

void KTextEditor__Document_Connect_AboutToDeleteMovingInterfaceContent(KTextEditor__Document* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Document*, KTextEditor__Document*) = reinterpret_cast<void (*)(KTextEditor__Document*, KTextEditor__Document*)>(slot);
    KTextEditor::Document::connect(self, &KTextEditor::Document::aboutToDeleteMovingInterfaceContent, [self, slotFunc](KTextEditor::Document* document) {
        KTextEditor__Document* sigval1 = document;
        slotFunc(self, sigval1);
    });
}

void KTextEditor__Document_AboutToInvalidateMovingInterfaceContent(KTextEditor__Document* self, KTextEditor__Document* document) {
    self->aboutToInvalidateMovingInterfaceContent(document);
}

void KTextEditor__Document_Connect_AboutToInvalidateMovingInterfaceContent(KTextEditor__Document* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Document*, KTextEditor__Document*) = reinterpret_cast<void (*)(KTextEditor__Document*, KTextEditor__Document*)>(slot);
    KTextEditor::Document::connect(self, &KTextEditor::Document::aboutToInvalidateMovingInterfaceContent, [self, slotFunc](KTextEditor::Document* document) {
        KTextEditor__Document* sigval1 = document;
        slotFunc(self, sigval1);
    });
}

libqt_list /* of libqt_string */ KTextEditor__Document_ConfigKeys(const KTextEditor__Document* self) {
    QList<QString> _ret = self->configKeys();
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

QVariant* KTextEditor__Document_ConfigValue(KTextEditor__Document* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QVariant(self->configValue(key_QString));
}

void KTextEditor__Document_SetConfigValue(KTextEditor__Document* self, const libqt_string key, const QVariant* value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->setConfigValue(key_QString, *value);
}

void KTextEditor__Document_SetModifiedOnDisk(KTextEditor__Document* self, int reason) {
    self->setModifiedOnDisk(static_cast<KTextEditor::Document::ModifiedOnDiskReason>(reason));
}

void KTextEditor__Document_SetModifiedOnDiskWarning(KTextEditor__Document* self, bool on) {
    self->setModifiedOnDiskWarning(on);
}

void KTextEditor__Document_ModifiedOnDisk(KTextEditor__Document* self, KTextEditor__Document* document, bool isModified, int reason) {
    self->modifiedOnDisk(document, isModified, static_cast<KTextEditor::Document::ModifiedOnDiskReason>(reason));
}

void KTextEditor__Document_Connect_ModifiedOnDisk(KTextEditor__Document* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Document*, KTextEditor__Document*, bool, int) = reinterpret_cast<void (*)(KTextEditor__Document*, KTextEditor__Document*, bool, int)>(slot);
    KTextEditor::Document::connect(self, &KTextEditor::Document::modifiedOnDisk, [self, slotFunc](KTextEditor::Document* document, bool isModified, KTextEditor::Document::ModifiedOnDiskReason reason) {
        KTextEditor__Document* sigval1 = document;
        bool sigval2 = isModified;
        int sigval3 = static_cast<int>(reason);
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

unsigned int KTextEditor__Document_Mark(KTextEditor__Document* self, int line) {
    return static_cast<unsigned int>(self->mark(static_cast<int>(line)));
}

void KTextEditor__Document_SetMark(KTextEditor__Document* self, int line, unsigned int markType) {
    self->setMark(static_cast<int>(line), static_cast<uint>(markType));
}

void KTextEditor__Document_ClearMark(KTextEditor__Document* self, int line) {
    self->clearMark(static_cast<int>(line));
}

void KTextEditor__Document_AddMark(KTextEditor__Document* self, int line, unsigned int markType) {
    self->addMark(static_cast<int>(line), static_cast<uint>(markType));
}

void KTextEditor__Document_RemoveMark(KTextEditor__Document* self, int line, unsigned int markType) {
    self->removeMark(static_cast<int>(line), static_cast<uint>(markType));
}

libqt_map /* of int to KTextEditor__Mark* */ KTextEditor__Document_Marks(KTextEditor__Document* self) {
    const QHash<int, KTextEditor::Mark*>& _ret = self->marks();
    // Convert QHash<> from C++ memory to manually-managed C memory
    int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    KTextEditor__Mark** _varr = static_cast<KTextEditor__Mark**>(malloc(sizeof(KTextEditor__Mark*) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        _karr[_ctr] = _itr->first;
        _varr[_ctr] = _itr->second;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

void KTextEditor__Document_ClearMarks(KTextEditor__Document* self) {
    self->clearMarks();
}

int KTextEditor__Document_ReservedMarkersCount() {
    return KTextEditor::Document::reservedMarkersCount();
}

void KTextEditor__Document_SetMarkDescription(KTextEditor__Document* self, int mark, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setMarkDescription(static_cast<KTextEditor::Document::MarkTypes>(mark), text_QString);
}

libqt_string KTextEditor__Document_MarkDescription(const KTextEditor__Document* self, int mark) {
    QString _ret = self->markDescription(static_cast<KTextEditor::Document::MarkTypes>(mark));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KTextEditor__Document_SetEditableMarks(KTextEditor__Document* self, unsigned int markMask) {
    self->setEditableMarks(static_cast<uint>(markMask));
}

unsigned int KTextEditor__Document_EditableMarks(const KTextEditor__Document* self) {
    return static_cast<unsigned int>(self->editableMarks());
}

void KTextEditor__Document_SetMarkIcon(KTextEditor__Document* self, int markType, const QIcon* icon) {
    self->setMarkIcon(static_cast<KTextEditor::Document::MarkTypes>(markType), *icon);
}

QIcon* KTextEditor__Document_MarkIcon(const KTextEditor__Document* self, int markType) {
    return new QIcon(self->markIcon(static_cast<KTextEditor::Document::MarkTypes>(markType)));
}

void KTextEditor__Document_MarksChanged(KTextEditor__Document* self, KTextEditor__Document* document) {
    self->marksChanged(document);
}

void KTextEditor__Document_Connect_MarksChanged(KTextEditor__Document* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Document*, KTextEditor__Document*) = reinterpret_cast<void (*)(KTextEditor__Document*, KTextEditor__Document*)>(slot);
    KTextEditor::Document::connect(self, &KTextEditor::Document::marksChanged, [self, slotFunc](KTextEditor::Document* document) {
        KTextEditor__Document* sigval1 = document;
        slotFunc(self, sigval1);
    });
}

void KTextEditor__Document_MarkChanged(KTextEditor__Document* self, KTextEditor__Document* document, KTextEditor__Mark* mark, int action) {
    self->markChanged(document, *mark, static_cast<KTextEditor::Document::MarkChangeAction>(action));
}

void KTextEditor__Document_Connect_MarkChanged(KTextEditor__Document* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Document*, KTextEditor__Document*, KTextEditor__Mark*, int) = reinterpret_cast<void (*)(KTextEditor__Document*, KTextEditor__Document*, KTextEditor__Mark*, int)>(slot);
    KTextEditor::Document::connect(self, &KTextEditor::Document::markChanged, [self, slotFunc](KTextEditor::Document* document, KTextEditor::Mark mark, KTextEditor::Document::MarkChangeAction action) {
        KTextEditor__Document* sigval1 = document;
        KTextEditor__Mark* sigval2 = new KTextEditor::Mark(mark);
        int sigval3 = static_cast<int>(action);
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void KTextEditor__Document_MarkToolTipRequested(KTextEditor__Document* self, KTextEditor__Document* document, KTextEditor__Mark* mark, QPoint* position, bool* handled) {
    self->markToolTipRequested(document, *mark, *position, *handled);
}

void KTextEditor__Document_Connect_MarkToolTipRequested(KTextEditor__Document* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Document*, KTextEditor__Document*, KTextEditor__Mark*, QPoint*, bool*) = reinterpret_cast<void (*)(KTextEditor__Document*, KTextEditor__Document*, KTextEditor__Mark*, QPoint*, bool*)>(slot);
    KTextEditor::Document::connect(self, &KTextEditor::Document::markToolTipRequested, [self, slotFunc](KTextEditor::Document* document, KTextEditor::Mark mark, QPoint position, bool& handled) {
        KTextEditor__Document* sigval1 = document;
        KTextEditor__Mark* sigval2 = new KTextEditor::Mark(mark);
        QPoint* sigval3 = new QPoint(position);
        bool* sigval4 = &handled;
        slotFunc(self, sigval1, sigval2, sigval3, sigval4);
    });
}

void KTextEditor__Document_MarkContextMenuRequested(KTextEditor__Document* self, KTextEditor__Document* document, KTextEditor__Mark* mark, QPoint* pos, bool* handled) {
    self->markContextMenuRequested(document, *mark, *pos, *handled);
}

void KTextEditor__Document_Connect_MarkContextMenuRequested(KTextEditor__Document* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Document*, KTextEditor__Document*, KTextEditor__Mark*, QPoint*, bool*) = reinterpret_cast<void (*)(KTextEditor__Document*, KTextEditor__Document*, KTextEditor__Mark*, QPoint*, bool*)>(slot);
    KTextEditor::Document::connect(self, &KTextEditor::Document::markContextMenuRequested, [self, slotFunc](KTextEditor::Document* document, KTextEditor::Mark mark, QPoint pos, bool& handled) {
        KTextEditor__Document* sigval1 = document;
        KTextEditor__Mark* sigval2 = new KTextEditor::Mark(mark);
        QPoint* sigval3 = new QPoint(pos);
        bool* sigval4 = &handled;
        slotFunc(self, sigval1, sigval2, sigval3, sigval4);
    });
}

void KTextEditor__Document_MarkClicked(KTextEditor__Document* self, KTextEditor__Document* document, KTextEditor__Mark* mark, bool* handled) {
    self->markClicked(document, *mark, *handled);
}

void KTextEditor__Document_Connect_MarkClicked(KTextEditor__Document* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Document*, KTextEditor__Document*, KTextEditor__Mark*, bool*) = reinterpret_cast<void (*)(KTextEditor__Document*, KTextEditor__Document*, KTextEditor__Mark*, bool*)>(slot);
    KTextEditor::Document::connect(self, &KTextEditor::Document::markClicked, [self, slotFunc](KTextEditor::Document* document, KTextEditor::Mark mark, bool& handled) {
        KTextEditor__Document* sigval1 = document;
        KTextEditor__Mark* sigval2 = new KTextEditor::Mark(mark);
        bool* sigval3 = &handled;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void KTextEditor__Document_SetAnnotationModel(KTextEditor__Document* self, KTextEditor__AnnotationModel* model) {
    self->setAnnotationModel(model);
}

KTextEditor__AnnotationModel* KTextEditor__Document_AnnotationModel(const KTextEditor__Document* self) {
    return self->annotationModel();
}

libqt_string KTextEditor__Document_Tr2(const char* s, const char* c) {
    QString _ret = KTextEditor::Document::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTextEditor__Document_Tr3(const char* s, const char* c, int n) {
    QString _ret = KTextEditor::Document::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of KTextEditor__Range* */ KTextEditor__Document_SearchText3(const KTextEditor__Document* self, KTextEditor__Range* range, const libqt_string pattern, const int options) {
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    QList<KTextEditor::Range> _ret = self->searchText(*range, pattern_QString, static_cast<const KTextEditor::SearchOptions>(options));
    // Convert QList<> from C++ memory to manually-managed C memory
    KTextEditor__Range** _arr = static_cast<KTextEditor__Range**>(malloc(sizeof(KTextEditor__Range*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KTextEditor::Range(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KTextEditor__Document_Delete(KTextEditor__Document* self) {
    delete self;
}

KTextEditor__Document__EditingTransaction* KTextEditor__Document__EditingTransaction_new(KTextEditor__Document* document) {
    return new KTextEditor::Document::EditingTransaction(document);
}

void KTextEditor__Document__EditingTransaction_Start(KTextEditor__Document__EditingTransaction* self) {
    self->start();
}

void KTextEditor__Document__EditingTransaction_Finish(KTextEditor__Document__EditingTransaction* self) {
    self->finish();
}

void KTextEditor__Document__EditingTransaction_Delete(KTextEditor__Document__EditingTransaction* self) {
    delete self;
}
