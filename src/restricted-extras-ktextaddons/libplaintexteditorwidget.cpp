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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextCustomEditor__PlainTextEditor
#define WORKAROUND_INNER_CLASS_DEFINITION_TextCustomEditor__PlainTextEditorWidget
#include <plaintexteditorwidget.h>
#include "libplaintexteditorwidget.h"
#include "libplaintexteditorwidget.hxx"

TextCustomEditor__PlainTextEditorWidget* TextCustomEditor__PlainTextEditorWidget_new(QWidget* parent) {
    return new VirtualTextCustomEditorPlainTextEditorWidget(parent);
}

TextCustomEditor__PlainTextEditorWidget* TextCustomEditor__PlainTextEditorWidget_new2() {
    return new VirtualTextCustomEditorPlainTextEditorWidget();
}

TextCustomEditor__PlainTextEditorWidget* TextCustomEditor__PlainTextEditorWidget_new3(TextCustomEditor__PlainTextEditor* customEditor) {
    return new VirtualTextCustomEditorPlainTextEditorWidget(customEditor);
}

TextCustomEditor__PlainTextEditorWidget* TextCustomEditor__PlainTextEditorWidget_new4(TextCustomEditor__PlainTextEditor* customEditor, QWidget* parent) {
    return new VirtualTextCustomEditorPlainTextEditorWidget(customEditor, parent);
}

QMetaObject* TextCustomEditor__PlainTextEditorWidget_MetaObject(const TextCustomEditor__PlainTextEditorWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextCustomEditor__PlainTextEditorWidget_Metacast(TextCustomEditor__PlainTextEditorWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextCustomEditor__PlainTextEditorWidget_Metacall(TextCustomEditor__PlainTextEditorWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

TextCustomEditor__PlainTextEditor* TextCustomEditor__PlainTextEditorWidget_Editor(const TextCustomEditor__PlainTextEditorWidget* self) {
    return self->editor();
}

void TextCustomEditor__PlainTextEditorWidget_SetReadOnly(TextCustomEditor__PlainTextEditorWidget* self, bool readOnly) {
    self->setReadOnly(readOnly);
}

bool TextCustomEditor__PlainTextEditorWidget_IsReadOnly(const TextCustomEditor__PlainTextEditorWidget* self) {
    return self->isReadOnly();
}

void TextCustomEditor__PlainTextEditorWidget_SetPlainText(TextCustomEditor__PlainTextEditorWidget* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setPlainText(text_QString);
}

libqt_string TextCustomEditor__PlainTextEditorWidget_ToPlainText(const TextCustomEditor__PlainTextEditorWidget* self) {
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

void TextCustomEditor__PlainTextEditorWidget_Clear(TextCustomEditor__PlainTextEditorWidget* self) {
    self->clear();
}

void TextCustomEditor__PlainTextEditorWidget_SetSpellCheckingConfigFileName(TextCustomEditor__PlainTextEditorWidget* self, const libqt_string _fileName) {
    QString _fileName_QString = QString::fromUtf8(_fileName.data, _fileName.len);
    self->setSpellCheckingConfigFileName(_fileName_QString);
}

bool TextCustomEditor__PlainTextEditorWidget_IsEmpty(const TextCustomEditor__PlainTextEditorWidget* self) {
    return self->isEmpty();
}

// Base class handler implementation
QMetaObject* TextCustomEditor__PlainTextEditorWidget_SuperMetaObject(const TextCustomEditor__PlainTextEditorWidget* self) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_MetaObject_IsBase(true);
        return (QMetaObject*)vtextcustomeditorplaintexteditorwidget->metaObject();
    } else {
        return (QMetaObject*)self->TextCustomEditor::PlainTextEditorWidget::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnMetaObject(const TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_MetaObject_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextCustomEditor__PlainTextEditorWidget_SuperMetacast(TextCustomEditor__PlainTextEditorWidget* self, const char* param1) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_Metacast_IsBase(true);
        return vtextcustomeditorplaintexteditorwidget->qt_metacast(param1);
    } else {
        return self->TextCustomEditor::PlainTextEditorWidget::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnMetacast(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_Metacast_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditorWidget_SuperMetacall(TextCustomEditor__PlainTextEditorWidget* self, int param1, int param2, void** param3) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_Metacall_IsBase(true);
        return vtextcustomeditorplaintexteditorwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextCustomEditor::PlainTextEditorWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnMetacall(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_Metacall_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__PlainTextEditorWidget_DevType(const TextCustomEditor__PlainTextEditorWidget* self) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        return vtextcustomeditorplaintexteditorwidget->devType();
    } else {
        return self->TextCustomEditor::PlainTextEditorWidget::devType();
    }
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditorWidget_SuperDevType(const TextCustomEditor__PlainTextEditorWidget* self) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_DevType_IsBase(true);
        return vtextcustomeditorplaintexteditorwidget->devType();
    } else {
        return self->TextCustomEditor::PlainTextEditorWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnDevType(const TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_DevType_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SetVisible(TextCustomEditor__PlainTextEditorWidget* self, bool visible) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setVisible(visible);
    } else {
        self->TextCustomEditor::PlainTextEditorWidget::setVisible(visible);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperSetVisible(TextCustomEditor__PlainTextEditorWidget* self, bool visible) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_SetVisible_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->setVisible(visible);
    } else {
        self->TextCustomEditor::PlainTextEditorWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnSetVisible(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_SetVisible_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextCustomEditor__PlainTextEditorWidget_SizeHint(const TextCustomEditor__PlainTextEditorWidget* self) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        return new QSize(vtextcustomeditorplaintexteditorwidget->sizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorPlainTextEditorWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextCustomEditor__PlainTextEditorWidget_SuperSizeHint(const TextCustomEditor__PlainTextEditorWidget* self) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_SizeHint_IsBase(true);
        return new QSize(vtextcustomeditorplaintexteditorwidget->sizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorPlainTextEditorWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnSizeHint(const TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_SizeHint_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextCustomEditor__PlainTextEditorWidget_MinimumSizeHint(const TextCustomEditor__PlainTextEditorWidget* self) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        return new QSize(vtextcustomeditorplaintexteditorwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorPlainTextEditorWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextCustomEditor__PlainTextEditorWidget_SuperMinimumSizeHint(const TextCustomEditor__PlainTextEditorWidget* self) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vtextcustomeditorplaintexteditorwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorPlainTextEditorWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnMinimumSizeHint(const TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__PlainTextEditorWidget_HeightForWidth(const TextCustomEditor__PlainTextEditorWidget* self, int param1) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        return vtextcustomeditorplaintexteditorwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextCustomEditor::PlainTextEditorWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditorWidget_SuperHeightForWidth(const TextCustomEditor__PlainTextEditorWidget* self, int param1) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_HeightForWidth_IsBase(true);
        return vtextcustomeditorplaintexteditorwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextCustomEditor::PlainTextEditorWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnHeightForWidth(const TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_HeightForWidth_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditorWidget_HasHeightForWidth(const TextCustomEditor__PlainTextEditorWidget* self) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        return vtextcustomeditorplaintexteditorwidget->hasHeightForWidth();
    } else {
        return self->TextCustomEditor::PlainTextEditorWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditorWidget_SuperHasHeightForWidth(const TextCustomEditor__PlainTextEditorWidget* self) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_HasHeightForWidth_IsBase(true);
        return vtextcustomeditorplaintexteditorwidget->hasHeightForWidth();
    } else {
        return self->TextCustomEditor::PlainTextEditorWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnHasHeightForWidth(const TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextCustomEditor__PlainTextEditorWidget_PaintEngine(const TextCustomEditor__PlainTextEditorWidget* self) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        return vtextcustomeditorplaintexteditorwidget->paintEngine();
    } else {
        return self->TextCustomEditor::PlainTextEditorWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextCustomEditor__PlainTextEditorWidget_SuperPaintEngine(const TextCustomEditor__PlainTextEditorWidget* self) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_PaintEngine_IsBase(true);
        return vtextcustomeditorplaintexteditorwidget->paintEngine();
    } else {
        return self->TextCustomEditor::PlainTextEditorWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnPaintEngine(const TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_PaintEngine_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditorWidget_Event(TextCustomEditor__PlainTextEditorWidget* self, QEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        return vtextcustomeditorplaintexteditorwidget->event(event);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditorWidget_SuperEvent(TextCustomEditor__PlainTextEditorWidget* self, QEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_Event_IsBase(true);
        return vtextcustomeditorplaintexteditorwidget->event(event);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_Event_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_MousePressEvent(TextCustomEditor__PlainTextEditorWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->mousePressEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperMousePressEvent(TextCustomEditor__PlainTextEditorWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_MousePressEvent_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->mousePressEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnMousePressEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_MousePressEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_MouseReleaseEvent(TextCustomEditor__PlainTextEditorWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperMouseReleaseEvent(TextCustomEditor__PlainTextEditorWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_MouseReleaseEvent_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnMouseReleaseEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_MouseDoubleClickEvent(TextCustomEditor__PlainTextEditorWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperMouseDoubleClickEvent(TextCustomEditor__PlainTextEditorWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_MouseDoubleClickEvent_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnMouseDoubleClickEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_MouseMoveEvent(TextCustomEditor__PlainTextEditorWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperMouseMoveEvent(TextCustomEditor__PlainTextEditorWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_MouseMoveEvent_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnMouseMoveEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_WheelEvent(TextCustomEditor__PlainTextEditorWidget* self, QWheelEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->wheelEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperWheelEvent(TextCustomEditor__PlainTextEditorWidget* self, QWheelEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_WheelEvent_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->wheelEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnWheelEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_WheelEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_KeyPressEvent(TextCustomEditor__PlainTextEditorWidget* self, QKeyEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->keyPressEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperKeyPressEvent(TextCustomEditor__PlainTextEditorWidget* self, QKeyEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_KeyPressEvent_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->keyPressEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnKeyPressEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_KeyReleaseEvent(TextCustomEditor__PlainTextEditorWidget* self, QKeyEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperKeyReleaseEvent(TextCustomEditor__PlainTextEditorWidget* self, QKeyEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_KeyReleaseEvent_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnKeyReleaseEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_FocusInEvent(TextCustomEditor__PlainTextEditorWidget* self, QFocusEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->focusInEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperFocusInEvent(TextCustomEditor__PlainTextEditorWidget* self, QFocusEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_FocusInEvent_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->focusInEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnFocusInEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_FocusInEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_FocusOutEvent(TextCustomEditor__PlainTextEditorWidget* self, QFocusEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->focusOutEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperFocusOutEvent(TextCustomEditor__PlainTextEditorWidget* self, QFocusEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_FocusOutEvent_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->focusOutEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnFocusOutEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_EnterEvent(TextCustomEditor__PlainTextEditorWidget* self, QEnterEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->enterEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperEnterEvent(TextCustomEditor__PlainTextEditorWidget* self, QEnterEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_EnterEvent_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->enterEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnEnterEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_EnterEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_LeaveEvent(TextCustomEditor__PlainTextEditorWidget* self, QEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->leaveEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperLeaveEvent(TextCustomEditor__PlainTextEditorWidget* self, QEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_LeaveEvent_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->leaveEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnLeaveEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_LeaveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_PaintEvent(TextCustomEditor__PlainTextEditorWidget* self, QPaintEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->paintEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperPaintEvent(TextCustomEditor__PlainTextEditorWidget* self, QPaintEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_PaintEvent_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->paintEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnPaintEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_PaintEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_MoveEvent(TextCustomEditor__PlainTextEditorWidget* self, QMoveEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->moveEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperMoveEvent(TextCustomEditor__PlainTextEditorWidget* self, QMoveEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_MoveEvent_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->moveEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnMoveEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_MoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_ResizeEvent(TextCustomEditor__PlainTextEditorWidget* self, QResizeEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->resizeEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperResizeEvent(TextCustomEditor__PlainTextEditorWidget* self, QResizeEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_ResizeEvent_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->resizeEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnResizeEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_ResizeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_CloseEvent(TextCustomEditor__PlainTextEditorWidget* self, QCloseEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->closeEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperCloseEvent(TextCustomEditor__PlainTextEditorWidget* self, QCloseEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_CloseEvent_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->closeEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnCloseEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_CloseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_ContextMenuEvent(TextCustomEditor__PlainTextEditorWidget* self, QContextMenuEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->contextMenuEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperContextMenuEvent(TextCustomEditor__PlainTextEditorWidget* self, QContextMenuEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_ContextMenuEvent_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->contextMenuEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnContextMenuEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_TabletEvent(TextCustomEditor__PlainTextEditorWidget* self, QTabletEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->tabletEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperTabletEvent(TextCustomEditor__PlainTextEditorWidget* self, QTabletEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_TabletEvent_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->tabletEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnTabletEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_TabletEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_ActionEvent(TextCustomEditor__PlainTextEditorWidget* self, QActionEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->actionEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperActionEvent(TextCustomEditor__PlainTextEditorWidget* self, QActionEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_ActionEvent_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->actionEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnActionEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_ActionEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_DragEnterEvent(TextCustomEditor__PlainTextEditorWidget* self, QDragEnterEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->dragEnterEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperDragEnterEvent(TextCustomEditor__PlainTextEditorWidget* self, QDragEnterEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_DragEnterEvent_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->dragEnterEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnDragEnterEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_DragMoveEvent(TextCustomEditor__PlainTextEditorWidget* self, QDragMoveEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->dragMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperDragMoveEvent(TextCustomEditor__PlainTextEditorWidget* self, QDragMoveEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_DragMoveEvent_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->dragMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnDragMoveEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_DragLeaveEvent(TextCustomEditor__PlainTextEditorWidget* self, QDragLeaveEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperDragLeaveEvent(TextCustomEditor__PlainTextEditorWidget* self, QDragLeaveEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_DragLeaveEvent_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnDragLeaveEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_DropEvent(TextCustomEditor__PlainTextEditorWidget* self, QDropEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->dropEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperDropEvent(TextCustomEditor__PlainTextEditorWidget* self, QDropEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_DropEvent_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->dropEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnDropEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_DropEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_ShowEvent(TextCustomEditor__PlainTextEditorWidget* self, QShowEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->showEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperShowEvent(TextCustomEditor__PlainTextEditorWidget* self, QShowEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_ShowEvent_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->showEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnShowEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_ShowEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_HideEvent(TextCustomEditor__PlainTextEditorWidget* self, QHideEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->hideEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperHideEvent(TextCustomEditor__PlainTextEditorWidget* self, QHideEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_HideEvent_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->hideEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnHideEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_HideEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditorWidget_NativeEvent(TextCustomEditor__PlainTextEditorWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        return vtextcustomeditorplaintexteditorwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditorWidget_SuperNativeEvent(TextCustomEditor__PlainTextEditorWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_NativeEvent_IsBase(true);
        return vtextcustomeditorplaintexteditorwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnNativeEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_NativeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_ChangeEvent(TextCustomEditor__PlainTextEditorWidget* self, QEvent* param1) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->changeEvent(param1);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperChangeEvent(TextCustomEditor__PlainTextEditorWidget* self, QEvent* param1) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_ChangeEvent_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->changeEvent(param1);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnChangeEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_ChangeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__PlainTextEditorWidget_Metric(const TextCustomEditor__PlainTextEditorWidget* self, int param1) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        return vtextcustomeditorplaintexteditorwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditorWidget_SuperMetric(const TextCustomEditor__PlainTextEditorWidget* self, int param1) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_Metric_IsBase(true);
        return vtextcustomeditorplaintexteditorwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnMetric(const TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_Metric_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_InitPainter(const TextCustomEditor__PlainTextEditorWidget* self, QPainter* painter) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->initPainter(painter);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperInitPainter(const TextCustomEditor__PlainTextEditorWidget* self, QPainter* painter) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_InitPainter_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->initPainter(painter);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnInitPainter(const TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_InitPainter_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextCustomEditor__PlainTextEditorWidget_Redirected(const TextCustomEditor__PlainTextEditorWidget* self, QPoint* offset) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        return vtextcustomeditorplaintexteditorwidget->redirected(offset);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextCustomEditor__PlainTextEditorWidget_SuperRedirected(const TextCustomEditor__PlainTextEditorWidget* self, QPoint* offset) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_Redirected_IsBase(true);
        return vtextcustomeditorplaintexteditorwidget->redirected(offset);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnRedirected(const TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_Redirected_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextCustomEditor__PlainTextEditorWidget_SharedPainter(const TextCustomEditor__PlainTextEditorWidget* self) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        return vtextcustomeditorplaintexteditorwidget->sharedPainter();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextCustomEditor__PlainTextEditorWidget_SuperSharedPainter(const TextCustomEditor__PlainTextEditorWidget* self) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_SharedPainter_IsBase(true);
        return vtextcustomeditorplaintexteditorwidget->sharedPainter();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnSharedPainter(const TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_SharedPainter_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_InputMethodEvent(TextCustomEditor__PlainTextEditorWidget* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperInputMethodEvent(TextCustomEditor__PlainTextEditorWidget* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_InputMethodEvent_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnInputMethodEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextCustomEditor__PlainTextEditorWidget_InputMethodQuery(const TextCustomEditor__PlainTextEditorWidget* self, int param1) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        return new QVariant(vtextcustomeditorplaintexteditorwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextCustomEditorPlainTextEditorWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* TextCustomEditor__PlainTextEditorWidget_SuperInputMethodQuery(const TextCustomEditor__PlainTextEditorWidget* self, int param1) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vtextcustomeditorplaintexteditorwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextCustomEditorPlainTextEditorWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnInputMethodQuery(const TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditorWidget_FocusNextPrevChild(TextCustomEditor__PlainTextEditorWidget* self, bool next) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        return vtextcustomeditorplaintexteditorwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditorWidget_SuperFocusNextPrevChild(TextCustomEditor__PlainTextEditorWidget* self, bool next) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_FocusNextPrevChild_IsBase(true);
        return vtextcustomeditorplaintexteditorwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnFocusNextPrevChild(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditorWidget_EventFilter(TextCustomEditor__PlainTextEditorWidget* self, QObject* watched, QEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        return vtextcustomeditorplaintexteditorwidget->eventFilter(watched, event);
    } else {
        return self->TextCustomEditor::PlainTextEditorWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditorWidget_SuperEventFilter(TextCustomEditor__PlainTextEditorWidget* self, QObject* watched, QEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_EventFilter_IsBase(true);
        return vtextcustomeditorplaintexteditorwidget->eventFilter(watched, event);
    } else {
        return self->TextCustomEditor::PlainTextEditorWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnEventFilter(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_EventFilter_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_TimerEvent(TextCustomEditor__PlainTextEditorWidget* self, QTimerEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->timerEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperTimerEvent(TextCustomEditor__PlainTextEditorWidget* self, QTimerEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_TimerEvent_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->timerEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnTimerEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_TimerEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_ChildEvent(TextCustomEditor__PlainTextEditorWidget* self, QChildEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->childEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperChildEvent(TextCustomEditor__PlainTextEditorWidget* self, QChildEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_ChildEvent_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->childEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnChildEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_ChildEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_CustomEvent(TextCustomEditor__PlainTextEditorWidget* self, QEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->customEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperCustomEvent(TextCustomEditor__PlainTextEditorWidget* self, QEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_CustomEvent_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->customEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnCustomEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_CustomEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_ConnectNotify(TextCustomEditor__PlainTextEditorWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->connectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperConnectNotify(TextCustomEditor__PlainTextEditorWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_ConnectNotify_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->connectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnConnectNotify(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_ConnectNotify_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_DisconnectNotify(TextCustomEditor__PlainTextEditorWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperDisconnectNotify(TextCustomEditor__PlainTextEditorWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_DisconnectNotify_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnDisconnectNotify(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_UpdateMicroFocus(TextCustomEditor__PlainTextEditorWidget* self) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->updateMicroFocus();
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperUpdateMicroFocus(TextCustomEditor__PlainTextEditorWidget* self) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_UpdateMicroFocus_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->updateMicroFocus();
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnUpdateMicroFocus(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_Create(TextCustomEditor__PlainTextEditorWidget* self) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->create();
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->create();
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperCreate(TextCustomEditor__PlainTextEditorWidget* self) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_Create_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->create();
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnCreate(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_Create_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_Destroy(TextCustomEditor__PlainTextEditorWidget* self) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->destroy();
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->destroy();
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperDestroy(TextCustomEditor__PlainTextEditorWidget* self) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_Destroy_IsBase(true);
        vtextcustomeditorplaintexteditorwidget->destroy();
    } else {
        ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnDestroy(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_Destroy_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditorWidget_FocusNextChild(TextCustomEditor__PlainTextEditorWidget* self) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        return vtextcustomeditorplaintexteditorwidget->focusNextChild();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditorWidget_SuperFocusNextChild(TextCustomEditor__PlainTextEditorWidget* self) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_FocusNextChild_IsBase(true);
        return vtextcustomeditorplaintexteditorwidget->focusNextChild();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnFocusNextChild(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_FocusNextChild_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditorWidget_FocusPreviousChild(TextCustomEditor__PlainTextEditorWidget* self) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        return vtextcustomeditorplaintexteditorwidget->focusPreviousChild();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditorWidget_SuperFocusPreviousChild(TextCustomEditor__PlainTextEditorWidget* self) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_FocusPreviousChild_IsBase(true);
        return vtextcustomeditorplaintexteditorwidget->focusPreviousChild();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnFocusPreviousChild(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextCustomEditor__PlainTextEditorWidget_Sender(const TextCustomEditor__PlainTextEditorWidget* self) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        return vtextcustomeditorplaintexteditorwidget->sender();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextCustomEditor__PlainTextEditorWidget_SuperSender(const TextCustomEditor__PlainTextEditorWidget* self) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_Sender_IsBase(true);
        return vtextcustomeditorplaintexteditorwidget->sender();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnSender(const TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_Sender_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__PlainTextEditorWidget_SenderSignalIndex(const TextCustomEditor__PlainTextEditorWidget* self) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        return vtextcustomeditorplaintexteditorwidget->senderSignalIndex();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditorWidget_SuperSenderSignalIndex(const TextCustomEditor__PlainTextEditorWidget* self) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_SenderSignalIndex_IsBase(true);
        return vtextcustomeditorplaintexteditorwidget->senderSignalIndex();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnSenderSignalIndex(const TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__PlainTextEditorWidget_Receivers(const TextCustomEditor__PlainTextEditorWidget* self, const char* signal) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        return vtextcustomeditorplaintexteditorwidget->receivers(signal);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditorWidget_SuperReceivers(const TextCustomEditor__PlainTextEditorWidget* self, const char* signal) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_Receivers_IsBase(true);
        return vtextcustomeditorplaintexteditorwidget->receivers(signal);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnReceivers(const TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_Receivers_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditorWidget_IsSignalConnected(const TextCustomEditor__PlainTextEditorWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        return vtextcustomeditorplaintexteditorwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditorWidget_SuperIsSignalConnected(const TextCustomEditor__PlainTextEditorWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_IsSignalConnected_IsBase(true);
        return vtextcustomeditorplaintexteditorwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnIsSignalConnected(const TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextCustomEditor__PlainTextEditorWidget_GetDecodedMetricF(const TextCustomEditor__PlainTextEditorWidget* self, int metricA, int metricB) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        return vtextcustomeditorplaintexteditorwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextCustomEditor__PlainTextEditorWidget_SuperGetDecodedMetricF(const TextCustomEditor__PlainTextEditorWidget* self, int metricA, int metricB) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_GetDecodedMetricF_IsBase(true);
        return vtextcustomeditorplaintexteditorwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextCustomEditorPlainTextEditorWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnGetDecodedMetricF(const TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget && vtextcustomeditorplaintexteditorwidget->isVirtualTextCustomEditorPlainTextEditorWidget) {
        vtextcustomeditorplaintexteditorwidget->setTextCustomEditor__PlainTextEditorWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void TextCustomEditor__PlainTextEditorWidget_Delete(TextCustomEditor__PlainTextEditorWidget* self) {
    delete self;
}
