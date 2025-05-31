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
#include <QByteArray>
#include <cstring>
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
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQLineEdit*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QLineEdit_OnMetacall(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_Metacall_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QLineEdit_QBaseMetacall(QLineEdit* self, int param1, int param2, void** param3) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_Metacall_IsBase(true);
        return vqlineedit->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQLineEdit*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QLineEdit_Tr(const char* s) {
    QString _ret = QLineEdit::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QLineEdit_Text(const QLineEdit* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QLineEdit_DisplayText(const QLineEdit* self) {
    QString _ret = self->displayText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QLineEdit_PlaceholderText(const QLineEdit* self) {
    QString _ret = self->placeholderText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
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
    QString _ret = self->selectedText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
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
    QString _ret = self->inputMask();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
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

void QLineEdit_SetTextMarginsWithMargins(QLineEdit* self, const QMargins* margins) {
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
    void (*slotFunc)(QLineEdit*, libqt_string) = reinterpret_cast<void (*)(QLineEdit*, libqt_string)>(slot);
    QLineEdit::connect(self, &QLineEdit::textChanged, [self, slotFunc](const QString& param1) {
        const QString param1_ret = param1;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray param1_b = param1_ret.toUtf8();
        libqt_string param1_str;
        param1_str.len = param1_b.length();
        param1_str.data = static_cast<char*>(malloc((param1_str.len + 1) * sizeof(char)));
        memcpy(param1_str.data, param1_b.data(), param1_str.len);
        param1_str.data[param1_str.len] = '\0';
        libqt_string sigval1 = param1_str;
        slotFunc(self, sigval1);
    });
}

void QLineEdit_TextEdited(QLineEdit* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->textEdited(param1_QString);
}

void QLineEdit_Connect_TextEdited(QLineEdit* self, intptr_t slot) {
    void (*slotFunc)(QLineEdit*, libqt_string) = reinterpret_cast<void (*)(QLineEdit*, libqt_string)>(slot);
    QLineEdit::connect(self, &QLineEdit::textEdited, [self, slotFunc](const QString& param1) {
        const QString param1_ret = param1;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray param1_b = param1_ret.toUtf8();
        libqt_string param1_str;
        param1_str.len = param1_b.length();
        param1_str.data = static_cast<char*>(malloc((param1_str.len + 1) * sizeof(char)));
        memcpy(param1_str.data, param1_b.data(), param1_str.len);
        param1_str.data[param1_str.len] = '\0';
        libqt_string sigval1 = param1_str;
        slotFunc(self, sigval1);
    });
}

void QLineEdit_CursorPositionChanged(QLineEdit* self, int param1, int param2) {
    self->cursorPositionChanged(static_cast<int>(param1), static_cast<int>(param2));
}

void QLineEdit_Connect_CursorPositionChanged(QLineEdit* self, intptr_t slot) {
    void (*slotFunc)(QLineEdit*, int, int) = reinterpret_cast<void (*)(QLineEdit*, int, int)>(slot);
    QLineEdit::connect(self, &QLineEdit::cursorPositionChanged, [self, slotFunc](int param1, int param2) {
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
    QLineEdit::connect(self, &QLineEdit::returnPressed, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QLineEdit_EditingFinished(QLineEdit* self) {
    self->editingFinished();
}

void QLineEdit_Connect_EditingFinished(QLineEdit* self, intptr_t slot) {
    void (*slotFunc)(QLineEdit*) = reinterpret_cast<void (*)(QLineEdit*)>(slot);
    QLineEdit::connect(self, &QLineEdit::editingFinished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QLineEdit_SelectionChanged(QLineEdit* self) {
    self->selectionChanged();
}

void QLineEdit_Connect_SelectionChanged(QLineEdit* self, intptr_t slot) {
    void (*slotFunc)(QLineEdit*) = reinterpret_cast<void (*)(QLineEdit*)>(slot);
    QLineEdit::connect(self, &QLineEdit::selectionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QLineEdit_InputRejected(QLineEdit* self) {
    self->inputRejected();
}

void QLineEdit_Connect_InputRejected(QLineEdit* self, intptr_t slot) {
    void (*slotFunc)(QLineEdit*) = reinterpret_cast<void (*)(QLineEdit*)>(slot);
    QLineEdit::connect(self, &QLineEdit::inputRejected, [self, slotFunc]() {
        slotFunc(self);
    });
}

QVariant* QLineEdit_InputMethodQuery2(const QLineEdit* self, int property, QVariant* argument) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property), *argument));
}

libqt_string QLineEdit_Tr2(const char* s, const char* c) {
    QString _ret = QLineEdit::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QLineEdit_Tr3(const char* s, const char* c, int n) {
    QString _ret = QLineEdit::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QLineEdit_CursorForward2(QLineEdit* self, bool mark, int steps) {
    self->cursorForward(mark, static_cast<int>(steps));
}

void QLineEdit_CursorBackward2(QLineEdit* self, bool mark, int steps) {
    self->cursorBackward(mark, static_cast<int>(steps));
}

// Derived class handler implementation
QSize* QLineEdit_SizeHint(const QLineEdit* self) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        return new QSize(vqlineedit->sizeHint());
    } else {
        return new QSize(((VirtualQLineEdit*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QLineEdit_QBaseSizeHint(const QLineEdit* self) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_SizeHint_IsBase(true);
        return new QSize(vqlineedit->sizeHint());
    } else {
        return new QSize(((VirtualQLineEdit*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnSizeHint(const QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_SizeHint_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QLineEdit_MinimumSizeHint(const QLineEdit* self) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        return new QSize(vqlineedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualQLineEdit*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QLineEdit_QBaseMinimumSizeHint(const QLineEdit* self) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_MinimumSizeHint_IsBase(true);
        return new QSize(vqlineedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualQLineEdit*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnMinimumSizeHint(const QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_MinimumSizeHint_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_MousePressEvent(QLineEdit* self, QMouseEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->mousePressEvent(param1);
    } else {
        ((VirtualQLineEdit*)self)->mousePressEvent(param1);
    }
}

// Base class handler implementation
void QLineEdit_QBaseMousePressEvent(QLineEdit* self, QMouseEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_MousePressEvent_IsBase(true);
        vqlineedit->mousePressEvent(param1);
    } else {
        ((VirtualQLineEdit*)self)->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnMousePressEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_MousePressEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_MouseMoveEvent(QLineEdit* self, QMouseEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->mouseMoveEvent(param1);
    } else {
        ((VirtualQLineEdit*)self)->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void QLineEdit_QBaseMouseMoveEvent(QLineEdit* self, QMouseEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_MouseMoveEvent_IsBase(true);
        vqlineedit->mouseMoveEvent(param1);
    } else {
        ((VirtualQLineEdit*)self)->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnMouseMoveEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_MouseMoveEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_MouseReleaseEvent(QLineEdit* self, QMouseEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->mouseReleaseEvent(param1);
    } else {
        ((VirtualQLineEdit*)self)->mouseReleaseEvent(param1);
    }
}

// Base class handler implementation
void QLineEdit_QBaseMouseReleaseEvent(QLineEdit* self, QMouseEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_MouseReleaseEvent_IsBase(true);
        vqlineedit->mouseReleaseEvent(param1);
    } else {
        ((VirtualQLineEdit*)self)->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnMouseReleaseEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_MouseDoubleClickEvent(QLineEdit* self, QMouseEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->mouseDoubleClickEvent(param1);
    } else {
        ((VirtualQLineEdit*)self)->mouseDoubleClickEvent(param1);
    }
}

// Base class handler implementation
void QLineEdit_QBaseMouseDoubleClickEvent(QLineEdit* self, QMouseEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_MouseDoubleClickEvent_IsBase(true);
        vqlineedit->mouseDoubleClickEvent(param1);
    } else {
        ((VirtualQLineEdit*)self)->mouseDoubleClickEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnMouseDoubleClickEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_KeyPressEvent(QLineEdit* self, QKeyEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->keyPressEvent(param1);
    } else {
        ((VirtualQLineEdit*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QLineEdit_QBaseKeyPressEvent(QLineEdit* self, QKeyEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_KeyPressEvent_IsBase(true);
        vqlineedit->keyPressEvent(param1);
    } else {
        ((VirtualQLineEdit*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnKeyPressEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_KeyPressEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_KeyReleaseEvent(QLineEdit* self, QKeyEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->keyReleaseEvent(param1);
    } else {
        ((VirtualQLineEdit*)self)->keyReleaseEvent(param1);
    }
}

// Base class handler implementation
void QLineEdit_QBaseKeyReleaseEvent(QLineEdit* self, QKeyEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_KeyReleaseEvent_IsBase(true);
        vqlineedit->keyReleaseEvent(param1);
    } else {
        ((VirtualQLineEdit*)self)->keyReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnKeyReleaseEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_FocusInEvent(QLineEdit* self, QFocusEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->focusInEvent(param1);
    } else {
        ((VirtualQLineEdit*)self)->focusInEvent(param1);
    }
}

// Base class handler implementation
void QLineEdit_QBaseFocusInEvent(QLineEdit* self, QFocusEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_FocusInEvent_IsBase(true);
        vqlineedit->focusInEvent(param1);
    } else {
        ((VirtualQLineEdit*)self)->focusInEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnFocusInEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_FocusInEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_FocusOutEvent(QLineEdit* self, QFocusEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->focusOutEvent(param1);
    } else {
        ((VirtualQLineEdit*)self)->focusOutEvent(param1);
    }
}

// Base class handler implementation
void QLineEdit_QBaseFocusOutEvent(QLineEdit* self, QFocusEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_FocusOutEvent_IsBase(true);
        vqlineedit->focusOutEvent(param1);
    } else {
        ((VirtualQLineEdit*)self)->focusOutEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnFocusOutEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_FocusOutEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_PaintEvent(QLineEdit* self, QPaintEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->paintEvent(param1);
    } else {
        ((VirtualQLineEdit*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void QLineEdit_QBasePaintEvent(QLineEdit* self, QPaintEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_PaintEvent_IsBase(true);
        vqlineedit->paintEvent(param1);
    } else {
        ((VirtualQLineEdit*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnPaintEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_PaintEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_DragEnterEvent(QLineEdit* self, QDragEnterEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->dragEnterEvent(param1);
    } else {
        ((VirtualQLineEdit*)self)->dragEnterEvent(param1);
    }
}

// Base class handler implementation
void QLineEdit_QBaseDragEnterEvent(QLineEdit* self, QDragEnterEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_DragEnterEvent_IsBase(true);
        vqlineedit->dragEnterEvent(param1);
    } else {
        ((VirtualQLineEdit*)self)->dragEnterEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnDragEnterEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_DragEnterEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_DragMoveEvent(QLineEdit* self, QDragMoveEvent* e) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->dragMoveEvent(e);
    } else {
        ((VirtualQLineEdit*)self)->dragMoveEvent(e);
    }
}

// Base class handler implementation
void QLineEdit_QBaseDragMoveEvent(QLineEdit* self, QDragMoveEvent* e) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_DragMoveEvent_IsBase(true);
        vqlineedit->dragMoveEvent(e);
    } else {
        ((VirtualQLineEdit*)self)->dragMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnDragMoveEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_DragMoveEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_DragLeaveEvent(QLineEdit* self, QDragLeaveEvent* e) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->dragLeaveEvent(e);
    } else {
        ((VirtualQLineEdit*)self)->dragLeaveEvent(e);
    }
}

// Base class handler implementation
void QLineEdit_QBaseDragLeaveEvent(QLineEdit* self, QDragLeaveEvent* e) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_DragLeaveEvent_IsBase(true);
        vqlineedit->dragLeaveEvent(e);
    } else {
        ((VirtualQLineEdit*)self)->dragLeaveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnDragLeaveEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_DragLeaveEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_DropEvent(QLineEdit* self, QDropEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->dropEvent(param1);
    } else {
        ((VirtualQLineEdit*)self)->dropEvent(param1);
    }
}

// Base class handler implementation
void QLineEdit_QBaseDropEvent(QLineEdit* self, QDropEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_DropEvent_IsBase(true);
        vqlineedit->dropEvent(param1);
    } else {
        ((VirtualQLineEdit*)self)->dropEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnDropEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_DropEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_ChangeEvent(QLineEdit* self, QEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->changeEvent(param1);
    } else {
        ((VirtualQLineEdit*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QLineEdit_QBaseChangeEvent(QLineEdit* self, QEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_ChangeEvent_IsBase(true);
        vqlineedit->changeEvent(param1);
    } else {
        ((VirtualQLineEdit*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnChangeEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_ChangeEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_ContextMenuEvent(QLineEdit* self, QContextMenuEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->contextMenuEvent(param1);
    } else {
        ((VirtualQLineEdit*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QLineEdit_QBaseContextMenuEvent(QLineEdit* self, QContextMenuEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_ContextMenuEvent_IsBase(true);
        vqlineedit->contextMenuEvent(param1);
    } else {
        ((VirtualQLineEdit*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnContextMenuEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_ContextMenuEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_InputMethodEvent(QLineEdit* self, QInputMethodEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->inputMethodEvent(param1);
    } else {
        ((VirtualQLineEdit*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QLineEdit_QBaseInputMethodEvent(QLineEdit* self, QInputMethodEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_InputMethodEvent_IsBase(true);
        vqlineedit->inputMethodEvent(param1);
    } else {
        ((VirtualQLineEdit*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnInputMethodEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_InputMethodEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_InitStyleOption(const QLineEdit* self, QStyleOptionFrame* option) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->initStyleOption(option);
    } else {
        ((VirtualQLineEdit*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QLineEdit_QBaseInitStyleOption(const QLineEdit* self, QStyleOptionFrame* option) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_InitStyleOption_IsBase(true);
        vqlineedit->initStyleOption(option);
    } else {
        ((VirtualQLineEdit*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnInitStyleOption(const QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_InitStyleOption_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QLineEdit_InputMethodQuery(const QLineEdit* self, int param1) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        return new QVariant(vqlineedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQLineEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QLineEdit_QBaseInputMethodQuery(const QLineEdit* self, int param1) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_InputMethodQuery_IsBase(true);
        return new QVariant(vqlineedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQLineEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnInputMethodQuery(const QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_InputMethodQuery_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_TimerEvent(QLineEdit* self, QTimerEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->timerEvent(param1);
    } else {
        self->QLineEdit::timerEvent(param1);
    }
}

// Base class handler implementation
void QLineEdit_QBaseTimerEvent(QLineEdit* self, QTimerEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_TimerEvent_IsBase(true);
        vqlineedit->timerEvent(param1);
    } else {
        self->QLineEdit::timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnTimerEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_TimerEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLineEdit_Event(QLineEdit* self, QEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        return vqlineedit->event(param1);
    } else {
        return self->QLineEdit::event(param1);
    }
}

// Base class handler implementation
bool QLineEdit_QBaseEvent(QLineEdit* self, QEvent* param1) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_Event_IsBase(true);
        return vqlineedit->event(param1);
    } else {
        return self->QLineEdit::event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_Event_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_Event_Callback>(slot));
    }
}

// Derived class handler implementation
int QLineEdit_DevType(const QLineEdit* self) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        return vqlineedit->devType();
    } else {
        return self->QLineEdit::devType();
    }
}

// Base class handler implementation
int QLineEdit_QBaseDevType(const QLineEdit* self) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_DevType_IsBase(true);
        return vqlineedit->devType();
    } else {
        return self->QLineEdit::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnDevType(const QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_DevType_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_SetVisible(QLineEdit* self, bool visible) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setVisible(visible);
    } else {
        self->QLineEdit::setVisible(visible);
    }
}

// Base class handler implementation
void QLineEdit_QBaseSetVisible(QLineEdit* self, bool visible) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_SetVisible_IsBase(true);
        vqlineedit->setVisible(visible);
    } else {
        self->QLineEdit::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnSetVisible(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_SetVisible_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QLineEdit_HeightForWidth(const QLineEdit* self, int param1) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        return vqlineedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QLineEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QLineEdit_QBaseHeightForWidth(const QLineEdit* self, int param1) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_HeightForWidth_IsBase(true);
        return vqlineedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QLineEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnHeightForWidth(const QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_HeightForWidth_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLineEdit_HasHeightForWidth(const QLineEdit* self) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        return vqlineedit->hasHeightForWidth();
    } else {
        return self->QLineEdit::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QLineEdit_QBaseHasHeightForWidth(const QLineEdit* self) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_HasHeightForWidth_IsBase(true);
        return vqlineedit->hasHeightForWidth();
    } else {
        return self->QLineEdit::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnHasHeightForWidth(const QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_HasHeightForWidth_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QLineEdit_PaintEngine(const QLineEdit* self) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        return vqlineedit->paintEngine();
    } else {
        return self->QLineEdit::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QLineEdit_QBasePaintEngine(const QLineEdit* self) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_PaintEngine_IsBase(true);
        return vqlineedit->paintEngine();
    } else {
        return self->QLineEdit::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnPaintEngine(const QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_PaintEngine_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_WheelEvent(QLineEdit* self, QWheelEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->wheelEvent(event);
    } else {
        ((VirtualQLineEdit*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QLineEdit_QBaseWheelEvent(QLineEdit* self, QWheelEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_WheelEvent_IsBase(true);
        vqlineedit->wheelEvent(event);
    } else {
        ((VirtualQLineEdit*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnWheelEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_WheelEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_EnterEvent(QLineEdit* self, QEnterEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->enterEvent(event);
    } else {
        ((VirtualQLineEdit*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QLineEdit_QBaseEnterEvent(QLineEdit* self, QEnterEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_EnterEvent_IsBase(true);
        vqlineedit->enterEvent(event);
    } else {
        ((VirtualQLineEdit*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnEnterEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_EnterEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_LeaveEvent(QLineEdit* self, QEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->leaveEvent(event);
    } else {
        ((VirtualQLineEdit*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QLineEdit_QBaseLeaveEvent(QLineEdit* self, QEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_LeaveEvent_IsBase(true);
        vqlineedit->leaveEvent(event);
    } else {
        ((VirtualQLineEdit*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnLeaveEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_LeaveEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_MoveEvent(QLineEdit* self, QMoveEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->moveEvent(event);
    } else {
        ((VirtualQLineEdit*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QLineEdit_QBaseMoveEvent(QLineEdit* self, QMoveEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_MoveEvent_IsBase(true);
        vqlineedit->moveEvent(event);
    } else {
        ((VirtualQLineEdit*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnMoveEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_MoveEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_ResizeEvent(QLineEdit* self, QResizeEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->resizeEvent(event);
    } else {
        ((VirtualQLineEdit*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QLineEdit_QBaseResizeEvent(QLineEdit* self, QResizeEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_ResizeEvent_IsBase(true);
        vqlineedit->resizeEvent(event);
    } else {
        ((VirtualQLineEdit*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnResizeEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_ResizeEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_CloseEvent(QLineEdit* self, QCloseEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->closeEvent(event);
    } else {
        ((VirtualQLineEdit*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QLineEdit_QBaseCloseEvent(QLineEdit* self, QCloseEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_CloseEvent_IsBase(true);
        vqlineedit->closeEvent(event);
    } else {
        ((VirtualQLineEdit*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnCloseEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_CloseEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_TabletEvent(QLineEdit* self, QTabletEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->tabletEvent(event);
    } else {
        ((VirtualQLineEdit*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QLineEdit_QBaseTabletEvent(QLineEdit* self, QTabletEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_TabletEvent_IsBase(true);
        vqlineedit->tabletEvent(event);
    } else {
        ((VirtualQLineEdit*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnTabletEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_TabletEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_ActionEvent(QLineEdit* self, QActionEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->actionEvent(event);
    } else {
        ((VirtualQLineEdit*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QLineEdit_QBaseActionEvent(QLineEdit* self, QActionEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_ActionEvent_IsBase(true);
        vqlineedit->actionEvent(event);
    } else {
        ((VirtualQLineEdit*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnActionEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_ActionEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_ShowEvent(QLineEdit* self, QShowEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->showEvent(event);
    } else {
        ((VirtualQLineEdit*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QLineEdit_QBaseShowEvent(QLineEdit* self, QShowEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_ShowEvent_IsBase(true);
        vqlineedit->showEvent(event);
    } else {
        ((VirtualQLineEdit*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnShowEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_ShowEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_HideEvent(QLineEdit* self, QHideEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->hideEvent(event);
    } else {
        ((VirtualQLineEdit*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QLineEdit_QBaseHideEvent(QLineEdit* self, QHideEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_HideEvent_IsBase(true);
        vqlineedit->hideEvent(event);
    } else {
        ((VirtualQLineEdit*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnHideEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_HideEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLineEdit_NativeEvent(QLineEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        return vqlineedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQLineEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QLineEdit_QBaseNativeEvent(QLineEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_NativeEvent_IsBase(true);
        return vqlineedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQLineEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnNativeEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_NativeEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QLineEdit_Metric(const QLineEdit* self, int param1) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        return vqlineedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQLineEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QLineEdit_QBaseMetric(const QLineEdit* self, int param1) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_Metric_IsBase(true);
        return vqlineedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQLineEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnMetric(const QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_Metric_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_InitPainter(const QLineEdit* self, QPainter* painter) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->initPainter(painter);
    } else {
        ((VirtualQLineEdit*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QLineEdit_QBaseInitPainter(const QLineEdit* self, QPainter* painter) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_InitPainter_IsBase(true);
        vqlineedit->initPainter(painter);
    } else {
        ((VirtualQLineEdit*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnInitPainter(const QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_InitPainter_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QLineEdit_Redirected(const QLineEdit* self, QPoint* offset) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        return vqlineedit->redirected(offset);
    } else {
        return ((VirtualQLineEdit*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QLineEdit_QBaseRedirected(const QLineEdit* self, QPoint* offset) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_Redirected_IsBase(true);
        return vqlineedit->redirected(offset);
    } else {
        return ((VirtualQLineEdit*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnRedirected(const QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_Redirected_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QLineEdit_SharedPainter(const QLineEdit* self) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        return vqlineedit->sharedPainter();
    } else {
        return ((VirtualQLineEdit*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QLineEdit_QBaseSharedPainter(const QLineEdit* self) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_SharedPainter_IsBase(true);
        return vqlineedit->sharedPainter();
    } else {
        return ((VirtualQLineEdit*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnSharedPainter(const QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_SharedPainter_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLineEdit_FocusNextPrevChild(QLineEdit* self, bool next) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        return vqlineedit->focusNextPrevChild(next);
    } else {
        return ((VirtualQLineEdit*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QLineEdit_QBaseFocusNextPrevChild(QLineEdit* self, bool next) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_FocusNextPrevChild_IsBase(true);
        return vqlineedit->focusNextPrevChild(next);
    } else {
        return ((VirtualQLineEdit*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnFocusNextPrevChild(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLineEdit_EventFilter(QLineEdit* self, QObject* watched, QEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        return vqlineedit->eventFilter(watched, event);
    } else {
        return self->QLineEdit::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QLineEdit_QBaseEventFilter(QLineEdit* self, QObject* watched, QEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_EventFilter_IsBase(true);
        return vqlineedit->eventFilter(watched, event);
    } else {
        return self->QLineEdit::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnEventFilter(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_EventFilter_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_ChildEvent(QLineEdit* self, QChildEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->childEvent(event);
    } else {
        ((VirtualQLineEdit*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QLineEdit_QBaseChildEvent(QLineEdit* self, QChildEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_ChildEvent_IsBase(true);
        vqlineedit->childEvent(event);
    } else {
        ((VirtualQLineEdit*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnChildEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_ChildEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_CustomEvent(QLineEdit* self, QEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->customEvent(event);
    } else {
        ((VirtualQLineEdit*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QLineEdit_QBaseCustomEvent(QLineEdit* self, QEvent* event) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_CustomEvent_IsBase(true);
        vqlineedit->customEvent(event);
    } else {
        ((VirtualQLineEdit*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnCustomEvent(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_CustomEvent_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_ConnectNotify(QLineEdit* self, const QMetaMethod* signal) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->connectNotify(*signal);
    } else {
        ((VirtualQLineEdit*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QLineEdit_QBaseConnectNotify(QLineEdit* self, const QMetaMethod* signal) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_ConnectNotify_IsBase(true);
        vqlineedit->connectNotify(*signal);
    } else {
        ((VirtualQLineEdit*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnConnectNotify(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_ConnectNotify_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_DisconnectNotify(QLineEdit* self, const QMetaMethod* signal) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->disconnectNotify(*signal);
    } else {
        ((VirtualQLineEdit*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QLineEdit_QBaseDisconnectNotify(QLineEdit* self, const QMetaMethod* signal) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_DisconnectNotify_IsBase(true);
        vqlineedit->disconnectNotify(*signal);
    } else {
        ((VirtualQLineEdit*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnDisconnectNotify(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_DisconnectNotify_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QLineEdit_CursorRect(const QLineEdit* self) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        return new QRect(vqlineedit->cursorRect());
    }
    return {};
}

// Base class handler implementation
QRect* QLineEdit_QBaseCursorRect(const QLineEdit* self) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_CursorRect_IsBase(true);
        return new QRect(vqlineedit->cursorRect());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnCursorRect(const QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_CursorRect_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_CursorRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_UpdateMicroFocus(QLineEdit* self) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->updateMicroFocus();
    } else {
        ((VirtualQLineEdit*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QLineEdit_QBaseUpdateMicroFocus(QLineEdit* self) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_UpdateMicroFocus_IsBase(true);
        vqlineedit->updateMicroFocus();
    } else {
        ((VirtualQLineEdit*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnUpdateMicroFocus(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_Create(QLineEdit* self) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->create();
    } else {
        ((VirtualQLineEdit*)self)->create();
    }
}

// Base class handler implementation
void QLineEdit_QBaseCreate(QLineEdit* self) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_Create_IsBase(true);
        vqlineedit->create();
    } else {
        ((VirtualQLineEdit*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnCreate(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_Create_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QLineEdit_Destroy(QLineEdit* self) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->destroy();
    } else {
        ((VirtualQLineEdit*)self)->destroy();
    }
}

// Base class handler implementation
void QLineEdit_QBaseDestroy(QLineEdit* self) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_Destroy_IsBase(true);
        vqlineedit->destroy();
    } else {
        ((VirtualQLineEdit*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnDestroy(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_Destroy_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLineEdit_FocusNextChild(QLineEdit* self) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        return vqlineedit->focusNextChild();
    } else {
        return ((VirtualQLineEdit*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QLineEdit_QBaseFocusNextChild(QLineEdit* self) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_FocusNextChild_IsBase(true);
        return vqlineedit->focusNextChild();
    } else {
        return ((VirtualQLineEdit*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnFocusNextChild(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_FocusNextChild_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLineEdit_FocusPreviousChild(QLineEdit* self) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        return vqlineedit->focusPreviousChild();
    } else {
        return ((VirtualQLineEdit*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QLineEdit_QBaseFocusPreviousChild(QLineEdit* self) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_FocusPreviousChild_IsBase(true);
        return vqlineedit->focusPreviousChild();
    } else {
        return ((VirtualQLineEdit*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnFocusPreviousChild(QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = dynamic_cast<VirtualQLineEdit*>(self);
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_FocusPreviousChild_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QLineEdit_Sender(const QLineEdit* self) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        return vqlineedit->sender();
    } else {
        return ((VirtualQLineEdit*)self)->sender();
    }
}

// Base class handler implementation
QObject* QLineEdit_QBaseSender(const QLineEdit* self) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_Sender_IsBase(true);
        return vqlineedit->sender();
    } else {
        return ((VirtualQLineEdit*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnSender(const QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_Sender_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QLineEdit_SenderSignalIndex(const QLineEdit* self) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        return vqlineedit->senderSignalIndex();
    } else {
        return ((VirtualQLineEdit*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QLineEdit_QBaseSenderSignalIndex(const QLineEdit* self) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_SenderSignalIndex_IsBase(true);
        return vqlineedit->senderSignalIndex();
    } else {
        return ((VirtualQLineEdit*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnSenderSignalIndex(const QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_SenderSignalIndex_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QLineEdit_Receivers(const QLineEdit* self, const char* signal) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        return vqlineedit->receivers(signal);
    } else {
        return ((VirtualQLineEdit*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QLineEdit_QBaseReceivers(const QLineEdit* self, const char* signal) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_Receivers_IsBase(true);
        return vqlineedit->receivers(signal);
    } else {
        return ((VirtualQLineEdit*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnReceivers(const QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_Receivers_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLineEdit_IsSignalConnected(const QLineEdit* self, const QMetaMethod* signal) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        return vqlineedit->isSignalConnected(*signal);
    } else {
        return ((VirtualQLineEdit*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QLineEdit_QBaseIsSignalConnected(const QLineEdit* self, const QMetaMethod* signal) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_IsSignalConnected_IsBase(true);
        return vqlineedit->isSignalConnected(*signal);
    } else {
        return ((VirtualQLineEdit*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLineEdit_OnIsSignalConnected(const QLineEdit* self, intptr_t slot) {
    auto* vqlineedit = const_cast<VirtualQLineEdit*>(dynamic_cast<const VirtualQLineEdit*>(self));
    if (vqlineedit && vqlineedit->isVirtualQLineEdit) {
        vqlineedit->setQLineEdit_IsSignalConnected_Callback(reinterpret_cast<VirtualQLineEdit::QLineEdit_IsSignalConnected_Callback>(slot));
    }
}

void QLineEdit_Delete(QLineEdit* self) {
    delete self;
}
