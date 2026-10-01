#include <QAbstractScrollArea>
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
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTextCursor>
#include <QTextEdit>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QVector>
#include <QWheelEvent>
#include <QWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__GrammarAction
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__GrammarError
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__GrammarResultTextEdit
#include <grammarresulttextedit.h>
#include "libgrammarresulttextedit.h"
#include "libgrammarresulttextedit.hxx"

TextGrammarCheck__GrammarResultTextEdit* TextGrammarCheck__GrammarResultTextEdit_new(QWidget* parent) {
    return new VirtualTextGrammarCheckGrammarResultTextEdit(parent);
}

TextGrammarCheck__GrammarResultTextEdit* TextGrammarCheck__GrammarResultTextEdit_new2() {
    return new VirtualTextGrammarCheckGrammarResultTextEdit();
}

QMetaObject* TextGrammarCheck__GrammarResultTextEdit_MetaObject(const TextGrammarCheck__GrammarResultTextEdit* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextGrammarCheck__GrammarResultTextEdit_Metacast(TextGrammarCheck__GrammarResultTextEdit* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextGrammarCheck__GrammarResultTextEdit_Metacall(TextGrammarCheck__GrammarResultTextEdit* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextGrammarCheck__GrammarResultTextEdit_Tr(const char* s) {
    auto _ret = TextGrammarCheck::GrammarResultTextEdit::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextGrammarCheck__GrammarResultTextEdit_ApplyGrammarResult(TextGrammarCheck__GrammarResultTextEdit* self, const libqt_list /* of TextGrammarCheck__GrammarError* */ infos) {
    QVector<TextGrammarCheck::GrammarError> infos_QVector;
    infos_QVector.reserve(infos.len);
    TextGrammarCheck__GrammarError** infos_arr = static_cast<TextGrammarCheck__GrammarError**>(infos.data);
    for (size_t i = 0; i < infos.len; ++i) {
        infos_QVector.push_back(*(infos_arr[i]));
    }
    self->applyGrammarResult(infos_QVector);
}

void TextGrammarCheck__GrammarResultTextEdit_ContextMenuEvent(TextGrammarCheck__GrammarResultTextEdit* self, QContextMenuEvent* event) {
    auto* vtextgrammarcheck__grammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheck__grammarresulttextedit) {
        vtextgrammarcheck__grammarresulttextedit->contextMenuEvent(event);
    }
}

void TextGrammarCheck__GrammarResultTextEdit_PaintEvent(TextGrammarCheck__GrammarResultTextEdit* self, QPaintEvent* event) {
    auto* vtextgrammarcheck__grammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheck__grammarresulttextedit) {
        vtextgrammarcheck__grammarresulttextedit->paintEvent(event);
    }
}

bool TextGrammarCheck__GrammarResultTextEdit_Event(TextGrammarCheck__GrammarResultTextEdit* self, QEvent* ev) {
    auto* vtextgrammarcheck__grammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheck__grammarresulttextedit) {
        return vtextgrammarcheck__grammarresulttextedit->event(ev);
    }
    qFatal("Error: Protected method TextGrammarCheck::GrammarResultTextEdit::event called without a directly constructed type");
}

void TextGrammarCheck__GrammarResultTextEdit_ReplaceText(TextGrammarCheck__GrammarResultTextEdit* self, const TextGrammarCheck__GrammarAction* act) {
    self->replaceText(*act);
}

void TextGrammarCheck__GrammarResultTextEdit_Connect_ReplaceText(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    void (*slotFunc)(TextGrammarCheck__GrammarResultTextEdit*, TextGrammarCheck__GrammarAction*) = reinterpret_cast<void (*)(TextGrammarCheck__GrammarResultTextEdit*, TextGrammarCheck__GrammarAction*)>(slot);
    TextGrammarCheck::GrammarResultTextEdit::connect(self,
                                                     static_cast<void (TextGrammarCheck::GrammarResultTextEdit::*)(const TextGrammarCheck::GrammarAction&)>(&TextGrammarCheck::GrammarResultTextEdit::replaceText),
                                                     [self, slotFunc](const TextGrammarCheck::GrammarAction& act) {
                                                         const TextGrammarCheck::GrammarAction& act_ret = act;
                                                         // Cast returned reference into pointer
                                                         TextGrammarCheck__GrammarAction* sigval1 = const_cast<TextGrammarCheck::GrammarAction*>(&act_ret);
                                                         slotFunc(self, sigval1);
                                                     });
}

void TextGrammarCheck__GrammarResultTextEdit_CheckAgain(TextGrammarCheck__GrammarResultTextEdit* self) {
    self->checkAgain();
}

void TextGrammarCheck__GrammarResultTextEdit_Connect_CheckAgain(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    void (*slotFunc)(TextGrammarCheck__GrammarResultTextEdit*) = reinterpret_cast<void (*)(TextGrammarCheck__GrammarResultTextEdit*)>(slot);
    TextGrammarCheck::GrammarResultTextEdit::connect(self,
                                                     static_cast<void (TextGrammarCheck::GrammarResultTextEdit::*)()>(&TextGrammarCheck::GrammarResultTextEdit::checkAgain),
                                                     [self, slotFunc]() {
                                                         slotFunc(self);
                                                     });
}

void TextGrammarCheck__GrammarResultTextEdit_CloseChecker(TextGrammarCheck__GrammarResultTextEdit* self) {
    self->closeChecker();
}

void TextGrammarCheck__GrammarResultTextEdit_Connect_CloseChecker(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    void (*slotFunc)(TextGrammarCheck__GrammarResultTextEdit*) = reinterpret_cast<void (*)(TextGrammarCheck__GrammarResultTextEdit*)>(slot);
    TextGrammarCheck::GrammarResultTextEdit::connect(self,
                                                     static_cast<void (TextGrammarCheck::GrammarResultTextEdit::*)()>(&TextGrammarCheck::GrammarResultTextEdit::closeChecker),
                                                     [self, slotFunc]() {
                                                         slotFunc(self);
                                                     });
}

void TextGrammarCheck__GrammarResultTextEdit_Configure(TextGrammarCheck__GrammarResultTextEdit* self) {
    self->configure();
}

void TextGrammarCheck__GrammarResultTextEdit_Connect_Configure(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    void (*slotFunc)(TextGrammarCheck__GrammarResultTextEdit*) = reinterpret_cast<void (*)(TextGrammarCheck__GrammarResultTextEdit*)>(slot);
    TextGrammarCheck::GrammarResultTextEdit::connect(self,
                                                     static_cast<void (TextGrammarCheck::GrammarResultTextEdit::*)()>(&TextGrammarCheck::GrammarResultTextEdit::configure),
                                                     [self, slotFunc]() {
                                                         slotFunc(self);
                                                     });
}

libqt_string TextGrammarCheck__GrammarResultTextEdit_Tr2(const char* s, const char* c) {
    auto _ret = TextGrammarCheck::GrammarResultTextEdit::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextGrammarCheck__GrammarResultTextEdit_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextGrammarCheck::GrammarResultTextEdit::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextGrammarCheck__GrammarResultTextEdit_SuperMetaObject(const TextGrammarCheck__GrammarResultTextEdit* self) {
    return (QMetaObject*)self->TextGrammarCheck::GrammarResultTextEdit::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnMetaObject(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self)))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_metaobject_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextGrammarCheck__GrammarResultTextEdit_SuperMetacast(TextGrammarCheck__GrammarResultTextEdit* self, const char* param1) {
    return self->TextGrammarCheck::GrammarResultTextEdit::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnMetacast(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_metacast_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextGrammarCheck__GrammarResultTextEdit_SuperMetacall(TextGrammarCheck__GrammarResultTextEdit* self, int param1, int param2, void** param3) {
    return self->TextGrammarCheck::GrammarResultTextEdit::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnMetacall(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_metacall_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_Metacall_Callback>(slot);
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperContextMenuEvent(TextGrammarCheck__GrammarResultTextEdit* self, QContextMenuEvent* event) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnContextMenuEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_contextmenuevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_ContextMenuEvent_Callback>(slot);
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperPaintEvent(TextGrammarCheck__GrammarResultTextEdit* self, QPaintEvent* event) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnPaintEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_paintevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_PaintEvent_Callback>(slot);
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_SuperEvent(TextGrammarCheck__GrammarResultTextEdit* self, QEvent* ev) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        return vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::event(ev);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_event_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_Event_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextGrammarCheck__GrammarResultTextEdit_LoadResource(TextGrammarCheck__GrammarResultTextEdit* self, int typeVal, const QUrl* name) {
    return new QVariant(self->loadResource(static_cast<int>(typeVal), *name));
}

// Base class handler implementation
QVariant* TextGrammarCheck__GrammarResultTextEdit_SuperLoadResource(TextGrammarCheck__GrammarResultTextEdit* self, int typeVal, const QUrl* name) {
    return new QVariant(self->TextGrammarCheck::GrammarResultTextEdit::loadResource(static_cast<int>(typeVal), *name));
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnLoadResource(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_loadresource_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_LoadResource_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextGrammarCheck__GrammarResultTextEdit_InputMethodQuery(const TextGrammarCheck__GrammarResultTextEdit* self, int property) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

// Base class handler implementation
QVariant* TextGrammarCheck__GrammarResultTextEdit_SuperInputMethodQuery(const TextGrammarCheck__GrammarResultTextEdit* self, int property) {
    return new QVariant(self->TextGrammarCheck::GrammarResultTextEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnInputMethodQuery(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self)))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_inputmethodquery_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_TimerEvent(TextGrammarCheck__GrammarResultTextEdit* self, QTimerEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->timerEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperTimerEvent(TextGrammarCheck__GrammarResultTextEdit* self, QTimerEvent* e) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::timerEvent(e);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnTimerEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_timerevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_KeyPressEvent(TextGrammarCheck__GrammarResultTextEdit* self, QKeyEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->keyPressEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperKeyPressEvent(TextGrammarCheck__GrammarResultTextEdit* self, QKeyEvent* e) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::keyPressEvent(e);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnKeyPressEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_keypressevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_KeyReleaseEvent(TextGrammarCheck__GrammarResultTextEdit* self, QKeyEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperKeyReleaseEvent(TextGrammarCheck__GrammarResultTextEdit* self, QKeyEvent* e) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnKeyReleaseEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_keyreleaseevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_ResizeEvent(TextGrammarCheck__GrammarResultTextEdit* self, QResizeEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->resizeEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperResizeEvent(TextGrammarCheck__GrammarResultTextEdit* self, QResizeEvent* e) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnResizeEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_resizeevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_MousePressEvent(TextGrammarCheck__GrammarResultTextEdit* self, QMouseEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->mousePressEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperMousePressEvent(TextGrammarCheck__GrammarResultTextEdit* self, QMouseEvent* e) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnMousePressEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_mousepressevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_MouseMoveEvent(TextGrammarCheck__GrammarResultTextEdit* self, QMouseEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->mouseMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperMouseMoveEvent(TextGrammarCheck__GrammarResultTextEdit* self, QMouseEvent* e) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::mouseMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnMouseMoveEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_mousemoveevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_MouseReleaseEvent(TextGrammarCheck__GrammarResultTextEdit* self, QMouseEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperMouseReleaseEvent(TextGrammarCheck__GrammarResultTextEdit* self, QMouseEvent* e) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnMouseReleaseEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_mousereleaseevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_MouseDoubleClickEvent(TextGrammarCheck__GrammarResultTextEdit* self, QMouseEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->mouseDoubleClickEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperMouseDoubleClickEvent(TextGrammarCheck__GrammarResultTextEdit* self, QMouseEvent* e) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::mouseDoubleClickEvent(e);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnMouseDoubleClickEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_FocusNextPrevChild(TextGrammarCheck__GrammarResultTextEdit* self, bool next) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        return vtextgrammarcheckgrammarresulttextedit->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_SuperFocusNextPrevChild(TextGrammarCheck__GrammarResultTextEdit* self, bool next) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        return vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnFocusNextPrevChild(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_focusnextprevchild_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_DragEnterEvent(TextGrammarCheck__GrammarResultTextEdit* self, QDragEnterEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->dragEnterEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperDragEnterEvent(TextGrammarCheck__GrammarResultTextEdit* self, QDragEnterEvent* e) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::dragEnterEvent(e);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnDragEnterEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_dragenterevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_DragLeaveEvent(TextGrammarCheck__GrammarResultTextEdit* self, QDragLeaveEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->dragLeaveEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperDragLeaveEvent(TextGrammarCheck__GrammarResultTextEdit* self, QDragLeaveEvent* e) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::dragLeaveEvent(e);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnDragLeaveEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_dragleaveevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_DragMoveEvent(TextGrammarCheck__GrammarResultTextEdit* self, QDragMoveEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->dragMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperDragMoveEvent(TextGrammarCheck__GrammarResultTextEdit* self, QDragMoveEvent* e) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::dragMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnDragMoveEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_dragmoveevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_DropEvent(TextGrammarCheck__GrammarResultTextEdit* self, QDropEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->dropEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperDropEvent(TextGrammarCheck__GrammarResultTextEdit* self, QDropEvent* e) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::dropEvent(e);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnDropEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_dropevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_FocusInEvent(TextGrammarCheck__GrammarResultTextEdit* self, QFocusEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->focusInEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperFocusInEvent(TextGrammarCheck__GrammarResultTextEdit* self, QFocusEvent* e) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::focusInEvent(e);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnFocusInEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_focusinevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_FocusOutEvent(TextGrammarCheck__GrammarResultTextEdit* self, QFocusEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->focusOutEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperFocusOutEvent(TextGrammarCheck__GrammarResultTextEdit* self, QFocusEvent* e) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::focusOutEvent(e);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnFocusOutEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_focusoutevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_ShowEvent(TextGrammarCheck__GrammarResultTextEdit* self, QShowEvent* param1) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperShowEvent(TextGrammarCheck__GrammarResultTextEdit* self, QShowEvent* param1) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnShowEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_showevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_ChangeEvent(TextGrammarCheck__GrammarResultTextEdit* self, QEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperChangeEvent(TextGrammarCheck__GrammarResultTextEdit* self, QEvent* e) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnChangeEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_changeevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_WheelEvent(TextGrammarCheck__GrammarResultTextEdit* self, QWheelEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->wheelEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperWheelEvent(TextGrammarCheck__GrammarResultTextEdit* self, QWheelEvent* e) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnWheelEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_wheelevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
QMimeData* TextGrammarCheck__GrammarResultTextEdit_CreateMimeDataFromSelection(const TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit) {
        return vtextgrammarcheckgrammarresulttextedit->createMimeDataFromSelection();
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::createMimeDataFromSelection called without a directly constructed type");
    }
}

// Base class handler implementation
QMimeData* TextGrammarCheck__GrammarResultTextEdit_SuperCreateMimeDataFromSelection(const TextGrammarCheck__GrammarResultTextEdit* self) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self))) {
        return vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::createMimeDataFromSelection();
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::createMimeDataFromSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnCreateMimeDataFromSelection(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self)))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_createmimedatafromselection_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_CreateMimeDataFromSelection_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_CanInsertFromMimeData(const TextGrammarCheck__GrammarResultTextEdit* self, const QMimeData* source) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit) {
        return vtextgrammarcheckgrammarresulttextedit->canInsertFromMimeData(source);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::canInsertFromMimeData called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_SuperCanInsertFromMimeData(const TextGrammarCheck__GrammarResultTextEdit* self, const QMimeData* source) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self))) {
        return vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::canInsertFromMimeData(source);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::canInsertFromMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnCanInsertFromMimeData(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self)))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_caninsertfrommimedata_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_CanInsertFromMimeData_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_InsertFromMimeData(TextGrammarCheck__GrammarResultTextEdit* self, const QMimeData* source) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->insertFromMimeData(source);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::insertFromMimeData called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperInsertFromMimeData(TextGrammarCheck__GrammarResultTextEdit* self, const QMimeData* source) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::insertFromMimeData(source);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::insertFromMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnInsertFromMimeData(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_insertfrommimedata_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_InsertFromMimeData_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_InputMethodEvent(TextGrammarCheck__GrammarResultTextEdit* self, QInputMethodEvent* param1) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperInputMethodEvent(TextGrammarCheck__GrammarResultTextEdit* self, QInputMethodEvent* param1) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnInputMethodEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_inputmethodevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_ScrollContentsBy(TextGrammarCheck__GrammarResultTextEdit* self, int dx, int dy) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::scrollContentsBy called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperScrollContentsBy(TextGrammarCheck__GrammarResultTextEdit* self, int dx, int dy) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnScrollContentsBy(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_scrollcontentsby_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_ScrollContentsBy_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_DoSetTextCursor(TextGrammarCheck__GrammarResultTextEdit* self, const QTextCursor* cursor) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->doSetTextCursor(*cursor);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::doSetTextCursor called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperDoSetTextCursor(TextGrammarCheck__GrammarResultTextEdit* self, const QTextCursor* cursor) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::doSetTextCursor(*cursor);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::doSetTextCursor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnDoSetTextCursor(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_dosettextcursor_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_DoSetTextCursor_Callback>(slot);
}

// Derived class handler implementation
QSize* TextGrammarCheck__GrammarResultTextEdit_MinimumSizeHint(const TextGrammarCheck__GrammarResultTextEdit* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextGrammarCheck__GrammarResultTextEdit_SuperMinimumSizeHint(const TextGrammarCheck__GrammarResultTextEdit* self) {
    return new QSize(self->TextGrammarCheck::GrammarResultTextEdit::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnMinimumSizeHint(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self)))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_minimumsizehint_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextGrammarCheck__GrammarResultTextEdit_SizeHint(const TextGrammarCheck__GrammarResultTextEdit* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextGrammarCheck__GrammarResultTextEdit_SuperSizeHint(const TextGrammarCheck__GrammarResultTextEdit* self) {
    return new QSize(self->TextGrammarCheck::GrammarResultTextEdit::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnSizeHint(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self)))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_sizehint_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SetupViewport(TextGrammarCheck__GrammarResultTextEdit* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperSetupViewport(TextGrammarCheck__GrammarResultTextEdit* self, QWidget* viewport) {
    self->TextGrammarCheck::GrammarResultTextEdit::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnSetupViewport(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_setupviewport_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_EventFilter(TextGrammarCheck__GrammarResultTextEdit* self, QObject* param1, QEvent* param2) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        return vtextgrammarcheckgrammarresulttextedit->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_SuperEventFilter(TextGrammarCheck__GrammarResultTextEdit* self, QObject* param1, QEvent* param2) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        return vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnEventFilter(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_eventfilter_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_EventFilter_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_ViewportEvent(TextGrammarCheck__GrammarResultTextEdit* self, QEvent* param1) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        return vtextgrammarcheckgrammarresulttextedit->viewportEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::viewportEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_SuperViewportEvent(TextGrammarCheck__GrammarResultTextEdit* self, QEvent* param1) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        return vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::viewportEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnViewportEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_viewportevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_ViewportEvent_Callback>(slot);
}

// Derived class handler implementation
QSize* TextGrammarCheck__GrammarResultTextEdit_ViewportSizeHint(const TextGrammarCheck__GrammarResultTextEdit* self) {
    return new QSize((self->*&VirtualTextGrammarCheckGrammarResultTextEdit::Base::viewportSizeHint)());
}

// Base class handler implementation
QSize* TextGrammarCheck__GrammarResultTextEdit_SuperViewportSizeHint(const TextGrammarCheck__GrammarResultTextEdit* self) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self)))
        return new QSize(vtextgrammarcheckgrammarresulttextedit->viewportSizeHint());
    qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnViewportSizeHint(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self)))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_viewportsizehint_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_InitStyleOption(const TextGrammarCheck__GrammarResultTextEdit* self, QStyleOptionFrame* option) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperInitStyleOption(const TextGrammarCheck__GrammarResultTextEdit* self, QStyleOptionFrame* option) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self))) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnInitStyleOption(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self)))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_initstyleoption_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int TextGrammarCheck__GrammarResultTextEdit_DevType(const TextGrammarCheck__GrammarResultTextEdit* self) {
    return self->devType();
}

// Base class handler implementation
int TextGrammarCheck__GrammarResultTextEdit_SuperDevType(const TextGrammarCheck__GrammarResultTextEdit* self) {
    return self->TextGrammarCheck::GrammarResultTextEdit::devType();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnDevType(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self)))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_devtype_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SetVisible(TextGrammarCheck__GrammarResultTextEdit* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperSetVisible(TextGrammarCheck__GrammarResultTextEdit* self, bool visible) {
    self->TextGrammarCheck::GrammarResultTextEdit::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnSetVisible(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_setvisible_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int TextGrammarCheck__GrammarResultTextEdit_HeightForWidth(const TextGrammarCheck__GrammarResultTextEdit* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextGrammarCheck__GrammarResultTextEdit_SuperHeightForWidth(const TextGrammarCheck__GrammarResultTextEdit* self, int param1) {
    return self->TextGrammarCheck::GrammarResultTextEdit::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnHeightForWidth(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self)))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_heightforwidth_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_HasHeightForWidth(const TextGrammarCheck__GrammarResultTextEdit* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_SuperHasHeightForWidth(const TextGrammarCheck__GrammarResultTextEdit* self) {
    return self->TextGrammarCheck::GrammarResultTextEdit::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnHasHeightForWidth(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self)))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_hasheightforwidth_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextGrammarCheck__GrammarResultTextEdit_PaintEngine(const TextGrammarCheck__GrammarResultTextEdit* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextGrammarCheck__GrammarResultTextEdit_SuperPaintEngine(const TextGrammarCheck__GrammarResultTextEdit* self) {
    return self->TextGrammarCheck::GrammarResultTextEdit::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnPaintEngine(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self)))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_paintengine_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_EnterEvent(TextGrammarCheck__GrammarResultTextEdit* self, QEnterEvent* event) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperEnterEvent(TextGrammarCheck__GrammarResultTextEdit* self, QEnterEvent* event) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnEnterEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_enterevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_LeaveEvent(TextGrammarCheck__GrammarResultTextEdit* self, QEvent* event) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperLeaveEvent(TextGrammarCheck__GrammarResultTextEdit* self, QEvent* event) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnLeaveEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_leaveevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_MoveEvent(TextGrammarCheck__GrammarResultTextEdit* self, QMoveEvent* event) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperMoveEvent(TextGrammarCheck__GrammarResultTextEdit* self, QMoveEvent* event) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnMoveEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_moveevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_CloseEvent(TextGrammarCheck__GrammarResultTextEdit* self, QCloseEvent* event) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperCloseEvent(TextGrammarCheck__GrammarResultTextEdit* self, QCloseEvent* event) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnCloseEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_closeevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_TabletEvent(TextGrammarCheck__GrammarResultTextEdit* self, QTabletEvent* event) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperTabletEvent(TextGrammarCheck__GrammarResultTextEdit* self, QTabletEvent* event) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnTabletEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_tabletevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_ActionEvent(TextGrammarCheck__GrammarResultTextEdit* self, QActionEvent* event) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperActionEvent(TextGrammarCheck__GrammarResultTextEdit* self, QActionEvent* event) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnActionEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_actionevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_HideEvent(TextGrammarCheck__GrammarResultTextEdit* self, QHideEvent* event) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperHideEvent(TextGrammarCheck__GrammarResultTextEdit* self, QHideEvent* event) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnHideEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_hideevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_NativeEvent(TextGrammarCheck__GrammarResultTextEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        return vtextgrammarcheckgrammarresulttextedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_SuperNativeEvent(TextGrammarCheck__GrammarResultTextEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        return vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnNativeEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_nativeevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextGrammarCheck__GrammarResultTextEdit_Metric(const TextGrammarCheck__GrammarResultTextEdit* self, int param1) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit) {
        return vtextgrammarcheckgrammarresulttextedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammarResultTextEdit_SuperMetric(const TextGrammarCheck__GrammarResultTextEdit* self, int param1) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self))) {
        return vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnMetric(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self)))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_metric_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_InitPainter(const TextGrammarCheck__GrammarResultTextEdit* self, QPainter* painter) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperInitPainter(const TextGrammarCheck__GrammarResultTextEdit* self, QPainter* painter) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self))) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnInitPainter(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self)))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_initpainter_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextGrammarCheck__GrammarResultTextEdit_Redirected(const TextGrammarCheck__GrammarResultTextEdit* self, QPoint* offset) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit) {
        return vtextgrammarcheckgrammarresulttextedit->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextGrammarCheck__GrammarResultTextEdit_SuperRedirected(const TextGrammarCheck__GrammarResultTextEdit* self, QPoint* offset) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self))) {
        return vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnRedirected(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self)))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_redirected_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextGrammarCheck__GrammarResultTextEdit_SharedPainter(const TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit) {
        return vtextgrammarcheckgrammarresulttextedit->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextGrammarCheck__GrammarResultTextEdit_SuperSharedPainter(const TextGrammarCheck__GrammarResultTextEdit* self) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self))) {
        return vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnSharedPainter(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self)))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_sharedpainter_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_ChildEvent(TextGrammarCheck__GrammarResultTextEdit* self, QChildEvent* event) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperChildEvent(TextGrammarCheck__GrammarResultTextEdit* self, QChildEvent* event) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnChildEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_childevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_CustomEvent(TextGrammarCheck__GrammarResultTextEdit* self, QEvent* event) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperCustomEvent(TextGrammarCheck__GrammarResultTextEdit* self, QEvent* event) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnCustomEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_customevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_ConnectNotify(TextGrammarCheck__GrammarResultTextEdit* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperConnectNotify(TextGrammarCheck__GrammarResultTextEdit* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnConnectNotify(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_connectnotify_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_DisconnectNotify(TextGrammarCheck__GrammarResultTextEdit* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit) {
        vtextgrammarcheckgrammarresulttextedit->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperDisconnectNotify(TextGrammarCheck__GrammarResultTextEdit* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->TextGrammarCheck::GrammarResultTextEdit::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammarResultTextEdit::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnDisconnectNotify(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self))
        vtextgrammarcheckgrammarresulttextedit->textgrammarcheck__grammarresulttextedit_disconnectnotify_callback = reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextGrammarCheck__GrammarResultTextEdit_ZoomInF(TextGrammarCheck__GrammarResultTextEdit* self, float range) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->VirtualTextGrammarCheckGrammarResultTextEdit::zoomInF(static_cast<float>(range));
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammarResultTextEdit::zoomInF called without a directly constructed type");
}

// Derived class protected handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SetViewportMargins(TextGrammarCheck__GrammarResultTextEdit* self, int left, int top, int right, int bottom) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->VirtualTextGrammarCheckGrammarResultTextEdit::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammarResultTextEdit::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* TextGrammarCheck__GrammarResultTextEdit_ViewportMargins(const TextGrammarCheck__GrammarResultTextEdit* self) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self)))
        return new QMargins(vtextgrammarcheckgrammarresulttextedit->viewportMargins());
    qFatal("Error: Protected method TextGrammarCheck::GrammarResultTextEdit::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void TextGrammarCheck__GrammarResultTextEdit_DrawFrame(TextGrammarCheck__GrammarResultTextEdit* self, QPainter* param1) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->VirtualTextGrammarCheckGrammarResultTextEdit::drawFrame(param1);
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammarResultTextEdit::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void TextGrammarCheck__GrammarResultTextEdit_UpdateMicroFocus(TextGrammarCheck__GrammarResultTextEdit* self) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->VirtualTextGrammarCheckGrammarResultTextEdit::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammarResultTextEdit::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextGrammarCheck__GrammarResultTextEdit_Create(TextGrammarCheck__GrammarResultTextEdit* self) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->VirtualTextGrammarCheckGrammarResultTextEdit::create();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammarResultTextEdit::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextGrammarCheck__GrammarResultTextEdit_Destroy(TextGrammarCheck__GrammarResultTextEdit* self) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        vtextgrammarcheckgrammarresulttextedit->VirtualTextGrammarCheckGrammarResultTextEdit::destroy();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammarResultTextEdit::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_FocusNextChild(TextGrammarCheck__GrammarResultTextEdit* self) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        return vtextgrammarcheckgrammarresulttextedit->VirtualTextGrammarCheckGrammarResultTextEdit::focusNextChild();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammarResultTextEdit::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_FocusPreviousChild(TextGrammarCheck__GrammarResultTextEdit* self) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self)) {
        return vtextgrammarcheckgrammarresulttextedit->VirtualTextGrammarCheckGrammarResultTextEdit::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammarResultTextEdit::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextGrammarCheck__GrammarResultTextEdit_Sender(const TextGrammarCheck__GrammarResultTextEdit* self) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self))) {
        return vtextgrammarcheckgrammarresulttextedit->VirtualTextGrammarCheckGrammarResultTextEdit::sender();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammarResultTextEdit::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextGrammarCheck__GrammarResultTextEdit_SenderSignalIndex(const TextGrammarCheck__GrammarResultTextEdit* self) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self))) {
        return vtextgrammarcheckgrammarresulttextedit->VirtualTextGrammarCheckGrammarResultTextEdit::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammarResultTextEdit::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextGrammarCheck__GrammarResultTextEdit_Receivers(const TextGrammarCheck__GrammarResultTextEdit* self, const char* signal) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self))) {
        return vtextgrammarcheckgrammarresulttextedit->VirtualTextGrammarCheckGrammarResultTextEdit::receivers(signal);
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammarResultTextEdit::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_IsSignalConnected(const TextGrammarCheck__GrammarResultTextEdit* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self))) {
        return vtextgrammarcheckgrammarresulttextedit->VirtualTextGrammarCheckGrammarResultTextEdit::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammarResultTextEdit::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextGrammarCheck__GrammarResultTextEdit_GetDecodedMetricF(const TextGrammarCheck__GrammarResultTextEdit* self, int metricA, int metricB) {
    if (auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self))) {
        return vtextgrammarcheckgrammarresulttextedit->VirtualTextGrammarCheckGrammarResultTextEdit::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammarResultTextEdit::getDecodedMetricF called without a directly constructed type");
}

void TextGrammarCheck__GrammarResultTextEdit_Delete(TextGrammarCheck__GrammarResultTextEdit* self) {
    delete self;
}
