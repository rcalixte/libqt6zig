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
#include <QWheelEvent>
#include <QWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextAutoCorrectionCore__AutoCorrection
#define WORKAROUND_INNER_CLASS_DEFINITION_TextAutoCorrectionWidgets__AutoCorrectionTextEdit
#include <autocorrectiontextedit.h>
#include "libautocorrectiontextedit.h"
#include "libautocorrectiontextedit.hxx"

TextAutoCorrectionWidgets__AutoCorrectionTextEdit* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_new(QWidget* parent) {
    return new VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit(parent);
}

TextAutoCorrectionWidgets__AutoCorrectionTextEdit* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_new2() {
    return new VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit();
}

QMetaObject* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MetaObject(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Metacast(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Metacall(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

TextAutoCorrectionCore__AutoCorrection* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Autocorrection(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    return self->autocorrection();
}

void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetAutocorrection(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, TextAutoCorrectionCore__AutoCorrection* autocorrect) {
    self->setAutocorrection(autocorrect);
}

void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetAutocorrectionLanguage(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const libqt_string language) {
    QString language_QString = QString::fromUtf8(language.data, language.len);
    self->setAutocorrectionLanguage(language_QString);
}

void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_KeyPressEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QKeyEvent* e) {
    auto* vtextautocorrectionwidgets__autocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgets__autocorrectiontextedit && vtextautocorrectionwidgets__autocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgets__autocorrectiontextedit->keyPressEvent(e);
    }
}

// Base class handler implementation
QMetaObject* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMetaObject(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_MetaObject_IsBase(true);
        return (QMetaObject*)vtextautocorrectionwidgetsautocorrectiontextedit->metaObject();
    } else {
        return (QMetaObject*)self->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMetaObject(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_MetaObject_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMetacast(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const char* param1) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_Metacast_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectiontextedit->qt_metacast(param1);
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMetacast(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_Metacast_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMetacall(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int param1, int param2, void** param3) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_Metacall_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectiontextedit->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMetacall(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_Metacall_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperKeyPressEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QKeyEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_KeyPressEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->keyPressEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnKeyPressEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_KeyPressEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_LoadResource(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int typeVal, const QUrl* name) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        return new QVariant(vtextautocorrectionwidgetsautocorrectiontextedit->loadResource(static_cast<int>(typeVal), *name));
    } else {
        return new QVariant(((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->loadResource(static_cast<int>(typeVal), *name));
    }
}

// Base class handler implementation
QVariant* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperLoadResource(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int typeVal, const QUrl* name) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_LoadResource_IsBase(true);
        return new QVariant(vtextautocorrectionwidgetsautocorrectiontextedit->loadResource(static_cast<int>(typeVal), *name));
    } else {
        return new QVariant(((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->loadResource(static_cast<int>(typeVal), *name));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnLoadResource(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_LoadResource_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_LoadResource_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InputMethodQuery(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int property) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        return new QVariant(vtextautocorrectionwidgetsautocorrectiontextedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    } else {
        return new QVariant(((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    }
}

// Base class handler implementation
QVariant* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperInputMethodQuery(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int property) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_InputMethodQuery_IsBase(true);
        return new QVariant(vtextautocorrectionwidgetsautocorrectiontextedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    } else {
        return new QVariant(((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnInputMethodQuery(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_InputMethodQuery_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Event(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->event(e);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->event(e);
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_Event_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectiontextedit->event(e);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_Event_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_TimerEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QTimerEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->timerEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->timerEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperTimerEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QTimerEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_TimerEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->timerEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnTimerEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_TimerEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_KeyReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QKeyEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->keyReleaseEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperKeyReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QKeyEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_KeyReleaseEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->keyReleaseEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnKeyReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ResizeEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QResizeEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->resizeEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->resizeEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperResizeEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QResizeEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_ResizeEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->resizeEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnResizeEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_ResizeEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_PaintEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QPaintEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->paintEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->paintEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperPaintEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QPaintEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_PaintEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->paintEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnPaintEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_PaintEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MousePressEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMouseEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->mousePressEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->mousePressEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMousePressEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMouseEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_MousePressEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->mousePressEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMousePressEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_MousePressEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MouseMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMouseEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->mouseMoveEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMouseMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMouseEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_MouseMoveEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->mouseMoveEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMouseMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MouseReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMouseEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->mouseReleaseEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMouseReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMouseEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_MouseReleaseEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->mouseReleaseEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMouseReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MouseDoubleClickEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMouseEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->mouseDoubleClickEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->mouseDoubleClickEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMouseDoubleClickEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMouseEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_MouseDoubleClickEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->mouseDoubleClickEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->mouseDoubleClickEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMouseDoubleClickEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusNextPrevChild(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, bool next) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->focusNextPrevChild(next);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperFocusNextPrevChild(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, bool next) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusNextPrevChild_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectiontextedit->focusNextPrevChild(next);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnFocusNextPrevChild(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ContextMenuEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QContextMenuEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->contextMenuEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->contextMenuEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperContextMenuEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QContextMenuEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_ContextMenuEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->contextMenuEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->contextMenuEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnContextMenuEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DragEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QDragEnterEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->dragEnterEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->dragEnterEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDragEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QDragEnterEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_DragEnterEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->dragEnterEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->dragEnterEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnDragEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_DragEnterEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DragLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QDragLeaveEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->dragLeaveEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->dragLeaveEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDragLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QDragLeaveEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_DragLeaveEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->dragLeaveEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->dragLeaveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnDragLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DragMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QDragMoveEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->dragMoveEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->dragMoveEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDragMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QDragMoveEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_DragMoveEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->dragMoveEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->dragMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnDragMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_DragMoveEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DropEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QDropEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->dropEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->dropEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDropEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QDropEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_DropEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->dropEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->dropEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnDropEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_DropEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusInEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QFocusEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->focusInEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->focusInEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperFocusInEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QFocusEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusInEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->focusInEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnFocusInEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusInEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusOutEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QFocusEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->focusOutEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->focusOutEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperFocusOutEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QFocusEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusOutEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->focusOutEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnFocusOutEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusOutEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ShowEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QShowEvent* param1) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->showEvent(param1);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperShowEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QShowEvent* param1) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_ShowEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->showEvent(param1);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnShowEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_ShowEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ChangeEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->changeEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperChangeEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_ChangeEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->changeEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnChangeEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_ChangeEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_WheelEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QWheelEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->wheelEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->wheelEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperWheelEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QWheelEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_WheelEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->wheelEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnWheelEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_WheelEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_CreateMimeDataFromSelection(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->createMimeDataFromSelection();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->createMimeDataFromSelection();
    }
}

// Base class handler implementation
QMimeData* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperCreateMimeDataFromSelection(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_CreateMimeDataFromSelection_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectiontextedit->createMimeDataFromSelection();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->createMimeDataFromSelection();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnCreateMimeDataFromSelection(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_CreateMimeDataFromSelection_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_CreateMimeDataFromSelection_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_CanInsertFromMimeData(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const QMimeData* source) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->canInsertFromMimeData(source);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->canInsertFromMimeData(source);
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperCanInsertFromMimeData(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const QMimeData* source) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_CanInsertFromMimeData_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectiontextedit->canInsertFromMimeData(source);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->canInsertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnCanInsertFromMimeData(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_CanInsertFromMimeData_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_CanInsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InsertFromMimeData(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const QMimeData* source) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->insertFromMimeData(source);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->insertFromMimeData(source);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperInsertFromMimeData(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const QMimeData* source) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_InsertFromMimeData_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->insertFromMimeData(source);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->insertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnInsertFromMimeData(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_InsertFromMimeData_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InputMethodEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QInputMethodEvent* param1) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->inputMethodEvent(param1);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperInputMethodEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QInputMethodEvent* param1) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_InputMethodEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->inputMethodEvent(param1);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnInputMethodEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_InputMethodEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ScrollContentsBy(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int dx, int dy) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperScrollContentsBy(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int dx, int dy) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_ScrollContentsBy_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnScrollContentsBy(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_ScrollContentsBy_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DoSetTextCursor(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const QTextCursor* cursor) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->doSetTextCursor(*cursor);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->doSetTextCursor(*cursor);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDoSetTextCursor(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const QTextCursor* cursor) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_DoSetTextCursor_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->doSetTextCursor(*cursor);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->doSetTextCursor(*cursor);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnDoSetTextCursor(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_DoSetTextCursor_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DoSetTextCursor_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MinimumSizeHint(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        return new QSize(vtextautocorrectionwidgetsautocorrectiontextedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMinimumSizeHint(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_MinimumSizeHint_IsBase(true);
        return new QSize(vtextautocorrectionwidgetsautocorrectiontextedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMinimumSizeHint(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SizeHint(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        return new QSize(vtextautocorrectionwidgetsautocorrectiontextedit->sizeHint());
    } else {
        return new QSize(((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperSizeHint(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_SizeHint_IsBase(true);
        return new QSize(vtextautocorrectionwidgetsautocorrectiontextedit->sizeHint());
    } else {
        return new QSize(((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnSizeHint(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_SizeHint_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetupViewport(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QWidget* viewport) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setupViewport(viewport);
    } else {
        self->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::setupViewport(viewport);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperSetupViewport(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QWidget* viewport) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetupViewport_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->setupViewport(viewport);
    } else {
        self->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnSetupViewport(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetupViewport_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_EventFilter(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QObject* param1, QEvent* param2) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->eventFilter(param1, param2);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperEventFilter(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QObject* param1, QEvent* param2) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_EventFilter_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectiontextedit->eventFilter(param1, param2);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnEventFilter(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_EventFilter_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ViewportEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEvent* param1) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->viewportEvent(param1);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->viewportEvent(param1);
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperViewportEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEvent* param1) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_ViewportEvent_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectiontextedit->viewportEvent(param1);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->viewportEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnViewportEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_ViewportEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ViewportSizeHint(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        return new QSize(vtextautocorrectionwidgetsautocorrectiontextedit->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperViewportSizeHint(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_ViewportSizeHint_IsBase(true);
        return new QSize(vtextautocorrectionwidgetsautocorrectiontextedit->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnViewportSizeHint(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_ViewportSizeHint_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InitStyleOption(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QStyleOptionFrame* option) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->initStyleOption(option);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperInitStyleOption(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QStyleOptionFrame* option) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_InitStyleOption_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->initStyleOption(option);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnInitStyleOption(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_InitStyleOption_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DevType(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->devType();
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::devType();
    }
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDevType(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_DevType_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectiontextedit->devType();
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnDevType(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_DevType_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetVisible(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, bool visible) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setVisible(visible);
    } else {
        self->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::setVisible(visible);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperSetVisible(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, bool visible) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetVisible_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->setVisible(visible);
    } else {
        self->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnSetVisible(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetVisible_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionTextEdit_HeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int param1) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperHeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int param1) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_HeightForWidth_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectiontextedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnHeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_HeightForWidth_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_HasHeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->hasHeightForWidth();
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperHasHeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_HasHeightForWidth_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectiontextedit->hasHeightForWidth();
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnHasHeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_PaintEngine(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->paintEngine();
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperPaintEngine(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_PaintEngine_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectiontextedit->paintEngine();
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnPaintEngine(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_PaintEngine_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_EnterEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEnterEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->enterEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEnterEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_EnterEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->enterEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_EnterEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_LeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->leaveEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_LeaveEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->leaveEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_LeaveEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MoveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMoveEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->moveEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMoveEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_MoveEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->moveEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_MoveEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_CloseEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QCloseEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->closeEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperCloseEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QCloseEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_CloseEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->closeEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnCloseEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_CloseEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_TabletEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QTabletEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->tabletEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperTabletEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QTabletEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_TabletEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->tabletEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnTabletEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_TabletEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ActionEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QActionEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->actionEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperActionEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QActionEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_ActionEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->actionEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnActionEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_ActionEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_HideEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QHideEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->hideEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperHideEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QHideEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_HideEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->hideEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnHideEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_HideEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_NativeEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperNativeEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_NativeEvent_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectiontextedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnNativeEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_NativeEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Metric(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int param1) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMetric(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int param1) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_Metric_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectiontextedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMetric(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_Metric_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InitPainter(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QPainter* painter) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->initPainter(painter);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperInitPainter(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QPainter* painter) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_InitPainter_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->initPainter(painter);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnInitPainter(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_InitPainter_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Redirected(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QPoint* offset) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->redirected(offset);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperRedirected(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QPoint* offset) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_Redirected_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectiontextedit->redirected(offset);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnRedirected(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_Redirected_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SharedPainter(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->sharedPainter();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperSharedPainter(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_SharedPainter_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectiontextedit->sharedPainter();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnSharedPainter(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_SharedPainter_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ChildEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QChildEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->childEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperChildEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QChildEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_ChildEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->childEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnChildEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_ChildEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_CustomEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->customEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperCustomEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_CustomEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->customEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnCustomEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_CustomEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ConnectNotify(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const QMetaMethod* signal) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->connectNotify(*signal);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperConnectNotify(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const QMetaMethod* signal) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_ConnectNotify_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->connectNotify(*signal);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnConnectNotify(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_ConnectNotify_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DisconnectNotify(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const QMetaMethod* signal) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->disconnectNotify(*signal);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDisconnectNotify(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const QMetaMethod* signal) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_DisconnectNotify_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->disconnectNotify(*signal);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnDisconnectNotify(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_DisconnectNotify_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ZoomInF(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, float range) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->zoomInF(static_cast<float>(range));
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->zoomInF(static_cast<float>(range));
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperZoomInF(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, float range) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_ZoomInF_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->zoomInF(static_cast<float>(range));
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->zoomInF(static_cast<float>(range));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnZoomInF(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_ZoomInF_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ZoomInF_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetViewportMargins(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int left, int top, int right, int bottom) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperSetViewportMargins(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int left, int top, int right, int bottom) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetViewportMargins_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnSetViewportMargins(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetViewportMargins_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ViewportMargins(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        return new QMargins(vtextautocorrectionwidgetsautocorrectiontextedit->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperViewportMargins(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_ViewportMargins_IsBase(true);
        return new QMargins(vtextautocorrectionwidgetsautocorrectiontextedit->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnViewportMargins(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_ViewportMargins_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DrawFrame(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QPainter* param1) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->drawFrame(param1);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDrawFrame(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QPainter* param1) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_DrawFrame_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->drawFrame(param1);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnDrawFrame(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_DrawFrame_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_UpdateMicroFocus(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->updateMicroFocus();
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperUpdateMicroFocus(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_UpdateMicroFocus_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->updateMicroFocus();
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnUpdateMicroFocus(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Create(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->create();
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->create();
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperCreate(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_Create_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->create();
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnCreate(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_Create_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Destroy(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->destroy();
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->destroy();
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDestroy(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_Destroy_IsBase(true);
        vtextautocorrectionwidgetsautocorrectiontextedit->destroy();
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnDestroy(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_Destroy_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusNextChild(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->focusNextChild();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperFocusNextChild(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusNextChild_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectiontextedit->focusNextChild();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnFocusNextChild(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusNextChild_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusPreviousChild(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->focusPreviousChild();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperFocusPreviousChild(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusPreviousChild_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectiontextedit->focusPreviousChild();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnFocusPreviousChild(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Sender(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->sender();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperSender(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_Sender_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectiontextedit->sender();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnSender(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_Sender_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SenderSignalIndex(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->senderSignalIndex();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperSenderSignalIndex(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_SenderSignalIndex_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectiontextedit->senderSignalIndex();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnSenderSignalIndex(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Receivers(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const char* signal) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->receivers(signal);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperReceivers(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const char* signal) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_Receivers_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectiontextedit->receivers(signal);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnReceivers(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_Receivers_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_IsSignalConnected(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const QMetaMethod* signal) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->isSignalConnected(*signal);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperIsSignalConnected(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const QMetaMethod* signal) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_IsSignalConnected_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectiontextedit->isSignalConnected(*signal);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnIsSignalConnected(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_IsSignalConnected_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextAutoCorrectionWidgets__AutoCorrectionTextEdit_GetDecodedMetricF(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int metricA, int metricB) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperGetDecodedMetricF(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int metricA, int metricB) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_GetDecodedMetricF_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectiontextedit->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnGetDecodedMetricF(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit && vtextautocorrectionwidgetsautocorrectiontextedit->isVirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->setTextAutoCorrectionWidgets__AutoCorrectionTextEdit_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_GetDecodedMetricF_Callback>(slot));
    }
}

void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Delete(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    delete self;
}
