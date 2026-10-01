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
    return (QMetaObject*)self->metaObject();
}

void* TextCustomEditor__RichTextEditorWidget_Metacast(TextCustomEditor__RichTextEditorWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextCustomEditor__RichTextEditorWidget_Metacall(TextCustomEditor__RichTextEditorWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextCustomEditor__RichTextEditorWidget_Tr(const char* s) {
    auto _ret = TextCustomEditor::RichTextEditorWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
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

void TextCustomEditor__RichTextEditorWidget_SetPlainText(TextCustomEditor__RichTextEditorWidget* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setPlainText(text_QString);
}

libqt_string TextCustomEditor__RichTextEditorWidget_ToPlainText(const TextCustomEditor__RichTextEditorWidget* self) {
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

libqt_string TextCustomEditor__RichTextEditorWidget_Tr2(const char* s, const char* c) {
    auto _ret = TextCustomEditor::RichTextEditorWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextCustomEditor__RichTextEditorWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextCustomEditor::RichTextEditorWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextCustomEditor__RichTextEditorWidget_SuperMetaObject(const TextCustomEditor__RichTextEditorWidget* self) {
    return (QMetaObject*)self->TextCustomEditor::RichTextEditorWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnMetaObject(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self)))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_metaobject_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextCustomEditor__RichTextEditorWidget_SuperMetacast(TextCustomEditor__RichTextEditorWidget* self, const char* param1) {
    return self->TextCustomEditor::RichTextEditorWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnMetacast(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_metacast_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextCustomEditor__RichTextEditorWidget_SuperMetacall(TextCustomEditor__RichTextEditorWidget* self, int param1, int param2, void** param3) {
    return self->TextCustomEditor::RichTextEditorWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnMetacall(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_metacall_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_Metacall_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__RichTextEditorWidget_DevType(const TextCustomEditor__RichTextEditorWidget* self) {
    return self->devType();
}

// Base class handler implementation
int TextCustomEditor__RichTextEditorWidget_SuperDevType(const TextCustomEditor__RichTextEditorWidget* self) {
    return self->TextCustomEditor::RichTextEditorWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnDevType(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self)))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_devtype_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_SetVisible(TextCustomEditor__RichTextEditorWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperSetVisible(TextCustomEditor__RichTextEditorWidget* self, bool visible) {
    self->TextCustomEditor::RichTextEditorWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnSetVisible(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_setvisible_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* TextCustomEditor__RichTextEditorWidget_SizeHint(const TextCustomEditor__RichTextEditorWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextCustomEditor__RichTextEditorWidget_SuperSizeHint(const TextCustomEditor__RichTextEditorWidget* self) {
    return new QSize(self->TextCustomEditor::RichTextEditorWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnSizeHint(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self)))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_sizehint_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextCustomEditor__RichTextEditorWidget_MinimumSizeHint(const TextCustomEditor__RichTextEditorWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextCustomEditor__RichTextEditorWidget_SuperMinimumSizeHint(const TextCustomEditor__RichTextEditorWidget* self) {
    return new QSize(self->TextCustomEditor::RichTextEditorWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnMinimumSizeHint(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self)))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_minimumsizehint_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__RichTextEditorWidget_HeightForWidth(const TextCustomEditor__RichTextEditorWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextCustomEditor__RichTextEditorWidget_SuperHeightForWidth(const TextCustomEditor__RichTextEditorWidget* self, int param1) {
    return self->TextCustomEditor::RichTextEditorWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnHeightForWidth(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self)))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_heightforwidth_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditorWidget_HasHeightForWidth(const TextCustomEditor__RichTextEditorWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditorWidget_SuperHasHeightForWidth(const TextCustomEditor__RichTextEditorWidget* self) {
    return self->TextCustomEditor::RichTextEditorWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnHasHeightForWidth(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self)))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_hasheightforwidth_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextCustomEditor__RichTextEditorWidget_PaintEngine(const TextCustomEditor__RichTextEditorWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextCustomEditor__RichTextEditorWidget_SuperPaintEngine(const TextCustomEditor__RichTextEditorWidget* self) {
    return self->TextCustomEditor::RichTextEditorWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnPaintEngine(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self)))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_paintengine_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditorWidget_Event(TextCustomEditor__RichTextEditorWidget* self, QEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        return vtextcustomeditorrichtexteditorwidget->event(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditorWidget_SuperEvent(TextCustomEditor__RichTextEditorWidget* self, QEvent* event) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        return vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::event(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_event_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_MousePressEvent(TextCustomEditor__RichTextEditorWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperMousePressEvent(TextCustomEditor__RichTextEditorWidget* self, QMouseEvent* event) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnMousePressEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_mousepressevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_MouseReleaseEvent(TextCustomEditor__RichTextEditorWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperMouseReleaseEvent(TextCustomEditor__RichTextEditorWidget* self, QMouseEvent* event) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnMouseReleaseEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_mousereleaseevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_MouseDoubleClickEvent(TextCustomEditor__RichTextEditorWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperMouseDoubleClickEvent(TextCustomEditor__RichTextEditorWidget* self, QMouseEvent* event) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnMouseDoubleClickEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_MouseMoveEvent(TextCustomEditor__RichTextEditorWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperMouseMoveEvent(TextCustomEditor__RichTextEditorWidget* self, QMouseEvent* event) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnMouseMoveEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_mousemoveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_WheelEvent(TextCustomEditor__RichTextEditorWidget* self, QWheelEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperWheelEvent(TextCustomEditor__RichTextEditorWidget* self, QWheelEvent* event) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnWheelEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_wheelevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_KeyPressEvent(TextCustomEditor__RichTextEditorWidget* self, QKeyEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperKeyPressEvent(TextCustomEditor__RichTextEditorWidget* self, QKeyEvent* event) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnKeyPressEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_keypressevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_KeyReleaseEvent(TextCustomEditor__RichTextEditorWidget* self, QKeyEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperKeyReleaseEvent(TextCustomEditor__RichTextEditorWidget* self, QKeyEvent* event) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnKeyReleaseEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_keyreleaseevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_FocusInEvent(TextCustomEditor__RichTextEditorWidget* self, QFocusEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperFocusInEvent(TextCustomEditor__RichTextEditorWidget* self, QFocusEvent* event) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnFocusInEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_focusinevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_FocusOutEvent(TextCustomEditor__RichTextEditorWidget* self, QFocusEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperFocusOutEvent(TextCustomEditor__RichTextEditorWidget* self, QFocusEvent* event) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnFocusOutEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_focusoutevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_EnterEvent(TextCustomEditor__RichTextEditorWidget* self, QEnterEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperEnterEvent(TextCustomEditor__RichTextEditorWidget* self, QEnterEvent* event) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnEnterEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_enterevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_LeaveEvent(TextCustomEditor__RichTextEditorWidget* self, QEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperLeaveEvent(TextCustomEditor__RichTextEditorWidget* self, QEvent* event) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnLeaveEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_leaveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_PaintEvent(TextCustomEditor__RichTextEditorWidget* self, QPaintEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperPaintEvent(TextCustomEditor__RichTextEditorWidget* self, QPaintEvent* event) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnPaintEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_paintevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_MoveEvent(TextCustomEditor__RichTextEditorWidget* self, QMoveEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperMoveEvent(TextCustomEditor__RichTextEditorWidget* self, QMoveEvent* event) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnMoveEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_moveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_ResizeEvent(TextCustomEditor__RichTextEditorWidget* self, QResizeEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperResizeEvent(TextCustomEditor__RichTextEditorWidget* self, QResizeEvent* event) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnResizeEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_resizeevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_CloseEvent(TextCustomEditor__RichTextEditorWidget* self, QCloseEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperCloseEvent(TextCustomEditor__RichTextEditorWidget* self, QCloseEvent* event) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnCloseEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_closeevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_ContextMenuEvent(TextCustomEditor__RichTextEditorWidget* self, QContextMenuEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperContextMenuEvent(TextCustomEditor__RichTextEditorWidget* self, QContextMenuEvent* event) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnContextMenuEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_contextmenuevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_TabletEvent(TextCustomEditor__RichTextEditorWidget* self, QTabletEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperTabletEvent(TextCustomEditor__RichTextEditorWidget* self, QTabletEvent* event) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnTabletEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_tabletevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_ActionEvent(TextCustomEditor__RichTextEditorWidget* self, QActionEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperActionEvent(TextCustomEditor__RichTextEditorWidget* self, QActionEvent* event) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnActionEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_actionevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_DragEnterEvent(TextCustomEditor__RichTextEditorWidget* self, QDragEnterEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperDragEnterEvent(TextCustomEditor__RichTextEditorWidget* self, QDragEnterEvent* event) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnDragEnterEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_dragenterevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_DragMoveEvent(TextCustomEditor__RichTextEditorWidget* self, QDragMoveEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperDragMoveEvent(TextCustomEditor__RichTextEditorWidget* self, QDragMoveEvent* event) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnDragMoveEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_dragmoveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_DragLeaveEvent(TextCustomEditor__RichTextEditorWidget* self, QDragLeaveEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperDragLeaveEvent(TextCustomEditor__RichTextEditorWidget* self, QDragLeaveEvent* event) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnDragLeaveEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_dragleaveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_DropEvent(TextCustomEditor__RichTextEditorWidget* self, QDropEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperDropEvent(TextCustomEditor__RichTextEditorWidget* self, QDropEvent* event) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnDropEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_dropevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_ShowEvent(TextCustomEditor__RichTextEditorWidget* self, QShowEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperShowEvent(TextCustomEditor__RichTextEditorWidget* self, QShowEvent* event) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnShowEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_showevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_HideEvent(TextCustomEditor__RichTextEditorWidget* self, QHideEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperHideEvent(TextCustomEditor__RichTextEditorWidget* self, QHideEvent* event) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnHideEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_hideevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditorWidget_NativeEvent(TextCustomEditor__RichTextEditorWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        return vtextcustomeditorrichtexteditorwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditorWidget_SuperNativeEvent(TextCustomEditor__RichTextEditorWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        return vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnNativeEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_nativeevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_ChangeEvent(TextCustomEditor__RichTextEditorWidget* self, QEvent* param1) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperChangeEvent(TextCustomEditor__RichTextEditorWidget* self, QEvent* param1) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnChangeEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_changeevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__RichTextEditorWidget_Metric(const TextCustomEditor__RichTextEditorWidget* self, int param1) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget) {
        return vtextcustomeditorrichtexteditorwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextEditorWidget_SuperMetric(const TextCustomEditor__RichTextEditorWidget* self, int param1) {
    if (auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self))) {
        return vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnMetric(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self)))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_metric_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_InitPainter(const TextCustomEditor__RichTextEditorWidget* self, QPainter* painter) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperInitPainter(const TextCustomEditor__RichTextEditorWidget* self, QPainter* painter) {
    if (auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self))) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnInitPainter(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self)))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_initpainter_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextCustomEditor__RichTextEditorWidget_Redirected(const TextCustomEditor__RichTextEditorWidget* self, QPoint* offset) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget) {
        return vtextcustomeditorrichtexteditorwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextCustomEditor__RichTextEditorWidget_SuperRedirected(const TextCustomEditor__RichTextEditorWidget* self, QPoint* offset) {
    if (auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self))) {
        return vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnRedirected(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self)))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_redirected_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextCustomEditor__RichTextEditorWidget_SharedPainter(const TextCustomEditor__RichTextEditorWidget* self) {
    auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self));
    if (vtextcustomeditorrichtexteditorwidget) {
        return vtextcustomeditorrichtexteditorwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextCustomEditor__RichTextEditorWidget_SuperSharedPainter(const TextCustomEditor__RichTextEditorWidget* self) {
    if (auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self))) {
        return vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnSharedPainter(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self)))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_sharedpainter_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_InputMethodEvent(TextCustomEditor__RichTextEditorWidget* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperInputMethodEvent(TextCustomEditor__RichTextEditorWidget* self, QInputMethodEvent* param1) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnInputMethodEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_inputmethodevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextCustomEditor__RichTextEditorWidget_InputMethodQuery(const TextCustomEditor__RichTextEditorWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* TextCustomEditor__RichTextEditorWidget_SuperInputMethodQuery(const TextCustomEditor__RichTextEditorWidget* self, int param1) {
    return new QVariant(self->TextCustomEditor::RichTextEditorWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnInputMethodQuery(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self)))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_inputmethodquery_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditorWidget_FocusNextPrevChild(TextCustomEditor__RichTextEditorWidget* self, bool next) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        return vtextcustomeditorrichtexteditorwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditorWidget_SuperFocusNextPrevChild(TextCustomEditor__RichTextEditorWidget* self, bool next) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        return vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnFocusNextPrevChild(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_focusnextprevchild_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditorWidget_EventFilter(TextCustomEditor__RichTextEditorWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditorWidget_SuperEventFilter(TextCustomEditor__RichTextEditorWidget* self, QObject* watched, QEvent* event) {
    return self->TextCustomEditor::RichTextEditorWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnEventFilter(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_eventfilter_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_TimerEvent(TextCustomEditor__RichTextEditorWidget* self, QTimerEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperTimerEvent(TextCustomEditor__RichTextEditorWidget* self, QTimerEvent* event) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnTimerEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_timerevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_ChildEvent(TextCustomEditor__RichTextEditorWidget* self, QChildEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperChildEvent(TextCustomEditor__RichTextEditorWidget* self, QChildEvent* event) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnChildEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_childevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_CustomEvent(TextCustomEditor__RichTextEditorWidget* self, QEvent* event) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperCustomEvent(TextCustomEditor__RichTextEditorWidget* self, QEvent* event) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnCustomEvent(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_customevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_ConnectNotify(TextCustomEditor__RichTextEditorWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperConnectNotify(TextCustomEditor__RichTextEditorWidget* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnConnectNotify(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_connectnotify_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditorWidget_DisconnectNotify(TextCustomEditor__RichTextEditorWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self);
    if (vtextcustomeditorrichtexteditorwidget) {
        vtextcustomeditorrichtexteditorwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditorWidget_SuperDisconnectNotify(TextCustomEditor__RichTextEditorWidget* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->TextCustomEditor::RichTextEditorWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditorWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditorWidget_OnDisconnectNotify(TextCustomEditor__RichTextEditorWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self))
        vtextcustomeditorrichtexteditorwidget->textcustomeditor__richtexteditorwidget_disconnectnotify_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditorWidget::TextCustomEditor__RichTextEditorWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextEditorWidget_UpdateMicroFocus(TextCustomEditor__RichTextEditorWidget* self) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->VirtualTextCustomEditorRichTextEditorWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditorWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextEditorWidget_Create(TextCustomEditor__RichTextEditorWidget* self) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->VirtualTextCustomEditorRichTextEditorWidget::create();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditorWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextEditorWidget_Destroy(TextCustomEditor__RichTextEditorWidget* self) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        vtextcustomeditorrichtexteditorwidget->VirtualTextCustomEditorRichTextEditorWidget::destroy();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditorWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__RichTextEditorWidget_FocusNextChild(TextCustomEditor__RichTextEditorWidget* self) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        return vtextcustomeditorrichtexteditorwidget->VirtualTextCustomEditorRichTextEditorWidget::focusNextChild();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditorWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__RichTextEditorWidget_FocusPreviousChild(TextCustomEditor__RichTextEditorWidget* self) {
    if (auto* vtextcustomeditorrichtexteditorwidget = dynamic_cast<VirtualTextCustomEditorRichTextEditorWidget*>(self)) {
        return vtextcustomeditorrichtexteditorwidget->VirtualTextCustomEditorRichTextEditorWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditorWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextCustomEditor__RichTextEditorWidget_Sender(const TextCustomEditor__RichTextEditorWidget* self) {
    if (auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self))) {
        return vtextcustomeditorrichtexteditorwidget->VirtualTextCustomEditorRichTextEditorWidget::sender();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditorWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextCustomEditor__RichTextEditorWidget_SenderSignalIndex(const TextCustomEditor__RichTextEditorWidget* self) {
    if (auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self))) {
        return vtextcustomeditorrichtexteditorwidget->VirtualTextCustomEditorRichTextEditorWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditorWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextCustomEditor__RichTextEditorWidget_Receivers(const TextCustomEditor__RichTextEditorWidget* self, const char* signal) {
    if (auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self))) {
        return vtextcustomeditorrichtexteditorwidget->VirtualTextCustomEditorRichTextEditorWidget::receivers(signal);
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditorWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__RichTextEditorWidget_IsSignalConnected(const TextCustomEditor__RichTextEditorWidget* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self))) {
        return vtextcustomeditorrichtexteditorwidget->VirtualTextCustomEditorRichTextEditorWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditorWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextCustomEditor__RichTextEditorWidget_GetDecodedMetricF(const TextCustomEditor__RichTextEditorWidget* self, int metricA, int metricB) {
    if (auto* vtextcustomeditorrichtexteditorwidget = const_cast<VirtualTextCustomEditorRichTextEditorWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditorWidget*>(self))) {
        return vtextcustomeditorrichtexteditorwidget->VirtualTextCustomEditorRichTextEditorWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditorWidget::getDecodedMetricF called without a directly constructed type");
}

void TextCustomEditor__RichTextEditorWidget_Delete(TextCustomEditor__RichTextEditorWidget* self) {
    delete self;
}
