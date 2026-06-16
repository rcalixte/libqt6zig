#include <QAbstractScrollArea>
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
#include <QPlainTextEdit>
#include <QPoint>
#include <QPointF>
#include <QRectF>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTextBlock>
#include <QTextCursor>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextTranslator__TranslatorTextEdit
#define WORKAROUND_INNER_CLASS_DEFINITION_TextTranslator__TranslatorWidget
#include <translatorwidget.h>
#include "libtranslatorwidget.h"
#include "libtranslatorwidget.hxx"

TextTranslator__TranslatorTextEdit* TextTranslator__TranslatorTextEdit_new(QWidget* parent) {
    return new VirtualTextTranslatorTranslatorTextEdit(parent);
}

TextTranslator__TranslatorTextEdit* TextTranslator__TranslatorTextEdit_new2() {
    return new VirtualTextTranslatorTranslatorTextEdit();
}

QMetaObject* TextTranslator__TranslatorTextEdit_MetaObject(const TextTranslator__TranslatorTextEdit* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextTranslator__TranslatorTextEdit_Metacast(TextTranslator__TranslatorTextEdit* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextTranslator__TranslatorTextEdit_Metacall(TextTranslator__TranslatorTextEdit* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void TextTranslator__TranslatorTextEdit_TranslateText(TextTranslator__TranslatorTextEdit* self) {
    self->translateText();
}

void TextTranslator__TranslatorTextEdit_Connect_TranslateText(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    void (*slotFunc)(TextTranslator__TranslatorTextEdit*) = reinterpret_cast<void (*)(TextTranslator__TranslatorTextEdit*)>(slot);
    TextTranslator::TranslatorTextEdit::connect(self, &TextTranslator::TranslatorTextEdit::translateText, [self, slotFunc]() {
        slotFunc(self);
    });
}

void TextTranslator__TranslatorTextEdit_DropEvent(TextTranslator__TranslatorTextEdit* self, QDropEvent* param1) {
    auto* vtexttranslator__translatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslator__translatortextedit && vtexttranslator__translatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslator__translatortextedit->dropEvent(param1);
    }
}

// Base class handler implementation
QMetaObject* TextTranslator__TranslatorTextEdit_SuperMetaObject(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_MetaObject_IsBase(true);
        return (QMetaObject*)vtexttranslatortranslatortextedit->metaObject();
    } else {
        return (QMetaObject*)self->TextTranslator::TranslatorTextEdit::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnMetaObject(const TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_MetaObject_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextTranslator__TranslatorTextEdit_SuperMetacast(TextTranslator__TranslatorTextEdit* self, const char* param1) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_Metacast_IsBase(true);
        return vtexttranslatortranslatortextedit->qt_metacast(param1);
    } else {
        return self->TextTranslator::TranslatorTextEdit::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnMetacast(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_Metacast_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextTranslator__TranslatorTextEdit_SuperMetacall(TextTranslator__TranslatorTextEdit* self, int param1, int param2, void** param3) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_Metacall_IsBase(true);
        return vtexttranslatortranslatortextedit->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextTranslator::TranslatorTextEdit::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnMetacall(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_Metacall_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperDropEvent(TextTranslator__TranslatorTextEdit* self, QDropEvent* param1) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_DropEvent_IsBase(true);
        vtexttranslatortranslatortextedit->dropEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->dropEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnDropEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_DropEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextTranslator__TranslatorTextEdit_LoadResource(TextTranslator__TranslatorTextEdit* self, int typeVal, const QUrl* name) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return new QVariant(vtexttranslatortranslatortextedit->loadResource(static_cast<int>(typeVal), *name));
    } else {
        return new QVariant(((VirtualTextTranslatorTranslatorTextEdit*)self)->loadResource(static_cast<int>(typeVal), *name));
    }
}

// Base class handler implementation
QVariant* TextTranslator__TranslatorTextEdit_SuperLoadResource(TextTranslator__TranslatorTextEdit* self, int typeVal, const QUrl* name) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_LoadResource_IsBase(true);
        return new QVariant(vtexttranslatortranslatortextedit->loadResource(static_cast<int>(typeVal), *name));
    } else {
        return new QVariant(((VirtualTextTranslatorTranslatorTextEdit*)self)->loadResource(static_cast<int>(typeVal), *name));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnLoadResource(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_LoadResource_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_LoadResource_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextTranslator__TranslatorTextEdit_InputMethodQuery(const TextTranslator__TranslatorTextEdit* self, int property) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return new QVariant(vtexttranslatortranslatortextedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    } else {
        return new QVariant(((VirtualTextTranslatorTranslatorTextEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    }
}

// Base class handler implementation
QVariant* TextTranslator__TranslatorTextEdit_SuperInputMethodQuery(const TextTranslator__TranslatorTextEdit* self, int property) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_InputMethodQuery_IsBase(true);
        return new QVariant(vtexttranslatortranslatortextedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    } else {
        return new QVariant(((VirtualTextTranslatorTranslatorTextEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnInputMethodQuery(const TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_InputMethodQuery_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorTextEdit_Event(TextTranslator__TranslatorTextEdit* self, QEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return vtexttranslatortranslatortextedit->event(e);
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->event(e);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorTextEdit_SuperEvent(TextTranslator__TranslatorTextEdit* self, QEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_Event_IsBase(true);
        return vtexttranslatortranslatortextedit->event(e);
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_Event_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_TimerEvent(TextTranslator__TranslatorTextEdit* self, QTimerEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->timerEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->timerEvent(e);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperTimerEvent(TextTranslator__TranslatorTextEdit* self, QTimerEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_TimerEvent_IsBase(true);
        vtexttranslatortranslatortextedit->timerEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnTimerEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_TimerEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_KeyPressEvent(TextTranslator__TranslatorTextEdit* self, QKeyEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->keyPressEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->keyPressEvent(e);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperKeyPressEvent(TextTranslator__TranslatorTextEdit* self, QKeyEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_KeyPressEvent_IsBase(true);
        vtexttranslatortranslatortextedit->keyPressEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnKeyPressEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_KeyPressEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_KeyReleaseEvent(TextTranslator__TranslatorTextEdit* self, QKeyEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->keyReleaseEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperKeyReleaseEvent(TextTranslator__TranslatorTextEdit* self, QKeyEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_KeyReleaseEvent_IsBase(true);
        vtexttranslatortranslatortextedit->keyReleaseEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnKeyReleaseEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_ResizeEvent(TextTranslator__TranslatorTextEdit* self, QResizeEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->resizeEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->resizeEvent(e);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperResizeEvent(TextTranslator__TranslatorTextEdit* self, QResizeEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_ResizeEvent_IsBase(true);
        vtexttranslatortranslatortextedit->resizeEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnResizeEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_ResizeEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_PaintEvent(TextTranslator__TranslatorTextEdit* self, QPaintEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->paintEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->paintEvent(e);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperPaintEvent(TextTranslator__TranslatorTextEdit* self, QPaintEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_PaintEvent_IsBase(true);
        vtexttranslatortranslatortextedit->paintEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnPaintEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_PaintEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_MousePressEvent(TextTranslator__TranslatorTextEdit* self, QMouseEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->mousePressEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->mousePressEvent(e);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperMousePressEvent(TextTranslator__TranslatorTextEdit* self, QMouseEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_MousePressEvent_IsBase(true);
        vtexttranslatortranslatortextedit->mousePressEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnMousePressEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_MousePressEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_MouseMoveEvent(TextTranslator__TranslatorTextEdit* self, QMouseEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->mouseMoveEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperMouseMoveEvent(TextTranslator__TranslatorTextEdit* self, QMouseEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_MouseMoveEvent_IsBase(true);
        vtexttranslatortranslatortextedit->mouseMoveEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnMouseMoveEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_MouseReleaseEvent(TextTranslator__TranslatorTextEdit* self, QMouseEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->mouseReleaseEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperMouseReleaseEvent(TextTranslator__TranslatorTextEdit* self, QMouseEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_MouseReleaseEvent_IsBase(true);
        vtexttranslatortranslatortextedit->mouseReleaseEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnMouseReleaseEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_MouseDoubleClickEvent(TextTranslator__TranslatorTextEdit* self, QMouseEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->mouseDoubleClickEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->mouseDoubleClickEvent(e);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperMouseDoubleClickEvent(TextTranslator__TranslatorTextEdit* self, QMouseEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_MouseDoubleClickEvent_IsBase(true);
        vtexttranslatortranslatortextedit->mouseDoubleClickEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->mouseDoubleClickEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnMouseDoubleClickEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorTextEdit_FocusNextPrevChild(TextTranslator__TranslatorTextEdit* self, bool next) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return vtexttranslatortranslatortextedit->focusNextPrevChild(next);
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorTextEdit_SuperFocusNextPrevChild(TextTranslator__TranslatorTextEdit* self, bool next) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_FocusNextPrevChild_IsBase(true);
        return vtexttranslatortranslatortextedit->focusNextPrevChild(next);
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnFocusNextPrevChild(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_ContextMenuEvent(TextTranslator__TranslatorTextEdit* self, QContextMenuEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->contextMenuEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->contextMenuEvent(e);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperContextMenuEvent(TextTranslator__TranslatorTextEdit* self, QContextMenuEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_ContextMenuEvent_IsBase(true);
        vtexttranslatortranslatortextedit->contextMenuEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->contextMenuEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnContextMenuEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_DragEnterEvent(TextTranslator__TranslatorTextEdit* self, QDragEnterEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->dragEnterEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->dragEnterEvent(e);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperDragEnterEvent(TextTranslator__TranslatorTextEdit* self, QDragEnterEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_DragEnterEvent_IsBase(true);
        vtexttranslatortranslatortextedit->dragEnterEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->dragEnterEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnDragEnterEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_DragEnterEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_DragLeaveEvent(TextTranslator__TranslatorTextEdit* self, QDragLeaveEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->dragLeaveEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->dragLeaveEvent(e);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperDragLeaveEvent(TextTranslator__TranslatorTextEdit* self, QDragLeaveEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_DragLeaveEvent_IsBase(true);
        vtexttranslatortranslatortextedit->dragLeaveEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->dragLeaveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnDragLeaveEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_DragMoveEvent(TextTranslator__TranslatorTextEdit* self, QDragMoveEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->dragMoveEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->dragMoveEvent(e);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperDragMoveEvent(TextTranslator__TranslatorTextEdit* self, QDragMoveEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_DragMoveEvent_IsBase(true);
        vtexttranslatortranslatortextedit->dragMoveEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->dragMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnDragMoveEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_DragMoveEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_FocusInEvent(TextTranslator__TranslatorTextEdit* self, QFocusEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->focusInEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->focusInEvent(e);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperFocusInEvent(TextTranslator__TranslatorTextEdit* self, QFocusEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_FocusInEvent_IsBase(true);
        vtexttranslatortranslatortextedit->focusInEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnFocusInEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_FocusInEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_FocusOutEvent(TextTranslator__TranslatorTextEdit* self, QFocusEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->focusOutEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->focusOutEvent(e);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperFocusOutEvent(TextTranslator__TranslatorTextEdit* self, QFocusEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_FocusOutEvent_IsBase(true);
        vtexttranslatortranslatortextedit->focusOutEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnFocusOutEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_FocusOutEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_ShowEvent(TextTranslator__TranslatorTextEdit* self, QShowEvent* param1) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->showEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperShowEvent(TextTranslator__TranslatorTextEdit* self, QShowEvent* param1) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_ShowEvent_IsBase(true);
        vtexttranslatortranslatortextedit->showEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnShowEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_ShowEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_ChangeEvent(TextTranslator__TranslatorTextEdit* self, QEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->changeEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperChangeEvent(TextTranslator__TranslatorTextEdit* self, QEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_ChangeEvent_IsBase(true);
        vtexttranslatortranslatortextedit->changeEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnChangeEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_ChangeEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_WheelEvent(TextTranslator__TranslatorTextEdit* self, QWheelEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->wheelEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->wheelEvent(e);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperWheelEvent(TextTranslator__TranslatorTextEdit* self, QWheelEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_WheelEvent_IsBase(true);
        vtexttranslatortranslatortextedit->wheelEvent(e);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnWheelEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_WheelEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* TextTranslator__TranslatorTextEdit_CreateMimeDataFromSelection(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return vtexttranslatortranslatortextedit->createMimeDataFromSelection();
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->createMimeDataFromSelection();
    }
}

// Base class handler implementation
QMimeData* TextTranslator__TranslatorTextEdit_SuperCreateMimeDataFromSelection(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_CreateMimeDataFromSelection_IsBase(true);
        return vtexttranslatortranslatortextedit->createMimeDataFromSelection();
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->createMimeDataFromSelection();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnCreateMimeDataFromSelection(const TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_CreateMimeDataFromSelection_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_CreateMimeDataFromSelection_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorTextEdit_CanInsertFromMimeData(const TextTranslator__TranslatorTextEdit* self, const QMimeData* source) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return vtexttranslatortranslatortextedit->canInsertFromMimeData(source);
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->canInsertFromMimeData(source);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorTextEdit_SuperCanInsertFromMimeData(const TextTranslator__TranslatorTextEdit* self, const QMimeData* source) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_CanInsertFromMimeData_IsBase(true);
        return vtexttranslatortranslatortextedit->canInsertFromMimeData(source);
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->canInsertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnCanInsertFromMimeData(const TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_CanInsertFromMimeData_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_CanInsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_InsertFromMimeData(TextTranslator__TranslatorTextEdit* self, const QMimeData* source) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->insertFromMimeData(source);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->insertFromMimeData(source);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperInsertFromMimeData(TextTranslator__TranslatorTextEdit* self, const QMimeData* source) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_InsertFromMimeData_IsBase(true);
        vtexttranslatortranslatortextedit->insertFromMimeData(source);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->insertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnInsertFromMimeData(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_InsertFromMimeData_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_InsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_InputMethodEvent(TextTranslator__TranslatorTextEdit* self, QInputMethodEvent* param1) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->inputMethodEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperInputMethodEvent(TextTranslator__TranslatorTextEdit* self, QInputMethodEvent* param1) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_InputMethodEvent_IsBase(true);
        vtexttranslatortranslatortextedit->inputMethodEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnInputMethodEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_InputMethodEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_ScrollContentsBy(TextTranslator__TranslatorTextEdit* self, int dx, int dy) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperScrollContentsBy(TextTranslator__TranslatorTextEdit* self, int dx, int dy) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_ScrollContentsBy_IsBase(true);
        vtexttranslatortranslatortextedit->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnScrollContentsBy(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_ScrollContentsBy_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_DoSetTextCursor(TextTranslator__TranslatorTextEdit* self, const QTextCursor* cursor) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->doSetTextCursor(*cursor);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->doSetTextCursor(*cursor);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperDoSetTextCursor(TextTranslator__TranslatorTextEdit* self, const QTextCursor* cursor) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_DoSetTextCursor_IsBase(true);
        vtexttranslatortranslatortextedit->doSetTextCursor(*cursor);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->doSetTextCursor(*cursor);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnDoSetTextCursor(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_DoSetTextCursor_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_DoSetTextCursor_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextTranslator__TranslatorTextEdit_MinimumSizeHint(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return new QSize(vtexttranslatortranslatortextedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextTranslatorTranslatorTextEdit*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextTranslator__TranslatorTextEdit_SuperMinimumSizeHint(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_MinimumSizeHint_IsBase(true);
        return new QSize(vtexttranslatortranslatortextedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextTranslatorTranslatorTextEdit*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnMinimumSizeHint(const TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextTranslator__TranslatorTextEdit_SizeHint(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return new QSize(vtexttranslatortranslatortextedit->sizeHint());
    } else {
        return new QSize(((VirtualTextTranslatorTranslatorTextEdit*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextTranslator__TranslatorTextEdit_SuperSizeHint(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_SizeHint_IsBase(true);
        return new QSize(vtexttranslatortranslatortextedit->sizeHint());
    } else {
        return new QSize(((VirtualTextTranslatorTranslatorTextEdit*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnSizeHint(const TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_SizeHint_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_SetupViewport(TextTranslator__TranslatorTextEdit* self, QWidget* viewport) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setupViewport(viewport);
    } else {
        self->TextTranslator::TranslatorTextEdit::setupViewport(viewport);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperSetupViewport(TextTranslator__TranslatorTextEdit* self, QWidget* viewport) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_SetupViewport_IsBase(true);
        vtexttranslatortranslatortextedit->setupViewport(viewport);
    } else {
        self->TextTranslator::TranslatorTextEdit::setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnSetupViewport(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_SetupViewport_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorTextEdit_EventFilter(TextTranslator__TranslatorTextEdit* self, QObject* param1, QEvent* param2) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return vtexttranslatortranslatortextedit->eventFilter(param1, param2);
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorTextEdit_SuperEventFilter(TextTranslator__TranslatorTextEdit* self, QObject* param1, QEvent* param2) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_EventFilter_IsBase(true);
        return vtexttranslatortranslatortextedit->eventFilter(param1, param2);
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnEventFilter(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_EventFilter_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorTextEdit_ViewportEvent(TextTranslator__TranslatorTextEdit* self, QEvent* param1) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return vtexttranslatortranslatortextedit->viewportEvent(param1);
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->viewportEvent(param1);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorTextEdit_SuperViewportEvent(TextTranslator__TranslatorTextEdit* self, QEvent* param1) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_ViewportEvent_IsBase(true);
        return vtexttranslatortranslatortextedit->viewportEvent(param1);
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->viewportEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnViewportEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_ViewportEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextTranslator__TranslatorTextEdit_ViewportSizeHint(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return new QSize(vtexttranslatortranslatortextedit->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* TextTranslator__TranslatorTextEdit_SuperViewportSizeHint(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_ViewportSizeHint_IsBase(true);
        return new QSize(vtexttranslatortranslatortextedit->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnViewportSizeHint(const TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_ViewportSizeHint_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_InitStyleOption(const TextTranslator__TranslatorTextEdit* self, QStyleOptionFrame* option) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->initStyleOption(option);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperInitStyleOption(const TextTranslator__TranslatorTextEdit* self, QStyleOptionFrame* option) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_InitStyleOption_IsBase(true);
        vtexttranslatortranslatortextedit->initStyleOption(option);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnInitStyleOption(const TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_InitStyleOption_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorTextEdit_DevType(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return vtexttranslatortranslatortextedit->devType();
    } else {
        return self->TextTranslator::TranslatorTextEdit::devType();
    }
}

// Base class handler implementation
int TextTranslator__TranslatorTextEdit_SuperDevType(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_DevType_IsBase(true);
        return vtexttranslatortranslatortextedit->devType();
    } else {
        return self->TextTranslator::TranslatorTextEdit::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnDevType(const TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_DevType_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_SetVisible(TextTranslator__TranslatorTextEdit* self, bool visible) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setVisible(visible);
    } else {
        self->TextTranslator::TranslatorTextEdit::setVisible(visible);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperSetVisible(TextTranslator__TranslatorTextEdit* self, bool visible) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_SetVisible_IsBase(true);
        vtexttranslatortranslatortextedit->setVisible(visible);
    } else {
        self->TextTranslator::TranslatorTextEdit::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnSetVisible(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_SetVisible_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorTextEdit_HeightForWidth(const TextTranslator__TranslatorTextEdit* self, int param1) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return vtexttranslatortranslatortextedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextTranslator::TranslatorTextEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextTranslator__TranslatorTextEdit_SuperHeightForWidth(const TextTranslator__TranslatorTextEdit* self, int param1) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_HeightForWidth_IsBase(true);
        return vtexttranslatortranslatortextedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextTranslator::TranslatorTextEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnHeightForWidth(const TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_HeightForWidth_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorTextEdit_HasHeightForWidth(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return vtexttranslatortranslatortextedit->hasHeightForWidth();
    } else {
        return self->TextTranslator::TranslatorTextEdit::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorTextEdit_SuperHasHeightForWidth(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_HasHeightForWidth_IsBase(true);
        return vtexttranslatortranslatortextedit->hasHeightForWidth();
    } else {
        return self->TextTranslator::TranslatorTextEdit::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnHasHeightForWidth(const TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextTranslator__TranslatorTextEdit_PaintEngine(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return vtexttranslatortranslatortextedit->paintEngine();
    } else {
        return self->TextTranslator::TranslatorTextEdit::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextTranslator__TranslatorTextEdit_SuperPaintEngine(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_PaintEngine_IsBase(true);
        return vtexttranslatortranslatortextedit->paintEngine();
    } else {
        return self->TextTranslator::TranslatorTextEdit::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnPaintEngine(const TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_PaintEngine_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_EnterEvent(TextTranslator__TranslatorTextEdit* self, QEnterEvent* event) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->enterEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperEnterEvent(TextTranslator__TranslatorTextEdit* self, QEnterEvent* event) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_EnterEvent_IsBase(true);
        vtexttranslatortranslatortextedit->enterEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnEnterEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_EnterEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_LeaveEvent(TextTranslator__TranslatorTextEdit* self, QEvent* event) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->leaveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperLeaveEvent(TextTranslator__TranslatorTextEdit* self, QEvent* event) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_LeaveEvent_IsBase(true);
        vtexttranslatortranslatortextedit->leaveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnLeaveEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_LeaveEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_MoveEvent(TextTranslator__TranslatorTextEdit* self, QMoveEvent* event) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->moveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperMoveEvent(TextTranslator__TranslatorTextEdit* self, QMoveEvent* event) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_MoveEvent_IsBase(true);
        vtexttranslatortranslatortextedit->moveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnMoveEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_MoveEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_CloseEvent(TextTranslator__TranslatorTextEdit* self, QCloseEvent* event) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->closeEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperCloseEvent(TextTranslator__TranslatorTextEdit* self, QCloseEvent* event) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_CloseEvent_IsBase(true);
        vtexttranslatortranslatortextedit->closeEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnCloseEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_CloseEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_TabletEvent(TextTranslator__TranslatorTextEdit* self, QTabletEvent* event) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->tabletEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperTabletEvent(TextTranslator__TranslatorTextEdit* self, QTabletEvent* event) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_TabletEvent_IsBase(true);
        vtexttranslatortranslatortextedit->tabletEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnTabletEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_TabletEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_ActionEvent(TextTranslator__TranslatorTextEdit* self, QActionEvent* event) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->actionEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperActionEvent(TextTranslator__TranslatorTextEdit* self, QActionEvent* event) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_ActionEvent_IsBase(true);
        vtexttranslatortranslatortextedit->actionEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnActionEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_ActionEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_HideEvent(TextTranslator__TranslatorTextEdit* self, QHideEvent* event) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->hideEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperHideEvent(TextTranslator__TranslatorTextEdit* self, QHideEvent* event) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_HideEvent_IsBase(true);
        vtexttranslatortranslatortextedit->hideEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnHideEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_HideEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorTextEdit_NativeEvent(TextTranslator__TranslatorTextEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return vtexttranslatortranslatortextedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorTextEdit_SuperNativeEvent(TextTranslator__TranslatorTextEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_NativeEvent_IsBase(true);
        return vtexttranslatortranslatortextedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnNativeEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_NativeEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorTextEdit_Metric(const TextTranslator__TranslatorTextEdit* self, int param1) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return vtexttranslatortranslatortextedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextTranslator__TranslatorTextEdit_SuperMetric(const TextTranslator__TranslatorTextEdit* self, int param1) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_Metric_IsBase(true);
        return vtexttranslatortranslatortextedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnMetric(const TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_Metric_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_InitPainter(const TextTranslator__TranslatorTextEdit* self, QPainter* painter) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->initPainter(painter);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperInitPainter(const TextTranslator__TranslatorTextEdit* self, QPainter* painter) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_InitPainter_IsBase(true);
        vtexttranslatortranslatortextedit->initPainter(painter);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnInitPainter(const TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_InitPainter_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextTranslator__TranslatorTextEdit_Redirected(const TextTranslator__TranslatorTextEdit* self, QPoint* offset) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return vtexttranslatortranslatortextedit->redirected(offset);
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextTranslator__TranslatorTextEdit_SuperRedirected(const TextTranslator__TranslatorTextEdit* self, QPoint* offset) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_Redirected_IsBase(true);
        return vtexttranslatortranslatortextedit->redirected(offset);
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnRedirected(const TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_Redirected_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextTranslator__TranslatorTextEdit_SharedPainter(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return vtexttranslatortranslatortextedit->sharedPainter();
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextTranslator__TranslatorTextEdit_SuperSharedPainter(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_SharedPainter_IsBase(true);
        return vtexttranslatortranslatortextedit->sharedPainter();
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnSharedPainter(const TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_SharedPainter_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_ChildEvent(TextTranslator__TranslatorTextEdit* self, QChildEvent* event) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->childEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperChildEvent(TextTranslator__TranslatorTextEdit* self, QChildEvent* event) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_ChildEvent_IsBase(true);
        vtexttranslatortranslatortextedit->childEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnChildEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_ChildEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_CustomEvent(TextTranslator__TranslatorTextEdit* self, QEvent* event) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->customEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperCustomEvent(TextTranslator__TranslatorTextEdit* self, QEvent* event) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_CustomEvent_IsBase(true);
        vtexttranslatortranslatortextedit->customEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnCustomEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_CustomEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_ConnectNotify(TextTranslator__TranslatorTextEdit* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->connectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperConnectNotify(TextTranslator__TranslatorTextEdit* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_ConnectNotify_IsBase(true);
        vtexttranslatortranslatortextedit->connectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnConnectNotify(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_ConnectNotify_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_DisconnectNotify(TextTranslator__TranslatorTextEdit* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->disconnectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperDisconnectNotify(TextTranslator__TranslatorTextEdit* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_DisconnectNotify_IsBase(true);
        vtexttranslatortranslatortextedit->disconnectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnDisconnectNotify(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_DisconnectNotify_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QTextBlock* TextTranslator__TranslatorTextEdit_FirstVisibleBlock(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return new QTextBlock(vtexttranslatortranslatortextedit->firstVisibleBlock());
    }
    return {};
}

// Base class handler implementation
QTextBlock* TextTranslator__TranslatorTextEdit_SuperFirstVisibleBlock(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_FirstVisibleBlock_IsBase(true);
        return new QTextBlock(vtexttranslatortranslatortextedit->firstVisibleBlock());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnFirstVisibleBlock(const TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_FirstVisibleBlock_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_FirstVisibleBlock_Callback>(slot));
    }
}

// Derived class handler implementation
QPointF* TextTranslator__TranslatorTextEdit_ContentOffset(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return new QPointF(vtexttranslatortranslatortextedit->contentOffset());
    }
    return {};
}

// Base class handler implementation
QPointF* TextTranslator__TranslatorTextEdit_SuperContentOffset(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_ContentOffset_IsBase(true);
        return new QPointF(vtexttranslatortranslatortextedit->contentOffset());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnContentOffset(const TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_ContentOffset_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_ContentOffset_Callback>(slot));
    }
}

// Derived class handler implementation
QRectF* TextTranslator__TranslatorTextEdit_BlockBoundingRect(const TextTranslator__TranslatorTextEdit* self, const QTextBlock* block) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return new QRectF(vtexttranslatortranslatortextedit->blockBoundingRect(*block));
    }
    return {};
}

// Base class handler implementation
QRectF* TextTranslator__TranslatorTextEdit_SuperBlockBoundingRect(const TextTranslator__TranslatorTextEdit* self, const QTextBlock* block) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_BlockBoundingRect_IsBase(true);
        return new QRectF(vtexttranslatortranslatortextedit->blockBoundingRect(*block));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnBlockBoundingRect(const TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_BlockBoundingRect_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_BlockBoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
QRectF* TextTranslator__TranslatorTextEdit_BlockBoundingGeometry(const TextTranslator__TranslatorTextEdit* self, const QTextBlock* block) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return new QRectF(vtexttranslatortranslatortextedit->blockBoundingGeometry(*block));
    }
    return {};
}

// Base class handler implementation
QRectF* TextTranslator__TranslatorTextEdit_SuperBlockBoundingGeometry(const TextTranslator__TranslatorTextEdit* self, const QTextBlock* block) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_BlockBoundingGeometry_IsBase(true);
        return new QRectF(vtexttranslatortranslatortextedit->blockBoundingGeometry(*block));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnBlockBoundingGeometry(const TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_BlockBoundingGeometry_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_BlockBoundingGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
QAbstractTextDocumentLayout__PaintContext* TextTranslator__TranslatorTextEdit_GetPaintContext(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return new QAbstractTextDocumentLayout::PaintContext(vtexttranslatortranslatortextedit->getPaintContext());
    }
    return {};
}

// Base class handler implementation
QAbstractTextDocumentLayout__PaintContext* TextTranslator__TranslatorTextEdit_SuperGetPaintContext(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_GetPaintContext_IsBase(true);
        return new QAbstractTextDocumentLayout::PaintContext(vtexttranslatortranslatortextedit->getPaintContext());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnGetPaintContext(const TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_GetPaintContext_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_GetPaintContext_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_ZoomInF(TextTranslator__TranslatorTextEdit* self, float range) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->zoomInF(static_cast<float>(range));
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->zoomInF(static_cast<float>(range));
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperZoomInF(TextTranslator__TranslatorTextEdit* self, float range) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_ZoomInF_IsBase(true);
        vtexttranslatortranslatortextedit->zoomInF(static_cast<float>(range));
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->zoomInF(static_cast<float>(range));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnZoomInF(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_ZoomInF_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_ZoomInF_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_SetViewportMargins(TextTranslator__TranslatorTextEdit* self, int left, int top, int right, int bottom) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperSetViewportMargins(TextTranslator__TranslatorTextEdit* self, int left, int top, int right, int bottom) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_SetViewportMargins_IsBase(true);
        vtexttranslatortranslatortextedit->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnSetViewportMargins(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_SetViewportMargins_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* TextTranslator__TranslatorTextEdit_ViewportMargins(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return new QMargins(vtexttranslatortranslatortextedit->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* TextTranslator__TranslatorTextEdit_SuperViewportMargins(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_ViewportMargins_IsBase(true);
        return new QMargins(vtexttranslatortranslatortextedit->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnViewportMargins(const TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_ViewportMargins_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_DrawFrame(TextTranslator__TranslatorTextEdit* self, QPainter* param1) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->drawFrame(param1);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperDrawFrame(TextTranslator__TranslatorTextEdit* self, QPainter* param1) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_DrawFrame_IsBase(true);
        vtexttranslatortranslatortextedit->drawFrame(param1);
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnDrawFrame(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_DrawFrame_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_UpdateMicroFocus(TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->updateMicroFocus();
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperUpdateMicroFocus(TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_UpdateMicroFocus_IsBase(true);
        vtexttranslatortranslatortextedit->updateMicroFocus();
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnUpdateMicroFocus(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_Create(TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->create();
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->create();
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperCreate(TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_Create_IsBase(true);
        vtexttranslatortranslatortextedit->create();
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnCreate(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_Create_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_Destroy(TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->destroy();
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->destroy();
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperDestroy(TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_Destroy_IsBase(true);
        vtexttranslatortranslatortextedit->destroy();
    } else {
        ((VirtualTextTranslatorTranslatorTextEdit*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnDestroy(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_Destroy_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorTextEdit_FocusNextChild(TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return vtexttranslatortranslatortextedit->focusNextChild();
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorTextEdit_SuperFocusNextChild(TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_FocusNextChild_IsBase(true);
        return vtexttranslatortranslatortextedit->focusNextChild();
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnFocusNextChild(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_FocusNextChild_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorTextEdit_FocusPreviousChild(TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return vtexttranslatortranslatortextedit->focusPreviousChild();
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorTextEdit_SuperFocusPreviousChild(TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_FocusPreviousChild_IsBase(true);
        return vtexttranslatortranslatortextedit->focusPreviousChild();
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnFocusPreviousChild(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextTranslator__TranslatorTextEdit_Sender(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return vtexttranslatortranslatortextedit->sender();
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextTranslator__TranslatorTextEdit_SuperSender(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_Sender_IsBase(true);
        return vtexttranslatortranslatortextedit->sender();
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnSender(const TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_Sender_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorTextEdit_SenderSignalIndex(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return vtexttranslatortranslatortextedit->senderSignalIndex();
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextTranslator__TranslatorTextEdit_SuperSenderSignalIndex(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_SenderSignalIndex_IsBase(true);
        return vtexttranslatortranslatortextedit->senderSignalIndex();
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnSenderSignalIndex(const TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorTextEdit_Receivers(const TextTranslator__TranslatorTextEdit* self, const char* signal) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return vtexttranslatortranslatortextedit->receivers(signal);
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextTranslator__TranslatorTextEdit_SuperReceivers(const TextTranslator__TranslatorTextEdit* self, const char* signal) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_Receivers_IsBase(true);
        return vtexttranslatortranslatortextedit->receivers(signal);
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnReceivers(const TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_Receivers_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorTextEdit_IsSignalConnected(const TextTranslator__TranslatorTextEdit* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return vtexttranslatortranslatortextedit->isSignalConnected(*signal);
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorTextEdit_SuperIsSignalConnected(const TextTranslator__TranslatorTextEdit* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_IsSignalConnected_IsBase(true);
        return vtexttranslatortranslatortextedit->isSignalConnected(*signal);
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnIsSignalConnected(const TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_IsSignalConnected_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextTranslator__TranslatorTextEdit_GetDecodedMetricF(const TextTranslator__TranslatorTextEdit* self, int metricA, int metricB) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        return vtexttranslatortranslatortextedit->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextTranslator__TranslatorTextEdit_SuperGetDecodedMetricF(const TextTranslator__TranslatorTextEdit* self, int metricA, int metricB) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_GetDecodedMetricF_IsBase(true);
        return vtexttranslatortranslatortextedit->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextTranslatorTranslatorTextEdit*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnGetDecodedMetricF(const TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit && vtexttranslatortranslatortextedit->isVirtualTextTranslatorTranslatorTextEdit) {
        vtexttranslatortranslatortextedit->setTextTranslator__TranslatorTextEdit_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_GetDecodedMetricF_Callback>(slot));
    }
}

void TextTranslator__TranslatorTextEdit_Delete(TextTranslator__TranslatorTextEdit* self) {
    delete self;
}

TextTranslator__TranslatorWidget* TextTranslator__TranslatorWidget_new(QWidget* parent) {
    return new VirtualTextTranslatorTranslatorWidget(parent);
}

TextTranslator__TranslatorWidget* TextTranslator__TranslatorWidget_new2() {
    return new VirtualTextTranslatorTranslatorWidget();
}

TextTranslator__TranslatorWidget* TextTranslator__TranslatorWidget_new3(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualTextTranslatorTranslatorWidget(text_QString);
}

TextTranslator__TranslatorWidget* TextTranslator__TranslatorWidget_new4(const libqt_string text, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualTextTranslatorTranslatorWidget(text_QString, parent);
}

QMetaObject* TextTranslator__TranslatorWidget_MetaObject(const TextTranslator__TranslatorWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextTranslator__TranslatorWidget_Metacast(TextTranslator__TranslatorWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextTranslator__TranslatorWidget_Metacall(TextTranslator__TranslatorWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void TextTranslator__TranslatorWidget_SetTextToTranslate(TextTranslator__TranslatorWidget* self, const libqt_string textToTranslate) {
    QString textToTranslate_QString = QString::fromUtf8(textToTranslate.data, textToTranslate.len);
    self->setTextToTranslate(textToTranslate_QString);
}

void TextTranslator__TranslatorWidget_WriteConfig(TextTranslator__TranslatorWidget* self) {
    self->writeConfig();
}

void TextTranslator__TranslatorWidget_ReadConfig(TextTranslator__TranslatorWidget* self) {
    self->readConfig();
}

void TextTranslator__TranslatorWidget_SetStandalone(TextTranslator__TranslatorWidget* self, bool b) {
    self->setStandalone(b);
}

void TextTranslator__TranslatorWidget_SlotTranslate(TextTranslator__TranslatorWidget* self) {
    self->slotTranslate();
}

void TextTranslator__TranslatorWidget_SlotCloseWidget(TextTranslator__TranslatorWidget* self) {
    self->slotCloseWidget();
}

bool TextTranslator__TranslatorWidget_Event(TextTranslator__TranslatorWidget* self, QEvent* e) {
    auto* vtexttranslator__translatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslator__translatorwidget && vtexttranslator__translatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        return vtexttranslator__translatorwidget->event(e);
    }
    return {};
}

void TextTranslator__TranslatorWidget_ToolsWasClosed(TextTranslator__TranslatorWidget* self) {
    self->toolsWasClosed();
}

void TextTranslator__TranslatorWidget_Connect_ToolsWasClosed(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    void (*slotFunc)(TextTranslator__TranslatorWidget*) = reinterpret_cast<void (*)(TextTranslator__TranslatorWidget*)>(slot);
    TextTranslator::TranslatorWidget::connect(self, &TextTranslator::TranslatorWidget::toolsWasClosed, [self, slotFunc]() {
        slotFunc(self);
    });
}

// Base class handler implementation
QMetaObject* TextTranslator__TranslatorWidget_SuperMetaObject(const TextTranslator__TranslatorWidget* self) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_MetaObject_IsBase(true);
        return (QMetaObject*)vtexttranslatortranslatorwidget->metaObject();
    } else {
        return (QMetaObject*)self->TextTranslator::TranslatorWidget::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnMetaObject(const TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_MetaObject_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextTranslator__TranslatorWidget_SuperMetacast(TextTranslator__TranslatorWidget* self, const char* param1) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_Metacast_IsBase(true);
        return vtexttranslatortranslatorwidget->qt_metacast(param1);
    } else {
        return self->TextTranslator::TranslatorWidget::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnMetacast(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_Metacast_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextTranslator__TranslatorWidget_SuperMetacall(TextTranslator__TranslatorWidget* self, int param1, int param2, void** param3) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_Metacall_IsBase(true);
        return vtexttranslatortranslatorwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextTranslator::TranslatorWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnMetacall(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_Metacall_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorWidget_SuperEvent(TextTranslator__TranslatorWidget* self, QEvent* e) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_Event_IsBase(true);
        return vtexttranslatortranslatorwidget->event(e);
    } else {
        return ((VirtualTextTranslatorTranslatorWidget*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_Event_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorWidget_DevType(const TextTranslator__TranslatorWidget* self) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        return vtexttranslatortranslatorwidget->devType();
    } else {
        return self->TextTranslator::TranslatorWidget::devType();
    }
}

// Base class handler implementation
int TextTranslator__TranslatorWidget_SuperDevType(const TextTranslator__TranslatorWidget* self) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_DevType_IsBase(true);
        return vtexttranslatortranslatorwidget->devType();
    } else {
        return self->TextTranslator::TranslatorWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnDevType(const TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_DevType_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_SetVisible(TextTranslator__TranslatorWidget* self, bool visible) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setVisible(visible);
    } else {
        self->TextTranslator::TranslatorWidget::setVisible(visible);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperSetVisible(TextTranslator__TranslatorWidget* self, bool visible) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_SetVisible_IsBase(true);
        vtexttranslatortranslatorwidget->setVisible(visible);
    } else {
        self->TextTranslator::TranslatorWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnSetVisible(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_SetVisible_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextTranslator__TranslatorWidget_SizeHint(const TextTranslator__TranslatorWidget* self) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        return new QSize(vtexttranslatortranslatorwidget->sizeHint());
    } else {
        return new QSize(((VirtualTextTranslatorTranslatorWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextTranslator__TranslatorWidget_SuperSizeHint(const TextTranslator__TranslatorWidget* self) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_SizeHint_IsBase(true);
        return new QSize(vtexttranslatortranslatorwidget->sizeHint());
    } else {
        return new QSize(((VirtualTextTranslatorTranslatorWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnSizeHint(const TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_SizeHint_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextTranslator__TranslatorWidget_MinimumSizeHint(const TextTranslator__TranslatorWidget* self) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        return new QSize(vtexttranslatortranslatorwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextTranslatorTranslatorWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextTranslator__TranslatorWidget_SuperMinimumSizeHint(const TextTranslator__TranslatorWidget* self) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vtexttranslatortranslatorwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextTranslatorTranslatorWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnMinimumSizeHint(const TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorWidget_HeightForWidth(const TextTranslator__TranslatorWidget* self, int param1) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        return vtexttranslatortranslatorwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextTranslator::TranslatorWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextTranslator__TranslatorWidget_SuperHeightForWidth(const TextTranslator__TranslatorWidget* self, int param1) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_HeightForWidth_IsBase(true);
        return vtexttranslatortranslatorwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextTranslator::TranslatorWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnHeightForWidth(const TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_HeightForWidth_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorWidget_HasHeightForWidth(const TextTranslator__TranslatorWidget* self) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        return vtexttranslatortranslatorwidget->hasHeightForWidth();
    } else {
        return self->TextTranslator::TranslatorWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorWidget_SuperHasHeightForWidth(const TextTranslator__TranslatorWidget* self) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_HasHeightForWidth_IsBase(true);
        return vtexttranslatortranslatorwidget->hasHeightForWidth();
    } else {
        return self->TextTranslator::TranslatorWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnHasHeightForWidth(const TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextTranslator__TranslatorWidget_PaintEngine(const TextTranslator__TranslatorWidget* self) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        return vtexttranslatortranslatorwidget->paintEngine();
    } else {
        return self->TextTranslator::TranslatorWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextTranslator__TranslatorWidget_SuperPaintEngine(const TextTranslator__TranslatorWidget* self) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_PaintEngine_IsBase(true);
        return vtexttranslatortranslatorwidget->paintEngine();
    } else {
        return self->TextTranslator::TranslatorWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnPaintEngine(const TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_PaintEngine_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_MousePressEvent(TextTranslator__TranslatorWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->mousePressEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperMousePressEvent(TextTranslator__TranslatorWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_MousePressEvent_IsBase(true);
        vtexttranslatortranslatorwidget->mousePressEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnMousePressEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_MousePressEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_MouseReleaseEvent(TextTranslator__TranslatorWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperMouseReleaseEvent(TextTranslator__TranslatorWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_MouseReleaseEvent_IsBase(true);
        vtexttranslatortranslatorwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnMouseReleaseEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_MouseDoubleClickEvent(TextTranslator__TranslatorWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperMouseDoubleClickEvent(TextTranslator__TranslatorWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_MouseDoubleClickEvent_IsBase(true);
        vtexttranslatortranslatorwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnMouseDoubleClickEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_MouseMoveEvent(TextTranslator__TranslatorWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperMouseMoveEvent(TextTranslator__TranslatorWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_MouseMoveEvent_IsBase(true);
        vtexttranslatortranslatorwidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnMouseMoveEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_WheelEvent(TextTranslator__TranslatorWidget* self, QWheelEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->wheelEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperWheelEvent(TextTranslator__TranslatorWidget* self, QWheelEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_WheelEvent_IsBase(true);
        vtexttranslatortranslatorwidget->wheelEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnWheelEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_WheelEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_KeyPressEvent(TextTranslator__TranslatorWidget* self, QKeyEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->keyPressEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperKeyPressEvent(TextTranslator__TranslatorWidget* self, QKeyEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_KeyPressEvent_IsBase(true);
        vtexttranslatortranslatorwidget->keyPressEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnKeyPressEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_KeyReleaseEvent(TextTranslator__TranslatorWidget* self, QKeyEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperKeyReleaseEvent(TextTranslator__TranslatorWidget* self, QKeyEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_KeyReleaseEvent_IsBase(true);
        vtexttranslatortranslatorwidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnKeyReleaseEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_FocusInEvent(TextTranslator__TranslatorWidget* self, QFocusEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->focusInEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperFocusInEvent(TextTranslator__TranslatorWidget* self, QFocusEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_FocusInEvent_IsBase(true);
        vtexttranslatortranslatorwidget->focusInEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnFocusInEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_FocusInEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_FocusOutEvent(TextTranslator__TranslatorWidget* self, QFocusEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->focusOutEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperFocusOutEvent(TextTranslator__TranslatorWidget* self, QFocusEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_FocusOutEvent_IsBase(true);
        vtexttranslatortranslatorwidget->focusOutEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnFocusOutEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_EnterEvent(TextTranslator__TranslatorWidget* self, QEnterEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->enterEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperEnterEvent(TextTranslator__TranslatorWidget* self, QEnterEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_EnterEvent_IsBase(true);
        vtexttranslatortranslatorwidget->enterEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnEnterEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_EnterEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_LeaveEvent(TextTranslator__TranslatorWidget* self, QEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->leaveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperLeaveEvent(TextTranslator__TranslatorWidget* self, QEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_LeaveEvent_IsBase(true);
        vtexttranslatortranslatorwidget->leaveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnLeaveEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_LeaveEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_PaintEvent(TextTranslator__TranslatorWidget* self, QPaintEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->paintEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperPaintEvent(TextTranslator__TranslatorWidget* self, QPaintEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_PaintEvent_IsBase(true);
        vtexttranslatortranslatorwidget->paintEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnPaintEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_PaintEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_MoveEvent(TextTranslator__TranslatorWidget* self, QMoveEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->moveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperMoveEvent(TextTranslator__TranslatorWidget* self, QMoveEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_MoveEvent_IsBase(true);
        vtexttranslatortranslatorwidget->moveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnMoveEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_MoveEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_ResizeEvent(TextTranslator__TranslatorWidget* self, QResizeEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->resizeEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperResizeEvent(TextTranslator__TranslatorWidget* self, QResizeEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_ResizeEvent_IsBase(true);
        vtexttranslatortranslatorwidget->resizeEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnResizeEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_ResizeEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_CloseEvent(TextTranslator__TranslatorWidget* self, QCloseEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->closeEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperCloseEvent(TextTranslator__TranslatorWidget* self, QCloseEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_CloseEvent_IsBase(true);
        vtexttranslatortranslatorwidget->closeEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnCloseEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_CloseEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_ContextMenuEvent(TextTranslator__TranslatorWidget* self, QContextMenuEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->contextMenuEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperContextMenuEvent(TextTranslator__TranslatorWidget* self, QContextMenuEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_ContextMenuEvent_IsBase(true);
        vtexttranslatortranslatorwidget->contextMenuEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnContextMenuEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_TabletEvent(TextTranslator__TranslatorWidget* self, QTabletEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->tabletEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperTabletEvent(TextTranslator__TranslatorWidget* self, QTabletEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_TabletEvent_IsBase(true);
        vtexttranslatortranslatorwidget->tabletEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnTabletEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_TabletEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_ActionEvent(TextTranslator__TranslatorWidget* self, QActionEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->actionEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperActionEvent(TextTranslator__TranslatorWidget* self, QActionEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_ActionEvent_IsBase(true);
        vtexttranslatortranslatorwidget->actionEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnActionEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_ActionEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_DragEnterEvent(TextTranslator__TranslatorWidget* self, QDragEnterEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->dragEnterEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperDragEnterEvent(TextTranslator__TranslatorWidget* self, QDragEnterEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_DragEnterEvent_IsBase(true);
        vtexttranslatortranslatorwidget->dragEnterEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnDragEnterEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_DragMoveEvent(TextTranslator__TranslatorWidget* self, QDragMoveEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->dragMoveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperDragMoveEvent(TextTranslator__TranslatorWidget* self, QDragMoveEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_DragMoveEvent_IsBase(true);
        vtexttranslatortranslatorwidget->dragMoveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnDragMoveEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_DragLeaveEvent(TextTranslator__TranslatorWidget* self, QDragLeaveEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperDragLeaveEvent(TextTranslator__TranslatorWidget* self, QDragLeaveEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_DragLeaveEvent_IsBase(true);
        vtexttranslatortranslatorwidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnDragLeaveEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_DropEvent(TextTranslator__TranslatorWidget* self, QDropEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->dropEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperDropEvent(TextTranslator__TranslatorWidget* self, QDropEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_DropEvent_IsBase(true);
        vtexttranslatortranslatorwidget->dropEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnDropEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_DropEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_ShowEvent(TextTranslator__TranslatorWidget* self, QShowEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->showEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperShowEvent(TextTranslator__TranslatorWidget* self, QShowEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_ShowEvent_IsBase(true);
        vtexttranslatortranslatorwidget->showEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnShowEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_ShowEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_HideEvent(TextTranslator__TranslatorWidget* self, QHideEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->hideEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperHideEvent(TextTranslator__TranslatorWidget* self, QHideEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_HideEvent_IsBase(true);
        vtexttranslatortranslatorwidget->hideEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnHideEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_HideEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorWidget_NativeEvent(TextTranslator__TranslatorWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        return vtexttranslatortranslatorwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextTranslatorTranslatorWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorWidget_SuperNativeEvent(TextTranslator__TranslatorWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_NativeEvent_IsBase(true);
        return vtexttranslatortranslatorwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextTranslatorTranslatorWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnNativeEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_NativeEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_ChangeEvent(TextTranslator__TranslatorWidget* self, QEvent* param1) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->changeEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperChangeEvent(TextTranslator__TranslatorWidget* self, QEvent* param1) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_ChangeEvent_IsBase(true);
        vtexttranslatortranslatorwidget->changeEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnChangeEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_ChangeEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorWidget_Metric(const TextTranslator__TranslatorWidget* self, int param1) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        return vtexttranslatortranslatorwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextTranslatorTranslatorWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextTranslator__TranslatorWidget_SuperMetric(const TextTranslator__TranslatorWidget* self, int param1) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_Metric_IsBase(true);
        return vtexttranslatortranslatorwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextTranslatorTranslatorWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnMetric(const TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_Metric_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_InitPainter(const TextTranslator__TranslatorWidget* self, QPainter* painter) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->initPainter(painter);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperInitPainter(const TextTranslator__TranslatorWidget* self, QPainter* painter) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_InitPainter_IsBase(true);
        vtexttranslatortranslatorwidget->initPainter(painter);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnInitPainter(const TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_InitPainter_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextTranslator__TranslatorWidget_Redirected(const TextTranslator__TranslatorWidget* self, QPoint* offset) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        return vtexttranslatortranslatorwidget->redirected(offset);
    } else {
        return ((VirtualTextTranslatorTranslatorWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextTranslator__TranslatorWidget_SuperRedirected(const TextTranslator__TranslatorWidget* self, QPoint* offset) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_Redirected_IsBase(true);
        return vtexttranslatortranslatorwidget->redirected(offset);
    } else {
        return ((VirtualTextTranslatorTranslatorWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnRedirected(const TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_Redirected_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextTranslator__TranslatorWidget_SharedPainter(const TextTranslator__TranslatorWidget* self) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        return vtexttranslatortranslatorwidget->sharedPainter();
    } else {
        return ((VirtualTextTranslatorTranslatorWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextTranslator__TranslatorWidget_SuperSharedPainter(const TextTranslator__TranslatorWidget* self) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_SharedPainter_IsBase(true);
        return vtexttranslatortranslatorwidget->sharedPainter();
    } else {
        return ((VirtualTextTranslatorTranslatorWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnSharedPainter(const TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_SharedPainter_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_InputMethodEvent(TextTranslator__TranslatorWidget* self, QInputMethodEvent* param1) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperInputMethodEvent(TextTranslator__TranslatorWidget* self, QInputMethodEvent* param1) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_InputMethodEvent_IsBase(true);
        vtexttranslatortranslatorwidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnInputMethodEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextTranslator__TranslatorWidget_InputMethodQuery(const TextTranslator__TranslatorWidget* self, int param1) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        return new QVariant(vtexttranslatortranslatorwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextTranslatorTranslatorWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* TextTranslator__TranslatorWidget_SuperInputMethodQuery(const TextTranslator__TranslatorWidget* self, int param1) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vtexttranslatortranslatorwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextTranslatorTranslatorWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnInputMethodQuery(const TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorWidget_FocusNextPrevChild(TextTranslator__TranslatorWidget* self, bool next) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        return vtexttranslatortranslatorwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextTranslatorTranslatorWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorWidget_SuperFocusNextPrevChild(TextTranslator__TranslatorWidget* self, bool next) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_FocusNextPrevChild_IsBase(true);
        return vtexttranslatortranslatorwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextTranslatorTranslatorWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnFocusNextPrevChild(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorWidget_EventFilter(TextTranslator__TranslatorWidget* self, QObject* watched, QEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        return vtexttranslatortranslatorwidget->eventFilter(watched, event);
    } else {
        return self->TextTranslator::TranslatorWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorWidget_SuperEventFilter(TextTranslator__TranslatorWidget* self, QObject* watched, QEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_EventFilter_IsBase(true);
        return vtexttranslatortranslatorwidget->eventFilter(watched, event);
    } else {
        return self->TextTranslator::TranslatorWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnEventFilter(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_EventFilter_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_TimerEvent(TextTranslator__TranslatorWidget* self, QTimerEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->timerEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperTimerEvent(TextTranslator__TranslatorWidget* self, QTimerEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_TimerEvent_IsBase(true);
        vtexttranslatortranslatorwidget->timerEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnTimerEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_TimerEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_ChildEvent(TextTranslator__TranslatorWidget* self, QChildEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->childEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperChildEvent(TextTranslator__TranslatorWidget* self, QChildEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_ChildEvent_IsBase(true);
        vtexttranslatortranslatorwidget->childEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnChildEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_ChildEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_CustomEvent(TextTranslator__TranslatorWidget* self, QEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->customEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperCustomEvent(TextTranslator__TranslatorWidget* self, QEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_CustomEvent_IsBase(true);
        vtexttranslatortranslatorwidget->customEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnCustomEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_CustomEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_ConnectNotify(TextTranslator__TranslatorWidget* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->connectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperConnectNotify(TextTranslator__TranslatorWidget* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_ConnectNotify_IsBase(true);
        vtexttranslatortranslatorwidget->connectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnConnectNotify(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_ConnectNotify_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_DisconnectNotify(TextTranslator__TranslatorWidget* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperDisconnectNotify(TextTranslator__TranslatorWidget* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_DisconnectNotify_IsBase(true);
        vtexttranslatortranslatorwidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnDisconnectNotify(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_UpdateMicroFocus(TextTranslator__TranslatorWidget* self) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->updateMicroFocus();
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperUpdateMicroFocus(TextTranslator__TranslatorWidget* self) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_UpdateMicroFocus_IsBase(true);
        vtexttranslatortranslatorwidget->updateMicroFocus();
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnUpdateMicroFocus(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_Create(TextTranslator__TranslatorWidget* self) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->create();
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->create();
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperCreate(TextTranslator__TranslatorWidget* self) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_Create_IsBase(true);
        vtexttranslatortranslatorwidget->create();
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnCreate(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_Create_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_Destroy(TextTranslator__TranslatorWidget* self) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->destroy();
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->destroy();
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperDestroy(TextTranslator__TranslatorWidget* self) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_Destroy_IsBase(true);
        vtexttranslatortranslatorwidget->destroy();
    } else {
        ((VirtualTextTranslatorTranslatorWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnDestroy(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_Destroy_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorWidget_FocusNextChild(TextTranslator__TranslatorWidget* self) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        return vtexttranslatortranslatorwidget->focusNextChild();
    } else {
        return ((VirtualTextTranslatorTranslatorWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorWidget_SuperFocusNextChild(TextTranslator__TranslatorWidget* self) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_FocusNextChild_IsBase(true);
        return vtexttranslatortranslatorwidget->focusNextChild();
    } else {
        return ((VirtualTextTranslatorTranslatorWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnFocusNextChild(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_FocusNextChild_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorWidget_FocusPreviousChild(TextTranslator__TranslatorWidget* self) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        return vtexttranslatortranslatorwidget->focusPreviousChild();
    } else {
        return ((VirtualTextTranslatorTranslatorWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorWidget_SuperFocusPreviousChild(TextTranslator__TranslatorWidget* self) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_FocusPreviousChild_IsBase(true);
        return vtexttranslatortranslatorwidget->focusPreviousChild();
    } else {
        return ((VirtualTextTranslatorTranslatorWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnFocusPreviousChild(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextTranslator__TranslatorWidget_Sender(const TextTranslator__TranslatorWidget* self) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        return vtexttranslatortranslatorwidget->sender();
    } else {
        return ((VirtualTextTranslatorTranslatorWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextTranslator__TranslatorWidget_SuperSender(const TextTranslator__TranslatorWidget* self) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_Sender_IsBase(true);
        return vtexttranslatortranslatorwidget->sender();
    } else {
        return ((VirtualTextTranslatorTranslatorWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnSender(const TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_Sender_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorWidget_SenderSignalIndex(const TextTranslator__TranslatorWidget* self) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        return vtexttranslatortranslatorwidget->senderSignalIndex();
    } else {
        return ((VirtualTextTranslatorTranslatorWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextTranslator__TranslatorWidget_SuperSenderSignalIndex(const TextTranslator__TranslatorWidget* self) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_SenderSignalIndex_IsBase(true);
        return vtexttranslatortranslatorwidget->senderSignalIndex();
    } else {
        return ((VirtualTextTranslatorTranslatorWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnSenderSignalIndex(const TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorWidget_Receivers(const TextTranslator__TranslatorWidget* self, const char* signal) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        return vtexttranslatortranslatorwidget->receivers(signal);
    } else {
        return ((VirtualTextTranslatorTranslatorWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextTranslator__TranslatorWidget_SuperReceivers(const TextTranslator__TranslatorWidget* self, const char* signal) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_Receivers_IsBase(true);
        return vtexttranslatortranslatorwidget->receivers(signal);
    } else {
        return ((VirtualTextTranslatorTranslatorWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnReceivers(const TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_Receivers_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorWidget_IsSignalConnected(const TextTranslator__TranslatorWidget* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        return vtexttranslatortranslatorwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextTranslatorTranslatorWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorWidget_SuperIsSignalConnected(const TextTranslator__TranslatorWidget* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_IsSignalConnected_IsBase(true);
        return vtexttranslatortranslatorwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextTranslatorTranslatorWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnIsSignalConnected(const TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextTranslator__TranslatorWidget_GetDecodedMetricF(const TextTranslator__TranslatorWidget* self, int metricA, int metricB) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        return vtexttranslatortranslatorwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextTranslatorTranslatorWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextTranslator__TranslatorWidget_SuperGetDecodedMetricF(const TextTranslator__TranslatorWidget* self, int metricA, int metricB) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_GetDecodedMetricF_IsBase(true);
        return vtexttranslatortranslatorwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextTranslatorTranslatorWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnGetDecodedMetricF(const TextTranslator__TranslatorWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget && vtexttranslatortranslatorwidget->isVirtualTextTranslatorTranslatorWidget) {
        vtexttranslatortranslatorwidget->setTextTranslator__TranslatorWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void TextTranslator__TranslatorWidget_Delete(TextTranslator__TranslatorWidget* self) {
    delete self;
}
