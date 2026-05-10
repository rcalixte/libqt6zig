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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextCustomEditor__RichTextEditor
#define WORKAROUND_INNER_CLASS_DEFINITION_TextCustomEditor__RichTextEditorWidget
#include <richtexteditorwidget.h>
#include "librichtexteditorwidget.h"
#include "librichtexteditorwidget.hxx"

TextCustomEditor__RichTextEditorWidget* TextCustomEditor__RichTextEditorWidget_new(QWidget* parent) {
    return new VirtualTextCustomEditorRichTextEditorWidget(parent);
}

TextCustomEditor__RichTextEditorWidget* TextCustomEditor__RichTextEditorWidget_new2() {
    return new VirtualTextCustomEditorRichTextEditorWidget();
}

TextCustomEditor__RichTextEditorWidget* TextCustomEditor__RichTextEditorWidget_new3(TextCustomEditor__RichTextEditor* customEditor) {
    return new VirtualTextCustomEditorRichTextEditorWidget(customEditor);
}

TextCustomEditor__RichTextEditorWidget* TextCustomEditor__RichTextEditorWidget_new4(TextCustomEditor__RichTextEditor* customEditor, QWidget* parent) {
    return new VirtualTextCustomEditorRichTextEditorWidget(customEditor, parent);
}

QMetaObject* TextCustomEditor__RichTextEditorWidget_MetaObject(const TextCustomEditor__RichTextEditorWidget* self) {
    auto* vtextcustomeditor__richtexteditorwidget = dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditor__richtexteditorwidget && vtextcustomeditor__richtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualTextCustomEditorRichTextEditorWidget*)self)->metaObject();
    }
}

void* TextCustomEditor__RichTextEditorWidget_Metacast(TextCustomEditor__RichTextEditorWidget* self, const char* param1) {
    auto* vtextcustomeditor__richtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditor__richtexteditorwidget && vtextcustomeditor__richtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualTextCustomEditorRichTextEditorWidget*)self)->qt_metacast(param1);
    }
}

int TextCustomEditor__RichTextEditorWidget_Metacall(TextCustomEditor__RichTextEditorWidget* self, int param1, int param2, void** param3) {
    auto* vtextcustomeditor__richtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditor__richtexteditorwidget && vtextcustomeditor__richtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualTextCustomEditorRichTextEditorWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void TextCustomEditor__RichTextEditorWidget_Clear(TextCustomEditor__RichTextEditorWidget* self) {
    self->clear();
}

TextCustomEditor__RichTextEditor* TextCustomEditor__RichTextEditorWidget_Editor(const TextCustomEditor__RichTextEditorWidget* self) {
    return self->editor();
}

void TextCustomEditor__RichTextEditorWidget_SetReadOnly(TextCustomEditor__RichTextEditorWidget* self, bool readOnly) {
    self->setReadOnly(readOnly);
}

bool TextCustomEditor__RichTextEditorWidget_IsReadOnly(const TextCustomEditor__RichTextEditorWidget* self) {
    return self->isReadOnly();
}

void TextCustomEditor__RichTextEditorWidget_SetHtml(TextCustomEditor__RichTextEditorWidget* self, const libqt_string html) {
    QString html_QString = QString::fromUtf8(html.data, html.len);
    self->setHtml(html_QString);
}

libqt_string TextCustomEditor__RichTextEditorWidget_ToHtml(const TextCustomEditor__RichTextEditorWidget* self) {
    QString _ret = self->toHtml();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextCustomEditor__RichTextEditorWidget_SetPlainText(TextCustomEditor__RichTextEditorWidget* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setPlainText(text_QString);
}

libqt_string TextCustomEditor__RichTextEditorWidget_ToPlainText(const TextCustomEditor__RichTextEditorWidget* self) {
    QString _ret = self->toPlainText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextCustomEditor__RichTextEditorWidget_SetAcceptRichText(TextCustomEditor__RichTextEditorWidget* self, bool b) {
    self->setAcceptRichText(b);
}

bool TextCustomEditor__RichTextEditorWidget_AcceptRichText(const TextCustomEditor__RichTextEditorWidget* self) {
    return self->acceptRichText();
}

void TextCustomEditor__RichTextEditorWidget_SetSpellCheckingConfigFileName(TextCustomEditor__RichTextEditorWidget* self, const libqt_string _fileName) {
    QString _fileName_QString = QString::fromUtf8(_fileName.data, _fileName.len);
    self->setSpellCheckingConfigFileName(_fileName_QString);
}

bool TextCustomEditor__RichTextEditorWidget_IsEmpty(const TextCustomEditor__RichTextEditorWidget* self) {
    return self->isEmpty();
}

void TextCustomEditor__RichTextEditorWidget_SlotFindNext(TextCustomEditor__RichTextEditorWidget* self) {
    self->slotFindNext();
}

void TextCustomEditor__RichTextEditorWidget_SlotFind(TextCustomEditor__RichTextEditorWidget* self) {
    self->slotFind();
}

void TextCustomEditor__RichTextEditorWidget_SlotReplace(TextCustomEditor__RichTextEditorWidget* self) {
    self->slotReplace();
}

// Base class handler implementation
QMetaObject* TextCustomEditor__RichTextEditorWidget_SuperMetaObject(const TextCustomEditor__RichTextEditorWidget* self) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_MetaObject_IsBase(true);
        return (QMetaObject*)vtextcustomeditorrichtexteditorwidget->metaObject();
    } else {
        return (QMetaObject*)self->TextCustomEditor::RichTextEditorWidget::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnMetaObject(const TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_MetaObject_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextCustomEditor__RichTextEditorWidget_SuperMetacast(TextCustomEditor__RichTextEditorWidget* self, const char* param1) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_Metacast_IsBase(true);
        return vtextcustomeditorrichtexteditorwidget->qt_metacast(param1);
    } else {
        return self->TextCustomEditor::RichTextEditorWidget::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnMetacast(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_Metacast_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextEditorWidget_SuperMetacall(TextCustomEditor__RichTextEditorWidget* self, int param1, int param2, void** param3) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_Metacall_IsBase(true);
        return vtextcustomeditorrichtexteditorwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextCustomEditor::RichTextEditorWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnMetacall(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_Metacall_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextEditorWidget_DevType(const TextCustomEditor__RichTextEditorWidget* self) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        return vtextcustomeditorrichtexteditorwidget->devType();
    } else {
        return self->TextCustomEditor::RichTextEditorWidget::devType();
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextEditorWidget_SuperDevType(const TextCustomEditor__RichTextEditorWidget* self) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_DevType_IsBase(true);
        return vtextcustomeditorrichtexteditorwidget->devType();
    } else {
        return self->TextCustomEditor::RichTextEditorWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnDevType(const TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_DevType_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_SetVisible(TextCustomEditor__RichTextEditorWidget* self, bool visible) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setVisible(visible);
    } else {
        self->TextCustomEditor::RichTextEditorWidget::setVisible(visible);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperSetVisible(TextCustomEditor__RichTextEditorWidget* self, bool visible) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_SetVisible_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->setVisible(visible);
    } else {
        self->TextCustomEditor::RichTextEditorWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnSetVisible(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_SetVisible_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextCustomEditor__RichTextEditorWidget_SizeHint(const TextCustomEditor__RichTextEditorWidget* self) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        return new QSize(vtextcustomeditorrichtexteditorwidget->sizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorRichTextEditorWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextCustomEditor__RichTextEditorWidget_SuperSizeHint(const TextCustomEditor__RichTextEditorWidget* self) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_SizeHint_IsBase(true);
        return new QSize(vtextcustomeditorrichtexteditorwidget->sizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorRichTextEditorWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnSizeHint(const TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_SizeHint_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextCustomEditor__RichTextEditorWidget_MinimumSizeHint(const TextCustomEditor__RichTextEditorWidget* self) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        return new QSize(vtextcustomeditorrichtexteditorwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorRichTextEditorWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextCustomEditor__RichTextEditorWidget_SuperMinimumSizeHint(const TextCustomEditor__RichTextEditorWidget* self) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vtextcustomeditorrichtexteditorwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorRichTextEditorWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnMinimumSizeHint(const TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextEditorWidget_HeightForWidth(const TextCustomEditor__RichTextEditorWidget* self, int param1) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        return vtextcustomeditorrichtexteditorwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextCustomEditor::RichTextEditorWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextEditorWidget_SuperHeightForWidth(const TextCustomEditor__RichTextEditorWidget* self, int param1) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_HeightForWidth_IsBase(true);
        return vtextcustomeditorrichtexteditorwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextCustomEditor::RichTextEditorWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnHeightForWidth(const TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_HeightForWidth_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditorWidget_HasHeightForWidth(const TextCustomEditor__RichTextEditorWidget* self) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        return vtextcustomeditorrichtexteditorwidget->hasHeightForWidth();
    } else {
        return self->TextCustomEditor::RichTextEditorWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditorWidget_SuperHasHeightForWidth(const TextCustomEditor__RichTextEditorWidget* self) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_HasHeightForWidth_IsBase(true);
        return vtextcustomeditorrichtexteditorwidget->hasHeightForWidth();
    } else {
        return self->TextCustomEditor::RichTextEditorWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnHasHeightForWidth(const TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextCustomEditor__RichTextEditorWidget_PaintEngine(const TextCustomEditor__RichTextEditorWidget* self) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        return vtextcustomeditorrichtexteditorwidget->paintEngine();
    } else {
        return self->TextCustomEditor::RichTextEditorWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextCustomEditor__RichTextEditorWidget_SuperPaintEngine(const TextCustomEditor__RichTextEditorWidget* self) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_PaintEngine_IsBase(true);
        return vtextcustomeditorrichtexteditorwidget->paintEngine();
    } else {
        return self->TextCustomEditor::RichTextEditorWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnPaintEngine(const TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_PaintEngine_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditorWidget_Event(TextCustomEditor__RichTextEditorWidget* self, QEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        return vtextcustomeditorrichtexteditorwidget->event(event);
    } else {
        return ((VirtualTextCustomEditorRichTextEditorWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditorWidget_SuperEvent(TextCustomEditor__RichTextEditorWidget* self, QEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_Event_IsBase(true);
        return vtextcustomeditorrichtexteditorwidget->event(event);
    } else {
        return ((VirtualTextCustomEditorRichTextEditorWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_Event_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_MousePressEvent(TextCustomEditor__RichTextEditorWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->mousePressEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperMousePressEvent(TextCustomEditor__RichTextEditorWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_MousePressEvent_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->mousePressEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnMousePressEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_MousePressEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_MouseReleaseEvent(TextCustomEditor__RichTextEditorWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperMouseReleaseEvent(TextCustomEditor__RichTextEditorWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_MouseReleaseEvent_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnMouseReleaseEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_MouseDoubleClickEvent(TextCustomEditor__RichTextEditorWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperMouseDoubleClickEvent(TextCustomEditor__RichTextEditorWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_MouseDoubleClickEvent_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnMouseDoubleClickEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_MouseMoveEvent(TextCustomEditor__RichTextEditorWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperMouseMoveEvent(TextCustomEditor__RichTextEditorWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_MouseMoveEvent_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnMouseMoveEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_WheelEvent(TextCustomEditor__RichTextEditorWidget* self, QWheelEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->wheelEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperWheelEvent(TextCustomEditor__RichTextEditorWidget* self, QWheelEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_WheelEvent_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->wheelEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnWheelEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_WheelEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_KeyPressEvent(TextCustomEditor__RichTextEditorWidget* self, QKeyEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->keyPressEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperKeyPressEvent(TextCustomEditor__RichTextEditorWidget* self, QKeyEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_KeyPressEvent_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->keyPressEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnKeyPressEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_KeyReleaseEvent(TextCustomEditor__RichTextEditorWidget* self, QKeyEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperKeyReleaseEvent(TextCustomEditor__RichTextEditorWidget* self, QKeyEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_KeyReleaseEvent_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnKeyReleaseEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_FocusInEvent(TextCustomEditor__RichTextEditorWidget* self, QFocusEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->focusInEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperFocusInEvent(TextCustomEditor__RichTextEditorWidget* self, QFocusEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_FocusInEvent_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->focusInEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnFocusInEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_FocusInEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_FocusOutEvent(TextCustomEditor__RichTextEditorWidget* self, QFocusEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->focusOutEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperFocusOutEvent(TextCustomEditor__RichTextEditorWidget* self, QFocusEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_FocusOutEvent_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->focusOutEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnFocusOutEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_EnterEvent(TextCustomEditor__RichTextEditorWidget* self, QEnterEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->enterEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperEnterEvent(TextCustomEditor__RichTextEditorWidget* self, QEnterEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_EnterEvent_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->enterEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnEnterEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_EnterEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_LeaveEvent(TextCustomEditor__RichTextEditorWidget* self, QEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->leaveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperLeaveEvent(TextCustomEditor__RichTextEditorWidget* self, QEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_LeaveEvent_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->leaveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnLeaveEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_LeaveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_PaintEvent(TextCustomEditor__RichTextEditorWidget* self, QPaintEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->paintEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperPaintEvent(TextCustomEditor__RichTextEditorWidget* self, QPaintEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_PaintEvent_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->paintEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnPaintEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_PaintEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_MoveEvent(TextCustomEditor__RichTextEditorWidget* self, QMoveEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->moveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperMoveEvent(TextCustomEditor__RichTextEditorWidget* self, QMoveEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_MoveEvent_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->moveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnMoveEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_MoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_ResizeEvent(TextCustomEditor__RichTextEditorWidget* self, QResizeEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->resizeEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperResizeEvent(TextCustomEditor__RichTextEditorWidget* self, QResizeEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_ResizeEvent_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->resizeEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnResizeEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_ResizeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_CloseEvent(TextCustomEditor__RichTextEditorWidget* self, QCloseEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->closeEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperCloseEvent(TextCustomEditor__RichTextEditorWidget* self, QCloseEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_CloseEvent_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->closeEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnCloseEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_CloseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_ContextMenuEvent(TextCustomEditor__RichTextEditorWidget* self, QContextMenuEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->contextMenuEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperContextMenuEvent(TextCustomEditor__RichTextEditorWidget* self, QContextMenuEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_ContextMenuEvent_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->contextMenuEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnContextMenuEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_TabletEvent(TextCustomEditor__RichTextEditorWidget* self, QTabletEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->tabletEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperTabletEvent(TextCustomEditor__RichTextEditorWidget* self, QTabletEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_TabletEvent_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->tabletEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnTabletEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_TabletEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_ActionEvent(TextCustomEditor__RichTextEditorWidget* self, QActionEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->actionEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperActionEvent(TextCustomEditor__RichTextEditorWidget* self, QActionEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_ActionEvent_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->actionEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnActionEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_ActionEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_DragEnterEvent(TextCustomEditor__RichTextEditorWidget* self, QDragEnterEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->dragEnterEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperDragEnterEvent(TextCustomEditor__RichTextEditorWidget* self, QDragEnterEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_DragEnterEvent_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->dragEnterEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnDragEnterEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_DragMoveEvent(TextCustomEditor__RichTextEditorWidget* self, QDragMoveEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->dragMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperDragMoveEvent(TextCustomEditor__RichTextEditorWidget* self, QDragMoveEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_DragMoveEvent_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->dragMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnDragMoveEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_DragLeaveEvent(TextCustomEditor__RichTextEditorWidget* self, QDragLeaveEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperDragLeaveEvent(TextCustomEditor__RichTextEditorWidget* self, QDragLeaveEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_DragLeaveEvent_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnDragLeaveEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_DropEvent(TextCustomEditor__RichTextEditorWidget* self, QDropEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->dropEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperDropEvent(TextCustomEditor__RichTextEditorWidget* self, QDropEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_DropEvent_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->dropEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnDropEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_DropEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_ShowEvent(TextCustomEditor__RichTextEditorWidget* self, QShowEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->showEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperShowEvent(TextCustomEditor__RichTextEditorWidget* self, QShowEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_ShowEvent_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->showEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnShowEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_ShowEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_HideEvent(TextCustomEditor__RichTextEditorWidget* self, QHideEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->hideEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperHideEvent(TextCustomEditor__RichTextEditorWidget* self, QHideEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_HideEvent_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->hideEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnHideEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_HideEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditorWidget_NativeEvent(TextCustomEditor__RichTextEditorWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        return vtextcustomeditorrichtexteditorwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextCustomEditorRichTextEditorWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditorWidget_SuperNativeEvent(TextCustomEditor__RichTextEditorWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_NativeEvent_IsBase(true);
        return vtextcustomeditorrichtexteditorwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextCustomEditorRichTextEditorWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnNativeEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_NativeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_ChangeEvent(TextCustomEditor__RichTextEditorWidget* self, QEvent* param1) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->changeEvent(param1);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperChangeEvent(TextCustomEditor__RichTextEditorWidget* self, QEvent* param1) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_ChangeEvent_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->changeEvent(param1);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnChangeEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_ChangeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextEditorWidget_Metric(const TextCustomEditor__RichTextEditorWidget* self, int param1) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        return vtextcustomeditorrichtexteditorwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextCustomEditorRichTextEditorWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextEditorWidget_SuperMetric(const TextCustomEditor__RichTextEditorWidget* self, int param1) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_Metric_IsBase(true);
        return vtextcustomeditorrichtexteditorwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextCustomEditorRichTextEditorWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnMetric(const TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_Metric_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_InitPainter(const TextCustomEditor__RichTextEditorWidget* self, QPainter* painter) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->initPainter(painter);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperInitPainter(const TextCustomEditor__RichTextEditorWidget* self, QPainter* painter) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_InitPainter_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->initPainter(painter);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnInitPainter(const TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_InitPainter_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextCustomEditor__RichTextEditorWidget_Redirected(const TextCustomEditor__RichTextEditorWidget* self, QPoint* offset) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        return vtextcustomeditorrichtexteditorwidget->redirected(offset);
    } else {
        return ((VirtualTextCustomEditorRichTextEditorWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextCustomEditor__RichTextEditorWidget_SuperRedirected(const TextCustomEditor__RichTextEditorWidget* self, QPoint* offset) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_Redirected_IsBase(true);
        return vtextcustomeditorrichtexteditorwidget->redirected(offset);
    } else {
        return ((VirtualTextCustomEditorRichTextEditorWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnRedirected(const TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_Redirected_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextCustomEditor__RichTextEditorWidget_SharedPainter(const TextCustomEditor__RichTextEditorWidget* self) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        return vtextcustomeditorrichtexteditorwidget->sharedPainter();
    } else {
        return ((VirtualTextCustomEditorRichTextEditorWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextCustomEditor__RichTextEditorWidget_SuperSharedPainter(const TextCustomEditor__RichTextEditorWidget* self) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_SharedPainter_IsBase(true);
        return vtextcustomeditorrichtexteditorwidget->sharedPainter();
    } else {
        return ((VirtualTextCustomEditorRichTextEditorWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnSharedPainter(const TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_SharedPainter_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_InputMethodEvent(TextCustomEditor__RichTextEditorWidget* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperInputMethodEvent(TextCustomEditor__RichTextEditorWidget* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_InputMethodEvent_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnInputMethodEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextCustomEditor__RichTextEditorWidget_InputMethodQuery(const TextCustomEditor__RichTextEditorWidget* self, int param1) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        return new QVariant(vtextcustomeditorrichtexteditorwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextCustomEditorRichTextEditorWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* TextCustomEditor__RichTextEditorWidget_SuperInputMethodQuery(const TextCustomEditor__RichTextEditorWidget* self, int param1) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vtextcustomeditorrichtexteditorwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextCustomEditorRichTextEditorWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnInputMethodQuery(const TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditorWidget_FocusNextPrevChild(TextCustomEditor__RichTextEditorWidget* self, bool next) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        return vtextcustomeditorrichtexteditorwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextCustomEditorRichTextEditorWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditorWidget_SuperFocusNextPrevChild(TextCustomEditor__RichTextEditorWidget* self, bool next) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_FocusNextPrevChild_IsBase(true);
        return vtextcustomeditorrichtexteditorwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextCustomEditorRichTextEditorWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnFocusNextPrevChild(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditorWidget_EventFilter(TextCustomEditor__RichTextEditorWidget* self, QObject* watched, QEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        return vtextcustomeditorrichtexteditorwidget->eventFilter(watched, event);
    } else {
        return self->TextCustomEditor::RichTextEditorWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditorWidget_SuperEventFilter(TextCustomEditor__RichTextEditorWidget* self, QObject* watched, QEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_EventFilter_IsBase(true);
        return vtextcustomeditorrichtexteditorwidget->eventFilter(watched, event);
    } else {
        return self->TextCustomEditor::RichTextEditorWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnEventFilter(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_EventFilter_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_TimerEvent(TextCustomEditor__RichTextEditorWidget* self, QTimerEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->timerEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperTimerEvent(TextCustomEditor__RichTextEditorWidget* self, QTimerEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_TimerEvent_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->timerEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnTimerEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_TimerEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_ChildEvent(TextCustomEditor__RichTextEditorWidget* self, QChildEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->childEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperChildEvent(TextCustomEditor__RichTextEditorWidget* self, QChildEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_ChildEvent_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->childEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnChildEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_ChildEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_CustomEvent(TextCustomEditor__RichTextEditorWidget* self, QEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->customEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperCustomEvent(TextCustomEditor__RichTextEditorWidget* self, QEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_CustomEvent_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->customEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnCustomEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_CustomEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_ConnectNotify(TextCustomEditor__RichTextEditorWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->connectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperConnectNotify(TextCustomEditor__RichTextEditorWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_ConnectNotify_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->connectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnConnectNotify(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_ConnectNotify_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_DisconnectNotify(TextCustomEditor__RichTextEditorWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperDisconnectNotify(TextCustomEditor__RichTextEditorWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_DisconnectNotify_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnDisconnectNotify(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_UpdateMicroFocus(TextCustomEditor__RichTextEditorWidget* self) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->updateMicroFocus();
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperUpdateMicroFocus(TextCustomEditor__RichTextEditorWidget* self) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_UpdateMicroFocus_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->updateMicroFocus();
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnUpdateMicroFocus(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_Create(TextCustomEditor__RichTextEditorWidget* self) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->create();
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->create();
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperCreate(TextCustomEditor__RichTextEditorWidget* self) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_Create_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->create();
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnCreate(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_Create_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_Destroy(TextCustomEditor__RichTextEditorWidget* self) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->destroy();
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->destroy();
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperDestroy(TextCustomEditor__RichTextEditorWidget* self) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_Destroy_IsBase(true);
        vtextcustomeditorrichtexteditorwidget->destroy();
    } else {
        ((VirtualTextCustomEditorRichTextEditorWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnDestroy(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_Destroy_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditorWidget_FocusNextChild(TextCustomEditor__RichTextEditorWidget* self) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        return vtextcustomeditorrichtexteditorwidget->focusNextChild();
    } else {
        return ((VirtualTextCustomEditorRichTextEditorWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditorWidget_SuperFocusNextChild(TextCustomEditor__RichTextEditorWidget* self) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_FocusNextChild_IsBase(true);
        return vtextcustomeditorrichtexteditorwidget->focusNextChild();
    } else {
        return ((VirtualTextCustomEditorRichTextEditorWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnFocusNextChild(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_FocusNextChild_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditorWidget_FocusPreviousChild(TextCustomEditor__RichTextEditorWidget* self) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        return vtextcustomeditorrichtexteditorwidget->focusPreviousChild();
    } else {
        return ((VirtualTextCustomEditorRichTextEditorWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditorWidget_SuperFocusPreviousChild(TextCustomEditor__RichTextEditorWidget* self) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_FocusPreviousChild_IsBase(true);
        return vtextcustomeditorrichtexteditorwidget->focusPreviousChild();
    } else {
        return ((VirtualTextCustomEditorRichTextEditorWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnFocusPreviousChild(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextCustomEditor__RichTextEditorWidget_Sender(const TextCustomEditor__RichTextEditorWidget* self) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        return vtextcustomeditorrichtexteditorwidget->sender();
    } else {
        return ((VirtualTextCustomEditorRichTextEditorWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextCustomEditor__RichTextEditorWidget_SuperSender(const TextCustomEditor__RichTextEditorWidget* self) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_Sender_IsBase(true);
        return vtextcustomeditorrichtexteditorwidget->sender();
    } else {
        return ((VirtualTextCustomEditorRichTextEditorWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnSender(const TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_Sender_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextEditorWidget_SenderSignalIndex(const TextCustomEditor__RichTextEditorWidget* self) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        return vtextcustomeditorrichtexteditorwidget->senderSignalIndex();
    } else {
        return ((VirtualTextCustomEditorRichTextEditorWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextEditorWidget_SuperSenderSignalIndex(const TextCustomEditor__RichTextEditorWidget* self) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_SenderSignalIndex_IsBase(true);
        return vtextcustomeditorrichtexteditorwidget->senderSignalIndex();
    } else {
        return ((VirtualTextCustomEditorRichTextEditorWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnSenderSignalIndex(const TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextEditorWidget_Receivers(const TextCustomEditor__RichTextEditorWidget* self, const char* signal) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        return vtextcustomeditorrichtexteditorwidget->receivers(signal);
    } else {
        return ((VirtualTextCustomEditorRichTextEditorWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextEditorWidget_SuperReceivers(const TextCustomEditor__RichTextEditorWidget* self, const char* signal) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_Receivers_IsBase(true);
        return vtextcustomeditorrichtexteditorwidget->receivers(signal);
    } else {
        return ((VirtualTextCustomEditorRichTextEditorWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnReceivers(const TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_Receivers_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditorWidget_IsSignalConnected(const TextCustomEditor__RichTextEditorWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        return vtextcustomeditorrichtexteditorwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextCustomEditorRichTextEditorWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditorWidget_SuperIsSignalConnected(const TextCustomEditor__RichTextEditorWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_IsSignalConnected_IsBase(true);
        return vtextcustomeditorrichtexteditorwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextCustomEditorRichTextEditorWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnIsSignalConnected(const TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextCustomEditor__RichTextEditorWidget_GetDecodedMetricF(const TextCustomEditor__RichTextEditorWidget* self, int metricA, int metricB) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        return vtextcustomeditorrichtexteditorwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextCustomEditorRichTextEditorWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextCustomEditor__RichTextEditorWidget_SuperGetDecodedMetricF(const TextCustomEditor__RichTextEditorWidget* self, int metricA, int metricB) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_GetDecodedMetricF_IsBase(true);
        return vtextcustomeditorrichtexteditorwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextCustomEditorRichTextEditorWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnGetDecodedMetricF(const TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget && vtextcustomeditorrichtexteditorwidget->isVirtualTextCustomEditorRichTextEditorWidget) {
        vtextcustomeditorrichtexteditorwidget->setTextCustomEditor__RichTextEditorWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void TextCustomEditor__RichTextEditorWidget_Delete(TextCustomEditor__RichTextEditorWidget* self) {
    delete self;
}
