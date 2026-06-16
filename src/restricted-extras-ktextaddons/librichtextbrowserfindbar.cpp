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
#include <QTextBrowser>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextCustomEditor__RichTextBrowserFindBar
#define WORKAROUND_INNER_CLASS_DEFINITION_TextCustomEditor__TextEditFindBarBase
#include <richtextbrowserfindbar.h>
#include "librichtextbrowserfindbar.h"
#include "librichtextbrowserfindbar.hxx"

TextCustomEditor__RichTextBrowserFindBar* TextCustomEditor__RichTextBrowserFindBar_new(QTextBrowser* view) {
    return new VirtualTextCustomEditorRichTextBrowserFindBar(view);
}

TextCustomEditor__RichTextBrowserFindBar* TextCustomEditor__RichTextBrowserFindBar_new2(QTextBrowser* view, QWidget* parent) {
    return new VirtualTextCustomEditorRichTextBrowserFindBar(view, parent);
}

QMetaObject* TextCustomEditor__RichTextBrowserFindBar_MetaObject(const TextCustomEditor__RichTextBrowserFindBar* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextCustomEditor__RichTextBrowserFindBar_Metacast(TextCustomEditor__RichTextBrowserFindBar* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextCustomEditor__RichTextBrowserFindBar_Metacall(TextCustomEditor__RichTextBrowserFindBar* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

bool TextCustomEditor__RichTextBrowserFindBar_ViewIsReadOnly(const TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditor__richtextbrowserfindbar = dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditor__richtextbrowserfindbar && vtextcustomeditor__richtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        return vtextcustomeditor__richtextbrowserfindbar->viewIsReadOnly();
    }
    return {};
}

bool TextCustomEditor__RichTextBrowserFindBar_DocumentIsEmpty(const TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditor__richtextbrowserfindbar = dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditor__richtextbrowserfindbar && vtextcustomeditor__richtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        return vtextcustomeditor__richtextbrowserfindbar->documentIsEmpty();
    }
    return {};
}

bool TextCustomEditor__RichTextBrowserFindBar_SearchInDocument(TextCustomEditor__RichTextBrowserFindBar* self, const libqt_string text, int searchOptions) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vtextcustomeditor__richtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditor__richtextbrowserfindbar && vtextcustomeditor__richtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        return vtextcustomeditor__richtextbrowserfindbar->searchInDocument(text_QString, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    }
    return {};
}

bool TextCustomEditor__RichTextBrowserFindBar_SearchInDocument2(TextCustomEditor__RichTextBrowserFindBar* self, const QRegularExpression* regExp, int searchOptions) {
    auto* vtextcustomeditor__richtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditor__richtextbrowserfindbar && vtextcustomeditor__richtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        return vtextcustomeditor__richtextbrowserfindbar->searchInDocument(*regExp, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    }
    return {};
}

void TextCustomEditor__RichTextBrowserFindBar_AutoSearchMoveCursor(TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditor__richtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditor__richtextbrowserfindbar && vtextcustomeditor__richtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditor__richtextbrowserfindbar->autoSearchMoveCursor();
    }
}

void TextCustomEditor__RichTextBrowserFindBar_SlotSearchText(TextCustomEditor__RichTextBrowserFindBar* self, bool backward, bool isAutoSearch) {
    self->slotSearchText(backward, isAutoSearch);
}

// Base class handler implementation
QMetaObject* TextCustomEditor__RichTextBrowserFindBar_SuperMetaObject(const TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_MetaObject_IsBase(true);
        return (QMetaObject*)vtextcustomeditorrichtextbrowserfindbar->metaObject();
    } else {
        return (QMetaObject*)self->TextCustomEditor::RichTextBrowserFindBar::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnMetaObject(const TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_MetaObject_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextCustomEditor__RichTextBrowserFindBar_SuperMetacast(TextCustomEditor__RichTextBrowserFindBar* self, const char* param1) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_Metacast_IsBase(true);
        return vtextcustomeditorrichtextbrowserfindbar->qt_metacast(param1);
    } else {
        return self->TextCustomEditor::RichTextBrowserFindBar::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnMetacast(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_Metacast_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowserFindBar_SuperMetacall(TextCustomEditor__RichTextBrowserFindBar* self, int param1, int param2, void** param3) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_Metacall_IsBase(true);
        return vtextcustomeditorrichtextbrowserfindbar->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextCustomEditor::RichTextBrowserFindBar::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnMetacall(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_Metacall_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_SuperViewIsReadOnly(const TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_ViewIsReadOnly_IsBase(true);
        return vtextcustomeditorrichtextbrowserfindbar->viewIsReadOnly();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->viewIsReadOnly();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnViewIsReadOnly(const TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_ViewIsReadOnly_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_ViewIsReadOnly_Callback>(slot));
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_SuperDocumentIsEmpty(const TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_DocumentIsEmpty_IsBase(true);
        return vtextcustomeditorrichtextbrowserfindbar->documentIsEmpty();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->documentIsEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnDocumentIsEmpty(const TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_DocumentIsEmpty_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_DocumentIsEmpty_Callback>(slot));
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_SuperSearchInDocument(TextCustomEditor__RichTextBrowserFindBar* self, const libqt_string text, int searchOptions) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_SearchInDocument_IsBase(true);
        return vtextcustomeditorrichtextbrowserfindbar->searchInDocument(text_QString, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->searchInDocument(text_QString, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnSearchInDocument(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_SearchInDocument_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_SearchInDocument_Callback>(slot));
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_SuperSearchInDocument2(TextCustomEditor__RichTextBrowserFindBar* self, const QRegularExpression* regExp, int searchOptions) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_SearchInDocument2_IsBase(true);
        return vtextcustomeditorrichtextbrowserfindbar->searchInDocument(*regExp, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->searchInDocument(*regExp, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnSearchInDocument2(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_SearchInDocument2_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_SearchInDocument2_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperAutoSearchMoveCursor(TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_AutoSearchMoveCursor_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->autoSearchMoveCursor();
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->autoSearchMoveCursor();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnAutoSearchMoveCursor(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_AutoSearchMoveCursor_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_AutoSearchMoveCursor_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperSlotSearchText(TextCustomEditor__RichTextBrowserFindBar* self, bool backward, bool isAutoSearch) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_SlotSearchText_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->slotSearchText(backward, isAutoSearch);
    } else {
        self->TextCustomEditor::RichTextBrowserFindBar::slotSearchText(backward, isAutoSearch);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnSlotSearchText(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_SlotSearchText_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_SlotSearchText_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_Event(TextCustomEditor__RichTextBrowserFindBar* self, QEvent* e) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        return vtextcustomeditorrichtextbrowserfindbar->event(e);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->event(e);
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_SuperEvent(TextCustomEditor__RichTextBrowserFindBar* self, QEvent* e) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_Event_IsBase(true);
        return vtextcustomeditorrichtextbrowserfindbar->event(e);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_Event_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_Event_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextBrowserFindBar_DevType(const TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        return vtextcustomeditorrichtextbrowserfindbar->devType();
    } else {
        return self->TextCustomEditor::RichTextBrowserFindBar::devType();
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowserFindBar_SuperDevType(const TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_DevType_IsBase(true);
        return vtextcustomeditorrichtextbrowserfindbar->devType();
    } else {
        return self->TextCustomEditor::RichTextBrowserFindBar::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnDevType(const TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_DevType_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SetVisible(TextCustomEditor__RichTextBrowserFindBar* self, bool visible) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setVisible(visible);
    } else {
        self->TextCustomEditor::RichTextBrowserFindBar::setVisible(visible);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperSetVisible(TextCustomEditor__RichTextBrowserFindBar* self, bool visible) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_SetVisible_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->setVisible(visible);
    } else {
        self->TextCustomEditor::RichTextBrowserFindBar::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnSetVisible(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_SetVisible_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextCustomEditor__RichTextBrowserFindBar_SizeHint(const TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        return new QSize(vtextcustomeditorrichtextbrowserfindbar->sizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextCustomEditor__RichTextBrowserFindBar_SuperSizeHint(const TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_SizeHint_IsBase(true);
        return new QSize(vtextcustomeditorrichtextbrowserfindbar->sizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnSizeHint(const TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_SizeHint_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextCustomEditor__RichTextBrowserFindBar_MinimumSizeHint(const TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        return new QSize(vtextcustomeditorrichtextbrowserfindbar->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextCustomEditor__RichTextBrowserFindBar_SuperMinimumSizeHint(const TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_MinimumSizeHint_IsBase(true);
        return new QSize(vtextcustomeditorrichtextbrowserfindbar->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnMinimumSizeHint(const TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextBrowserFindBar_HeightForWidth(const TextCustomEditor__RichTextBrowserFindBar* self, int param1) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        return vtextcustomeditorrichtextbrowserfindbar->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextCustomEditor::RichTextBrowserFindBar::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowserFindBar_SuperHeightForWidth(const TextCustomEditor__RichTextBrowserFindBar* self, int param1) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_HeightForWidth_IsBase(true);
        return vtextcustomeditorrichtextbrowserfindbar->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextCustomEditor::RichTextBrowserFindBar::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnHeightForWidth(const TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_HeightForWidth_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_HasHeightForWidth(const TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        return vtextcustomeditorrichtextbrowserfindbar->hasHeightForWidth();
    } else {
        return self->TextCustomEditor::RichTextBrowserFindBar::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_SuperHasHeightForWidth(const TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_HasHeightForWidth_IsBase(true);
        return vtextcustomeditorrichtextbrowserfindbar->hasHeightForWidth();
    } else {
        return self->TextCustomEditor::RichTextBrowserFindBar::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnHasHeightForWidth(const TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextCustomEditor__RichTextBrowserFindBar_PaintEngine(const TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        return vtextcustomeditorrichtextbrowserfindbar->paintEngine();
    } else {
        return self->TextCustomEditor::RichTextBrowserFindBar::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextCustomEditor__RichTextBrowserFindBar_SuperPaintEngine(const TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_PaintEngine_IsBase(true);
        return vtextcustomeditorrichtextbrowserfindbar->paintEngine();
    } else {
        return self->TextCustomEditor::RichTextBrowserFindBar::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnPaintEngine(const TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_PaintEngine_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_MousePressEvent(TextCustomEditor__RichTextBrowserFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->mousePressEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperMousePressEvent(TextCustomEditor__RichTextBrowserFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_MousePressEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->mousePressEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnMousePressEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_MousePressEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_MouseReleaseEvent(TextCustomEditor__RichTextBrowserFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->mouseReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperMouseReleaseEvent(TextCustomEditor__RichTextBrowserFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_MouseReleaseEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->mouseReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnMouseReleaseEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_MouseDoubleClickEvent(TextCustomEditor__RichTextBrowserFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperMouseDoubleClickEvent(TextCustomEditor__RichTextBrowserFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_MouseDoubleClickEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnMouseDoubleClickEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_MouseMoveEvent(TextCustomEditor__RichTextBrowserFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->mouseMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperMouseMoveEvent(TextCustomEditor__RichTextBrowserFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_MouseMoveEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->mouseMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnMouseMoveEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_WheelEvent(TextCustomEditor__RichTextBrowserFindBar* self, QWheelEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->wheelEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperWheelEvent(TextCustomEditor__RichTextBrowserFindBar* self, QWheelEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_WheelEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->wheelEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnWheelEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_WheelEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_KeyPressEvent(TextCustomEditor__RichTextBrowserFindBar* self, QKeyEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->keyPressEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperKeyPressEvent(TextCustomEditor__RichTextBrowserFindBar* self, QKeyEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_KeyPressEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->keyPressEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnKeyPressEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_KeyPressEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_KeyReleaseEvent(TextCustomEditor__RichTextBrowserFindBar* self, QKeyEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->keyReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperKeyReleaseEvent(TextCustomEditor__RichTextBrowserFindBar* self, QKeyEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_KeyReleaseEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->keyReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnKeyReleaseEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_FocusInEvent(TextCustomEditor__RichTextBrowserFindBar* self, QFocusEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->focusInEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperFocusInEvent(TextCustomEditor__RichTextBrowserFindBar* self, QFocusEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_FocusInEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->focusInEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnFocusInEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_FocusInEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_FocusOutEvent(TextCustomEditor__RichTextBrowserFindBar* self, QFocusEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->focusOutEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperFocusOutEvent(TextCustomEditor__RichTextBrowserFindBar* self, QFocusEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_FocusOutEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->focusOutEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnFocusOutEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_FocusOutEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_EnterEvent(TextCustomEditor__RichTextBrowserFindBar* self, QEnterEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->enterEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperEnterEvent(TextCustomEditor__RichTextBrowserFindBar* self, QEnterEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_EnterEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->enterEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnEnterEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_EnterEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_LeaveEvent(TextCustomEditor__RichTextBrowserFindBar* self, QEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->leaveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperLeaveEvent(TextCustomEditor__RichTextBrowserFindBar* self, QEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_LeaveEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->leaveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnLeaveEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_LeaveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_PaintEvent(TextCustomEditor__RichTextBrowserFindBar* self, QPaintEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->paintEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperPaintEvent(TextCustomEditor__RichTextBrowserFindBar* self, QPaintEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_PaintEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->paintEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnPaintEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_PaintEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_MoveEvent(TextCustomEditor__RichTextBrowserFindBar* self, QMoveEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->moveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperMoveEvent(TextCustomEditor__RichTextBrowserFindBar* self, QMoveEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_MoveEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->moveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnMoveEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_MoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_ResizeEvent(TextCustomEditor__RichTextBrowserFindBar* self, QResizeEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->resizeEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperResizeEvent(TextCustomEditor__RichTextBrowserFindBar* self, QResizeEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_ResizeEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->resizeEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnResizeEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_ResizeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_CloseEvent(TextCustomEditor__RichTextBrowserFindBar* self, QCloseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->closeEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperCloseEvent(TextCustomEditor__RichTextBrowserFindBar* self, QCloseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_CloseEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->closeEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnCloseEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_CloseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_ContextMenuEvent(TextCustomEditor__RichTextBrowserFindBar* self, QContextMenuEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->contextMenuEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperContextMenuEvent(TextCustomEditor__RichTextBrowserFindBar* self, QContextMenuEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_ContextMenuEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->contextMenuEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnContextMenuEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_TabletEvent(TextCustomEditor__RichTextBrowserFindBar* self, QTabletEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->tabletEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperTabletEvent(TextCustomEditor__RichTextBrowserFindBar* self, QTabletEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_TabletEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->tabletEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnTabletEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_TabletEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_ActionEvent(TextCustomEditor__RichTextBrowserFindBar* self, QActionEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->actionEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperActionEvent(TextCustomEditor__RichTextBrowserFindBar* self, QActionEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_ActionEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->actionEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnActionEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_ActionEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_DragEnterEvent(TextCustomEditor__RichTextBrowserFindBar* self, QDragEnterEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->dragEnterEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperDragEnterEvent(TextCustomEditor__RichTextBrowserFindBar* self, QDragEnterEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_DragEnterEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->dragEnterEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnDragEnterEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_DragEnterEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_DragMoveEvent(TextCustomEditor__RichTextBrowserFindBar* self, QDragMoveEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->dragMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperDragMoveEvent(TextCustomEditor__RichTextBrowserFindBar* self, QDragMoveEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_DragMoveEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->dragMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnDragMoveEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_DragMoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_DragLeaveEvent(TextCustomEditor__RichTextBrowserFindBar* self, QDragLeaveEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->dragLeaveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperDragLeaveEvent(TextCustomEditor__RichTextBrowserFindBar* self, QDragLeaveEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_DragLeaveEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->dragLeaveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnDragLeaveEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_DropEvent(TextCustomEditor__RichTextBrowserFindBar* self, QDropEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->dropEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperDropEvent(TextCustomEditor__RichTextBrowserFindBar* self, QDropEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_DropEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->dropEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnDropEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_DropEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_ShowEvent(TextCustomEditor__RichTextBrowserFindBar* self, QShowEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->showEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->showEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperShowEvent(TextCustomEditor__RichTextBrowserFindBar* self, QShowEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_ShowEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->showEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnShowEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_ShowEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_HideEvent(TextCustomEditor__RichTextBrowserFindBar* self, QHideEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->hideEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperHideEvent(TextCustomEditor__RichTextBrowserFindBar* self, QHideEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_HideEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->hideEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnHideEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_HideEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_NativeEvent(TextCustomEditor__RichTextBrowserFindBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        return vtextcustomeditorrichtextbrowserfindbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_SuperNativeEvent(TextCustomEditor__RichTextBrowserFindBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_NativeEvent_IsBase(true);
        return vtextcustomeditorrichtextbrowserfindbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnNativeEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_NativeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_ChangeEvent(TextCustomEditor__RichTextBrowserFindBar* self, QEvent* param1) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->changeEvent(param1);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperChangeEvent(TextCustomEditor__RichTextBrowserFindBar* self, QEvent* param1) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_ChangeEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->changeEvent(param1);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnChangeEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_ChangeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextBrowserFindBar_Metric(const TextCustomEditor__RichTextBrowserFindBar* self, int param1) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        return vtextcustomeditorrichtextbrowserfindbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowserFindBar_SuperMetric(const TextCustomEditor__RichTextBrowserFindBar* self, int param1) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_Metric_IsBase(true);
        return vtextcustomeditorrichtextbrowserfindbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnMetric(const TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_Metric_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_InitPainter(const TextCustomEditor__RichTextBrowserFindBar* self, QPainter* painter) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->initPainter(painter);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperInitPainter(const TextCustomEditor__RichTextBrowserFindBar* self, QPainter* painter) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_InitPainter_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->initPainter(painter);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnInitPainter(const TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_InitPainter_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextCustomEditor__RichTextBrowserFindBar_Redirected(const TextCustomEditor__RichTextBrowserFindBar* self, QPoint* offset) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        return vtextcustomeditorrichtextbrowserfindbar->redirected(offset);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextCustomEditor__RichTextBrowserFindBar_SuperRedirected(const TextCustomEditor__RichTextBrowserFindBar* self, QPoint* offset) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_Redirected_IsBase(true);
        return vtextcustomeditorrichtextbrowserfindbar->redirected(offset);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnRedirected(const TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_Redirected_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextCustomEditor__RichTextBrowserFindBar_SharedPainter(const TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        return vtextcustomeditorrichtextbrowserfindbar->sharedPainter();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextCustomEditor__RichTextBrowserFindBar_SuperSharedPainter(const TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_SharedPainter_IsBase(true);
        return vtextcustomeditorrichtextbrowserfindbar->sharedPainter();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnSharedPainter(const TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_SharedPainter_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_InputMethodEvent(TextCustomEditor__RichTextBrowserFindBar* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->inputMethodEvent(param1);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperInputMethodEvent(TextCustomEditor__RichTextBrowserFindBar* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_InputMethodEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->inputMethodEvent(param1);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnInputMethodEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_InputMethodEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextCustomEditor__RichTextBrowserFindBar_InputMethodQuery(const TextCustomEditor__RichTextBrowserFindBar* self, int param1) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        return new QVariant(vtextcustomeditorrichtextbrowserfindbar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* TextCustomEditor__RichTextBrowserFindBar_SuperInputMethodQuery(const TextCustomEditor__RichTextBrowserFindBar* self, int param1) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_InputMethodQuery_IsBase(true);
        return new QVariant(vtextcustomeditorrichtextbrowserfindbar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnInputMethodQuery(const TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_InputMethodQuery_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_FocusNextPrevChild(TextCustomEditor__RichTextBrowserFindBar* self, bool next) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        return vtextcustomeditorrichtextbrowserfindbar->focusNextPrevChild(next);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_SuperFocusNextPrevChild(TextCustomEditor__RichTextBrowserFindBar* self, bool next) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_FocusNextPrevChild_IsBase(true);
        return vtextcustomeditorrichtextbrowserfindbar->focusNextPrevChild(next);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnFocusNextPrevChild(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_EventFilter(TextCustomEditor__RichTextBrowserFindBar* self, QObject* watched, QEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        return vtextcustomeditorrichtextbrowserfindbar->eventFilter(watched, event);
    } else {
        return self->TextCustomEditor::RichTextBrowserFindBar::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_SuperEventFilter(TextCustomEditor__RichTextBrowserFindBar* self, QObject* watched, QEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_EventFilter_IsBase(true);
        return vtextcustomeditorrichtextbrowserfindbar->eventFilter(watched, event);
    } else {
        return self->TextCustomEditor::RichTextBrowserFindBar::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnEventFilter(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_EventFilter_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_TimerEvent(TextCustomEditor__RichTextBrowserFindBar* self, QTimerEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->timerEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperTimerEvent(TextCustomEditor__RichTextBrowserFindBar* self, QTimerEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_TimerEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->timerEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnTimerEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_TimerEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_ChildEvent(TextCustomEditor__RichTextBrowserFindBar* self, QChildEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->childEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperChildEvent(TextCustomEditor__RichTextBrowserFindBar* self, QChildEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_ChildEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->childEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnChildEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_ChildEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_CustomEvent(TextCustomEditor__RichTextBrowserFindBar* self, QEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->customEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperCustomEvent(TextCustomEditor__RichTextBrowserFindBar* self, QEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_CustomEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->customEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnCustomEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_CustomEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_ConnectNotify(TextCustomEditor__RichTextBrowserFindBar* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->connectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperConnectNotify(TextCustomEditor__RichTextBrowserFindBar* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_ConnectNotify_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->connectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnConnectNotify(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_ConnectNotify_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_DisconnectNotify(TextCustomEditor__RichTextBrowserFindBar* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->disconnectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperDisconnectNotify(TextCustomEditor__RichTextBrowserFindBar* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_DisconnectNotify_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->disconnectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnDisconnectNotify(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_DisconnectNotify_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_ClearSelections(TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->clearSelections();
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->clearSelections();
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperClearSelections(TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_ClearSelections_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->clearSelections();
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->clearSelections();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnClearSelections(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_ClearSelections_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_ClearSelections_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_SearchText(TextCustomEditor__RichTextBrowserFindBar* self, bool backward, bool isAutoSearch) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        return vtextcustomeditorrichtextbrowserfindbar->searchText(backward, isAutoSearch);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->searchText(backward, isAutoSearch);
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_SuperSearchText(TextCustomEditor__RichTextBrowserFindBar* self, bool backward, bool isAutoSearch) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_SearchText_IsBase(true);
        return vtextcustomeditorrichtextbrowserfindbar->searchText(backward, isAutoSearch);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->searchText(backward, isAutoSearch);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnSearchText(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_SearchText_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_SearchText_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SetFoundMatch(TextCustomEditor__RichTextBrowserFindBar* self, bool match) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setFoundMatch(match);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->setFoundMatch(match);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperSetFoundMatch(TextCustomEditor__RichTextBrowserFindBar* self, bool match) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_SetFoundMatch_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->setFoundMatch(match);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->setFoundMatch(match);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnSetFoundMatch(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_SetFoundMatch_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_SetFoundMatch_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_MessageInfo(TextCustomEditor__RichTextBrowserFindBar* self, bool backward, bool isAutoSearch, bool found) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->messageInfo(backward, isAutoSearch, found);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->messageInfo(backward, isAutoSearch, found);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperMessageInfo(TextCustomEditor__RichTextBrowserFindBar* self, bool backward, bool isAutoSearch, bool found) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_MessageInfo_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->messageInfo(backward, isAutoSearch, found);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->messageInfo(backward, isAutoSearch, found);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnMessageInfo(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_MessageInfo_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_MessageInfo_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_UpdateMicroFocus(TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->updateMicroFocus();
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperUpdateMicroFocus(TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_UpdateMicroFocus_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->updateMicroFocus();
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnUpdateMicroFocus(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_Create(TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->create();
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->create();
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperCreate(TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_Create_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->create();
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnCreate(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_Create_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_Destroy(TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->destroy();
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->destroy();
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperDestroy(TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_Destroy_IsBase(true);
        vtextcustomeditorrichtextbrowserfindbar->destroy();
    } else {
        ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnDestroy(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_Destroy_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_FocusNextChild(TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        return vtextcustomeditorrichtextbrowserfindbar->focusNextChild();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_SuperFocusNextChild(TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_FocusNextChild_IsBase(true);
        return vtextcustomeditorrichtextbrowserfindbar->focusNextChild();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnFocusNextChild(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_FocusNextChild_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_FocusPreviousChild(TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        return vtextcustomeditorrichtextbrowserfindbar->focusPreviousChild();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_SuperFocusPreviousChild(TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_FocusPreviousChild_IsBase(true);
        return vtextcustomeditorrichtextbrowserfindbar->focusPreviousChild();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnFocusPreviousChild(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextCustomEditor__RichTextBrowserFindBar_Sender(const TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        return vtextcustomeditorrichtextbrowserfindbar->sender();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextCustomEditor__RichTextBrowserFindBar_SuperSender(const TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_Sender_IsBase(true);
        return vtextcustomeditorrichtextbrowserfindbar->sender();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnSender(const TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_Sender_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextBrowserFindBar_SenderSignalIndex(const TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        return vtextcustomeditorrichtextbrowserfindbar->senderSignalIndex();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowserFindBar_SuperSenderSignalIndex(const TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_SenderSignalIndex_IsBase(true);
        return vtextcustomeditorrichtextbrowserfindbar->senderSignalIndex();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnSenderSignalIndex(const TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextBrowserFindBar_Receivers(const TextCustomEditor__RichTextBrowserFindBar* self, const char* signal) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        return vtextcustomeditorrichtextbrowserfindbar->receivers(signal);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowserFindBar_SuperReceivers(const TextCustomEditor__RichTextBrowserFindBar* self, const char* signal) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_Receivers_IsBase(true);
        return vtextcustomeditorrichtextbrowserfindbar->receivers(signal);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnReceivers(const TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_Receivers_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_IsSignalConnected(const TextCustomEditor__RichTextBrowserFindBar* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        return vtextcustomeditorrichtextbrowserfindbar->isSignalConnected(*signal);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_SuperIsSignalConnected(const TextCustomEditor__RichTextBrowserFindBar* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_IsSignalConnected_IsBase(true);
        return vtextcustomeditorrichtextbrowserfindbar->isSignalConnected(*signal);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnIsSignalConnected(const TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_IsSignalConnected_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextCustomEditor__RichTextBrowserFindBar_GetDecodedMetricF(const TextCustomEditor__RichTextBrowserFindBar* self, int metricA, int metricB) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        return vtextcustomeditorrichtextbrowserfindbar->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextCustomEditor__RichTextBrowserFindBar_SuperGetDecodedMetricF(const TextCustomEditor__RichTextBrowserFindBar* self, int metricA, int metricB) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_GetDecodedMetricF_IsBase(true);
        return vtextcustomeditorrichtextbrowserfindbar->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserFindBar*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnGetDecodedMetricF(const TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar && vtextcustomeditorrichtextbrowserfindbar->isVirtualTextCustomEditorRichTextBrowserFindBar) {
        vtextcustomeditorrichtextbrowserfindbar->setTextCustomEditor__RichTextBrowserFindBar_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_GetDecodedMetricF_Callback>(slot));
    }
}

void TextCustomEditor__RichTextBrowserFindBar_Delete(TextCustomEditor__RichTextBrowserFindBar* self) {
    delete self;
}
