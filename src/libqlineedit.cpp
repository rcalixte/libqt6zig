#include <QAction>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QCompleter>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QLineEdit>
#include <QMargins>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QRect>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QValidator>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qlineedit.h>
#include "libqlineedit.h"
#include "libqlineedit.hxx"

QLineEdit* QLineEdit_new(QWidget* parent) {
    return new VirtualQLineEdit(parent);
}

QLineEdit* QLineEdit_new2() {
    return new VirtualQLineEdit();
}

QLineEdit* QLineEdit_new3(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return new VirtualQLineEdit(param1_QString);
}

QLineEdit* QLineEdit_new4(const libqt_string param1, QWidget* parent) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return new VirtualQLineEdit(param1_QString, parent);
}

QMetaObject* QLineEdit_MetaObject(const QLineEdit* self) {
    return (QMetaObject*)self->metaObject();
}

void* QLineEdit_Metacast(QLineEdit* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QLineEdit_Metacall(QLineEdit* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QLineEdit_Tr(const char* s) {
    auto _ret = QLineEdit::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QLineEdit_Text(const QLineEdit* self) {
    auto _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QLineEdit_DisplayText(const QLineEdit* self) {
    auto _ret = self->displayText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QLineEdit_PlaceholderText(const QLineEdit* self) {
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

void QLineEdit_SetPlaceholderText(QLineEdit* self, const libqt_string placeholderText) {
    QString placeholderText_QString = QString::fromUtf8(placeholderText.data, placeholderText.len);
    self->setPlaceholderText(placeholderText_QString);
}

int QLineEdit_MaxLength(const QLineEdit* self) {
    return self->maxLength();
}

void QLineEdit_SetMaxLength(QLineEdit* self, int maxLength) {
    self->setMaxLength(static_cast<int>(maxLength));
}

void QLineEdit_SetFrame(QLineEdit* self, bool frame) {
    self->setFrame(frame);
}

bool QLineEdit_HasFrame(const QLineEdit* self) {
    return self->hasFrame();
}

void QLineEdit_SetClearButtonEnabled(QLineEdit* self, bool enable) {
    self->setClearButtonEnabled(enable);
}

bool QLineEdit_IsClearButtonEnabled(const QLineEdit* self) {
    return self->isClearButtonEnabled();
}

int QLineEdit_EchoMode(const QLineEdit* self) {
    return static_cast<int>(self->echoMode());
}

void QLineEdit_SetEchoMode(QLineEdit* self, int echoMode) {
    self->setEchoMode(static_cast<QLineEdit::EchoMode>(echoMode));
}

bool QLineEdit_IsReadOnly(const QLineEdit* self) {
    return self->isReadOnly();
}

void QLineEdit_SetReadOnly(QLineEdit* self, bool readOnly) {
    self->setReadOnly(readOnly);
}

void QLineEdit_SetValidator(QLineEdit* self, const QValidator* validator) {
    self->setValidator(validator);
}

QValidator* QLineEdit_Validator(const QLineEdit* self) {
    return (QValidator*)self->validator();
}

void QLineEdit_SetCompleter(QLineEdit* self, QCompleter* completer) {
    self->setCompleter(completer);
}

QCompleter* QLineEdit_Completer(const QLineEdit* self) {
    return self->completer();
}

QSize* QLineEdit_SizeHint(const QLineEdit* self) {
    return new QSize(self->sizeHint());
}

QSize* QLineEdit_MinimumSizeHint(const QLineEdit* self) {
    return new QSize(self->minimumSizeHint());
}

int QLineEdit_CursorPosition(const QLineEdit* self) {
    return self->cursorPosition();
}

void QLineEdit_SetCursorPosition(QLineEdit* self, int cursorPosition) {
    self->setCursorPosition(static_cast<int>(cursorPosition));
}

int QLineEdit_CursorPositionAt(QLineEdit* self, const QPoint* pos) {
    return self->cursorPositionAt(*pos);
}

void QLineEdit_SetAlignment(QLineEdit* self, int flag) {
    self->setAlignment(static_cast<Qt::Alignment>(flag));
}

int QLineEdit_Alignment(const QLineEdit* self) {
    return static_cast<int>(self->alignment());
}

void QLineEdit_CursorForward(QLineEdit* self, bool mark) {
    self->cursorForward(mark);
}

void QLineEdit_CursorBackward(QLineEdit* self, bool mark) {
    self->cursorBackward(mark);
}

void QLineEdit_CursorWordForward(QLineEdit* self, bool mark) {
    self->cursorWordForward(mark);
}

void QLineEdit_CursorWordBackward(QLineEdit* self, bool mark) {
    self->cursorWordBackward(mark);
}

void QLineEdit_Backspace(QLineEdit* self) {
    self->backspace();
}

void QLineEdit_Del(QLineEdit* self) {
    self->del();
}

void QLineEdit_Home(QLineEdit* self, bool mark) {
    self->home(mark);
}

void QLineEdit_End(QLineEdit* self, bool mark) {
    self->end(mark);
}

bool QLineEdit_IsModified(const QLineEdit* self) {
    return self->isModified();
}

void QLineEdit_SetModified(QLineEdit* self, bool modified) {
    self->setModified(modified);
}

void QLineEdit_SetSelection(QLineEdit* self, int param1, int param2) {
    self->setSelection(static_cast<int>(param1), static_cast<int>(param2));
}

bool QLineEdit_HasSelectedText(const QLineEdit* self) {
    return self->hasSelectedText();
}

libqt_string QLineEdit_SelectedText(const QLineEdit* self) {
    auto _ret = self->selectedText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QLineEdit_SelectionStart(const QLineEdit* self) {
    return self->selectionStart();
}

int QLineEdit_SelectionEnd(const QLineEdit* self) {
    return self->selectionEnd();
}

int QLineEdit_SelectionLength(const QLineEdit* self) {
    return self->selectionLength();
}

bool QLineEdit_IsUndoAvailable(const QLineEdit* self) {
    return self->isUndoAvailable();
}

bool QLineEdit_IsRedoAvailable(const QLineEdit* self) {
    return self->isRedoAvailable();
}

void QLineEdit_SetDragEnabled(QLineEdit* self, bool b) {
    self->setDragEnabled(b);
}

bool QLineEdit_DragEnabled(const QLineEdit* self) {
    return self->dragEnabled();
}

void QLineEdit_SetCursorMoveStyle(QLineEdit* self, int style) {
    self->setCursorMoveStyle(static_cast<Qt::CursorMoveStyle>(style));
}

int QLineEdit_CursorMoveStyle(const QLineEdit* self) {
    return static_cast<int>(self->cursorMoveStyle());
}

libqt_string QLineEdit_InputMask(const QLineEdit* self) {
    auto _ret = self->inputMask();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QLineEdit_SetInputMask(QLineEdit* self, const libqt_string inputMask) {
    QString inputMask_QString = QString::fromUtf8(inputMask.data, inputMask.len);
    self->setInputMask(inputMask_QString);
}

bool QLineEdit_HasAcceptableInput(const QLineEdit* self) {
    return self->hasAcceptableInput();
}

void QLineEdit_SetTextMargins(QLineEdit* self, int left, int top, int right, int bottom) {
    self->setTextMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

void QLineEdit_SetTextMargins2(QLineEdit* self, const QMargins* margins) {
    self->setTextMargins(*margins);
}

QMargins* QLineEdit_TextMargins(const QLineEdit* self) {
    return new QMargins(self->textMargins());
}

void QLineEdit_AddAction(QLineEdit* self, QAction* action, int position) {
    self->addAction(action, static_cast<QLineEdit::ActionPosition>(position));
}

QAction* QLineEdit_AddAction2(QLineEdit* self, const QIcon* icon, int position) {
    return self->addAction(*icon, static_cast<QLineEdit::ActionPosition>(position));
}

void QLineEdit_SetText(QLineEdit* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

void QLineEdit_Clear(QLineEdit* self) {
    self->clear();
}

void QLineEdit_SelectAll(QLineEdit* self) {
    self->selectAll();
}

void QLineEdit_Undo(QLineEdit* self) {
    self->undo();
}

void QLineEdit_Redo(QLineEdit* self) {
    self->redo();
}

void QLineEdit_Cut(QLineEdit* self) {
    self->cut();
}

void QLineEdit_Copy(const QLineEdit* self) {
    self->copy();
}

void QLineEdit_Paste(QLineEdit* self) {
    self->paste();
}

void QLineEdit_Deselect(QLineEdit* self) {
    self->deselect();
}

void QLineEdit_Insert(QLineEdit* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->insert(param1_QString);
}

QMenu* QLineEdit_CreateStandardContextMenu(QLineEdit* self) {
    return self->createStandardContextMenu();
}

void QLineEdit_TextChanged(QLineEdit* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->textChanged(param1_QString);
}

void QLineEdit_Connect_TextChanged(QLineEdit* self, intptr_t slot) {
    void (*slotFunc)(QLineEdit*, const char*) = reinterpret_cast<void (*)(QLineEdit*, const char*)>(slot);
    QLineEdit::connect(self,
                       static_cast<void (QLineEdit::*)(const QString&)>(&QLineEdit::textChanged),
                       [self, slotFunc](const QString& param1) {
                           const auto param1_ret = param1;
                           // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                           QByteArray param1_b = param1_ret.toUtf8();
                           auto param1_str_len = param1_b.length();
                           const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
                           memcpy((void*)param1_str, param1_b.data(), param1_str_len);
                           ((char*)param1_str)[param1_str_len] = '\0';
                           const char* sigval1 = param1_str;
                           slotFunc(self, sigval1);
                           libqt_free(param1_str);
                       });
}

void QLineEdit_TextEdited(QLineEdit* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->textEdited(param1_QString);
}

void QLineEdit_Connect_TextEdited(QLineEdit* self, intptr_t slot) {
    void (*slotFunc)(QLineEdit*, const char*) = reinterpret_cast<void (*)(QLineEdit*, const char*)>(slot);
    QLineEdit::connect(self,
                       static_cast<void (QLineEdit::*)(const QString&)>(&QLineEdit::textEdited),
                       [self, slotFunc](const QString& param1) {
                           const auto param1_ret = param1;
                           // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                           QByteArray param1_b = param1_ret.toUtf8();
                           auto param1_str_len = param1_b.length();
                           const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
                           memcpy((void*)param1_str, param1_b.data(), param1_str_len);
                           ((char*)param1_str)[param1_str_len] = '\0';
                           const char* sigval1 = param1_str;
                           slotFunc(self, sigval1);
                           libqt_free(param1_str);
                       });
}

void QLineEdit_CursorPositionChanged(QLineEdit* self, int param1, int param2) {
    self->cursorPositionChanged(static_cast<int>(param1), static_cast<int>(param2));
}

void QLineEdit_Connect_CursorPositionChanged(QLineEdit* self, intptr_t slot) {
    void (*slotFunc)(QLineEdit*, int, int) = reinterpret_cast<void (*)(QLineEdit*, int, int)>(slot);
    QLineEdit::connect(self,
                       static_cast<void (QLineEdit::*)(int, int)>(&QLineEdit::cursorPositionChanged),
                       [self, slotFunc](int param1, int param2) {
                           int sigval1 = param1;
                           int sigval2 = param2;
                           slotFunc(self, sigval1, sigval2);
                       });
}

void QLineEdit_ReturnPressed(QLineEdit* self) {
    self->returnPressed();
}

void QLineEdit_Connect_ReturnPressed(QLineEdit* self, intptr_t slot) {
    void (*slotFunc)(QLineEdit*) = reinterpret_cast<void (*)(QLineEdit*)>(slot);
    QLineEdit::connect(self,
                       static_cast<void (QLineEdit::*)()>(&QLineEdit::returnPressed),
                       [self, slotFunc]() {
                           slotFunc(self);
                       });
}

void QLineEdit_EditingFinished(QLineEdit* self) {
    self->editingFinished();
}

void QLineEdit_Connect_EditingFinished(QLineEdit* self, intptr_t slot) {
    void (*slotFunc)(QLineEdit*) = reinterpret_cast<void (*)(QLineEdit*)>(slot);
    QLineEdit::connect(self,
                       static_cast<void (QLineEdit::*)()>(&QLineEdit::editingFinished),
                       [self, slotFunc]() {
                           slotFunc(self);
                       });
}

void QLineEdit_SelectionChanged(QLineEdit* self) {
    self->selectionChanged();
}

void QLineEdit_Connect_SelectionChanged(QLineEdit* self, intptr_t slot) {
    void (*slotFunc)(QLineEdit*) = reinterpret_cast<void (*)(QLineEdit*)>(slot);
    QLineEdit::connect(self,
                       static_cast<void (QLineEdit::*)()>(&QLineEdit::selectionChanged),
                       [self, slotFunc]() {
                           slotFunc(self);
                       });
}

void QLineEdit_InputRejected(QLineEdit* self) {
    self->inputRejected();
}

void QLineEdit_Connect_InputRejected(QLineEdit* self, intptr_t slot) {
    void (*slotFunc)(QLineEdit*) = reinterpret_cast<void (*)(QLineEdit*)>(slot);
    QLineEdit::connect(self,
                       static_cast<void (QLineEdit::*)()>(&QLineEdit::inputRejected),
                       [self, slotFunc]() {
                           slotFunc(self);
                       });
}

void QLineEdit_MousePressEvent(QLineEdit* self, QMouseEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->mousePressEvent(param1);
    }
}

void QLineEdit_MouseMoveEvent(QLineEdit* self, QMouseEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->mouseMoveEvent(param1);
    }
}

void QLineEdit_MouseReleaseEvent(QLineEdit* self, QMouseEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->mouseReleaseEvent(param1);
    }
}

void QLineEdit_MouseDoubleClickEvent(QLineEdit* self, QMouseEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->mouseDoubleClickEvent(param1);
    }
}

void QLineEdit_KeyPressEvent(QLineEdit* self, QKeyEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->keyPressEvent(param1);
    }
}

void QLineEdit_KeyReleaseEvent(QLineEdit* self, QKeyEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->keyReleaseEvent(param1);
    }
}

void QLineEdit_FocusInEvent(QLineEdit* self, QFocusEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->focusInEvent(param1);
    }
}

void QLineEdit_FocusOutEvent(QLineEdit* self, QFocusEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->focusOutEvent(param1);
    }
}

void QLineEdit_PaintEvent(QLineEdit* self, QPaintEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->paintEvent(param1);
    }
}

void QLineEdit_DragEnterEvent(QLineEdit* self, QDragEnterEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->dragEnterEvent(param1);
    }
}

void QLineEdit_DragMoveEvent(QLineEdit* self, QDragMoveEvent* e) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->dragMoveEvent(e);
    }
}

void QLineEdit_DragLeaveEvent(QLineEdit* self, QDragLeaveEvent* e) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->dragLeaveEvent(e);
    }
}

void QLineEdit_DropEvent(QLineEdit* self, QDropEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->dropEvent(param1);
    }
}

void QLineEdit_ChangeEvent(QLineEdit* self, QEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->changeEvent(param1);
    }
}

void QLineEdit_ContextMenuEvent(QLineEdit* self, QContextMenuEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->contextMenuEvent(param1);
    }
}

void QLineEdit_InputMethodEvent(QLineEdit* self, QInputMethodEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->inputMethodEvent(param1);
    }
}

void QLineEdit_InitStyleOption(const QLineEdit* self, QStyleOptionFrame* option) {
    auto* vqlineedit = dynamic_cast<const VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->initStyleOption(option);
    }
}

QVariant* QLineEdit_InputMethodQuery(const QLineEdit* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

QVariant* QLineEdit_InputMethodQuery2(const QLineEdit* self, int property, QVariant* argument) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property), *argument));
}

void QLineEdit_TimerEvent(QLineEdit* self, QTimerEvent* param1) {
    self->timerEvent(param1);
}

bool QLineEdit_Event(QLineEdit* self, QEvent* param1) {
    return self->event(param1);
}

libqt_string QLineEdit_Tr2(const char* s, const char* c) {
    auto _ret = QLineEdit::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QLineEdit_Tr3(const char* s, const char* c, int n) {
    auto _ret = QLineEdit::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QLineEdit_CursorForward2(QLineEdit* self, bool mark, int steps) {
    self->cursorForward(mark, static_cast<int>(steps));
}

void QLineEdit_CursorBackward2(QLineEdit* self, bool mark, int steps) {
    self->cursorBackward(mark, static_cast<int>(steps));
}

// Base class handler implementation
QMetaObject* QLineEdit_SuperMetaObject(const QLineEdit* self) {
    return (QMetaObject*)self->QLineEdit::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnMetaObject(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self)))
        vqlineedit->qlineedit_metaobject_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QLineEdit_SuperMetacast(QLineEdit* self, const char* param1) {
    return self->QLineEdit::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnMetacast(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_metacast_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_Metacast_Callback>(slot);
}

// Base class handler implementation
int QLineEdit_SuperMetacall(QLineEdit* self, int param1, int param2, void** param3) {
    return self->QLineEdit::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnMetacall(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_metacall_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QLineEdit_SuperSizeHint(const QLineEdit* self) {
    return new QSize(self->QLineEdit::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnSizeHint(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self)))
        vqlineedit->qlineedit_sizehint_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QLineEdit_SuperMinimumSizeHint(const QLineEdit* self) {
    return new QSize(self->QLineEdit::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnMinimumSizeHint(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self)))
        vqlineedit->qlineedit_minimumsizehint_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
void QLineEdit_SuperMousePressEvent(QLineEdit* self, QMouseEvent* param1) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::mousePressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QLineEdit::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnMousePressEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_mousepressevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QLineEdit_SuperMouseMoveEvent(QLineEdit* self, QMouseEvent* param1) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::mouseMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QLineEdit::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnMouseMoveEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_mousemoveevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QLineEdit_SuperMouseReleaseEvent(QLineEdit* self, QMouseEvent* param1) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::mouseReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method QLineEdit::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnMouseReleaseEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_mousereleaseevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QLineEdit_SuperMouseDoubleClickEvent(QLineEdit* self, QMouseEvent* param1) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::mouseDoubleClickEvent(param1);
    } else
        qFatal("Error: Protected virtual method QLineEdit::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnMouseDoubleClickEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_mousedoubleclickevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_MouseDoubleClickEvent_Callback>(slot);
}

// Base class handler implementation
void QLineEdit_SuperKeyPressEvent(QLineEdit* self, QKeyEvent* param1) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QLineEdit::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnKeyPressEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_keypressevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QLineEdit_SuperKeyReleaseEvent(QLineEdit* self, QKeyEvent* param1) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::keyReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method QLineEdit::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnKeyReleaseEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_keyreleaseevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_KeyReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QLineEdit_SuperFocusInEvent(QLineEdit* self, QFocusEvent* param1) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::focusInEvent(param1);
    } else
        qFatal("Error: Protected virtual method QLineEdit::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnFocusInEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_focusinevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_FocusInEvent_Callback>(slot);
}

// Base class handler implementation
void QLineEdit_SuperFocusOutEvent(QLineEdit* self, QFocusEvent* param1) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::focusOutEvent(param1);
    } else
        qFatal("Error: Protected virtual method QLineEdit::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnFocusOutEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_focusoutevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_FocusOutEvent_Callback>(slot);
}

// Base class handler implementation
void QLineEdit_SuperPaintEvent(QLineEdit* self, QPaintEvent* param1) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method QLineEdit::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnPaintEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_paintevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QLineEdit_SuperDragEnterEvent(QLineEdit* self, QDragEnterEvent* param1) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::dragEnterEvent(param1);
    } else
        qFatal("Error: Protected virtual method QLineEdit::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnDragEnterEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_dragenterevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_DragEnterEvent_Callback>(slot);
}

// Base class handler implementation
void QLineEdit_SuperDragMoveEvent(QLineEdit* self, QDragMoveEvent* e) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::dragMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method QLineEdit::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnDragMoveEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_dragmoveevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_DragMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QLineEdit_SuperDragLeaveEvent(QLineEdit* self, QDragLeaveEvent* e) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::dragLeaveEvent(e);
    } else
        qFatal("Error: Protected virtual method QLineEdit::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnDragLeaveEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_dragleaveevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_DragLeaveEvent_Callback>(slot);
}

// Base class handler implementation
void QLineEdit_SuperDropEvent(QLineEdit* self, QDropEvent* param1) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::dropEvent(param1);
    } else
        qFatal("Error: Protected virtual method QLineEdit::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnDropEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_dropevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_DropEvent_Callback>(slot);
}

// Base class handler implementation
void QLineEdit_SuperChangeEvent(QLineEdit* self, QEvent* param1) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QLineEdit::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnChangeEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_changeevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
void QLineEdit_SuperContextMenuEvent(QLineEdit* self, QContextMenuEvent* param1) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QLineEdit::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnContextMenuEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_contextmenuevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_ContextMenuEvent_Callback>(slot);
}

// Base class handler implementation
void QLineEdit_SuperInputMethodEvent(QLineEdit* self, QInputMethodEvent* param1) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QLineEdit::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnInputMethodEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_inputmethodevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_InputMethodEvent_Callback>(slot);
}

// Base class handler implementation
void QLineEdit_SuperInitStyleOption(const QLineEdit* self, QStyleOptionFrame* option) {
    if (auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self))) {
        vqlineedit->QLineEdit::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QLineEdit::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnInitStyleOption(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self)))
        vqlineedit->qlineedit_initstyleoption_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_InitStyleOption_Callback>(slot);
}

// Base class handler implementation
QVariant* QLineEdit_SuperInputMethodQuery(const QLineEdit* self, int param1) {
    return new QVariant(self->QLineEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnInputMethodQuery(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self)))
        vqlineedit->qlineedit_inputmethodquery_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_InputMethodQuery_Callback>(slot);
}

// Base class handler implementation
void QLineEdit_SuperTimerEvent(QLineEdit* self, QTimerEvent* param1) {
    self->QLineEdit::timerEvent(param1);
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnTimerEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_timerevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_TimerEvent_Callback>(slot);
}

// Base class handler implementation
bool QLineEdit_SuperEvent(QLineEdit* self, QEvent* param1) {
    return self->QLineEdit::event(param1);
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_event_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_Event_Callback>(slot);
}

// Derived class handler implementation
int QLineEdit_DevType(const QLineEdit* self) {
    return self->devType();
}

// Base class handler implementation
int QLineEdit_SuperDevType(const QLineEdit* self) {
    return self->QLineEdit::devType();
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnDevType(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self)))
        vqlineedit->qlineedit_devtype_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_DevType_Callback>(slot);
}

// Derived class handler implementation
void QLineEdit_SetVisible(QLineEdit* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QLineEdit_SuperSetVisible(QLineEdit* self, bool visible) {
    self->QLineEdit::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnSetVisible(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_setvisible_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QLineEdit_HeightForWidth(const QLineEdit* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QLineEdit_SuperHeightForWidth(const QLineEdit* self, int param1) {
    return self->QLineEdit::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnHeightForWidth(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self)))
        vqlineedit->qlineedit_heightforwidth_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QLineEdit_HasHeightForWidth(const QLineEdit* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QLineEdit_SuperHasHeightForWidth(const QLineEdit* self) {
    return self->QLineEdit::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnHasHeightForWidth(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self)))
        vqlineedit->qlineedit_hasheightforwidth_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QLineEdit_PaintEngine(const QLineEdit* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QLineEdit_SuperPaintEngine(const QLineEdit* self) {
    return self->QLineEdit::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnPaintEngine(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self)))
        vqlineedit->qlineedit_paintengine_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QLineEdit_WheelEvent(QLineEdit* self, QWheelEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLineEdit::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLineEdit_SuperWheelEvent(QLineEdit* self, QWheelEvent* event) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QLineEdit::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnWheelEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_wheelevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QLineEdit_EnterEvent(QLineEdit* self, QEnterEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLineEdit::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLineEdit_SuperEnterEvent(QLineEdit* self, QEnterEvent* event) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QLineEdit::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnEnterEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_enterevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QLineEdit_LeaveEvent(QLineEdit* self, QEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLineEdit::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLineEdit_SuperLeaveEvent(QLineEdit* self, QEvent* event) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QLineEdit::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnLeaveEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_leaveevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QLineEdit_MoveEvent(QLineEdit* self, QMoveEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLineEdit::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLineEdit_SuperMoveEvent(QLineEdit* self, QMoveEvent* event) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QLineEdit::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnMoveEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_moveevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QLineEdit_ResizeEvent(QLineEdit* self, QResizeEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLineEdit::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLineEdit_SuperResizeEvent(QLineEdit* self, QResizeEvent* event) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QLineEdit::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnResizeEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_resizeevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QLineEdit_CloseEvent(QLineEdit* self, QCloseEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLineEdit::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLineEdit_SuperCloseEvent(QLineEdit* self, QCloseEvent* event) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QLineEdit::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnCloseEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_closeevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QLineEdit_TabletEvent(QLineEdit* self, QTabletEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLineEdit::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLineEdit_SuperTabletEvent(QLineEdit* self, QTabletEvent* event) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QLineEdit::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnTabletEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_tabletevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QLineEdit_ActionEvent(QLineEdit* self, QActionEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLineEdit::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLineEdit_SuperActionEvent(QLineEdit* self, QActionEvent* event) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QLineEdit::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnActionEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_actionevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QLineEdit_ShowEvent(QLineEdit* self, QShowEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLineEdit::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLineEdit_SuperShowEvent(QLineEdit* self, QShowEvent* event) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QLineEdit::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnShowEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_showevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QLineEdit_HideEvent(QLineEdit* self, QHideEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLineEdit::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLineEdit_SuperHideEvent(QLineEdit* self, QHideEvent* event) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QLineEdit::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnHideEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_hideevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QLineEdit_NativeEvent(QLineEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        return vqlineedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QLineEdit::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QLineEdit_SuperNativeEvent(QLineEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        return vqlineedit->QLineEdit::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QLineEdit::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnNativeEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_nativeevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QLineEdit_Metric(const QLineEdit* self, int param1) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit) {
        return vqlineedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QLineEdit::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QLineEdit_SuperMetric(const QLineEdit* self, int param1) {
    if (auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self))) {
        return vqlineedit->QLineEdit::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QLineEdit::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnMetric(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self)))
        vqlineedit->qlineedit_metric_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_Metric_Callback>(slot);
}

// Derived class handler implementation
void QLineEdit_InitPainter(const QLineEdit* self, QPainter* painter) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit) {
        vqlineedit->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QLineEdit::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QLineEdit_SuperInitPainter(const QLineEdit* self, QPainter* painter) {
    if (auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self))) {
        vqlineedit->QLineEdit::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QLineEdit::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnInitPainter(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self)))
        vqlineedit->qlineedit_initpainter_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QLineEdit_Redirected(const QLineEdit* self, QPoint* offset) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit) {
        return vqlineedit->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QLineEdit::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QLineEdit_SuperRedirected(const QLineEdit* self, QPoint* offset) {
    if (auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self))) {
        return vqlineedit->QLineEdit::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QLineEdit::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnRedirected(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self)))
        vqlineedit->qlineedit_redirected_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QLineEdit_SharedPainter(const QLineEdit* self) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit) {
        return vqlineedit->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QLineEdit::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QLineEdit_SuperSharedPainter(const QLineEdit* self) {
    if (auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self))) {
        return vqlineedit->QLineEdit::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QLineEdit::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnSharedPainter(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self)))
        vqlineedit->qlineedit_sharedpainter_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
bool QLineEdit_FocusNextPrevChild(QLineEdit* self, bool next) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        return vqlineedit->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QLineEdit::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QLineEdit_SuperFocusNextPrevChild(QLineEdit* self, bool next) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        return vqlineedit->QLineEdit::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QLineEdit::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnFocusNextPrevChild(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_focusnextprevchild_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QLineEdit_EventFilter(QLineEdit* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QLineEdit_SuperEventFilter(QLineEdit* self, QObject* watched, QEvent* event) {
    return self->QLineEdit::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnEventFilter(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_eventfilter_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QLineEdit_ChildEvent(QLineEdit* self, QChildEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLineEdit::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLineEdit_SuperChildEvent(QLineEdit* self, QChildEvent* event) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QLineEdit::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnChildEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_childevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QLineEdit_CustomEvent(QLineEdit* self, QEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLineEdit::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLineEdit_SuperCustomEvent(QLineEdit* self, QEvent* event) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QLineEdit::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnCustomEvent(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_customevent_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QLineEdit_ConnectNotify(QLineEdit* self, const QMetaMethod* signal) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QLineEdit::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QLineEdit_SuperConnectNotify(QLineEdit* self, const QMetaMethod* signal) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QLineEdit::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnConnectNotify(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_connectnotify_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QLineEdit_DisconnectNotify(QLineEdit* self, const QMetaMethod* signal) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit) {
        vqlineedit->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QLineEdit::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QLineEdit_SuperDisconnectNotify(QLineEdit* self, const QMetaMethod* signal) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->QLineEdit::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QLineEdit::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnDisconnectNotify(QLineEdit* self, intptr_t slot) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self))
        vqlineedit->qlineedit_disconnectnotify_callback = reinterpret_cast<VirtualQLineEdit::QLineEdit_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QRect* QLineEdit_CursorRect(const QLineEdit* self) {
    if (auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self)))
        return new QRect(vqlineedit->cursorRect());
    qFatal("Error: Protected method QLineEdit::cursorRect called without a directly constructed type");
}

// Derived class protected handler implementation
void QLineEdit_UpdateMicroFocus(QLineEdit* self) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->VirtualQLineEdit::updateMicroFocus();
    } else
        qFatal("Error: Protected method QLineEdit::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QLineEdit_Create(QLineEdit* self) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->VirtualQLineEdit::create();
    } else
        qFatal("Error: Protected method QLineEdit::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QLineEdit_Destroy(QLineEdit* self) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        vqlineedit->VirtualQLineEdit::destroy();
    } else
        qFatal("Error: Protected method QLineEdit::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QLineEdit_FocusNextChild(QLineEdit* self) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        return vqlineedit->VirtualQLineEdit::focusNextChild();
    } else
        qFatal("Error: Protected method QLineEdit::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QLineEdit_FocusPreviousChild(QLineEdit* self) {
    if (auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self)) {
        return vqlineedit->VirtualQLineEdit::focusPreviousChild();
    } else
        qFatal("Error: Protected method QLineEdit::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QLineEdit_Sender(const QLineEdit* self) {
    if (auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self))) {
        return vqlineedit->VirtualQLineEdit::sender();
    } else
        qFatal("Error: Protected method QLineEdit::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QLineEdit_SenderSignalIndex(const QLineEdit* self) {
    if (auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self))) {
        return vqlineedit->VirtualQLineEdit::senderSignalIndex();
    } else
        qFatal("Error: Protected method QLineEdit::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QLineEdit_Receivers(const QLineEdit* self, const char* signal) {
    if (auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self))) {
        return vqlineedit->VirtualQLineEdit::receivers(signal);
    } else
        qFatal("Error: Protected method QLineEdit::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QLineEdit_IsSignalConnected(const QLineEdit* self, const QMetaMethod* signal) {
    if (auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self))) {
        return vqlineedit->VirtualQLineEdit::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QLineEdit::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QLineEdit_GetDecodedMetricF(const QLineEdit* self, int metricA, int metricB) {
    if (auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self))) {
        return vqlineedit->VirtualQLineEdit::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QLineEdit::getDecodedMetricF called without a directly constructed type");
}

void QLineEdit_Delete(QLineEdit* self) {
    delete self;
}
