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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QTextEdit_Tr(const char* s) {
    auto _ret = QTextEdit::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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
    auto _ret = self->placeholderText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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
    auto _ret = self->fontFamily();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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
    self->setAutoFormatting(static_cast<QFlags<QTextEdit::AutoFormattingFlag>>(features));
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
    auto _ret = self->documentTitle();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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

bool QTextEdit_Find2(QTextEdit* self, const QRegularExpression* exp) {
    return self->find(*exp);
}

libqt_string QTextEdit_ToPlainText(const QTextEdit* self) {
    auto _ret = self->toPlainText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTextEdit_ToHtml(const QTextEdit* self) {
    auto _ret = self->toHtml();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTextEdit_ToMarkdown(const QTextEdit* self) {
    auto _ret = self->toMarkdown();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTextEdit_EnsureCursorVisible(QTextEdit* self) {
    self->ensureCursorVisible();
}

QVariant* QTextEdit_LoadResource(QTextEdit* self, int typeVal, const QUrl* name) {
    return new QVariant(self->loadResource(static_cast<int>(typeVal), *name));
}

QMenu* QTextEdit_CreateStandardContextMenu(QTextEdit* self) {
    return self->createStandardContextMenu();
}

QMenu* QTextEdit_CreateStandardContextMenu2(QTextEdit* self, const QPoint* position) {
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
    auto _ret = self->anchorAt(*pos);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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
    QTextEdit__ExtraSelection** _arr = static_cast<QTextEdit__ExtraSelection**>(malloc(sizeof(QTextEdit__ExtraSelection*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QTextEdit::ExtraSelection(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
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

QVariant* QTextEdit_InputMethodQuery(const QTextEdit* self, int property) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
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
    QTextEdit::connect(self,
                       static_cast<void (QTextEdit::*)()>(&QTextEdit::textChanged),
                       [self, slotFunc]() {
                           slotFunc(self);
                       });
}

void QTextEdit_UndoAvailable(QTextEdit* self, bool b) {
    self->undoAvailable(b);
}

void QTextEdit_Connect_UndoAvailable(QTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QTextEdit*, bool) = reinterpret_cast<void (*)(QTextEdit*, bool)>(slot);
    QTextEdit::connect(self,
                       static_cast<void (QTextEdit::*)(bool)>(&QTextEdit::undoAvailable),
                       [self, slotFunc](bool b) {
                           bool sigval1 = b;
                           slotFunc(self, sigval1);
                       });
}

void QTextEdit_RedoAvailable(QTextEdit* self, bool b) {
    self->redoAvailable(b);
}

void QTextEdit_Connect_RedoAvailable(QTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QTextEdit*, bool) = reinterpret_cast<void (*)(QTextEdit*, bool)>(slot);
    QTextEdit::connect(self,
                       static_cast<void (QTextEdit::*)(bool)>(&QTextEdit::redoAvailable),
                       [self, slotFunc](bool b) {
                           bool sigval1 = b;
                           slotFunc(self, sigval1);
                       });
}

void QTextEdit_CurrentCharFormatChanged(QTextEdit* self, const QTextCharFormat* format) {
    self->currentCharFormatChanged(*format);
}

void QTextEdit_Connect_CurrentCharFormatChanged(QTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QTextEdit*, QTextCharFormat*) = reinterpret_cast<void (*)(QTextEdit*, QTextCharFormat*)>(slot);
    QTextEdit::connect(self,
                       static_cast<void (QTextEdit::*)(const QTextCharFormat&)>(&QTextEdit::currentCharFormatChanged),
                       [self, slotFunc](const QTextCharFormat& format) {
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
    QTextEdit::connect(self,
                       static_cast<void (QTextEdit::*)(bool)>(&QTextEdit::copyAvailable),
                       [self, slotFunc](bool b) {
                           bool sigval1 = b;
                           slotFunc(self, sigval1);
                       });
}

void QTextEdit_SelectionChanged(QTextEdit* self) {
    self->selectionChanged();
}

void QTextEdit_Connect_SelectionChanged(QTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QTextEdit*) = reinterpret_cast<void (*)(QTextEdit*)>(slot);
    QTextEdit::connect(self,
                       static_cast<void (QTextEdit::*)()>(&QTextEdit::selectionChanged),
                       [self, slotFunc]() {
                           slotFunc(self);
                       });
}

void QTextEdit_CursorPositionChanged(QTextEdit* self) {
    self->cursorPositionChanged();
}

void QTextEdit_Connect_CursorPositionChanged(QTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QTextEdit*) = reinterpret_cast<void (*)(QTextEdit*)>(slot);
    QTextEdit::connect(self,
                       static_cast<void (QTextEdit::*)()>(&QTextEdit::cursorPositionChanged),
                       [self, slotFunc]() {
                           slotFunc(self);
                       });
}

bool QTextEdit_Event(QTextEdit* self, QEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        return vqtextedit->event(e);
    }
    qFatal("Error: Protected method QTextEdit::event called without a directly constructed type");
}

void QTextEdit_TimerEvent(QTextEdit* self, QTimerEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->timerEvent(e);
    }
}

void QTextEdit_KeyPressEvent(QTextEdit* self, QKeyEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->keyPressEvent(e);
    }
}

void QTextEdit_KeyReleaseEvent(QTextEdit* self, QKeyEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->keyReleaseEvent(e);
    }
}

void QTextEdit_ResizeEvent(QTextEdit* self, QResizeEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->resizeEvent(e);
    }
}

void QTextEdit_PaintEvent(QTextEdit* self, QPaintEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->paintEvent(e);
    }
}

void QTextEdit_MousePressEvent(QTextEdit* self, QMouseEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->mousePressEvent(e);
    }
}

void QTextEdit_MouseMoveEvent(QTextEdit* self, QMouseEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->mouseMoveEvent(e);
    }
}

void QTextEdit_MouseReleaseEvent(QTextEdit* self, QMouseEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->mouseReleaseEvent(e);
    }
}

void QTextEdit_MouseDoubleClickEvent(QTextEdit* self, QMouseEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->mouseDoubleClickEvent(e);
    }
}

bool QTextEdit_FocusNextPrevChild(QTextEdit* self, bool next) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        return vqtextedit->focusNextPrevChild(next);
    }
    qFatal("Error: Protected method QTextEdit::focusNextPrevChild called without a directly constructed type");
}

void QTextEdit_ContextMenuEvent(QTextEdit* self, QContextMenuEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->contextMenuEvent(e);
    }
}

void QTextEdit_DragEnterEvent(QTextEdit* self, QDragEnterEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->dragEnterEvent(e);
    }
}

void QTextEdit_DragLeaveEvent(QTextEdit* self, QDragLeaveEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->dragLeaveEvent(e);
    }
}

void QTextEdit_DragMoveEvent(QTextEdit* self, QDragMoveEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->dragMoveEvent(e);
    }
}

void QTextEdit_DropEvent(QTextEdit* self, QDropEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->dropEvent(e);
    }
}

void QTextEdit_FocusInEvent(QTextEdit* self, QFocusEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->focusInEvent(e);
    }
}

void QTextEdit_FocusOutEvent(QTextEdit* self, QFocusEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->focusOutEvent(e);
    }
}

void QTextEdit_ShowEvent(QTextEdit* self, QShowEvent* param1) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->showEvent(param1);
    }
}

void QTextEdit_ChangeEvent(QTextEdit* self, QEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->changeEvent(e);
    }
}

void QTextEdit_WheelEvent(QTextEdit* self, QWheelEvent* e) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->wheelEvent(e);
    }
}

QMimeData* QTextEdit_CreateMimeDataFromSelection(const QTextEdit* self) {
    auto* vqtextedit = dynamic_cast<const VirtualQTextEdit*>(self);
    if (vqtextedit) {
        return vqtextedit->createMimeDataFromSelection();
    }
    qFatal("Error: Protected method QTextEdit::createMimeDataFromSelection called without a directly constructed type");
}

bool QTextEdit_CanInsertFromMimeData(const QTextEdit* self, const QMimeData* source) {
    auto* vqtextedit = dynamic_cast<const VirtualQTextEdit*>(self);
    if (vqtextedit) {
        return vqtextedit->canInsertFromMimeData(source);
    }
    qFatal("Error: Protected method QTextEdit::canInsertFromMimeData called without a directly constructed type");
}

void QTextEdit_InsertFromMimeData(QTextEdit* self, const QMimeData* source) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->insertFromMimeData(source);
    }
}

void QTextEdit_InputMethodEvent(QTextEdit* self, QInputMethodEvent* param1) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->inputMethodEvent(param1);
    }
}

void QTextEdit_ScrollContentsBy(QTextEdit* self, int dx, int dy) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

void QTextEdit_DoSetTextCursor(QTextEdit* self, const QTextCursor* cursor) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->doSetTextCursor(*cursor);
    }
}

libqt_string QTextEdit_Tr2(const char* s, const char* c) {
    auto _ret = QTextEdit::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTextEdit_Tr3(const char* s, const char* c, int n) {
    auto _ret = QTextEdit::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QTextEdit_Find22(QTextEdit* self, const libqt_string exp, int options) {
    QString exp_QString = QString::fromUtf8(exp.data, exp.len);
    return self->find(exp_QString, static_cast<QTextDocument::FindFlags>(options));
}

bool QTextEdit_Find23(QTextEdit* self, const QRegularExpression* exp, int options) {
    return self->find(*exp, static_cast<QTextDocument::FindFlags>(options));
}

libqt_string QTextEdit_ToMarkdown1(const QTextEdit* self, int features) {
    auto _ret = self->toMarkdown(static_cast<QTextDocument::MarkdownFeatures>(features));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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

// Base class handler implementation
QMetaObject* QTextEdit_SuperMetaObject(const QTextEdit* self) {
    return (QMetaObject*)self->QTextEdit::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnMetaObject(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self)))
        vqtextedit->qtextedit_metaobject_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QTextEdit_SuperMetacast(QTextEdit* self, const char* param1) {
    return self->QTextEdit::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnMetacast(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_metacast_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_Metacast_Callback>(slot);
}

// Base class handler implementation
int QTextEdit_SuperMetacall(QTextEdit* self, int param1, int param2, void** param3) {
    return self->QTextEdit::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnMetacall(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_metacall_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_Metacall_Callback>(slot);
}

// Base class handler implementation
QVariant* QTextEdit_SuperLoadResource(QTextEdit* self, int typeVal, const QUrl* name) {
    return new QVariant(self->QTextEdit::loadResource(static_cast<int>(typeVal), *name));
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnLoadResource(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_loadresource_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_LoadResource_Callback>(slot);
}

// Base class handler implementation
QVariant* QTextEdit_SuperInputMethodQuery(const QTextEdit* self, int property) {
    return new QVariant(self->QTextEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnInputMethodQuery(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self)))
        vqtextedit->qtextedit_inputmethodquery_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_InputMethodQuery_Callback>(slot);
}

// Base class handler implementation
bool QTextEdit_SuperEvent(QTextEdit* self, QEvent* e) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        return vqtextedit->QTextEdit::event(e);
    } else
        qFatal("Error: Protected virtual method QTextEdit::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_event_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_Event_Callback>(slot);
}

// Base class handler implementation
void QTextEdit_SuperTimerEvent(QTextEdit* self, QTimerEvent* e) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::timerEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextEdit::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnTimerEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_timerevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_TimerEvent_Callback>(slot);
}

// Base class handler implementation
void QTextEdit_SuperKeyPressEvent(QTextEdit* self, QKeyEvent* e) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::keyPressEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextEdit::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnKeyPressEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_keypressevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QTextEdit_SuperKeyReleaseEvent(QTextEdit* self, QKeyEvent* e) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextEdit::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnKeyReleaseEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_keyreleaseevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_KeyReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QTextEdit_SuperResizeEvent(QTextEdit* self, QResizeEvent* e) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextEdit::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnResizeEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_resizeevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QTextEdit_SuperPaintEvent(QTextEdit* self, QPaintEvent* e) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextEdit::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnPaintEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_paintevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QTextEdit_SuperMousePressEvent(QTextEdit* self, QMouseEvent* e) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextEdit::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnMousePressEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_mousepressevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QTextEdit_SuperMouseMoveEvent(QTextEdit* self, QMouseEvent* e) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::mouseMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextEdit::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnMouseMoveEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_mousemoveevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QTextEdit_SuperMouseReleaseEvent(QTextEdit* self, QMouseEvent* e) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextEdit::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnMouseReleaseEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_mousereleaseevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QTextEdit_SuperMouseDoubleClickEvent(QTextEdit* self, QMouseEvent* e) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::mouseDoubleClickEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextEdit::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnMouseDoubleClickEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_mousedoubleclickevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_MouseDoubleClickEvent_Callback>(slot);
}

// Base class handler implementation
bool QTextEdit_SuperFocusNextPrevChild(QTextEdit* self, bool next) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        return vqtextedit->QTextEdit::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QTextEdit::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnFocusNextPrevChild(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_focusnextprevchild_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_FocusNextPrevChild_Callback>(slot);
}

// Base class handler implementation
void QTextEdit_SuperContextMenuEvent(QTextEdit* self, QContextMenuEvent* e) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::contextMenuEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextEdit::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnContextMenuEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_contextmenuevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_ContextMenuEvent_Callback>(slot);
}

// Base class handler implementation
void QTextEdit_SuperDragEnterEvent(QTextEdit* self, QDragEnterEvent* e) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::dragEnterEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextEdit::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnDragEnterEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_dragenterevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_DragEnterEvent_Callback>(slot);
}

// Base class handler implementation
void QTextEdit_SuperDragLeaveEvent(QTextEdit* self, QDragLeaveEvent* e) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::dragLeaveEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextEdit::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnDragLeaveEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_dragleaveevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_DragLeaveEvent_Callback>(slot);
}

// Base class handler implementation
void QTextEdit_SuperDragMoveEvent(QTextEdit* self, QDragMoveEvent* e) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::dragMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextEdit::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnDragMoveEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_dragmoveevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_DragMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QTextEdit_SuperDropEvent(QTextEdit* self, QDropEvent* e) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::dropEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextEdit::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnDropEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_dropevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_DropEvent_Callback>(slot);
}

// Base class handler implementation
void QTextEdit_SuperFocusInEvent(QTextEdit* self, QFocusEvent* e) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::focusInEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextEdit::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnFocusInEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_focusinevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_FocusInEvent_Callback>(slot);
}

// Base class handler implementation
void QTextEdit_SuperFocusOutEvent(QTextEdit* self, QFocusEvent* e) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::focusOutEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextEdit::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnFocusOutEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_focusoutevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_FocusOutEvent_Callback>(slot);
}

// Base class handler implementation
void QTextEdit_SuperShowEvent(QTextEdit* self, QShowEvent* param1) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTextEdit::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnShowEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_showevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_ShowEvent_Callback>(slot);
}

// Base class handler implementation
void QTextEdit_SuperChangeEvent(QTextEdit* self, QEvent* e) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextEdit::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnChangeEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_changeevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
void QTextEdit_SuperWheelEvent(QTextEdit* self, QWheelEvent* e) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method QTextEdit::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnWheelEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_wheelevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_WheelEvent_Callback>(slot);
}

// Base class handler implementation
QMimeData* QTextEdit_SuperCreateMimeDataFromSelection(const QTextEdit* self) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self))) {
        return vqtextedit->QTextEdit::createMimeDataFromSelection();
    } else
        qFatal("Error: Protected virtual method QTextEdit::createMimeDataFromSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnCreateMimeDataFromSelection(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self)))
        vqtextedit->qtextedit_createmimedatafromselection_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_CreateMimeDataFromSelection_Callback>(slot);
}

// Base class handler implementation
bool QTextEdit_SuperCanInsertFromMimeData(const QTextEdit* self, const QMimeData* source) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self))) {
        return vqtextedit->QTextEdit::canInsertFromMimeData(source);
    } else
        qFatal("Error: Protected virtual method QTextEdit::canInsertFromMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnCanInsertFromMimeData(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self)))
        vqtextedit->qtextedit_caninsertfrommimedata_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_CanInsertFromMimeData_Callback>(slot);
}

// Base class handler implementation
void QTextEdit_SuperInsertFromMimeData(QTextEdit* self, const QMimeData* source) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::insertFromMimeData(source);
    } else
        qFatal("Error: Protected virtual method QTextEdit::insertFromMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnInsertFromMimeData(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_insertfrommimedata_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_InsertFromMimeData_Callback>(slot);
}

// Base class handler implementation
void QTextEdit_SuperInputMethodEvent(QTextEdit* self, QInputMethodEvent* param1) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTextEdit::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnInputMethodEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_inputmethodevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_InputMethodEvent_Callback>(slot);
}

// Base class handler implementation
void QTextEdit_SuperScrollContentsBy(QTextEdit* self, int dx, int dy) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method QTextEdit::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnScrollContentsBy(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_scrollcontentsby_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_ScrollContentsBy_Callback>(slot);
}

// Base class handler implementation
void QTextEdit_SuperDoSetTextCursor(QTextEdit* self, const QTextCursor* cursor) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::doSetTextCursor(*cursor);
    } else
        qFatal("Error: Protected virtual method QTextEdit::doSetTextCursor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnDoSetTextCursor(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_dosettextcursor_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_DoSetTextCursor_Callback>(slot);
}

// Derived class handler implementation
QSize* QTextEdit_MinimumSizeHint(const QTextEdit* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QTextEdit_SuperMinimumSizeHint(const QTextEdit* self) {
    return new QSize(self->QTextEdit::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnMinimumSizeHint(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self)))
        vqtextedit->qtextedit_minimumsizehint_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QTextEdit_SizeHint(const QTextEdit* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QTextEdit_SuperSizeHint(const QTextEdit* self) {
    return new QSize(self->QTextEdit::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnSizeHint(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self)))
        vqtextedit->qtextedit_sizehint_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void QTextEdit_SetupViewport(QTextEdit* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void QTextEdit_SuperSetupViewport(QTextEdit* self, QWidget* viewport) {
    self->QTextEdit::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnSetupViewport(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_setupviewport_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
bool QTextEdit_EventFilter(QTextEdit* self, QObject* param1, QEvent* param2) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        return vqtextedit->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method QTextEdit::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTextEdit_SuperEventFilter(QTextEdit* self, QObject* param1, QEvent* param2) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        return vqtextedit->QTextEdit::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method QTextEdit::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnEventFilter(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_eventfilter_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_EventFilter_Callback>(slot);
}

// Derived class handler implementation
bool QTextEdit_ViewportEvent(QTextEdit* self, QEvent* param1) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        return vqtextedit->viewportEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QTextEdit::viewportEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTextEdit_SuperViewportEvent(QTextEdit* self, QEvent* param1) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        return vqtextedit->QTextEdit::viewportEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTextEdit::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnViewportEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_viewportevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_ViewportEvent_Callback>(slot);
}

// Derived class handler implementation
QSize* QTextEdit_ViewportSizeHint(const QTextEdit* self) {
    return new QSize((self->*&VirtualQTextEdit::Base::viewportSizeHint)());
}

// Base class handler implementation
QSize* QTextEdit_SuperViewportSizeHint(const QTextEdit* self) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self)))
        return new QSize(vqtextedit->viewportSizeHint());
    qFatal("Error: Protected virtual method QTextEdit::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnViewportSizeHint(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self)))
        vqtextedit->qtextedit_viewportsizehint_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
void QTextEdit_InitStyleOption(const QTextEdit* self, QStyleOptionFrame* option) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit) {
        vqtextedit->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QTextEdit::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextEdit_SuperInitStyleOption(const QTextEdit* self, QStyleOptionFrame* option) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self))) {
        vqtextedit->QTextEdit::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QTextEdit::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnInitStyleOption(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self)))
        vqtextedit->qtextedit_initstyleoption_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QTextEdit_DevType(const QTextEdit* self) {
    return self->devType();
}

// Base class handler implementation
int QTextEdit_SuperDevType(const QTextEdit* self) {
    return self->QTextEdit::devType();
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnDevType(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self)))
        vqtextedit->qtextedit_devtype_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_DevType_Callback>(slot);
}

// Derived class handler implementation
void QTextEdit_SetVisible(QTextEdit* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QTextEdit_SuperSetVisible(QTextEdit* self, bool visible) {
    self->QTextEdit::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnSetVisible(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_setvisible_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QTextEdit_HeightForWidth(const QTextEdit* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QTextEdit_SuperHeightForWidth(const QTextEdit* self, int param1) {
    return self->QTextEdit::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnHeightForWidth(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self)))
        vqtextedit->qtextedit_heightforwidth_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QTextEdit_HasHeightForWidth(const QTextEdit* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QTextEdit_SuperHasHeightForWidth(const QTextEdit* self) {
    return self->QTextEdit::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnHasHeightForWidth(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self)))
        vqtextedit->qtextedit_hasheightforwidth_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QTextEdit_PaintEngine(const QTextEdit* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QTextEdit_SuperPaintEngine(const QTextEdit* self) {
    return self->QTextEdit::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnPaintEngine(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self)))
        vqtextedit->qtextedit_paintengine_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QTextEdit_EnterEvent(QTextEdit* self, QEnterEvent* event) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTextEdit::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextEdit_SuperEnterEvent(QTextEdit* self, QEnterEvent* event) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QTextEdit::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnEnterEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_enterevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextEdit_LeaveEvent(QTextEdit* self, QEvent* event) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTextEdit::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextEdit_SuperLeaveEvent(QTextEdit* self, QEvent* event) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTextEdit::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnLeaveEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_leaveevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextEdit_MoveEvent(QTextEdit* self, QMoveEvent* event) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTextEdit::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextEdit_SuperMoveEvent(QTextEdit* self, QMoveEvent* event) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTextEdit::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnMoveEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_moveevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextEdit_CloseEvent(QTextEdit* self, QCloseEvent* event) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTextEdit::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextEdit_SuperCloseEvent(QTextEdit* self, QCloseEvent* event) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QTextEdit::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnCloseEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_closeevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextEdit_TabletEvent(QTextEdit* self, QTabletEvent* event) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTextEdit::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextEdit_SuperTabletEvent(QTextEdit* self, QTabletEvent* event) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QTextEdit::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnTabletEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_tabletevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextEdit_ActionEvent(QTextEdit* self, QActionEvent* event) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTextEdit::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextEdit_SuperActionEvent(QTextEdit* self, QActionEvent* event) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QTextEdit::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnActionEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_actionevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextEdit_HideEvent(QTextEdit* self, QHideEvent* event) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTextEdit::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextEdit_SuperHideEvent(QTextEdit* self, QHideEvent* event) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QTextEdit::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnHideEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_hideevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QTextEdit_NativeEvent(QTextEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        return vqtextedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QTextEdit::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTextEdit_SuperNativeEvent(QTextEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        return vqtextedit->QTextEdit::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QTextEdit::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnNativeEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_nativeevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QTextEdit_Metric(const QTextEdit* self, int param1) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit) {
        return vqtextedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QTextEdit::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QTextEdit_SuperMetric(const QTextEdit* self, int param1) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self))) {
        return vqtextedit->QTextEdit::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QTextEdit::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnMetric(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self)))
        vqtextedit->qtextedit_metric_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_Metric_Callback>(slot);
}

// Derived class handler implementation
void QTextEdit_InitPainter(const QTextEdit* self, QPainter* painter) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit) {
        vqtextedit->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QTextEdit::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextEdit_SuperInitPainter(const QTextEdit* self, QPainter* painter) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self))) {
        vqtextedit->QTextEdit::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QTextEdit::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnInitPainter(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self)))
        vqtextedit->qtextedit_initpainter_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QTextEdit_Redirected(const QTextEdit* self, QPoint* offset) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit) {
        return vqtextedit->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QTextEdit::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QTextEdit_SuperRedirected(const QTextEdit* self, QPoint* offset) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self))) {
        return vqtextedit->QTextEdit::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QTextEdit::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnRedirected(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self)))
        vqtextedit->qtextedit_redirected_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QTextEdit_SharedPainter(const QTextEdit* self) {
    auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self));
    if (vqtextedit) {
        return vqtextedit->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QTextEdit::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QTextEdit_SuperSharedPainter(const QTextEdit* self) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self))) {
        return vqtextedit->QTextEdit::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QTextEdit::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnSharedPainter(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self)))
        vqtextedit->qtextedit_sharedpainter_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QTextEdit_ChildEvent(QTextEdit* self, QChildEvent* event) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTextEdit::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextEdit_SuperChildEvent(QTextEdit* self, QChildEvent* event) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QTextEdit::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnChildEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_childevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextEdit_CustomEvent(QTextEdit* self, QEvent* event) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTextEdit::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextEdit_SuperCustomEvent(QTextEdit* self, QEvent* event) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QTextEdit::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnCustomEvent(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_customevent_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextEdit_ConnectNotify(QTextEdit* self, const QMetaMethod* signal) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTextEdit::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextEdit_SuperConnectNotify(QTextEdit* self, const QMetaMethod* signal) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTextEdit::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnConnectNotify(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_connectnotify_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QTextEdit_DisconnectNotify(QTextEdit* self, const QMetaMethod* signal) {
    auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self);
    if (vqtextedit) {
        vqtextedit->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTextEdit::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextEdit_SuperDisconnectNotify(QTextEdit* self, const QMetaMethod* signal) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->QTextEdit::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTextEdit::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextEdit_OnDisconnectNotify(QTextEdit* self, intptr_t slot) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self))
        vqtextedit->qtextedit_disconnectnotify_callback = reinterpret_cast<VirtualQTextEdit::QTextEdit_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QTextEdit_ZoomInF(QTextEdit* self, float range) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->VirtualQTextEdit::zoomInF(static_cast<float>(range));
    } else
        qFatal("Error: Protected method QTextEdit::zoomInF called without a directly constructed type");
}

// Derived class protected handler implementation
void QTextEdit_SetViewportMargins(QTextEdit* self, int left, int top, int right, int bottom) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->VirtualQTextEdit::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method QTextEdit::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* QTextEdit_ViewportMargins(const QTextEdit* self) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self)))
        return new QMargins(vqtextedit->viewportMargins());
    qFatal("Error: Protected method QTextEdit::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void QTextEdit_DrawFrame(QTextEdit* self, QPainter* param1) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->VirtualQTextEdit::drawFrame(param1);
    } else
        qFatal("Error: Protected method QTextEdit::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void QTextEdit_UpdateMicroFocus(QTextEdit* self) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->VirtualQTextEdit::updateMicroFocus();
    } else
        qFatal("Error: Protected method QTextEdit::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QTextEdit_Create(QTextEdit* self) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->VirtualQTextEdit::create();
    } else
        qFatal("Error: Protected method QTextEdit::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QTextEdit_Destroy(QTextEdit* self) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        vqtextedit->VirtualQTextEdit::destroy();
    } else
        qFatal("Error: Protected method QTextEdit::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTextEdit_FocusNextChild(QTextEdit* self) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        return vqtextedit->VirtualQTextEdit::focusNextChild();
    } else
        qFatal("Error: Protected method QTextEdit::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTextEdit_FocusPreviousChild(QTextEdit* self) {
    if (auto* vqtextedit = dynamic_cast<VirtualQTextEdit*>(self)) {
        return vqtextedit->VirtualQTextEdit::focusPreviousChild();
    } else
        qFatal("Error: Protected method QTextEdit::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QTextEdit_Sender(const QTextEdit* self) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self))) {
        return vqtextedit->VirtualQTextEdit::sender();
    } else
        qFatal("Error: Protected method QTextEdit::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QTextEdit_SenderSignalIndex(const QTextEdit* self) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self))) {
        return vqtextedit->VirtualQTextEdit::senderSignalIndex();
    } else
        qFatal("Error: Protected method QTextEdit::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QTextEdit_Receivers(const QTextEdit* self, const char* signal) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self))) {
        return vqtextedit->VirtualQTextEdit::receivers(signal);
    } else
        qFatal("Error: Protected method QTextEdit::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTextEdit_IsSignalConnected(const QTextEdit* self, const QMetaMethod* signal) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self))) {
        return vqtextedit->VirtualQTextEdit::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QTextEdit::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QTextEdit_GetDecodedMetricF(const QTextEdit* self, int metricA, int metricB) {
    if (auto* vqtextedit = const_cast<VirtualQTextEdit*>(dynamic_cast<const VirtualQTextEdit*>(self))) {
        return vqtextedit->VirtualQTextEdit::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QTextEdit::getDecodedMetricF called without a directly constructed type");
}

void QTextEdit_Delete(QTextEdit* self) {
    delete self;
}

QTextEdit__ExtraSelection* QTextEdit__ExtraSelection_new() {
    return new QTextEdit::ExtraSelection();
}

QTextEdit__ExtraSelection* QTextEdit__ExtraSelection_new2(const QTextEdit__ExtraSelection* param1) {
    return new QTextEdit::ExtraSelection(*param1);
}

QTextCursor* QTextEdit__ExtraSelection_Cursor(const QTextEdit__ExtraSelection* self) {
    return new QTextCursor(self->cursor);
}

void QTextEdit__ExtraSelection_SetCursor(QTextEdit__ExtraSelection* self, QTextCursor* cursor) {
    self->cursor = *cursor;
}

QTextCharFormat* QTextEdit__ExtraSelection_Format(const QTextEdit__ExtraSelection* self) {
    return new QTextCharFormat(self->format);
}

void QTextEdit__ExtraSelection_SetFormat(QTextEdit__ExtraSelection* self, QTextCharFormat* format) {
    self->format = *format;
}

void QTextEdit__ExtraSelection_OperatorAssign(QTextEdit__ExtraSelection* self, const QTextEdit__ExtraSelection* param1) {
    self->operator=(*param1);
}

void QTextEdit__ExtraSelection_Delete(QTextEdit__ExtraSelection* self) {
    delete self;
}
