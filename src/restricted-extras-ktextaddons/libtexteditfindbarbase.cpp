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
    return (QMetaObject*)self->metaObject();
}

void* TextCustomEditor__TextEditFindBarBase_Metacast(TextCustomEditor__TextEditFindBarBase* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextCustomEditor__TextEditFindBarBase_Metacall(TextCustomEditor__TextEditFindBarBase* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextCustomEditor__TextEditFindBarBase_Tr(const char* s) {
    auto _ret = TextCustomEditor::TextEditFindBarBase::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextCustomEditor__TextEditFindBarBase_Text(const TextCustomEditor__TextEditFindBarBase* self) {
    auto _ret = self->text();
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
    TextCustomEditor::TextEditFindBarBase::connect(self,
                                                   static_cast<void (TextCustomEditor::TextEditFindBarBase::*)(const QString&)>(&TextCustomEditor::TextEditFindBarBase::displayMessageIndicator),
                                                   [self, slotFunc](const QString& message) {
                                                       const auto message_ret = message;
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
    TextCustomEditor::TextEditFindBarBase::connect(self,
                                                   static_cast<void (TextCustomEditor::TextEditFindBarBase::*)()>(&TextCustomEditor::TextEditFindBarBase::hideFindBar),
                                                   [self, slotFunc]() {
                                                       slotFunc(self);
                                                   });
}

bool TextCustomEditor__TextEditFindBarBase_ViewIsReadOnly(const TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditor__texteditfindbarbase = dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditor__texteditfindbarbase) {
        return vtextcustomeditor__texteditfindbarbase->viewIsReadOnly();
    }
    qFatal("Error: Protected method TextCustomEditor::TextEditFindBarBase::viewIsReadOnly called without a directly constructed type");
}

bool TextCustomEditor__TextEditFindBarBase_DocumentIsEmpty(const TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditor__texteditfindbarbase = dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditor__texteditfindbarbase) {
        return vtextcustomeditor__texteditfindbarbase->documentIsEmpty();
    }
    qFatal("Error: Protected method TextCustomEditor::TextEditFindBarBase::documentIsEmpty called without a directly constructed type");
}

bool TextCustomEditor__TextEditFindBarBase_SearchInDocument(TextCustomEditor__TextEditFindBarBase* self, const libqt_string text, int searchOptions) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vtextcustomeditor__texteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditor__texteditfindbarbase) {
        return vtextcustomeditor__texteditfindbarbase->searchInDocument(text_QString, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    }
    qFatal("Error: Protected method TextCustomEditor::TextEditFindBarBase::searchInDocument called without a directly constructed type");
}

bool TextCustomEditor__TextEditFindBarBase_SearchInDocument2(TextCustomEditor__TextEditFindBarBase* self, const QRegularExpression* regExp, int searchOptions) {
    auto* vtextcustomeditor__texteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditor__texteditfindbarbase) {
        return vtextcustomeditor__texteditfindbarbase->searchInDocument(*regExp, static_cast<TextCustomEditor::TextEditFindBarBase::FindFlags>(searchOptions));
    }
    qFatal("Error: Protected method TextCustomEditor::TextEditFindBarBase::searchInDocument2 called without a directly constructed type");
}

void TextCustomEditor__TextEditFindBarBase_AutoSearchMoveCursor(TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditor__texteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditor__texteditfindbarbase) {
        vtextcustomeditor__texteditfindbarbase->autoSearchMoveCursor();
    }
}

bool TextCustomEditor__TextEditFindBarBase_Event(TextCustomEditor__TextEditFindBarBase* self, QEvent* e) {
    auto* vtextcustomeditor__texteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditor__texteditfindbarbase) {
        return vtextcustomeditor__texteditfindbarbase->event(e);
    }
    qFatal("Error: Protected method TextCustomEditor::TextEditFindBarBase::event called without a directly constructed type");
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
    self->slotSearchText(backward, isAutoSearch);
}

void TextCustomEditor__TextEditFindBarBase_CloseBar(TextCustomEditor__TextEditFindBarBase* self) {
    self->closeBar();
}

libqt_string TextCustomEditor__TextEditFindBarBase_Tr2(const char* s, const char* c) {
    auto _ret = TextCustomEditor::TextEditFindBarBase::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextCustomEditor__TextEditFindBarBase_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextCustomEditor::TextEditFindBarBase::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextCustomEditor__TextEditFindBarBase_SuperMetaObject(const TextCustomEditor__TextEditFindBarBase* self) {
    return (QMetaObject*)self->TextCustomEditor::TextEditFindBarBase::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnMetaObject(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self)))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_metaobject_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextCustomEditor__TextEditFindBarBase_SuperMetacast(TextCustomEditor__TextEditFindBarBase* self, const char* param1) {
    return self->TextCustomEditor::TextEditFindBarBase::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnMetacast(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_metacast_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextCustomEditor__TextEditFindBarBase_SuperMetacall(TextCustomEditor__TextEditFindBarBase* self, int param1, int param2, void** param3) {
    return self->TextCustomEditor::TextEditFindBarBase::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnMetacall(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_metacall_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnViewIsReadOnly(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self)))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_viewisreadonly_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_ViewIsReadOnly_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnDocumentIsEmpty(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self)))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_documentisempty_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_DocumentIsEmpty_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnSearchInDocument(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_searchindocument_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_SearchInDocument_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnSearchInDocument2(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_searchindocument2_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_SearchInDocument2_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnAutoSearchMoveCursor(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_autosearchmovecursor_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_AutoSearchMoveCursor_Callback>(slot);
}

// Base class handler implementation
bool TextCustomEditor__TextEditFindBarBase_SuperEvent(TextCustomEditor__TextEditFindBarBase* self, QEvent* e) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        return vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::event(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_event_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_Event_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnSlotSearchText(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_slotsearchtext_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_SlotSearchText_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__TextEditFindBarBase_DevType(const TextCustomEditor__TextEditFindBarBase* self) {
    return self->devType();
}

// Base class handler implementation
int TextCustomEditor__TextEditFindBarBase_SuperDevType(const TextCustomEditor__TextEditFindBarBase* self) {
    return self->TextCustomEditor::TextEditFindBarBase::devType();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnDevType(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self)))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_devtype_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_SetVisible(TextCustomEditor__TextEditFindBarBase* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperSetVisible(TextCustomEditor__TextEditFindBarBase* self, bool visible) {
    self->TextCustomEditor::TextEditFindBarBase::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnSetVisible(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_setvisible_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* TextCustomEditor__TextEditFindBarBase_SizeHint(const TextCustomEditor__TextEditFindBarBase* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextCustomEditor__TextEditFindBarBase_SuperSizeHint(const TextCustomEditor__TextEditFindBarBase* self) {
    return new QSize(self->TextCustomEditor::TextEditFindBarBase::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnSizeHint(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self)))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_sizehint_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextCustomEditor__TextEditFindBarBase_MinimumSizeHint(const TextCustomEditor__TextEditFindBarBase* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextCustomEditor__TextEditFindBarBase_SuperMinimumSizeHint(const TextCustomEditor__TextEditFindBarBase* self) {
    return new QSize(self->TextCustomEditor::TextEditFindBarBase::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnMinimumSizeHint(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self)))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_minimumsizehint_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__TextEditFindBarBase_HeightForWidth(const TextCustomEditor__TextEditFindBarBase* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextCustomEditor__TextEditFindBarBase_SuperHeightForWidth(const TextCustomEditor__TextEditFindBarBase* self, int param1) {
    return self->TextCustomEditor::TextEditFindBarBase::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnHeightForWidth(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self)))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_heightforwidth_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__TextEditFindBarBase_HasHeightForWidth(const TextCustomEditor__TextEditFindBarBase* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextCustomEditor__TextEditFindBarBase_SuperHasHeightForWidth(const TextCustomEditor__TextEditFindBarBase* self) {
    return self->TextCustomEditor::TextEditFindBarBase::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnHasHeightForWidth(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self)))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_hasheightforwidth_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextCustomEditor__TextEditFindBarBase_PaintEngine(const TextCustomEditor__TextEditFindBarBase* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextCustomEditor__TextEditFindBarBase_SuperPaintEngine(const TextCustomEditor__TextEditFindBarBase* self) {
    return self->TextCustomEditor::TextEditFindBarBase::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnPaintEngine(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self)))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_paintengine_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_MousePressEvent(TextCustomEditor__TextEditFindBarBase* self, QMouseEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperMousePressEvent(TextCustomEditor__TextEditFindBarBase* self, QMouseEvent* event) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnMousePressEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_mousepressevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_MouseReleaseEvent(TextCustomEditor__TextEditFindBarBase* self, QMouseEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperMouseReleaseEvent(TextCustomEditor__TextEditFindBarBase* self, QMouseEvent* event) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnMouseReleaseEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_mousereleaseevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_MouseDoubleClickEvent(TextCustomEditor__TextEditFindBarBase* self, QMouseEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperMouseDoubleClickEvent(TextCustomEditor__TextEditFindBarBase* self, QMouseEvent* event) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnMouseDoubleClickEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_MouseMoveEvent(TextCustomEditor__TextEditFindBarBase* self, QMouseEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperMouseMoveEvent(TextCustomEditor__TextEditFindBarBase* self, QMouseEvent* event) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnMouseMoveEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_mousemoveevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_WheelEvent(TextCustomEditor__TextEditFindBarBase* self, QWheelEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperWheelEvent(TextCustomEditor__TextEditFindBarBase* self, QWheelEvent* event) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnWheelEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_wheelevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_KeyPressEvent(TextCustomEditor__TextEditFindBarBase* self, QKeyEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperKeyPressEvent(TextCustomEditor__TextEditFindBarBase* self, QKeyEvent* event) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnKeyPressEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_keypressevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_KeyReleaseEvent(TextCustomEditor__TextEditFindBarBase* self, QKeyEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperKeyReleaseEvent(TextCustomEditor__TextEditFindBarBase* self, QKeyEvent* event) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnKeyReleaseEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_keyreleaseevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_FocusInEvent(TextCustomEditor__TextEditFindBarBase* self, QFocusEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperFocusInEvent(TextCustomEditor__TextEditFindBarBase* self, QFocusEvent* event) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnFocusInEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_focusinevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_FocusOutEvent(TextCustomEditor__TextEditFindBarBase* self, QFocusEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperFocusOutEvent(TextCustomEditor__TextEditFindBarBase* self, QFocusEvent* event) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnFocusOutEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_focusoutevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_EnterEvent(TextCustomEditor__TextEditFindBarBase* self, QEnterEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperEnterEvent(TextCustomEditor__TextEditFindBarBase* self, QEnterEvent* event) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnEnterEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_enterevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_LeaveEvent(TextCustomEditor__TextEditFindBarBase* self, QEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperLeaveEvent(TextCustomEditor__TextEditFindBarBase* self, QEvent* event) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnLeaveEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_leaveevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_PaintEvent(TextCustomEditor__TextEditFindBarBase* self, QPaintEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperPaintEvent(TextCustomEditor__TextEditFindBarBase* self, QPaintEvent* event) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnPaintEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_paintevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_MoveEvent(TextCustomEditor__TextEditFindBarBase* self, QMoveEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperMoveEvent(TextCustomEditor__TextEditFindBarBase* self, QMoveEvent* event) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnMoveEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_moveevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_ResizeEvent(TextCustomEditor__TextEditFindBarBase* self, QResizeEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperResizeEvent(TextCustomEditor__TextEditFindBarBase* self, QResizeEvent* event) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnResizeEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_resizeevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_CloseEvent(TextCustomEditor__TextEditFindBarBase* self, QCloseEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperCloseEvent(TextCustomEditor__TextEditFindBarBase* self, QCloseEvent* event) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnCloseEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_closeevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_ContextMenuEvent(TextCustomEditor__TextEditFindBarBase* self, QContextMenuEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperContextMenuEvent(TextCustomEditor__TextEditFindBarBase* self, QContextMenuEvent* event) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnContextMenuEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_contextmenuevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_TabletEvent(TextCustomEditor__TextEditFindBarBase* self, QTabletEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperTabletEvent(TextCustomEditor__TextEditFindBarBase* self, QTabletEvent* event) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnTabletEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_tabletevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_ActionEvent(TextCustomEditor__TextEditFindBarBase* self, QActionEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperActionEvent(TextCustomEditor__TextEditFindBarBase* self, QActionEvent* event) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnActionEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_actionevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_DragEnterEvent(TextCustomEditor__TextEditFindBarBase* self, QDragEnterEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperDragEnterEvent(TextCustomEditor__TextEditFindBarBase* self, QDragEnterEvent* event) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnDragEnterEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_dragenterevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_DragMoveEvent(TextCustomEditor__TextEditFindBarBase* self, QDragMoveEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperDragMoveEvent(TextCustomEditor__TextEditFindBarBase* self, QDragMoveEvent* event) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnDragMoveEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_dragmoveevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_DragLeaveEvent(TextCustomEditor__TextEditFindBarBase* self, QDragLeaveEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperDragLeaveEvent(TextCustomEditor__TextEditFindBarBase* self, QDragLeaveEvent* event) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnDragLeaveEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_dragleaveevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_DropEvent(TextCustomEditor__TextEditFindBarBase* self, QDropEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperDropEvent(TextCustomEditor__TextEditFindBarBase* self, QDropEvent* event) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnDropEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_dropevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_ShowEvent(TextCustomEditor__TextEditFindBarBase* self, QShowEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperShowEvent(TextCustomEditor__TextEditFindBarBase* self, QShowEvent* event) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::showEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnShowEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_showevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_HideEvent(TextCustomEditor__TextEditFindBarBase* self, QHideEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperHideEvent(TextCustomEditor__TextEditFindBarBase* self, QHideEvent* event) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnHideEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_hideevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__TextEditFindBarBase_NativeEvent(TextCustomEditor__TextEditFindBarBase* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        return vtextcustomeditortexteditfindbarbase->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__TextEditFindBarBase_SuperNativeEvent(TextCustomEditor__TextEditFindBarBase* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        return vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnNativeEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_nativeevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_ChangeEvent(TextCustomEditor__TextEditFindBarBase* self, QEvent* param1) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperChangeEvent(TextCustomEditor__TextEditFindBarBase* self, QEvent* param1) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnChangeEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_changeevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__TextEditFindBarBase_Metric(const TextCustomEditor__TextEditFindBarBase* self, int param1) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase) {
        return vtextcustomeditortexteditfindbarbase->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextCustomEditor__TextEditFindBarBase_SuperMetric(const TextCustomEditor__TextEditFindBarBase* self, int param1) {
    if (auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self))) {
        return vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnMetric(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self)))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_metric_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_InitPainter(const TextCustomEditor__TextEditFindBarBase* self, QPainter* painter) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperInitPainter(const TextCustomEditor__TextEditFindBarBase* self, QPainter* painter) {
    if (auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self))) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnInitPainter(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self)))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_initpainter_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextCustomEditor__TextEditFindBarBase_Redirected(const TextCustomEditor__TextEditFindBarBase* self, QPoint* offset) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase) {
        return vtextcustomeditortexteditfindbarbase->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextCustomEditor__TextEditFindBarBase_SuperRedirected(const TextCustomEditor__TextEditFindBarBase* self, QPoint* offset) {
    if (auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self))) {
        return vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnRedirected(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self)))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_redirected_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextCustomEditor__TextEditFindBarBase_SharedPainter(const TextCustomEditor__TextEditFindBarBase* self) {
    auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self));
    if (vtextcustomeditortexteditfindbarbase) {
        return vtextcustomeditortexteditfindbarbase->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextCustomEditor__TextEditFindBarBase_SuperSharedPainter(const TextCustomEditor__TextEditFindBarBase* self) {
    if (auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self))) {
        return vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnSharedPainter(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self)))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_sharedpainter_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_InputMethodEvent(TextCustomEditor__TextEditFindBarBase* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperInputMethodEvent(TextCustomEditor__TextEditFindBarBase* self, QInputMethodEvent* param1) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnInputMethodEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_inputmethodevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextCustomEditor__TextEditFindBarBase_InputMethodQuery(const TextCustomEditor__TextEditFindBarBase* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* TextCustomEditor__TextEditFindBarBase_SuperInputMethodQuery(const TextCustomEditor__TextEditFindBarBase* self, int param1) {
    return new QVariant(self->TextCustomEditor::TextEditFindBarBase::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnInputMethodQuery(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self)))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_inputmethodquery_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__TextEditFindBarBase_FocusNextPrevChild(TextCustomEditor__TextEditFindBarBase* self, bool next) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        return vtextcustomeditortexteditfindbarbase->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__TextEditFindBarBase_SuperFocusNextPrevChild(TextCustomEditor__TextEditFindBarBase* self, bool next) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        return vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnFocusNextPrevChild(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_focusnextprevchild_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__TextEditFindBarBase_EventFilter(TextCustomEditor__TextEditFindBarBase* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextCustomEditor__TextEditFindBarBase_SuperEventFilter(TextCustomEditor__TextEditFindBarBase* self, QObject* watched, QEvent* event) {
    return self->TextCustomEditor::TextEditFindBarBase::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnEventFilter(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_eventfilter_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_TimerEvent(TextCustomEditor__TextEditFindBarBase* self, QTimerEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperTimerEvent(TextCustomEditor__TextEditFindBarBase* self, QTimerEvent* event) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnTimerEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_timerevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_ChildEvent(TextCustomEditor__TextEditFindBarBase* self, QChildEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperChildEvent(TextCustomEditor__TextEditFindBarBase* self, QChildEvent* event) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnChildEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_childevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_CustomEvent(TextCustomEditor__TextEditFindBarBase* self, QEvent* event) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperCustomEvent(TextCustomEditor__TextEditFindBarBase* self, QEvent* event) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnCustomEvent(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_customevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_ConnectNotify(TextCustomEditor__TextEditFindBarBase* self, const QMetaMethod* signal) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperConnectNotify(TextCustomEditor__TextEditFindBarBase* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnConnectNotify(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_connectnotify_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditFindBarBase_DisconnectNotify(TextCustomEditor__TextEditFindBarBase* self, const QMetaMethod* signal) {
    auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self);
    if (vtextcustomeditortexteditfindbarbase) {
        vtextcustomeditortexteditfindbarbase->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditFindBarBase_SuperDisconnectNotify(TextCustomEditor__TextEditFindBarBase* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->TextCustomEditor::TextEditFindBarBase::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditFindBarBase::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditFindBarBase_OnDisconnectNotify(TextCustomEditor__TextEditFindBarBase* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self))
        vtextcustomeditortexteditfindbarbase->textcustomeditor__texteditfindbarbase_disconnectnotify_callback = reinterpret_cast<VirtualTextCustomEditorTextEditFindBarBase::TextCustomEditor__TextEditFindBarBase_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextCustomEditor__TextEditFindBarBase_ClearSelections(TextCustomEditor__TextEditFindBarBase* self) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->VirtualTextCustomEditorTextEditFindBarBase::clearSelections();
    } else
        qFatal("Error: Protected method TextCustomEditor::TextEditFindBarBase::clearSelections called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__TextEditFindBarBase_SearchText(TextCustomEditor__TextEditFindBarBase* self, bool backward, bool isAutoSearch) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        return vtextcustomeditortexteditfindbarbase->VirtualTextCustomEditorTextEditFindBarBase::searchText(backward, isAutoSearch);
    } else
        qFatal("Error: Protected method TextCustomEditor::TextEditFindBarBase::searchText called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__TextEditFindBarBase_SetFoundMatch(TextCustomEditor__TextEditFindBarBase* self, bool match) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->VirtualTextCustomEditorTextEditFindBarBase::setFoundMatch(match);
    } else
        qFatal("Error: Protected method TextCustomEditor::TextEditFindBarBase::setFoundMatch called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__TextEditFindBarBase_MessageInfo(TextCustomEditor__TextEditFindBarBase* self, bool backward, bool isAutoSearch, bool found) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->VirtualTextCustomEditorTextEditFindBarBase::messageInfo(backward, isAutoSearch, found);
    } else
        qFatal("Error: Protected method TextCustomEditor::TextEditFindBarBase::messageInfo called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__TextEditFindBarBase_UpdateMicroFocus(TextCustomEditor__TextEditFindBarBase* self) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->VirtualTextCustomEditorTextEditFindBarBase::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextCustomEditor::TextEditFindBarBase::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__TextEditFindBarBase_Create(TextCustomEditor__TextEditFindBarBase* self) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->VirtualTextCustomEditorTextEditFindBarBase::create();
    } else
        qFatal("Error: Protected method TextCustomEditor::TextEditFindBarBase::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__TextEditFindBarBase_Destroy(TextCustomEditor__TextEditFindBarBase* self) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        vtextcustomeditortexteditfindbarbase->VirtualTextCustomEditorTextEditFindBarBase::destroy();
    } else
        qFatal("Error: Protected method TextCustomEditor::TextEditFindBarBase::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__TextEditFindBarBase_FocusNextChild(TextCustomEditor__TextEditFindBarBase* self) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        return vtextcustomeditortexteditfindbarbase->VirtualTextCustomEditorTextEditFindBarBase::focusNextChild();
    } else
        qFatal("Error: Protected method TextCustomEditor::TextEditFindBarBase::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__TextEditFindBarBase_FocusPreviousChild(TextCustomEditor__TextEditFindBarBase* self) {
    if (auto* vtextcustomeditortexteditfindbarbase = dynamic_cast<VirtualTextCustomEditorTextEditFindBarBase*>(self)) {
        return vtextcustomeditortexteditfindbarbase->VirtualTextCustomEditorTextEditFindBarBase::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextCustomEditor::TextEditFindBarBase::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextCustomEditor__TextEditFindBarBase_Sender(const TextCustomEditor__TextEditFindBarBase* self) {
    if (auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self))) {
        return vtextcustomeditortexteditfindbarbase->VirtualTextCustomEditorTextEditFindBarBase::sender();
    } else
        qFatal("Error: Protected method TextCustomEditor::TextEditFindBarBase::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextCustomEditor__TextEditFindBarBase_SenderSignalIndex(const TextCustomEditor__TextEditFindBarBase* self) {
    if (auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self))) {
        return vtextcustomeditortexteditfindbarbase->VirtualTextCustomEditorTextEditFindBarBase::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextCustomEditor::TextEditFindBarBase::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextCustomEditor__TextEditFindBarBase_Receivers(const TextCustomEditor__TextEditFindBarBase* self, const char* signal) {
    if (auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self))) {
        return vtextcustomeditortexteditfindbarbase->VirtualTextCustomEditorTextEditFindBarBase::receivers(signal);
    } else
        qFatal("Error: Protected method TextCustomEditor::TextEditFindBarBase::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__TextEditFindBarBase_IsSignalConnected(const TextCustomEditor__TextEditFindBarBase* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self))) {
        return vtextcustomeditortexteditfindbarbase->VirtualTextCustomEditorTextEditFindBarBase::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextCustomEditor::TextEditFindBarBase::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextCustomEditor__TextEditFindBarBase_GetDecodedMetricF(const TextCustomEditor__TextEditFindBarBase* self, int metricA, int metricB) {
    if (auto* vtextcustomeditortexteditfindbarbase = const_cast<VirtualTextCustomEditorTextEditFindBarBase*>(dynamic_cast<const VirtualTextCustomEditorTextEditFindBarBase*>(self))) {
        return vtextcustomeditortexteditfindbarbase->VirtualTextCustomEditorTextEditFindBarBase::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextCustomEditor::TextEditFindBarBase::getDecodedMetricF called without a directly constructed type");
}

void TextCustomEditor__TextEditFindBarBase_Delete(TextCustomEditor__TextEditFindBarBase* self) {
    delete self;
}
