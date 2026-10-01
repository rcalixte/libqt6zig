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

libqt_string TextCustomEditor__RichTextBrowserFindBar_Tr(const char* s) {
    auto _ret = TextCustomEditor::RichTextBrowserFindBar::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool TextCustomEditor__RichTextBrowserFindBar_ViewIsReadOnly(const TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditor__richtextbrowserfindbar = dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditor__richtextbrowserfindbar) {
        return vtextcustomeditor__richtextbrowserfindbar->viewIsReadOnly();
    }
    qFatal("Error: Protected method TextCustomEditor::RichTextBrowserFindBar::viewIsReadOnly called without a directly constructed type");
}

bool TextCustomEditor__RichTextBrowserFindBar_DocumentIsEmpty(const TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditor__richtextbrowserfindbar = dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditor__richtextbrowserfindbar) {
        return vtextcustomeditor__richtextbrowserfindbar->documentIsEmpty();
    }
    qFatal("Error: Protected method TextCustomEditor::RichTextBrowserFindBar::documentIsEmpty called without a directly constructed type");
}

bool TextCustomEditor__RichTextBrowserFindBar_SearchInDocument(TextCustomEditor__RichTextBrowserFindBar* self, const libqt_string text, int searchOptions) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vtextcustomeditor__richtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditor__richtextbrowserfindbar) {
        return vtextcustomeditor__richtextbrowserfindbar->searchInDocument(text_QString, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    }
    qFatal("Error: Protected method TextCustomEditor::RichTextBrowserFindBar::searchInDocument called without a directly constructed type");
}

bool TextCustomEditor__RichTextBrowserFindBar_SearchInDocument2(TextCustomEditor__RichTextBrowserFindBar* self, const QRegularExpression* regExp, int searchOptions) {
    auto* vtextcustomeditor__richtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditor__richtextbrowserfindbar) {
        return vtextcustomeditor__richtextbrowserfindbar->searchInDocument(*regExp, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    }
    qFatal("Error: Protected method TextCustomEditor::RichTextBrowserFindBar::searchInDocument2 called without a directly constructed type");
}

void TextCustomEditor__RichTextBrowserFindBar_AutoSearchMoveCursor(TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditor__richtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditor__richtextbrowserfindbar) {
        vtextcustomeditor__richtextbrowserfindbar->autoSearchMoveCursor();
    }
}

void TextCustomEditor__RichTextBrowserFindBar_SlotSearchText(TextCustomEditor__RichTextBrowserFindBar* self, bool backward, bool isAutoSearch) {
    self->slotSearchText(backward, isAutoSearch);
}

libqt_string TextCustomEditor__RichTextBrowserFindBar_Tr2(const char* s, const char* c) {
    auto _ret = TextCustomEditor::RichTextBrowserFindBar::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextCustomEditor__RichTextBrowserFindBar_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextCustomEditor::RichTextBrowserFindBar::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextCustomEditor__RichTextBrowserFindBar_SuperMetaObject(const TextCustomEditor__RichTextBrowserFindBar* self) {
    return (QMetaObject*)self->TextCustomEditor::RichTextBrowserFindBar::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnMetaObject(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self)))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_metaobject_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextCustomEditor__RichTextBrowserFindBar_SuperMetacast(TextCustomEditor__RichTextBrowserFindBar* self, const char* param1) {
    return self->TextCustomEditor::RichTextBrowserFindBar::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnMetacast(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_metacast_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowserFindBar_SuperMetacall(TextCustomEditor__RichTextBrowserFindBar* self, int param1, int param2, void** param3) {
    return self->TextCustomEditor::RichTextBrowserFindBar::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnMetacall(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_metacall_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_Metacall_Callback>(slot);
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_SuperViewIsReadOnly(const TextCustomEditor__RichTextBrowserFindBar* self) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self))) {
        return vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::viewIsReadOnly();
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::viewIsReadOnly called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnViewIsReadOnly(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self)))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_viewisreadonly_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_ViewIsReadOnly_Callback>(slot);
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_SuperDocumentIsEmpty(const TextCustomEditor__RichTextBrowserFindBar* self) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self))) {
        return vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::documentIsEmpty();
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::documentIsEmpty called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnDocumentIsEmpty(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self)))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_documentisempty_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_DocumentIsEmpty_Callback>(slot);
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_SuperSearchInDocument(TextCustomEditor__RichTextBrowserFindBar* self, const libqt_string text, int searchOptions) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        return vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::searchInDocument(text_QString, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::searchInDocument called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnSearchInDocument(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_searchindocument_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_SearchInDocument_Callback>(slot);
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_SuperSearchInDocument2(TextCustomEditor__RichTextBrowserFindBar* self, const QRegularExpression* regExp, int searchOptions) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        return vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::searchInDocument(*regExp, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::searchInDocument2 called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnSearchInDocument2(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_searchindocument2_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_SearchInDocument2_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperAutoSearchMoveCursor(TextCustomEditor__RichTextBrowserFindBar* self) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::autoSearchMoveCursor();
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::autoSearchMoveCursor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnAutoSearchMoveCursor(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_autosearchmovecursor_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_AutoSearchMoveCursor_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperSlotSearchText(TextCustomEditor__RichTextBrowserFindBar* self, bool backward, bool isAutoSearch) {
    self->TextCustomEditor::RichTextBrowserFindBar::slotSearchText(backward, isAutoSearch);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnSlotSearchText(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_slotsearchtext_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_SlotSearchText_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_Event(TextCustomEditor__RichTextBrowserFindBar* self, QEvent* e) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        return vtextcustomeditorrichtextbrowserfindbar->event(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_SuperEvent(TextCustomEditor__RichTextBrowserFindBar* self, QEvent* e) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        return vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::event(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_event_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_Event_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__RichTextBrowserFindBar_DevType(const TextCustomEditor__RichTextBrowserFindBar* self) {
    return self->devType();
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowserFindBar_SuperDevType(const TextCustomEditor__RichTextBrowserFindBar* self) {
    return self->TextCustomEditor::RichTextBrowserFindBar::devType();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnDevType(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self)))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_devtype_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SetVisible(TextCustomEditor__RichTextBrowserFindBar* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperSetVisible(TextCustomEditor__RichTextBrowserFindBar* self, bool visible) {
    self->TextCustomEditor::RichTextBrowserFindBar::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnSetVisible(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_setvisible_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* TextCustomEditor__RichTextBrowserFindBar_SizeHint(const TextCustomEditor__RichTextBrowserFindBar* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextCustomEditor__RichTextBrowserFindBar_SuperSizeHint(const TextCustomEditor__RichTextBrowserFindBar* self) {
    return new QSize(self->TextCustomEditor::RichTextBrowserFindBar::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnSizeHint(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self)))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_sizehint_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextCustomEditor__RichTextBrowserFindBar_MinimumSizeHint(const TextCustomEditor__RichTextBrowserFindBar* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextCustomEditor__RichTextBrowserFindBar_SuperMinimumSizeHint(const TextCustomEditor__RichTextBrowserFindBar* self) {
    return new QSize(self->TextCustomEditor::RichTextBrowserFindBar::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnMinimumSizeHint(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self)))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_minimumsizehint_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__RichTextBrowserFindBar_HeightForWidth(const TextCustomEditor__RichTextBrowserFindBar* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowserFindBar_SuperHeightForWidth(const TextCustomEditor__RichTextBrowserFindBar* self, int param1) {
    return self->TextCustomEditor::RichTextBrowserFindBar::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnHeightForWidth(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self)))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_heightforwidth_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_HasHeightForWidth(const TextCustomEditor__RichTextBrowserFindBar* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_SuperHasHeightForWidth(const TextCustomEditor__RichTextBrowserFindBar* self) {
    return self->TextCustomEditor::RichTextBrowserFindBar::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnHasHeightForWidth(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self)))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_hasheightforwidth_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextCustomEditor__RichTextBrowserFindBar_PaintEngine(const TextCustomEditor__RichTextBrowserFindBar* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextCustomEditor__RichTextBrowserFindBar_SuperPaintEngine(const TextCustomEditor__RichTextBrowserFindBar* self) {
    return self->TextCustomEditor::RichTextBrowserFindBar::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnPaintEngine(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self)))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_paintengine_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_MousePressEvent(TextCustomEditor__RichTextBrowserFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperMousePressEvent(TextCustomEditor__RichTextBrowserFindBar* self, QMouseEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnMousePressEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_mousepressevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_MouseReleaseEvent(TextCustomEditor__RichTextBrowserFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperMouseReleaseEvent(TextCustomEditor__RichTextBrowserFindBar* self, QMouseEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnMouseReleaseEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_mousereleaseevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_MouseDoubleClickEvent(TextCustomEditor__RichTextBrowserFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperMouseDoubleClickEvent(TextCustomEditor__RichTextBrowserFindBar* self, QMouseEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnMouseDoubleClickEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_MouseMoveEvent(TextCustomEditor__RichTextBrowserFindBar* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperMouseMoveEvent(TextCustomEditor__RichTextBrowserFindBar* self, QMouseEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnMouseMoveEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_mousemoveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_WheelEvent(TextCustomEditor__RichTextBrowserFindBar* self, QWheelEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperWheelEvent(TextCustomEditor__RichTextBrowserFindBar* self, QWheelEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnWheelEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_wheelevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_KeyPressEvent(TextCustomEditor__RichTextBrowserFindBar* self, QKeyEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperKeyPressEvent(TextCustomEditor__RichTextBrowserFindBar* self, QKeyEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnKeyPressEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_keypressevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_KeyReleaseEvent(TextCustomEditor__RichTextBrowserFindBar* self, QKeyEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperKeyReleaseEvent(TextCustomEditor__RichTextBrowserFindBar* self, QKeyEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnKeyReleaseEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_keyreleaseevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_FocusInEvent(TextCustomEditor__RichTextBrowserFindBar* self, QFocusEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperFocusInEvent(TextCustomEditor__RichTextBrowserFindBar* self, QFocusEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnFocusInEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_focusinevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_FocusOutEvent(TextCustomEditor__RichTextBrowserFindBar* self, QFocusEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperFocusOutEvent(TextCustomEditor__RichTextBrowserFindBar* self, QFocusEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnFocusOutEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_focusoutevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_EnterEvent(TextCustomEditor__RichTextBrowserFindBar* self, QEnterEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperEnterEvent(TextCustomEditor__RichTextBrowserFindBar* self, QEnterEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnEnterEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_enterevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_LeaveEvent(TextCustomEditor__RichTextBrowserFindBar* self, QEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperLeaveEvent(TextCustomEditor__RichTextBrowserFindBar* self, QEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnLeaveEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_leaveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_PaintEvent(TextCustomEditor__RichTextBrowserFindBar* self, QPaintEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperPaintEvent(TextCustomEditor__RichTextBrowserFindBar* self, QPaintEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnPaintEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_paintevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_MoveEvent(TextCustomEditor__RichTextBrowserFindBar* self, QMoveEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperMoveEvent(TextCustomEditor__RichTextBrowserFindBar* self, QMoveEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnMoveEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_moveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_ResizeEvent(TextCustomEditor__RichTextBrowserFindBar* self, QResizeEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperResizeEvent(TextCustomEditor__RichTextBrowserFindBar* self, QResizeEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnResizeEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_resizeevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_CloseEvent(TextCustomEditor__RichTextBrowserFindBar* self, QCloseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperCloseEvent(TextCustomEditor__RichTextBrowserFindBar* self, QCloseEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnCloseEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_closeevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_ContextMenuEvent(TextCustomEditor__RichTextBrowserFindBar* self, QContextMenuEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperContextMenuEvent(TextCustomEditor__RichTextBrowserFindBar* self, QContextMenuEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnContextMenuEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_contextmenuevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_TabletEvent(TextCustomEditor__RichTextBrowserFindBar* self, QTabletEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperTabletEvent(TextCustomEditor__RichTextBrowserFindBar* self, QTabletEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnTabletEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_tabletevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_ActionEvent(TextCustomEditor__RichTextBrowserFindBar* self, QActionEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperActionEvent(TextCustomEditor__RichTextBrowserFindBar* self, QActionEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnActionEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_actionevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_DragEnterEvent(TextCustomEditor__RichTextBrowserFindBar* self, QDragEnterEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperDragEnterEvent(TextCustomEditor__RichTextBrowserFindBar* self, QDragEnterEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnDragEnterEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_dragenterevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_DragMoveEvent(TextCustomEditor__RichTextBrowserFindBar* self, QDragMoveEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperDragMoveEvent(TextCustomEditor__RichTextBrowserFindBar* self, QDragMoveEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnDragMoveEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_dragmoveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_DragLeaveEvent(TextCustomEditor__RichTextBrowserFindBar* self, QDragLeaveEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperDragLeaveEvent(TextCustomEditor__RichTextBrowserFindBar* self, QDragLeaveEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnDragLeaveEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_dragleaveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_DropEvent(TextCustomEditor__RichTextBrowserFindBar* self, QDropEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperDropEvent(TextCustomEditor__RichTextBrowserFindBar* self, QDropEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnDropEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_dropevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_ShowEvent(TextCustomEditor__RichTextBrowserFindBar* self, QShowEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperShowEvent(TextCustomEditor__RichTextBrowserFindBar* self, QShowEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::showEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnShowEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_showevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_HideEvent(TextCustomEditor__RichTextBrowserFindBar* self, QHideEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperHideEvent(TextCustomEditor__RichTextBrowserFindBar* self, QHideEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnHideEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_hideevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_NativeEvent(TextCustomEditor__RichTextBrowserFindBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        return vtextcustomeditorrichtextbrowserfindbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_SuperNativeEvent(TextCustomEditor__RichTextBrowserFindBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        return vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnNativeEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_nativeevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_ChangeEvent(TextCustomEditor__RichTextBrowserFindBar* self, QEvent* param1) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperChangeEvent(TextCustomEditor__RichTextBrowserFindBar* self, QEvent* param1) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnChangeEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_changeevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__RichTextBrowserFindBar_Metric(const TextCustomEditor__RichTextBrowserFindBar* self, int param1) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar) {
        return vtextcustomeditorrichtextbrowserfindbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowserFindBar_SuperMetric(const TextCustomEditor__RichTextBrowserFindBar* self, int param1) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self))) {
        return vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnMetric(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self)))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_metric_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_InitPainter(const TextCustomEditor__RichTextBrowserFindBar* self, QPainter* painter) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperInitPainter(const TextCustomEditor__RichTextBrowserFindBar* self, QPainter* painter) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self))) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnInitPainter(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self)))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_initpainter_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextCustomEditor__RichTextBrowserFindBar_Redirected(const TextCustomEditor__RichTextBrowserFindBar* self, QPoint* offset) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar) {
        return vtextcustomeditorrichtextbrowserfindbar->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextCustomEditor__RichTextBrowserFindBar_SuperRedirected(const TextCustomEditor__RichTextBrowserFindBar* self, QPoint* offset) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self))) {
        return vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnRedirected(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self)))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_redirected_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextCustomEditor__RichTextBrowserFindBar_SharedPainter(const TextCustomEditor__RichTextBrowserFindBar* self) {
    auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self));
    if (vtextcustomeditorrichtextbrowserfindbar) {
        return vtextcustomeditorrichtextbrowserfindbar->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextCustomEditor__RichTextBrowserFindBar_SuperSharedPainter(const TextCustomEditor__RichTextBrowserFindBar* self) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self))) {
        return vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnSharedPainter(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self)))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_sharedpainter_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_InputMethodEvent(TextCustomEditor__RichTextBrowserFindBar* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperInputMethodEvent(TextCustomEditor__RichTextBrowserFindBar* self, QInputMethodEvent* param1) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnInputMethodEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_inputmethodevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextCustomEditor__RichTextBrowserFindBar_InputMethodQuery(const TextCustomEditor__RichTextBrowserFindBar* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* TextCustomEditor__RichTextBrowserFindBar_SuperInputMethodQuery(const TextCustomEditor__RichTextBrowserFindBar* self, int param1) {
    return new QVariant(self->TextCustomEditor::RichTextBrowserFindBar::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnInputMethodQuery(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self)))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_inputmethodquery_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_FocusNextPrevChild(TextCustomEditor__RichTextBrowserFindBar* self, bool next) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        return vtextcustomeditorrichtextbrowserfindbar->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_SuperFocusNextPrevChild(TextCustomEditor__RichTextBrowserFindBar* self, bool next) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        return vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnFocusNextPrevChild(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_focusnextprevchild_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_EventFilter(TextCustomEditor__RichTextBrowserFindBar* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_SuperEventFilter(TextCustomEditor__RichTextBrowserFindBar* self, QObject* watched, QEvent* event) {
    return self->TextCustomEditor::RichTextBrowserFindBar::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnEventFilter(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_eventfilter_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_TimerEvent(TextCustomEditor__RichTextBrowserFindBar* self, QTimerEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperTimerEvent(TextCustomEditor__RichTextBrowserFindBar* self, QTimerEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnTimerEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_timerevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_ChildEvent(TextCustomEditor__RichTextBrowserFindBar* self, QChildEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperChildEvent(TextCustomEditor__RichTextBrowserFindBar* self, QChildEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnChildEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_childevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_CustomEvent(TextCustomEditor__RichTextBrowserFindBar* self, QEvent* event) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperCustomEvent(TextCustomEditor__RichTextBrowserFindBar* self, QEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnCustomEvent(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_customevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_ConnectNotify(TextCustomEditor__RichTextBrowserFindBar* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperConnectNotify(TextCustomEditor__RichTextBrowserFindBar* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnConnectNotify(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_connectnotify_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_DisconnectNotify(TextCustomEditor__RichTextBrowserFindBar* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self);
    if (vtextcustomeditorrichtextbrowserfindbar) {
        vtextcustomeditorrichtextbrowserfindbar->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SuperDisconnectNotify(TextCustomEditor__RichTextBrowserFindBar* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->TextCustomEditor::RichTextBrowserFindBar::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserFindBar::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserFindBar_OnDisconnectNotify(TextCustomEditor__RichTextBrowserFindBar* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self))
        vtextcustomeditorrichtextbrowserfindbar->textcustomeditor__richtextbrowserfindbar_disconnectnotify_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserFindBar::TextCustomEditor__RichTextBrowserFindBar_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextBrowserFindBar_ClearSelections(TextCustomEditor__RichTextBrowserFindBar* self) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->VirtualTextCustomEditorRichTextBrowserFindBar::clearSelections();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowserFindBar::clearSelections called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_SearchText(TextCustomEditor__RichTextBrowserFindBar* self, bool backward, bool isAutoSearch) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        return vtextcustomeditorrichtextbrowserfindbar->VirtualTextCustomEditorRichTextBrowserFindBar::searchText(backward, isAutoSearch);
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowserFindBar::searchText called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextBrowserFindBar_SetFoundMatch(TextCustomEditor__RichTextBrowserFindBar* self, bool match) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->VirtualTextCustomEditorRichTextBrowserFindBar::setFoundMatch(match);
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowserFindBar::setFoundMatch called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextBrowserFindBar_MessageInfo(TextCustomEditor__RichTextBrowserFindBar* self, bool backward, bool isAutoSearch, bool found) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->VirtualTextCustomEditorRichTextBrowserFindBar::messageInfo(backward, isAutoSearch, found);
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowserFindBar::messageInfo called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextBrowserFindBar_UpdateMicroFocus(TextCustomEditor__RichTextBrowserFindBar* self) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->VirtualTextCustomEditorRichTextBrowserFindBar::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowserFindBar::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextBrowserFindBar_Create(TextCustomEditor__RichTextBrowserFindBar* self) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->VirtualTextCustomEditorRichTextBrowserFindBar::create();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowserFindBar::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextBrowserFindBar_Destroy(TextCustomEditor__RichTextBrowserFindBar* self) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        vtextcustomeditorrichtextbrowserfindbar->VirtualTextCustomEditorRichTextBrowserFindBar::destroy();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowserFindBar::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_FocusNextChild(TextCustomEditor__RichTextBrowserFindBar* self) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        return vtextcustomeditorrichtextbrowserfindbar->VirtualTextCustomEditorRichTextBrowserFindBar::focusNextChild();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowserFindBar::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_FocusPreviousChild(TextCustomEditor__RichTextBrowserFindBar* self) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = dynamic_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(self)) {
        return vtextcustomeditorrichtextbrowserfindbar->VirtualTextCustomEditorRichTextBrowserFindBar::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowserFindBar::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextCustomEditor__RichTextBrowserFindBar_Sender(const TextCustomEditor__RichTextBrowserFindBar* self) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self))) {
        return vtextcustomeditorrichtextbrowserfindbar->VirtualTextCustomEditorRichTextBrowserFindBar::sender();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowserFindBar::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextCustomEditor__RichTextBrowserFindBar_SenderSignalIndex(const TextCustomEditor__RichTextBrowserFindBar* self) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self))) {
        return vtextcustomeditorrichtextbrowserfindbar->VirtualTextCustomEditorRichTextBrowserFindBar::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowserFindBar::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextCustomEditor__RichTextBrowserFindBar_Receivers(const TextCustomEditor__RichTextBrowserFindBar* self, const char* signal) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self))) {
        return vtextcustomeditorrichtextbrowserfindbar->VirtualTextCustomEditorRichTextBrowserFindBar::receivers(signal);
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowserFindBar::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__RichTextBrowserFindBar_IsSignalConnected(const TextCustomEditor__RichTextBrowserFindBar* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self))) {
        return vtextcustomeditorrichtextbrowserfindbar->VirtualTextCustomEditorRichTextBrowserFindBar::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowserFindBar::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextCustomEditor__RichTextBrowserFindBar_GetDecodedMetricF(const TextCustomEditor__RichTextBrowserFindBar* self, int metricA, int metricB) {
    if (auto* vtextcustomeditorrichtextbrowserfindbar = const_cast<VirtualTextCustomEditorRichTextBrowserFindBar*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserFindBar*>(self))) {
        return vtextcustomeditorrichtextbrowserfindbar->VirtualTextCustomEditorRichTextBrowserFindBar::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowserFindBar::getDecodedMetricF called without a directly constructed type");
}

void TextCustomEditor__RichTextBrowserFindBar_Delete(TextCustomEditor__RichTextBrowserFindBar* self) {
    delete self;
}
