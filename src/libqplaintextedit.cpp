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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPlainTextEdit_Tr(const char* s) {
    auto _ret = QPlainTextEdit::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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

bool QPlainTextEdit_Find2(QPlainTextEdit* self, const QRegularExpression* exp) {
    return self->find(*exp);
}

libqt_string QPlainTextEdit_ToPlainText(const QPlainTextEdit* self) {
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

void QPlainTextEdit_EnsureCursorVisible(QPlainTextEdit* self) {
    self->ensureCursorVisible();
}

QVariant* QPlainTextEdit_LoadResource(QPlainTextEdit* self, int typeVal, const QUrl* name) {
    return new QVariant(self->loadResource(static_cast<int>(typeVal), *name));
}

QMenu* QPlainTextEdit_CreateStandardContextMenu(QPlainTextEdit* self) {
    return self->createStandardContextMenu();
}

QMenu* QPlainTextEdit_CreateStandardContextMenu2(QPlainTextEdit* self, const QPoint* position) {
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
    QTextEdit__ExtraSelection** _arr = static_cast<QTextEdit__ExtraSelection**>(malloc(sizeof(QTextEdit__ExtraSelection*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
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

QVariant* QPlainTextEdit_InputMethodQuery(const QPlainTextEdit* self, int property) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
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
    QPlainTextEdit::connect(self,
                            static_cast<void (QPlainTextEdit::*)()>(&QPlainTextEdit::textChanged),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QPlainTextEdit_UndoAvailable(QPlainTextEdit* self, bool b) {
    self->undoAvailable(b);
}

void QPlainTextEdit_Connect_UndoAvailable(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*, bool) = reinterpret_cast<void (*)(QPlainTextEdit*, bool)>(slot);
    QPlainTextEdit::connect(self,
                            static_cast<void (QPlainTextEdit::*)(bool)>(&QPlainTextEdit::undoAvailable),
                            [self, slotFunc](bool b) {
                                bool sigval1 = b;
                                slotFunc(self, sigval1);
                            });
}

void QPlainTextEdit_RedoAvailable(QPlainTextEdit* self, bool b) {
    self->redoAvailable(b);
}

void QPlainTextEdit_Connect_RedoAvailable(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*, bool) = reinterpret_cast<void (*)(QPlainTextEdit*, bool)>(slot);
    QPlainTextEdit::connect(self,
                            static_cast<void (QPlainTextEdit::*)(bool)>(&QPlainTextEdit::redoAvailable),
                            [self, slotFunc](bool b) {
                                bool sigval1 = b;
                                slotFunc(self, sigval1);
                            });
}

void QPlainTextEdit_CopyAvailable(QPlainTextEdit* self, bool b) {
    self->copyAvailable(b);
}

void QPlainTextEdit_Connect_CopyAvailable(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*, bool) = reinterpret_cast<void (*)(QPlainTextEdit*, bool)>(slot);
    QPlainTextEdit::connect(self,
                            static_cast<void (QPlainTextEdit::*)(bool)>(&QPlainTextEdit::copyAvailable),
                            [self, slotFunc](bool b) {
                                bool sigval1 = b;
                                slotFunc(self, sigval1);
                            });
}

void QPlainTextEdit_SelectionChanged(QPlainTextEdit* self) {
    self->selectionChanged();
}

void QPlainTextEdit_Connect_SelectionChanged(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*) = reinterpret_cast<void (*)(QPlainTextEdit*)>(slot);
    QPlainTextEdit::connect(self,
                            static_cast<void (QPlainTextEdit::*)()>(&QPlainTextEdit::selectionChanged),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QPlainTextEdit_CursorPositionChanged(QPlainTextEdit* self) {
    self->cursorPositionChanged();
}

void QPlainTextEdit_Connect_CursorPositionChanged(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*) = reinterpret_cast<void (*)(QPlainTextEdit*)>(slot);
    QPlainTextEdit::connect(self,
                            static_cast<void (QPlainTextEdit::*)()>(&QPlainTextEdit::cursorPositionChanged),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QPlainTextEdit_UpdateRequest(QPlainTextEdit* self, const QRect* rect, int dy) {
    self->updateRequest(*rect, static_cast<int>(dy));
}

void QPlainTextEdit_Connect_UpdateRequest(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*, QRect*, int) = reinterpret_cast<void (*)(QPlainTextEdit*, QRect*, int)>(slot);
    QPlainTextEdit::connect(self,
                            static_cast<void (QPlainTextEdit::*)(const QRect&, int)>(&QPlainTextEdit::updateRequest),
                            [self, slotFunc](const QRect& rect, int dy) {
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
    QPlainTextEdit::connect(self,
                            static_cast<void (QPlainTextEdit::*)(int)>(&QPlainTextEdit::blockCountChanged),
                            [self, slotFunc](int newBlockCount) {
                                int sigval1 = newBlockCount;
                                slotFunc(self, sigval1);
                            });
}

void QPlainTextEdit_ModificationChanged(QPlainTextEdit* self, bool param1) {
    self->modificationChanged(param1);
}

void QPlainTextEdit_Connect_ModificationChanged(QPlainTextEdit* self, intptr_t slot) {
    void (*slotFunc)(QPlainTextEdit*, bool) = reinterpret_cast<void (*)(QPlainTextEdit*, bool)>(slot);
    QPlainTextEdit::connect(self,
                            static_cast<void (QPlainTextEdit::*)(bool)>(&QPlainTextEdit::modificationChanged),
                            [self, slotFunc](bool param1) {
                                bool sigval1 = param1;
                                slotFunc(self, sigval1);
                            });
}

bool QPlainTextEdit_Event(QPlainTextEdit* self, QEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        return vqplaintextedit->event(e);
    }
    qFatal("Error: Protected method QPlainTextEdit::event called without a directly constructed type");
}

void QPlainTextEdit_TimerEvent(QPlainTextEdit* self, QTimerEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->timerEvent(e);
    }
}

void QPlainTextEdit_KeyPressEvent(QPlainTextEdit* self, QKeyEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->keyPressEvent(e);
    }
}

void QPlainTextEdit_KeyReleaseEvent(QPlainTextEdit* self, QKeyEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->keyReleaseEvent(e);
    }
}

void QPlainTextEdit_ResizeEvent(QPlainTextEdit* self, QResizeEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->resizeEvent(e);
    }
}

void QPlainTextEdit_PaintEvent(QPlainTextEdit* self, QPaintEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->paintEvent(e);
    }
}

void QPlainTextEdit_MousePressEvent(QPlainTextEdit* self, QMouseEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->mousePressEvent(e);
    }
}

void QPlainTextEdit_MouseMoveEvent(QPlainTextEdit* self, QMouseEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->mouseMoveEvent(e);
    }
}

void QPlainTextEdit_MouseReleaseEvent(QPlainTextEdit* self, QMouseEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->mouseReleaseEvent(e);
    }
}

void QPlainTextEdit_MouseDoubleClickEvent(QPlainTextEdit* self, QMouseEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->mouseDoubleClickEvent(e);
    }
}

bool QPlainTextEdit_FocusNextPrevChild(QPlainTextEdit* self, bool next) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        return vqplaintextedit->focusNextPrevChild(next);
    }
    qFatal("Error: Protected method QPlainTextEdit::focusNextPrevChild called without a directly constructed type");
}

void QPlainTextEdit_ContextMenuEvent(QPlainTextEdit* self, QContextMenuEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->contextMenuEvent(e);
    }
}

void QPlainTextEdit_DragEnterEvent(QPlainTextEdit* self, QDragEnterEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->dragEnterEvent(e);
    }
}

void QPlainTextEdit_DragLeaveEvent(QPlainTextEdit* self, QDragLeaveEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->dragLeaveEvent(e);
    }
}

void QPlainTextEdit_DragMoveEvent(QPlainTextEdit* self, QDragMoveEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->dragMoveEvent(e);
    }
}

void QPlainTextEdit_DropEvent(QPlainTextEdit* self, QDropEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->dropEvent(e);
    }
}

void QPlainTextEdit_FocusInEvent(QPlainTextEdit* self, QFocusEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->focusInEvent(e);
    }
}

void QPlainTextEdit_FocusOutEvent(QPlainTextEdit* self, QFocusEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->focusOutEvent(e);
    }
}

void QPlainTextEdit_ShowEvent(QPlainTextEdit* self, QShowEvent* param1) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->showEvent(param1);
    }
}

void QPlainTextEdit_ChangeEvent(QPlainTextEdit* self, QEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->changeEvent(e);
    }
}

void QPlainTextEdit_WheelEvent(QPlainTextEdit* self, QWheelEvent* e) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->wheelEvent(e);
    }
}

QMimeData* QPlainTextEdit_CreateMimeDataFromSelection(const QPlainTextEdit* self) {
    auto* vqplaintextedit = dynamic_cast<const VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        return vqplaintextedit->createMimeDataFromSelection();
    }
    qFatal("Error: Protected method QPlainTextEdit::createMimeDataFromSelection called without a directly constructed type");
}

bool QPlainTextEdit_CanInsertFromMimeData(const QPlainTextEdit* self, const QMimeData* source) {
    auto* vqplaintextedit = dynamic_cast<const VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        return vqplaintextedit->canInsertFromMimeData(source);
    }
    qFatal("Error: Protected method QPlainTextEdit::canInsertFromMimeData called without a directly constructed type");
}

void QPlainTextEdit_InsertFromMimeData(QPlainTextEdit* self, const QMimeData* source) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->insertFromMimeData(source);
    }
}

void QPlainTextEdit_InputMethodEvent(QPlainTextEdit* self, QInputMethodEvent* param1) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->inputMethodEvent(param1);
    }
}

void QPlainTextEdit_ScrollContentsBy(QPlainTextEdit* self, int dx, int dy) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

void QPlainTextEdit_DoSetTextCursor(QPlainTextEdit* self, const QTextCursor* cursor) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->doSetTextCursor(*cursor);
    }
}

libqt_string QPlainTextEdit_Tr2(const char* s, const char* c) {
    auto _ret = QPlainTextEdit::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPlainTextEdit_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPlainTextEdit::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QPlainTextEdit_Find22(QPlainTextEdit* self, const libqt_string exp, int options) {
    QString exp_QString = QString::fromUtf8(exp.data, exp.len);
    return self->find(exp_QString, static_cast<QTextDocument::FindFlags>(options));
}

bool QPlainTextEdit_Find23(QPlainTextEdit* self, const QRegularExpression* exp, int options) {
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

// Base class handler implementation
QMetaObject* QPlainTextEdit_SuperMetaObject(const QPlainTextEdit* self) {
    return (QMetaObject*)self->QPlainTextEdit::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnMetaObject(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self)))
        vqplaintextedit->qplaintextedit_metaobject_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPlainTextEdit_SuperMetacast(QPlainTextEdit* self, const char* param1) {
    return self->QPlainTextEdit::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnMetacast(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_metacast_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPlainTextEdit_SuperMetacall(QPlainTextEdit* self, int param1, int param2, void** param3) {
    return self->QPlainTextEdit::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnMetacall(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_metacall_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_Metacall_Callback>(slot);
}

// Base class handler implementation
QVariant* QPlainTextEdit_SuperLoadResource(QPlainTextEdit* self, int typeVal, const QUrl* name) {
    return new QVariant(self->QPlainTextEdit::loadResource(static_cast<int>(typeVal), *name));
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnLoadResource(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_loadresource_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_LoadResource_Callback>(slot);
}

// Base class handler implementation
QVariant* QPlainTextEdit_SuperInputMethodQuery(const QPlainTextEdit* self, int property) {
    return new QVariant(self->QPlainTextEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnInputMethodQuery(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self)))
        vqplaintextedit->qplaintextedit_inputmethodquery_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_InputMethodQuery_Callback>(slot);
}

// Base class handler implementation
bool QPlainTextEdit_SuperEvent(QPlainTextEdit* self, QEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        return vqplaintextedit->QPlainTextEdit::event(e);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_event_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_Event_Callback>(slot);
}

// Base class handler implementation
void QPlainTextEdit_SuperTimerEvent(QPlainTextEdit* self, QTimerEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::timerEvent(e);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnTimerEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_timerevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_TimerEvent_Callback>(slot);
}

// Base class handler implementation
void QPlainTextEdit_SuperKeyPressEvent(QPlainTextEdit* self, QKeyEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::keyPressEvent(e);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnKeyPressEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_keypressevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QPlainTextEdit_SuperKeyReleaseEvent(QPlainTextEdit* self, QKeyEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnKeyReleaseEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_keyreleaseevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_KeyReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QPlainTextEdit_SuperResizeEvent(QPlainTextEdit* self, QResizeEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnResizeEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_resizeevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QPlainTextEdit_SuperPaintEvent(QPlainTextEdit* self, QPaintEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnPaintEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_paintevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QPlainTextEdit_SuperMousePressEvent(QPlainTextEdit* self, QMouseEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnMousePressEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_mousepressevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QPlainTextEdit_SuperMouseMoveEvent(QPlainTextEdit* self, QMouseEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::mouseMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnMouseMoveEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_mousemoveevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QPlainTextEdit_SuperMouseReleaseEvent(QPlainTextEdit* self, QMouseEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnMouseReleaseEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_mousereleaseevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QPlainTextEdit_SuperMouseDoubleClickEvent(QPlainTextEdit* self, QMouseEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::mouseDoubleClickEvent(e);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnMouseDoubleClickEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_mousedoubleclickevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_MouseDoubleClickEvent_Callback>(slot);
}

// Base class handler implementation
bool QPlainTextEdit_SuperFocusNextPrevChild(QPlainTextEdit* self, bool next) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        return vqplaintextedit->QPlainTextEdit::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnFocusNextPrevChild(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_focusnextprevchild_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_FocusNextPrevChild_Callback>(slot);
}

// Base class handler implementation
void QPlainTextEdit_SuperContextMenuEvent(QPlainTextEdit* self, QContextMenuEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::contextMenuEvent(e);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnContextMenuEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_contextmenuevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ContextMenuEvent_Callback>(slot);
}

// Base class handler implementation
void QPlainTextEdit_SuperDragEnterEvent(QPlainTextEdit* self, QDragEnterEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::dragEnterEvent(e);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDragEnterEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_dragenterevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_DragEnterEvent_Callback>(slot);
}

// Base class handler implementation
void QPlainTextEdit_SuperDragLeaveEvent(QPlainTextEdit* self, QDragLeaveEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::dragLeaveEvent(e);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDragLeaveEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_dragleaveevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_DragLeaveEvent_Callback>(slot);
}

// Base class handler implementation
void QPlainTextEdit_SuperDragMoveEvent(QPlainTextEdit* self, QDragMoveEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::dragMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDragMoveEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_dragmoveevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_DragMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QPlainTextEdit_SuperDropEvent(QPlainTextEdit* self, QDropEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::dropEvent(e);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDropEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_dropevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_DropEvent_Callback>(slot);
}

// Base class handler implementation
void QPlainTextEdit_SuperFocusInEvent(QPlainTextEdit* self, QFocusEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::focusInEvent(e);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnFocusInEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_focusinevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_FocusInEvent_Callback>(slot);
}

// Base class handler implementation
void QPlainTextEdit_SuperFocusOutEvent(QPlainTextEdit* self, QFocusEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::focusOutEvent(e);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnFocusOutEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_focusoutevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_FocusOutEvent_Callback>(slot);
}

// Base class handler implementation
void QPlainTextEdit_SuperShowEvent(QPlainTextEdit* self, QShowEvent* param1) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnShowEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_showevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ShowEvent_Callback>(slot);
}

// Base class handler implementation
void QPlainTextEdit_SuperChangeEvent(QPlainTextEdit* self, QEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnChangeEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_changeevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
void QPlainTextEdit_SuperWheelEvent(QPlainTextEdit* self, QWheelEvent* e) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnWheelEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_wheelevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_WheelEvent_Callback>(slot);
}

// Base class handler implementation
QMimeData* QPlainTextEdit_SuperCreateMimeDataFromSelection(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return vqplaintextedit->QPlainTextEdit::createMimeDataFromSelection();
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::createMimeDataFromSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnCreateMimeDataFromSelection(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self)))
        vqplaintextedit->qplaintextedit_createmimedatafromselection_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_CreateMimeDataFromSelection_Callback>(slot);
}

// Base class handler implementation
bool QPlainTextEdit_SuperCanInsertFromMimeData(const QPlainTextEdit* self, const QMimeData* source) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return vqplaintextedit->QPlainTextEdit::canInsertFromMimeData(source);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::canInsertFromMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnCanInsertFromMimeData(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self)))
        vqplaintextedit->qplaintextedit_caninsertfrommimedata_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_CanInsertFromMimeData_Callback>(slot);
}

// Base class handler implementation
void QPlainTextEdit_SuperInsertFromMimeData(QPlainTextEdit* self, const QMimeData* source) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::insertFromMimeData(source);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::insertFromMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnInsertFromMimeData(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_insertfrommimedata_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_InsertFromMimeData_Callback>(slot);
}

// Base class handler implementation
void QPlainTextEdit_SuperInputMethodEvent(QPlainTextEdit* self, QInputMethodEvent* param1) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnInputMethodEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_inputmethodevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_InputMethodEvent_Callback>(slot);
}

// Base class handler implementation
void QPlainTextEdit_SuperScrollContentsBy(QPlainTextEdit* self, int dx, int dy) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnScrollContentsBy(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_scrollcontentsby_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ScrollContentsBy_Callback>(slot);
}

// Base class handler implementation
void QPlainTextEdit_SuperDoSetTextCursor(QPlainTextEdit* self, const QTextCursor* cursor) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::doSetTextCursor(*cursor);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::doSetTextCursor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDoSetTextCursor(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_dosettextcursor_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_DoSetTextCursor_Callback>(slot);
}

// Derived class handler implementation
QSize* QPlainTextEdit_MinimumSizeHint(const QPlainTextEdit* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QPlainTextEdit_SuperMinimumSizeHint(const QPlainTextEdit* self) {
    return new QSize(self->QPlainTextEdit::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnMinimumSizeHint(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self)))
        vqplaintextedit->qplaintextedit_minimumsizehint_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QPlainTextEdit_SizeHint(const QPlainTextEdit* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QPlainTextEdit_SuperSizeHint(const QPlainTextEdit* self) {
    return new QSize(self->QPlainTextEdit::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnSizeHint(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self)))
        vqplaintextedit->qplaintextedit_sizehint_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void QPlainTextEdit_SetupViewport(QPlainTextEdit* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void QPlainTextEdit_SuperSetupViewport(QPlainTextEdit* self, QWidget* viewport) {
    self->QPlainTextEdit::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnSetupViewport(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_setupviewport_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
bool QPlainTextEdit_EventFilter(QPlainTextEdit* self, QObject* param1, QEvent* param2) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        return vqplaintextedit->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method QPlainTextEdit::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPlainTextEdit_SuperEventFilter(QPlainTextEdit* self, QObject* param1, QEvent* param2) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        return vqplaintextedit->QPlainTextEdit::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnEventFilter(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_eventfilter_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_EventFilter_Callback>(slot);
}

// Derived class handler implementation
bool QPlainTextEdit_ViewportEvent(QPlainTextEdit* self, QEvent* param1) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        return vqplaintextedit->viewportEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPlainTextEdit::viewportEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPlainTextEdit_SuperViewportEvent(QPlainTextEdit* self, QEvent* param1) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        return vqplaintextedit->QPlainTextEdit::viewportEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnViewportEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_viewportevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ViewportEvent_Callback>(slot);
}

// Derived class handler implementation
QSize* QPlainTextEdit_ViewportSizeHint(const QPlainTextEdit* self) {
    return new QSize((self->*&VirtualQPlainTextEdit::Base::viewportSizeHint)());
}

// Base class handler implementation
QSize* QPlainTextEdit_SuperViewportSizeHint(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self)))
        return new QSize(vqplaintextedit->viewportSizeHint());
    qFatal("Error: Protected virtual method QPlainTextEdit::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnViewportSizeHint(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self)))
        vqplaintextedit->qplaintextedit_viewportsizehint_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
void QPlainTextEdit_InitStyleOption(const QPlainTextEdit* self, QStyleOptionFrame* option) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit) {
        vqplaintextedit->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QPlainTextEdit::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlainTextEdit_SuperInitStyleOption(const QPlainTextEdit* self, QStyleOptionFrame* option) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->QPlainTextEdit::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnInitStyleOption(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self)))
        vqplaintextedit->qplaintextedit_initstyleoption_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QPlainTextEdit_DevType(const QPlainTextEdit* self) {
    return self->devType();
}

// Base class handler implementation
int QPlainTextEdit_SuperDevType(const QPlainTextEdit* self) {
    return self->QPlainTextEdit::devType();
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDevType(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self)))
        vqplaintextedit->qplaintextedit_devtype_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_DevType_Callback>(slot);
}

// Derived class handler implementation
void QPlainTextEdit_SetVisible(QPlainTextEdit* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QPlainTextEdit_SuperSetVisible(QPlainTextEdit* self, bool visible) {
    self->QPlainTextEdit::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnSetVisible(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_setvisible_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QPlainTextEdit_HeightForWidth(const QPlainTextEdit* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QPlainTextEdit_SuperHeightForWidth(const QPlainTextEdit* self, int param1) {
    return self->QPlainTextEdit::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnHeightForWidth(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self)))
        vqplaintextedit->qplaintextedit_heightforwidth_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QPlainTextEdit_HasHeightForWidth(const QPlainTextEdit* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QPlainTextEdit_SuperHasHeightForWidth(const QPlainTextEdit* self) {
    return self->QPlainTextEdit::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnHasHeightForWidth(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self)))
        vqplaintextedit->qplaintextedit_hasheightforwidth_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QPlainTextEdit_PaintEngine(const QPlainTextEdit* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QPlainTextEdit_SuperPaintEngine(const QPlainTextEdit* self) {
    return self->QPlainTextEdit::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnPaintEngine(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self)))
        vqplaintextedit->qplaintextedit_paintengine_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QPlainTextEdit_EnterEvent(QPlainTextEdit* self, QEnterEvent* event) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlainTextEdit::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlainTextEdit_SuperEnterEvent(QPlainTextEdit* self, QEnterEvent* event) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnEnterEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_enterevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlainTextEdit_LeaveEvent(QPlainTextEdit* self, QEvent* event) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlainTextEdit::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlainTextEdit_SuperLeaveEvent(QPlainTextEdit* self, QEvent* event) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnLeaveEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_leaveevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlainTextEdit_MoveEvent(QPlainTextEdit* self, QMoveEvent* event) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlainTextEdit::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlainTextEdit_SuperMoveEvent(QPlainTextEdit* self, QMoveEvent* event) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnMoveEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_moveevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlainTextEdit_CloseEvent(QPlainTextEdit* self, QCloseEvent* event) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlainTextEdit::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlainTextEdit_SuperCloseEvent(QPlainTextEdit* self, QCloseEvent* event) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnCloseEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_closeevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlainTextEdit_TabletEvent(QPlainTextEdit* self, QTabletEvent* event) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlainTextEdit::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlainTextEdit_SuperTabletEvent(QPlainTextEdit* self, QTabletEvent* event) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnTabletEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_tabletevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlainTextEdit_ActionEvent(QPlainTextEdit* self, QActionEvent* event) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlainTextEdit::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlainTextEdit_SuperActionEvent(QPlainTextEdit* self, QActionEvent* event) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnActionEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_actionevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlainTextEdit_HideEvent(QPlainTextEdit* self, QHideEvent* event) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlainTextEdit::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlainTextEdit_SuperHideEvent(QPlainTextEdit* self, QHideEvent* event) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnHideEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_hideevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QPlainTextEdit_NativeEvent(QPlainTextEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        return vqplaintextedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QPlainTextEdit::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPlainTextEdit_SuperNativeEvent(QPlainTextEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        return vqplaintextedit->QPlainTextEdit::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnNativeEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_nativeevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QPlainTextEdit_Metric(const QPlainTextEdit* self, int param1) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit) {
        return vqplaintextedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QPlainTextEdit::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QPlainTextEdit_SuperMetric(const QPlainTextEdit* self, int param1) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return vqplaintextedit->QPlainTextEdit::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnMetric(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self)))
        vqplaintextedit->qplaintextedit_metric_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_Metric_Callback>(slot);
}

// Derived class handler implementation
void QPlainTextEdit_InitPainter(const QPlainTextEdit* self, QPainter* painter) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit) {
        vqplaintextedit->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QPlainTextEdit::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlainTextEdit_SuperInitPainter(const QPlainTextEdit* self, QPainter* painter) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        vqplaintextedit->QPlainTextEdit::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnInitPainter(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self)))
        vqplaintextedit->qplaintextedit_initpainter_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QPlainTextEdit_Redirected(const QPlainTextEdit* self, QPoint* offset) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit) {
        return vqplaintextedit->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QPlainTextEdit::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QPlainTextEdit_SuperRedirected(const QPlainTextEdit* self, QPoint* offset) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return vqplaintextedit->QPlainTextEdit::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnRedirected(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self)))
        vqplaintextedit->qplaintextedit_redirected_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QPlainTextEdit_SharedPainter(const QPlainTextEdit* self) {
    auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self));
    if (vqplaintextedit) {
        return vqplaintextedit->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QPlainTextEdit::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QPlainTextEdit_SuperSharedPainter(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return vqplaintextedit->QPlainTextEdit::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnSharedPainter(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self)))
        vqplaintextedit->qplaintextedit_sharedpainter_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QPlainTextEdit_ChildEvent(QPlainTextEdit* self, QChildEvent* event) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlainTextEdit::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlainTextEdit_SuperChildEvent(QPlainTextEdit* self, QChildEvent* event) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnChildEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_childevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlainTextEdit_CustomEvent(QPlainTextEdit* self, QEvent* event) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlainTextEdit::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlainTextEdit_SuperCustomEvent(QPlainTextEdit* self, QEvent* event) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnCustomEvent(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_customevent_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlainTextEdit_ConnectNotify(QPlainTextEdit* self, const QMetaMethod* signal) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPlainTextEdit::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlainTextEdit_SuperConnectNotify(QPlainTextEdit* self, const QMetaMethod* signal) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnConnectNotify(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_connectnotify_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPlainTextEdit_DisconnectNotify(QPlainTextEdit* self, const QMetaMethod* signal) {
    auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self);
    if (vqplaintextedit) {
        vqplaintextedit->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPlainTextEdit::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlainTextEdit_SuperDisconnectNotify(QPlainTextEdit* self, const QMetaMethod* signal) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->QPlainTextEdit::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPlainTextEdit::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextEdit_OnDisconnectNotify(QPlainTextEdit* self, intptr_t slot) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self))
        vqplaintextedit->qplaintextedit_disconnectnotify_callback = reinterpret_cast<VirtualQPlainTextEdit::QPlainTextEdit_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QTextBlock* QPlainTextEdit_FirstVisibleBlock(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self)))
        return new QTextBlock(vqplaintextedit->firstVisibleBlock());
    qFatal("Error: Protected method QPlainTextEdit::firstVisibleBlock called without a directly constructed type");
}

// Derived class handler implementation
QPointF* QPlainTextEdit_ContentOffset(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self)))
        return new QPointF(vqplaintextedit->contentOffset());
    qFatal("Error: Protected method QPlainTextEdit::contentOffset called without a directly constructed type");
}

// Derived class handler implementation
QRectF* QPlainTextEdit_BlockBoundingRect(const QPlainTextEdit* self, const QTextBlock* block) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self)))
        return new QRectF(vqplaintextedit->blockBoundingRect(*block));
    qFatal("Error: Protected method QPlainTextEdit::blockBoundingRect called without a directly constructed type");
}

// Derived class handler implementation
QRectF* QPlainTextEdit_BlockBoundingGeometry(const QPlainTextEdit* self, const QTextBlock* block) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self)))
        return new QRectF(vqplaintextedit->blockBoundingGeometry(*block));
    qFatal("Error: Protected method QPlainTextEdit::blockBoundingGeometry called without a directly constructed type");
}

// Derived class handler implementation
QAbstractTextDocumentLayout__PaintContext* QPlainTextEdit_GetPaintContext(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self)))
        return new QAbstractTextDocumentLayout::PaintContext(vqplaintextedit->getPaintContext());
    qFatal("Error: Protected method QPlainTextEdit::getPaintContext called without a directly constructed type");
}

// Derived class protected handler implementation
void QPlainTextEdit_ZoomInF(QPlainTextEdit* self, float range) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->VirtualQPlainTextEdit::zoomInF(static_cast<float>(range));
    } else
        qFatal("Error: Protected method QPlainTextEdit::zoomInF called without a directly constructed type");
}

// Derived class protected handler implementation
void QPlainTextEdit_SetViewportMargins(QPlainTextEdit* self, int left, int top, int right, int bottom) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->VirtualQPlainTextEdit::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method QPlainTextEdit::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* QPlainTextEdit_ViewportMargins(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self)))
        return new QMargins(vqplaintextedit->viewportMargins());
    qFatal("Error: Protected method QPlainTextEdit::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void QPlainTextEdit_DrawFrame(QPlainTextEdit* self, QPainter* param1) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->VirtualQPlainTextEdit::drawFrame(param1);
    } else
        qFatal("Error: Protected method QPlainTextEdit::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void QPlainTextEdit_UpdateMicroFocus(QPlainTextEdit* self) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->VirtualQPlainTextEdit::updateMicroFocus();
    } else
        qFatal("Error: Protected method QPlainTextEdit::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QPlainTextEdit_Create(QPlainTextEdit* self) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->VirtualQPlainTextEdit::create();
    } else
        qFatal("Error: Protected method QPlainTextEdit::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QPlainTextEdit_Destroy(QPlainTextEdit* self) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        vqplaintextedit->VirtualQPlainTextEdit::destroy();
    } else
        qFatal("Error: Protected method QPlainTextEdit::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPlainTextEdit_FocusNextChild(QPlainTextEdit* self) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        return vqplaintextedit->VirtualQPlainTextEdit::focusNextChild();
    } else
        qFatal("Error: Protected method QPlainTextEdit::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPlainTextEdit_FocusPreviousChild(QPlainTextEdit* self) {
    if (auto* vqplaintextedit = dynamic_cast<VirtualQPlainTextEdit*>(self)) {
        return vqplaintextedit->VirtualQPlainTextEdit::focusPreviousChild();
    } else
        qFatal("Error: Protected method QPlainTextEdit::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QPlainTextEdit_Sender(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return vqplaintextedit->VirtualQPlainTextEdit::sender();
    } else
        qFatal("Error: Protected method QPlainTextEdit::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPlainTextEdit_SenderSignalIndex(const QPlainTextEdit* self) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return vqplaintextedit->VirtualQPlainTextEdit::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPlainTextEdit::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPlainTextEdit_Receivers(const QPlainTextEdit* self, const char* signal) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return vqplaintextedit->VirtualQPlainTextEdit::receivers(signal);
    } else
        qFatal("Error: Protected method QPlainTextEdit::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPlainTextEdit_IsSignalConnected(const QPlainTextEdit* self, const QMetaMethod* signal) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return vqplaintextedit->VirtualQPlainTextEdit::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPlainTextEdit::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QPlainTextEdit_GetDecodedMetricF(const QPlainTextEdit* self, int metricA, int metricB) {
    if (auto* vqplaintextedit = const_cast<VirtualQPlainTextEdit*>(dynamic_cast<const VirtualQPlainTextEdit*>(self))) {
        return vqplaintextedit->VirtualQPlainTextEdit::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QPlainTextEdit::getDecodedMetricF called without a directly constructed type");
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPlainTextDocumentLayout_Tr(const char* s) {
    auto _ret = QPlainTextDocumentLayout::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPlainTextDocumentLayout_Draw(QPlainTextDocumentLayout* self, QPainter* param1, const QAbstractTextDocumentLayout__PaintContext* param2) {
    self->draw(param1, *param2);
}

int QPlainTextDocumentLayout_HitTest(const QPlainTextDocumentLayout* self, const QPointF* param1, int param2) {
    return self->hitTest(*param1, static_cast<Qt::HitTestAccuracy>(param2));
}

int QPlainTextDocumentLayout_PageCount(const QPlainTextDocumentLayout* self) {
    return self->pageCount();
}

QSizeF* QPlainTextDocumentLayout_DocumentSize(const QPlainTextDocumentLayout* self) {
    return new QSizeF(self->documentSize());
}

QRectF* QPlainTextDocumentLayout_FrameBoundingRect(const QPlainTextDocumentLayout* self, QTextFrame* param1) {
    return new QRectF(self->frameBoundingRect(param1));
}

QRectF* QPlainTextDocumentLayout_BlockBoundingRect(const QPlainTextDocumentLayout* self, const QTextBlock* block) {
    return new QRectF(self->blockBoundingRect(*block));
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

void QPlainTextDocumentLayout_DocumentChanged(QPlainTextDocumentLayout* self, int from, int param2, int charsAdded) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout) {
        vqplaintextdocumentlayout->documentChanged(static_cast<int>(from), static_cast<int>(param2), static_cast<int>(charsAdded));
    }
}

libqt_string QPlainTextDocumentLayout_Tr2(const char* s, const char* c) {
    auto _ret = QPlainTextDocumentLayout::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPlainTextDocumentLayout_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPlainTextDocumentLayout::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
QMetaObject* QPlainTextDocumentLayout_SuperMetaObject(const QPlainTextDocumentLayout* self) {
    return (QMetaObject*)self->QPlainTextDocumentLayout::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnMetaObject(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self)))
        vqplaintextdocumentlayout->qplaintextdocumentlayout_metaobject_callback = reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPlainTextDocumentLayout_SuperMetacast(QPlainTextDocumentLayout* self, const char* param1) {
    return self->QPlainTextDocumentLayout::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnMetacast(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self))
        vqplaintextdocumentlayout->qplaintextdocumentlayout_metacast_callback = reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPlainTextDocumentLayout_SuperMetacall(QPlainTextDocumentLayout* self, int param1, int param2, void** param3) {
    return self->QPlainTextDocumentLayout::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnMetacall(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self))
        vqplaintextdocumentlayout->qplaintextdocumentlayout_metacall_callback = reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_Metacall_Callback>(slot);
}

// Base class handler implementation
void QPlainTextDocumentLayout_SuperDraw(QPlainTextDocumentLayout* self, QPainter* param1, const QAbstractTextDocumentLayout__PaintContext* param2) {
    self->QPlainTextDocumentLayout::draw(param1, *param2);
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnDraw(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self))
        vqplaintextdocumentlayout->qplaintextdocumentlayout_draw_callback = reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_Draw_Callback>(slot);
}

// Base class handler implementation
int QPlainTextDocumentLayout_SuperHitTest(const QPlainTextDocumentLayout* self, const QPointF* param1, int param2) {
    return self->QPlainTextDocumentLayout::hitTest(*param1, static_cast<Qt::HitTestAccuracy>(param2));
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnHitTest(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self)))
        vqplaintextdocumentlayout->qplaintextdocumentlayout_hittest_callback = reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_HitTest_Callback>(slot);
}

// Base class handler implementation
int QPlainTextDocumentLayout_SuperPageCount(const QPlainTextDocumentLayout* self) {
    return self->QPlainTextDocumentLayout::pageCount();
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnPageCount(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self)))
        vqplaintextdocumentlayout->qplaintextdocumentlayout_pagecount_callback = reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_PageCount_Callback>(slot);
}

// Base class handler implementation
QSizeF* QPlainTextDocumentLayout_SuperDocumentSize(const QPlainTextDocumentLayout* self) {
    return new QSizeF(self->QPlainTextDocumentLayout::documentSize());
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnDocumentSize(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self)))
        vqplaintextdocumentlayout->qplaintextdocumentlayout_documentsize_callback = reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_DocumentSize_Callback>(slot);
}

// Base class handler implementation
QRectF* QPlainTextDocumentLayout_SuperFrameBoundingRect(const QPlainTextDocumentLayout* self, QTextFrame* param1) {
    return new QRectF(self->QPlainTextDocumentLayout::frameBoundingRect(param1));
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnFrameBoundingRect(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self)))
        vqplaintextdocumentlayout->qplaintextdocumentlayout_frameboundingrect_callback = reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_FrameBoundingRect_Callback>(slot);
}

// Base class handler implementation
QRectF* QPlainTextDocumentLayout_SuperBlockBoundingRect(const QPlainTextDocumentLayout* self, const QTextBlock* block) {
    return new QRectF(self->QPlainTextDocumentLayout::blockBoundingRect(*block));
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnBlockBoundingRect(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self)))
        vqplaintextdocumentlayout->qplaintextdocumentlayout_blockboundingrect_callback = reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_BlockBoundingRect_Callback>(slot);
}

// Base class handler implementation
void QPlainTextDocumentLayout_SuperDocumentChanged(QPlainTextDocumentLayout* self, int from, int param2, int charsAdded) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->QPlainTextDocumentLayout::documentChanged(static_cast<int>(from), static_cast<int>(param2), static_cast<int>(charsAdded));
    } else
        qFatal("Error: Protected virtual method QPlainTextDocumentLayout::documentChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnDocumentChanged(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self))
        vqplaintextdocumentlayout->qplaintextdocumentlayout_documentchanged_callback = reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_DocumentChanged_Callback>(slot);
}

// Derived class handler implementation
void QPlainTextDocumentLayout_ResizeInlineObject(QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, const QTextFormat* format) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout) {
        vqplaintextdocumentlayout->resizeInlineObject(*item, static_cast<int>(posInDocument), *format);
    } else {
        qFatal("Error: Protected virtual method QPlainTextDocumentLayout::resizeInlineObject called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlainTextDocumentLayout_SuperResizeInlineObject(QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, const QTextFormat* format) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->QPlainTextDocumentLayout::resizeInlineObject(*item, static_cast<int>(posInDocument), *format);
    } else
        qFatal("Error: Protected virtual method QPlainTextDocumentLayout::resizeInlineObject called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnResizeInlineObject(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self))
        vqplaintextdocumentlayout->qplaintextdocumentlayout_resizeinlineobject_callback = reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_ResizeInlineObject_Callback>(slot);
}

// Derived class handler implementation
void QPlainTextDocumentLayout_PositionInlineObject(QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, const QTextFormat* format) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout) {
        vqplaintextdocumentlayout->positionInlineObject(*item, static_cast<int>(posInDocument), *format);
    } else {
        qFatal("Error: Protected virtual method QPlainTextDocumentLayout::positionInlineObject called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlainTextDocumentLayout_SuperPositionInlineObject(QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, const QTextFormat* format) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->QPlainTextDocumentLayout::positionInlineObject(*item, static_cast<int>(posInDocument), *format);
    } else
        qFatal("Error: Protected virtual method QPlainTextDocumentLayout::positionInlineObject called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnPositionInlineObject(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self))
        vqplaintextdocumentlayout->qplaintextdocumentlayout_positioninlineobject_callback = reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_PositionInlineObject_Callback>(slot);
}

// Derived class handler implementation
void QPlainTextDocumentLayout_DrawInlineObject(QPlainTextDocumentLayout* self, QPainter* painter, const QRectF* rect, QTextInlineObject* object, int posInDocument, const QTextFormat* format) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout) {
        vqplaintextdocumentlayout->drawInlineObject(painter, *rect, *object, static_cast<int>(posInDocument), *format);
    } else {
        qFatal("Error: Protected virtual method QPlainTextDocumentLayout::drawInlineObject called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlainTextDocumentLayout_SuperDrawInlineObject(QPlainTextDocumentLayout* self, QPainter* painter, const QRectF* rect, QTextInlineObject* object, int posInDocument, const QTextFormat* format) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->QPlainTextDocumentLayout::drawInlineObject(painter, *rect, *object, static_cast<int>(posInDocument), *format);
    } else
        qFatal("Error: Protected virtual method QPlainTextDocumentLayout::drawInlineObject called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnDrawInlineObject(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self))
        vqplaintextdocumentlayout->qplaintextdocumentlayout_drawinlineobject_callback = reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_DrawInlineObject_Callback>(slot);
}

// Derived class handler implementation
bool QPlainTextDocumentLayout_Event(QPlainTextDocumentLayout* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QPlainTextDocumentLayout_SuperEvent(QPlainTextDocumentLayout* self, QEvent* event) {
    return self->QPlainTextDocumentLayout::event(event);
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnEvent(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self))
        vqplaintextdocumentlayout->qplaintextdocumentlayout_event_callback = reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_Event_Callback>(slot);
}

// Derived class handler implementation
bool QPlainTextDocumentLayout_EventFilter(QPlainTextDocumentLayout* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QPlainTextDocumentLayout_SuperEventFilter(QPlainTextDocumentLayout* self, QObject* watched, QEvent* event) {
    return self->QPlainTextDocumentLayout::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnEventFilter(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self))
        vqplaintextdocumentlayout->qplaintextdocumentlayout_eventfilter_callback = reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QPlainTextDocumentLayout_TimerEvent(QPlainTextDocumentLayout* self, QTimerEvent* event) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout) {
        vqplaintextdocumentlayout->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlainTextDocumentLayout::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlainTextDocumentLayout_SuperTimerEvent(QPlainTextDocumentLayout* self, QTimerEvent* event) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->QPlainTextDocumentLayout::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlainTextDocumentLayout::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnTimerEvent(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self))
        vqplaintextdocumentlayout->qplaintextdocumentlayout_timerevent_callback = reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlainTextDocumentLayout_ChildEvent(QPlainTextDocumentLayout* self, QChildEvent* event) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout) {
        vqplaintextdocumentlayout->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlainTextDocumentLayout::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlainTextDocumentLayout_SuperChildEvent(QPlainTextDocumentLayout* self, QChildEvent* event) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->QPlainTextDocumentLayout::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlainTextDocumentLayout::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnChildEvent(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self))
        vqplaintextdocumentlayout->qplaintextdocumentlayout_childevent_callback = reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlainTextDocumentLayout_CustomEvent(QPlainTextDocumentLayout* self, QEvent* event) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout) {
        vqplaintextdocumentlayout->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlainTextDocumentLayout::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlainTextDocumentLayout_SuperCustomEvent(QPlainTextDocumentLayout* self, QEvent* event) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->QPlainTextDocumentLayout::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlainTextDocumentLayout::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnCustomEvent(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self))
        vqplaintextdocumentlayout->qplaintextdocumentlayout_customevent_callback = reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlainTextDocumentLayout_ConnectNotify(QPlainTextDocumentLayout* self, const QMetaMethod* signal) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout) {
        vqplaintextdocumentlayout->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPlainTextDocumentLayout::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlainTextDocumentLayout_SuperConnectNotify(QPlainTextDocumentLayout* self, const QMetaMethod* signal) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->QPlainTextDocumentLayout::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPlainTextDocumentLayout::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnConnectNotify(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self))
        vqplaintextdocumentlayout->qplaintextdocumentlayout_connectnotify_callback = reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPlainTextDocumentLayout_DisconnectNotify(QPlainTextDocumentLayout* self, const QMetaMethod* signal) {
    auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self);
    if (vqplaintextdocumentlayout) {
        vqplaintextdocumentlayout->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPlainTextDocumentLayout::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlainTextDocumentLayout_SuperDisconnectNotify(QPlainTextDocumentLayout* self, const QMetaMethod* signal) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        vqplaintextdocumentlayout->QPlainTextDocumentLayout::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPlainTextDocumentLayout::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlainTextDocumentLayout_OnDisconnectNotify(QPlainTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self))
        vqplaintextdocumentlayout->qplaintextdocumentlayout_disconnectnotify_callback = reinterpret_cast<VirtualQPlainTextDocumentLayout::QPlainTextDocumentLayout_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
int QPlainTextDocumentLayout_FormatIndex(QPlainTextDocumentLayout* self, int pos) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self)) {
        return vqplaintextdocumentlayout->VirtualQPlainTextDocumentLayout::formatIndex(static_cast<int>(pos));
    } else
        qFatal("Error: Protected method QPlainTextDocumentLayout::formatIndex called without a directly constructed type");
}

// Derived class handler implementation
QTextCharFormat* QPlainTextDocumentLayout_Format(QPlainTextDocumentLayout* self, int pos) {
    if (auto* vqplaintextdocumentlayout = dynamic_cast<VirtualQPlainTextDocumentLayout*>(self))
        return new QTextCharFormat(vqplaintextdocumentlayout->format(static_cast<int>(pos)));
    qFatal("Error: Protected method QPlainTextDocumentLayout::format called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QPlainTextDocumentLayout_Sender(const QPlainTextDocumentLayout* self) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        return vqplaintextdocumentlayout->VirtualQPlainTextDocumentLayout::sender();
    } else
        qFatal("Error: Protected method QPlainTextDocumentLayout::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPlainTextDocumentLayout_SenderSignalIndex(const QPlainTextDocumentLayout* self) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        return vqplaintextdocumentlayout->VirtualQPlainTextDocumentLayout::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPlainTextDocumentLayout::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPlainTextDocumentLayout_Receivers(const QPlainTextDocumentLayout* self, const char* signal) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        return vqplaintextdocumentlayout->VirtualQPlainTextDocumentLayout::receivers(signal);
    } else
        qFatal("Error: Protected method QPlainTextDocumentLayout::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPlainTextDocumentLayout_IsSignalConnected(const QPlainTextDocumentLayout* self, const QMetaMethod* signal) {
    if (auto* vqplaintextdocumentlayout = const_cast<VirtualQPlainTextDocumentLayout*>(dynamic_cast<const VirtualQPlainTextDocumentLayout*>(self))) {
        return vqplaintextdocumentlayout->VirtualQPlainTextDocumentLayout::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPlainTextDocumentLayout::isSignalConnected called without a directly constructed type");
}

void QPlainTextDocumentLayout_Delete(QPlainTextDocumentLayout* self) {
    delete self;
}
