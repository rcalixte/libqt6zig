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
    return (QMetaObject*)self->metaObject();
}

void* TextCustomEditor__PlainTextEditFindBar_Metacast(TextCustomEditor__PlainTextEditFindBar* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextCustomEditor__PlainTextEditFindBar_Metacall(TextCustomEditor__PlainTextEditFindBar* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextCustomEditor__PlainTextEditFindBar_Tr(const char* s) {
    auto _ret = TextCustomEditor::PlainTextEditFindBar::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool TextCustomEditor__PlainTextEditFindBar_ViewIsReadOnly(const TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditor__plaintexteditfindbar = dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditor__plaintexteditfindbar) {
        return vtextcustomeditor__plaintexteditfindbar->viewIsReadOnly();
    }
    qFatal("Error: Protected method TextCustomEditor::PlainTextEditFindBar::viewIsReadOnly called without a directly constructed type");
}

bool TextCustomEditor__PlainTextEditFindBar_DocumentIsEmpty(const TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditor__plaintexteditfindbar = dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditor__plaintexteditfindbar) {
        return vtextcustomeditor__plaintexteditfindbar->documentIsEmpty();
    }
    qFatal("Error: Protected method TextCustomEditor::PlainTextEditFindBar::documentIsEmpty called without a directly constructed type");
}

bool TextCustomEditor__PlainTextEditFindBar_SearchInDocument(TextCustomEditor__PlainTextEditFindBar* self, const libqt_string text, int searchOptions) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vtextcustomeditor__plaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditor__plaintexteditfindbar) {
        return vtextcustomeditor__plaintexteditfindbar->searchInDocument(text_QString, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    }
    qFatal("Error: Protected method TextCustomEditor::PlainTextEditFindBar::searchInDocument called without a directly constructed type");
}

bool TextCustomEditor__PlainTextEditFindBar_SearchInDocument2(TextCustomEditor__PlainTextEditFindBar* self, const QRegularExpression* regExp, int searchOptions) {
    auto* vtextcustomeditor__plaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditor__plaintexteditfindbar) {
        return vtextcustomeditor__plaintexteditfindbar->searchInDocument(*regExp, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    }
    qFatal("Error: Protected method TextCustomEditor::PlainTextEditFindBar::searchInDocument2 called without a directly constructed type");
}

void TextCustomEditor__PlainTextEditFindBar_AutoSearchMoveCursor(TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditor__plaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditor__plaintexteditfindbar) {
        vtextcustomeditor__plaintexteditfindbar->autoSearchMoveCursor();
    }
}

void TextCustomEditor__PlainTextEditFindBar_SlotSearchText(TextCustomEditor__PlainTextEditFindBar* self, bool backward, bool isAutoSearch) {
    self->slotSearchText(backward, isAutoSearch);
}

libqt_string TextCustomEditor__PlainTextEditFindBar_Tr2(const char* s, const char* c) {
    auto _ret = TextCustomEditor::PlainTextEditFindBar::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextCustomEditor__PlainTextEditFindBar_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextCustomEditor::PlainTextEditFindBar::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextCustomEditor__PlainTextEditFindBar_SuperMetaObject(const TextCustomEditor__PlainTextEditFindBar* self) {
    return (QMetaObject*)self->TextCustomEditor::PlainTextEditFindBar::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnMetaObject(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self)))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_metaobject_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextCustomEditor__PlainTextEditFindBar_SuperMetacast(TextCustomEditor__PlainTextEditFindBar* self, const char* param1) {
    return self->TextCustomEditor::PlainTextEditFindBar::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnMetacast(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_metacast_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditFindBar_SuperMetacall(TextCustomEditor__PlainTextEditFindBar* self, int param1, int param2, void** param3) {
    return self->TextCustomEditor::PlainTextEditFindBar::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnMetacall(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_metacall_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_Metacall_Callback>(slot);
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_SuperViewIsReadOnly(const TextCustomEditor__PlainTextEditFindBar* self) {
    if (auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self))) {
        return vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::viewIsReadOnly();
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::viewIsReadOnly called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnViewIsReadOnly(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self)))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_viewisreadonly_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_ViewIsReadOnly_Callback>(slot);
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_SuperDocumentIsEmpty(const TextCustomEditor__PlainTextEditFindBar* self) {
    if (auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self))) {
        return vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::documentIsEmpty();
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::documentIsEmpty called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnDocumentIsEmpty(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self)))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_documentisempty_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_DocumentIsEmpty_Callback>(slot);
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_SuperSearchInDocument(TextCustomEditor__PlainTextEditFindBar* self, const libqt_string text, int searchOptions) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        return vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::searchInDocument(text_QString, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::searchInDocument called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnSearchInDocument(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_searchindocument_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_SearchInDocument_Callback>(slot);
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_SuperSearchInDocument2(TextCustomEditor__PlainTextEditFindBar* self, const QRegularExpression* regExp, int searchOptions) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        return vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::searchInDocument(*regExp, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::searchInDocument2 called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnSearchInDocument2(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_searchindocument2_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_SearchInDocument2_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperAutoSearchMoveCursor(TextCustomEditor__PlainTextEditFindBar* self) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::autoSearchMoveCursor();
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::autoSearchMoveCursor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnAutoSearchMoveCursor(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_autosearchmovecursor_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_AutoSearchMoveCursor_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperSlotSearchText(TextCustomEditor__PlainTextEditFindBar* self, bool backward, bool isAutoSearch) {
    self->TextCustomEditor::PlainTextEditFindBar::slotSearchText(backward, isAutoSearch);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnSlotSearchText(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_slotsearchtext_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_SlotSearchText_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_Event(TextCustomEditor__PlainTextEditFindBar* self, QEvent* e) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        return vtextcustomeditorplaintexteditfindbar->event(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_SuperEvent(TextCustomEditor__PlainTextEditFindBar* self, QEvent* e) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        return vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::event(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_event_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_Event_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__PlainTextEditFindBar_DevType(const TextCustomEditor__PlainTextEditFindBar* self) {
    return self->devType();
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditFindBar_SuperDevType(const TextCustomEditor__PlainTextEditFindBar* self) {
    return self->TextCustomEditor::PlainTextEditFindBar::devType();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnDevType(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self)))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_devtype_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SetVisible(TextCustomEditor__PlainTextEditFindBar* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperSetVisible(TextCustomEditor__PlainTextEditFindBar* self, bool visible) {
    self->TextCustomEditor::PlainTextEditFindBar::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnSetVisible(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_setvisible_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* TextCustomEditor__PlainTextEditFindBar_SizeHint(const TextCustomEditor__PlainTextEditFindBar* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextCustomEditor__PlainTextEditFindBar_SuperSizeHint(const TextCustomEditor__PlainTextEditFindBar* self) {
    return new QSize(self->TextCustomEditor::PlainTextEditFindBar::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnSizeHint(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self)))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_sizehint_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextCustomEditor__PlainTextEditFindBar_MinimumSizeHint(const TextCustomEditor__PlainTextEditFindBar* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextCustomEditor__PlainTextEditFindBar_SuperMinimumSizeHint(const TextCustomEditor__PlainTextEditFindBar* self) {
    return new QSize(self->TextCustomEditor::PlainTextEditFindBar::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnMinimumSizeHint(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self)))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_minimumsizehint_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__PlainTextEditFindBar_HeightForWidth(const TextCustomEditor__PlainTextEditFindBar* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditFindBar_SuperHeightForWidth(const TextCustomEditor__PlainTextEditFindBar* self, int param1) {
    return self->TextCustomEditor::PlainTextEditFindBar::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnHeightForWidth(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self)))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_heightforwidth_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_HasHeightForWidth(const TextCustomEditor__PlainTextEditFindBar* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_SuperHasHeightForWidth(const TextCustomEditor__PlainTextEditFindBar* self) {
    return self->TextCustomEditor::PlainTextEditFindBar::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnHasHeightForWidth(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self)))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_hasheightforwidth_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextCustomEditor__PlainTextEditFindBar_PaintEngine(const TextCustomEditor__PlainTextEditFindBar* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextCustomEditor__PlainTextEditFindBar_SuperPaintEngine(const TextCustomEditor__PlainTextEditFindBar* self) {
    return self->TextCustomEditor::PlainTextEditFindBar::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnPaintEngine(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self)))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_paintengine_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_MousePressEvent(TextCustomEditor__PlainTextEditFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperMousePressEvent(TextCustomEditor__PlainTextEditFindBar* self, QMouseEvent* event) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnMousePressEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_mousepressevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_MouseReleaseEvent(TextCustomEditor__PlainTextEditFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperMouseReleaseEvent(TextCustomEditor__PlainTextEditFindBar* self, QMouseEvent* event) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnMouseReleaseEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_mousereleaseevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_MouseDoubleClickEvent(TextCustomEditor__PlainTextEditFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperMouseDoubleClickEvent(TextCustomEditor__PlainTextEditFindBar* self, QMouseEvent* event) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnMouseDoubleClickEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_MouseMoveEvent(TextCustomEditor__PlainTextEditFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperMouseMoveEvent(TextCustomEditor__PlainTextEditFindBar* self, QMouseEvent* event) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnMouseMoveEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_mousemoveevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_WheelEvent(TextCustomEditor__PlainTextEditFindBar* self, QWheelEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperWheelEvent(TextCustomEditor__PlainTextEditFindBar* self, QWheelEvent* event) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnWheelEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_wheelevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_KeyPressEvent(TextCustomEditor__PlainTextEditFindBar* self, QKeyEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperKeyPressEvent(TextCustomEditor__PlainTextEditFindBar* self, QKeyEvent* event) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnKeyPressEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_keypressevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_KeyReleaseEvent(TextCustomEditor__PlainTextEditFindBar* self, QKeyEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperKeyReleaseEvent(TextCustomEditor__PlainTextEditFindBar* self, QKeyEvent* event) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnKeyReleaseEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_keyreleaseevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_FocusInEvent(TextCustomEditor__PlainTextEditFindBar* self, QFocusEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperFocusInEvent(TextCustomEditor__PlainTextEditFindBar* self, QFocusEvent* event) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnFocusInEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_focusinevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_FocusOutEvent(TextCustomEditor__PlainTextEditFindBar* self, QFocusEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperFocusOutEvent(TextCustomEditor__PlainTextEditFindBar* self, QFocusEvent* event) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnFocusOutEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_focusoutevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_EnterEvent(TextCustomEditor__PlainTextEditFindBar* self, QEnterEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperEnterEvent(TextCustomEditor__PlainTextEditFindBar* self, QEnterEvent* event) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnEnterEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_enterevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_LeaveEvent(TextCustomEditor__PlainTextEditFindBar* self, QEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperLeaveEvent(TextCustomEditor__PlainTextEditFindBar* self, QEvent* event) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnLeaveEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_leaveevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_PaintEvent(TextCustomEditor__PlainTextEditFindBar* self, QPaintEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperPaintEvent(TextCustomEditor__PlainTextEditFindBar* self, QPaintEvent* event) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnPaintEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_paintevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_MoveEvent(TextCustomEditor__PlainTextEditFindBar* self, QMoveEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperMoveEvent(TextCustomEditor__PlainTextEditFindBar* self, QMoveEvent* event) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnMoveEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_moveevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_ResizeEvent(TextCustomEditor__PlainTextEditFindBar* self, QResizeEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperResizeEvent(TextCustomEditor__PlainTextEditFindBar* self, QResizeEvent* event) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnResizeEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_resizeevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_CloseEvent(TextCustomEditor__PlainTextEditFindBar* self, QCloseEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperCloseEvent(TextCustomEditor__PlainTextEditFindBar* self, QCloseEvent* event) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnCloseEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_closeevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_ContextMenuEvent(TextCustomEditor__PlainTextEditFindBar* self, QContextMenuEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperContextMenuEvent(TextCustomEditor__PlainTextEditFindBar* self, QContextMenuEvent* event) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnContextMenuEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_contextmenuevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_TabletEvent(TextCustomEditor__PlainTextEditFindBar* self, QTabletEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperTabletEvent(TextCustomEditor__PlainTextEditFindBar* self, QTabletEvent* event) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnTabletEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_tabletevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_ActionEvent(TextCustomEditor__PlainTextEditFindBar* self, QActionEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperActionEvent(TextCustomEditor__PlainTextEditFindBar* self, QActionEvent* event) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnActionEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_actionevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_DragEnterEvent(TextCustomEditor__PlainTextEditFindBar* self, QDragEnterEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperDragEnterEvent(TextCustomEditor__PlainTextEditFindBar* self, QDragEnterEvent* event) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnDragEnterEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_dragenterevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_DragMoveEvent(TextCustomEditor__PlainTextEditFindBar* self, QDragMoveEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperDragMoveEvent(TextCustomEditor__PlainTextEditFindBar* self, QDragMoveEvent* event) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnDragMoveEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_dragmoveevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_DragLeaveEvent(TextCustomEditor__PlainTextEditFindBar* self, QDragLeaveEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperDragLeaveEvent(TextCustomEditor__PlainTextEditFindBar* self, QDragLeaveEvent* event) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnDragLeaveEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_dragleaveevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_DropEvent(TextCustomEditor__PlainTextEditFindBar* self, QDropEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperDropEvent(TextCustomEditor__PlainTextEditFindBar* self, QDropEvent* event) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnDropEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_dropevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_ShowEvent(TextCustomEditor__PlainTextEditFindBar* self, QShowEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperShowEvent(TextCustomEditor__PlainTextEditFindBar* self, QShowEvent* event) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::showEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnShowEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_showevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_HideEvent(TextCustomEditor__PlainTextEditFindBar* self, QHideEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperHideEvent(TextCustomEditor__PlainTextEditFindBar* self, QHideEvent* event) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnHideEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_hideevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_NativeEvent(TextCustomEditor__PlainTextEditFindBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        return vtextcustomeditorplaintexteditfindbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_SuperNativeEvent(TextCustomEditor__PlainTextEditFindBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        return vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnNativeEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_nativeevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_ChangeEvent(TextCustomEditor__PlainTextEditFindBar* self, QEvent* param1) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperChangeEvent(TextCustomEditor__PlainTextEditFindBar* self, QEvent* param1) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnChangeEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_changeevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__PlainTextEditFindBar_Metric(const TextCustomEditor__PlainTextEditFindBar* self, int param1) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar) {
        return vtextcustomeditorplaintexteditfindbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditFindBar_SuperMetric(const TextCustomEditor__PlainTextEditFindBar* self, int param1) {
    if (auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self))) {
        return vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnMetric(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self)))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_metric_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_InitPainter(const TextCustomEditor__PlainTextEditFindBar* self, QPainter* painter) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperInitPainter(const TextCustomEditor__PlainTextEditFindBar* self, QPainter* painter) {
    if (auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self))) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnInitPainter(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self)))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_initpainter_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextCustomEditor__PlainTextEditFindBar_Redirected(const TextCustomEditor__PlainTextEditFindBar* self, QPoint* offset) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar) {
        return vtextcustomeditorplaintexteditfindbar->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextCustomEditor__PlainTextEditFindBar_SuperRedirected(const TextCustomEditor__PlainTextEditFindBar* self, QPoint* offset) {
    if (auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self))) {
        return vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnRedirected(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self)))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_redirected_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextCustomEditor__PlainTextEditFindBar_SharedPainter(const TextCustomEditor__PlainTextEditFindBar* self) {
    auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self));
    if (vtextcustomeditorplaintexteditfindbar) {
        return vtextcustomeditorplaintexteditfindbar->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextCustomEditor__PlainTextEditFindBar_SuperSharedPainter(const TextCustomEditor__PlainTextEditFindBar* self) {
    if (auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self))) {
        return vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnSharedPainter(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self)))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_sharedpainter_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_InputMethodEvent(TextCustomEditor__PlainTextEditFindBar* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperInputMethodEvent(TextCustomEditor__PlainTextEditFindBar* self, QInputMethodEvent* param1) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnInputMethodEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_inputmethodevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextCustomEditor__PlainTextEditFindBar_InputMethodQuery(const TextCustomEditor__PlainTextEditFindBar* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* TextCustomEditor__PlainTextEditFindBar_SuperInputMethodQuery(const TextCustomEditor__PlainTextEditFindBar* self, int param1) {
    return new QVariant(self->TextCustomEditor::PlainTextEditFindBar::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnInputMethodQuery(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self)))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_inputmethodquery_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_FocusNextPrevChild(TextCustomEditor__PlainTextEditFindBar* self, bool next) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        return vtextcustomeditorplaintexteditfindbar->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_SuperFocusNextPrevChild(TextCustomEditor__PlainTextEditFindBar* self, bool next) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        return vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnFocusNextPrevChild(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_focusnextprevchild_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_EventFilter(TextCustomEditor__PlainTextEditFindBar* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditFindBar_SuperEventFilter(TextCustomEditor__PlainTextEditFindBar* self, QObject* watched, QEvent* event) {
    return self->TextCustomEditor::PlainTextEditFindBar::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnEventFilter(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_eventfilter_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_TimerEvent(TextCustomEditor__PlainTextEditFindBar* self, QTimerEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperTimerEvent(TextCustomEditor__PlainTextEditFindBar* self, QTimerEvent* event) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnTimerEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_timerevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_ChildEvent(TextCustomEditor__PlainTextEditFindBar* self, QChildEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperChildEvent(TextCustomEditor__PlainTextEditFindBar* self, QChildEvent* event) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnChildEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_childevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_CustomEvent(TextCustomEditor__PlainTextEditFindBar* self, QEvent* event) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperCustomEvent(TextCustomEditor__PlainTextEditFindBar* self, QEvent* event) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnCustomEvent(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_customevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_ConnectNotify(TextCustomEditor__PlainTextEditFindBar* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperConnectNotify(TextCustomEditor__PlainTextEditFindBar* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnConnectNotify(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_connectnotify_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditFindBar_DisconnectNotify(TextCustomEditor__PlainTextEditFindBar* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self);
    if (vtextcustomeditorplaintexteditfindbar) {
        vtextcustomeditorplaintexteditfindbar->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditFindBar_SuperDisconnectNotify(TextCustomEditor__PlainTextEditFindBar* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->TextCustomEditor::PlainTextEditFindBar::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditFindBar::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditFindBar_OnDisconnectNotify(TextCustomEditor__PlainTextEditFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self))
        vtextcustomeditorplaintexteditfindbar->textcustomeditor__plaintexteditfindbar_disconnectnotify_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditFindBar::TextCustomEditor__PlainTextEditFindBar_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextCustomEditor__PlainTextEditFindBar_ClearSelections(TextCustomEditor__PlainTextEditFindBar* self) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->VirtualTextCustomEditorPlainTextEditFindBar::clearSelections();
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditFindBar::clearSelections called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__PlainTextEditFindBar_SearchText(TextCustomEditor__PlainTextEditFindBar* self, bool backward, bool isAutoSearch) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        return vtextcustomeditorplaintexteditfindbar->VirtualTextCustomEditorPlainTextEditFindBar::searchText(backward, isAutoSearch);
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditFindBar::searchText called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__PlainTextEditFindBar_SetFoundMatch(TextCustomEditor__PlainTextEditFindBar* self, bool match) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->VirtualTextCustomEditorPlainTextEditFindBar::setFoundMatch(match);
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditFindBar::setFoundMatch called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__PlainTextEditFindBar_MessageInfo(TextCustomEditor__PlainTextEditFindBar* self, bool backward, bool isAutoSearch, bool found) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->VirtualTextCustomEditorPlainTextEditFindBar::messageInfo(backward, isAutoSearch, found);
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditFindBar::messageInfo called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__PlainTextEditFindBar_UpdateMicroFocus(TextCustomEditor__PlainTextEditFindBar* self) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->VirtualTextCustomEditorPlainTextEditFindBar::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditFindBar::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__PlainTextEditFindBar_Create(TextCustomEditor__PlainTextEditFindBar* self) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->VirtualTextCustomEditorPlainTextEditFindBar::create();
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditFindBar::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__PlainTextEditFindBar_Destroy(TextCustomEditor__PlainTextEditFindBar* self) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        vtextcustomeditorplaintexteditfindbar->VirtualTextCustomEditorPlainTextEditFindBar::destroy();
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditFindBar::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__PlainTextEditFindBar_FocusNextChild(TextCustomEditor__PlainTextEditFindBar* self) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        return vtextcustomeditorplaintexteditfindbar->VirtualTextCustomEditorPlainTextEditFindBar::focusNextChild();
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditFindBar::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__PlainTextEditFindBar_FocusPreviousChild(TextCustomEditor__PlainTextEditFindBar* self) {
    if (auto* vtextcustomeditorplaintexteditfindbar = dynamic_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(self)) {
        return vtextcustomeditorplaintexteditfindbar->VirtualTextCustomEditorPlainTextEditFindBar::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditFindBar::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextCustomEditor__PlainTextEditFindBar_Sender(const TextCustomEditor__PlainTextEditFindBar* self) {
    if (auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self))) {
        return vtextcustomeditorplaintexteditfindbar->VirtualTextCustomEditorPlainTextEditFindBar::sender();
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditFindBar::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextCustomEditor__PlainTextEditFindBar_SenderSignalIndex(const TextCustomEditor__PlainTextEditFindBar* self) {
    if (auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self))) {
        return vtextcustomeditorplaintexteditfindbar->VirtualTextCustomEditorPlainTextEditFindBar::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditFindBar::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextCustomEditor__PlainTextEditFindBar_Receivers(const TextCustomEditor__PlainTextEditFindBar* self, const char* signal) {
    if (auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self))) {
        return vtextcustomeditorplaintexteditfindbar->VirtualTextCustomEditorPlainTextEditFindBar::receivers(signal);
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditFindBar::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__PlainTextEditFindBar_IsSignalConnected(const TextCustomEditor__PlainTextEditFindBar* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self))) {
        return vtextcustomeditorplaintexteditfindbar->VirtualTextCustomEditorPlainTextEditFindBar::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditFindBar::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextCustomEditor__PlainTextEditFindBar_GetDecodedMetricF(const TextCustomEditor__PlainTextEditFindBar* self, int metricA, int metricB) {
    if (auto* vtextcustomeditorplaintexteditfindbar = const_cast<VirtualTextCustomEditorPlainTextEditFindBar*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditFindBar*>(self))) {
        return vtextcustomeditorplaintexteditfindbar->VirtualTextCustomEditorPlainTextEditFindBar::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditFindBar::getDecodedMetricF called without a directly constructed type");
}

void TextCustomEditor__PlainTextEditFindBar_Delete(TextCustomEditor__PlainTextEditFindBar* self) {
    delete self;
}
