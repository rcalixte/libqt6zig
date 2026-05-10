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
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPlainTextEdit>
#include <QPoint>
#include <QRegularExpression>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextCustomEditor__PlainTextEditFindBar
#define WORKAROUND_INNER_CLASS_DEFINITION_TextCustomEditor__TextEditFindBarBase
#include <plaintexteditfindbar.h>
#include "libplaintexteditfindbar.h"
#include "libplaintexteditfindbar.hxx"

TextCustomEditor__PlainTextEditFindBar* TextCustomEditor__PlainTextEditFindBar_new(QPlainTextEdit* view) {
    return new VirtualTextCustomEditorPlainTextEditFindBar(view);
}

TextCustomEditor__PlainTextEditFindBar* TextCustomEditor__PlainTextEditFindBar_new2(QPlainTextEdit* view, QWidget* parent) {
    return new VirtualTextCustomEditorPlainTextEditFindBar(view, parent);
}

QMetaObject* TextCustomEditor__PlainTextEditFindBar_MetaObject(const TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditor__plaintexteditfindbar = dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditor__plaintexteditfindbar && vtextcustomeditor__plaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualTextCustomEditorPlainTextEditFindBar*)self)->metaObject();
    }
}

void* TextCustomEditor__PlainTextEditFindBar_Metacast(TextCustomEditor__PlainTextEditFindBar* self, const char* param1) {
    auto* vtextcustomeditor__plaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditor__plaintexteditfindbar && vtextcustomeditor__plaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->qt_metacast(param1);
    }
}

int TextCustomEditor__PlainTextEditFindBar_Metacall(TextCustomEditor__PlainTextEditFindBar* self, int param1, int param2, void** param3) {
    auto* vtextcustomeditor__plaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditor__plaintexteditfindbar && vtextcustomeditor__plaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

bool TextCustomEditor__PlainTextEditFindBar_ViewIsReadOnly(const TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditor__plaintexteditfindbar = dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditor__plaintexteditfindbar && vtextcustomeditor__plaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        return vtextcustomeditor__plaintexteditfindbar->viewIsReadOnly();
    }
    return {};
}

bool TextCustomEditor__PlainTextEditFindBar_DocumentIsEmpty(const TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditor__plaintexteditfindbar = dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditor__plaintexteditfindbar && vtextcustomeditor__plaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        return vtextcustomeditor__plaintexteditfindbar->documentIsEmpty();
    }
    return {};
}

bool TextCustomEditor__PlainTextEditFindBar_SearchInDocument(TextCustomEditor__PlainTextEditFindBar* self, const libqt_string text, int searchOptions) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vtextcustomeditor__plaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditor__plaintexteditfindbar && vtextcustomeditor__plaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        return vtextcustomeditor__plaintexteditfindbar->searchInDocument(text_QString, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    }
    return {};
}

bool TextCustomEditor__PlainTextEditFindBar_SearchInDocument2(TextCustomEditor__PlainTextEditFindBar* self, const QRegularExpression* regExp, int searchOptions) {
    auto* vtextcustomeditor__plaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditor__plaintexteditfindbar && vtextcustomeditor__plaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        return vtextcustomeditor__plaintexteditfindbar->searchInDocument(*regExp, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    }
    return {};
}

void TextCustomEditor__PlainTextEditFindBar_AutoSearchMoveCursor(TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditor__plaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditor__plaintexteditfindbar && vtextcustomeditor__plaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditor__plaintexteditfindbar->autoSearchMoveCursor();
    }
}

void TextCustomEditor__PlainTextEditFindBar_SlotSearchText(TextCustomEditor__PlainTextEditFindBar* self, bool backward, bool isAutoSearch) {
    auto* vtextcustomeditor__plaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditor__plaintexteditfindbar && vtextcustomeditor__plaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        self->slotSearchText(backward, isAutoSearch);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->slotSearchText(backward, isAutoSearch);
    }
}

// Base class handler implementation
QMetaObject* TextCustomEditor__PlainTextEditFindBar_SuperMetaObject(const TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_MetaObject_IsBase(true);
        return (QMetaObject*)vtextcustomeditorplaintexteditfindbar->metaObject();
    } else {
        return (QMetaObject*)self->TextCustomEditor::PlainTextEditFindBar::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnMetaObject(const TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_MetaObject_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextCustomEditor__PlainTextEditFindBar_SuperMetacast(TextCustomEditor__PlainTextEditFindBar* self, const char* param1) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_Metacast_IsBase(true);
        return vtextcustomeditorplaintexteditfindbar->qt_metacast(param1);
    } else {
        return self->TextCustomEditor::PlainTextEditFindBar::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnMetacast(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_Metacast_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditFindBar_SuperMetacall(TextCustomEditor__PlainTextEditFindBar* self, int param1, int param2, void** param3) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_Metacall_IsBase(true);
        return vtextcustomeditorplaintexteditfindbar->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextCustomEditor::PlainTextEditFindBar::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnMetacall(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_Metacall_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_SuperViewIsReadOnly(const TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_ViewIsReadOnly_IsBase(true);
        return vtextcustomeditorplaintexteditfindbar->viewIsReadOnly();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->viewIsReadOnly();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnViewIsReadOnly(const TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_ViewIsReadOnly_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_ViewIsReadOnly_Callback>(slot));
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_SuperDocumentIsEmpty(const TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_DocumentIsEmpty_IsBase(true);
        return vtextcustomeditorplaintexteditfindbar->documentIsEmpty();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->documentIsEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnDocumentIsEmpty(const TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_DocumentIsEmpty_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_DocumentIsEmpty_Callback>(slot));
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_SuperSearchInDocument(TextCustomEditor__PlainTextEditFindBar* self, const libqt_string text, int searchOptions) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_SearchInDocument_IsBase(true);
        return vtextcustomeditorplaintexteditfindbar->searchInDocument(text_QString, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->searchInDocument(text_QString, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnSearchInDocument(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_SearchInDocument_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_SearchInDocument_Callback>(slot));
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_SuperSearchInDocument2(TextCustomEditor__PlainTextEditFindBar* self, const QRegularExpression* regExp, int searchOptions) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_SearchInDocument2_IsBase(true);
        return vtextcustomeditorplaintexteditfindbar->searchInDocument(*regExp, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->searchInDocument(*regExp, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnSearchInDocument2(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_SearchInDocument2_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_SearchInDocument2_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperAutoSearchMoveCursor(TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_AutoSearchMoveCursor_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->autoSearchMoveCursor();
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->autoSearchMoveCursor();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnAutoSearchMoveCursor(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_AutoSearchMoveCursor_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_AutoSearchMoveCursor_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperSlotSearchText(TextCustomEditor__PlainTextEditFindBar* self, bool backward, bool isAutoSearch) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_SlotSearchText_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->slotSearchText(backward, isAutoSearch);
    } else {
        self->TextCustomEditor::PlainTextEditFindBar::slotSearchText(backward, isAutoSearch);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnSlotSearchText(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_SlotSearchText_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_SlotSearchText_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_Event(TextCustomEditor__PlainTextEditFindBar* self, QEvent* e) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        return vtextcustomeditorplaintexteditfindbar->event(e);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->event(e);
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_SuperEvent(TextCustomEditor__PlainTextEditFindBar* self, QEvent* e) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_Event_IsBase(true);
        return vtextcustomeditorplaintexteditfindbar->event(e);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_Event_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_Event_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__PlainTextEditFindBar_DevType(const TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        return vtextcustomeditorplaintexteditfindbar->devType();
    } else {
        return self->TextCustomEditor::PlainTextEditFindBar::devType();
    }
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditFindBar_SuperDevType(const TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_DevType_IsBase(true);
        return vtextcustomeditorplaintexteditfindbar->devType();
    } else {
        return self->TextCustomEditor::PlainTextEditFindBar::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnDevType(const TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_DevType_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SetVisible(TextCustomEditor__PlainTextEditFindBar* self, bool visible) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setVisible(visible);
    } else {
        self->TextCustomEditor::PlainTextEditFindBar::setVisible(visible);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperSetVisible(TextCustomEditor__PlainTextEditFindBar* self, bool visible) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_SetVisible_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->setVisible(visible);
    } else {
        self->TextCustomEditor::PlainTextEditFindBar::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnSetVisible(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_SetVisible_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextCustomEditor__PlainTextEditFindBar_SizeHint(const TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        return new QSize(vtextcustomeditorplaintexteditfindbar->sizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorPlainTextEditFindBar*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextCustomEditor__PlainTextEditFindBar_SuperSizeHint(const TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_SizeHint_IsBase(true);
        return new QSize(vtextcustomeditorplaintexteditfindbar->sizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorPlainTextEditFindBar*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnSizeHint(const TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_SizeHint_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextCustomEditor__PlainTextEditFindBar_MinimumSizeHint(const TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        return new QSize(vtextcustomeditorplaintexteditfindbar->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorPlainTextEditFindBar*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextCustomEditor__PlainTextEditFindBar_SuperMinimumSizeHint(const TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_MinimumSizeHint_IsBase(true);
        return new QSize(vtextcustomeditorplaintexteditfindbar->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorPlainTextEditFindBar*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnMinimumSizeHint(const TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__PlainTextEditFindBar_HeightForWidth(const TextCustomEditor__PlainTextEditFindBar* self, int param1) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        return vtextcustomeditorplaintexteditfindbar->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextCustomEditor::PlainTextEditFindBar::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditFindBar_SuperHeightForWidth(const TextCustomEditor__PlainTextEditFindBar* self, int param1) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_HeightForWidth_IsBase(true);
        return vtextcustomeditorplaintexteditfindbar->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextCustomEditor::PlainTextEditFindBar::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnHeightForWidth(const TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_HeightForWidth_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_HasHeightForWidth(const TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        return vtextcustomeditorplaintexteditfindbar->hasHeightForWidth();
    } else {
        return self->TextCustomEditor::PlainTextEditFindBar::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_SuperHasHeightForWidth(const TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_HasHeightForWidth_IsBase(true);
        return vtextcustomeditorplaintexteditfindbar->hasHeightForWidth();
    } else {
        return self->TextCustomEditor::PlainTextEditFindBar::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnHasHeightForWidth(const TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextCustomEditor__PlainTextEditFindBar_PaintEngine(const TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        return vtextcustomeditorplaintexteditfindbar->paintEngine();
    } else {
        return self->TextCustomEditor::PlainTextEditFindBar::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextCustomEditor__PlainTextEditFindBar_SuperPaintEngine(const TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_PaintEngine_IsBase(true);
        return vtextcustomeditorplaintexteditfindbar->paintEngine();
    } else {
        return self->TextCustomEditor::PlainTextEditFindBar::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnPaintEngine(const TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_PaintEngine_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_MousePressEvent(TextCustomEditor__PlainTextEditFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->mousePressEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperMousePressEvent(TextCustomEditor__PlainTextEditFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_MousePressEvent_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->mousePressEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnMousePressEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_MousePressEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_MouseReleaseEvent(TextCustomEditor__PlainTextEditFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->mouseReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperMouseReleaseEvent(TextCustomEditor__PlainTextEditFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_MouseReleaseEvent_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->mouseReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnMouseReleaseEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_MouseDoubleClickEvent(TextCustomEditor__PlainTextEditFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperMouseDoubleClickEvent(TextCustomEditor__PlainTextEditFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_MouseDoubleClickEvent_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnMouseDoubleClickEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_MouseMoveEvent(TextCustomEditor__PlainTextEditFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->mouseMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperMouseMoveEvent(TextCustomEditor__PlainTextEditFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_MouseMoveEvent_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->mouseMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnMouseMoveEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_WheelEvent(TextCustomEditor__PlainTextEditFindBar* self, QWheelEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->wheelEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperWheelEvent(TextCustomEditor__PlainTextEditFindBar* self, QWheelEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_WheelEvent_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->wheelEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnWheelEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_WheelEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_KeyPressEvent(TextCustomEditor__PlainTextEditFindBar* self, QKeyEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->keyPressEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperKeyPressEvent(TextCustomEditor__PlainTextEditFindBar* self, QKeyEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_KeyPressEvent_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->keyPressEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnKeyPressEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_KeyPressEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_KeyReleaseEvent(TextCustomEditor__PlainTextEditFindBar* self, QKeyEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->keyReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperKeyReleaseEvent(TextCustomEditor__PlainTextEditFindBar* self, QKeyEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_KeyReleaseEvent_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->keyReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnKeyReleaseEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_FocusInEvent(TextCustomEditor__PlainTextEditFindBar* self, QFocusEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->focusInEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperFocusInEvent(TextCustomEditor__PlainTextEditFindBar* self, QFocusEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_FocusInEvent_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->focusInEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnFocusInEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_FocusInEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_FocusOutEvent(TextCustomEditor__PlainTextEditFindBar* self, QFocusEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->focusOutEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperFocusOutEvent(TextCustomEditor__PlainTextEditFindBar* self, QFocusEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_FocusOutEvent_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->focusOutEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnFocusOutEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_FocusOutEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_EnterEvent(TextCustomEditor__PlainTextEditFindBar* self, QEnterEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->enterEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperEnterEvent(TextCustomEditor__PlainTextEditFindBar* self, QEnterEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_EnterEvent_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->enterEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnEnterEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_EnterEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_LeaveEvent(TextCustomEditor__PlainTextEditFindBar* self, QEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->leaveEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperLeaveEvent(TextCustomEditor__PlainTextEditFindBar* self, QEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_LeaveEvent_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->leaveEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnLeaveEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_LeaveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_PaintEvent(TextCustomEditor__PlainTextEditFindBar* self, QPaintEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->paintEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperPaintEvent(TextCustomEditor__PlainTextEditFindBar* self, QPaintEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_PaintEvent_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->paintEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnPaintEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_PaintEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_MoveEvent(TextCustomEditor__PlainTextEditFindBar* self, QMoveEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->moveEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperMoveEvent(TextCustomEditor__PlainTextEditFindBar* self, QMoveEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_MoveEvent_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->moveEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnMoveEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_MoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_ResizeEvent(TextCustomEditor__PlainTextEditFindBar* self, QResizeEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->resizeEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperResizeEvent(TextCustomEditor__PlainTextEditFindBar* self, QResizeEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_ResizeEvent_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->resizeEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnResizeEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_ResizeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_CloseEvent(TextCustomEditor__PlainTextEditFindBar* self, QCloseEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->closeEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperCloseEvent(TextCustomEditor__PlainTextEditFindBar* self, QCloseEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_CloseEvent_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->closeEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnCloseEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_CloseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_ContextMenuEvent(TextCustomEditor__PlainTextEditFindBar* self, QContextMenuEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->contextMenuEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperContextMenuEvent(TextCustomEditor__PlainTextEditFindBar* self, QContextMenuEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_ContextMenuEvent_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->contextMenuEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnContextMenuEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_TabletEvent(TextCustomEditor__PlainTextEditFindBar* self, QTabletEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->tabletEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperTabletEvent(TextCustomEditor__PlainTextEditFindBar* self, QTabletEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_TabletEvent_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->tabletEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnTabletEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_TabletEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_ActionEvent(TextCustomEditor__PlainTextEditFindBar* self, QActionEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->actionEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperActionEvent(TextCustomEditor__PlainTextEditFindBar* self, QActionEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_ActionEvent_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->actionEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnActionEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_ActionEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_DragEnterEvent(TextCustomEditor__PlainTextEditFindBar* self, QDragEnterEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->dragEnterEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperDragEnterEvent(TextCustomEditor__PlainTextEditFindBar* self, QDragEnterEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_DragEnterEvent_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->dragEnterEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnDragEnterEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_DragEnterEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_DragMoveEvent(TextCustomEditor__PlainTextEditFindBar* self, QDragMoveEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->dragMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperDragMoveEvent(TextCustomEditor__PlainTextEditFindBar* self, QDragMoveEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_DragMoveEvent_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->dragMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnDragMoveEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_DragMoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_DragLeaveEvent(TextCustomEditor__PlainTextEditFindBar* self, QDragLeaveEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->dragLeaveEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperDragLeaveEvent(TextCustomEditor__PlainTextEditFindBar* self, QDragLeaveEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_DragLeaveEvent_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->dragLeaveEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnDragLeaveEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_DropEvent(TextCustomEditor__PlainTextEditFindBar* self, QDropEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->dropEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperDropEvent(TextCustomEditor__PlainTextEditFindBar* self, QDropEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_DropEvent_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->dropEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnDropEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_DropEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_ShowEvent(TextCustomEditor__PlainTextEditFindBar* self, QShowEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->showEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->showEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperShowEvent(TextCustomEditor__PlainTextEditFindBar* self, QShowEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_ShowEvent_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->showEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnShowEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_ShowEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_HideEvent(TextCustomEditor__PlainTextEditFindBar* self, QHideEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->hideEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperHideEvent(TextCustomEditor__PlainTextEditFindBar* self, QHideEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_HideEvent_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->hideEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnHideEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_HideEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_NativeEvent(TextCustomEditor__PlainTextEditFindBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        return vtextcustomeditorplaintexteditfindbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_SuperNativeEvent(TextCustomEditor__PlainTextEditFindBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_NativeEvent_IsBase(true);
        return vtextcustomeditorplaintexteditfindbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnNativeEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_NativeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_ChangeEvent(TextCustomEditor__PlainTextEditFindBar* self, QEvent* param1) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->changeEvent(param1);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperChangeEvent(TextCustomEditor__PlainTextEditFindBar* self, QEvent* param1) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_ChangeEvent_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->changeEvent(param1);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnChangeEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_ChangeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__PlainTextEditFindBar_Metric(const TextCustomEditor__PlainTextEditFindBar* self, int param1) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        return vtextcustomeditorplaintexteditfindbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditFindBar_SuperMetric(const TextCustomEditor__PlainTextEditFindBar* self, int param1) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_Metric_IsBase(true);
        return vtextcustomeditorplaintexteditfindbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnMetric(const TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_Metric_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_InitPainter(const TextCustomEditor__PlainTextEditFindBar* self, QPainter* painter) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->initPainter(painter);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperInitPainter(const TextCustomEditor__PlainTextEditFindBar* self, QPainter* painter) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_InitPainter_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->initPainter(painter);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnInitPainter(const TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_InitPainter_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextCustomEditor__PlainTextEditFindBar_Redirected(const TextCustomEditor__PlainTextEditFindBar* self, QPoint* offset) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        return vtextcustomeditorplaintexteditfindbar->redirected(offset);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextCustomEditor__PlainTextEditFindBar_SuperRedirected(const TextCustomEditor__PlainTextEditFindBar* self, QPoint* offset) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_Redirected_IsBase(true);
        return vtextcustomeditorplaintexteditfindbar->redirected(offset);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnRedirected(const TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_Redirected_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextCustomEditor__PlainTextEditFindBar_SharedPainter(const TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        return vtextcustomeditorplaintexteditfindbar->sharedPainter();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextCustomEditor__PlainTextEditFindBar_SuperSharedPainter(const TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_SharedPainter_IsBase(true);
        return vtextcustomeditorplaintexteditfindbar->sharedPainter();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnSharedPainter(const TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_SharedPainter_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_InputMethodEvent(TextCustomEditor__PlainTextEditFindBar* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->inputMethodEvent(param1);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperInputMethodEvent(TextCustomEditor__PlainTextEditFindBar* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_InputMethodEvent_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->inputMethodEvent(param1);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnInputMethodEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_InputMethodEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextCustomEditor__PlainTextEditFindBar_InputMethodQuery(const TextCustomEditor__PlainTextEditFindBar* self, int param1) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        return new QVariant(vtextcustomeditorplaintexteditfindbar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextCustomEditorPlainTextEditFindBar*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* TextCustomEditor__PlainTextEditFindBar_SuperInputMethodQuery(const TextCustomEditor__PlainTextEditFindBar* self, int param1) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_InputMethodQuery_IsBase(true);
        return new QVariant(vtextcustomeditorplaintexteditfindbar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextCustomEditorPlainTextEditFindBar*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnInputMethodQuery(const TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_InputMethodQuery_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_FocusNextPrevChild(TextCustomEditor__PlainTextEditFindBar* self, bool next) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        return vtextcustomeditorplaintexteditfindbar->focusNextPrevChild(next);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_SuperFocusNextPrevChild(TextCustomEditor__PlainTextEditFindBar* self, bool next) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_FocusNextPrevChild_IsBase(true);
        return vtextcustomeditorplaintexteditfindbar->focusNextPrevChild(next);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnFocusNextPrevChild(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_EventFilter(TextCustomEditor__PlainTextEditFindBar* self, QObject* watched, QEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        return vtextcustomeditorplaintexteditfindbar->eventFilter(watched, event);
    } else {
        return self->TextCustomEditor::PlainTextEditFindBar::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_SuperEventFilter(TextCustomEditor__PlainTextEditFindBar* self, QObject* watched, QEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_EventFilter_IsBase(true);
        return vtextcustomeditorplaintexteditfindbar->eventFilter(watched, event);
    } else {
        return self->TextCustomEditor::PlainTextEditFindBar::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnEventFilter(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_EventFilter_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_TimerEvent(TextCustomEditor__PlainTextEditFindBar* self, QTimerEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->timerEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperTimerEvent(TextCustomEditor__PlainTextEditFindBar* self, QTimerEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_TimerEvent_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->timerEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnTimerEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_TimerEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_ChildEvent(TextCustomEditor__PlainTextEditFindBar* self, QChildEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->childEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperChildEvent(TextCustomEditor__PlainTextEditFindBar* self, QChildEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_ChildEvent_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->childEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnChildEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_ChildEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_CustomEvent(TextCustomEditor__PlainTextEditFindBar* self, QEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->customEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperCustomEvent(TextCustomEditor__PlainTextEditFindBar* self, QEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_CustomEvent_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->customEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnCustomEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_CustomEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_ConnectNotify(TextCustomEditor__PlainTextEditFindBar* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->connectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperConnectNotify(TextCustomEditor__PlainTextEditFindBar* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_ConnectNotify_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->connectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnConnectNotify(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_ConnectNotify_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_DisconnectNotify(TextCustomEditor__PlainTextEditFindBar* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->disconnectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperDisconnectNotify(TextCustomEditor__PlainTextEditFindBar* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_DisconnectNotify_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->disconnectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnDisconnectNotify(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_DisconnectNotify_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_ClearSelections(TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->clearSelections();
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->clearSelections();
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperClearSelections(TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_ClearSelections_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->clearSelections();
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->clearSelections();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnClearSelections(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_ClearSelections_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_ClearSelections_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_SearchText(TextCustomEditor__PlainTextEditFindBar* self, bool backward, bool isAutoSearch) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        return vtextcustomeditorplaintexteditfindbar->searchText(backward, isAutoSearch);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->searchText(backward, isAutoSearch);
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_SuperSearchText(TextCustomEditor__PlainTextEditFindBar* self, bool backward, bool isAutoSearch) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_SearchText_IsBase(true);
        return vtextcustomeditorplaintexteditfindbar->searchText(backward, isAutoSearch);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->searchText(backward, isAutoSearch);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnSearchText(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_SearchText_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_SearchText_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SetFoundMatch(TextCustomEditor__PlainTextEditFindBar* self, bool match) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setFoundMatch(match);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->setFoundMatch(match);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperSetFoundMatch(TextCustomEditor__PlainTextEditFindBar* self, bool match) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_SetFoundMatch_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->setFoundMatch(match);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->setFoundMatch(match);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnSetFoundMatch(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_SetFoundMatch_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_SetFoundMatch_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_MessageInfo(TextCustomEditor__PlainTextEditFindBar* self, bool backward, bool isAutoSearch, bool found) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->messageInfo(backward, isAutoSearch, found);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->messageInfo(backward, isAutoSearch, found);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperMessageInfo(TextCustomEditor__PlainTextEditFindBar* self, bool backward, bool isAutoSearch, bool found) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_MessageInfo_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->messageInfo(backward, isAutoSearch, found);
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->messageInfo(backward, isAutoSearch, found);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnMessageInfo(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_MessageInfo_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_MessageInfo_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_UpdateMicroFocus(TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->updateMicroFocus();
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperUpdateMicroFocus(TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_UpdateMicroFocus_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->updateMicroFocus();
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnUpdateMicroFocus(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_Create(TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->create();
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->create();
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperCreate(TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_Create_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->create();
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnCreate(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_Create_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_Destroy(TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->destroy();
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->destroy();
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperDestroy(TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_Destroy_IsBase(true);
        vtextcustomeditorplaintexteditfindbar->destroy();
    } else {
        ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnDestroy(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_Destroy_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_FocusNextChild(TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        return vtextcustomeditorplaintexteditfindbar->focusNextChild();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_SuperFocusNextChild(TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_FocusNextChild_IsBase(true);
        return vtextcustomeditorplaintexteditfindbar->focusNextChild();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnFocusNextChild(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_FocusNextChild_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_FocusPreviousChild(TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        return vtextcustomeditorplaintexteditfindbar->focusPreviousChild();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_SuperFocusPreviousChild(TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_FocusPreviousChild_IsBase(true);
        return vtextcustomeditorplaintexteditfindbar->focusPreviousChild();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnFocusPreviousChild(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextCustomEditor__PlainTextEditFindBar_Sender(const TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        return vtextcustomeditorplaintexteditfindbar->sender();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextCustomEditor__PlainTextEditFindBar_SuperSender(const TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_Sender_IsBase(true);
        return vtextcustomeditorplaintexteditfindbar->sender();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnSender(const TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_Sender_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__PlainTextEditFindBar_SenderSignalIndex(const TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        return vtextcustomeditorplaintexteditfindbar->senderSignalIndex();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditFindBar_SuperSenderSignalIndex(const TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_SenderSignalIndex_IsBase(true);
        return vtextcustomeditorplaintexteditfindbar->senderSignalIndex();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnSenderSignalIndex(const TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__PlainTextEditFindBar_Receivers(const TextCustomEditor__PlainTextEditFindBar* self, const char* signal) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        return vtextcustomeditorplaintexteditfindbar->receivers(signal);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditFindBar_SuperReceivers(const TextCustomEditor__PlainTextEditFindBar* self, const char* signal) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_Receivers_IsBase(true);
        return vtextcustomeditorplaintexteditfindbar->receivers(signal);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnReceivers(const TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_Receivers_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_IsSignalConnected(const TextCustomEditor__PlainTextEditFindBar* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        return vtextcustomeditorplaintexteditfindbar->isSignalConnected(*signal);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_SuperIsSignalConnected(const TextCustomEditor__PlainTextEditFindBar* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_IsSignalConnected_IsBase(true);
        return vtextcustomeditorplaintexteditfindbar->isSignalConnected(*signal);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnIsSignalConnected(const TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_IsSignalConnected_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextCustomEditor__PlainTextEditFindBar_GetDecodedMetricF(const TextCustomEditor__PlainTextEditFindBar* self, int metricA, int metricB) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        return vtextcustomeditorplaintexteditfindbar->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextCustomEditor__PlainTextEditFindBar_SuperGetDecodedMetricF(const TextCustomEditor__PlainTextEditFindBar* self, int metricA, int metricB) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_GetDecodedMetricF_IsBase(true);
        return vtextcustomeditorplaintexteditfindbar->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextCustomEditorPlainTextEditFindBar*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnGetDecodedMetricF(const TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar && vtextcustomeditorplaintexteditfindbar->isVirtualTextCustomEditorPlainTextEditFindBar) {
        vtextcustomeditorplaintexteditfindbar->setTextCustomEditor__PlainTextEditFindBar_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_GetDecodedMetricF_Callback>(slot));
    }
}

void TextCustomEditor__PlainTextEditFindBar_Delete(TextCustomEditor__PlainTextEditFindBar* self) {
    delete self;
}
