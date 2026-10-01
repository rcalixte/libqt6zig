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

libqt_string TextCustomEditor__RichTextEditFindBar_Tr(const char* s) {
    auto _ret = TextCustomEditor::RichTextEditFindBar::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool TextCustomEditor__RichTextEditFindBar_ViewIsReadOnly(const TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditor__richtexteditfindbar = dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditor__richtexteditfindbar) {
        return vtextcustomeditor__richtexteditfindbar->viewIsReadOnly();
    }
    qFatal("Error: Protected method TextCustomEditor::RichTextEditFindBar::viewIsReadOnly called without a directly constructed type");
}

bool TextCustomEditor__RichTextEditFindBar_DocumentIsEmpty(const TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditor__richtexteditfindbar = dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditor__richtexteditfindbar) {
        return vtextcustomeditor__richtexteditfindbar->documentIsEmpty();
    }
    qFatal("Error: Protected method TextCustomEditor::RichTextEditFindBar::documentIsEmpty called without a directly constructed type");
}

bool TextCustomEditor__RichTextEditFindBar_SearchInDocument(TextCustomEditor__RichTextEditFindBar* self, const libqt_string text, int searchOptions) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vtextcustomeditor__richtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditor__richtexteditfindbar) {
        return vtextcustomeditor__richtexteditfindbar->searchInDocument(text_QString, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    }
    qFatal("Error: Protected method TextCustomEditor::RichTextEditFindBar::searchInDocument called without a directly constructed type");
}

bool TextCustomEditor__RichTextEditFindBar_SearchInDocument2(TextCustomEditor__RichTextEditFindBar* self, const QRegularExpression* regExp, int searchOptions) {
    auto* vtextcustomeditor__richtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditor__richtexteditfindbar) {
        return vtextcustomeditor__richtexteditfindbar->searchInDocument(*regExp, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    }
    qFatal("Error: Protected method TextCustomEditor::RichTextEditFindBar::searchInDocument2 called without a directly constructed type");
}

void TextCustomEditor__RichTextEditFindBar_AutoSearchMoveCursor(TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditor__richtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditor__richtexteditfindbar) {
        vtextcustomeditor__richtexteditfindbar->autoSearchMoveCursor();
    }
}

void TextCustomEditor__RichTextEditFindBar_SlotSearchText(TextCustomEditor__RichTextEditFindBar* self, bool backward, bool isAutoSearch) {
    self->slotSearchText(backward, isAutoSearch);
}

libqt_string TextCustomEditor__RichTextEditFindBar_Tr2(const char* s, const char* c) {
    auto _ret = TextCustomEditor::RichTextEditFindBar::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextCustomEditor__RichTextEditFindBar_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextCustomEditor::RichTextEditFindBar::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextCustomEditor__RichTextEditFindBar_SuperMetaObject(const TextCustomEditor__RichTextEditFindBar* self) {
    return (QMetaObject*)self->TextCustomEditor::RichTextEditFindBar::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnMetaObject(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self)))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_metaobject_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextCustomEditor__RichTextEditFindBar_SuperMetacast(TextCustomEditor__RichTextEditFindBar* self, const char* param1) {
    return self->TextCustomEditor::RichTextEditFindBar::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnMetacast(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_metacast_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextCustomEditor__RichTextEditFindBar_SuperMetacall(TextCustomEditor__RichTextEditFindBar* self, int param1, int param2, void** param3) {
    return self->TextCustomEditor::RichTextEditFindBar::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnMetacall(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_metacall_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_Metacall_Callback>(slot);
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditFindBar_SuperViewIsReadOnly(const TextCustomEditor__RichTextEditFindBar* self) {
    if (auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self))) {
        return vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::viewIsReadOnly();
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::viewIsReadOnly called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnViewIsReadOnly(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self)))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_viewisreadonly_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_ViewIsReadOnly_Callback>(slot);
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditFindBar_SuperDocumentIsEmpty(const TextCustomEditor__RichTextEditFindBar* self) {
    if (auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self))) {
        return vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::documentIsEmpty();
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::documentIsEmpty called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnDocumentIsEmpty(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self)))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_documentisempty_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_DocumentIsEmpty_Callback>(slot);
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditFindBar_SuperSearchInDocument(TextCustomEditor__RichTextEditFindBar* self, const libqt_string text, int searchOptions) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        return vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::searchInDocument(text_QString, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::searchInDocument called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnSearchInDocument(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_searchindocument_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_SearchInDocument_Callback>(slot);
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditFindBar_SuperSearchInDocument2(TextCustomEditor__RichTextEditFindBar* self, const QRegularExpression* regExp, int searchOptions) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        return vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::searchInDocument(*regExp, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::searchInDocument2 called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnSearchInDocument2(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_searchindocument2_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_SearchInDocument2_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperAutoSearchMoveCursor(TextCustomEditor__RichTextEditFindBar* self) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::autoSearchMoveCursor();
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::autoSearchMoveCursor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnAutoSearchMoveCursor(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_autosearchmovecursor_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_AutoSearchMoveCursor_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperSlotSearchText(TextCustomEditor__RichTextEditFindBar* self, bool backward, bool isAutoSearch) {
    self->TextCustomEditor::RichTextEditFindBar::slotSearchText(backward, isAutoSearch);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnSlotSearchText(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_slotsearchtext_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_SlotSearchText_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditFindBar_Event(TextCustomEditor__RichTextEditFindBar* self, QEvent* e) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        return vtextcustomeditorrichtexteditfindbar->event(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditFindBar_SuperEvent(TextCustomEditor__RichTextEditFindBar* self, QEvent* e) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        return vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::event(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_event_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_Event_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__RichTextEditFindBar_DevType(const TextCustomEditor__RichTextEditFindBar* self) {
    return self->devType();
}

// Base class handler implementation
int TextCustomEditor__RichTextEditFindBar_SuperDevType(const TextCustomEditor__RichTextEditFindBar* self) {
    return self->TextCustomEditor::RichTextEditFindBar::devType();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnDevType(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self)))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_devtype_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_SetVisible(TextCustomEditor__RichTextEditFindBar* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperSetVisible(TextCustomEditor__RichTextEditFindBar* self, bool visible) {
    self->TextCustomEditor::RichTextEditFindBar::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnSetVisible(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_setvisible_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* TextCustomEditor__RichTextEditFindBar_SizeHint(const TextCustomEditor__RichTextEditFindBar* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextCustomEditor__RichTextEditFindBar_SuperSizeHint(const TextCustomEditor__RichTextEditFindBar* self) {
    return new QSize(self->TextCustomEditor::RichTextEditFindBar::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnSizeHint(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self)))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_sizehint_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextCustomEditor__RichTextEditFindBar_MinimumSizeHint(const TextCustomEditor__RichTextEditFindBar* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextCustomEditor__RichTextEditFindBar_SuperMinimumSizeHint(const TextCustomEditor__RichTextEditFindBar* self) {
    return new QSize(self->TextCustomEditor::RichTextEditFindBar::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnMinimumSizeHint(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self)))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_minimumsizehint_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__RichTextEditFindBar_HeightForWidth(const TextCustomEditor__RichTextEditFindBar* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextCustomEditor__RichTextEditFindBar_SuperHeightForWidth(const TextCustomEditor__RichTextEditFindBar* self, int param1) {
    return self->TextCustomEditor::RichTextEditFindBar::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnHeightForWidth(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self)))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_heightforwidth_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditFindBar_HasHeightForWidth(const TextCustomEditor__RichTextEditFindBar* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditFindBar_SuperHasHeightForWidth(const TextCustomEditor__RichTextEditFindBar* self) {
    return self->TextCustomEditor::RichTextEditFindBar::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnHasHeightForWidth(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self)))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_hasheightforwidth_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextCustomEditor__RichTextEditFindBar_PaintEngine(const TextCustomEditor__RichTextEditFindBar* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextCustomEditor__RichTextEditFindBar_SuperPaintEngine(const TextCustomEditor__RichTextEditFindBar* self) {
    return self->TextCustomEditor::RichTextEditFindBar::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnPaintEngine(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self)))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_paintengine_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_MousePressEvent(TextCustomEditor__RichTextEditFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperMousePressEvent(TextCustomEditor__RichTextEditFindBar* self, QMouseEvent* event) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnMousePressEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_mousepressevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_MouseReleaseEvent(TextCustomEditor__RichTextEditFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperMouseReleaseEvent(TextCustomEditor__RichTextEditFindBar* self, QMouseEvent* event) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnMouseReleaseEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_mousereleaseevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_MouseDoubleClickEvent(TextCustomEditor__RichTextEditFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperMouseDoubleClickEvent(TextCustomEditor__RichTextEditFindBar* self, QMouseEvent* event) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnMouseDoubleClickEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_MouseMoveEvent(TextCustomEditor__RichTextEditFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperMouseMoveEvent(TextCustomEditor__RichTextEditFindBar* self, QMouseEvent* event) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnMouseMoveEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_mousemoveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_WheelEvent(TextCustomEditor__RichTextEditFindBar* self, QWheelEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperWheelEvent(TextCustomEditor__RichTextEditFindBar* self, QWheelEvent* event) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnWheelEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_wheelevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_KeyPressEvent(TextCustomEditor__RichTextEditFindBar* self, QKeyEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperKeyPressEvent(TextCustomEditor__RichTextEditFindBar* self, QKeyEvent* event) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnKeyPressEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_keypressevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_KeyReleaseEvent(TextCustomEditor__RichTextEditFindBar* self, QKeyEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperKeyReleaseEvent(TextCustomEditor__RichTextEditFindBar* self, QKeyEvent* event) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnKeyReleaseEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_keyreleaseevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_FocusInEvent(TextCustomEditor__RichTextEditFindBar* self, QFocusEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperFocusInEvent(TextCustomEditor__RichTextEditFindBar* self, QFocusEvent* event) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnFocusInEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_focusinevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_FocusOutEvent(TextCustomEditor__RichTextEditFindBar* self, QFocusEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperFocusOutEvent(TextCustomEditor__RichTextEditFindBar* self, QFocusEvent* event) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnFocusOutEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_focusoutevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_EnterEvent(TextCustomEditor__RichTextEditFindBar* self, QEnterEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperEnterEvent(TextCustomEditor__RichTextEditFindBar* self, QEnterEvent* event) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnEnterEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_enterevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_LeaveEvent(TextCustomEditor__RichTextEditFindBar* self, QEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperLeaveEvent(TextCustomEditor__RichTextEditFindBar* self, QEvent* event) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnLeaveEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_leaveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_PaintEvent(TextCustomEditor__RichTextEditFindBar* self, QPaintEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperPaintEvent(TextCustomEditor__RichTextEditFindBar* self, QPaintEvent* event) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnPaintEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_paintevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_MoveEvent(TextCustomEditor__RichTextEditFindBar* self, QMoveEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperMoveEvent(TextCustomEditor__RichTextEditFindBar* self, QMoveEvent* event) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnMoveEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_moveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_ResizeEvent(TextCustomEditor__RichTextEditFindBar* self, QResizeEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperResizeEvent(TextCustomEditor__RichTextEditFindBar* self, QResizeEvent* event) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnResizeEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_resizeevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_CloseEvent(TextCustomEditor__RichTextEditFindBar* self, QCloseEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperCloseEvent(TextCustomEditor__RichTextEditFindBar* self, QCloseEvent* event) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnCloseEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_closeevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_ContextMenuEvent(TextCustomEditor__RichTextEditFindBar* self, QContextMenuEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperContextMenuEvent(TextCustomEditor__RichTextEditFindBar* self, QContextMenuEvent* event) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnContextMenuEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_contextmenuevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_TabletEvent(TextCustomEditor__RichTextEditFindBar* self, QTabletEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperTabletEvent(TextCustomEditor__RichTextEditFindBar* self, QTabletEvent* event) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnTabletEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_tabletevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_ActionEvent(TextCustomEditor__RichTextEditFindBar* self, QActionEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperActionEvent(TextCustomEditor__RichTextEditFindBar* self, QActionEvent* event) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnActionEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_actionevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_DragEnterEvent(TextCustomEditor__RichTextEditFindBar* self, QDragEnterEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperDragEnterEvent(TextCustomEditor__RichTextEditFindBar* self, QDragEnterEvent* event) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnDragEnterEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_dragenterevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_DragMoveEvent(TextCustomEditor__RichTextEditFindBar* self, QDragMoveEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperDragMoveEvent(TextCustomEditor__RichTextEditFindBar* self, QDragMoveEvent* event) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnDragMoveEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_dragmoveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_DragLeaveEvent(TextCustomEditor__RichTextEditFindBar* self, QDragLeaveEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperDragLeaveEvent(TextCustomEditor__RichTextEditFindBar* self, QDragLeaveEvent* event) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnDragLeaveEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_dragleaveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_DropEvent(TextCustomEditor__RichTextEditFindBar* self, QDropEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperDropEvent(TextCustomEditor__RichTextEditFindBar* self, QDropEvent* event) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnDropEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_dropevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_ShowEvent(TextCustomEditor__RichTextEditFindBar* self, QShowEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperShowEvent(TextCustomEditor__RichTextEditFindBar* self, QShowEvent* event) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::showEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnShowEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_showevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_HideEvent(TextCustomEditor__RichTextEditFindBar* self, QHideEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperHideEvent(TextCustomEditor__RichTextEditFindBar* self, QHideEvent* event) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnHideEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_hideevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditFindBar_NativeEvent(TextCustomEditor__RichTextEditFindBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        return vtextcustomeditorrichtexteditfindbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditFindBar_SuperNativeEvent(TextCustomEditor__RichTextEditFindBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        return vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnNativeEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_nativeevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_ChangeEvent(TextCustomEditor__RichTextEditFindBar* self, QEvent* param1) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperChangeEvent(TextCustomEditor__RichTextEditFindBar* self, QEvent* param1) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnChangeEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_changeevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__RichTextEditFindBar_Metric(const TextCustomEditor__RichTextEditFindBar* self, int param1) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar) {
        return vtextcustomeditorrichtexteditfindbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextEditFindBar_SuperMetric(const TextCustomEditor__RichTextEditFindBar* self, int param1) {
    if (auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self))) {
        return vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnMetric(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self)))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_metric_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_InitPainter(const TextCustomEditor__RichTextEditFindBar* self, QPainter* painter) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperInitPainter(const TextCustomEditor__RichTextEditFindBar* self, QPainter* painter) {
    if (auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self))) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnInitPainter(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self)))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_initpainter_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextCustomEditor__RichTextEditFindBar_Redirected(const TextCustomEditor__RichTextEditFindBar* self, QPoint* offset) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar) {
        return vtextcustomeditorrichtexteditfindbar->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextCustomEditor__RichTextEditFindBar_SuperRedirected(const TextCustomEditor__RichTextEditFindBar* self, QPoint* offset) {
    if (auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self))) {
        return vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnRedirected(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self)))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_redirected_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextCustomEditor__RichTextEditFindBar_SharedPainter(const TextCustomEditor__RichTextEditFindBar* self) {
    auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self));
    if (vtextcustomeditorrichtexteditfindbar) {
        return vtextcustomeditorrichtexteditfindbar->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextCustomEditor__RichTextEditFindBar_SuperSharedPainter(const TextCustomEditor__RichTextEditFindBar* self) {
    if (auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self))) {
        return vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnSharedPainter(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self)))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_sharedpainter_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_InputMethodEvent(TextCustomEditor__RichTextEditFindBar* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperInputMethodEvent(TextCustomEditor__RichTextEditFindBar* self, QInputMethodEvent* param1) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnInputMethodEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_inputmethodevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextCustomEditor__RichTextEditFindBar_InputMethodQuery(const TextCustomEditor__RichTextEditFindBar* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* TextCustomEditor__RichTextEditFindBar_SuperInputMethodQuery(const TextCustomEditor__RichTextEditFindBar* self, int param1) {
    return new QVariant(self->TextCustomEditor::RichTextEditFindBar::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnInputMethodQuery(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self)))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_inputmethodquery_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditFindBar_FocusNextPrevChild(TextCustomEditor__RichTextEditFindBar* self, bool next) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        return vtextcustomeditorrichtexteditfindbar->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditFindBar_SuperFocusNextPrevChild(TextCustomEditor__RichTextEditFindBar* self, bool next) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        return vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnFocusNextPrevChild(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_focusnextprevchild_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditFindBar_EventFilter(TextCustomEditor__RichTextEditFindBar* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditFindBar_SuperEventFilter(TextCustomEditor__RichTextEditFindBar* self, QObject* watched, QEvent* event) {
    return self->TextCustomEditor::RichTextEditFindBar::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnEventFilter(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_eventfilter_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_TimerEvent(TextCustomEditor__RichTextEditFindBar* self, QTimerEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperTimerEvent(TextCustomEditor__RichTextEditFindBar* self, QTimerEvent* event) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnTimerEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_timerevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_ChildEvent(TextCustomEditor__RichTextEditFindBar* self, QChildEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperChildEvent(TextCustomEditor__RichTextEditFindBar* self, QChildEvent* event) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnChildEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_childevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_CustomEvent(TextCustomEditor__RichTextEditFindBar* self, QEvent* event) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperCustomEvent(TextCustomEditor__RichTextEditFindBar* self, QEvent* event) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnCustomEvent(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_customevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_ConnectNotify(TextCustomEditor__RichTextEditFindBar* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperConnectNotify(TextCustomEditor__RichTextEditFindBar* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnConnectNotify(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_connectnotify_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditFindBar_DisconnectNotify(TextCustomEditor__RichTextEditFindBar* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self);
    if (vtextcustomeditorrichtexteditfindbar) {
        vtextcustomeditorrichtexteditfindbar->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditFindBar_SuperDisconnectNotify(TextCustomEditor__RichTextEditFindBar* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->TextCustomEditor::RichTextEditFindBar::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditFindBar::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditFindBar_OnDisconnectNotify(TextCustomEditor__RichTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self))
        vtextcustomeditorrichtexteditfindbar->textcustomeditor__richtexteditfindbar_disconnectnotify_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditFindBar::TextCustomEditor__RichTextEditFindBar_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextEditFindBar_ClearSelections(TextCustomEditor__RichTextEditFindBar* self) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->VirtualTextCustomEditorRichTextEditFindBar::clearSelections();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditFindBar::clearSelections called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__RichTextEditFindBar_SearchText(TextCustomEditor__RichTextEditFindBar* self, bool backward, bool isAutoSearch) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        return vtextcustomeditorrichtexteditfindbar->VirtualTextCustomEditorRichTextEditFindBar::searchText(backward, isAutoSearch);
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditFindBar::searchText called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextEditFindBar_SetFoundMatch(TextCustomEditor__RichTextEditFindBar* self, bool match) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->VirtualTextCustomEditorRichTextEditFindBar::setFoundMatch(match);
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditFindBar::setFoundMatch called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextEditFindBar_MessageInfo(TextCustomEditor__RichTextEditFindBar* self, bool backward, bool isAutoSearch, bool found) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->VirtualTextCustomEditorRichTextEditFindBar::messageInfo(backward, isAutoSearch, found);
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditFindBar::messageInfo called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextEditFindBar_UpdateMicroFocus(TextCustomEditor__RichTextEditFindBar* self) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->VirtualTextCustomEditorRichTextEditFindBar::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditFindBar::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextEditFindBar_Create(TextCustomEditor__RichTextEditFindBar* self) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->VirtualTextCustomEditorRichTextEditFindBar::create();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditFindBar::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextEditFindBar_Destroy(TextCustomEditor__RichTextEditFindBar* self) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        vtextcustomeditorrichtexteditfindbar->VirtualTextCustomEditorRichTextEditFindBar::destroy();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditFindBar::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__RichTextEditFindBar_FocusNextChild(TextCustomEditor__RichTextEditFindBar* self) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        return vtextcustomeditorrichtexteditfindbar->VirtualTextCustomEditorRichTextEditFindBar::focusNextChild();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditFindBar::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__RichTextEditFindBar_FocusPreviousChild(TextCustomEditor__RichTextEditFindBar* self) {
    if (auto* vtextcustomeditorrichtexteditfindbar = dynamic_cast<VirtualTextCustomEditorRichTextEditFindBar*>(self)) {
        return vtextcustomeditorrichtexteditfindbar->VirtualTextCustomEditorRichTextEditFindBar::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditFindBar::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextCustomEditor__RichTextEditFindBar_Sender(const TextCustomEditor__RichTextEditFindBar* self) {
    if (auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self))) {
        return vtextcustomeditorrichtexteditfindbar->VirtualTextCustomEditorRichTextEditFindBar::sender();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditFindBar::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextCustomEditor__RichTextEditFindBar_SenderSignalIndex(const TextCustomEditor__RichTextEditFindBar* self) {
    if (auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self))) {
        return vtextcustomeditorrichtexteditfindbar->VirtualTextCustomEditorRichTextEditFindBar::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditFindBar::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextCustomEditor__RichTextEditFindBar_Receivers(const TextCustomEditor__RichTextEditFindBar* self, const char* signal) {
    if (auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self))) {
        return vtextcustomeditorrichtexteditfindbar->VirtualTextCustomEditorRichTextEditFindBar::receivers(signal);
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditFindBar::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__RichTextEditFindBar_IsSignalConnected(const TextCustomEditor__RichTextEditFindBar* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self))) {
        return vtextcustomeditorrichtexteditfindbar->VirtualTextCustomEditorRichTextEditFindBar::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditFindBar::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextCustomEditor__RichTextEditFindBar_GetDecodedMetricF(const TextCustomEditor__RichTextEditFindBar* self, int metricA, int metricB) {
    if (auto* vtextcustomeditorrichtexteditfindbar = const_cast<VirtualTextCustomEditorRichTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditFindBar*>(self))) {
        return vtextcustomeditorrichtexteditfindbar->VirtualTextCustomEditorRichTextEditFindBar::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditFindBar::getDecodedMetricF called without a directly constructed type");
}

void TextCustomEditor__RichTextEditFindBar_Delete(TextCustomEditor__RichTextEditFindBar* self) {
    delete self;
}
