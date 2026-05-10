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
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextCustomEditor__TextEditFindBarBase
#include <texteditfindbarbase.h>
#include "libtexteditfindbarbase.h"
#include "libtexteditfindbarbase.hxx"

TextCustomEditor__TextEditFindBarBase* TextCustomEditor__TextEditFindBarBase_new(QWidget* parent) {
    return new VirtualTextCustomEditorTextEditFindBarBase(parent);
}

TextCustomEditor__TextEditFindBarBase* TextCustomEditor__TextEditFindBarBase_new2() {
    return new VirtualTextCustomEditorTextEditFindBarBase();
}

QMetaObject* TextCustomEditor__TextEditFindBarBase_MetaObject(const TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditor__texteditfindbarbase = dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditor__texteditfindbarbase && vtextcustomeditor__texteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualTextCustomEditorTextEditFindBarBase*)self)->metaObject();
    }
}

void* TextCustomEditor__TextEditFindBarBase_Metacast(TextCustomEditor__TextEditFindBarBase* self, const char* param1) {
    auto* vtextcustomeditor__texteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditor__texteditfindbarbase && vtextcustomeditor__texteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->qt_metacast(param1);
    }
}

int TextCustomEditor__TextEditFindBarBase_Metacall(TextCustomEditor__TextEditFindBarBase* self, int param1, int param2, void** param3) {
    auto* vtextcustomeditor__texteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditor__texteditfindbarbase && vtextcustomeditor__texteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string TextCustomEditor__TextEditFindBarBase_Text(const TextCustomEditor__TextEditFindBarBase* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextCustomEditor__TextEditFindBarBase_SetText(TextCustomEditor__TextEditFindBarBase* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

void TextCustomEditor__TextEditFindBarBase_FocusAndSetCursor(TextCustomEditor__TextEditFindBarBase* self) {
    self->focusAndSetCursor();
}

void TextCustomEditor__TextEditFindBarBase_ShowReplace(TextCustomEditor__TextEditFindBarBase* self) {
    self->showReplace();
}

void TextCustomEditor__TextEditFindBarBase_ShowFind(TextCustomEditor__TextEditFindBarBase* self) {
    self->showFind();
}

void TextCustomEditor__TextEditFindBarBase_SetHideWhenClose(TextCustomEditor__TextEditFindBarBase* self, bool hide) {
    self->setHideWhenClose(hide);
}

void TextCustomEditor__TextEditFindBarBase_DisplayMessageIndicator(TextCustomEditor__TextEditFindBarBase* self, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->displayMessageIndicator(message_QString);
}

void TextCustomEditor__TextEditFindBarBase_Connect_DisplayMessageIndicator(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__TextEditFindBarBase*, const char*) = reinterpret_cast<void (*)(TextCustomEditor__TextEditFindBarBase*, const char*)>(slot);
    TextCustomEditor::TextEditFindBarBase::connect(self, &TextCustomEditor::TextEditFindBarBase::displayMessageIndicator, [self, slotFunc](const QString& message) {
        const QString message_ret = message;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray message_b = message_ret.toUtf8();
        auto message_str_len = message_b.length();
        const char* message_str = static_cast<const char*>(malloc(message_str_len + 1));
        memcpy((void*)message_str, message_b.data(), message_str_len);
        ((char*)message_str)[message_str_len] = '\0';
        const char* sigval1 = message_str;
        slotFunc(self, sigval1);
        libqt_free(message_str);
    });
}

void TextCustomEditor__TextEditFindBarBase_HideFindBar(TextCustomEditor__TextEditFindBarBase* self) {
    self->hideFindBar();
}

void TextCustomEditor__TextEditFindBarBase_Connect_HideFindBar(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__TextEditFindBarBase*) = reinterpret_cast<void (*)(TextCustomEditor__TextEditFindBarBase*)>(slot);
    TextCustomEditor::TextEditFindBarBase::connect(self, &TextCustomEditor::TextEditFindBarBase::hideFindBar, [self, slotFunc]() {
        slotFunc(self);
    });
}

bool TextCustomEditor__TextEditFindBarBase_ViewIsReadOnly(const TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditor__texteditfindbarbase = dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditor__texteditfindbarbase && vtextcustomeditor__texteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        return vtextcustomeditor__texteditfindbarbase->viewIsReadOnly();
    }
    return {};
}

bool TextCustomEditor__TextEditFindBarBase_DocumentIsEmpty(const TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditor__texteditfindbarbase = dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditor__texteditfindbarbase && vtextcustomeditor__texteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        return vtextcustomeditor__texteditfindbarbase->documentIsEmpty();
    }
    return {};
}

bool TextCustomEditor__TextEditFindBarBase_SearchInDocument(TextCustomEditor__TextEditFindBarBase* self, const libqt_string text, int searchOptions) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vtextcustomeditor__texteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditor__texteditfindbarbase && vtextcustomeditor__texteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        return vtextcustomeditor__texteditfindbarbase->searchInDocument(text_QString, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    }
    return {};
}

bool TextCustomEditor__TextEditFindBarBase_SearchInDocument2(TextCustomEditor__TextEditFindBarBase* self, const QRegularExpression* regExp, int searchOptions) {
    auto* vtextcustomeditor__texteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditor__texteditfindbarbase && vtextcustomeditor__texteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        return vtextcustomeditor__texteditfindbarbase->searchInDocument(*regExp, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    }
    return {};
}

void TextCustomEditor__TextEditFindBarBase_AutoSearchMoveCursor(TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditor__texteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditor__texteditfindbarbase && vtextcustomeditor__texteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditor__texteditfindbarbase->autoSearchMoveCursor();
    }
}

bool TextCustomEditor__TextEditFindBarBase_Event(TextCustomEditor__TextEditFindBarBase* self, QEvent* e) {
    auto* vtextcustomeditor__texteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditor__texteditfindbarbase && vtextcustomeditor__texteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        return vtextcustomeditor__texteditfindbarbase->event(e);
    }
    return {};
}

void TextCustomEditor__TextEditFindBarBase_FindNext(TextCustomEditor__TextEditFindBarBase* self) {
    self->findNext();
}

void TextCustomEditor__TextEditFindBarBase_FindPrev(TextCustomEditor__TextEditFindBarBase* self) {
    self->findPrev();
}

void TextCustomEditor__TextEditFindBarBase_AutoSearch(TextCustomEditor__TextEditFindBarBase* self, const libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    self->autoSearch(str_QString);
}

void TextCustomEditor__TextEditFindBarBase_SlotSearchText(TextCustomEditor__TextEditFindBarBase* self, bool backward, bool isAutoSearch) {
    auto* vtextcustomeditor__texteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditor__texteditfindbarbase && vtextcustomeditor__texteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditor__texteditfindbarbase->slotSearchText(backward, isAutoSearch);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->slotSearchText(backward, isAutoSearch);
    }
}

void TextCustomEditor__TextEditFindBarBase_CloseBar(TextCustomEditor__TextEditFindBarBase* self) {
    self->closeBar();
}

// Base class handler implementation
QMetaObject* TextCustomEditor__TextEditFindBarBase_SuperMetaObject(const TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_MetaObject_IsBase(true);
        return (QMetaObject*)vtextcustomeditortexteditfindbarbase->metaObject();
    } else {
        return (QMetaObject*)self->TextCustomEditor::TextEditFindBarBase::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnMetaObject(const TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_MetaObject_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextCustomEditor__TextEditFindBarBase_SuperMetacast(TextCustomEditor__TextEditFindBarBase* self, const char* param1) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_Metacast_IsBase(true);
        return vtextcustomeditortexteditfindbarbase->qt_metacast(param1);
    } else {
        return self->TextCustomEditor::TextEditFindBarBase::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnMetacast(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_Metacast_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextCustomEditor__TextEditFindBarBase_SuperMetacall(TextCustomEditor__TextEditFindBarBase* self, int param1, int param2, void** param3) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_Metacall_IsBase(true);
        return vtextcustomeditortexteditfindbarbase->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextCustomEditor::TextEditFindBarBase::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnMetacall(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_Metacall_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool TextCustomEditor__TextEditFindBarBase_SuperViewIsReadOnly(const TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_ViewIsReadOnly_IsBase(true);
        return vtextcustomeditortexteditfindbarbase->viewIsReadOnly();
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->viewIsReadOnly();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnViewIsReadOnly(const TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_ViewIsReadOnly_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_ViewIsReadOnly_Callback>(slot));
    }
}

// Base class handler implementation
bool TextCustomEditor__TextEditFindBarBase_SuperDocumentIsEmpty(const TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_DocumentIsEmpty_IsBase(true);
        return vtextcustomeditortexteditfindbarbase->documentIsEmpty();
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->documentIsEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnDocumentIsEmpty(const TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_DocumentIsEmpty_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_DocumentIsEmpty_Callback>(slot));
    }
}

// Base class handler implementation
bool TextCustomEditor__TextEditFindBarBase_SuperSearchInDocument(TextCustomEditor__TextEditFindBarBase* self, const libqt_string text, int searchOptions) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_SearchInDocument_IsBase(true);
        return vtextcustomeditortexteditfindbarbase->searchInDocument(text_QString, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->searchInDocument(text_QString, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnSearchInDocument(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_SearchInDocument_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_SearchInDocument_Callback>(slot));
    }
}

// Base class handler implementation
bool TextCustomEditor__TextEditFindBarBase_SuperSearchInDocument2(TextCustomEditor__TextEditFindBarBase* self, const QRegularExpression* regExp, int searchOptions) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_SearchInDocument2_IsBase(true);
        return vtextcustomeditortexteditfindbarbase->searchInDocument(*regExp, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->searchInDocument(*regExp, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnSearchInDocument2(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_SearchInDocument2_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_SearchInDocument2_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperAutoSearchMoveCursor(TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_AutoSearchMoveCursor_IsBase(true);
        vtextcustomeditortexteditfindbarbase->autoSearchMoveCursor();
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->autoSearchMoveCursor();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnAutoSearchMoveCursor(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_AutoSearchMoveCursor_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_AutoSearchMoveCursor_Callback>(slot));
    }
}

// Base class handler implementation
bool TextCustomEditor__TextEditFindBarBase_SuperEvent(TextCustomEditor__TextEditFindBarBase* self, QEvent* e) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_Event_IsBase(true);
        return vtextcustomeditortexteditfindbarbase->event(e);
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_Event_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_Event_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperSlotSearchText(TextCustomEditor__TextEditFindBarBase* self, bool backward, bool isAutoSearch) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_SlotSearchText_IsBase(true);
        vtextcustomeditortexteditfindbarbase->slotSearchText(backward, isAutoSearch);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->slotSearchText(backward, isAutoSearch);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnSlotSearchText(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_SlotSearchText_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_SlotSearchText_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__TextEditFindBarBase_DevType(const TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        return vtextcustomeditortexteditfindbarbase->devType();
    } else {
        return self->TextCustomEditor::TextEditFindBarBase::devType();
    }
}

// Base class handler implementation
int TextCustomEditor__TextEditFindBarBase_SuperDevType(const TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_DevType_IsBase(true);
        return vtextcustomeditortexteditfindbarbase->devType();
    } else {
        return self->TextCustomEditor::TextEditFindBarBase::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnDevType(const TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_DevType_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_SetVisible(TextCustomEditor__TextEditFindBarBase* self, bool visible) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setVisible(visible);
    } else {
        self->TextCustomEditor::TextEditFindBarBase::setVisible(visible);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperSetVisible(TextCustomEditor__TextEditFindBarBase* self, bool visible) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_SetVisible_IsBase(true);
        vtextcustomeditortexteditfindbarbase->setVisible(visible);
    } else {
        self->TextCustomEditor::TextEditFindBarBase::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnSetVisible(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_SetVisible_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextCustomEditor__TextEditFindBarBase_SizeHint(const TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        return new QSize(vtextcustomeditortexteditfindbarbase->sizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorTextEditFindBarBase*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextCustomEditor__TextEditFindBarBase_SuperSizeHint(const TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_SizeHint_IsBase(true);
        return new QSize(vtextcustomeditortexteditfindbarbase->sizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorTextEditFindBarBase*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnSizeHint(const TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_SizeHint_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextCustomEditor__TextEditFindBarBase_MinimumSizeHint(const TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        return new QSize(vtextcustomeditortexteditfindbarbase->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorTextEditFindBarBase*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextCustomEditor__TextEditFindBarBase_SuperMinimumSizeHint(const TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_MinimumSizeHint_IsBase(true);
        return new QSize(vtextcustomeditortexteditfindbarbase->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorTextEditFindBarBase*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnMinimumSizeHint(const TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__TextEditFindBarBase_HeightForWidth(const TextCustomEditor__TextEditFindBarBase* self, int param1) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        return vtextcustomeditortexteditfindbarbase->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextCustomEditor::TextEditFindBarBase::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextCustomEditor__TextEditFindBarBase_SuperHeightForWidth(const TextCustomEditor__TextEditFindBarBase* self, int param1) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_HeightForWidth_IsBase(true);
        return vtextcustomeditortexteditfindbarbase->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextCustomEditor::TextEditFindBarBase::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnHeightForWidth(const TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_HeightForWidth_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__TextEditFindBarBase_HasHeightForWidth(const TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        return vtextcustomeditortexteditfindbarbase->hasHeightForWidth();
    } else {
        return self->TextCustomEditor::TextEditFindBarBase::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextCustomEditor__TextEditFindBarBase_SuperHasHeightForWidth(const TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_HasHeightForWidth_IsBase(true);
        return vtextcustomeditortexteditfindbarbase->hasHeightForWidth();
    } else {
        return self->TextCustomEditor::TextEditFindBarBase::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnHasHeightForWidth(const TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextCustomEditor__TextEditFindBarBase_PaintEngine(const TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        return vtextcustomeditortexteditfindbarbase->paintEngine();
    } else {
        return self->TextCustomEditor::TextEditFindBarBase::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextCustomEditor__TextEditFindBarBase_SuperPaintEngine(const TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_PaintEngine_IsBase(true);
        return vtextcustomeditortexteditfindbarbase->paintEngine();
    } else {
        return self->TextCustomEditor::TextEditFindBarBase::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnPaintEngine(const TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_PaintEngine_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_MousePressEvent(TextCustomEditor__TextEditFindBarBase* self, QMouseEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->mousePressEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperMousePressEvent(TextCustomEditor__TextEditFindBarBase* self, QMouseEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_MousePressEvent_IsBase(true);
        vtextcustomeditortexteditfindbarbase->mousePressEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnMousePressEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_MousePressEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_MouseReleaseEvent(TextCustomEditor__TextEditFindBarBase* self, QMouseEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->mouseReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperMouseReleaseEvent(TextCustomEditor__TextEditFindBarBase* self, QMouseEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_MouseReleaseEvent_IsBase(true);
        vtextcustomeditortexteditfindbarbase->mouseReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnMouseReleaseEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_MouseDoubleClickEvent(TextCustomEditor__TextEditFindBarBase* self, QMouseEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperMouseDoubleClickEvent(TextCustomEditor__TextEditFindBarBase* self, QMouseEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_MouseDoubleClickEvent_IsBase(true);
        vtextcustomeditortexteditfindbarbase->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnMouseDoubleClickEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_MouseMoveEvent(TextCustomEditor__TextEditFindBarBase* self, QMouseEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->mouseMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperMouseMoveEvent(TextCustomEditor__TextEditFindBarBase* self, QMouseEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_MouseMoveEvent_IsBase(true);
        vtextcustomeditortexteditfindbarbase->mouseMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnMouseMoveEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_WheelEvent(TextCustomEditor__TextEditFindBarBase* self, QWheelEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->wheelEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperWheelEvent(TextCustomEditor__TextEditFindBarBase* self, QWheelEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_WheelEvent_IsBase(true);
        vtextcustomeditortexteditfindbarbase->wheelEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnWheelEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_WheelEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_KeyPressEvent(TextCustomEditor__TextEditFindBarBase* self, QKeyEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->keyPressEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperKeyPressEvent(TextCustomEditor__TextEditFindBarBase* self, QKeyEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_KeyPressEvent_IsBase(true);
        vtextcustomeditortexteditfindbarbase->keyPressEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnKeyPressEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_KeyPressEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_KeyReleaseEvent(TextCustomEditor__TextEditFindBarBase* self, QKeyEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->keyReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperKeyReleaseEvent(TextCustomEditor__TextEditFindBarBase* self, QKeyEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_KeyReleaseEvent_IsBase(true);
        vtextcustomeditortexteditfindbarbase->keyReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnKeyReleaseEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_FocusInEvent(TextCustomEditor__TextEditFindBarBase* self, QFocusEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->focusInEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperFocusInEvent(TextCustomEditor__TextEditFindBarBase* self, QFocusEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_FocusInEvent_IsBase(true);
        vtextcustomeditortexteditfindbarbase->focusInEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnFocusInEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_FocusInEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_FocusOutEvent(TextCustomEditor__TextEditFindBarBase* self, QFocusEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->focusOutEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperFocusOutEvent(TextCustomEditor__TextEditFindBarBase* self, QFocusEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_FocusOutEvent_IsBase(true);
        vtextcustomeditortexteditfindbarbase->focusOutEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnFocusOutEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_FocusOutEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_EnterEvent(TextCustomEditor__TextEditFindBarBase* self, QEnterEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->enterEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperEnterEvent(TextCustomEditor__TextEditFindBarBase* self, QEnterEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_EnterEvent_IsBase(true);
        vtextcustomeditortexteditfindbarbase->enterEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnEnterEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_EnterEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_LeaveEvent(TextCustomEditor__TextEditFindBarBase* self, QEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->leaveEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperLeaveEvent(TextCustomEditor__TextEditFindBarBase* self, QEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_LeaveEvent_IsBase(true);
        vtextcustomeditortexteditfindbarbase->leaveEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnLeaveEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_LeaveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_PaintEvent(TextCustomEditor__TextEditFindBarBase* self, QPaintEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->paintEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperPaintEvent(TextCustomEditor__TextEditFindBarBase* self, QPaintEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_PaintEvent_IsBase(true);
        vtextcustomeditortexteditfindbarbase->paintEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnPaintEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_PaintEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_MoveEvent(TextCustomEditor__TextEditFindBarBase* self, QMoveEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->moveEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperMoveEvent(TextCustomEditor__TextEditFindBarBase* self, QMoveEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_MoveEvent_IsBase(true);
        vtextcustomeditortexteditfindbarbase->moveEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnMoveEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_MoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_ResizeEvent(TextCustomEditor__TextEditFindBarBase* self, QResizeEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->resizeEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperResizeEvent(TextCustomEditor__TextEditFindBarBase* self, QResizeEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_ResizeEvent_IsBase(true);
        vtextcustomeditortexteditfindbarbase->resizeEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnResizeEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_ResizeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_CloseEvent(TextCustomEditor__TextEditFindBarBase* self, QCloseEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->closeEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperCloseEvent(TextCustomEditor__TextEditFindBarBase* self, QCloseEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_CloseEvent_IsBase(true);
        vtextcustomeditortexteditfindbarbase->closeEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnCloseEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_CloseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_ContextMenuEvent(TextCustomEditor__TextEditFindBarBase* self, QContextMenuEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->contextMenuEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperContextMenuEvent(TextCustomEditor__TextEditFindBarBase* self, QContextMenuEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_ContextMenuEvent_IsBase(true);
        vtextcustomeditortexteditfindbarbase->contextMenuEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnContextMenuEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_TabletEvent(TextCustomEditor__TextEditFindBarBase* self, QTabletEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->tabletEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperTabletEvent(TextCustomEditor__TextEditFindBarBase* self, QTabletEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_TabletEvent_IsBase(true);
        vtextcustomeditortexteditfindbarbase->tabletEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnTabletEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_TabletEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_ActionEvent(TextCustomEditor__TextEditFindBarBase* self, QActionEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->actionEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperActionEvent(TextCustomEditor__TextEditFindBarBase* self, QActionEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_ActionEvent_IsBase(true);
        vtextcustomeditortexteditfindbarbase->actionEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnActionEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_ActionEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_DragEnterEvent(TextCustomEditor__TextEditFindBarBase* self, QDragEnterEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->dragEnterEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperDragEnterEvent(TextCustomEditor__TextEditFindBarBase* self, QDragEnterEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_DragEnterEvent_IsBase(true);
        vtextcustomeditortexteditfindbarbase->dragEnterEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnDragEnterEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_DragEnterEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_DragMoveEvent(TextCustomEditor__TextEditFindBarBase* self, QDragMoveEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->dragMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperDragMoveEvent(TextCustomEditor__TextEditFindBarBase* self, QDragMoveEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_DragMoveEvent_IsBase(true);
        vtextcustomeditortexteditfindbarbase->dragMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnDragMoveEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_DragMoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_DragLeaveEvent(TextCustomEditor__TextEditFindBarBase* self, QDragLeaveEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->dragLeaveEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperDragLeaveEvent(TextCustomEditor__TextEditFindBarBase* self, QDragLeaveEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_DragLeaveEvent_IsBase(true);
        vtextcustomeditortexteditfindbarbase->dragLeaveEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnDragLeaveEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_DropEvent(TextCustomEditor__TextEditFindBarBase* self, QDropEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->dropEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperDropEvent(TextCustomEditor__TextEditFindBarBase* self, QDropEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_DropEvent_IsBase(true);
        vtextcustomeditortexteditfindbarbase->dropEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnDropEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_DropEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_ShowEvent(TextCustomEditor__TextEditFindBarBase* self, QShowEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->showEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->showEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperShowEvent(TextCustomEditor__TextEditFindBarBase* self, QShowEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_ShowEvent_IsBase(true);
        vtextcustomeditortexteditfindbarbase->showEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnShowEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_ShowEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_HideEvent(TextCustomEditor__TextEditFindBarBase* self, QHideEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->hideEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperHideEvent(TextCustomEditor__TextEditFindBarBase* self, QHideEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_HideEvent_IsBase(true);
        vtextcustomeditortexteditfindbarbase->hideEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnHideEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_HideEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__TextEditFindBarBase_NativeEvent(TextCustomEditor__TextEditFindBarBase* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        return vtextcustomeditortexteditfindbarbase->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextCustomEditor__TextEditFindBarBase_SuperNativeEvent(TextCustomEditor__TextEditFindBarBase* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_NativeEvent_IsBase(true);
        return vtextcustomeditortexteditfindbarbase->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnNativeEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_NativeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_ChangeEvent(TextCustomEditor__TextEditFindBarBase* self, QEvent* param1) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->changeEvent(param1);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperChangeEvent(TextCustomEditor__TextEditFindBarBase* self, QEvent* param1) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_ChangeEvent_IsBase(true);
        vtextcustomeditortexteditfindbarbase->changeEvent(param1);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnChangeEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_ChangeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__TextEditFindBarBase_Metric(const TextCustomEditor__TextEditFindBarBase* self, int param1) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        return vtextcustomeditortexteditfindbarbase->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextCustomEditor__TextEditFindBarBase_SuperMetric(const TextCustomEditor__TextEditFindBarBase* self, int param1) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_Metric_IsBase(true);
        return vtextcustomeditortexteditfindbarbase->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnMetric(const TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_Metric_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_InitPainter(const TextCustomEditor__TextEditFindBarBase* self, QPainter* painter) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->initPainter(painter);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperInitPainter(const TextCustomEditor__TextEditFindBarBase* self, QPainter* painter) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_InitPainter_IsBase(true);
        vtextcustomeditortexteditfindbarbase->initPainter(painter);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnInitPainter(const TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_InitPainter_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextCustomEditor__TextEditFindBarBase_Redirected(const TextCustomEditor__TextEditFindBarBase* self, QPoint* offset) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        return vtextcustomeditortexteditfindbarbase->redirected(offset);
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextCustomEditor__TextEditFindBarBase_SuperRedirected(const TextCustomEditor__TextEditFindBarBase* self, QPoint* offset) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_Redirected_IsBase(true);
        return vtextcustomeditortexteditfindbarbase->redirected(offset);
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnRedirected(const TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_Redirected_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextCustomEditor__TextEditFindBarBase_SharedPainter(const TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        return vtextcustomeditortexteditfindbarbase->sharedPainter();
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextCustomEditor__TextEditFindBarBase_SuperSharedPainter(const TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_SharedPainter_IsBase(true);
        return vtextcustomeditortexteditfindbarbase->sharedPainter();
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnSharedPainter(const TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_SharedPainter_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_InputMethodEvent(TextCustomEditor__TextEditFindBarBase* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->inputMethodEvent(param1);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperInputMethodEvent(TextCustomEditor__TextEditFindBarBase* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_InputMethodEvent_IsBase(true);
        vtextcustomeditortexteditfindbarbase->inputMethodEvent(param1);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnInputMethodEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_InputMethodEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextCustomEditor__TextEditFindBarBase_InputMethodQuery(const TextCustomEditor__TextEditFindBarBase* self, int param1) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        return new QVariant(vtextcustomeditortexteditfindbarbase->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextCustomEditorTextEditFindBarBase*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* TextCustomEditor__TextEditFindBarBase_SuperInputMethodQuery(const TextCustomEditor__TextEditFindBarBase* self, int param1) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_InputMethodQuery_IsBase(true);
        return new QVariant(vtextcustomeditortexteditfindbarbase->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextCustomEditorTextEditFindBarBase*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnInputMethodQuery(const TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_InputMethodQuery_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__TextEditFindBarBase_FocusNextPrevChild(TextCustomEditor__TextEditFindBarBase* self, bool next) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        return vtextcustomeditortexteditfindbarbase->focusNextPrevChild(next);
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextCustomEditor__TextEditFindBarBase_SuperFocusNextPrevChild(TextCustomEditor__TextEditFindBarBase* self, bool next) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_FocusNextPrevChild_IsBase(true);
        return vtextcustomeditortexteditfindbarbase->focusNextPrevChild(next);
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnFocusNextPrevChild(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__TextEditFindBarBase_EventFilter(TextCustomEditor__TextEditFindBarBase* self, QObject* watched, QEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        return vtextcustomeditortexteditfindbarbase->eventFilter(watched, event);
    } else {
        return self->TextCustomEditor::TextEditFindBarBase::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextCustomEditor__TextEditFindBarBase_SuperEventFilter(TextCustomEditor__TextEditFindBarBase* self, QObject* watched, QEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_EventFilter_IsBase(true);
        return vtextcustomeditortexteditfindbarbase->eventFilter(watched, event);
    } else {
        return self->TextCustomEditor::TextEditFindBarBase::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnEventFilter(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_EventFilter_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_TimerEvent(TextCustomEditor__TextEditFindBarBase* self, QTimerEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->timerEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperTimerEvent(TextCustomEditor__TextEditFindBarBase* self, QTimerEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_TimerEvent_IsBase(true);
        vtextcustomeditortexteditfindbarbase->timerEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnTimerEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_TimerEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_ChildEvent(TextCustomEditor__TextEditFindBarBase* self, QChildEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->childEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperChildEvent(TextCustomEditor__TextEditFindBarBase* self, QChildEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_ChildEvent_IsBase(true);
        vtextcustomeditortexteditfindbarbase->childEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnChildEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_ChildEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_CustomEvent(TextCustomEditor__TextEditFindBarBase* self, QEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->customEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperCustomEvent(TextCustomEditor__TextEditFindBarBase* self, QEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_CustomEvent_IsBase(true);
        vtextcustomeditortexteditfindbarbase->customEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnCustomEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_CustomEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_ConnectNotify(TextCustomEditor__TextEditFindBarBase* self, const QMetaMethod* signal) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->connectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperConnectNotify(TextCustomEditor__TextEditFindBarBase* self, const QMetaMethod* signal) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_ConnectNotify_IsBase(true);
        vtextcustomeditortexteditfindbarbase->connectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnConnectNotify(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_ConnectNotify_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_DisconnectNotify(TextCustomEditor__TextEditFindBarBase* self, const QMetaMethod* signal) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->disconnectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperDisconnectNotify(TextCustomEditor__TextEditFindBarBase* self, const QMetaMethod* signal) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_DisconnectNotify_IsBase(true);
        vtextcustomeditortexteditfindbarbase->disconnectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnDisconnectNotify(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_DisconnectNotify_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_ClearSelections(TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->clearSelections();
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->clearSelections();
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperClearSelections(TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_ClearSelections_IsBase(true);
        vtextcustomeditortexteditfindbarbase->clearSelections();
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->clearSelections();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnClearSelections(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_ClearSelections_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_ClearSelections_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__TextEditFindBarBase_SearchText(TextCustomEditor__TextEditFindBarBase* self, bool backward, bool isAutoSearch) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        return vtextcustomeditortexteditfindbarbase->searchText(backward, isAutoSearch);
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->searchText(backward, isAutoSearch);
    }
}

// Base class handler implementation
bool TextCustomEditor__TextEditFindBarBase_SuperSearchText(TextCustomEditor__TextEditFindBarBase* self, bool backward, bool isAutoSearch) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_SearchText_IsBase(true);
        return vtextcustomeditortexteditfindbarbase->searchText(backward, isAutoSearch);
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->searchText(backward, isAutoSearch);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnSearchText(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_SearchText_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_SearchText_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_SetFoundMatch(TextCustomEditor__TextEditFindBarBase* self, bool match) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setFoundMatch(match);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->setFoundMatch(match);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperSetFoundMatch(TextCustomEditor__TextEditFindBarBase* self, bool match) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_SetFoundMatch_IsBase(true);
        vtextcustomeditortexteditfindbarbase->setFoundMatch(match);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->setFoundMatch(match);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnSetFoundMatch(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_SetFoundMatch_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_SetFoundMatch_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_MessageInfo(TextCustomEditor__TextEditFindBarBase* self, bool backward, bool isAutoSearch, bool found) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->messageInfo(backward, isAutoSearch, found);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->messageInfo(backward, isAutoSearch, found);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperMessageInfo(TextCustomEditor__TextEditFindBarBase* self, bool backward, bool isAutoSearch, bool found) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_MessageInfo_IsBase(true);
        vtextcustomeditortexteditfindbarbase->messageInfo(backward, isAutoSearch, found);
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->messageInfo(backward, isAutoSearch, found);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnMessageInfo(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_MessageInfo_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_MessageInfo_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_UpdateMicroFocus(TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->updateMicroFocus();
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperUpdateMicroFocus(TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_UpdateMicroFocus_IsBase(true);
        vtextcustomeditortexteditfindbarbase->updateMicroFocus();
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnUpdateMicroFocus(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_Create(TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->create();
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->create();
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperCreate(TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_Create_IsBase(true);
        vtextcustomeditortexteditfindbarbase->create();
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnCreate(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_Create_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_Destroy(TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->destroy();
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->destroy();
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperDestroy(TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_Destroy_IsBase(true);
        vtextcustomeditortexteditfindbarbase->destroy();
    } else {
        ((VirtualTextCustomEditorTextEditFindBarBase*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnDestroy(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_Destroy_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__TextEditFindBarBase_FocusNextChild(TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        return vtextcustomeditortexteditfindbarbase->focusNextChild();
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextCustomEditor__TextEditFindBarBase_SuperFocusNextChild(TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_FocusNextChild_IsBase(true);
        return vtextcustomeditortexteditfindbarbase->focusNextChild();
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnFocusNextChild(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_FocusNextChild_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__TextEditFindBarBase_FocusPreviousChild(TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        return vtextcustomeditortexteditfindbarbase->focusPreviousChild();
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextCustomEditor__TextEditFindBarBase_SuperFocusPreviousChild(TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_FocusPreviousChild_IsBase(true);
        return vtextcustomeditortexteditfindbarbase->focusPreviousChild();
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnFocusPreviousChild(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextCustomEditor__TextEditFindBarBase_Sender(const TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        return vtextcustomeditortexteditfindbarbase->sender();
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextCustomEditor__TextEditFindBarBase_SuperSender(const TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_Sender_IsBase(true);
        return vtextcustomeditortexteditfindbarbase->sender();
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnSender(const TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_Sender_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__TextEditFindBarBase_SenderSignalIndex(const TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        return vtextcustomeditortexteditfindbarbase->senderSignalIndex();
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextCustomEditor__TextEditFindBarBase_SuperSenderSignalIndex(const TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_SenderSignalIndex_IsBase(true);
        return vtextcustomeditortexteditfindbarbase->senderSignalIndex();
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnSenderSignalIndex(const TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__TextEditFindBarBase_Receivers(const TextCustomEditor__TextEditFindBarBase* self, const char* signal) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        return vtextcustomeditortexteditfindbarbase->receivers(signal);
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextCustomEditor__TextEditFindBarBase_SuperReceivers(const TextCustomEditor__TextEditFindBarBase* self, const char* signal) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_Receivers_IsBase(true);
        return vtextcustomeditortexteditfindbarbase->receivers(signal);
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnReceivers(const TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_Receivers_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__TextEditFindBarBase_IsSignalConnected(const TextCustomEditor__TextEditFindBarBase* self, const QMetaMethod* signal) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        return vtextcustomeditortexteditfindbarbase->isSignalConnected(*signal);
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextCustomEditor__TextEditFindBarBase_SuperIsSignalConnected(const TextCustomEditor__TextEditFindBarBase* self, const QMetaMethod* signal) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_IsSignalConnected_IsBase(true);
        return vtextcustomeditortexteditfindbarbase->isSignalConnected(*signal);
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnIsSignalConnected(const TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_IsSignalConnected_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextCustomEditor__TextEditFindBarBase_GetDecodedMetricF(const TextCustomEditor__TextEditFindBarBase* self, int metricA, int metricB) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        return vtextcustomeditortexteditfindbarbase->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextCustomEditor__TextEditFindBarBase_SuperGetDecodedMetricF(const TextCustomEditor__TextEditFindBarBase* self, int metricA, int metricB) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_GetDecodedMetricF_IsBase(true);
        return vtextcustomeditortexteditfindbarbase->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextCustomEditorTextEditFindBarBase*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnGetDecodedMetricF(const TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase && vtextcustomeditortexteditfindbarbase->isVirtualTextCustomEditorTextEditFindBarBase) {
        vtextcustomeditortexteditfindbarbase->setTextCustomEditor__TextEditFindBarBase_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_GetDecodedMetricF_Callback>(slot));
    }
}

void TextCustomEditor__TextEditFindBarBase_Delete(TextCustomEditor__TextEditFindBarBase* self) {
    delete self;
}
