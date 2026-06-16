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
#include <QPoint>
#include <QRegularExpression>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QTabletEvent>
#include <QTextEdit>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextCustomEditor__RichTextEditFindBar
#define WORKAROUND_INNER_CLASS_DEFINITION_TextCustomEditor__TextEditFindBarBase
#include <richtexteditfindbar.h>
#include "librichtexteditfindbar.h"
#include "librichtexteditfindbar.hxx"

TextCustomEditor__RichTextEditFindBar* TextCustomEditor__RichTextEditFindBar_new(QTextEdit* view) {
    return new VirtualTextCustomEditorRichTextEditFindBar(view);
}

TextCustomEditor__RichTextEditFindBar* TextCustomEditor__RichTextEditFindBar_new2(QTextEdit* view, QWidget* parent) {
    return new VirtualTextCustomEditorRichTextEditFindBar(view, parent);
}

QMetaObject* TextCustomEditor__RichTextEditFindBar_MetaObject(const TextCustomEditor__RichTextEditFindBar* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextCustomEditor__RichTextEditFindBar_Metacast(TextCustomEditor__RichTextEditFindBar* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextCustomEditor__RichTextEditFindBar_Metacall(TextCustomEditor__RichTextEditFindBar* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

bool TextCustomEditor__RichTextEditFindBar_ViewIsReadOnly(const TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditor__richtexteditfindbar = dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditor__richtexteditfindbar && vtextcustomeditor__richtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        return vtextcustomeditor__richtexteditfindbar->viewIsReadOnly();
    }
    return {};
}

bool TextCustomEditor__RichTextEditFindBar_DocumentIsEmpty(const TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditor__richtexteditfindbar = dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditor__richtexteditfindbar && vtextcustomeditor__richtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        return vtextcustomeditor__richtexteditfindbar->documentIsEmpty();
    }
    return {};
}

bool TextCustomEditor__RichTextEditFindBar_SearchInDocument(TextCustomEditor__RichTextEditFindBar* self, const libqt_string text, int searchOptions) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vtextcustomeditor__richtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditor__richtexteditfindbar && vtextcustomeditor__richtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        return vtextcustomeditor__richtexteditfindbar->searchInDocument(text_QString, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    }
    return {};
}

bool TextCustomEditor__RichTextEditFindBar_SearchInDocument2(TextCustomEditor__RichTextEditFindBar* self, const QRegularExpression* regExp, int searchOptions) {
    auto* vtextcustomeditor__richtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditor__richtexteditfindbar && vtextcustomeditor__richtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        return vtextcustomeditor__richtexteditfindbar->searchInDocument(*regExp, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    }
    return {};
}

void TextCustomEditor__RichTextEditFindBar_AutoSearchMoveCursor(TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditor__richtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditor__richtexteditfindbar && vtextcustomeditor__richtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditor__richtexteditfindbar->autoSearchMoveCursor();
    }
}

void TextCustomEditor__RichTextEditFindBar_SlotSearchText(TextCustomEditor__RichTextEditFindBar* self, bool backward, bool isAutoSearch) {
    self->slotSearchText(backward, isAutoSearch);
}

// Base class handler implementation
QMetaObject* TextCustomEditor__RichTextEditFindBar_SuperMetaObject(const TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_MetaObject_IsBase(true);
        return (QMetaObject*)vtextcustomeditorrichtexteditfindbar->metaObject();
    } else {
        return (QMetaObject*)self->TextCustomEditor::RichTextEditFindBar::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnMetaObject(const TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_MetaObject_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextCustomEditor__RichTextEditFindBar_SuperMetacast(TextCustomEditor__RichTextEditFindBar* self, const char* param1) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_Metacast_IsBase(true);
        return vtextcustomeditorrichtexteditfindbar->qt_metacast(param1);
    } else {
        return self->TextCustomEditor::RichTextEditFindBar::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnMetacast(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_Metacast_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextEditFindBar_SuperMetacall(TextCustomEditor__RichTextEditFindBar* self, int param1, int param2, void** param3) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_Metacall_IsBase(true);
        return vtextcustomeditorrichtexteditfindbar->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextCustomEditor::RichTextEditFindBar::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnMetacall(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_Metacall_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditFindBar_SuperViewIsReadOnly(const TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_ViewIsReadOnly_IsBase(true);
        return vtextcustomeditorrichtexteditfindbar->viewIsReadOnly();
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->viewIsReadOnly();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnViewIsReadOnly(const TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_ViewIsReadOnly_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_ViewIsReadOnly_Callback>(slot));
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditFindBar_SuperDocumentIsEmpty(const TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_DocumentIsEmpty_IsBase(true);
        return vtextcustomeditorrichtexteditfindbar->documentIsEmpty();
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->documentIsEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnDocumentIsEmpty(const TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_DocumentIsEmpty_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_DocumentIsEmpty_Callback>(slot));
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditFindBar_SuperSearchInDocument(TextCustomEditor__RichTextEditFindBar* self, const libqt_string text, int searchOptions) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_SearchInDocument_IsBase(true);
        return vtextcustomeditorrichtexteditfindbar->searchInDocument(text_QString, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->searchInDocument(text_QString, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnSearchInDocument(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_SearchInDocument_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_SearchInDocument_Callback>(slot));
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditFindBar_SuperSearchInDocument2(TextCustomEditor__RichTextEditFindBar* self, const QRegularExpression* regExp, int searchOptions) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_SearchInDocument2_IsBase(true);
        return vtextcustomeditorrichtexteditfindbar->searchInDocument(*regExp, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->searchInDocument(*regExp, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnSearchInDocument2(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_SearchInDocument2_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_SearchInDocument2_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperAutoSearchMoveCursor(TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_AutoSearchMoveCursor_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->autoSearchMoveCursor();
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->autoSearchMoveCursor();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnAutoSearchMoveCursor(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_AutoSearchMoveCursor_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_AutoSearchMoveCursor_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperSlotSearchText(TextCustomEditor__RichTextEditFindBar* self, bool backward, bool isAutoSearch) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_SlotSearchText_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->slotSearchText(backward, isAutoSearch);
    } else {
        self->TextCustomEditor::RichTextEditFindBar::slotSearchText(backward, isAutoSearch);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnSlotSearchText(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_SlotSearchText_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_SlotSearchText_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditFindBar_Event(TextCustomEditor__RichTextEditFindBar* self, QEvent* e) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        return vtextcustomeditorrichtexteditfindbar->event(e);
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->event(e);
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditFindBar_SuperEvent(TextCustomEditor__RichTextEditFindBar* self, QEvent* e) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_Event_IsBase(true);
        return vtextcustomeditorrichtexteditfindbar->event(e);
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_Event_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_Event_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextEditFindBar_DevType(const TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        return vtextcustomeditorrichtexteditfindbar->devType();
    } else {
        return self->TextCustomEditor::RichTextEditFindBar::devType();
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextEditFindBar_SuperDevType(const TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_DevType_IsBase(true);
        return vtextcustomeditorrichtexteditfindbar->devType();
    } else {
        return self->TextCustomEditor::RichTextEditFindBar::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnDevType(const TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_DevType_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_SetVisible(TextCustomEditor__RichTextEditFindBar* self, bool visible) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setVisible(visible);
    } else {
        self->TextCustomEditor::RichTextEditFindBar::setVisible(visible);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperSetVisible(TextCustomEditor__RichTextEditFindBar* self, bool visible) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_SetVisible_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->setVisible(visible);
    } else {
        self->TextCustomEditor::RichTextEditFindBar::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnSetVisible(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_SetVisible_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextCustomEditor__RichTextEditFindBar_SizeHint(const TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        return new QSize(vtextcustomeditorrichtexteditfindbar->sizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorRichTextEditFindBar*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextCustomEditor__RichTextEditFindBar_SuperSizeHint(const TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_SizeHint_IsBase(true);
        return new QSize(vtextcustomeditorrichtexteditfindbar->sizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorRichTextEditFindBar*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnSizeHint(const TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_SizeHint_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextCustomEditor__RichTextEditFindBar_MinimumSizeHint(const TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        return new QSize(vtextcustomeditorrichtexteditfindbar->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorRichTextEditFindBar*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextCustomEditor__RichTextEditFindBar_SuperMinimumSizeHint(const TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_MinimumSizeHint_IsBase(true);
        return new QSize(vtextcustomeditorrichtexteditfindbar->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorRichTextEditFindBar*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnMinimumSizeHint(const TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextEditFindBar_HeightForWidth(const TextCustomEditor__RichTextEditFindBar* self, int param1) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        return vtextcustomeditorrichtexteditfindbar->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextCustomEditor::RichTextEditFindBar::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextEditFindBar_SuperHeightForWidth(const TextCustomEditor__RichTextEditFindBar* self, int param1) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_HeightForWidth_IsBase(true);
        return vtextcustomeditorrichtexteditfindbar->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextCustomEditor::RichTextEditFindBar::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnHeightForWidth(const TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_HeightForWidth_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditFindBar_HasHeightForWidth(const TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        return vtextcustomeditorrichtexteditfindbar->hasHeightForWidth();
    } else {
        return self->TextCustomEditor::RichTextEditFindBar::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditFindBar_SuperHasHeightForWidth(const TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_HasHeightForWidth_IsBase(true);
        return vtextcustomeditorrichtexteditfindbar->hasHeightForWidth();
    } else {
        return self->TextCustomEditor::RichTextEditFindBar::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnHasHeightForWidth(const TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextCustomEditor__RichTextEditFindBar_PaintEngine(const TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        return vtextcustomeditorrichtexteditfindbar->paintEngine();
    } else {
        return self->TextCustomEditor::RichTextEditFindBar::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextCustomEditor__RichTextEditFindBar_SuperPaintEngine(const TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_PaintEngine_IsBase(true);
        return vtextcustomeditorrichtexteditfindbar->paintEngine();
    } else {
        return self->TextCustomEditor::RichTextEditFindBar::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnPaintEngine(const TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_PaintEngine_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_MousePressEvent(TextCustomEditor__RichTextEditFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->mousePressEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperMousePressEvent(TextCustomEditor__RichTextEditFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_MousePressEvent_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->mousePressEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnMousePressEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_MousePressEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_MouseReleaseEvent(TextCustomEditor__RichTextEditFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->mouseReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperMouseReleaseEvent(TextCustomEditor__RichTextEditFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_MouseReleaseEvent_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->mouseReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnMouseReleaseEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_MouseDoubleClickEvent(TextCustomEditor__RichTextEditFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperMouseDoubleClickEvent(TextCustomEditor__RichTextEditFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_MouseDoubleClickEvent_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnMouseDoubleClickEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_MouseMoveEvent(TextCustomEditor__RichTextEditFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->mouseMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperMouseMoveEvent(TextCustomEditor__RichTextEditFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_MouseMoveEvent_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->mouseMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnMouseMoveEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_WheelEvent(TextCustomEditor__RichTextEditFindBar* self, QWheelEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->wheelEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperWheelEvent(TextCustomEditor__RichTextEditFindBar* self, QWheelEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_WheelEvent_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->wheelEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnWheelEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_WheelEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_KeyPressEvent(TextCustomEditor__RichTextEditFindBar* self, QKeyEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->keyPressEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperKeyPressEvent(TextCustomEditor__RichTextEditFindBar* self, QKeyEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_KeyPressEvent_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->keyPressEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnKeyPressEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_KeyPressEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_KeyReleaseEvent(TextCustomEditor__RichTextEditFindBar* self, QKeyEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->keyReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperKeyReleaseEvent(TextCustomEditor__RichTextEditFindBar* self, QKeyEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_KeyReleaseEvent_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->keyReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnKeyReleaseEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_FocusInEvent(TextCustomEditor__RichTextEditFindBar* self, QFocusEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->focusInEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperFocusInEvent(TextCustomEditor__RichTextEditFindBar* self, QFocusEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_FocusInEvent_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->focusInEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnFocusInEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_FocusInEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_FocusOutEvent(TextCustomEditor__RichTextEditFindBar* self, QFocusEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->focusOutEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperFocusOutEvent(TextCustomEditor__RichTextEditFindBar* self, QFocusEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_FocusOutEvent_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->focusOutEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnFocusOutEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_FocusOutEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_EnterEvent(TextCustomEditor__RichTextEditFindBar* self, QEnterEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->enterEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperEnterEvent(TextCustomEditor__RichTextEditFindBar* self, QEnterEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_EnterEvent_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->enterEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnEnterEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_EnterEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_LeaveEvent(TextCustomEditor__RichTextEditFindBar* self, QEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->leaveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperLeaveEvent(TextCustomEditor__RichTextEditFindBar* self, QEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_LeaveEvent_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->leaveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnLeaveEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_LeaveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_PaintEvent(TextCustomEditor__RichTextEditFindBar* self, QPaintEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->paintEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperPaintEvent(TextCustomEditor__RichTextEditFindBar* self, QPaintEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_PaintEvent_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->paintEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnPaintEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_PaintEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_MoveEvent(TextCustomEditor__RichTextEditFindBar* self, QMoveEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->moveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperMoveEvent(TextCustomEditor__RichTextEditFindBar* self, QMoveEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_MoveEvent_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->moveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnMoveEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_MoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_ResizeEvent(TextCustomEditor__RichTextEditFindBar* self, QResizeEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->resizeEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperResizeEvent(TextCustomEditor__RichTextEditFindBar* self, QResizeEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_ResizeEvent_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->resizeEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnResizeEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_ResizeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_CloseEvent(TextCustomEditor__RichTextEditFindBar* self, QCloseEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->closeEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperCloseEvent(TextCustomEditor__RichTextEditFindBar* self, QCloseEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_CloseEvent_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->closeEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnCloseEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_CloseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_ContextMenuEvent(TextCustomEditor__RichTextEditFindBar* self, QContextMenuEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->contextMenuEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperContextMenuEvent(TextCustomEditor__RichTextEditFindBar* self, QContextMenuEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_ContextMenuEvent_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->contextMenuEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnContextMenuEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_TabletEvent(TextCustomEditor__RichTextEditFindBar* self, QTabletEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->tabletEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperTabletEvent(TextCustomEditor__RichTextEditFindBar* self, QTabletEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_TabletEvent_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->tabletEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnTabletEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_TabletEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_ActionEvent(TextCustomEditor__RichTextEditFindBar* self, QActionEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->actionEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperActionEvent(TextCustomEditor__RichTextEditFindBar* self, QActionEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_ActionEvent_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->actionEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnActionEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_ActionEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_DragEnterEvent(TextCustomEditor__RichTextEditFindBar* self, QDragEnterEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->dragEnterEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperDragEnterEvent(TextCustomEditor__RichTextEditFindBar* self, QDragEnterEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_DragEnterEvent_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->dragEnterEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnDragEnterEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_DragEnterEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_DragMoveEvent(TextCustomEditor__RichTextEditFindBar* self, QDragMoveEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->dragMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperDragMoveEvent(TextCustomEditor__RichTextEditFindBar* self, QDragMoveEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_DragMoveEvent_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->dragMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnDragMoveEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_DragMoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_DragLeaveEvent(TextCustomEditor__RichTextEditFindBar* self, QDragLeaveEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->dragLeaveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperDragLeaveEvent(TextCustomEditor__RichTextEditFindBar* self, QDragLeaveEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_DragLeaveEvent_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->dragLeaveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnDragLeaveEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_DropEvent(TextCustomEditor__RichTextEditFindBar* self, QDropEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->dropEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperDropEvent(TextCustomEditor__RichTextEditFindBar* self, QDropEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_DropEvent_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->dropEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnDropEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_DropEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_ShowEvent(TextCustomEditor__RichTextEditFindBar* self, QShowEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->showEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->showEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperShowEvent(TextCustomEditor__RichTextEditFindBar* self, QShowEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_ShowEvent_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->showEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnShowEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_ShowEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_HideEvent(TextCustomEditor__RichTextEditFindBar* self, QHideEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->hideEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperHideEvent(TextCustomEditor__RichTextEditFindBar* self, QHideEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_HideEvent_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->hideEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnHideEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_HideEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditFindBar_NativeEvent(TextCustomEditor__RichTextEditFindBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        return vtextcustomeditorrichtexteditfindbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditFindBar_SuperNativeEvent(TextCustomEditor__RichTextEditFindBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_NativeEvent_IsBase(true);
        return vtextcustomeditorrichtexteditfindbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnNativeEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_NativeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_ChangeEvent(TextCustomEditor__RichTextEditFindBar* self, QEvent* param1) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->changeEvent(param1);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperChangeEvent(TextCustomEditor__RichTextEditFindBar* self, QEvent* param1) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_ChangeEvent_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->changeEvent(param1);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnChangeEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_ChangeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextEditFindBar_Metric(const TextCustomEditor__RichTextEditFindBar* self, int param1) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        return vtextcustomeditorrichtexteditfindbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextEditFindBar_SuperMetric(const TextCustomEditor__RichTextEditFindBar* self, int param1) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_Metric_IsBase(true);
        return vtextcustomeditorrichtexteditfindbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnMetric(const TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_Metric_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_InitPainter(const TextCustomEditor__RichTextEditFindBar* self, QPainter* painter) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->initPainter(painter);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperInitPainter(const TextCustomEditor__RichTextEditFindBar* self, QPainter* painter) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_InitPainter_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->initPainter(painter);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnInitPainter(const TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_InitPainter_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextCustomEditor__RichTextEditFindBar_Redirected(const TextCustomEditor__RichTextEditFindBar* self, QPoint* offset) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        return vtextcustomeditorrichtexteditfindbar->redirected(offset);
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextCustomEditor__RichTextEditFindBar_SuperRedirected(const TextCustomEditor__RichTextEditFindBar* self, QPoint* offset) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_Redirected_IsBase(true);
        return vtextcustomeditorrichtexteditfindbar->redirected(offset);
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnRedirected(const TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_Redirected_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextCustomEditor__RichTextEditFindBar_SharedPainter(const TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        return vtextcustomeditorrichtexteditfindbar->sharedPainter();
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextCustomEditor__RichTextEditFindBar_SuperSharedPainter(const TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_SharedPainter_IsBase(true);
        return vtextcustomeditorrichtexteditfindbar->sharedPainter();
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnSharedPainter(const TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_SharedPainter_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_InputMethodEvent(TextCustomEditor__RichTextEditFindBar* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->inputMethodEvent(param1);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperInputMethodEvent(TextCustomEditor__RichTextEditFindBar* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_InputMethodEvent_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->inputMethodEvent(param1);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnInputMethodEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_InputMethodEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextCustomEditor__RichTextEditFindBar_InputMethodQuery(const TextCustomEditor__RichTextEditFindBar* self, int param1) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        return new QVariant(vtextcustomeditorrichtexteditfindbar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextCustomEditorRichTextEditFindBar*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* TextCustomEditor__RichTextEditFindBar_SuperInputMethodQuery(const TextCustomEditor__RichTextEditFindBar* self, int param1) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_InputMethodQuery_IsBase(true);
        return new QVariant(vtextcustomeditorrichtexteditfindbar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextCustomEditorRichTextEditFindBar*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnInputMethodQuery(const TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_InputMethodQuery_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditFindBar_FocusNextPrevChild(TextCustomEditor__RichTextEditFindBar* self, bool next) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        return vtextcustomeditorrichtexteditfindbar->focusNextPrevChild(next);
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditFindBar_SuperFocusNextPrevChild(TextCustomEditor__RichTextEditFindBar* self, bool next) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_FocusNextPrevChild_IsBase(true);
        return vtextcustomeditorrichtexteditfindbar->focusNextPrevChild(next);
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnFocusNextPrevChild(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditFindBar_EventFilter(TextCustomEditor__RichTextEditFindBar* self, QObject* watched, QEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        return vtextcustomeditorrichtexteditfindbar->eventFilter(watched, event);
    } else {
        return self->TextCustomEditor::RichTextEditFindBar::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditFindBar_SuperEventFilter(TextCustomEditor__RichTextEditFindBar* self, QObject* watched, QEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_EventFilter_IsBase(true);
        return vtextcustomeditorrichtexteditfindbar->eventFilter(watched, event);
    } else {
        return self->TextCustomEditor::RichTextEditFindBar::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnEventFilter(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_EventFilter_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_TimerEvent(TextCustomEditor__RichTextEditFindBar* self, QTimerEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->timerEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperTimerEvent(TextCustomEditor__RichTextEditFindBar* self, QTimerEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_TimerEvent_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->timerEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnTimerEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_TimerEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_ChildEvent(TextCustomEditor__RichTextEditFindBar* self, QChildEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->childEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperChildEvent(TextCustomEditor__RichTextEditFindBar* self, QChildEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_ChildEvent_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->childEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnChildEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_ChildEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_CustomEvent(TextCustomEditor__RichTextEditFindBar* self, QEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->customEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperCustomEvent(TextCustomEditor__RichTextEditFindBar* self, QEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_CustomEvent_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->customEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnCustomEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_CustomEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_ConnectNotify(TextCustomEditor__RichTextEditFindBar* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->connectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperConnectNotify(TextCustomEditor__RichTextEditFindBar* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_ConnectNotify_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->connectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnConnectNotify(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_ConnectNotify_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_DisconnectNotify(TextCustomEditor__RichTextEditFindBar* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->disconnectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperDisconnectNotify(TextCustomEditor__RichTextEditFindBar* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_DisconnectNotify_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->disconnectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnDisconnectNotify(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_DisconnectNotify_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_ClearSelections(TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->clearSelections();
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->clearSelections();
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperClearSelections(TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_ClearSelections_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->clearSelections();
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->clearSelections();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnClearSelections(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_ClearSelections_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_ClearSelections_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditFindBar_SearchText(TextCustomEditor__RichTextEditFindBar* self, bool backward, bool isAutoSearch) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        return vtextcustomeditorrichtexteditfindbar->searchText(backward, isAutoSearch);
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->searchText(backward, isAutoSearch);
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditFindBar_SuperSearchText(TextCustomEditor__RichTextEditFindBar* self, bool backward, bool isAutoSearch) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_SearchText_IsBase(true);
        return vtextcustomeditorrichtexteditfindbar->searchText(backward, isAutoSearch);
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->searchText(backward, isAutoSearch);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnSearchText(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_SearchText_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_SearchText_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_SetFoundMatch(TextCustomEditor__RichTextEditFindBar* self, bool match) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setFoundMatch(match);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->setFoundMatch(match);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperSetFoundMatch(TextCustomEditor__RichTextEditFindBar* self, bool match) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_SetFoundMatch_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->setFoundMatch(match);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->setFoundMatch(match);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnSetFoundMatch(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_SetFoundMatch_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_SetFoundMatch_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_MessageInfo(TextCustomEditor__RichTextEditFindBar* self, bool backward, bool isAutoSearch, bool found) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->messageInfo(backward, isAutoSearch, found);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->messageInfo(backward, isAutoSearch, found);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperMessageInfo(TextCustomEditor__RichTextEditFindBar* self, bool backward, bool isAutoSearch, bool found) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_MessageInfo_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->messageInfo(backward, isAutoSearch, found);
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->messageInfo(backward, isAutoSearch, found);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnMessageInfo(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_MessageInfo_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_MessageInfo_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_UpdateMicroFocus(TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->updateMicroFocus();
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperUpdateMicroFocus(TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_UpdateMicroFocus_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->updateMicroFocus();
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnUpdateMicroFocus(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_Create(TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->create();
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->create();
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperCreate(TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_Create_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->create();
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnCreate(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_Create_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_Destroy(TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->destroy();
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->destroy();
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperDestroy(TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_Destroy_IsBase(true);
        vtextcustomeditorrichtexteditfindbar->destroy();
    } else {
        ((VirtualTextCustomEditorRichTextEditFindBar*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnDestroy(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_Destroy_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditFindBar_FocusNextChild(TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        return vtextcustomeditorrichtexteditfindbar->focusNextChild();
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditFindBar_SuperFocusNextChild(TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_FocusNextChild_IsBase(true);
        return vtextcustomeditorrichtexteditfindbar->focusNextChild();
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnFocusNextChild(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_FocusNextChild_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditFindBar_FocusPreviousChild(TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        return vtextcustomeditorrichtexteditfindbar->focusPreviousChild();
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditFindBar_SuperFocusPreviousChild(TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_FocusPreviousChild_IsBase(true);
        return vtextcustomeditorrichtexteditfindbar->focusPreviousChild();
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnFocusPreviousChild(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextCustomEditor__RichTextEditFindBar_Sender(const TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        return vtextcustomeditorrichtexteditfindbar->sender();
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextCustomEditor__RichTextEditFindBar_SuperSender(const TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_Sender_IsBase(true);
        return vtextcustomeditorrichtexteditfindbar->sender();
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnSender(const TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_Sender_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextEditFindBar_SenderSignalIndex(const TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        return vtextcustomeditorrichtexteditfindbar->senderSignalIndex();
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextEditFindBar_SuperSenderSignalIndex(const TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_SenderSignalIndex_IsBase(true);
        return vtextcustomeditorrichtexteditfindbar->senderSignalIndex();
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnSenderSignalIndex(const TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextEditFindBar_Receivers(const TextCustomEditor__RichTextEditFindBar* self, const char* signal) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        return vtextcustomeditorrichtexteditfindbar->receivers(signal);
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextEditFindBar_SuperReceivers(const TextCustomEditor__RichTextEditFindBar* self, const char* signal) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_Receivers_IsBase(true);
        return vtextcustomeditorrichtexteditfindbar->receivers(signal);
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnReceivers(const TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_Receivers_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditFindBar_IsSignalConnected(const TextCustomEditor__RichTextEditFindBar* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        return vtextcustomeditorrichtexteditfindbar->isSignalConnected(*signal);
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditFindBar_SuperIsSignalConnected(const TextCustomEditor__RichTextEditFindBar* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_IsSignalConnected_IsBase(true);
        return vtextcustomeditorrichtexteditfindbar->isSignalConnected(*signal);
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnIsSignalConnected(const TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_IsSignalConnected_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextCustomEditor__RichTextEditFindBar_GetDecodedMetricF(const TextCustomEditor__RichTextEditFindBar* self, int metricA, int metricB) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        return vtextcustomeditorrichtexteditfindbar->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextCustomEditor__RichTextEditFindBar_SuperGetDecodedMetricF(const TextCustomEditor__RichTextEditFindBar* self, int metricA, int metricB) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_GetDecodedMetricF_IsBase(true);
        return vtextcustomeditorrichtexteditfindbar->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextCustomEditorRichTextEditFindBar*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnGetDecodedMetricF(const TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar && vtextcustomeditorrichtexteditfindbar->isVirtualTextCustomEditorRichTextEditFindBar) {
        vtextcustomeditorrichtexteditfindbar->setTextCustomEditor__RichTextEditFindBar_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_GetDecodedMetricF_Callback>(slot));
    }
}

void TextCustomEditor__RichTextEditFindBar_Delete(TextCustomEditor__RichTextEditFindBar* self) {
    delete self;
}
