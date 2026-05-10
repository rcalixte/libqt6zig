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
    auto* vtextgrammarcheck__grammarresulttextedit = dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheck__grammarresulttextedit && vtextgrammarcheck__grammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->metaObject();
    }
}

void* TextGrammarCheck__GrammarResultTextEdit_Metacast(TextGrammarCheck__GrammarResultTextEdit* self, const char* param1) {
    auto* vtextgrammarcheck__grammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheck__grammarresulttextedit && vtextgrammarcheck__grammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->qt_metacast(param1);
    }
}

int TextGrammarCheck__GrammarResultTextEdit_Metacall(TextGrammarCheck__GrammarResultTextEdit* self, int param1, int param2, void** param3) {
    auto* vtextgrammarcheck__grammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheck__grammarresulttextedit && vtextgrammarcheck__grammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
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
    if (vtextgrammarcheck__grammarresulttextedit && vtextgrammarcheck__grammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheck__grammarresulttextedit->contextMenuEvent(event);
    }
}

void TextGrammarCheck__GrammarResultTextEdit_PaintEvent(TextGrammarCheck__GrammarResultTextEdit* self, QPaintEvent* event) {
    auto* vtextgrammarcheck__grammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheck__grammarresulttextedit && vtextgrammarcheck__grammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheck__grammarresulttextedit->paintEvent(event);
    }
}

bool TextGrammarCheck__GrammarResultTextEdit_Event(TextGrammarCheck__GrammarResultTextEdit* self, QEvent* ev) {
    auto* vtextgrammarcheck__grammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheck__grammarresulttextedit && vtextgrammarcheck__grammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return vtextgrammarcheck__grammarresulttextedit->event(ev);
    }
    return {};
}

void TextGrammarCheck__GrammarResultTextEdit_ReplaceText(TextGrammarCheck__GrammarResultTextEdit* self, const TextGrammarCheck__GrammarAction* act) {
    self->replaceText(*act);
}

void TextGrammarCheck__GrammarResultTextEdit_Connect_ReplaceText(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    void (*slotFunc)(TextGrammarCheck__GrammarResultTextEdit*, TextGrammarCheck__GrammarAction*) = reinterpret_cast<void (*)(TextGrammarCheck__GrammarResultTextEdit*, TextGrammarCheck__GrammarAction*)>(slot);
    TextGrammarCheck::GrammarResultTextEdit::connect(self, &TextGrammarCheck::GrammarResultTextEdit::replaceText, [self, slotFunc](const TextGrammarCheck::GrammarAction& act) {
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
    TextGrammarCheck::GrammarResultTextEdit::connect(self, &TextGrammarCheck::GrammarResultTextEdit::checkAgain, [self, slotFunc]() {
        slotFunc(self);
    });
}

void TextGrammarCheck__GrammarResultTextEdit_CloseChecker(TextGrammarCheck__GrammarResultTextEdit* self) {
    self->closeChecker();
}

void TextGrammarCheck__GrammarResultTextEdit_Connect_CloseChecker(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    void (*slotFunc)(TextGrammarCheck__GrammarResultTextEdit*) = reinterpret_cast<void (*)(TextGrammarCheck__GrammarResultTextEdit*)>(slot);
    TextGrammarCheck::GrammarResultTextEdit::connect(self, &TextGrammarCheck::GrammarResultTextEdit::closeChecker, [self, slotFunc]() {
        slotFunc(self);
    });
}

void TextGrammarCheck__GrammarResultTextEdit_Configure(TextGrammarCheck__GrammarResultTextEdit* self) {
    self->configure();
}

void TextGrammarCheck__GrammarResultTextEdit_Connect_Configure(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    void (*slotFunc)(TextGrammarCheck__GrammarResultTextEdit*) = reinterpret_cast<void (*)(TextGrammarCheck__GrammarResultTextEdit*)>(slot);
    TextGrammarCheck::GrammarResultTextEdit::connect(self, &TextGrammarCheck::GrammarResultTextEdit::configure, [self, slotFunc]() {
        slotFunc(self);
    });
}

// Base class handler implementation
QMetaObject* TextGrammarCheck__GrammarResultTextEdit_SuperMetaObject(const TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_MetaObject_IsBase(true);
        return (QMetaObject*)vtextgrammarcheckgrammarresulttextedit->metaObject();
    } else {
        return (QMetaObject*)self->TextGrammarCheck::GrammarResultTextEdit::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnMetaObject(const TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_MetaObject_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextGrammarCheck__GrammarResultTextEdit_SuperMetacast(TextGrammarCheck__GrammarResultTextEdit* self, const char* param1) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_Metacast_IsBase(true);
        return vtextgrammarcheckgrammarresulttextedit->qt_metacast(param1);
    } else {
        return self->TextGrammarCheck::GrammarResultTextEdit::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnMetacast(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_Metacast_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammarResultTextEdit_SuperMetacall(TextGrammarCheck__GrammarResultTextEdit* self, int param1, int param2, void** param3) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_Metacall_IsBase(true);
        return vtextgrammarcheckgrammarresulttextedit->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextGrammarCheck::GrammarResultTextEdit::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnMetacall(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_Metacall_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperContextMenuEvent(TextGrammarCheck__GrammarResultTextEdit* self, QContextMenuEvent* event) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_ContextMenuEvent_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->contextMenuEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnContextMenuEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_ContextMenuEvent_Callback>(slot));
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperPaintEvent(TextGrammarCheck__GrammarResultTextEdit* self, QPaintEvent* event) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_PaintEvent_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->paintEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnPaintEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_PaintEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_PaintEvent_Callback>(slot));
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_SuperEvent(TextGrammarCheck__GrammarResultTextEdit* self, QEvent* ev) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_Event_IsBase(true);
        return vtextgrammarcheckgrammarresulttextedit->event(ev);
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->event(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_Event_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_Event_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextGrammarCheck__GrammarResultTextEdit_LoadResource(TextGrammarCheck__GrammarResultTextEdit* self, int typeVal, const QUrl* name) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return new QVariant(vtextgrammarcheckgrammarresulttextedit->loadResource(static_cast<int>(typeVal), *name));
    } else {
        return new QVariant(((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->loadResource(static_cast<int>(typeVal), *name));
    }
}

// Base class handler implementation
QVariant* TextGrammarCheck__GrammarResultTextEdit_SuperLoadResource(TextGrammarCheck__GrammarResultTextEdit* self, int typeVal, const QUrl* name) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_LoadResource_IsBase(true);
        return new QVariant(vtextgrammarcheckgrammarresulttextedit->loadResource(static_cast<int>(typeVal), *name));
    } else {
        return new QVariant(((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->loadResource(static_cast<int>(typeVal), *name));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnLoadResource(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_LoadResource_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_LoadResource_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextGrammarCheck__GrammarResultTextEdit_InputMethodQuery(const TextGrammarCheck__GrammarResultTextEdit* self, int property) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return new QVariant(vtextgrammarcheckgrammarresulttextedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    } else {
        return new QVariant(((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    }
}

// Base class handler implementation
QVariant* TextGrammarCheck__GrammarResultTextEdit_SuperInputMethodQuery(const TextGrammarCheck__GrammarResultTextEdit* self, int property) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_InputMethodQuery_IsBase(true);
        return new QVariant(vtextgrammarcheckgrammarresulttextedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    } else {
        return new QVariant(((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnInputMethodQuery(const TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_InputMethodQuery_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_TimerEvent(TextGrammarCheck__GrammarResultTextEdit* self, QTimerEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->timerEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->timerEvent(e);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperTimerEvent(TextGrammarCheck__GrammarResultTextEdit* self, QTimerEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_TimerEvent_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->timerEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnTimerEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_TimerEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_KeyPressEvent(TextGrammarCheck__GrammarResultTextEdit* self, QKeyEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->keyPressEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->keyPressEvent(e);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperKeyPressEvent(TextGrammarCheck__GrammarResultTextEdit* self, QKeyEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_KeyPressEvent_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->keyPressEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnKeyPressEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_KeyPressEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_KeyReleaseEvent(TextGrammarCheck__GrammarResultTextEdit* self, QKeyEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->keyReleaseEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperKeyReleaseEvent(TextGrammarCheck__GrammarResultTextEdit* self, QKeyEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_KeyReleaseEvent_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->keyReleaseEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnKeyReleaseEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_ResizeEvent(TextGrammarCheck__GrammarResultTextEdit* self, QResizeEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->resizeEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->resizeEvent(e);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperResizeEvent(TextGrammarCheck__GrammarResultTextEdit* self, QResizeEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_ResizeEvent_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->resizeEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnResizeEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_ResizeEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_MousePressEvent(TextGrammarCheck__GrammarResultTextEdit* self, QMouseEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->mousePressEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->mousePressEvent(e);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperMousePressEvent(TextGrammarCheck__GrammarResultTextEdit* self, QMouseEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_MousePressEvent_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->mousePressEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnMousePressEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_MousePressEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_MouseMoveEvent(TextGrammarCheck__GrammarResultTextEdit* self, QMouseEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->mouseMoveEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperMouseMoveEvent(TextGrammarCheck__GrammarResultTextEdit* self, QMouseEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_MouseMoveEvent_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->mouseMoveEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnMouseMoveEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_MouseReleaseEvent(TextGrammarCheck__GrammarResultTextEdit* self, QMouseEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->mouseReleaseEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperMouseReleaseEvent(TextGrammarCheck__GrammarResultTextEdit* self, QMouseEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_MouseReleaseEvent_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->mouseReleaseEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnMouseReleaseEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_MouseDoubleClickEvent(TextGrammarCheck__GrammarResultTextEdit* self, QMouseEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->mouseDoubleClickEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->mouseDoubleClickEvent(e);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperMouseDoubleClickEvent(TextGrammarCheck__GrammarResultTextEdit* self, QMouseEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_MouseDoubleClickEvent_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->mouseDoubleClickEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->mouseDoubleClickEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnMouseDoubleClickEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_FocusNextPrevChild(TextGrammarCheck__GrammarResultTextEdit* self, bool next) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return vtextgrammarcheckgrammarresulttextedit->focusNextPrevChild(next);
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_SuperFocusNextPrevChild(TextGrammarCheck__GrammarResultTextEdit* self, bool next) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_FocusNextPrevChild_IsBase(true);
        return vtextgrammarcheckgrammarresulttextedit->focusNextPrevChild(next);
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnFocusNextPrevChild(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_DragEnterEvent(TextGrammarCheck__GrammarResultTextEdit* self, QDragEnterEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->dragEnterEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->dragEnterEvent(e);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperDragEnterEvent(TextGrammarCheck__GrammarResultTextEdit* self, QDragEnterEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_DragEnterEvent_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->dragEnterEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->dragEnterEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnDragEnterEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_DragEnterEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_DragLeaveEvent(TextGrammarCheck__GrammarResultTextEdit* self, QDragLeaveEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->dragLeaveEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->dragLeaveEvent(e);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperDragLeaveEvent(TextGrammarCheck__GrammarResultTextEdit* self, QDragLeaveEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_DragLeaveEvent_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->dragLeaveEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->dragLeaveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnDragLeaveEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_DragMoveEvent(TextGrammarCheck__GrammarResultTextEdit* self, QDragMoveEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->dragMoveEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->dragMoveEvent(e);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperDragMoveEvent(TextGrammarCheck__GrammarResultTextEdit* self, QDragMoveEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_DragMoveEvent_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->dragMoveEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->dragMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnDragMoveEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_DragMoveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_DropEvent(TextGrammarCheck__GrammarResultTextEdit* self, QDropEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->dropEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->dropEvent(e);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperDropEvent(TextGrammarCheck__GrammarResultTextEdit* self, QDropEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_DropEvent_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->dropEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->dropEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnDropEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_DropEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_FocusInEvent(TextGrammarCheck__GrammarResultTextEdit* self, QFocusEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->focusInEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->focusInEvent(e);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperFocusInEvent(TextGrammarCheck__GrammarResultTextEdit* self, QFocusEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_FocusInEvent_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->focusInEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnFocusInEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_FocusInEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_FocusOutEvent(TextGrammarCheck__GrammarResultTextEdit* self, QFocusEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->focusOutEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->focusOutEvent(e);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperFocusOutEvent(TextGrammarCheck__GrammarResultTextEdit* self, QFocusEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_FocusOutEvent_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->focusOutEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnFocusOutEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_FocusOutEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_ShowEvent(TextGrammarCheck__GrammarResultTextEdit* self, QShowEvent* param1) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->showEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperShowEvent(TextGrammarCheck__GrammarResultTextEdit* self, QShowEvent* param1) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_ShowEvent_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->showEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnShowEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_ShowEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_ChangeEvent(TextGrammarCheck__GrammarResultTextEdit* self, QEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->changeEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperChangeEvent(TextGrammarCheck__GrammarResultTextEdit* self, QEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_ChangeEvent_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->changeEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnChangeEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_ChangeEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_WheelEvent(TextGrammarCheck__GrammarResultTextEdit* self, QWheelEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->wheelEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->wheelEvent(e);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperWheelEvent(TextGrammarCheck__GrammarResultTextEdit* self, QWheelEvent* e) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_WheelEvent_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->wheelEvent(e);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnWheelEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_WheelEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* TextGrammarCheck__GrammarResultTextEdit_CreateMimeDataFromSelection(const TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return vtextgrammarcheckgrammarresulttextedit->createMimeDataFromSelection();
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->createMimeDataFromSelection();
    }
}

// Base class handler implementation
QMimeData* TextGrammarCheck__GrammarResultTextEdit_SuperCreateMimeDataFromSelection(const TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_CreateMimeDataFromSelection_IsBase(true);
        return vtextgrammarcheckgrammarresulttextedit->createMimeDataFromSelection();
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->createMimeDataFromSelection();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnCreateMimeDataFromSelection(const TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_CreateMimeDataFromSelection_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_CreateMimeDataFromSelection_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_CanInsertFromMimeData(const TextGrammarCheck__GrammarResultTextEdit* self, const QMimeData* source) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return vtextgrammarcheckgrammarresulttextedit->canInsertFromMimeData(source);
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->canInsertFromMimeData(source);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_SuperCanInsertFromMimeData(const TextGrammarCheck__GrammarResultTextEdit* self, const QMimeData* source) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_CanInsertFromMimeData_IsBase(true);
        return vtextgrammarcheckgrammarresulttextedit->canInsertFromMimeData(source);
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->canInsertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnCanInsertFromMimeData(const TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_CanInsertFromMimeData_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_CanInsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_InsertFromMimeData(TextGrammarCheck__GrammarResultTextEdit* self, const QMimeData* source) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->insertFromMimeData(source);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->insertFromMimeData(source);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperInsertFromMimeData(TextGrammarCheck__GrammarResultTextEdit* self, const QMimeData* source) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_InsertFromMimeData_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->insertFromMimeData(source);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->insertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnInsertFromMimeData(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_InsertFromMimeData_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_InsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_InputMethodEvent(TextGrammarCheck__GrammarResultTextEdit* self, QInputMethodEvent* param1) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->inputMethodEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperInputMethodEvent(TextGrammarCheck__GrammarResultTextEdit* self, QInputMethodEvent* param1) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_InputMethodEvent_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->inputMethodEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnInputMethodEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_InputMethodEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_ScrollContentsBy(TextGrammarCheck__GrammarResultTextEdit* self, int dx, int dy) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperScrollContentsBy(TextGrammarCheck__GrammarResultTextEdit* self, int dx, int dy) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_ScrollContentsBy_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnScrollContentsBy(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_ScrollContentsBy_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_DoSetTextCursor(TextGrammarCheck__GrammarResultTextEdit* self, const QTextCursor* cursor) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->doSetTextCursor(*cursor);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->doSetTextCursor(*cursor);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperDoSetTextCursor(TextGrammarCheck__GrammarResultTextEdit* self, const QTextCursor* cursor) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_DoSetTextCursor_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->doSetTextCursor(*cursor);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->doSetTextCursor(*cursor);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnDoSetTextCursor(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_DoSetTextCursor_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_DoSetTextCursor_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextGrammarCheck__GrammarResultTextEdit_MinimumSizeHint(const TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return new QSize(vtextgrammarcheckgrammarresulttextedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextGrammarCheck__GrammarResultTextEdit_SuperMinimumSizeHint(const TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_MinimumSizeHint_IsBase(true);
        return new QSize(vtextgrammarcheckgrammarresulttextedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnMinimumSizeHint(const TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextGrammarCheck__GrammarResultTextEdit_SizeHint(const TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return new QSize(vtextgrammarcheckgrammarresulttextedit->sizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextGrammarCheck__GrammarResultTextEdit_SuperSizeHint(const TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_SizeHint_IsBase(true);
        return new QSize(vtextgrammarcheckgrammarresulttextedit->sizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnSizeHint(const TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_SizeHint_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SetupViewport(TextGrammarCheck__GrammarResultTextEdit* self, QWidget* viewport) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setupViewport(viewport);
    } else {
        self->TextGrammarCheck::GrammarResultTextEdit::setupViewport(viewport);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperSetupViewport(TextGrammarCheck__GrammarResultTextEdit* self, QWidget* viewport) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_SetupViewport_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->setupViewport(viewport);
    } else {
        self->TextGrammarCheck::GrammarResultTextEdit::setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnSetupViewport(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_SetupViewport_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_EventFilter(TextGrammarCheck__GrammarResultTextEdit* self, QObject* param1, QEvent* param2) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return vtextgrammarcheckgrammarresulttextedit->eventFilter(param1, param2);
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_SuperEventFilter(TextGrammarCheck__GrammarResultTextEdit* self, QObject* param1, QEvent* param2) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_EventFilter_IsBase(true);
        return vtextgrammarcheckgrammarresulttextedit->eventFilter(param1, param2);
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnEventFilter(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_EventFilter_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_ViewportEvent(TextGrammarCheck__GrammarResultTextEdit* self, QEvent* param1) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return vtextgrammarcheckgrammarresulttextedit->viewportEvent(param1);
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->viewportEvent(param1);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_SuperViewportEvent(TextGrammarCheck__GrammarResultTextEdit* self, QEvent* param1) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_ViewportEvent_IsBase(true);
        return vtextgrammarcheckgrammarresulttextedit->viewportEvent(param1);
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->viewportEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnViewportEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_ViewportEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextGrammarCheck__GrammarResultTextEdit_ViewportSizeHint(const TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return new QSize(vtextgrammarcheckgrammarresulttextedit->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* TextGrammarCheck__GrammarResultTextEdit_SuperViewportSizeHint(const TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_ViewportSizeHint_IsBase(true);
        return new QSize(vtextgrammarcheckgrammarresulttextedit->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnViewportSizeHint(const TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_ViewportSizeHint_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_InitStyleOption(const TextGrammarCheck__GrammarResultTextEdit* self, QStyleOptionFrame* option) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->initStyleOption(option);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperInitStyleOption(const TextGrammarCheck__GrammarResultTextEdit* self, QStyleOptionFrame* option) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_InitStyleOption_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->initStyleOption(option);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnInitStyleOption(const TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_InitStyleOption_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammarResultTextEdit_DevType(const TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return vtextgrammarcheckgrammarresulttextedit->devType();
    } else {
        return self->TextGrammarCheck::GrammarResultTextEdit::devType();
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammarResultTextEdit_SuperDevType(const TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_DevType_IsBase(true);
        return vtextgrammarcheckgrammarresulttextedit->devType();
    } else {
        return self->TextGrammarCheck::GrammarResultTextEdit::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnDevType(const TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_DevType_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SetVisible(TextGrammarCheck__GrammarResultTextEdit* self, bool visible) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setVisible(visible);
    } else {
        self->TextGrammarCheck::GrammarResultTextEdit::setVisible(visible);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperSetVisible(TextGrammarCheck__GrammarResultTextEdit* self, bool visible) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_SetVisible_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->setVisible(visible);
    } else {
        self->TextGrammarCheck::GrammarResultTextEdit::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnSetVisible(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_SetVisible_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammarResultTextEdit_HeightForWidth(const TextGrammarCheck__GrammarResultTextEdit* self, int param1) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return vtextgrammarcheckgrammarresulttextedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextGrammarCheck::GrammarResultTextEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammarResultTextEdit_SuperHeightForWidth(const TextGrammarCheck__GrammarResultTextEdit* self, int param1) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_HeightForWidth_IsBase(true);
        return vtextgrammarcheckgrammarresulttextedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextGrammarCheck::GrammarResultTextEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnHeightForWidth(const TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_HeightForWidth_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_HasHeightForWidth(const TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return vtextgrammarcheckgrammarresulttextedit->hasHeightForWidth();
    } else {
        return self->TextGrammarCheck::GrammarResultTextEdit::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_SuperHasHeightForWidth(const TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_HasHeightForWidth_IsBase(true);
        return vtextgrammarcheckgrammarresulttextedit->hasHeightForWidth();
    } else {
        return self->TextGrammarCheck::GrammarResultTextEdit::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnHasHeightForWidth(const TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextGrammarCheck__GrammarResultTextEdit_PaintEngine(const TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return vtextgrammarcheckgrammarresulttextedit->paintEngine();
    } else {
        return self->TextGrammarCheck::GrammarResultTextEdit::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextGrammarCheck__GrammarResultTextEdit_SuperPaintEngine(const TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_PaintEngine_IsBase(true);
        return vtextgrammarcheckgrammarresulttextedit->paintEngine();
    } else {
        return self->TextGrammarCheck::GrammarResultTextEdit::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnPaintEngine(const TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_PaintEngine_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_EnterEvent(TextGrammarCheck__GrammarResultTextEdit* self, QEnterEvent* event) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->enterEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperEnterEvent(TextGrammarCheck__GrammarResultTextEdit* self, QEnterEvent* event) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_EnterEvent_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->enterEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnEnterEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_EnterEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_LeaveEvent(TextGrammarCheck__GrammarResultTextEdit* self, QEvent* event) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->leaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperLeaveEvent(TextGrammarCheck__GrammarResultTextEdit* self, QEvent* event) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_LeaveEvent_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->leaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnLeaveEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_LeaveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_MoveEvent(TextGrammarCheck__GrammarResultTextEdit* self, QMoveEvent* event) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->moveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperMoveEvent(TextGrammarCheck__GrammarResultTextEdit* self, QMoveEvent* event) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_MoveEvent_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->moveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnMoveEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_MoveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_CloseEvent(TextGrammarCheck__GrammarResultTextEdit* self, QCloseEvent* event) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->closeEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperCloseEvent(TextGrammarCheck__GrammarResultTextEdit* self, QCloseEvent* event) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_CloseEvent_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->closeEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnCloseEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_CloseEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_TabletEvent(TextGrammarCheck__GrammarResultTextEdit* self, QTabletEvent* event) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->tabletEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperTabletEvent(TextGrammarCheck__GrammarResultTextEdit* self, QTabletEvent* event) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_TabletEvent_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->tabletEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnTabletEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_TabletEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_ActionEvent(TextGrammarCheck__GrammarResultTextEdit* self, QActionEvent* event) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->actionEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperActionEvent(TextGrammarCheck__GrammarResultTextEdit* self, QActionEvent* event) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_ActionEvent_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->actionEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnActionEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_ActionEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_HideEvent(TextGrammarCheck__GrammarResultTextEdit* self, QHideEvent* event) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->hideEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperHideEvent(TextGrammarCheck__GrammarResultTextEdit* self, QHideEvent* event) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_HideEvent_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->hideEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnHideEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_HideEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_NativeEvent(TextGrammarCheck__GrammarResultTextEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return vtextgrammarcheckgrammarresulttextedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_SuperNativeEvent(TextGrammarCheck__GrammarResultTextEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_NativeEvent_IsBase(true);
        return vtextgrammarcheckgrammarresulttextedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnNativeEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_NativeEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammarResultTextEdit_Metric(const TextGrammarCheck__GrammarResultTextEdit* self, int param1) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return vtextgrammarcheckgrammarresulttextedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammarResultTextEdit_SuperMetric(const TextGrammarCheck__GrammarResultTextEdit* self, int param1) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_Metric_IsBase(true);
        return vtextgrammarcheckgrammarresulttextedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnMetric(const TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_Metric_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_InitPainter(const TextGrammarCheck__GrammarResultTextEdit* self, QPainter* painter) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->initPainter(painter);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperInitPainter(const TextGrammarCheck__GrammarResultTextEdit* self, QPainter* painter) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_InitPainter_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->initPainter(painter);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnInitPainter(const TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_InitPainter_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextGrammarCheck__GrammarResultTextEdit_Redirected(const TextGrammarCheck__GrammarResultTextEdit* self, QPoint* offset) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return vtextgrammarcheckgrammarresulttextedit->redirected(offset);
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextGrammarCheck__GrammarResultTextEdit_SuperRedirected(const TextGrammarCheck__GrammarResultTextEdit* self, QPoint* offset) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_Redirected_IsBase(true);
        return vtextgrammarcheckgrammarresulttextedit->redirected(offset);
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnRedirected(const TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_Redirected_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextGrammarCheck__GrammarResultTextEdit_SharedPainter(const TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return vtextgrammarcheckgrammarresulttextedit->sharedPainter();
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextGrammarCheck__GrammarResultTextEdit_SuperSharedPainter(const TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_SharedPainter_IsBase(true);
        return vtextgrammarcheckgrammarresulttextedit->sharedPainter();
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnSharedPainter(const TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_SharedPainter_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_ChildEvent(TextGrammarCheck__GrammarResultTextEdit* self, QChildEvent* event) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->childEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperChildEvent(TextGrammarCheck__GrammarResultTextEdit* self, QChildEvent* event) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_ChildEvent_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->childEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnChildEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_ChildEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_CustomEvent(TextGrammarCheck__GrammarResultTextEdit* self, QEvent* event) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->customEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperCustomEvent(TextGrammarCheck__GrammarResultTextEdit* self, QEvent* event) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_CustomEvent_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->customEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnCustomEvent(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_CustomEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_ConnectNotify(TextGrammarCheck__GrammarResultTextEdit* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->connectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperConnectNotify(TextGrammarCheck__GrammarResultTextEdit* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_ConnectNotify_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->connectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnConnectNotify(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_ConnectNotify_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_DisconnectNotify(TextGrammarCheck__GrammarResultTextEdit* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->disconnectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperDisconnectNotify(TextGrammarCheck__GrammarResultTextEdit* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_DisconnectNotify_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->disconnectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnDisconnectNotify(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_DisconnectNotify_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_ZoomInF(TextGrammarCheck__GrammarResultTextEdit* self, float range) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->zoomInF(static_cast<float>(range));
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->zoomInF(static_cast<float>(range));
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperZoomInF(TextGrammarCheck__GrammarResultTextEdit* self, float range) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_ZoomInF_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->zoomInF(static_cast<float>(range));
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->zoomInF(static_cast<float>(range));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnZoomInF(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_ZoomInF_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_ZoomInF_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SetViewportMargins(TextGrammarCheck__GrammarResultTextEdit* self, int left, int top, int right, int bottom) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperSetViewportMargins(TextGrammarCheck__GrammarResultTextEdit* self, int left, int top, int right, int bottom) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_SetViewportMargins_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnSetViewportMargins(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_SetViewportMargins_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* TextGrammarCheck__GrammarResultTextEdit_ViewportMargins(const TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return new QMargins(vtextgrammarcheckgrammarresulttextedit->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* TextGrammarCheck__GrammarResultTextEdit_SuperViewportMargins(const TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_ViewportMargins_IsBase(true);
        return new QMargins(vtextgrammarcheckgrammarresulttextedit->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnViewportMargins(const TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_ViewportMargins_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_DrawFrame(TextGrammarCheck__GrammarResultTextEdit* self, QPainter* param1) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->drawFrame(param1);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperDrawFrame(TextGrammarCheck__GrammarResultTextEdit* self, QPainter* param1) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_DrawFrame_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->drawFrame(param1);
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnDrawFrame(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_DrawFrame_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_UpdateMicroFocus(TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->updateMicroFocus();
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperUpdateMicroFocus(TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_UpdateMicroFocus_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->updateMicroFocus();
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnUpdateMicroFocus(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_Create(TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->create();
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->create();
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperCreate(TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_Create_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->create();
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnCreate(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_Create_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_Destroy(TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->destroy();
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->destroy();
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultTextEdit_SuperDestroy(TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_Destroy_IsBase(true);
        vtextgrammarcheckgrammarresulttextedit->destroy();
    } else {
        ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnDestroy(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_Destroy_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_FocusNextChild(TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return vtextgrammarcheckgrammarresulttextedit->focusNextChild();
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_SuperFocusNextChild(TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_FocusNextChild_IsBase(true);
        return vtextgrammarcheckgrammarresulttextedit->focusNextChild();
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnFocusNextChild(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_FocusNextChild_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_FocusPreviousChild(TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return vtextgrammarcheckgrammarresulttextedit->focusPreviousChild();
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_SuperFocusPreviousChild(TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_FocusPreviousChild_IsBase(true);
        return vtextgrammarcheckgrammarresulttextedit->focusPreviousChild();
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnFocusPreviousChild(TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = dynamic_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(self);
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextGrammarCheck__GrammarResultTextEdit_Sender(const TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return vtextgrammarcheckgrammarresulttextedit->sender();
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextGrammarCheck__GrammarResultTextEdit_SuperSender(const TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_Sender_IsBase(true);
        return vtextgrammarcheckgrammarresulttextedit->sender();
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnSender(const TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_Sender_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammarResultTextEdit_SenderSignalIndex(const TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return vtextgrammarcheckgrammarresulttextedit->senderSignalIndex();
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammarResultTextEdit_SuperSenderSignalIndex(const TextGrammarCheck__GrammarResultTextEdit* self) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_SenderSignalIndex_IsBase(true);
        return vtextgrammarcheckgrammarresulttextedit->senderSignalIndex();
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnSenderSignalIndex(const TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammarResultTextEdit_Receivers(const TextGrammarCheck__GrammarResultTextEdit* self, const char* signal) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return vtextgrammarcheckgrammarresulttextedit->receivers(signal);
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammarResultTextEdit_SuperReceivers(const TextGrammarCheck__GrammarResultTextEdit* self, const char* signal) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_Receivers_IsBase(true);
        return vtextgrammarcheckgrammarresulttextedit->receivers(signal);
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnReceivers(const TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_Receivers_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_IsSignalConnected(const TextGrammarCheck__GrammarResultTextEdit* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return vtextgrammarcheckgrammarresulttextedit->isSignalConnected(*signal);
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultTextEdit_SuperIsSignalConnected(const TextGrammarCheck__GrammarResultTextEdit* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_IsSignalConnected_IsBase(true);
        return vtextgrammarcheckgrammarresulttextedit->isSignalConnected(*signal);
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnIsSignalConnected(const TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_IsSignalConnected_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextGrammarCheck__GrammarResultTextEdit_GetDecodedMetricF(const TextGrammarCheck__GrammarResultTextEdit* self, int metricA, int metricB) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        return vtextgrammarcheckgrammarresulttextedit->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextGrammarCheck__GrammarResultTextEdit_SuperGetDecodedMetricF(const TextGrammarCheck__GrammarResultTextEdit* self, int metricA, int metricB) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_GetDecodedMetricF_IsBase(true);
        return vtextgrammarcheckgrammarresulttextedit->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextGrammarCheckGrammarResultTextEdit*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultTextEdit_OnGetDecodedMetricF(const TextGrammarCheck__GrammarResultTextEdit* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresulttextedit = const_cast<VirtualTextGrammarCheckGrammarResultTextEdit*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultTextEdit*>(self));
    if (vtextgrammarcheckgrammarresulttextedit && vtextgrammarcheckgrammarresulttextedit->isVirtualTextGrammarCheckGrammarResultTextEdit) {
        vtextgrammarcheckgrammarresulttextedit->setTextGrammarCheck__GrammarResultTextEdit_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultTextEdit::TextGrammarCheck__GrammarResultTextEdit_GetDecodedMetricF_Callback>(slot));
    }
}

void TextGrammarCheck__GrammarResultTextEdit_Delete(TextGrammarCheck__GrammarResultTextEdit* self) {
    delete self;
}
