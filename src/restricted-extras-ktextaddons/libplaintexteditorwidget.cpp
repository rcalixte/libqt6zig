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

libqt_string TextCustomEditor__PlainTextEditorWidget_Tr(const char* s) {
    auto _ret = TextCustomEditor::PlainTextEditorWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
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

libqt_string TextCustomEditor__PlainTextEditorWidget_Tr2(const char* s, const char* c) {
    auto _ret = TextCustomEditor::PlainTextEditorWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextCustomEditor__PlainTextEditorWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextCustomEditor::PlainTextEditorWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextCustomEditor__PlainTextEditorWidget_SuperMetaObject(const TextCustomEditor__PlainTextEditorWidget* self) {
    return (QMetaObject*)self->TextCustomEditor::PlainTextEditorWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnMetaObject(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self)))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_metaobject_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextCustomEditor__PlainTextEditorWidget_SuperMetacast(TextCustomEditor__PlainTextEditorWidget* self, const char* param1) {
    return self->TextCustomEditor::PlainTextEditorWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnMetacast(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_metacast_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditorWidget_SuperMetacall(TextCustomEditor__PlainTextEditorWidget* self, int param1, int param2, void** param3) {
    return self->TextCustomEditor::PlainTextEditorWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnMetacall(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_metacall_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_Metacall_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__PlainTextEditorWidget_DevType(const TextCustomEditor__PlainTextEditorWidget* self) {
    return self->devType();
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditorWidget_SuperDevType(const TextCustomEditor__PlainTextEditorWidget* self) {
    return self->TextCustomEditor::PlainTextEditorWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnDevType(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self)))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_devtype_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SetVisible(TextCustomEditor__PlainTextEditorWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperSetVisible(TextCustomEditor__PlainTextEditorWidget* self, bool visible) {
    self->TextCustomEditor::PlainTextEditorWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnSetVisible(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_setvisible_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* TextCustomEditor__PlainTextEditorWidget_SizeHint(const TextCustomEditor__PlainTextEditorWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextCustomEditor__PlainTextEditorWidget_SuperSizeHint(const TextCustomEditor__PlainTextEditorWidget* self) {
    return new QSize(self->TextCustomEditor::PlainTextEditorWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnSizeHint(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self)))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_sizehint_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextCustomEditor__PlainTextEditorWidget_MinimumSizeHint(const TextCustomEditor__PlainTextEditorWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextCustomEditor__PlainTextEditorWidget_SuperMinimumSizeHint(const TextCustomEditor__PlainTextEditorWidget* self) {
    return new QSize(self->TextCustomEditor::PlainTextEditorWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnMinimumSizeHint(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self)))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_minimumsizehint_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__PlainTextEditorWidget_HeightForWidth(const TextCustomEditor__PlainTextEditorWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditorWidget_SuperHeightForWidth(const TextCustomEditor__PlainTextEditorWidget* self, int param1) {
    return self->TextCustomEditor::PlainTextEditorWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnHeightForWidth(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self)))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_heightforwidth_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditorWidget_HasHeightForWidth(const TextCustomEditor__PlainTextEditorWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditorWidget_SuperHasHeightForWidth(const TextCustomEditor__PlainTextEditorWidget* self) {
    return self->TextCustomEditor::PlainTextEditorWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnHasHeightForWidth(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self)))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_hasheightforwidth_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextCustomEditor__PlainTextEditorWidget_PaintEngine(const TextCustomEditor__PlainTextEditorWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextCustomEditor__PlainTextEditorWidget_SuperPaintEngine(const TextCustomEditor__PlainTextEditorWidget* self) {
    return self->TextCustomEditor::PlainTextEditorWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnPaintEngine(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self)))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_paintengine_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditorWidget_Event(TextCustomEditor__PlainTextEditorWidget* self, QEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        return vtextcustomeditorplaintexteditorwidget->event(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditorWidget_SuperEvent(TextCustomEditor__PlainTextEditorWidget* self, QEvent* event) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        return vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::event(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_event_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_MousePressEvent(TextCustomEditor__PlainTextEditorWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperMousePressEvent(TextCustomEditor__PlainTextEditorWidget* self, QMouseEvent* event) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnMousePressEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_mousepressevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_MouseReleaseEvent(TextCustomEditor__PlainTextEditorWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperMouseReleaseEvent(TextCustomEditor__PlainTextEditorWidget* self, QMouseEvent* event) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnMouseReleaseEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_mousereleaseevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_MouseDoubleClickEvent(TextCustomEditor__PlainTextEditorWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperMouseDoubleClickEvent(TextCustomEditor__PlainTextEditorWidget* self, QMouseEvent* event) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnMouseDoubleClickEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_MouseMoveEvent(TextCustomEditor__PlainTextEditorWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperMouseMoveEvent(TextCustomEditor__PlainTextEditorWidget* self, QMouseEvent* event) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnMouseMoveEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_mousemoveevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_WheelEvent(TextCustomEditor__PlainTextEditorWidget* self, QWheelEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperWheelEvent(TextCustomEditor__PlainTextEditorWidget* self, QWheelEvent* event) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnWheelEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_wheelevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_KeyPressEvent(TextCustomEditor__PlainTextEditorWidget* self, QKeyEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperKeyPressEvent(TextCustomEditor__PlainTextEditorWidget* self, QKeyEvent* event) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnKeyPressEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_keypressevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_KeyReleaseEvent(TextCustomEditor__PlainTextEditorWidget* self, QKeyEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperKeyReleaseEvent(TextCustomEditor__PlainTextEditorWidget* self, QKeyEvent* event) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnKeyReleaseEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_keyreleaseevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_FocusInEvent(TextCustomEditor__PlainTextEditorWidget* self, QFocusEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperFocusInEvent(TextCustomEditor__PlainTextEditorWidget* self, QFocusEvent* event) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnFocusInEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_focusinevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_FocusOutEvent(TextCustomEditor__PlainTextEditorWidget* self, QFocusEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperFocusOutEvent(TextCustomEditor__PlainTextEditorWidget* self, QFocusEvent* event) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnFocusOutEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_focusoutevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_EnterEvent(TextCustomEditor__PlainTextEditorWidget* self, QEnterEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperEnterEvent(TextCustomEditor__PlainTextEditorWidget* self, QEnterEvent* event) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnEnterEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_enterevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_LeaveEvent(TextCustomEditor__PlainTextEditorWidget* self, QEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperLeaveEvent(TextCustomEditor__PlainTextEditorWidget* self, QEvent* event) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnLeaveEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_leaveevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_PaintEvent(TextCustomEditor__PlainTextEditorWidget* self, QPaintEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperPaintEvent(TextCustomEditor__PlainTextEditorWidget* self, QPaintEvent* event) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnPaintEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_paintevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_MoveEvent(TextCustomEditor__PlainTextEditorWidget* self, QMoveEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperMoveEvent(TextCustomEditor__PlainTextEditorWidget* self, QMoveEvent* event) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnMoveEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_moveevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_ResizeEvent(TextCustomEditor__PlainTextEditorWidget* self, QResizeEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperResizeEvent(TextCustomEditor__PlainTextEditorWidget* self, QResizeEvent* event) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnResizeEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_resizeevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_CloseEvent(TextCustomEditor__PlainTextEditorWidget* self, QCloseEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperCloseEvent(TextCustomEditor__PlainTextEditorWidget* self, QCloseEvent* event) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnCloseEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_closeevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_ContextMenuEvent(TextCustomEditor__PlainTextEditorWidget* self, QContextMenuEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperContextMenuEvent(TextCustomEditor__PlainTextEditorWidget* self, QContextMenuEvent* event) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnContextMenuEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_contextmenuevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_TabletEvent(TextCustomEditor__PlainTextEditorWidget* self, QTabletEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperTabletEvent(TextCustomEditor__PlainTextEditorWidget* self, QTabletEvent* event) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnTabletEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_tabletevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_ActionEvent(TextCustomEditor__PlainTextEditorWidget* self, QActionEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperActionEvent(TextCustomEditor__PlainTextEditorWidget* self, QActionEvent* event) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnActionEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_actionevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_DragEnterEvent(TextCustomEditor__PlainTextEditorWidget* self, QDragEnterEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperDragEnterEvent(TextCustomEditor__PlainTextEditorWidget* self, QDragEnterEvent* event) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnDragEnterEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_dragenterevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_DragMoveEvent(TextCustomEditor__PlainTextEditorWidget* self, QDragMoveEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperDragMoveEvent(TextCustomEditor__PlainTextEditorWidget* self, QDragMoveEvent* event) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnDragMoveEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_dragmoveevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_DragLeaveEvent(TextCustomEditor__PlainTextEditorWidget* self, QDragLeaveEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperDragLeaveEvent(TextCustomEditor__PlainTextEditorWidget* self, QDragLeaveEvent* event) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnDragLeaveEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_dragleaveevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_DropEvent(TextCustomEditor__PlainTextEditorWidget* self, QDropEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperDropEvent(TextCustomEditor__PlainTextEditorWidget* self, QDropEvent* event) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnDropEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_dropevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_ShowEvent(TextCustomEditor__PlainTextEditorWidget* self, QShowEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperShowEvent(TextCustomEditor__PlainTextEditorWidget* self, QShowEvent* event) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnShowEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_showevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_HideEvent(TextCustomEditor__PlainTextEditorWidget* self, QHideEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperHideEvent(TextCustomEditor__PlainTextEditorWidget* self, QHideEvent* event) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnHideEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_hideevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditorWidget_NativeEvent(TextCustomEditor__PlainTextEditorWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        return vtextcustomeditorplaintexteditorwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditorWidget_SuperNativeEvent(TextCustomEditor__PlainTextEditorWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        return vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnNativeEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_nativeevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_ChangeEvent(TextCustomEditor__PlainTextEditorWidget* self, QEvent* param1) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperChangeEvent(TextCustomEditor__PlainTextEditorWidget* self, QEvent* param1) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnChangeEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_changeevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__PlainTextEditorWidget_Metric(const TextCustomEditor__PlainTextEditorWidget* self, int param1) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget) {
        return vtextcustomeditorplaintexteditorwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditorWidget_SuperMetric(const TextCustomEditor__PlainTextEditorWidget* self, int param1) {
    if (auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self))) {
        return vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnMetric(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self)))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_metric_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_InitPainter(const TextCustomEditor__PlainTextEditorWidget* self, QPainter* painter) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperInitPainter(const TextCustomEditor__PlainTextEditorWidget* self, QPainter* painter) {
    if (auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self))) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnInitPainter(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self)))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_initpainter_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextCustomEditor__PlainTextEditorWidget_Redirected(const TextCustomEditor__PlainTextEditorWidget* self, QPoint* offset) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget) {
        return vtextcustomeditorplaintexteditorwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextCustomEditor__PlainTextEditorWidget_SuperRedirected(const TextCustomEditor__PlainTextEditorWidget* self, QPoint* offset) {
    if (auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self))) {
        return vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnRedirected(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self)))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_redirected_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextCustomEditor__PlainTextEditorWidget_SharedPainter(const TextCustomEditor__PlainTextEditorWidget* self) {
    auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self));
    if (vtextcustomeditorplaintexteditorwidget) {
        return vtextcustomeditorplaintexteditorwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextCustomEditor__PlainTextEditorWidget_SuperSharedPainter(const TextCustomEditor__PlainTextEditorWidget* self) {
    if (auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self))) {
        return vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnSharedPainter(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self)))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_sharedpainter_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_InputMethodEvent(TextCustomEditor__PlainTextEditorWidget* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperInputMethodEvent(TextCustomEditor__PlainTextEditorWidget* self, QInputMethodEvent* param1) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnInputMethodEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_inputmethodevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextCustomEditor__PlainTextEditorWidget_InputMethodQuery(const TextCustomEditor__PlainTextEditorWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* TextCustomEditor__PlainTextEditorWidget_SuperInputMethodQuery(const TextCustomEditor__PlainTextEditorWidget* self, int param1) {
    return new QVariant(self->TextCustomEditor::PlainTextEditorWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnInputMethodQuery(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self)))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_inputmethodquery_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditorWidget_FocusNextPrevChild(TextCustomEditor__PlainTextEditorWidget* self, bool next) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        return vtextcustomeditorplaintexteditorwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditorWidget_SuperFocusNextPrevChild(TextCustomEditor__PlainTextEditorWidget* self, bool next) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        return vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnFocusNextPrevChild(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_focusnextprevchild_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditorWidget_EventFilter(TextCustomEditor__PlainTextEditorWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditorWidget_SuperEventFilter(TextCustomEditor__PlainTextEditorWidget* self, QObject* watched, QEvent* event) {
    return self->TextCustomEditor::PlainTextEditorWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnEventFilter(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_eventfilter_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_TimerEvent(TextCustomEditor__PlainTextEditorWidget* self, QTimerEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperTimerEvent(TextCustomEditor__PlainTextEditorWidget* self, QTimerEvent* event) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnTimerEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_timerevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_ChildEvent(TextCustomEditor__PlainTextEditorWidget* self, QChildEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperChildEvent(TextCustomEditor__PlainTextEditorWidget* self, QChildEvent* event) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnChildEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_childevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_CustomEvent(TextCustomEditor__PlainTextEditorWidget* self, QEvent* event) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperCustomEvent(TextCustomEditor__PlainTextEditorWidget* self, QEvent* event) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnCustomEvent(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_customevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_ConnectNotify(TextCustomEditor__PlainTextEditorWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperConnectNotify(TextCustomEditor__PlainTextEditorWidget* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnConnectNotify(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_connectnotify_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditorWidget_DisconnectNotify(TextCustomEditor__PlainTextEditorWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self);
    if (vtextcustomeditorplaintexteditorwidget) {
        vtextcustomeditorplaintexteditorwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditorWidget_SuperDisconnectNotify(TextCustomEditor__PlainTextEditorWidget* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->TextCustomEditor::PlainTextEditorWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditorWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditorWidget_OnDisconnectNotify(TextCustomEditor__PlainTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self))
        vtextcustomeditorplaintexteditorwidget->textcustomeditor__plaintexteditorwidget_disconnectnotify_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditorWidget::TextCustomEditor__PlainTextEditorWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextCustomEditor__PlainTextEditorWidget_UpdateMicroFocus(TextCustomEditor__PlainTextEditorWidget* self) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->VirtualTextCustomEditorPlainTextEditorWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditorWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__PlainTextEditorWidget_Create(TextCustomEditor__PlainTextEditorWidget* self) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->VirtualTextCustomEditorPlainTextEditorWidget::create();
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditorWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__PlainTextEditorWidget_Destroy(TextCustomEditor__PlainTextEditorWidget* self) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        vtextcustomeditorplaintexteditorwidget->VirtualTextCustomEditorPlainTextEditorWidget::destroy();
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditorWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__PlainTextEditorWidget_FocusNextChild(TextCustomEditor__PlainTextEditorWidget* self) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        return vtextcustomeditorplaintexteditorwidget->VirtualTextCustomEditorPlainTextEditorWidget::focusNextChild();
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditorWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__PlainTextEditorWidget_FocusPreviousChild(TextCustomEditor__PlainTextEditorWidget* self) {
    if (auto* vtextcustomeditorplaintexteditorwidget = dynamic_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(self)) {
        return vtextcustomeditorplaintexteditorwidget->VirtualTextCustomEditorPlainTextEditorWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditorWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextCustomEditor__PlainTextEditorWidget_Sender(const TextCustomEditor__PlainTextEditorWidget* self) {
    if (auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self))) {
        return vtextcustomeditorplaintexteditorwidget->VirtualTextCustomEditorPlainTextEditorWidget::sender();
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditorWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextCustomEditor__PlainTextEditorWidget_SenderSignalIndex(const TextCustomEditor__PlainTextEditorWidget* self) {
    if (auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self))) {
        return vtextcustomeditorplaintexteditorwidget->VirtualTextCustomEditorPlainTextEditorWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditorWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextCustomEditor__PlainTextEditorWidget_Receivers(const TextCustomEditor__PlainTextEditorWidget* self, const char* signal) {
    if (auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self))) {
        return vtextcustomeditorplaintexteditorwidget->VirtualTextCustomEditorPlainTextEditorWidget::receivers(signal);
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditorWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__PlainTextEditorWidget_IsSignalConnected(const TextCustomEditor__PlainTextEditorWidget* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self))) {
        return vtextcustomeditorplaintexteditorwidget->VirtualTextCustomEditorPlainTextEditorWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditorWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextCustomEditor__PlainTextEditorWidget_GetDecodedMetricF(const TextCustomEditor__PlainTextEditorWidget* self, int metricA, int metricB) {
    if (auto* vtextcustomeditorplaintexteditorwidget = const_cast<VirtualTextCustomEditorPlainTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditorWidget*>(self))) {
        return vtextcustomeditorplaintexteditorwidget->VirtualTextCustomEditorPlainTextEditorWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditorWidget::getDecodedMetricF called without a directly constructed type");
}

void TextCustomEditor__PlainTextEditorWidget_Delete(TextCustomEditor__PlainTextEditorWidget* self) {
    delete self;
}
