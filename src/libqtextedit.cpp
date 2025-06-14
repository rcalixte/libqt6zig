#include <QAbstractScrollArea>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
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
#include <QPoint>
#include <QRect>
#include <QRegularExpression>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTextCharFormat>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextEdit>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTextEdit__ExtraSelection
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtextedit.h>
#include "libqtextedit.h"
#include "libqtextedit.hxx"

QTextEdit* QTextEdit_new(QWidget* parent) {
    return new VirtualQTextEdit(parent);
}

QTextEdit* QTextEdit_new2() {
    return new VirtualQTextEdit();
}

QTextEdit* QTextEdit_new3(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQTextEdit(text_QString);
}

QTextEdit* QTextEdit_new4(const libqt_string text, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQTextEdit(text_QString, parent);
}

QMetaObject* QTextEdit_MetaObject(const QTextEdit* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTextEdit_Metacast(QTextEdit* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTextEdit_Metacall(QTextEdit* self, int param1, int param2, void** param3) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTextEdit*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTextEdit_OnMetacall(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_Metacall_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTextEdit_QBaseMetacall(QTextEdit* self, int param1, int param2, void** param3) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_Metacall_IsBase(true);
        return vqtextedit->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTextEdit*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QTextEdit_Tr(const char* s) {
    QString _ret = QTextEdit::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTextEdit_SetDocument(QTextEdit* self, QTextDocument* document) {
    self->setDocument(document);
}

QTextDocument* QTextEdit_Document(const QTextEdit* self) {
    return self->document();
}

void QTextEdit_SetPlaceholderText(QTextEdit* self, const libqt_string placeholderText) {
    QString placeholderText_QString = QString::fromUtf8(placeholderText.data, placeholderText.len);
    self->setPlaceholderText(placeholderText_QString);
}

libqt_string QTextEdit_PlaceholderText(const QTextEdit* self) {
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

void QTextEdit_SetTextCursor(QTextEdit* self, const QTextCursor* cursor) {
    self->setTextCursor(*cursor);
}

QTextCursor* QTextEdit_TextCursor(const QTextEdit* self) {
    return new QTextCursor(self->textCursor());
}

bool QTextEdit_IsReadOnly(const QTextEdit* self) {
    return self->isReadOnly();
}

void QTextEdit_SetReadOnly(QTextEdit* self, bool ro) {
    self->setReadOnly(ro);
}

void QTextEdit_SetTextInteractionFlags(QTextEdit* self, int flags) {
    self->setTextInteractionFlags(static_cast<Qt::TextInteractionFlags>(flags));
}

int QTextEdit_TextInteractionFlags(const QTextEdit* self) {
    return static_cast<int>(self->textInteractionFlags());
}

double QTextEdit_FontPointSize(const QTextEdit* self) {
    return static_cast<double>(self->fontPointSize());
}

libqt_string QTextEdit_FontFamily(const QTextEdit* self) {
    QString _ret = self->fontFamily();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QTextEdit_FontWeight(const QTextEdit* self) {
    return self->fontWeight();
}

bool QTextEdit_FontUnderline(const QTextEdit* self) {
    return self->fontUnderline();
}

bool QTextEdit_FontItalic(const QTextEdit* self) {
    return self->fontItalic();
}

QColor* QTextEdit_TextColor(const QTextEdit* self) {
    return new QColor(self->textColor());
}

QColor* QTextEdit_TextBackgroundColor(const QTextEdit* self) {
    return new QColor(self->textBackgroundColor());
}

QFont* QTextEdit_CurrentFont(const QTextEdit* self) {
    return new QFont(self->currentFont());
}

int QTextEdit_Alignment(const QTextEdit* self) {
    return static_cast<int>(self->alignment());
}

void QTextEdit_MergeCurrentCharFormat(QTextEdit* self, const QTextCharFormat* modifier) {
    self->mergeCurrentCharFormat(*modifier);
}

void QTextEdit_SetCurrentCharFormat(QTextEdit* self, const QTextCharFormat* format) {
    self->setCurrentCharFormat(*format);
}

QTextCharFormat* QTextEdit_CurrentCharFormat(const QTextEdit* self) {
    return new QTextCharFormat(self->currentCharFormat());
}

int QTextEdit_AutoFormatting(const QTextEdit* self) {
    return static_cast<int>(self->autoFormatting());
}

void QTextEdit_SetAutoFormatting(QTextEdit* self, int features) {
    self->setAutoFormatting(static_cast<QTextEdit::AutoFormatting>(features));
}

bool QTextEdit_TabChangesFocus(const QTextEdit* self) {
    return self->tabChangesFocus();
}

void QTextEdit_SetTabChangesFocus(QTextEdit* self, bool b) {
    self->setTabChangesFocus(b);
}

void QTextEdit_SetDocumentTitle(QTextEdit* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setDocumentTitle(title_QString);
}

libqt_string QTextEdit_DocumentTitle(const QTextEdit* self) {
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

bool QTextEdit_IsUndoRedoEnabled(const QTextEdit* self) {
    return self->isUndoRedoEnabled();
}

void QTextEdit_SetUndoRedoEnabled(QTextEdit* self, bool enable) {
    self->setUndoRedoEnabled(enable);
}

int QTextEdit_LineWrapMode(const QTextEdit* self) {
    return static_cast<int>(self->lineWrapMode());
}

void QTextEdit_SetLineWrapMode(QTextEdit* self, int mode) {
    self->setLineWrapMode(static_cast<QTextEdit::LineWrapMode>(mode));
}

int QTextEdit_LineWrapColumnOrWidth(const QTextEdit* self) {
    return self->lineWrapColumnOrWidth();
}

void QTextEdit_SetLineWrapColumnOrWidth(QTextEdit* self, int w) {
    self->setLineWrapColumnOrWidth(static_cast<int>(w));
}

int QTextEdit_WordWrapMode(const QTextEdit* self) {
    return static_cast<int>(self->wordWrapMode());
}

void QTextEdit_SetWordWrapMode(QTextEdit* self, int policy) {
    self->setWordWrapMode(static_cast<QTextOption::WrapMode>(policy));
}

bool QTextEdit_Find(QTextEdit* self, const libqt_string exp) {
    QString exp_QString = QString::fromUtf8(exp.data, exp.len);
    return self->find(exp_QString);
}

bool QTextEdit_FindWithExp(QTextEdit* self, const QRegularExpression* exp) {
    return self->find(*exp);
}

libqt_string QTextEdit_ToPlainText(const QTextEdit* self) {
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

libqt_string QTextEdit_ToHtml(const QTextEdit* self) {
    QString _ret = self->toHtml();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTextEdit_ToMarkdown(const QTextEdit* self) {
    QString _ret = self->toMarkdown();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTextEdit_EnsureCursorVisible(QTextEdit* self) {
    self->ensureCursorVisible();
}

QMenu* QTextEdit_CreateStandardContextMenu(QTextEdit* self) {
    return self->createStandardContextMenu();
}

QMenu* QTextEdit_CreateStandardContextMenuWithPosition(QTextEdit* self, const QPoint* position) {
    return self->createStandardContextMenu(*position);
}

QTextCursor* QTextEdit_CursorForPosition(const QTextEdit* self, const QPoint* pos) {
    return new QTextCursor(self->cursorForPosition(*pos));
}

QRect* QTextEdit_CursorRect(const QTextEdit* self, const QTextCursor* cursor) {
    return new QRect(self->cursorRect(*cursor));
}

QRect* QTextEdit_CursorRect2(const QTextEdit* self) {
    return new QRect(self->cursorRect());
}

libqt_string QTextEdit_AnchorAt(const QTextEdit* self, const QPoint* pos) {
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

bool QTextEdit_OverwriteMode(const QTextEdit* self) {
    return self->overwriteMode();
}

void QTextEdit_SetOverwriteMode(QTextEdit* self, bool overwrite) {
    self->setOverwriteMode(overwrite);
}

double QTextEdit_TabStopDistance(const QTextEdit* self) {
    return static_cast<double>(self->tabStopDistance());
}

void QTextEdit_SetTabStopDistance(QTextEdit* self, double distance) {
    self->setTabStopDistance(static_cast<qreal>(distance));
}

int QTextEdit_CursorWidth(const QTextEdit* self) {
    return self->cursorWidth();
}

void QTextEdit_SetCursorWidth(QTextEdit* self, int width) {
    self->setCursorWidth(static_cast<int>(width));
}

bool QTextEdit_AcceptRichText(const QTextEdit* self) {
    return self->acceptRichText();
}

void QTextEdit_SetAcceptRichText(QTextEdit* self, bool accept) {
    self->setAcceptRichText(accept);
}

void QTextEdit_SetExtraSelections(QTextEdit* self, const libqt_list /* of QTextEdit__ExtraSelection* */ selections) {
    QList<QTextEdit::ExtraSelection> selections_QList;
    selections_QList.reserve(selections.len);
    QTextEdit__ExtraSelection** selections_arr = static_cast<QTextEdit__ExtraSelection**>(selections.data);
    for (size_t i = 0; i < selections.len; ++i) {
        selections_QList.push_back(*(selections_arr[i]));
    }
    self->setExtraSelections(selections_QList);
}

libqt_list /* of QTextEdit__ExtraSelection* */ QTextEdit_ExtraSelections(const QTextEdit* self) {
    QList<QTextEdit::ExtraSelection> _ret = self->extraSelections();
    // Convert QList<> from C++ memory to manually-managed C memory
    QTextEdit__ExtraSelection** _arr = static_cast<QTextEdit__ExtraSelection**>(malloc(sizeof(QTextEdit__ExtraSelection*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QTextEdit::ExtraSelection(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QTextEdit_MoveCursor(QTextEdit* self, int operation) {
    self->moveCursor(static_cast<QTextCursor::MoveOperation>(operation));
}

bool QTextEdit_CanPaste(const QTextEdit* self) {
    return self->canPaste();
}

void QTextEdit_Print(const QTextEdit* self, QPagedPaintDevice* printer) {
    self->print(printer);
}

QVariant* QTextEdit_InputMethodQuery2(const QTextEdit* self, int query, QVariant* argument) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query), *argument));
}

void QTextEdit_SetFontPointSize(QTextEdit* self, double s) {
    self->setFontPointSize(static_cast<qreal>(s));
}

void QTextEdit_SetFontFamily(QTextEdit* self, const libqt_string fontFamily) {
    QString fontFamily_QString = QString::fromUtf8(fontFamily.data, fontFamily.len);
    self->setFontFamily(fontFamily_QString);
}

void QTextEdit_SetFontWeight(QTextEdit* self, int w) {
    self->setFontWeight(static_cast<int>(w));
}

void QTextEdit_SetFontUnderline(QTextEdit* self, bool b) {
    self->setFontUnderline(b);
}

void QTextEdit_SetFontItalic(QTextEdit* self, bool b) {
    self->setFontItalic(b);
}

void QTextEdit_SetTextColor(QTextEdit* self, const QColor* c) {
    self->setTextColor(*c);
}

void QTextEdit_SetTextBackgroundColor(QTextEdit* self, const QColor* c) {
    self->setTextBackgroundColor(*c);
}

void QTextEdit_SetCurrentFont(QTextEdit* self, const QFont* f) {
    self->setCurrentFont(*f);
}

void QTextEdit_SetAlignment(QTextEdit* self, int a) {
    self->setAlignment(static_cast<Qt::Alignment>(a));
}

void QTextEdit_SetPlainText(QTextEdit* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setPlainText(text_QString);
}

void QTextEdit_SetHtml(QTextEdit* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setHtml(text_QString);
}

void QTextEdit_SetMarkdown(QTextEdit* self, const libqt_string markdown) {
    QString markdown_QString = QString::fromUtf8(markdown.data, markdown.len);
    self->setMarkdown(markdown_QString);
}

void QTextEdit_SetText(QTextEdit* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

void QTextEdit_Cut(QTextEdit* self) {
    self->cut();
}

void QTextEdit_Copy(QTextEdit* self) {
    self->copy();
}

void QTextEdit_Paste(QTextEdit* self) {
    self->paste();
}

void QTextEdit_Undo(QTextEdit* self) {
    self->undo();
}

void QTextEdit_Redo(QTextEdit* self) {
    self->redo();
}

void QTextEdit_Clear(QTextEdit* self) {
    self->clear();
}

void QTextEdit_SelectAll(QTextEdit* self) {
    self->selectAll();
}

void QTextEdit_InsertPlainText(QTextEdit* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->insertPlainText(text_QString);
}

void QTextEdit_InsertHtml(QTextEdit* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->insertHtml(text_QString);
}

void QTextEdit_Append(QTextEdit* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->append(text_QString);
}

void QTextEdit_ScrollToAnchor(QTextEdit* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->scrollToAnchor(name_QString);
}

void QTextEdit_ZoomIn(QTextEdit* self) {
    self->zoomIn();
}

void QTextEdit_ZoomOut(QTextEdit* self) {
    self->zoomOut();
}

void QTextEdit_TextChanged(QTextEdit* self) {
    self->textChanged();
}

void QTextEdit_Connect_TextChanged(QTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QTextEdit*) = reinterpret_cast<void (*)(QTextEdit*)>(slot);
    QTextEdit::connect(self, &QTextEdit::textChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QTextEdit_UndoAvailable(QTextEdit* self, bool b) {
    self->undoAvailable(b);
}

void QTextEdit_Connect_UndoAvailable(QTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QTextEdit*, bool) = reinterpret_cast<void (*)(QTextEdit*, bool)>(slot);
    QTextEdit::connect(self, &QTextEdit::undoAvailable, [self, slotFunc](bool b) {
        bool sigval1 = b;
        slotFunc(self, sigval1);
    });
}

void QTextEdit_RedoAvailable(QTextEdit* self, bool b) {
    self->redoAvailable(b);
}

void QTextEdit_Connect_RedoAvailable(QTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QTextEdit*, bool) = reinterpret_cast<void (*)(QTextEdit*, bool)>(slot);
    QTextEdit::connect(self, &QTextEdit::redoAvailable, [self, slotFunc](bool b) {
        bool sigval1 = b;
        slotFunc(self, sigval1);
    });
}

void QTextEdit_CurrentCharFormatChanged(QTextEdit* self, const QTextCharFormat* format) {
    self->currentCharFormatChanged(*format);
}

void QTextEdit_Connect_CurrentCharFormatChanged(QTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QTextEdit*, QTextCharFormat*) = reinterpret_cast<void (*)(QTextEdit*, QTextCharFormat*)>(slot);
    QTextEdit::connect(self, &QTextEdit::currentCharFormatChanged, [self, slotFunc](const QTextCharFormat& format) {
        const QTextCharFormat& format_ret = format;
        // Cast returned reference into pointer
        QTextCharFormat* sigval1 = const_cast<QTextCharFormat*>(&format_ret);
        slotFunc(self, sigval1);
    });
}

void QTextEdit_CopyAvailable(QTextEdit* self, bool b) {
    self->copyAvailable(b);
}

void QTextEdit_Connect_CopyAvailable(QTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QTextEdit*, bool) = reinterpret_cast<void (*)(QTextEdit*, bool)>(slot);
    QTextEdit::connect(self, &QTextEdit::copyAvailable, [self, slotFunc](bool b) {
        bool sigval1 = b;
        slotFunc(self, sigval1);
    });
}

void QTextEdit_SelectionChanged(QTextEdit* self) {
    self->selectionChanged();
}

void QTextEdit_Connect_SelectionChanged(QTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QTextEdit*) = reinterpret_cast<void (*)(QTextEdit*)>(slot);
    QTextEdit::connect(self, &QTextEdit::selectionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QTextEdit_CursorPositionChanged(QTextEdit* self) {
    self->cursorPositionChanged();
}

void QTextEdit_Connect_CursorPositionChanged(QTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QTextEdit*) = reinterpret_cast<void (*)(QTextEdit*)>(slot);
    QTextEdit::connect(self, &QTextEdit::cursorPositionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QTextEdit_Tr2(const char* s, const char* c) {
    QString _ret = QTextEdit::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTextEdit_Tr3(const char* s, const char* c, int n) {
    QString _ret = QTextEdit::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QTextEdit_Find2(QTextEdit* self, const libqt_string exp, int options) {
    QString exp_QString = QString::fromUtf8(exp.data, exp.len);
    return self->find(exp_QString, static_cast<QTextDocument::FindFlags>(options));
}

bool QTextEdit_Find22(QTextEdit* self, const QRegularExpression* exp, int options) {
    return self->find(*exp, static_cast<QTextDocument::FindFlags>(options));
}

libqt_string QTextEdit_ToMarkdown1(const QTextEdit* self, int features) {
    QString _ret = self->toMarkdown(static_cast<QTextDocument::MarkdownFeatures>(features));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTextEdit_MoveCursor2(QTextEdit* self, int operation, int mode) {
    self->moveCursor(static_cast<QTextCursor::MoveOperation>(operation), static_cast<QTextCursor::MoveMode>(mode));
}

void QTextEdit_ZoomIn1(QTextEdit* self, int range) {
    self->zoomIn(static_cast<int>(range));
}

void QTextEdit_ZoomOut1(QTextEdit* self, int range) {
    self->zoomOut(static_cast<int>(range));
}

// Derived class handler implementation
QVariant* QTextEdit_LoadResource(QTextEdit* self, int typeVal, const QUrl* name) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        return new QVariant(vqtextedit->loadResource(static_cast<int>(typeVal), *name));
    } else {
        return new QVariant(((VirtualQTextEdit*)self)->loadResource(static_cast<int>(typeVal), *name));
    }
}

// Base class handler implementation
QVariant* QTextEdit_QBaseLoadResource(QTextEdit* self, int typeVal, const QUrl* name) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_LoadResource_IsBase(true);
        return new QVariant(vqtextedit->loadResource(static_cast<int>(typeVal), *name));
    } else {
        return new QVariant(((VirtualQTextEdit*)self)->loadResource(static_cast<int>(typeVal), *name));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnLoadResource(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_LoadResource_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_LoadResource_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QTextEdit_InputMethodQuery(const QTextEdit* self, int property) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        return new QVariant(vqtextedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    } else {
        return new QVariant(((VirtualQTextEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    }
}

// Base class handler implementation
QVariant* QTextEdit_QBaseInputMethodQuery(const QTextEdit* self, int property) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_InputMethodQuery_IsBase(true);
        return new QVariant(vqtextedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    } else {
        return new QVariant(((VirtualQTextEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnInputMethodQuery(const QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_InputMethodQuery_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextEdit_Event(QTextEdit* self, QEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        return vqtextedit->event(e);
    } else {
        return ((VirtualQTextEdit*)self)->event(e);
    }
}

// Base class handler implementation
bool QTextEdit_QBaseEvent(QTextEdit* self, QEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_Event_IsBase(true);
        return vqtextedit->event(e);
    } else {
        return ((VirtualQTextEdit*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_Event_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_TimerEvent(QTextEdit* self, QTimerEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->timerEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->timerEvent(e);
    }
}

// Base class handler implementation
void QTextEdit_QBaseTimerEvent(QTextEdit* self, QTimerEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_TimerEvent_IsBase(true);
        vqtextedit->timerEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnTimerEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_TimerEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_KeyPressEvent(QTextEdit* self, QKeyEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->keyPressEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->keyPressEvent(e);
    }
}

// Base class handler implementation
void QTextEdit_QBaseKeyPressEvent(QTextEdit* self, QKeyEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_KeyPressEvent_IsBase(true);
        vqtextedit->keyPressEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnKeyPressEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_KeyPressEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_KeyReleaseEvent(QTextEdit* self, QKeyEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->keyReleaseEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void QTextEdit_QBaseKeyReleaseEvent(QTextEdit* self, QKeyEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_KeyReleaseEvent_IsBase(true);
        vqtextedit->keyReleaseEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnKeyReleaseEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_ResizeEvent(QTextEdit* self, QResizeEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->resizeEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->resizeEvent(e);
    }
}

// Base class handler implementation
void QTextEdit_QBaseResizeEvent(QTextEdit* self, QResizeEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_ResizeEvent_IsBase(true);
        vqtextedit->resizeEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnResizeEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_ResizeEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_PaintEvent(QTextEdit* self, QPaintEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->paintEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->paintEvent(e);
    }
}

// Base class handler implementation
void QTextEdit_QBasePaintEvent(QTextEdit* self, QPaintEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_PaintEvent_IsBase(true);
        vqtextedit->paintEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnPaintEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_PaintEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_MousePressEvent(QTextEdit* self, QMouseEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->mousePressEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->mousePressEvent(e);
    }
}

// Base class handler implementation
void QTextEdit_QBaseMousePressEvent(QTextEdit* self, QMouseEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_MousePressEvent_IsBase(true);
        vqtextedit->mousePressEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnMousePressEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_MousePressEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_MouseMoveEvent(QTextEdit* self, QMouseEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->mouseMoveEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void QTextEdit_QBaseMouseMoveEvent(QTextEdit* self, QMouseEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_MouseMoveEvent_IsBase(true);
        vqtextedit->mouseMoveEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnMouseMoveEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_MouseMoveEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_MouseReleaseEvent(QTextEdit* self, QMouseEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->mouseReleaseEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void QTextEdit_QBaseMouseReleaseEvent(QTextEdit* self, QMouseEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_MouseReleaseEvent_IsBase(true);
        vqtextedit->mouseReleaseEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnMouseReleaseEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_MouseDoubleClickEvent(QTextEdit* self, QMouseEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->mouseDoubleClickEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->mouseDoubleClickEvent(e);
    }
}

// Base class handler implementation
void QTextEdit_QBaseMouseDoubleClickEvent(QTextEdit* self, QMouseEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_MouseDoubleClickEvent_IsBase(true);
        vqtextedit->mouseDoubleClickEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->mouseDoubleClickEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnMouseDoubleClickEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextEdit_FocusNextPrevChild(QTextEdit* self, bool next) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        return vqtextedit->focusNextPrevChild(next);
    } else {
        return ((VirtualQTextEdit*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QTextEdit_QBaseFocusNextPrevChild(QTextEdit* self, bool next) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_FocusNextPrevChild_IsBase(true);
        return vqtextedit->focusNextPrevChild(next);
    } else {
        return ((VirtualQTextEdit*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnFocusNextPrevChild(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_ContextMenuEvent(QTextEdit* self, QContextMenuEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->contextMenuEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->contextMenuEvent(e);
    }
}

// Base class handler implementation
void QTextEdit_QBaseContextMenuEvent(QTextEdit* self, QContextMenuEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_ContextMenuEvent_IsBase(true);
        vqtextedit->contextMenuEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->contextMenuEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnContextMenuEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_ContextMenuEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_DragEnterEvent(QTextEdit* self, QDragEnterEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->dragEnterEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->dragEnterEvent(e);
    }
}

// Base class handler implementation
void QTextEdit_QBaseDragEnterEvent(QTextEdit* self, QDragEnterEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_DragEnterEvent_IsBase(true);
        vqtextedit->dragEnterEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->dragEnterEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnDragEnterEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_DragEnterEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_DragLeaveEvent(QTextEdit* self, QDragLeaveEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->dragLeaveEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->dragLeaveEvent(e);
    }
}

// Base class handler implementation
void QTextEdit_QBaseDragLeaveEvent(QTextEdit* self, QDragLeaveEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_DragLeaveEvent_IsBase(true);
        vqtextedit->dragLeaveEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->dragLeaveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnDragLeaveEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_DragLeaveEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_DragMoveEvent(QTextEdit* self, QDragMoveEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->dragMoveEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->dragMoveEvent(e);
    }
}

// Base class handler implementation
void QTextEdit_QBaseDragMoveEvent(QTextEdit* self, QDragMoveEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_DragMoveEvent_IsBase(true);
        vqtextedit->dragMoveEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->dragMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnDragMoveEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_DragMoveEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_DropEvent(QTextEdit* self, QDropEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->dropEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->dropEvent(e);
    }
}

// Base class handler implementation
void QTextEdit_QBaseDropEvent(QTextEdit* self, QDropEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_DropEvent_IsBase(true);
        vqtextedit->dropEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->dropEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnDropEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_DropEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_FocusInEvent(QTextEdit* self, QFocusEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->focusInEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->focusInEvent(e);
    }
}

// Base class handler implementation
void QTextEdit_QBaseFocusInEvent(QTextEdit* self, QFocusEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_FocusInEvent_IsBase(true);
        vqtextedit->focusInEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnFocusInEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_FocusInEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_FocusOutEvent(QTextEdit* self, QFocusEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->focusOutEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->focusOutEvent(e);
    }
}

// Base class handler implementation
void QTextEdit_QBaseFocusOutEvent(QTextEdit* self, QFocusEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_FocusOutEvent_IsBase(true);
        vqtextedit->focusOutEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnFocusOutEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_FocusOutEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_ShowEvent(QTextEdit* self, QShowEvent* param1) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->showEvent(param1);
    } else {
        ((VirtualQTextEdit*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void QTextEdit_QBaseShowEvent(QTextEdit* self, QShowEvent* param1) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_ShowEvent_IsBase(true);
        vqtextedit->showEvent(param1);
    } else {
        ((VirtualQTextEdit*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnShowEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_ShowEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_ChangeEvent(QTextEdit* self, QEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->changeEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void QTextEdit_QBaseChangeEvent(QTextEdit* self, QEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_ChangeEvent_IsBase(true);
        vqtextedit->changeEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnChangeEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_ChangeEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_WheelEvent(QTextEdit* self, QWheelEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->wheelEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->wheelEvent(e);
    }
}

// Base class handler implementation
void QTextEdit_QBaseWheelEvent(QTextEdit* self, QWheelEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_WheelEvent_IsBase(true);
        vqtextedit->wheelEvent(e);
    } else {
        ((VirtualQTextEdit*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnWheelEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_WheelEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QTextEdit_CreateMimeDataFromSelection(const QTextEdit* self) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        return vqtextedit->createMimeDataFromSelection();
    } else {
        return ((VirtualQTextEdit*)self)->createMimeDataFromSelection();
    }
}

// Base class handler implementation
QMimeData* QTextEdit_QBaseCreateMimeDataFromSelection(const QTextEdit* self) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_CreateMimeDataFromSelection_IsBase(true);
        return vqtextedit->createMimeDataFromSelection();
    } else {
        return ((VirtualQTextEdit*)self)->createMimeDataFromSelection();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnCreateMimeDataFromSelection(const QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_CreateMimeDataFromSelection_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_CreateMimeDataFromSelection_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextEdit_CanInsertFromMimeData(const QTextEdit* self, const QMimeData* source) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        return vqtextedit->canInsertFromMimeData(source);
    } else {
        return ((VirtualQTextEdit*)self)->canInsertFromMimeData(source);
    }
}

// Base class handler implementation
bool QTextEdit_QBaseCanInsertFromMimeData(const QTextEdit* self, const QMimeData* source) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_CanInsertFromMimeData_IsBase(true);
        return vqtextedit->canInsertFromMimeData(source);
    } else {
        return ((VirtualQTextEdit*)self)->canInsertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnCanInsertFromMimeData(const QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_CanInsertFromMimeData_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_CanInsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_InsertFromMimeData(QTextEdit* self, const QMimeData* source) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->insertFromMimeData(source);
    } else {
        ((VirtualQTextEdit*)self)->insertFromMimeData(source);
    }
}

// Base class handler implementation
void QTextEdit_QBaseInsertFromMimeData(QTextEdit* self, const QMimeData* source) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_InsertFromMimeData_IsBase(true);
        vqtextedit->insertFromMimeData(source);
    } else {
        ((VirtualQTextEdit*)self)->insertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnInsertFromMimeData(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_InsertFromMimeData_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_InsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_InputMethodEvent(QTextEdit* self, QInputMethodEvent* param1) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->inputMethodEvent(param1);
    } else {
        ((VirtualQTextEdit*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QTextEdit_QBaseInputMethodEvent(QTextEdit* self, QInputMethodEvent* param1) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_InputMethodEvent_IsBase(true);
        vqtextedit->inputMethodEvent(param1);
    } else {
        ((VirtualQTextEdit*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnInputMethodEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_InputMethodEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_ScrollContentsBy(QTextEdit* self, int dx, int dy) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQTextEdit*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QTextEdit_QBaseScrollContentsBy(QTextEdit* self, int dx, int dy) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_ScrollContentsBy_IsBase(true);
        vqtextedit->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQTextEdit*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnScrollContentsBy(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_ScrollContentsBy_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_DoSetTextCursor(QTextEdit* self, const QTextCursor* cursor) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->doSetTextCursor(*cursor);
    } else {
        ((VirtualQTextEdit*)self)->doSetTextCursor(*cursor);
    }
}

// Base class handler implementation
void QTextEdit_QBaseDoSetTextCursor(QTextEdit* self, const QTextCursor* cursor) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_DoSetTextCursor_IsBase(true);
        vqtextedit->doSetTextCursor(*cursor);
    } else {
        ((VirtualQTextEdit*)self)->doSetTextCursor(*cursor);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnDoSetTextCursor(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_DoSetTextCursor_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_DoSetTextCursor_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTextEdit_MinimumSizeHint(const QTextEdit* self) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        return new QSize(vqtextedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualQTextEdit*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QTextEdit_QBaseMinimumSizeHint(const QTextEdit* self) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_MinimumSizeHint_IsBase(true);
        return new QSize(vqtextedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualQTextEdit*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnMinimumSizeHint(const QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_MinimumSizeHint_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTextEdit_SizeHint(const QTextEdit* self) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        return new QSize(vqtextedit->sizeHint());
    } else {
        return new QSize(((VirtualQTextEdit*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QTextEdit_QBaseSizeHint(const QTextEdit* self) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_SizeHint_IsBase(true);
        return new QSize(vqtextedit->sizeHint());
    } else {
        return new QSize(((VirtualQTextEdit*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnSizeHint(const QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_SizeHint_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_SetupViewport(QTextEdit* self, QWidget* viewport) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setupViewport(viewport);
    } else {
        self->QTextEdit::setupViewport(viewport);
    }
}

// Base class handler implementation
void QTextEdit_QBaseSetupViewport(QTextEdit* self, QWidget* viewport) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_SetupViewport_IsBase(true);
        vqtextedit->setupViewport(viewport);
    } else {
        self->QTextEdit::setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnSetupViewport(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_SetupViewport_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextEdit_EventFilter(QTextEdit* self, QObject* param1, QEvent* param2) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        return vqtextedit->eventFilter(param1, param2);
    } else {
        return ((VirtualQTextEdit*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QTextEdit_QBaseEventFilter(QTextEdit* self, QObject* param1, QEvent* param2) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_EventFilter_IsBase(true);
        return vqtextedit->eventFilter(param1, param2);
    } else {
        return ((VirtualQTextEdit*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnEventFilter(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_EventFilter_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextEdit_ViewportEvent(QTextEdit* self, QEvent* param1) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        return vqtextedit->viewportEvent(param1);
    } else {
        return ((VirtualQTextEdit*)self)->viewportEvent(param1);
    }
}

// Base class handler implementation
bool QTextEdit_QBaseViewportEvent(QTextEdit* self, QEvent* param1) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_ViewportEvent_IsBase(true);
        return vqtextedit->viewportEvent(param1);
    } else {
        return ((VirtualQTextEdit*)self)->viewportEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnViewportEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_ViewportEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTextEdit_ViewportSizeHint(const QTextEdit* self) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        return new QSize(vqtextedit->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QTextEdit_QBaseViewportSizeHint(const QTextEdit* self) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_ViewportSizeHint_IsBase(true);
        return new QSize(vqtextedit->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnViewportSizeHint(const QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_ViewportSizeHint_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_InitStyleOption(const QTextEdit* self, QStyleOptionFrame* option) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->initStyleOption(option);
    } else {
        ((VirtualQTextEdit*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QTextEdit_QBaseInitStyleOption(const QTextEdit* self, QStyleOptionFrame* option) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_InitStyleOption_IsBase(true);
        vqtextedit->initStyleOption(option);
    } else {
        ((VirtualQTextEdit*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnInitStyleOption(const QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_InitStyleOption_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QTextEdit_DevType(const QTextEdit* self) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        return vqtextedit->devType();
    } else {
        return self->QTextEdit::devType();
    }
}

// Base class handler implementation
int QTextEdit_QBaseDevType(const QTextEdit* self) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_DevType_IsBase(true);
        return vqtextedit->devType();
    } else {
        return self->QTextEdit::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnDevType(const QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_DevType_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_SetVisible(QTextEdit* self, bool visible) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setVisible(visible);
    } else {
        self->QTextEdit::setVisible(visible);
    }
}

// Base class handler implementation
void QTextEdit_QBaseSetVisible(QTextEdit* self, bool visible) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_SetVisible_IsBase(true);
        vqtextedit->setVisible(visible);
    } else {
        self->QTextEdit::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnSetVisible(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_SetVisible_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QTextEdit_HeightForWidth(const QTextEdit* self, int param1) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        return vqtextedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QTextEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QTextEdit_QBaseHeightForWidth(const QTextEdit* self, int param1) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_HeightForWidth_IsBase(true);
        return vqtextedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QTextEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnHeightForWidth(const QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_HeightForWidth_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextEdit_HasHeightForWidth(const QTextEdit* self) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        return vqtextedit->hasHeightForWidth();
    } else {
        return self->QTextEdit::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QTextEdit_QBaseHasHeightForWidth(const QTextEdit* self) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_HasHeightForWidth_IsBase(true);
        return vqtextedit->hasHeightForWidth();
    } else {
        return self->QTextEdit::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnHasHeightForWidth(const QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_HasHeightForWidth_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QTextEdit_PaintEngine(const QTextEdit* self) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        return vqtextedit->paintEngine();
    } else {
        return self->QTextEdit::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QTextEdit_QBasePaintEngine(const QTextEdit* self) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_PaintEngine_IsBase(true);
        return vqtextedit->paintEngine();
    } else {
        return self->QTextEdit::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnPaintEngine(const QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_PaintEngine_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_EnterEvent(QTextEdit* self, QEnterEvent* event) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->enterEvent(event);
    } else {
        ((VirtualQTextEdit*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QTextEdit_QBaseEnterEvent(QTextEdit* self, QEnterEvent* event) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_EnterEvent_IsBase(true);
        vqtextedit->enterEvent(event);
    } else {
        ((VirtualQTextEdit*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnEnterEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_EnterEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_LeaveEvent(QTextEdit* self, QEvent* event) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->leaveEvent(event);
    } else {
        ((VirtualQTextEdit*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QTextEdit_QBaseLeaveEvent(QTextEdit* self, QEvent* event) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_LeaveEvent_IsBase(true);
        vqtextedit->leaveEvent(event);
    } else {
        ((VirtualQTextEdit*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnLeaveEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_LeaveEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_MoveEvent(QTextEdit* self, QMoveEvent* event) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->moveEvent(event);
    } else {
        ((VirtualQTextEdit*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QTextEdit_QBaseMoveEvent(QTextEdit* self, QMoveEvent* event) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_MoveEvent_IsBase(true);
        vqtextedit->moveEvent(event);
    } else {
        ((VirtualQTextEdit*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnMoveEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_MoveEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_CloseEvent(QTextEdit* self, QCloseEvent* event) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->closeEvent(event);
    } else {
        ((VirtualQTextEdit*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QTextEdit_QBaseCloseEvent(QTextEdit* self, QCloseEvent* event) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_CloseEvent_IsBase(true);
        vqtextedit->closeEvent(event);
    } else {
        ((VirtualQTextEdit*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnCloseEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_CloseEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_TabletEvent(QTextEdit* self, QTabletEvent* event) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->tabletEvent(event);
    } else {
        ((VirtualQTextEdit*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QTextEdit_QBaseTabletEvent(QTextEdit* self, QTabletEvent* event) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_TabletEvent_IsBase(true);
        vqtextedit->tabletEvent(event);
    } else {
        ((VirtualQTextEdit*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnTabletEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_TabletEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_ActionEvent(QTextEdit* self, QActionEvent* event) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->actionEvent(event);
    } else {
        ((VirtualQTextEdit*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QTextEdit_QBaseActionEvent(QTextEdit* self, QActionEvent* event) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_ActionEvent_IsBase(true);
        vqtextedit->actionEvent(event);
    } else {
        ((VirtualQTextEdit*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnActionEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_ActionEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_HideEvent(QTextEdit* self, QHideEvent* event) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->hideEvent(event);
    } else {
        ((VirtualQTextEdit*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QTextEdit_QBaseHideEvent(QTextEdit* self, QHideEvent* event) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_HideEvent_IsBase(true);
        vqtextedit->hideEvent(event);
    } else {
        ((VirtualQTextEdit*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnHideEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_HideEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextEdit_NativeEvent(QTextEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        return vqtextedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQTextEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QTextEdit_QBaseNativeEvent(QTextEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_NativeEvent_IsBase(true);
        return vqtextedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQTextEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnNativeEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_NativeEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QTextEdit_Metric(const QTextEdit* self, int param1) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        return vqtextedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQTextEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QTextEdit_QBaseMetric(const QTextEdit* self, int param1) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_Metric_IsBase(true);
        return vqtextedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQTextEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnMetric(const QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_Metric_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_InitPainter(const QTextEdit* self, QPainter* painter) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->initPainter(painter);
    } else {
        ((VirtualQTextEdit*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QTextEdit_QBaseInitPainter(const QTextEdit* self, QPainter* painter) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_InitPainter_IsBase(true);
        vqtextedit->initPainter(painter);
    } else {
        ((VirtualQTextEdit*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnInitPainter(const QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_InitPainter_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QTextEdit_Redirected(const QTextEdit* self, QPoint* offset) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        return vqtextedit->redirected(offset);
    } else {
        return ((VirtualQTextEdit*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QTextEdit_QBaseRedirected(const QTextEdit* self, QPoint* offset) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_Redirected_IsBase(true);
        return vqtextedit->redirected(offset);
    } else {
        return ((VirtualQTextEdit*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnRedirected(const QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_Redirected_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QTextEdit_SharedPainter(const QTextEdit* self) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        return vqtextedit->sharedPainter();
    } else {
        return ((VirtualQTextEdit*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QTextEdit_QBaseSharedPainter(const QTextEdit* self) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_SharedPainter_IsBase(true);
        return vqtextedit->sharedPainter();
    } else {
        return ((VirtualQTextEdit*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnSharedPainter(const QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_SharedPainter_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_ChildEvent(QTextEdit* self, QChildEvent* event) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->childEvent(event);
    } else {
        ((VirtualQTextEdit*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QTextEdit_QBaseChildEvent(QTextEdit* self, QChildEvent* event) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_ChildEvent_IsBase(true);
        vqtextedit->childEvent(event);
    } else {
        ((VirtualQTextEdit*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnChildEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_ChildEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_CustomEvent(QTextEdit* self, QEvent* event) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->customEvent(event);
    } else {
        ((VirtualQTextEdit*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QTextEdit_QBaseCustomEvent(QTextEdit* self, QEvent* event) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_CustomEvent_IsBase(true);
        vqtextedit->customEvent(event);
    } else {
        ((VirtualQTextEdit*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnCustomEvent(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_CustomEvent_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_ConnectNotify(QTextEdit* self, const QMetaMethod* signal) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->connectNotify(*signal);
    } else {
        ((VirtualQTextEdit*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTextEdit_QBaseConnectNotify(QTextEdit* self, const QMetaMethod* signal) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_ConnectNotify_IsBase(true);
        vqtextedit->connectNotify(*signal);
    } else {
        ((VirtualQTextEdit*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnConnectNotify(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_ConnectNotify_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_DisconnectNotify(QTextEdit* self, const QMetaMethod* signal) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->disconnectNotify(*signal);
    } else {
        ((VirtualQTextEdit*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTextEdit_QBaseDisconnectNotify(QTextEdit* self, const QMetaMethod* signal) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_DisconnectNotify_IsBase(true);
        vqtextedit->disconnectNotify(*signal);
    } else {
        ((VirtualQTextEdit*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnDisconnectNotify(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_DisconnectNotify_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_ZoomInF(QTextEdit* self, float range) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->zoomInF(static_cast<float>(range));
    } else {
        ((VirtualQTextEdit*)self)->zoomInF(static_cast<float>(range));
    }
}

// Base class handler implementation
void QTextEdit_QBaseZoomInF(QTextEdit* self, float range) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_ZoomInF_IsBase(true);
        vqtextedit->zoomInF(static_cast<float>(range));
    } else {
        ((VirtualQTextEdit*)self)->zoomInF(static_cast<float>(range));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnZoomInF(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_ZoomInF_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_ZoomInF_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_SetViewportMargins(QTextEdit* self, int left, int top, int right, int bottom) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQTextEdit*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QTextEdit_QBaseSetViewportMargins(QTextEdit* self, int left, int top, int right, int bottom) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_SetViewportMargins_IsBase(true);
        vqtextedit->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQTextEdit*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnSetViewportMargins(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_SetViewportMargins_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QTextEdit_ViewportMargins(const QTextEdit* self) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        return new QMargins(vqtextedit->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QTextEdit_QBaseViewportMargins(const QTextEdit* self) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_ViewportMargins_IsBase(true);
        return new QMargins(vqtextedit->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnViewportMargins(const QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_ViewportMargins_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_DrawFrame(QTextEdit* self, QPainter* param1) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->drawFrame(param1);
    } else {
        ((VirtualQTextEdit*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void QTextEdit_QBaseDrawFrame(QTextEdit* self, QPainter* param1) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_DrawFrame_IsBase(true);
        vqtextedit->drawFrame(param1);
    } else {
        ((VirtualQTextEdit*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnDrawFrame(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_DrawFrame_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_UpdateMicroFocus(QTextEdit* self) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->updateMicroFocus();
    } else {
        ((VirtualQTextEdit*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QTextEdit_QBaseUpdateMicroFocus(QTextEdit* self) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_UpdateMicroFocus_IsBase(true);
        vqtextedit->updateMicroFocus();
    } else {
        ((VirtualQTextEdit*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnUpdateMicroFocus(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_Create(QTextEdit* self) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->create();
    } else {
        ((VirtualQTextEdit*)self)->create();
    }
}

// Base class handler implementation
void QTextEdit_QBaseCreate(QTextEdit* self) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_Create_IsBase(true);
        vqtextedit->create();
    } else {
        ((VirtualQTextEdit*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnCreate(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_Create_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextEdit_Destroy(QTextEdit* self) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->destroy();
    } else {
        ((VirtualQTextEdit*)self)->destroy();
    }
}

// Base class handler implementation
void QTextEdit_QBaseDestroy(QTextEdit* self) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_Destroy_IsBase(true);
        vqtextedit->destroy();
    } else {
        ((VirtualQTextEdit*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnDestroy(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_Destroy_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextEdit_FocusNextChild(QTextEdit* self) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        return vqtextedit->focusNextChild();
    } else {
        return ((VirtualQTextEdit*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QTextEdit_QBaseFocusNextChild(QTextEdit* self) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_FocusNextChild_IsBase(true);
        return vqtextedit->focusNextChild();
    } else {
        return ((VirtualQTextEdit*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnFocusNextChild(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_FocusNextChild_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextEdit_FocusPreviousChild(QTextEdit* self) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        return vqtextedit->focusPreviousChild();
    } else {
        return ((VirtualQTextEdit*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QTextEdit_QBaseFocusPreviousChild(QTextEdit* self) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_FocusPreviousChild_IsBase(true);
        return vqtextedit->focusPreviousChild();
    } else {
        return ((VirtualQTextEdit*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnFocusPreviousChild(QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_FocusPreviousChild_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTextEdit_Sender(const QTextEdit* self) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        return vqtextedit->sender();
    } else {
        return ((VirtualQTextEdit*)self)->sender();
    }
}

// Base class handler implementation
QObject* QTextEdit_QBaseSender(const QTextEdit* self) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_Sender_IsBase(true);
        return vqtextedit->sender();
    } else {
        return ((VirtualQTextEdit*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnSender(const QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_Sender_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTextEdit_SenderSignalIndex(const QTextEdit* self) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        return vqtextedit->senderSignalIndex();
    } else {
        return ((VirtualQTextEdit*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QTextEdit_QBaseSenderSignalIndex(const QTextEdit* self) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_SenderSignalIndex_IsBase(true);
        return vqtextedit->senderSignalIndex();
    } else {
        return ((VirtualQTextEdit*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnSenderSignalIndex(const QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTextEdit_Receivers(const QTextEdit* self, const char* signal) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        return vqtextedit->receivers(signal);
    } else {
        return ((VirtualQTextEdit*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QTextEdit_QBaseReceivers(const QTextEdit* self, const char* signal) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_Receivers_IsBase(true);
        return vqtextedit->receivers(signal);
    } else {
        return ((VirtualQTextEdit*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnReceivers(const QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_Receivers_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextEdit_IsSignalConnected(const QTextEdit* self, const QMetaMethod* signal) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        return vqtextedit->isSignalConnected(*signal);
    } else {
        return ((VirtualQTextEdit*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTextEdit_QBaseIsSignalConnected(const QTextEdit* self, const QMetaMethod* signal) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_IsSignalConnected_IsBase(true);
        return vqtextedit->isSignalConnected(*signal);
    } else {
        return ((VirtualQTextEdit*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnIsSignalConnected(const QTextEdit* self, intptr_t slot) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit && vqtextedit->isVirtualQTextEdit) {
        vqtextedit->setQTextEdit_IsSignalConnected_Callback(reinterpret_cast<VirtualQTextEdit::QTextEdit_IsSignalConnected_Callback>(slot));
    }
}

void QTextEdit_Delete(QTextEdit* self) {
    delete self;
}

QTextEdit__ExtraSelection* QTextEdit__ExtraSelection_new(const QTextEdit__ExtraSelection* param1) {
    return new QTextEdit::ExtraSelection(*param1);
}

void QTextEdit__ExtraSelection_OperatorAssign(QTextEdit__ExtraSelection* self, const QTextEdit__ExtraSelection* param1) {
    self->operator=(*param1);
}

void QTextEdit__ExtraSelection_Delete(QTextEdit__ExtraSelection* self) {
    delete self;
}
