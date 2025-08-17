#include <QAbstractTextDocumentLayout>
#include <QAbstractUndoItem>
#include <QChar>
#include <QChildEvent>
#include <QEvent>
#include <QFont>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPagedPaintDevice>
#include <QPainter>
#include <QRectF>
#include <QRegularExpression>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextBlock>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextFormat>
#include <QTextFrame>
#include <QTextObject>
#include <QTextOption>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <qtextdocument.h>
#include "libqtextdocument.h"
#include "libqtextdocument.hxx"

void QAbstractUndoItem_Undo(QAbstractUndoItem* self) {
    self->undo();
}

void QAbstractUndoItem_Redo(QAbstractUndoItem* self) {
    self->redo();
}

void QAbstractUndoItem_OperatorAssign(QAbstractUndoItem* self, const QAbstractUndoItem* param1) {
    self->operator=(*param1);
}

void QAbstractUndoItem_Delete(QAbstractUndoItem* self) {
    delete self;
}

QTextDocument* QTextDocument_new() {
    return new VirtualQTextDocument();
}

QTextDocument* QTextDocument_new2(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQTextDocument(text_QString);
}

QTextDocument* QTextDocument_new3(QObject* parent) {
    return new VirtualQTextDocument(parent);
}

QTextDocument* QTextDocument_new4(const libqt_string text, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQTextDocument(text_QString, parent);
}

QMetaObject* QTextDocument_MetaObject(const QTextDocument* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTextDocument_Metacast(QTextDocument* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTextDocument_Metacall(QTextDocument* self, int param1, int param2, void** param3) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTextDocument*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTextDocument_OnMetacall(QTextDocument* self, intptr_t slot) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_Metacall_Callback(reinterpret_cast<VirtualQTextDocument::QTextDocument_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTextDocument_QBaseMetacall(QTextDocument* self, int param1, int param2, void** param3) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_Metacall_IsBase(true);
        return vqtextdocument->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTextDocument*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QTextDocument_Tr(const char* s) {
    QString _ret = QTextDocument::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QTextDocument* QTextDocument_Clone(const QTextDocument* self) {
    return self->clone();
}

bool QTextDocument_IsEmpty(const QTextDocument* self) {
    return self->isEmpty();
}

void QTextDocument_SetUndoRedoEnabled(QTextDocument* self, bool enable) {
    self->setUndoRedoEnabled(enable);
}

bool QTextDocument_IsUndoRedoEnabled(const QTextDocument* self) {
    return self->isUndoRedoEnabled();
}

bool QTextDocument_IsUndoAvailable(const QTextDocument* self) {
    return self->isUndoAvailable();
}

bool QTextDocument_IsRedoAvailable(const QTextDocument* self) {
    return self->isRedoAvailable();
}

int QTextDocument_AvailableUndoSteps(const QTextDocument* self) {
    return self->availableUndoSteps();
}

int QTextDocument_AvailableRedoSteps(const QTextDocument* self) {
    return self->availableRedoSteps();
}

int QTextDocument_Revision(const QTextDocument* self) {
    return self->revision();
}

void QTextDocument_SetDocumentLayout(QTextDocument* self, QAbstractTextDocumentLayout* layout) {
    self->setDocumentLayout(layout);
}

QAbstractTextDocumentLayout* QTextDocument_DocumentLayout(const QTextDocument* self) {
    return self->documentLayout();
}

void QTextDocument_SetMetaInformation(QTextDocument* self, int info, const libqt_string param2) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    self->setMetaInformation(static_cast<QTextDocument::MetaInformation>(info), param2_QString);
}

libqt_string QTextDocument_MetaInformation(const QTextDocument* self, int info) {
    QString _ret = self->metaInformation(static_cast<QTextDocument::MetaInformation>(info));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTextDocument_ToHtml(const QTextDocument* self) {
    QString _ret = self->toHtml();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTextDocument_SetHtml(QTextDocument* self, const libqt_string html) {
    QString html_QString = QString::fromUtf8(html.data, html.len);
    self->setHtml(html_QString);
}

libqt_string QTextDocument_ToMarkdown(const QTextDocument* self) {
    QString _ret = self->toMarkdown();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTextDocument_SetMarkdown(QTextDocument* self, const libqt_string markdown) {
    QString markdown_QString = QString::fromUtf8(markdown.data, markdown.len);
    self->setMarkdown(markdown_QString);
}

libqt_string QTextDocument_ToRawText(const QTextDocument* self) {
    QString _ret = self->toRawText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTextDocument_ToPlainText(const QTextDocument* self) {
    QString _ret = self->toPlainText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTextDocument_SetPlainText(QTextDocument* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setPlainText(text_QString);
}

QChar* QTextDocument_CharacterAt(const QTextDocument* self, int pos) {
    return new QChar(self->characterAt(static_cast<int>(pos)));
}

QTextCursor* QTextDocument_Find(const QTextDocument* self, const libqt_string subString) {
    QString subString_QString = QString::fromUtf8(subString.data, subString.len);
    return new QTextCursor(self->find(subString_QString));
}

QTextCursor* QTextDocument_Find2(const QTextDocument* self, const libqt_string subString, const QTextCursor* cursor) {
    QString subString_QString = QString::fromUtf8(subString.data, subString.len);
    return new QTextCursor(self->find(subString_QString, *cursor));
}

QTextCursor* QTextDocument_Find3(const QTextDocument* self, const QRegularExpression* expr) {
    return new QTextCursor(self->find(*expr));
}

QTextCursor* QTextDocument_Find4(const QTextDocument* self, const QRegularExpression* expr, const QTextCursor* cursor) {
    return new QTextCursor(self->find(*expr, *cursor));
}

QTextFrame* QTextDocument_FrameAt(const QTextDocument* self, int pos) {
    return self->frameAt(static_cast<int>(pos));
}

QTextFrame* QTextDocument_RootFrame(const QTextDocument* self) {
    return self->rootFrame();
}

QTextObject* QTextDocument_Object(const QTextDocument* self, int objectIndex) {
    return self->object(static_cast<int>(objectIndex));
}

QTextObject* QTextDocument_ObjectForFormat(const QTextDocument* self, const QTextFormat* param1) {
    return self->objectForFormat(*param1);
}

QTextBlock* QTextDocument_FindBlock(const QTextDocument* self, int pos) {
    return new QTextBlock(self->findBlock(static_cast<int>(pos)));
}

QTextBlock* QTextDocument_FindBlockByNumber(const QTextDocument* self, int blockNumber) {
    return new QTextBlock(self->findBlockByNumber(static_cast<int>(blockNumber)));
}

QTextBlock* QTextDocument_FindBlockByLineNumber(const QTextDocument* self, int blockNumber) {
    return new QTextBlock(self->findBlockByLineNumber(static_cast<int>(blockNumber)));
}

QTextBlock* QTextDocument_Begin(const QTextDocument* self) {
    return new QTextBlock(self->begin());
}

QTextBlock* QTextDocument_End(const QTextDocument* self) {
    return new QTextBlock(self->end());
}

QTextBlock* QTextDocument_FirstBlock(const QTextDocument* self) {
    return new QTextBlock(self->firstBlock());
}

QTextBlock* QTextDocument_LastBlock(const QTextDocument* self) {
    return new QTextBlock(self->lastBlock());
}

void QTextDocument_SetPageSize(QTextDocument* self, const QSizeF* size) {
    self->setPageSize(*size);
}

QSizeF* QTextDocument_PageSize(const QTextDocument* self) {
    return new QSizeF(self->pageSize());
}

void QTextDocument_SetDefaultFont(QTextDocument* self, const QFont* font) {
    self->setDefaultFont(*font);
}

QFont* QTextDocument_DefaultFont(const QTextDocument* self) {
    return new QFont(self->defaultFont());
}

void QTextDocument_SetSuperScriptBaseline(QTextDocument* self, double baseline) {
    self->setSuperScriptBaseline(static_cast<qreal>(baseline));
}

double QTextDocument_SuperScriptBaseline(const QTextDocument* self) {
    return static_cast<double>(self->superScriptBaseline());
}

void QTextDocument_SetSubScriptBaseline(QTextDocument* self, double baseline) {
    self->setSubScriptBaseline(static_cast<qreal>(baseline));
}

double QTextDocument_SubScriptBaseline(const QTextDocument* self) {
    return static_cast<double>(self->subScriptBaseline());
}

void QTextDocument_SetBaselineOffset(QTextDocument* self, double baseline) {
    self->setBaselineOffset(static_cast<qreal>(baseline));
}

double QTextDocument_BaselineOffset(const QTextDocument* self) {
    return static_cast<double>(self->baselineOffset());
}

int QTextDocument_PageCount(const QTextDocument* self) {
    return self->pageCount();
}

bool QTextDocument_IsModified(const QTextDocument* self) {
    return self->isModified();
}

void QTextDocument_Print(const QTextDocument* self, QPagedPaintDevice* printer) {
    self->print(printer);
}

QVariant* QTextDocument_Resource(const QTextDocument* self, int typeVal, const QUrl* name) {
    return new QVariant(self->resource(static_cast<int>(typeVal), *name));
}

void QTextDocument_AddResource(QTextDocument* self, int typeVal, const QUrl* name, const QVariant* resource) {
    self->addResource(static_cast<int>(typeVal), *name, *resource);
}

libqt_list /* of QTextFormat* */ QTextDocument_AllFormats(const QTextDocument* self) {
    QList<QTextFormat> _ret = self->allFormats();
    // Convert QList<> from C++ memory to manually-managed C memory
    QTextFormat** _arr = static_cast<QTextFormat**>(malloc(sizeof(QTextFormat*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QTextFormat(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QTextDocument_MarkContentsDirty(QTextDocument* self, int from, int length) {
    self->markContentsDirty(static_cast<int>(from), static_cast<int>(length));
}

void QTextDocument_SetUseDesignMetrics(QTextDocument* self, bool b) {
    self->setUseDesignMetrics(b);
}

bool QTextDocument_UseDesignMetrics(const QTextDocument* self) {
    return self->useDesignMetrics();
}

void QTextDocument_SetLayoutEnabled(QTextDocument* self, bool b) {
    self->setLayoutEnabled(b);
}

bool QTextDocument_IsLayoutEnabled(const QTextDocument* self) {
    return self->isLayoutEnabled();
}

void QTextDocument_DrawContents(QTextDocument* self, QPainter* painter) {
    self->drawContents(painter);
}

void QTextDocument_SetTextWidth(QTextDocument* self, double width) {
    self->setTextWidth(static_cast<qreal>(width));
}

double QTextDocument_TextWidth(const QTextDocument* self) {
    return static_cast<double>(self->textWidth());
}

double QTextDocument_IdealWidth(const QTextDocument* self) {
    return static_cast<double>(self->idealWidth());
}

double QTextDocument_IndentWidth(const QTextDocument* self) {
    return static_cast<double>(self->indentWidth());
}

void QTextDocument_SetIndentWidth(QTextDocument* self, double width) {
    self->setIndentWidth(static_cast<qreal>(width));
}

double QTextDocument_DocumentMargin(const QTextDocument* self) {
    return static_cast<double>(self->documentMargin());
}

void QTextDocument_SetDocumentMargin(QTextDocument* self, double margin) {
    self->setDocumentMargin(static_cast<qreal>(margin));
}

void QTextDocument_AdjustSize(QTextDocument* self) {
    self->adjustSize();
}

QSizeF* QTextDocument_Size(const QTextDocument* self) {
    return new QSizeF(self->size());
}

int QTextDocument_BlockCount(const QTextDocument* self) {
    return self->blockCount();
}

int QTextDocument_LineCount(const QTextDocument* self) {
    return self->lineCount();
}

int QTextDocument_CharacterCount(const QTextDocument* self) {
    return self->characterCount();
}

void QTextDocument_SetDefaultStyleSheet(QTextDocument* self, const libqt_string sheet) {
    QString sheet_QString = QString::fromUtf8(sheet.data, sheet.len);
    self->setDefaultStyleSheet(sheet_QString);
}

libqt_string QTextDocument_DefaultStyleSheet(const QTextDocument* self) {
    QString _ret = self->defaultStyleSheet();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTextDocument_Undo(QTextDocument* self, QTextCursor* cursor) {
    self->undo(cursor);
}

void QTextDocument_Redo(QTextDocument* self, QTextCursor* cursor) {
    self->redo(cursor);
}

void QTextDocument_ClearUndoRedoStacks(QTextDocument* self) {
    self->clearUndoRedoStacks();
}

int QTextDocument_MaximumBlockCount(const QTextDocument* self) {
    return self->maximumBlockCount();
}

void QTextDocument_SetMaximumBlockCount(QTextDocument* self, int maximum) {
    self->setMaximumBlockCount(static_cast<int>(maximum));
}

QTextOption* QTextDocument_DefaultTextOption(const QTextDocument* self) {
    return new QTextOption(self->defaultTextOption());
}

void QTextDocument_SetDefaultTextOption(QTextDocument* self, const QTextOption* option) {
    self->setDefaultTextOption(*option);
}

QUrl* QTextDocument_BaseUrl(const QTextDocument* self) {
    return new QUrl(self->baseUrl());
}

void QTextDocument_SetBaseUrl(QTextDocument* self, const QUrl* url) {
    self->setBaseUrl(*url);
}

int QTextDocument_DefaultCursorMoveStyle(const QTextDocument* self) {
    return static_cast<int>(self->defaultCursorMoveStyle());
}

void QTextDocument_SetDefaultCursorMoveStyle(QTextDocument* self, int style) {
    self->setDefaultCursorMoveStyle(static_cast<Qt::CursorMoveStyle>(style));
}

void QTextDocument_ContentsChange(QTextDocument* self, int from, int charsRemoved, int charsAdded) {
    self->contentsChange(static_cast<int>(from), static_cast<int>(charsRemoved), static_cast<int>(charsAdded));
}

void QTextDocument_Connect_ContentsChange(QTextDocument* self, intptr_t slot) {
    void (*slotFunc)(QTextDocument*, int, int, int) = reinterpret_cast<void (*)(QTextDocument*, int, int, int)>(slot);
    QTextDocument::connect(self, &QTextDocument::contentsChange, [self, slotFunc](int from, int charsRemoved, int charsAdded) {
        int sigval1 = from;
        int sigval2 = charsRemoved;
        int sigval3 = charsAdded;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QTextDocument_ContentsChanged(QTextDocument* self) {
    self->contentsChanged();
}

void QTextDocument_Connect_ContentsChanged(QTextDocument* self, intptr_t slot) {
    void (*slotFunc)(QTextDocument*) = reinterpret_cast<void (*)(QTextDocument*)>(slot);
    QTextDocument::connect(self, &QTextDocument::contentsChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QTextDocument_UndoAvailable(QTextDocument* self, bool param1) {
    self->undoAvailable(param1);
}

void QTextDocument_Connect_UndoAvailable(QTextDocument* self, intptr_t slot) {
    void (*slotFunc)(QTextDocument*, bool) = reinterpret_cast<void (*)(QTextDocument*, bool)>(slot);
    QTextDocument::connect(self, &QTextDocument::undoAvailable, [self, slotFunc](bool param1) {
        bool sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QTextDocument_RedoAvailable(QTextDocument* self, bool param1) {
    self->redoAvailable(param1);
}

void QTextDocument_Connect_RedoAvailable(QTextDocument* self, intptr_t slot) {
    void (*slotFunc)(QTextDocument*, bool) = reinterpret_cast<void (*)(QTextDocument*, bool)>(slot);
    QTextDocument::connect(self, &QTextDocument::redoAvailable, [self, slotFunc](bool param1) {
        bool sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QTextDocument_UndoCommandAdded(QTextDocument* self) {
    self->undoCommandAdded();
}

void QTextDocument_Connect_UndoCommandAdded(QTextDocument* self, intptr_t slot) {
    void (*slotFunc)(QTextDocument*) = reinterpret_cast<void (*)(QTextDocument*)>(slot);
    QTextDocument::connect(self, &QTextDocument::undoCommandAdded, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QTextDocument_ModificationChanged(QTextDocument* self, bool m) {
    self->modificationChanged(m);
}

void QTextDocument_Connect_ModificationChanged(QTextDocument* self, intptr_t slot) {
    void (*slotFunc)(QTextDocument*, bool) = reinterpret_cast<void (*)(QTextDocument*, bool)>(slot);
    QTextDocument::connect(self, &QTextDocument::modificationChanged, [self, slotFunc](bool m) {
        bool sigval1 = m;
        slotFunc(self, sigval1);
    });
}

void QTextDocument_CursorPositionChanged(QTextDocument* self, const QTextCursor* cursor) {
    self->cursorPositionChanged(*cursor);
}

void QTextDocument_Connect_CursorPositionChanged(QTextDocument* self, intptr_t slot) {
    void (*slotFunc)(QTextDocument*, QTextCursor*) = reinterpret_cast<void (*)(QTextDocument*, QTextCursor*)>(slot);
    QTextDocument::connect(self, &QTextDocument::cursorPositionChanged, [self, slotFunc](const QTextCursor& cursor) {
        const QTextCursor& cursor_ret = cursor;
        // Cast returned reference into pointer
        QTextCursor* sigval1 = const_cast<QTextCursor*>(&cursor_ret);
        slotFunc(self, sigval1);
    });
}

void QTextDocument_BlockCountChanged(QTextDocument* self, int newBlockCount) {
    self->blockCountChanged(static_cast<int>(newBlockCount));
}

void QTextDocument_Connect_BlockCountChanged(QTextDocument* self, intptr_t slot) {
    void (*slotFunc)(QTextDocument*, int) = reinterpret_cast<void (*)(QTextDocument*, int)>(slot);
    QTextDocument::connect(self, &QTextDocument::blockCountChanged, [self, slotFunc](int newBlockCount) {
        int sigval1 = newBlockCount;
        slotFunc(self, sigval1);
    });
}

void QTextDocument_BaseUrlChanged(QTextDocument* self, const QUrl* url) {
    self->baseUrlChanged(*url);
}

void QTextDocument_Connect_BaseUrlChanged(QTextDocument* self, intptr_t slot) {
    void (*slotFunc)(QTextDocument*, QUrl*) = reinterpret_cast<void (*)(QTextDocument*, QUrl*)>(slot);
    QTextDocument::connect(self, &QTextDocument::baseUrlChanged, [self, slotFunc](const QUrl& url) {
        const QUrl& url_ret = url;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
        slotFunc(self, sigval1);
    });
}

void QTextDocument_DocumentLayoutChanged(QTextDocument* self) {
    self->documentLayoutChanged();
}

void QTextDocument_Connect_DocumentLayoutChanged(QTextDocument* self, intptr_t slot) {
    void (*slotFunc)(QTextDocument*) = reinterpret_cast<void (*)(QTextDocument*)>(slot);
    QTextDocument::connect(self, &QTextDocument::documentLayoutChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QTextDocument_Undo2(QTextDocument* self) {
    self->undo();
}

void QTextDocument_Redo2(QTextDocument* self) {
    self->redo();
}

void QTextDocument_AppendUndoItem(QTextDocument* self, QAbstractUndoItem* param1) {
    self->appendUndoItem(param1);
}

void QTextDocument_SetModified(QTextDocument* self) {
    self->setModified();
}

libqt_string QTextDocument_Tr2(const char* s, const char* c) {
    QString _ret = QTextDocument::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTextDocument_Tr3(const char* s, const char* c, int n) {
    QString _ret = QTextDocument::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QTextDocument* QTextDocument_Clone1(const QTextDocument* self, QObject* parent) {
    return self->clone(parent);
}

libqt_string QTextDocument_ToMarkdown1(const QTextDocument* self, int features) {
    QString _ret = self->toMarkdown(static_cast<QTextDocument::MarkdownFeatures>(features));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTextDocument_SetMarkdown2(QTextDocument* self, const libqt_string markdown, int features) {
    QString markdown_QString = QString::fromUtf8(markdown.data, markdown.len);
    self->setMarkdown(markdown_QString, static_cast<QTextDocument::MarkdownFeatures>(features));
}

QTextCursor* QTextDocument_Find22(const QTextDocument* self, const libqt_string subString, int from) {
    QString subString_QString = QString::fromUtf8(subString.data, subString.len);
    return new QTextCursor(self->find(subString_QString, static_cast<int>(from)));
}

QTextCursor* QTextDocument_Find32(const QTextDocument* self, const libqt_string subString, int from, int options) {
    QString subString_QString = QString::fromUtf8(subString.data, subString.len);
    return new QTextCursor(self->find(subString_QString, static_cast<int>(from), static_cast<QTextDocument::FindFlags>(options)));
}

QTextCursor* QTextDocument_Find33(const QTextDocument* self, const libqt_string subString, const QTextCursor* cursor, int options) {
    QString subString_QString = QString::fromUtf8(subString.data, subString.len);
    return new QTextCursor(self->find(subString_QString, *cursor, static_cast<QTextDocument::FindFlags>(options)));
}

QTextCursor* QTextDocument_Find23(const QTextDocument* self, const QRegularExpression* expr, int from) {
    return new QTextCursor(self->find(*expr, static_cast<int>(from)));
}

QTextCursor* QTextDocument_Find34(const QTextDocument* self, const QRegularExpression* expr, int from, int options) {
    return new QTextCursor(self->find(*expr, static_cast<int>(from), static_cast<QTextDocument::FindFlags>(options)));
}

QTextCursor* QTextDocument_Find35(const QTextDocument* self, const QRegularExpression* expr, const QTextCursor* cursor, int options) {
    return new QTextCursor(self->find(*expr, *cursor, static_cast<QTextDocument::FindFlags>(options)));
}

void QTextDocument_DrawContents2(QTextDocument* self, QPainter* painter, const QRectF* rect) {
    self->drawContents(painter, *rect);
}

void QTextDocument_ClearUndoRedoStacks1(QTextDocument* self, int historyToClear) {
    self->clearUndoRedoStacks(static_cast<QTextDocument::Stacks>(historyToClear));
}

void QTextDocument_SetModified1(QTextDocument* self, bool m) {
    self->setModified(m);
}

// Derived class handler implementation
void QTextDocument_Clear(QTextDocument* self) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->clear();
    } else {
        self->QTextDocument::clear();
    }
}

// Base class handler implementation
void QTextDocument_QBaseClear(QTextDocument* self) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_Clear_IsBase(true);
        vqtextdocument->clear();
    } else {
        self->QTextDocument::clear();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextDocument_OnClear(QTextDocument* self, intptr_t slot) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_Clear_Callback(reinterpret_cast<VirtualQTextDocument::QTextDocument_Clear_Callback>(slot));
    }
}

// Derived class handler implementation
QTextObject* QTextDocument_CreateObject(QTextDocument* self, const QTextFormat* f) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        return vqtextdocument->createObject(*f);
    } else {
        return ((VirtualQTextDocument*)self)->createObject(*f);
    }
}

// Base class handler implementation
QTextObject* QTextDocument_QBaseCreateObject(QTextDocument* self, const QTextFormat* f) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_CreateObject_IsBase(true);
        return vqtextdocument->createObject(*f);
    } else {
        return ((VirtualQTextDocument*)self)->createObject(*f);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextDocument_OnCreateObject(QTextDocument* self, intptr_t slot) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_CreateObject_Callback(reinterpret_cast<VirtualQTextDocument::QTextDocument_CreateObject_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QTextDocument_LoadResource(QTextDocument* self, int typeVal, const QUrl* name) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        return new QVariant(vqtextdocument->loadResource(static_cast<int>(typeVal), *name));
    }
    return {};
}

// Base class handler implementation
QVariant* QTextDocument_QBaseLoadResource(QTextDocument* self, int typeVal, const QUrl* name) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_LoadResource_IsBase(true);
        return new QVariant(vqtextdocument->loadResource(static_cast<int>(typeVal), *name));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTextDocument_OnLoadResource(QTextDocument* self, intptr_t slot) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_LoadResource_Callback(reinterpret_cast<VirtualQTextDocument::QTextDocument_LoadResource_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextDocument_Event(QTextDocument* self, QEvent* event) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        return vqtextdocument->event(event);
    } else {
        return self->QTextDocument::event(event);
    }
}

// Base class handler implementation
bool QTextDocument_QBaseEvent(QTextDocument* self, QEvent* event) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_Event_IsBase(true);
        return vqtextdocument->event(event);
    } else {
        return self->QTextDocument::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextDocument_OnEvent(QTextDocument* self, intptr_t slot) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_Event_Callback(reinterpret_cast<VirtualQTextDocument::QTextDocument_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextDocument_EventFilter(QTextDocument* self, QObject* watched, QEvent* event) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        return vqtextdocument->eventFilter(watched, event);
    } else {
        return self->QTextDocument::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QTextDocument_QBaseEventFilter(QTextDocument* self, QObject* watched, QEvent* event) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_EventFilter_IsBase(true);
        return vqtextdocument->eventFilter(watched, event);
    } else {
        return self->QTextDocument::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextDocument_OnEventFilter(QTextDocument* self, intptr_t slot) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_EventFilter_Callback(reinterpret_cast<VirtualQTextDocument::QTextDocument_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextDocument_TimerEvent(QTextDocument* self, QTimerEvent* event) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->timerEvent(event);
    } else {
        ((VirtualQTextDocument*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QTextDocument_QBaseTimerEvent(QTextDocument* self, QTimerEvent* event) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_TimerEvent_IsBase(true);
        vqtextdocument->timerEvent(event);
    } else {
        ((VirtualQTextDocument*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextDocument_OnTimerEvent(QTextDocument* self, intptr_t slot) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_TimerEvent_Callback(reinterpret_cast<VirtualQTextDocument::QTextDocument_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextDocument_ChildEvent(QTextDocument* self, QChildEvent* event) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->childEvent(event);
    } else {
        ((VirtualQTextDocument*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QTextDocument_QBaseChildEvent(QTextDocument* self, QChildEvent* event) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_ChildEvent_IsBase(true);
        vqtextdocument->childEvent(event);
    } else {
        ((VirtualQTextDocument*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextDocument_OnChildEvent(QTextDocument* self, intptr_t slot) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_ChildEvent_Callback(reinterpret_cast<VirtualQTextDocument::QTextDocument_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextDocument_CustomEvent(QTextDocument* self, QEvent* event) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->customEvent(event);
    } else {
        ((VirtualQTextDocument*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QTextDocument_QBaseCustomEvent(QTextDocument* self, QEvent* event) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_CustomEvent_IsBase(true);
        vqtextdocument->customEvent(event);
    } else {
        ((VirtualQTextDocument*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextDocument_OnCustomEvent(QTextDocument* self, intptr_t slot) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_CustomEvent_Callback(reinterpret_cast<VirtualQTextDocument::QTextDocument_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextDocument_ConnectNotify(QTextDocument* self, const QMetaMethod* signal) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->connectNotify(*signal);
    } else {
        ((VirtualQTextDocument*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTextDocument_QBaseConnectNotify(QTextDocument* self, const QMetaMethod* signal) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_ConnectNotify_IsBase(true);
        vqtextdocument->connectNotify(*signal);
    } else {
        ((VirtualQTextDocument*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextDocument_OnConnectNotify(QTextDocument* self, intptr_t slot) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_ConnectNotify_Callback(reinterpret_cast<VirtualQTextDocument::QTextDocument_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextDocument_DisconnectNotify(QTextDocument* self, const QMetaMethod* signal) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->disconnectNotify(*signal);
    } else {
        ((VirtualQTextDocument*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTextDocument_QBaseDisconnectNotify(QTextDocument* self, const QMetaMethod* signal) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_DisconnectNotify_IsBase(true);
        vqtextdocument->disconnectNotify(*signal);
    } else {
        ((VirtualQTextDocument*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextDocument_OnDisconnectNotify(QTextDocument* self, intptr_t slot) {
    auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_DisconnectNotify_Callback(reinterpret_cast<VirtualQTextDocument::QTextDocument_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTextDocument_Sender(const QTextDocument* self) {
    auto* vqtextdocument = const_cast<VirtualQTextDocument*>(dynamic_cast<const VirtualQTextDocument*>(self));
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        return vqtextdocument->sender();
    } else {
        return ((VirtualQTextDocument*)self)->sender();
    }
}

// Base class handler implementation
QObject* QTextDocument_QBaseSender(const QTextDocument* self) {
    auto* vqtextdocument = const_cast<VirtualQTextDocument*>(dynamic_cast<const VirtualQTextDocument*>(self));
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_Sender_IsBase(true);
        return vqtextdocument->sender();
    } else {
        return ((VirtualQTextDocument*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextDocument_OnSender(const QTextDocument* self, intptr_t slot) {
    auto* vqtextdocument = const_cast<VirtualQTextDocument*>(dynamic_cast<const VirtualQTextDocument*>(self));
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_Sender_Callback(reinterpret_cast<VirtualQTextDocument::QTextDocument_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTextDocument_SenderSignalIndex(const QTextDocument* self) {
    auto* vqtextdocument = const_cast<VirtualQTextDocument*>(dynamic_cast<const VirtualQTextDocument*>(self));
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        return vqtextdocument->senderSignalIndex();
    } else {
        return ((VirtualQTextDocument*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QTextDocument_QBaseSenderSignalIndex(const QTextDocument* self) {
    auto* vqtextdocument = const_cast<VirtualQTextDocument*>(dynamic_cast<const VirtualQTextDocument*>(self));
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_SenderSignalIndex_IsBase(true);
        return vqtextdocument->senderSignalIndex();
    } else {
        return ((VirtualQTextDocument*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextDocument_OnSenderSignalIndex(const QTextDocument* self, intptr_t slot) {
    auto* vqtextdocument = const_cast<VirtualQTextDocument*>(dynamic_cast<const VirtualQTextDocument*>(self));
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTextDocument::QTextDocument_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTextDocument_Receivers(const QTextDocument* self, const char* signal) {
    auto* vqtextdocument = const_cast<VirtualQTextDocument*>(dynamic_cast<const VirtualQTextDocument*>(self));
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        return vqtextdocument->receivers(signal);
    } else {
        return ((VirtualQTextDocument*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QTextDocument_QBaseReceivers(const QTextDocument* self, const char* signal) {
    auto* vqtextdocument = const_cast<VirtualQTextDocument*>(dynamic_cast<const VirtualQTextDocument*>(self));
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_Receivers_IsBase(true);
        return vqtextdocument->receivers(signal);
    } else {
        return ((VirtualQTextDocument*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextDocument_OnReceivers(const QTextDocument* self, intptr_t slot) {
    auto* vqtextdocument = const_cast<VirtualQTextDocument*>(dynamic_cast<const VirtualQTextDocument*>(self));
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_Receivers_Callback(reinterpret_cast<VirtualQTextDocument::QTextDocument_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextDocument_IsSignalConnected(const QTextDocument* self, const QMetaMethod* signal) {
    auto* vqtextdocument = const_cast<VirtualQTextDocument*>(dynamic_cast<const VirtualQTextDocument*>(self));
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        return vqtextdocument->isSignalConnected(*signal);
    } else {
        return ((VirtualQTextDocument*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTextDocument_QBaseIsSignalConnected(const QTextDocument* self, const QMetaMethod* signal) {
    auto* vqtextdocument = const_cast<VirtualQTextDocument*>(dynamic_cast<const VirtualQTextDocument*>(self));
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_IsSignalConnected_IsBase(true);
        return vqtextdocument->isSignalConnected(*signal);
    } else {
        return ((VirtualQTextDocument*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextDocument_OnIsSignalConnected(const QTextDocument* self, intptr_t slot) {
    auto* vqtextdocument = const_cast<VirtualQTextDocument*>(dynamic_cast<const VirtualQTextDocument*>(self));
    if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
        vqtextdocument->setQTextDocument_IsSignalConnected_Callback(reinterpret_cast<VirtualQTextDocument::QTextDocument_IsSignalConnected_Callback>(slot));
    }
}

void QTextDocument_Delete(QTextDocument* self) {
    delete self;
}
