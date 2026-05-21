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
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextCustomEditor__RichTextBrowser
#define WORKAROUND_INNER_CLASS_DEFINITION_TextCustomEditor__RichTextBrowserWidget
#include <richtextbrowserwidget.h>
#include "librichtextbrowserwidget.h"
#include "librichtextbrowserwidget.hxx"

TextCustomEditor__RichTextBrowserWidget* TextCustomEditor__RichTextBrowserWidget_new(QWidget* parent) {
    return new VirtualTextCustomEditorRichTextBrowserWidget(parent);
}

TextCustomEditor__RichTextBrowserWidget* TextCustomEditor__RichTextBrowserWidget_new2() {
    return new VirtualTextCustomEditorRichTextBrowserWidget();
}

TextCustomEditor__RichTextBrowserWidget* TextCustomEditor__RichTextBrowserWidget_new3(TextCustomEditor__RichTextBrowser* customEditor) {
    return new VirtualTextCustomEditorRichTextBrowserWidget(customEditor);
}

TextCustomEditor__RichTextBrowserWidget* TextCustomEditor__RichTextBrowserWidget_new4(TextCustomEditor__RichTextBrowser* customEditor, QWidget* parent) {
    return new VirtualTextCustomEditorRichTextBrowserWidget(customEditor, parent);
}

QMetaObject* TextCustomEditor__RichTextBrowserWidget_MetaObject(const TextCustomEditor__RichTextBrowserWidget* self) {
    auto* vtextcustomeditor__richtextbrowserwidget = dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditor__richtextbrowserwidget && vtextcustomeditor__richtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualTextCustomEditorRichTextBrowserWidget*)self)->metaObject();
    }
}

void* TextCustomEditor__RichTextBrowserWidget_Metacast(TextCustomEditor__RichTextBrowserWidget* self, const char* param1) {
    auto* vtextcustomeditor__richtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditor__richtextbrowserwidget && vtextcustomeditor__richtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->qt_metacast(param1);
    }
}

int TextCustomEditor__RichTextBrowserWidget_Metacall(TextCustomEditor__RichTextBrowserWidget* self, int param1, int param2, void** param3) {
    auto* vtextcustomeditor__richtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditor__richtextbrowserwidget && vtextcustomeditor__richtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void TextCustomEditor__RichTextBrowserWidget_Clear(TextCustomEditor__RichTextBrowserWidget* self) {
    self->clear();
}

TextCustomEditor__RichTextBrowser* TextCustomEditor__RichTextBrowserWidget_Editor(const TextCustomEditor__RichTextBrowserWidget* self) {
    return self->editor();
}

void TextCustomEditor__RichTextBrowserWidget_SetHtml(TextCustomEditor__RichTextBrowserWidget* self, const libqt_string html) {
    QString html_QString = QString::fromUtf8(html.data, html.len);
    self->setHtml(html_QString);
}

libqt_string TextCustomEditor__RichTextBrowserWidget_ToHtml(const TextCustomEditor__RichTextBrowserWidget* self) {
    auto _ret = self->toHtml();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextCustomEditor__RichTextBrowserWidget_SetPlainText(TextCustomEditor__RichTextBrowserWidget* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setPlainText(text_QString);
}

libqt_string TextCustomEditor__RichTextBrowserWidget_ToPlainText(const TextCustomEditor__RichTextBrowserWidget* self) {
    auto _ret = self->toPlainText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextCustomEditor__RichTextBrowserWidget_SetAcceptRichText(TextCustomEditor__RichTextBrowserWidget* self, bool b) {
    self->setAcceptRichText(b);
}

bool TextCustomEditor__RichTextBrowserWidget_AcceptRichText(const TextCustomEditor__RichTextBrowserWidget* self) {
    return self->acceptRichText();
}

bool TextCustomEditor__RichTextBrowserWidget_IsEmpty(const TextCustomEditor__RichTextBrowserWidget* self) {
    return self->isEmpty();
}

void TextCustomEditor__RichTextBrowserWidget_SlotFindNext(TextCustomEditor__RichTextBrowserWidget* self) {
    self->slotFindNext();
}

void TextCustomEditor__RichTextBrowserWidget_SlotFind(TextCustomEditor__RichTextBrowserWidget* self) {
    self->slotFind();
}

// Base class handler implementation
QMetaObject* TextCustomEditor__RichTextBrowserWidget_SuperMetaObject(const TextCustomEditor__RichTextBrowserWidget* self) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_MetaObject_IsBase(true);
        return (QMetaObject*)vtextcustomeditorrichtextbrowserwidget->metaObject();
    } else {
        return (QMetaObject*)self->TextCustomEditor::RichTextBrowserWidget::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnMetaObject(const TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_MetaObject_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextCustomEditor__RichTextBrowserWidget_SuperMetacast(TextCustomEditor__RichTextBrowserWidget* self, const char* param1) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_Metacast_IsBase(true);
        return vtextcustomeditorrichtextbrowserwidget->qt_metacast(param1);
    } else {
        return self->TextCustomEditor::RichTextBrowserWidget::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnMetacast(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_Metacast_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowserWidget_SuperMetacall(TextCustomEditor__RichTextBrowserWidget* self, int param1, int param2, void** param3) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_Metacall_IsBase(true);
        return vtextcustomeditorrichtextbrowserwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextCustomEditor::RichTextBrowserWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnMetacall(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_Metacall_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextBrowserWidget_DevType(const TextCustomEditor__RichTextBrowserWidget* self) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        return vtextcustomeditorrichtextbrowserwidget->devType();
    } else {
        return self->TextCustomEditor::RichTextBrowserWidget::devType();
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowserWidget_SuperDevType(const TextCustomEditor__RichTextBrowserWidget* self) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_DevType_IsBase(true);
        return vtextcustomeditorrichtextbrowserwidget->devType();
    } else {
        return self->TextCustomEditor::RichTextBrowserWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnDevType(const TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_DevType_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SetVisible(TextCustomEditor__RichTextBrowserWidget* self, bool visible) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setVisible(visible);
    } else {
        self->TextCustomEditor::RichTextBrowserWidget::setVisible(visible);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperSetVisible(TextCustomEditor__RichTextBrowserWidget* self, bool visible) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_SetVisible_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->setVisible(visible);
    } else {
        self->TextCustomEditor::RichTextBrowserWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnSetVisible(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_SetVisible_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextCustomEditor__RichTextBrowserWidget_SizeHint(const TextCustomEditor__RichTextBrowserWidget* self) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        return new QSize(vtextcustomeditorrichtextbrowserwidget->sizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorRichTextBrowserWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextCustomEditor__RichTextBrowserWidget_SuperSizeHint(const TextCustomEditor__RichTextBrowserWidget* self) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_SizeHint_IsBase(true);
        return new QSize(vtextcustomeditorrichtextbrowserwidget->sizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorRichTextBrowserWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnSizeHint(const TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_SizeHint_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextCustomEditor__RichTextBrowserWidget_MinimumSizeHint(const TextCustomEditor__RichTextBrowserWidget* self) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        return new QSize(vtextcustomeditorrichtextbrowserwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorRichTextBrowserWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextCustomEditor__RichTextBrowserWidget_SuperMinimumSizeHint(const TextCustomEditor__RichTextBrowserWidget* self) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vtextcustomeditorrichtextbrowserwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorRichTextBrowserWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnMinimumSizeHint(const TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextBrowserWidget_HeightForWidth(const TextCustomEditor__RichTextBrowserWidget* self, int param1) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        return vtextcustomeditorrichtextbrowserwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextCustomEditor::RichTextBrowserWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowserWidget_SuperHeightForWidth(const TextCustomEditor__RichTextBrowserWidget* self, int param1) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_HeightForWidth_IsBase(true);
        return vtextcustomeditorrichtextbrowserwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextCustomEditor::RichTextBrowserWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnHeightForWidth(const TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_HeightForWidth_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowserWidget_HasHeightForWidth(const TextCustomEditor__RichTextBrowserWidget* self) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        return vtextcustomeditorrichtextbrowserwidget->hasHeightForWidth();
    } else {
        return self->TextCustomEditor::RichTextBrowserWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserWidget_SuperHasHeightForWidth(const TextCustomEditor__RichTextBrowserWidget* self) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_HasHeightForWidth_IsBase(true);
        return vtextcustomeditorrichtextbrowserwidget->hasHeightForWidth();
    } else {
        return self->TextCustomEditor::RichTextBrowserWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnHasHeightForWidth(const TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextCustomEditor__RichTextBrowserWidget_PaintEngine(const TextCustomEditor__RichTextBrowserWidget* self) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        return vtextcustomeditorrichtextbrowserwidget->paintEngine();
    } else {
        return self->TextCustomEditor::RichTextBrowserWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextCustomEditor__RichTextBrowserWidget_SuperPaintEngine(const TextCustomEditor__RichTextBrowserWidget* self) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_PaintEngine_IsBase(true);
        return vtextcustomeditorrichtextbrowserwidget->paintEngine();
    } else {
        return self->TextCustomEditor::RichTextBrowserWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnPaintEngine(const TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_PaintEngine_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowserWidget_Event(TextCustomEditor__RichTextBrowserWidget* self, QEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        return vtextcustomeditorrichtextbrowserwidget->event(event);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserWidget_SuperEvent(TextCustomEditor__RichTextBrowserWidget* self, QEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_Event_IsBase(true);
        return vtextcustomeditorrichtextbrowserwidget->event(event);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_Event_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_MousePressEvent(TextCustomEditor__RichTextBrowserWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->mousePressEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperMousePressEvent(TextCustomEditor__RichTextBrowserWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_MousePressEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->mousePressEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnMousePressEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_MousePressEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_MouseReleaseEvent(TextCustomEditor__RichTextBrowserWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperMouseReleaseEvent(TextCustomEditor__RichTextBrowserWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_MouseReleaseEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnMouseReleaseEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_MouseDoubleClickEvent(TextCustomEditor__RichTextBrowserWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperMouseDoubleClickEvent(TextCustomEditor__RichTextBrowserWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_MouseDoubleClickEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnMouseDoubleClickEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_MouseMoveEvent(TextCustomEditor__RichTextBrowserWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperMouseMoveEvent(TextCustomEditor__RichTextBrowserWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_MouseMoveEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnMouseMoveEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_WheelEvent(TextCustomEditor__RichTextBrowserWidget* self, QWheelEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->wheelEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperWheelEvent(TextCustomEditor__RichTextBrowserWidget* self, QWheelEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_WheelEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->wheelEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnWheelEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_WheelEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_KeyPressEvent(TextCustomEditor__RichTextBrowserWidget* self, QKeyEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->keyPressEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperKeyPressEvent(TextCustomEditor__RichTextBrowserWidget* self, QKeyEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_KeyPressEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->keyPressEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnKeyPressEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_KeyReleaseEvent(TextCustomEditor__RichTextBrowserWidget* self, QKeyEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperKeyReleaseEvent(TextCustomEditor__RichTextBrowserWidget* self, QKeyEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_KeyReleaseEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnKeyReleaseEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_FocusInEvent(TextCustomEditor__RichTextBrowserWidget* self, QFocusEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->focusInEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperFocusInEvent(TextCustomEditor__RichTextBrowserWidget* self, QFocusEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_FocusInEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->focusInEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnFocusInEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_FocusInEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_FocusOutEvent(TextCustomEditor__RichTextBrowserWidget* self, QFocusEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->focusOutEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperFocusOutEvent(TextCustomEditor__RichTextBrowserWidget* self, QFocusEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_FocusOutEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->focusOutEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnFocusOutEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_EnterEvent(TextCustomEditor__RichTextBrowserWidget* self, QEnterEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->enterEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperEnterEvent(TextCustomEditor__RichTextBrowserWidget* self, QEnterEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_EnterEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->enterEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnEnterEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_EnterEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_LeaveEvent(TextCustomEditor__RichTextBrowserWidget* self, QEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->leaveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperLeaveEvent(TextCustomEditor__RichTextBrowserWidget* self, QEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_LeaveEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->leaveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnLeaveEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_LeaveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_PaintEvent(TextCustomEditor__RichTextBrowserWidget* self, QPaintEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->paintEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperPaintEvent(TextCustomEditor__RichTextBrowserWidget* self, QPaintEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_PaintEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->paintEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnPaintEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_PaintEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_MoveEvent(TextCustomEditor__RichTextBrowserWidget* self, QMoveEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->moveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperMoveEvent(TextCustomEditor__RichTextBrowserWidget* self, QMoveEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_MoveEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->moveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnMoveEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_MoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_ResizeEvent(TextCustomEditor__RichTextBrowserWidget* self, QResizeEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->resizeEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperResizeEvent(TextCustomEditor__RichTextBrowserWidget* self, QResizeEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_ResizeEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->resizeEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnResizeEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_ResizeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_CloseEvent(TextCustomEditor__RichTextBrowserWidget* self, QCloseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->closeEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperCloseEvent(TextCustomEditor__RichTextBrowserWidget* self, QCloseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_CloseEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->closeEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnCloseEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_CloseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_ContextMenuEvent(TextCustomEditor__RichTextBrowserWidget* self, QContextMenuEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->contextMenuEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperContextMenuEvent(TextCustomEditor__RichTextBrowserWidget* self, QContextMenuEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_ContextMenuEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->contextMenuEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnContextMenuEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_TabletEvent(TextCustomEditor__RichTextBrowserWidget* self, QTabletEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->tabletEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperTabletEvent(TextCustomEditor__RichTextBrowserWidget* self, QTabletEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_TabletEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->tabletEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnTabletEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_TabletEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_ActionEvent(TextCustomEditor__RichTextBrowserWidget* self, QActionEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->actionEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperActionEvent(TextCustomEditor__RichTextBrowserWidget* self, QActionEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_ActionEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->actionEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnActionEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_ActionEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_DragEnterEvent(TextCustomEditor__RichTextBrowserWidget* self, QDragEnterEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->dragEnterEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperDragEnterEvent(TextCustomEditor__RichTextBrowserWidget* self, QDragEnterEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_DragEnterEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->dragEnterEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnDragEnterEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_DragMoveEvent(TextCustomEditor__RichTextBrowserWidget* self, QDragMoveEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->dragMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperDragMoveEvent(TextCustomEditor__RichTextBrowserWidget* self, QDragMoveEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_DragMoveEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->dragMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnDragMoveEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_DragLeaveEvent(TextCustomEditor__RichTextBrowserWidget* self, QDragLeaveEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperDragLeaveEvent(TextCustomEditor__RichTextBrowserWidget* self, QDragLeaveEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_DragLeaveEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnDragLeaveEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_DropEvent(TextCustomEditor__RichTextBrowserWidget* self, QDropEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->dropEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperDropEvent(TextCustomEditor__RichTextBrowserWidget* self, QDropEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_DropEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->dropEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnDropEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_DropEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_ShowEvent(TextCustomEditor__RichTextBrowserWidget* self, QShowEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->showEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperShowEvent(TextCustomEditor__RichTextBrowserWidget* self, QShowEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_ShowEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->showEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnShowEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_ShowEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_HideEvent(TextCustomEditor__RichTextBrowserWidget* self, QHideEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->hideEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperHideEvent(TextCustomEditor__RichTextBrowserWidget* self, QHideEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_HideEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->hideEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnHideEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_HideEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowserWidget_NativeEvent(TextCustomEditor__RichTextBrowserWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        return vtextcustomeditorrichtextbrowserwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserWidget_SuperNativeEvent(TextCustomEditor__RichTextBrowserWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_NativeEvent_IsBase(true);
        return vtextcustomeditorrichtextbrowserwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnNativeEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_NativeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_ChangeEvent(TextCustomEditor__RichTextBrowserWidget* self, QEvent* param1) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->changeEvent(param1);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperChangeEvent(TextCustomEditor__RichTextBrowserWidget* self, QEvent* param1) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_ChangeEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->changeEvent(param1);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnChangeEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_ChangeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextBrowserWidget_Metric(const TextCustomEditor__RichTextBrowserWidget* self, int param1) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        return vtextcustomeditorrichtextbrowserwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowserWidget_SuperMetric(const TextCustomEditor__RichTextBrowserWidget* self, int param1) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_Metric_IsBase(true);
        return vtextcustomeditorrichtextbrowserwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnMetric(const TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_Metric_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_InitPainter(const TextCustomEditor__RichTextBrowserWidget* self, QPainter* painter) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->initPainter(painter);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperInitPainter(const TextCustomEditor__RichTextBrowserWidget* self, QPainter* painter) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_InitPainter_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->initPainter(painter);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnInitPainter(const TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_InitPainter_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextCustomEditor__RichTextBrowserWidget_Redirected(const TextCustomEditor__RichTextBrowserWidget* self, QPoint* offset) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        return vtextcustomeditorrichtextbrowserwidget->redirected(offset);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextCustomEditor__RichTextBrowserWidget_SuperRedirected(const TextCustomEditor__RichTextBrowserWidget* self, QPoint* offset) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_Redirected_IsBase(true);
        return vtextcustomeditorrichtextbrowserwidget->redirected(offset);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnRedirected(const TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_Redirected_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextCustomEditor__RichTextBrowserWidget_SharedPainter(const TextCustomEditor__RichTextBrowserWidget* self) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        return vtextcustomeditorrichtextbrowserwidget->sharedPainter();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextCustomEditor__RichTextBrowserWidget_SuperSharedPainter(const TextCustomEditor__RichTextBrowserWidget* self) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_SharedPainter_IsBase(true);
        return vtextcustomeditorrichtextbrowserwidget->sharedPainter();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnSharedPainter(const TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_SharedPainter_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_InputMethodEvent(TextCustomEditor__RichTextBrowserWidget* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperInputMethodEvent(TextCustomEditor__RichTextBrowserWidget* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_InputMethodEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnInputMethodEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextCustomEditor__RichTextBrowserWidget_InputMethodQuery(const TextCustomEditor__RichTextBrowserWidget* self, int param1) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        return new QVariant(vtextcustomeditorrichtextbrowserwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextCustomEditorRichTextBrowserWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* TextCustomEditor__RichTextBrowserWidget_SuperInputMethodQuery(const TextCustomEditor__RichTextBrowserWidget* self, int param1) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vtextcustomeditorrichtextbrowserwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextCustomEditorRichTextBrowserWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnInputMethodQuery(const TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowserWidget_FocusNextPrevChild(TextCustomEditor__RichTextBrowserWidget* self, bool next) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        return vtextcustomeditorrichtextbrowserwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserWidget_SuperFocusNextPrevChild(TextCustomEditor__RichTextBrowserWidget* self, bool next) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_FocusNextPrevChild_IsBase(true);
        return vtextcustomeditorrichtextbrowserwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnFocusNextPrevChild(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowserWidget_EventFilter(TextCustomEditor__RichTextBrowserWidget* self, QObject* watched, QEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        return vtextcustomeditorrichtextbrowserwidget->eventFilter(watched, event);
    } else {
        return self->TextCustomEditor::RichTextBrowserWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserWidget_SuperEventFilter(TextCustomEditor__RichTextBrowserWidget* self, QObject* watched, QEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_EventFilter_IsBase(true);
        return vtextcustomeditorrichtextbrowserwidget->eventFilter(watched, event);
    } else {
        return self->TextCustomEditor::RichTextBrowserWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnEventFilter(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_EventFilter_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_TimerEvent(TextCustomEditor__RichTextBrowserWidget* self, QTimerEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->timerEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperTimerEvent(TextCustomEditor__RichTextBrowserWidget* self, QTimerEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_TimerEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->timerEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnTimerEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_TimerEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_ChildEvent(TextCustomEditor__RichTextBrowserWidget* self, QChildEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->childEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperChildEvent(TextCustomEditor__RichTextBrowserWidget* self, QChildEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_ChildEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->childEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnChildEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_ChildEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_CustomEvent(TextCustomEditor__RichTextBrowserWidget* self, QEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->customEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperCustomEvent(TextCustomEditor__RichTextBrowserWidget* self, QEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_CustomEvent_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->customEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnCustomEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_CustomEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_ConnectNotify(TextCustomEditor__RichTextBrowserWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->connectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperConnectNotify(TextCustomEditor__RichTextBrowserWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_ConnectNotify_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->connectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnConnectNotify(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_ConnectNotify_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_DisconnectNotify(TextCustomEditor__RichTextBrowserWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperDisconnectNotify(TextCustomEditor__RichTextBrowserWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_DisconnectNotify_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnDisconnectNotify(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_UpdateMicroFocus(TextCustomEditor__RichTextBrowserWidget* self) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->updateMicroFocus();
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperUpdateMicroFocus(TextCustomEditor__RichTextBrowserWidget* self) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_UpdateMicroFocus_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->updateMicroFocus();
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnUpdateMicroFocus(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_Create(TextCustomEditor__RichTextBrowserWidget* self) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->create();
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->create();
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperCreate(TextCustomEditor__RichTextBrowserWidget* self) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_Create_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->create();
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnCreate(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_Create_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_Destroy(TextCustomEditor__RichTextBrowserWidget* self) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->destroy();
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->destroy();
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperDestroy(TextCustomEditor__RichTextBrowserWidget* self) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_Destroy_IsBase(true);
        vtextcustomeditorrichtextbrowserwidget->destroy();
    } else {
        ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnDestroy(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_Destroy_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowserWidget_FocusNextChild(TextCustomEditor__RichTextBrowserWidget* self) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        return vtextcustomeditorrichtextbrowserwidget->focusNextChild();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserWidget_SuperFocusNextChild(TextCustomEditor__RichTextBrowserWidget* self) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_FocusNextChild_IsBase(true);
        return vtextcustomeditorrichtextbrowserwidget->focusNextChild();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnFocusNextChild(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_FocusNextChild_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowserWidget_FocusPreviousChild(TextCustomEditor__RichTextBrowserWidget* self) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        return vtextcustomeditorrichtextbrowserwidget->focusPreviousChild();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserWidget_SuperFocusPreviousChild(TextCustomEditor__RichTextBrowserWidget* self) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_FocusPreviousChild_IsBase(true);
        return vtextcustomeditorrichtextbrowserwidget->focusPreviousChild();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnFocusPreviousChild(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextCustomEditor__RichTextBrowserWidget_Sender(const TextCustomEditor__RichTextBrowserWidget* self) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        return vtextcustomeditorrichtextbrowserwidget->sender();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextCustomEditor__RichTextBrowserWidget_SuperSender(const TextCustomEditor__RichTextBrowserWidget* self) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_Sender_IsBase(true);
        return vtextcustomeditorrichtextbrowserwidget->sender();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnSender(const TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_Sender_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextBrowserWidget_SenderSignalIndex(const TextCustomEditor__RichTextBrowserWidget* self) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        return vtextcustomeditorrichtextbrowserwidget->senderSignalIndex();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowserWidget_SuperSenderSignalIndex(const TextCustomEditor__RichTextBrowserWidget* self) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_SenderSignalIndex_IsBase(true);
        return vtextcustomeditorrichtextbrowserwidget->senderSignalIndex();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnSenderSignalIndex(const TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextBrowserWidget_Receivers(const TextCustomEditor__RichTextBrowserWidget* self, const char* signal) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        return vtextcustomeditorrichtextbrowserwidget->receivers(signal);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowserWidget_SuperReceivers(const TextCustomEditor__RichTextBrowserWidget* self, const char* signal) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_Receivers_IsBase(true);
        return vtextcustomeditorrichtextbrowserwidget->receivers(signal);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnReceivers(const TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_Receivers_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowserWidget_IsSignalConnected(const TextCustomEditor__RichTextBrowserWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        return vtextcustomeditorrichtextbrowserwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserWidget_SuperIsSignalConnected(const TextCustomEditor__RichTextBrowserWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_IsSignalConnected_IsBase(true);
        return vtextcustomeditorrichtextbrowserwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnIsSignalConnected(const TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextCustomEditor__RichTextBrowserWidget_GetDecodedMetricF(const TextCustomEditor__RichTextBrowserWidget* self, int metricA, int metricB) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        return vtextcustomeditorrichtextbrowserwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextCustomEditor__RichTextBrowserWidget_SuperGetDecodedMetricF(const TextCustomEditor__RichTextBrowserWidget* self, int metricA, int metricB) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_GetDecodedMetricF_IsBase(true);
        return vtextcustomeditorrichtextbrowserwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextCustomEditorRichTextBrowserWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnGetDecodedMetricF(const TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget && vtextcustomeditorrichtextbrowserwidget->isVirtualTextCustomEditorRichTextBrowserWidget) {
        vtextcustomeditorrichtextbrowserwidget->setTextCustomEditor__RichTextBrowserWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void TextCustomEditor__RichTextBrowserWidget_Delete(TextCustomEditor__RichTextBrowserWidget* self) {
    delete self;
}
