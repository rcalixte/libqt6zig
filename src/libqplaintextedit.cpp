#include <QAbstractScrollArea>
#include <QAbstractTextDocumentLayout>
#define WORKAROUND_INNER_CLASS_DEFINITION_QAbstractTextDocumentLayout__PaintContext
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFrame>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
#include <QMargins>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPagedPaintDevice>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPlainTextDocumentLayout>
#include <QPlainTextEdit>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QRegularExpression>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTextBlock>
#include <QTextCharFormat>
#include <QTextCursor>
#include <QTextDocument>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTextEdit__ExtraSelection
#include <QTextFormat>
#include <QTextFrame>
#include <QTextInlineObject>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qplaintextedit.h>
#include "libqplaintextedit.h"
#include "libqplaintextedit.hxx"

QPlainTextEdit* QPlainTextEdit_new(QWidget* parent) {
    return new VirtualQPlainTextEdit(parent);
}

QPlainTextEdit* QPlainTextEdit_new2() {
    return new VirtualQPlainTextEdit();
}

QPlainTextEdit* QPlainTextEdit_new3(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQPlainTextEdit(text_QString);
}

QPlainTextEdit* QPlainTextEdit_new4(const libqt_string text, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQPlainTextEdit(text_QString, parent);
}

QMetaObject* QPlainTextEdit_MetaObject(const QPlainTextEdit* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPlainTextEdit_Metacast(QPlainTextEdit* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPlainTextEdit_Metacall(QPlainTextEdit* self, int param1, int param2, void** param3) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPlainTextEdit*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPlainTextEdit_OnMetacall(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_Metacall_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPlainTextEdit_QBaseMetacall(QPlainTextEdit* self, int param1, int param2, void** param3) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_Metacall_IsBase(true);
        return vqplaintextedit->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPlainTextEdit*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPlainTextEdit_Tr(const char* s) {
    QString _ret = QPlainTextEdit::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPlainTextEdit_SetDocument(QPlainTextEdit* self, QTextDocument* document) {
    self->setDocument(document);
}

QTextDocument* QPlainTextEdit_Document(const QPlainTextEdit* self) {
    return self->document();
}

void QPlainTextEdit_SetPlaceholderText(QPlainTextEdit* self, const libqt_string placeholderText) {
    QString placeholderText_QString = QString::fromUtf8(placeholderText.data, placeholderText.len);
    self->setPlaceholderText(placeholderText_QString);
}

libqt_string QPlainTextEdit_PlaceholderText(const QPlainTextEdit* self) {
    QString _ret = self->placeholderText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPlainTextEdit_SetTextCursor(QPlainTextEdit* self, const QTextCursor* cursor) {
    self->setTextCursor(*cursor);
}

QTextCursor* QPlainTextEdit_TextCursor(const QPlainTextEdit* self) {
    return new QTextCursor(self->textCursor());
}

bool QPlainTextEdit_IsReadOnly(const QPlainTextEdit* self) {
    return self->isReadOnly();
}

void QPlainTextEdit_SetReadOnly(QPlainTextEdit* self, bool ro) {
    self->setReadOnly(ro);
}

void QPlainTextEdit_SetTextInteractionFlags(QPlainTextEdit* self, int flags) {
    self->setTextInteractionFlags(static_cast<Qt::TextInteractionFlags>(flags));
}

int QPlainTextEdit_TextInteractionFlags(const QPlainTextEdit* self) {
    return static_cast<int>(self->textInteractionFlags());
}

void QPlainTextEdit_MergeCurrentCharFormat(QPlainTextEdit* self, const QTextCharFormat* modifier) {
    self->mergeCurrentCharFormat(*modifier);
}

void QPlainTextEdit_SetCurrentCharFormat(QPlainTextEdit* self, const QTextCharFormat* format) {
    self->setCurrentCharFormat(*format);
}

QTextCharFormat* QPlainTextEdit_CurrentCharFormat(const QPlainTextEdit* self) {
    return new QTextCharFormat(self->currentCharFormat());
}

bool QPlainTextEdit_TabChangesFocus(const QPlainTextEdit* self) {
    return self->tabChangesFocus();
}

void QPlainTextEdit_SetTabChangesFocus(QPlainTextEdit* self, bool b) {
    self->setTabChangesFocus(b);
}

void QPlainTextEdit_SetDocumentTitle(QPlainTextEdit* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setDocumentTitle(title_QString);
}

libqt_string QPlainTextEdit_DocumentTitle(const QPlainTextEdit* self) {
    QString _ret = self->documentTitle();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QPlainTextEdit_IsUndoRedoEnabled(const QPlainTextEdit* self) {
    return self->isUndoRedoEnabled();
}

void QPlainTextEdit_SetUndoRedoEnabled(QPlainTextEdit* self, bool enable) {
    self->setUndoRedoEnabled(enable);
}

void QPlainTextEdit_SetMaximumBlockCount(QPlainTextEdit* self, int maximum) {
    self->setMaximumBlockCount(static_cast<int>(maximum));
}

int QPlainTextEdit_MaximumBlockCount(const QPlainTextEdit* self) {
    return self->maximumBlockCount();
}

int QPlainTextEdit_LineWrapMode(const QPlainTextEdit* self) {
    return static_cast<int>(self->lineWrapMode());
}

void QPlainTextEdit_SetLineWrapMode(QPlainTextEdit* self, int mode) {
    self->setLineWrapMode(static_cast<QPlainTextEdit::LineWrapMode>(mode));
}

int QPlainTextEdit_WordWrapMode(const QPlainTextEdit* self) {
    return static_cast<int>(self->wordWrapMode());
}

void QPlainTextEdit_SetWordWrapMode(QPlainTextEdit* self, int policy) {
    self->setWordWrapMode(static_cast<QTextOption::WrapMode>(policy));
}

void QPlainTextEdit_SetBackgroundVisible(QPlainTextEdit* self, bool visible) {
    self->setBackgroundVisible(visible);
}

bool QPlainTextEdit_BackgroundVisible(const QPlainTextEdit* self) {
    return self->backgroundVisible();
}

void QPlainTextEdit_SetCenterOnScroll(QPlainTextEdit* self, bool enabled) {
    self->setCenterOnScroll(enabled);
}

bool QPlainTextEdit_CenterOnScroll(const QPlainTextEdit* self) {
    return self->centerOnScroll();
}

bool QPlainTextEdit_Find(QPlainTextEdit* self, const libqt_string exp) {
    QString exp_QString = QString::fromUtf8(exp.data, exp.len);
    return self->find(exp_QString);
}

bool QPlainTextEdit_FindWithExp(QPlainTextEdit* self, const QRegularExpression* exp) {
    return self->find(*exp);
}

libqt_string QPlainTextEdit_ToPlainText(const QPlainTextEdit* self) {
    QString _ret = self->toPlainText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPlainTextEdit_EnsureCursorVisible(QPlainTextEdit* self) {
    self->ensureCursorVisible();
}

QMenu* QPlainTextEdit_CreateStandardContextMenu(QPlainTextEdit* self) {
    return self->createStandardContextMenu();
}

QMenu* QPlainTextEdit_CreateStandardContextMenuWithPosition(QPlainTextEdit* self, const QPoint* position) {
    return self->createStandardContextMenu(*position);
}

QTextCursor* QPlainTextEdit_CursorForPosition(const QPlainTextEdit* self, const QPoint* pos) {
    return new QTextCursor(self->cursorForPosition(*pos));
}

QRect* QPlainTextEdit_CursorRect(const QPlainTextEdit* self, const QTextCursor* cursor) {
    return new QRect(self->cursorRect(*cursor));
}

QRect* QPlainTextEdit_CursorRect2(const QPlainTextEdit* self) {
    return new QRect(self->cursorRect());
}

libqt_string QPlainTextEdit_AnchorAt(const QPlainTextEdit* self, const QPoint* pos) {
    QString _ret = self->anchorAt(*pos);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QPlainTextEdit_OverwriteMode(const QPlainTextEdit* self) {
    return self->overwriteMode();
}

void QPlainTextEdit_SetOverwriteMode(QPlainTextEdit* self, bool overwrite) {
    self->setOverwriteMode(overwrite);
}

double QPlainTextEdit_TabStopDistance(const QPlainTextEdit* self) {
    return static_cast<double>(self->tabStopDistance());
}

void QPlainTextEdit_SetTabStopDistance(QPlainTextEdit* self, double distance) {
    self->setTabStopDistance(static_cast<qreal>(distance));
}

int QPlainTextEdit_CursorWidth(const QPlainTextEdit* self) {
    return self->cursorWidth();
}

void QPlainTextEdit_SetCursorWidth(QPlainTextEdit* self, int width) {
    self->setCursorWidth(static_cast<int>(width));
}

void QPlainTextEdit_SetExtraSelections(QPlainTextEdit* self, const libqt_list /* of QTextEdit__ExtraSelection* */ selections) {
    QList<QTextEdit::ExtraSelection> selections_QList;
    selections_QList.reserve(selections.len);
    QTextEdit__ExtraSelection** selections_arr = static_cast<QTextEdit__ExtraSelection**>(selections.data);
    for (size_t i = 0; i < selections.len; ++i) {
        selections_QList.push_back(*(selections_arr[i]));
    }
    self->setExtraSelections(selections_QList);
}

libqt_list /* of QTextEdit__ExtraSelection* */ QPlainTextEdit_ExtraSelections(const QPlainTextEdit* self) {
    QList<QTextEdit::ExtraSelection> _ret = self->extraSelections();
    // Convert QList<> from C++ memory to manually-managed C memory
    QTextEdit__ExtraSelection** _arr = static_cast<QTextEdit__ExtraSelection**>(malloc(sizeof(QTextEdit__ExtraSelection*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QTextEdit::ExtraSelection(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QPlainTextEdit_MoveCursor(QPlainTextEdit* self, int operation) {
    self->moveCursor(static_cast<QTextCursor::MoveOperation>(operation));
}

bool QPlainTextEdit_CanPaste(const QPlainTextEdit* self) {
    return self->canPaste();
}

void QPlainTextEdit_Print(const QPlainTextEdit* self, QPagedPaintDevice* printer) {
    self->print(printer);
}

int QPlainTextEdit_BlockCount(const QPlainTextEdit* self) {
    return self->blockCount();
}

QVariant* QPlainTextEdit_InputMethodQuery2(const QPlainTextEdit* self, int query, QVariant* argument) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query), *argument));
}

void QPlainTextEdit_SetPlainText(QPlainTextEdit* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setPlainText(text_QString);
}

void QPlainTextEdit_Cut(QPlainTextEdit* self) {
    self->cut();
}

void QPlainTextEdit_Copy(QPlainTextEdit* self) {
    self->copy();
}

void QPlainTextEdit_Paste(QPlainTextEdit* self) {
    self->paste();
}

void QPlainTextEdit_Undo(QPlainTextEdit* self) {
    self->undo();
}

void QPlainTextEdit_Redo(QPlainTextEdit* self) {
    self->redo();
}

void QPlainTextEdit_Clear(QPlainTextEdit* self) {
    self->clear();
}

void QPlainTextEdit_SelectAll(QPlainTextEdit* self) {
    self->selectAll();
}

void QPlainTextEdit_InsertPlainText(QPlainTextEdit* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->insertPlainText(text_QString);
}

void QPlainTextEdit_AppendPlainText(QPlainTextEdit* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->appendPlainText(text_QString);
}

void QPlainTextEdit_AppendHtml(QPlainTextEdit* self, const libqt_string html) {
    QString html_QString = QString::fromUtf8(html.data, html.len);
    self->appendHtml(html_QString);
}

void QPlainTextEdit_CenterCursor(QPlainTextEdit* self) {
    self->centerCursor();
}

void QPlainTextEdit_ZoomIn(QPlainTextEdit* self) {
    self->zoomIn();
}

void QPlainTextEdit_ZoomOut(QPlainTextEdit* self) {
    self->zoomOut();
}

void QPlainTextEdit_TextChanged(QPlainTextEdit* self) {
    self->textChanged();
}

void QPlainTextEdit_Connect_TextChanged(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*) = reinterpret_cast<void (*)(QPlainTextEdit*)>(slot);
    QPlainTextEdit::connect(self, &QPlainTextEdit::textChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPlainTextEdit_UndoAvailable(QPlainTextEdit* self, bool b) {
    self->undoAvailable(b);
}

void QPlainTextEdit_Connect_UndoAvailable(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*, bool) = reinterpret_cast<void (*)(QPlainTextEdit*, bool)>(slot);
    QPlainTextEdit::connect(self, &QPlainTextEdit::undoAvailable, [self, slotFunc](bool b) {
        bool sigval1 = b;
        slotFunc(self, sigval1);
    });
}

void QPlainTextEdit_RedoAvailable(QPlainTextEdit* self, bool b) {
    self->redoAvailable(b);
}

void QPlainTextEdit_Connect_RedoAvailable(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*, bool) = reinterpret_cast<void (*)(QPlainTextEdit*, bool)>(slot);
    QPlainTextEdit::connect(self, &QPlainTextEdit::redoAvailable, [self, slotFunc](bool b) {
        bool sigval1 = b;
        slotFunc(self, sigval1);
    });
}

void QPlainTextEdit_CopyAvailable(QPlainTextEdit* self, bool b) {
    self->copyAvailable(b);
}

void QPlainTextEdit_Connect_CopyAvailable(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*, bool) = reinterpret_cast<void (*)(QPlainTextEdit*, bool)>(slot);
    QPlainTextEdit::connect(self, &QPlainTextEdit::copyAvailable, [self, slotFunc](bool b) {
        bool sigval1 = b;
        slotFunc(self, sigval1);
    });
}

void QPlainTextEdit_SelectionChanged(QPlainTextEdit* self) {
    self->selectionChanged();
}

void QPlainTextEdit_Connect_SelectionChanged(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*) = reinterpret_cast<void (*)(QPlainTextEdit*)>(slot);
    QPlainTextEdit::connect(self, &QPlainTextEdit::selectionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPlainTextEdit_CursorPositionChanged(QPlainTextEdit* self) {
    self->cursorPositionChanged();
}

void QPlainTextEdit_Connect_CursorPositionChanged(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*) = reinterpret_cast<void (*)(QPlainTextEdit*)>(slot);
    QPlainTextEdit::connect(self, &QPlainTextEdit::cursorPositionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPlainTextEdit_UpdateRequest(QPlainTextEdit* self, const QRect* rect, int dy) {
    self->updateRequest(*rect, static_cast<int>(dy));
}

void QPlainTextEdit_Connect_UpdateRequest(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*, QRect*, int) = reinterpret_cast<void (*)(QPlainTextEdit*, QRect*, int)>(slot);
    QPlainTextEdit::connect(self, &QPlainTextEdit::updateRequest, [self, slotFunc](const QRect& rect, int dy) {
        const QRect& rect_ret = rect;
        // Cast returned reference into pointer
        QRect* sigval1 = const_cast<QRect*>(&rect_ret);
        int sigval2 = dy;
        slotFunc(self, sigval1, sigval2);
    });
}

void QPlainTextEdit_BlockCountChanged(QPlainTextEdit* self, int newBlockCount) {
    self->blockCountChanged(static_cast<int>(newBlockCount));
}

void QPlainTextEdit_Connect_BlockCountChanged(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*, int) = reinterpret_cast<void (*)(QPlainTextEdit*, int)>(slot);
    QPlainTextEdit::connect(self, &QPlainTextEdit::blockCountChanged, [self, slotFunc](int newBlockCount) {
        int sigval1 = newBlockCount;
        slotFunc(self, sigval1);
    });
}

void QPlainTextEdit_ModificationChanged(QPlainTextEdit* self, bool param1) {
    self->modificationChanged(param1);
}

void QPlainTextEdit_Connect_ModificationChanged(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*, bool) = reinterpret_cast<void (*)(QPlainTextEdit*, bool)>(slot);
    QPlainTextEdit::connect(self, &QPlainTextEdit::modificationChanged, [self, slotFunc](bool param1) {
        bool sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

libqt_string QPlainTextEdit_Tr2(const char* s, const char* c) {
    QString _ret = QPlainTextEdit::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPlainTextEdit_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPlainTextEdit::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QPlainTextEdit_Find2(QPlainTextEdit* self, const libqt_string exp, int options) {
    QString exp_QString = QString::fromUtf8(exp.data, exp.len);
    return self->find(exp_QString, static_cast<QTextDocument::FindFlags>(options));
}

bool QPlainTextEdit_Find22(QPlainTextEdit* self, const QRegularExpression* exp, int options) {
    return self->find(*exp, static_cast<QTextDocument::FindFlags>(options));
}

void QPlainTextEdit_MoveCursor2(QPlainTextEdit* self, int operation, int mode) {
    self->moveCursor(static_cast<QTextCursor::MoveOperation>(operation), static_cast<QTextCursor::MoveMode>(mode));
}

void QPlainTextEdit_ZoomIn1(QPlainTextEdit* self, int range) {
    self->zoomIn(static_cast<int>(range));
}

void QPlainTextEdit_ZoomOut1(QPlainTextEdit* self, int range) {
    self->zoomOut(static_cast<int>(range));
}

// Derived class handler implementation
QVariant* QPlainTextEdit_LoadResource(QPlainTextEdit* self, int typeVal, const QUrl* name) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return new QVariant(vqplaintextedit->loadResource(static_cast<int>(typeVal), *name));
    } else {
        return new QVariant(((VirtualQPlainTextEdit*)self)->loadResource(static_cast<int>(typeVal), *name));
    }
}

// Base class handler implementation
QVariant* QPlainTextEdit_QBaseLoadResource(QPlainTextEdit* self, int typeVal, const QUrl* name) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_LoadResource_IsBase(true);
        return new QVariant(vqplaintextedit->loadResource(static_cast<int>(typeVal), *name));
    } else {
        return new QVariant(((VirtualQPlainTextEdit*)self)->loadResource(static_cast<int>(typeVal), *name));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnLoadResource(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_LoadResource_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_LoadResource_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QPlainTextEdit_InputMethodQuery(const QPlainTextEdit* self, int property) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return new QVariant(vqplaintextedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    } else {
        return new QVariant(((VirtualQPlainTextEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    }
}

// Base class handler implementation
QVariant* QPlainTextEdit_QBaseInputMethodQuery(const QPlainTextEdit* self, int property) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_InputMethodQuery_IsBase(true);
        return new QVariant(vqplaintextedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    } else {
        return new QVariant(((VirtualQPlainTextEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnInputMethodQuery(const QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_InputMethodQuery_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlainTextEdit_Event(QPlainTextEdit* self, QEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return vqplaintextedit->event(e);
    } else {
        return ((VirtualQPlainTextEdit*)self)->event(e);
    }
}

// Base class handler implementation
bool QPlainTextEdit_QBaseEvent(QPlainTextEdit* self, QEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_Event_IsBase(true);
        return vqplaintextedit->event(e);
    } else {
        return ((VirtualQPlainTextEdit*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_Event_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_TimerEvent(QPlainTextEdit* self, QTimerEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->timerEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->timerEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseTimerEvent(QPlainTextEdit* self, QTimerEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_TimerEvent_IsBase(true);
        vqplaintextedit->timerEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnTimerEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_TimerEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_KeyPressEvent(QPlainTextEdit* self, QKeyEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->keyPressEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->keyPressEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseKeyPressEvent(QPlainTextEdit* self, QKeyEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_KeyPressEvent_IsBase(true);
        vqplaintextedit->keyPressEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnKeyPressEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_KeyPressEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_KeyReleaseEvent(QPlainTextEdit* self, QKeyEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->keyReleaseEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseKeyReleaseEvent(QPlainTextEdit* self, QKeyEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_KeyReleaseEvent_IsBase(true);
        vqplaintextedit->keyReleaseEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnKeyReleaseEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_ResizeEvent(QPlainTextEdit* self, QResizeEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->resizeEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->resizeEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseResizeEvent(QPlainTextEdit* self, QResizeEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_ResizeEvent_IsBase(true);
        vqplaintextedit->resizeEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnResizeEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_ResizeEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_PaintEvent(QPlainTextEdit* self, QPaintEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->paintEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->paintEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBasePaintEvent(QPlainTextEdit* self, QPaintEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_PaintEvent_IsBase(true);
        vqplaintextedit->paintEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnPaintEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_PaintEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_MousePressEvent(QPlainTextEdit* self, QMouseEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->mousePressEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->mousePressEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseMousePressEvent(QPlainTextEdit* self, QMouseEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_MousePressEvent_IsBase(true);
        vqplaintextedit->mousePressEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnMousePressEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_MousePressEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_MouseMoveEvent(QPlainTextEdit* self, QMouseEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->mouseMoveEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseMouseMoveEvent(QPlainTextEdit* self, QMouseEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_MouseMoveEvent_IsBase(true);
        vqplaintextedit->mouseMoveEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnMouseMoveEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_MouseMoveEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_MouseReleaseEvent(QPlainTextEdit* self, QMouseEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->mouseReleaseEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseMouseReleaseEvent(QPlainTextEdit* self, QMouseEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_MouseReleaseEvent_IsBase(true);
        vqplaintextedit->mouseReleaseEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnMouseReleaseEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_MouseDoubleClickEvent(QPlainTextEdit* self, QMouseEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->mouseDoubleClickEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->mouseDoubleClickEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseMouseDoubleClickEvent(QPlainTextEdit* self, QMouseEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_MouseDoubleClickEvent_IsBase(true);
        vqplaintextedit->mouseDoubleClickEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->mouseDoubleClickEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnMouseDoubleClickEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlainTextEdit_FocusNextPrevChild(QPlainTextEdit* self, bool next) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return vqplaintextedit->focusNextPrevChild(next);
    } else {
        return ((VirtualQPlainTextEdit*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QPlainTextEdit_QBaseFocusNextPrevChild(QPlainTextEdit* self, bool next) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_FocusNextPrevChild_IsBase(true);
        return vqplaintextedit->focusNextPrevChild(next);
    } else {
        return ((VirtualQPlainTextEdit*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnFocusNextPrevChild(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_ContextMenuEvent(QPlainTextEdit* self, QContextMenuEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->contextMenuEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->contextMenuEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseContextMenuEvent(QPlainTextEdit* self, QContextMenuEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_ContextMenuEvent_IsBase(true);
        vqplaintextedit->contextMenuEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->contextMenuEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnContextMenuEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_ContextMenuEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_DragEnterEvent(QPlainTextEdit* self, QDragEnterEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->dragEnterEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->dragEnterEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseDragEnterEvent(QPlainTextEdit* self, QDragEnterEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_DragEnterEvent_IsBase(true);
        vqplaintextedit->dragEnterEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->dragEnterEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDragEnterEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_DragEnterEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_DragLeaveEvent(QPlainTextEdit* self, QDragLeaveEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->dragLeaveEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->dragLeaveEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseDragLeaveEvent(QPlainTextEdit* self, QDragLeaveEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_DragLeaveEvent_IsBase(true);
        vqplaintextedit->dragLeaveEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->dragLeaveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDragLeaveEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_DragLeaveEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_DragMoveEvent(QPlainTextEdit* self, QDragMoveEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->dragMoveEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->dragMoveEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseDragMoveEvent(QPlainTextEdit* self, QDragMoveEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_DragMoveEvent_IsBase(true);
        vqplaintextedit->dragMoveEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->dragMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDragMoveEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_DragMoveEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_DropEvent(QPlainTextEdit* self, QDropEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->dropEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->dropEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseDropEvent(QPlainTextEdit* self, QDropEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_DropEvent_IsBase(true);
        vqplaintextedit->dropEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->dropEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDropEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_DropEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_FocusInEvent(QPlainTextEdit* self, QFocusEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->focusInEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->focusInEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseFocusInEvent(QPlainTextEdit* self, QFocusEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_FocusInEvent_IsBase(true);
        vqplaintextedit->focusInEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnFocusInEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_FocusInEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_FocusOutEvent(QPlainTextEdit* self, QFocusEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->focusOutEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->focusOutEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseFocusOutEvent(QPlainTextEdit* self, QFocusEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_FocusOutEvent_IsBase(true);
        vqplaintextedit->focusOutEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnFocusOutEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_FocusOutEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_ShowEvent(QPlainTextEdit* self, QShowEvent* param1) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->showEvent(param1);
    } else {
        ((VirtualQPlainTextEdit*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseShowEvent(QPlainTextEdit* self, QShowEvent* param1) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_ShowEvent_IsBase(true);
        vqplaintextedit->showEvent(param1);
    } else {
        ((VirtualQPlainTextEdit*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnShowEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_ShowEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_ChangeEvent(QPlainTextEdit* self, QEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->changeEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseChangeEvent(QPlainTextEdit* self, QEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_ChangeEvent_IsBase(true);
        vqplaintextedit->changeEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnChangeEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_ChangeEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_WheelEvent(QPlainTextEdit* self, QWheelEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->wheelEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->wheelEvent(e);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseWheelEvent(QPlainTextEdit* self, QWheelEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_WheelEvent_IsBase(true);
        vqplaintextedit->wheelEvent(e);
    } else {
        ((VirtualQPlainTextEdit*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnWheelEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_WheelEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QPlainTextEdit_CreateMimeDataFromSelection(const QPlainTextEdit* self) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return vqplaintextedit->createMimeDataFromSelection();
    } else {
        return ((VirtualQPlainTextEdit*)self)->createMimeDataFromSelection();
    }
}

// Base class handler implementation
QMimeData* QPlainTextEdit_QBaseCreateMimeDataFromSelection(const QPlainTextEdit* self) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_CreateMimeDataFromSelection_IsBase(true);
        return vqplaintextedit->createMimeDataFromSelection();
    } else {
        return ((VirtualQPlainTextEdit*)self)->createMimeDataFromSelection();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnCreateMimeDataFromSelection(const QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_CreateMimeDataFromSelection_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_CreateMimeDataFromSelection_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlainTextEdit_CanInsertFromMimeData(const QPlainTextEdit* self, const QMimeData* source) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return vqplaintextedit->canInsertFromMimeData(source);
    } else {
        return ((VirtualQPlainTextEdit*)self)->canInsertFromMimeData(source);
    }
}

// Base class handler implementation
bool QPlainTextEdit_QBaseCanInsertFromMimeData(const QPlainTextEdit* self, const QMimeData* source) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_CanInsertFromMimeData_IsBase(true);
        return vqplaintextedit->canInsertFromMimeData(source);
    } else {
        return ((VirtualQPlainTextEdit*)self)->canInsertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnCanInsertFromMimeData(const QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_CanInsertFromMimeData_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_CanInsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_InsertFromMimeData(QPlainTextEdit* self, const QMimeData* source) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->insertFromMimeData(source);
    } else {
        ((VirtualQPlainTextEdit*)self)->insertFromMimeData(source);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseInsertFromMimeData(QPlainTextEdit* self, const QMimeData* source) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_InsertFromMimeData_IsBase(true);
        vqplaintextedit->insertFromMimeData(source);
    } else {
        ((VirtualQPlainTextEdit*)self)->insertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnInsertFromMimeData(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_InsertFromMimeData_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_InsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_InputMethodEvent(QPlainTextEdit* self, QInputMethodEvent* param1) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->inputMethodEvent(param1);
    } else {
        ((VirtualQPlainTextEdit*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseInputMethodEvent(QPlainTextEdit* self, QInputMethodEvent* param1) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_InputMethodEvent_IsBase(true);
        vqplaintextedit->inputMethodEvent(param1);
    } else {
        ((VirtualQPlainTextEdit*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnInputMethodEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_InputMethodEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_ScrollContentsBy(QPlainTextEdit* self, int dx, int dy) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQPlainTextEdit*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseScrollContentsBy(QPlainTextEdit* self, int dx, int dy) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_ScrollContentsBy_IsBase(true);
        vqplaintextedit->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQPlainTextEdit*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnScrollContentsBy(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_ScrollContentsBy_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_DoSetTextCursor(QPlainTextEdit* self, const QTextCursor* cursor) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->doSetTextCursor(*cursor);
    } else {
        ((VirtualQPlainTextEdit*)self)->doSetTextCursor(*cursor);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseDoSetTextCursor(QPlainTextEdit* self, const QTextCursor* cursor) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_DoSetTextCursor_IsBase(true);
        vqplaintextedit->doSetTextCursor(*cursor);
    } else {
        ((VirtualQPlainTextEdit*)self)->doSetTextCursor(*cursor);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDoSetTextCursor(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_DoSetTextCursor_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_DoSetTextCursor_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QPlainTextEdit_MinimumSizeHint(const QPlainTextEdit* self) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return new QSize(vqplaintextedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualQPlainTextEdit*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QPlainTextEdit_QBaseMinimumSizeHint(const QPlainTextEdit* self) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_MinimumSizeHint_IsBase(true);
        return new QSize(vqplaintextedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualQPlainTextEdit*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnMinimumSizeHint(const QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_MinimumSizeHint_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QPlainTextEdit_SizeHint(const QPlainTextEdit* self) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return new QSize(vqplaintextedit->sizeHint());
    } else {
        return new QSize(((VirtualQPlainTextEdit*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QPlainTextEdit_QBaseSizeHint(const QPlainTextEdit* self) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_SizeHint_IsBase(true);
        return new QSize(vqplaintextedit->sizeHint());
    } else {
        return new QSize(((VirtualQPlainTextEdit*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnSizeHint(const QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_SizeHint_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_SetupViewport(QPlainTextEdit* self, QWidget* viewport) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setupViewport(viewport);
    } else {
        self->QPlainTextEdit::setupViewport(viewport);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseSetupViewport(QPlainTextEdit* self, QWidget* viewport) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_SetupViewport_IsBase(true);
        vqplaintextedit->setupViewport(viewport);
    } else {
        self->QPlainTextEdit::setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnSetupViewport(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_SetupViewport_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlainTextEdit_EventFilter(QPlainTextEdit* self, QObject* param1, QEvent* param2) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return vqplaintextedit->eventFilter(param1, param2);
    } else {
        return ((VirtualQPlainTextEdit*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QPlainTextEdit_QBaseEventFilter(QPlainTextEdit* self, QObject* param1, QEvent* param2) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_EventFilter_IsBase(true);
        return vqplaintextedit->eventFilter(param1, param2);
    } else {
        return ((VirtualQPlainTextEdit*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnEventFilter(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_EventFilter_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlainTextEdit_ViewportEvent(QPlainTextEdit* self, QEvent* param1) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return vqplaintextedit->viewportEvent(param1);
    } else {
        return ((VirtualQPlainTextEdit*)self)->viewportEvent(param1);
    }
}

// Base class handler implementation
bool QPlainTextEdit_QBaseViewportEvent(QPlainTextEdit* self, QEvent* param1) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_ViewportEvent_IsBase(true);
        return vqplaintextedit->viewportEvent(param1);
    } else {
        return ((VirtualQPlainTextEdit*)self)->viewportEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnViewportEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_ViewportEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QPlainTextEdit_ViewportSizeHint(const QPlainTextEdit* self) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return new QSize(vqplaintextedit->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QPlainTextEdit_QBaseViewportSizeHint(const QPlainTextEdit* self) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_ViewportSizeHint_IsBase(true);
        return new QSize(vqplaintextedit->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnViewportSizeHint(const QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_ViewportSizeHint_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_InitStyleOption(const QPlainTextEdit* self, QStyleOptionFrame* option) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->initStyleOption(option);
    } else {
        ((VirtualQPlainTextEdit*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseInitStyleOption(const QPlainTextEdit* self, QStyleOptionFrame* option) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_InitStyleOption_IsBase(true);
        vqplaintextedit->initStyleOption(option);
    } else {
        ((VirtualQPlainTextEdit*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnInitStyleOption(const QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_InitStyleOption_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlainTextEdit_DevType(const QPlainTextEdit* self) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return vqplaintextedit->devType();
    } else {
        return self->QPlainTextEdit::devType();
    }
}

// Base class handler implementation
int QPlainTextEdit_QBaseDevType(const QPlainTextEdit* self) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_DevType_IsBase(true);
        return vqplaintextedit->devType();
    } else {
        return self->QPlainTextEdit::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDevType(const QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_DevType_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_SetVisible(QPlainTextEdit* self, bool visible) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setVisible(visible);
    } else {
        self->QPlainTextEdit::setVisible(visible);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseSetVisible(QPlainTextEdit* self, bool visible) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_SetVisible_IsBase(true);
        vqplaintextedit->setVisible(visible);
    } else {
        self->QPlainTextEdit::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnSetVisible(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_SetVisible_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlainTextEdit_HeightForWidth(const QPlainTextEdit* self, int param1) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return vqplaintextedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QPlainTextEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QPlainTextEdit_QBaseHeightForWidth(const QPlainTextEdit* self, int param1) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_HeightForWidth_IsBase(true);
        return vqplaintextedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QPlainTextEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnHeightForWidth(const QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_HeightForWidth_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlainTextEdit_HasHeightForWidth(const QPlainTextEdit* self) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return vqplaintextedit->hasHeightForWidth();
    } else {
        return self->QPlainTextEdit::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QPlainTextEdit_QBaseHasHeightForWidth(const QPlainTextEdit* self) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_HasHeightForWidth_IsBase(true);
        return vqplaintextedit->hasHeightForWidth();
    } else {
        return self->QPlainTextEdit::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnHasHeightForWidth(const QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_HasHeightForWidth_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QPlainTextEdit_PaintEngine(const QPlainTextEdit* self) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return vqplaintextedit->paintEngine();
    } else {
        return self->QPlainTextEdit::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QPlainTextEdit_QBasePaintEngine(const QPlainTextEdit* self) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_PaintEngine_IsBase(true);
        return vqplaintextedit->paintEngine();
    } else {
        return self->QPlainTextEdit::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnPaintEngine(const QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_PaintEngine_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_EnterEvent(QPlainTextEdit* self, QEnterEvent* event) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->enterEvent(event);
    } else {
        ((VirtualQPlainTextEdit*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseEnterEvent(QPlainTextEdit* self, QEnterEvent* event) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_EnterEvent_IsBase(true);
        vqplaintextedit->enterEvent(event);
    } else {
        ((VirtualQPlainTextEdit*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnEnterEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_EnterEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_LeaveEvent(QPlainTextEdit* self, QEvent* event) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->leaveEvent(event);
    } else {
        ((VirtualQPlainTextEdit*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseLeaveEvent(QPlainTextEdit* self, QEvent* event) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_LeaveEvent_IsBase(true);
        vqplaintextedit->leaveEvent(event);
    } else {
        ((VirtualQPlainTextEdit*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnLeaveEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_LeaveEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_MoveEvent(QPlainTextEdit* self, QMoveEvent* event) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->moveEvent(event);
    } else {
        ((VirtualQPlainTextEdit*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseMoveEvent(QPlainTextEdit* self, QMoveEvent* event) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_MoveEvent_IsBase(true);
        vqplaintextedit->moveEvent(event);
    } else {
        ((VirtualQPlainTextEdit*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnMoveEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_MoveEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_CloseEvent(QPlainTextEdit* self, QCloseEvent* event) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->closeEvent(event);
    } else {
        ((VirtualQPlainTextEdit*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseCloseEvent(QPlainTextEdit* self, QCloseEvent* event) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_CloseEvent_IsBase(true);
        vqplaintextedit->closeEvent(event);
    } else {
        ((VirtualQPlainTextEdit*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnCloseEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_CloseEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_TabletEvent(QPlainTextEdit* self, QTabletEvent* event) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->tabletEvent(event);
    } else {
        ((VirtualQPlainTextEdit*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseTabletEvent(QPlainTextEdit* self, QTabletEvent* event) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_TabletEvent_IsBase(true);
        vqplaintextedit->tabletEvent(event);
    } else {
        ((VirtualQPlainTextEdit*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnTabletEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_TabletEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_ActionEvent(QPlainTextEdit* self, QActionEvent* event) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->actionEvent(event);
    } else {
        ((VirtualQPlainTextEdit*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseActionEvent(QPlainTextEdit* self, QActionEvent* event) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_ActionEvent_IsBase(true);
        vqplaintextedit->actionEvent(event);
    } else {
        ((VirtualQPlainTextEdit*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnActionEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_ActionEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_HideEvent(QPlainTextEdit* self, QHideEvent* event) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->hideEvent(event);
    } else {
        ((VirtualQPlainTextEdit*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseHideEvent(QPlainTextEdit* self, QHideEvent* event) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_HideEvent_IsBase(true);
        vqplaintextedit->hideEvent(event);
    } else {
        ((VirtualQPlainTextEdit*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnHideEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_HideEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlainTextEdit_NativeEvent(QPlainTextEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return vqplaintextedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQPlainTextEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QPlainTextEdit_QBaseNativeEvent(QPlainTextEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_NativeEvent_IsBase(true);
        return vqplaintextedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQPlainTextEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnNativeEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_NativeEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlainTextEdit_Metric(const QPlainTextEdit* self, int param1) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return vqplaintextedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQPlainTextEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QPlainTextEdit_QBaseMetric(const QPlainTextEdit* self, int param1) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_Metric_IsBase(true);
        return vqplaintextedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQPlainTextEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnMetric(const QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_Metric_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_InitPainter(const QPlainTextEdit* self, QPainter* painter) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->initPainter(painter);
    } else {
        ((VirtualQPlainTextEdit*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseInitPainter(const QPlainTextEdit* self, QPainter* painter) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_InitPainter_IsBase(true);
        vqplaintextedit->initPainter(painter);
    } else {
        ((VirtualQPlainTextEdit*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnInitPainter(const QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_InitPainter_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QPlainTextEdit_Redirected(const QPlainTextEdit* self, QPoint* offset) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return vqplaintextedit->redirected(offset);
    } else {
        return ((VirtualQPlainTextEdit*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QPlainTextEdit_QBaseRedirected(const QPlainTextEdit* self, QPoint* offset) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_Redirected_IsBase(true);
        return vqplaintextedit->redirected(offset);
    } else {
        return ((VirtualQPlainTextEdit*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnRedirected(const QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_Redirected_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QPlainTextEdit_SharedPainter(const QPlainTextEdit* self) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return vqplaintextedit->sharedPainter();
    } else {
        return ((VirtualQPlainTextEdit*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QPlainTextEdit_QBaseSharedPainter(const QPlainTextEdit* self) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_SharedPainter_IsBase(true);
        return vqplaintextedit->sharedPainter();
    } else {
        return ((VirtualQPlainTextEdit*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnSharedPainter(const QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_SharedPainter_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_ChildEvent(QPlainTextEdit* self, QChildEvent* event) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->childEvent(event);
    } else {
        ((VirtualQPlainTextEdit*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseChildEvent(QPlainTextEdit* self, QChildEvent* event) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_ChildEvent_IsBase(true);
        vqplaintextedit->childEvent(event);
    } else {
        ((VirtualQPlainTextEdit*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnChildEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_ChildEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_CustomEvent(QPlainTextEdit* self, QEvent* event) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->customEvent(event);
    } else {
        ((VirtualQPlainTextEdit*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseCustomEvent(QPlainTextEdit* self, QEvent* event) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_CustomEvent_IsBase(true);
        vqplaintextedit->customEvent(event);
    } else {
        ((VirtualQPlainTextEdit*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnCustomEvent(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_CustomEvent_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_ConnectNotify(QPlainTextEdit* self, const QMetaMethod* signal) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->connectNotify(*signal);
    } else {
        ((VirtualQPlainTextEdit*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseConnectNotify(QPlainTextEdit* self, const QMetaMethod* signal) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_ConnectNotify_IsBase(true);
        vqplaintextedit->connectNotify(*signal);
    } else {
        ((VirtualQPlainTextEdit*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnConnectNotify(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_ConnectNotify_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_DisconnectNotify(QPlainTextEdit* self, const QMetaMethod* signal) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->disconnectNotify(*signal);
    } else {
        ((VirtualQPlainTextEdit*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseDisconnectNotify(QPlainTextEdit* self, const QMetaMethod* signal) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_DisconnectNotify_IsBase(true);
        vqplaintextedit->disconnectNotify(*signal);
    } else {
        ((VirtualQPlainTextEdit*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDisconnectNotify(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_DisconnectNotify_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QTextBlock* QPlainTextEdit_FirstVisibleBlock(const QPlainTextEdit* self) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return new QTextBlock(vqplaintextedit->firstVisibleBlock());
    }
    return {};
}

// Base class handler implementation
QTextBlock* QPlainTextEdit_QBaseFirstVisibleBlock(const QPlainTextEdit* self) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_FirstVisibleBlock_IsBase(true);
        return new QTextBlock(vqplaintextedit->firstVisibleBlock());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnFirstVisibleBlock(const QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_FirstVisibleBlock_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_FirstVisibleBlock_Callback>(slot));
    }
}

// Derived class handler implementation
QPointF* QPlainTextEdit_ContentOffset(const QPlainTextEdit* self) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return new QPointF(vqplaintextedit->contentOffset());
    }
    return {};
}

// Base class handler implementation
QPointF* QPlainTextEdit_QBaseContentOffset(const QPlainTextEdit* self) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_ContentOffset_IsBase(true);
        return new QPointF(vqplaintextedit->contentOffset());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnContentOffset(const QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_ContentOffset_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ContentOffset_Callback>(slot));
    }
}

// Derived class handler implementation
QRectF* QPlainTextEdit_BlockBoundingRect(const QPlainTextEdit* self, const QTextBlock* block) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return new QRectF(vqplaintextedit->blockBoundingRect(*block));
    }
    return {};
}

// Base class handler implementation
QRectF* QPlainTextEdit_QBaseBlockBoundingRect(const QPlainTextEdit* self, const QTextBlock* block) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_BlockBoundingRect_IsBase(true);
        return new QRectF(vqplaintextedit->blockBoundingRect(*block));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnBlockBoundingRect(const QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_BlockBoundingRect_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_BlockBoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
QRectF* QPlainTextEdit_BlockBoundingGeometry(const QPlainTextEdit* self, const QTextBlock* block) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return new QRectF(vqplaintextedit->blockBoundingGeometry(*block));
    }
    return {};
}

// Base class handler implementation
QRectF* QPlainTextEdit_QBaseBlockBoundingGeometry(const QPlainTextEdit* self, const QTextBlock* block) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_BlockBoundingGeometry_IsBase(true);
        return new QRectF(vqplaintextedit->blockBoundingGeometry(*block));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnBlockBoundingGeometry(const QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_BlockBoundingGeometry_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_BlockBoundingGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
QAbstractTextDocumentLayout__PaintContext* QPlainTextEdit_GetPaintContext(const QPlainTextEdit* self) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return new QAbstractTextDocumentLayout::PaintContext(vqplaintextedit->getPaintContext());
    }
    return {};
}

// Base class handler implementation
QAbstractTextDocumentLayout__PaintContext* QPlainTextEdit_QBaseGetPaintContext(const QPlainTextEdit* self) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_GetPaintContext_IsBase(true);
        return new QAbstractTextDocumentLayout::PaintContext(vqplaintextedit->getPaintContext());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnGetPaintContext(const QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_GetPaintContext_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_GetPaintContext_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_ZoomInF(QPlainTextEdit* self, float range) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->zoomInF(static_cast<float>(range));
    } else {
        ((VirtualQPlainTextEdit*)self)->zoomInF(static_cast<float>(range));
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseZoomInF(QPlainTextEdit* self, float range) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_ZoomInF_IsBase(true);
        vqplaintextedit->zoomInF(static_cast<float>(range));
    } else {
        ((VirtualQPlainTextEdit*)self)->zoomInF(static_cast<float>(range));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnZoomInF(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_ZoomInF_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ZoomInF_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_SetViewportMargins(QPlainTextEdit* self, int left, int top, int right, int bottom) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQPlainTextEdit*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseSetViewportMargins(QPlainTextEdit* self, int left, int top, int right, int bottom) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_SetViewportMargins_IsBase(true);
        vqplaintextedit->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQPlainTextEdit*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnSetViewportMargins(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_SetViewportMargins_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QPlainTextEdit_ViewportMargins(const QPlainTextEdit* self) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return new QMargins(vqplaintextedit->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QPlainTextEdit_QBaseViewportMargins(const QPlainTextEdit* self) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_ViewportMargins_IsBase(true);
        return new QMargins(vqplaintextedit->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnViewportMargins(const QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_ViewportMargins_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_DrawFrame(QPlainTextEdit* self, QPainter* param1) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->drawFrame(param1);
    } else {
        ((VirtualQPlainTextEdit*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseDrawFrame(QPlainTextEdit* self, QPainter* param1) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_DrawFrame_IsBase(true);
        vqplaintextedit->drawFrame(param1);
    } else {
        ((VirtualQPlainTextEdit*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDrawFrame(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_DrawFrame_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_UpdateMicroFocus(QPlainTextEdit* self) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->updateMicroFocus();
    } else {
        ((VirtualQPlainTextEdit*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseUpdateMicroFocus(QPlainTextEdit* self) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_UpdateMicroFocus_IsBase(true);
        vqplaintextedit->updateMicroFocus();
    } else {
        ((VirtualQPlainTextEdit*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnUpdateMicroFocus(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_Create(QPlainTextEdit* self) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->create();
    } else {
        ((VirtualQPlainTextEdit*)self)->create();
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseCreate(QPlainTextEdit* self) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_Create_IsBase(true);
        vqplaintextedit->create();
    } else {
        ((VirtualQPlainTextEdit*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnCreate(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_Create_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextEdit_Destroy(QPlainTextEdit* self) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->destroy();
    } else {
        ((VirtualQPlainTextEdit*)self)->destroy();
    }
}

// Base class handler implementation
void QPlainTextEdit_QBaseDestroy(QPlainTextEdit* self) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_Destroy_IsBase(true);
        vqplaintextedit->destroy();
    } else {
        ((VirtualQPlainTextEdit*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDestroy(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_Destroy_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlainTextEdit_FocusNextChild(QPlainTextEdit* self) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return vqplaintextedit->focusNextChild();
    } else {
        return ((VirtualQPlainTextEdit*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QPlainTextEdit_QBaseFocusNextChild(QPlainTextEdit* self) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_FocusNextChild_IsBase(true);
        return vqplaintextedit->focusNextChild();
    } else {
        return ((VirtualQPlainTextEdit*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnFocusNextChild(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_FocusNextChild_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlainTextEdit_FocusPreviousChild(QPlainTextEdit* self) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return vqplaintextedit->focusPreviousChild();
    } else {
        return ((VirtualQPlainTextEdit*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QPlainTextEdit_QBaseFocusPreviousChild(QPlainTextEdit* self) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_FocusPreviousChild_IsBase(true);
        return vqplaintextedit->focusPreviousChild();
    } else {
        return ((VirtualQPlainTextEdit*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnFocusPreviousChild(QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_FocusPreviousChild_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPlainTextEdit_Sender(const QPlainTextEdit* self) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return vqplaintextedit->sender();
    } else {
        return ((VirtualQPlainTextEdit*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPlainTextEdit_QBaseSender(const QPlainTextEdit* self) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_Sender_IsBase(true);
        return vqplaintextedit->sender();
    } else {
        return ((VirtualQPlainTextEdit*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnSender(const QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_Sender_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlainTextEdit_SenderSignalIndex(const QPlainTextEdit* self) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return vqplaintextedit->senderSignalIndex();
    } else {
        return ((VirtualQPlainTextEdit*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPlainTextEdit_QBaseSenderSignalIndex(const QPlainTextEdit* self) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_SenderSignalIndex_IsBase(true);
        return vqplaintextedit->senderSignalIndex();
    } else {
        return ((VirtualQPlainTextEdit*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnSenderSignalIndex(const QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlainTextEdit_Receivers(const QPlainTextEdit* self, const char* signal) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return vqplaintextedit->receivers(signal);
    } else {
        return ((VirtualQPlainTextEdit*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPlainTextEdit_QBaseReceivers(const QPlainTextEdit* self, const char* signal) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_Receivers_IsBase(true);
        return vqplaintextedit->receivers(signal);
    } else {
        return ((VirtualQPlainTextEdit*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnReceivers(const QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_Receivers_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlainTextEdit_IsSignalConnected(const QPlainTextEdit* self, const QMetaMethod* signal) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return vqplaintextedit->isSignalConnected(*signal);
    } else {
        return ((VirtualQPlainTextEdit*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPlainTextEdit_QBaseIsSignalConnected(const QPlainTextEdit* self, const QMetaMethod* signal) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_IsSignalConnected_IsBase(true);
        return vqplaintextedit->isSignalConnected(*signal);
    } else {
        return ((VirtualQPlainTextEdit*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnIsSignalConnected(const QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_IsSignalConnected_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QPlainTextEdit_GetDecodedMetricF(const QPlainTextEdit* self, int metricA, int metricB) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        return vqplaintextedit->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQPlainTextEdit*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QPlainTextEdit_QBaseGetDecodedMetricF(const QPlainTextEdit* self, int metricA, int metricB) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_GetDecodedMetricF_IsBase(true);
        return vqplaintextedit->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQPlainTextEdit*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnGetDecodedMetricF(const QPlainTextEdit* self, intptr_t slot) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit && vqplaintextedit->isVirtualQPlainTextEdit) {
        vqplaintextedit->setQPlainTextEdit_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_GetDecodedMetricF_Callback>(slot));
    }
}

void QPlainTextEdit_Delete(QPlainTextEdit* self) {
    delete self;
}

QPlainTextDocumentLayout* QPlainTextDocumentLayout_new(QTextDocument* document) {
    return new VirtualQPlainTextDocumentLayout(document);
}

QMetaObject* QPlainTextDocumentLayout_MetaObject(const QPlainTextDocumentLayout* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPlainTextDocumentLayout_Metacast(QPlainTextDocumentLayout* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPlainTextDocumentLayout_Metacall(QPlainTextDocumentLayout* self, int param1, int param2, void** param3) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPlainTextDocumentLayout*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPlainTextDocumentLayout_OnMetacall(QPlainTextDocumentLayout* self, intptr_t slot) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_Metacall_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPlainTextDocumentLayout_QBaseMetacall(QPlainTextDocumentLayout* self, int param1, int param2, void** param3) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_Metacall_IsBase(true);
        return vqplaintextdocumentlayout->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPlainTextDocumentLayout*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPlainTextDocumentLayout_Tr(const char* s) {
    QString _ret = QPlainTextDocumentLayout::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPlainTextDocumentLayout_EnsureBlockLayout(const QPlainTextDocumentLayout* self, const QTextBlock* block) {
    self->ensureBlockLayout(*block);
}

void QPlainTextDocumentLayout_SetCursorWidth(QPlainTextDocumentLayout* self, int width) {
    self->setCursorWidth(static_cast<int>(width));
}

int QPlainTextDocumentLayout_CursorWidth(const QPlainTextDocumentLayout* self) {
    return self->cursorWidth();
}

void QPlainTextDocumentLayout_RequestUpdate(QPlainTextDocumentLayout* self) {
    self->requestUpdate();
}

libqt_string QPlainTextDocumentLayout_Tr2(const char* s, const char* c) {
    QString _ret = QPlainTextDocumentLayout::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPlainTextDocumentLayout_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPlainTextDocumentLayout::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void QPlainTextDocumentLayout_Draw(QPlainTextDocumentLayout* self, QPainter* param1, const QAbstractTextDocumentLayout__PaintContext* param2) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->draw(param1, *param2);
    } else {
        self->QPlainTextDocumentLayout::draw(param1, *param2);
    }
}

// Base class handler implementation
void QPlainTextDocumentLayout_QBaseDraw(QPlainTextDocumentLayout* self, QPainter* param1, const QAbstractTextDocumentLayout__PaintContext* param2) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_Draw_IsBase(true);
        vqplaintextdocumentlayout->draw(param1, *param2);
    } else {
        self->QPlainTextDocumentLayout::draw(param1, *param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnDraw(QPlainTextDocumentLayout* self, intptr_t slot) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_Draw_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_Draw_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlainTextDocumentLayout_HitTest(const QPlainTextDocumentLayout* self, const QPointF* param1, int param2) {
    auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self));
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        return vqplaintextdocumentlayout->hitTest(*param1, static_cast<Qt::HitTestAccuracy>(param2));
    } else {
        return self->QPlainTextDocumentLayout::hitTest(*param1, static_cast<Qt::HitTestAccuracy>(param2));
    }
}

// Base class handler implementation
int QPlainTextDocumentLayout_QBaseHitTest(const QPlainTextDocumentLayout* self, const QPointF* param1, int param2) {
    auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self));
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_HitTest_IsBase(true);
        return vqplaintextdocumentlayout->hitTest(*param1, static_cast<Qt::HitTestAccuracy>(param2));
    } else {
        return self->QPlainTextDocumentLayout::hitTest(*param1, static_cast<Qt::HitTestAccuracy>(param2));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnHitTest(const QPlainTextDocumentLayout* self, intptr_t slot) {
    auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self));
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_HitTest_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_HitTest_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlainTextDocumentLayout_PageCount(const QPlainTextDocumentLayout* self) {
    auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self));
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        return vqplaintextdocumentlayout->pageCount();
    } else {
        return self->QPlainTextDocumentLayout::pageCount();
    }
}

// Base class handler implementation
int QPlainTextDocumentLayout_QBasePageCount(const QPlainTextDocumentLayout* self) {
    auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self));
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_PageCount_IsBase(true);
        return vqplaintextdocumentlayout->pageCount();
    } else {
        return self->QPlainTextDocumentLayout::pageCount();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnPageCount(const QPlainTextDocumentLayout* self, intptr_t slot) {
    auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self));
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_PageCount_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_PageCount_Callback>(slot));
    }
}

// Derived class handler implementation
QSizeF* QPlainTextDocumentLayout_DocumentSize(const QPlainTextDocumentLayout* self) {
    auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self));
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        return new QSizeF(vqplaintextdocumentlayout->documentSize());
    } else {
        return new QSizeF(((VirtualQPlainTextDocumentLayout*)self)->documentSize());
    }
}

// Base class handler implementation
QSizeF* QPlainTextDocumentLayout_QBaseDocumentSize(const QPlainTextDocumentLayout* self) {
    auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self));
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_DocumentSize_IsBase(true);
        return new QSizeF(vqplaintextdocumentlayout->documentSize());
    } else {
        return new QSizeF(((VirtualQPlainTextDocumentLayout*)self)->documentSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnDocumentSize(const QPlainTextDocumentLayout* self, intptr_t slot) {
    auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self));
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_DocumentSize_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_DocumentSize_Callback>(slot));
    }
}

// Derived class handler implementation
QRectF* QPlainTextDocumentLayout_FrameBoundingRect(const QPlainTextDocumentLayout* self, QTextFrame* param1) {
    auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self));
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        return new QRectF(vqplaintextdocumentlayout->frameBoundingRect(param1));
    } else {
        return new QRectF(((VirtualQPlainTextDocumentLayout*)self)->frameBoundingRect(param1));
    }
}

// Base class handler implementation
QRectF* QPlainTextDocumentLayout_QBaseFrameBoundingRect(const QPlainTextDocumentLayout* self, QTextFrame* param1) {
    auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self));
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_FrameBoundingRect_IsBase(true);
        return new QRectF(vqplaintextdocumentlayout->frameBoundingRect(param1));
    } else {
        return new QRectF(((VirtualQPlainTextDocumentLayout*)self)->frameBoundingRect(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnFrameBoundingRect(const QPlainTextDocumentLayout* self, intptr_t slot) {
    auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self));
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_FrameBoundingRect_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_FrameBoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
QRectF* QPlainTextDocumentLayout_BlockBoundingRect(const QPlainTextDocumentLayout* self, const QTextBlock* block) {
    auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self));
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        return new QRectF(vqplaintextdocumentlayout->blockBoundingRect(*block));
    } else {
        return new QRectF(((VirtualQPlainTextDocumentLayout*)self)->blockBoundingRect(*block));
    }
}

// Base class handler implementation
QRectF* QPlainTextDocumentLayout_QBaseBlockBoundingRect(const QPlainTextDocumentLayout* self, const QTextBlock* block) {
    auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self));
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_BlockBoundingRect_IsBase(true);
        return new QRectF(vqplaintextdocumentlayout->blockBoundingRect(*block));
    } else {
        return new QRectF(((VirtualQPlainTextDocumentLayout*)self)->blockBoundingRect(*block));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnBlockBoundingRect(const QPlainTextDocumentLayout* self, intptr_t slot) {
    auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self));
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_BlockBoundingRect_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_BlockBoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextDocumentLayout_DocumentChanged(QPlainTextDocumentLayout* self, int from, int param2, int charsAdded) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->documentChanged(static_cast<int>(from), static_cast<int>(param2), static_cast<int>(charsAdded));
    } else {
        ((VirtualQPlainTextDocumentLayout*)self)->documentChanged(static_cast<int>(from), static_cast<int>(param2), static_cast<int>(charsAdded));
    }
}

// Base class handler implementation
void QPlainTextDocumentLayout_QBaseDocumentChanged(QPlainTextDocumentLayout* self, int from, int param2, int charsAdded) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_DocumentChanged_IsBase(true);
        vqplaintextdocumentlayout->documentChanged(static_cast<int>(from), static_cast<int>(param2), static_cast<int>(charsAdded));
    } else {
        ((VirtualQPlainTextDocumentLayout*)self)->documentChanged(static_cast<int>(from), static_cast<int>(param2), static_cast<int>(charsAdded));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnDocumentChanged(QPlainTextDocumentLayout* self, intptr_t slot) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_DocumentChanged_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_DocumentChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextDocumentLayout_ResizeInlineObject(QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, const QTextFormat* format) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->resizeInlineObject(*item, static_cast<int>(posInDocument), *format);
    } else {
        ((VirtualQPlainTextDocumentLayout*)self)->resizeInlineObject(*item, static_cast<int>(posInDocument), *format);
    }
}

// Base class handler implementation
void QPlainTextDocumentLayout_QBaseResizeInlineObject(QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, const QTextFormat* format) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_ResizeInlineObject_IsBase(true);
        vqplaintextdocumentlayout->resizeInlineObject(*item, static_cast<int>(posInDocument), *format);
    } else {
        ((VirtualQPlainTextDocumentLayout*)self)->resizeInlineObject(*item, static_cast<int>(posInDocument), *format);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnResizeInlineObject(QPlainTextDocumentLayout* self, intptr_t slot) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_ResizeInlineObject_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_ResizeInlineObject_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextDocumentLayout_PositionInlineObject(QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, const QTextFormat* format) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->positionInlineObject(*item, static_cast<int>(posInDocument), *format);
    } else {
        ((VirtualQPlainTextDocumentLayout*)self)->positionInlineObject(*item, static_cast<int>(posInDocument), *format);
    }
}

// Base class handler implementation
void QPlainTextDocumentLayout_QBasePositionInlineObject(QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, const QTextFormat* format) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_PositionInlineObject_IsBase(true);
        vqplaintextdocumentlayout->positionInlineObject(*item, static_cast<int>(posInDocument), *format);
    } else {
        ((VirtualQPlainTextDocumentLayout*)self)->positionInlineObject(*item, static_cast<int>(posInDocument), *format);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnPositionInlineObject(QPlainTextDocumentLayout* self, intptr_t slot) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_PositionInlineObject_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_PositionInlineObject_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextDocumentLayout_DrawInlineObject(QPlainTextDocumentLayout* self, QPainter* painter, const QRectF* rect, QTextInlineObject* object, int posInDocument, const QTextFormat* format) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->drawInlineObject(painter, *rect, *object, static_cast<int>(posInDocument), *format);
    } else {
        ((VirtualQPlainTextDocumentLayout*)self)->drawInlineObject(painter, *rect, *object, static_cast<int>(posInDocument), *format);
    }
}

// Base class handler implementation
void QPlainTextDocumentLayout_QBaseDrawInlineObject(QPlainTextDocumentLayout* self, QPainter* painter, const QRectF* rect, QTextInlineObject* object, int posInDocument, const QTextFormat* format) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_DrawInlineObject_IsBase(true);
        vqplaintextdocumentlayout->drawInlineObject(painter, *rect, *object, static_cast<int>(posInDocument), *format);
    } else {
        ((VirtualQPlainTextDocumentLayout*)self)->drawInlineObject(painter, *rect, *object, static_cast<int>(posInDocument), *format);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnDrawInlineObject(QPlainTextDocumentLayout* self, intptr_t slot) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_DrawInlineObject_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_DrawInlineObject_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlainTextDocumentLayout_Event(QPlainTextDocumentLayout* self, QEvent* event) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        return vqplaintextdocumentlayout->event(event);
    } else {
        return self->QPlainTextDocumentLayout::event(event);
    }
}

// Base class handler implementation
bool QPlainTextDocumentLayout_QBaseEvent(QPlainTextDocumentLayout* self, QEvent* event) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_Event_IsBase(true);
        return vqplaintextdocumentlayout->event(event);
    } else {
        return self->QPlainTextDocumentLayout::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnEvent(QPlainTextDocumentLayout* self, intptr_t slot) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_Event_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlainTextDocumentLayout_EventFilter(QPlainTextDocumentLayout* self, QObject* watched, QEvent* event) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        return vqplaintextdocumentlayout->eventFilter(watched, event);
    } else {
        return self->QPlainTextDocumentLayout::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPlainTextDocumentLayout_QBaseEventFilter(QPlainTextDocumentLayout* self, QObject* watched, QEvent* event) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_EventFilter_IsBase(true);
        return vqplaintextdocumentlayout->eventFilter(watched, event);
    } else {
        return self->QPlainTextDocumentLayout::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnEventFilter(QPlainTextDocumentLayout* self, intptr_t slot) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_EventFilter_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextDocumentLayout_TimerEvent(QPlainTextDocumentLayout* self, QTimerEvent* event) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->timerEvent(event);
    } else {
        ((VirtualQPlainTextDocumentLayout*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QPlainTextDocumentLayout_QBaseTimerEvent(QPlainTextDocumentLayout* self, QTimerEvent* event) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_TimerEvent_IsBase(true);
        vqplaintextdocumentlayout->timerEvent(event);
    } else {
        ((VirtualQPlainTextDocumentLayout*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnTimerEvent(QPlainTextDocumentLayout* self, intptr_t slot) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_TimerEvent_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextDocumentLayout_ChildEvent(QPlainTextDocumentLayout* self, QChildEvent* event) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->childEvent(event);
    } else {
        ((VirtualQPlainTextDocumentLayout*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPlainTextDocumentLayout_QBaseChildEvent(QPlainTextDocumentLayout* self, QChildEvent* event) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_ChildEvent_IsBase(true);
        vqplaintextdocumentlayout->childEvent(event);
    } else {
        ((VirtualQPlainTextDocumentLayout*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnChildEvent(QPlainTextDocumentLayout* self, intptr_t slot) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_ChildEvent_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextDocumentLayout_CustomEvent(QPlainTextDocumentLayout* self, QEvent* event) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->customEvent(event);
    } else {
        ((VirtualQPlainTextDocumentLayout*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPlainTextDocumentLayout_QBaseCustomEvent(QPlainTextDocumentLayout* self, QEvent* event) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_CustomEvent_IsBase(true);
        vqplaintextdocumentlayout->customEvent(event);
    } else {
        ((VirtualQPlainTextDocumentLayout*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnCustomEvent(QPlainTextDocumentLayout* self, intptr_t slot) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_CustomEvent_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextDocumentLayout_ConnectNotify(QPlainTextDocumentLayout* self, const QMetaMethod* signal) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->connectNotify(*signal);
    } else {
        ((VirtualQPlainTextDocumentLayout*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPlainTextDocumentLayout_QBaseConnectNotify(QPlainTextDocumentLayout* self, const QMetaMethod* signal) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_ConnectNotify_IsBase(true);
        vqplaintextdocumentlayout->connectNotify(*signal);
    } else {
        ((VirtualQPlainTextDocumentLayout*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnConnectNotify(QPlainTextDocumentLayout* self, intptr_t slot) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_ConnectNotify_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlainTextDocumentLayout_DisconnectNotify(QPlainTextDocumentLayout* self, const QMetaMethod* signal) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->disconnectNotify(*signal);
    } else {
        ((VirtualQPlainTextDocumentLayout*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPlainTextDocumentLayout_QBaseDisconnectNotify(QPlainTextDocumentLayout* self, const QMetaMethod* signal) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_DisconnectNotify_IsBase(true);
        vqplaintextdocumentlayout->disconnectNotify(*signal);
    } else {
        ((VirtualQPlainTextDocumentLayout*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnDisconnectNotify(QPlainTextDocumentLayout* self, intptr_t slot) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_DisconnectNotify_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlainTextDocumentLayout_FormatIndex(QPlainTextDocumentLayout* self, int pos) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        return vqplaintextdocumentlayout->formatIndex(static_cast<int>(pos));
    } else {
        return ((VirtualQPlainTextDocumentLayout*)self)->formatIndex(static_cast<int>(pos));
    }
}

// Base class handler implementation
int QPlainTextDocumentLayout_QBaseFormatIndex(QPlainTextDocumentLayout* self, int pos) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_FormatIndex_IsBase(true);
        return vqplaintextdocumentlayout->formatIndex(static_cast<int>(pos));
    } else {
        return ((VirtualQPlainTextDocumentLayout*)self)->formatIndex(static_cast<int>(pos));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnFormatIndex(QPlainTextDocumentLayout* self, intptr_t slot) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_FormatIndex_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_FormatIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QTextCharFormat* QPlainTextDocumentLayout_Format(QPlainTextDocumentLayout* self, int pos) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        return new QTextCharFormat(vqplaintextdocumentlayout->format(static_cast<int>(pos)));
    }
    return {};
}

// Base class handler implementation
QTextCharFormat* QPlainTextDocumentLayout_QBaseFormat(QPlainTextDocumentLayout* self, int pos) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_Format_IsBase(true);
        return new QTextCharFormat(vqplaintextdocumentlayout->format(static_cast<int>(pos)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnFormat(QPlainTextDocumentLayout* self, intptr_t slot) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_Format_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_Format_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPlainTextDocumentLayout_Sender(const QPlainTextDocumentLayout* self) {
    auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self));
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        return vqplaintextdocumentlayout->sender();
    } else {
        return ((VirtualQPlainTextDocumentLayout*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPlainTextDocumentLayout_QBaseSender(const QPlainTextDocumentLayout* self) {
    auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self));
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_Sender_IsBase(true);
        return vqplaintextdocumentlayout->sender();
    } else {
        return ((VirtualQPlainTextDocumentLayout*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnSender(const QPlainTextDocumentLayout* self, intptr_t slot) {
    auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self));
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_Sender_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlainTextDocumentLayout_SenderSignalIndex(const QPlainTextDocumentLayout* self) {
    auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self));
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        return vqplaintextdocumentlayout->senderSignalIndex();
    } else {
        return ((VirtualQPlainTextDocumentLayout*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPlainTextDocumentLayout_QBaseSenderSignalIndex(const QPlainTextDocumentLayout* self) {
    auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self));
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_SenderSignalIndex_IsBase(true);
        return vqplaintextdocumentlayout->senderSignalIndex();
    } else {
        return ((VirtualQPlainTextDocumentLayout*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnSenderSignalIndex(const QPlainTextDocumentLayout* self, intptr_t slot) {
    auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self));
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlainTextDocumentLayout_Receivers(const QPlainTextDocumentLayout* self, const char* signal) {
    auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self));
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        return vqplaintextdocumentlayout->receivers(signal);
    } else {
        return ((VirtualQPlainTextDocumentLayout*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPlainTextDocumentLayout_QBaseReceivers(const QPlainTextDocumentLayout* self, const char* signal) {
    auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self));
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_Receivers_IsBase(true);
        return vqplaintextdocumentlayout->receivers(signal);
    } else {
        return ((VirtualQPlainTextDocumentLayout*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnReceivers(const QPlainTextDocumentLayout* self, intptr_t slot) {
    auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self));
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_Receivers_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlainTextDocumentLayout_IsSignalConnected(const QPlainTextDocumentLayout* self, const QMetaMethod* signal) {
    auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self));
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        return vqplaintextdocumentlayout->isSignalConnected(*signal);
    } else {
        return ((VirtualQPlainTextDocumentLayout*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPlainTextDocumentLayout_QBaseIsSignalConnected(const QPlainTextDocumentLayout* self, const QMetaMethod* signal) {
    auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self));
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_IsSignalConnected_IsBase(true);
        return vqplaintextdocumentlayout->isSignalConnected(*signal);
    } else {
        return ((VirtualQPlainTextDocumentLayout*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnIsSignalConnected(const QPlainTextDocumentLayout* self, intptr_t slot) {
    auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self));
    if (vqplaintextdocumentlayout && vqplaintextdocumentlayout->isVirtualQPlainTextDocumentLayout) {
        vqplaintextdocumentlayout->setQPlainTextDocumentLayout_IsSignalConnected_Callback(reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_IsSignalConnected_Callback>(slot));
    }
}

void QPlainTextDocumentLayout_Delete(QPlainTextDocumentLayout* self) {
    delete self;
}
