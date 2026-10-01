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
    return (QMetaObject*)self->metaObject();
}

void* TextCustomEditor__RichTextBrowserWidget_Metacast(TextCustomEditor__RichTextBrowserWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextCustomEditor__RichTextBrowserWidget_Metacall(TextCustomEditor__RichTextBrowserWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextCustomEditor__RichTextBrowserWidget_Tr(const char* s) {
    auto _ret = TextCustomEditor::RichTextBrowserWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
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

libqt_string TextCustomEditor__RichTextBrowserWidget_Tr2(const char* s, const char* c) {
    auto _ret = TextCustomEditor::RichTextBrowserWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextCustomEditor__RichTextBrowserWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextCustomEditor::RichTextBrowserWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextCustomEditor__RichTextBrowserWidget_SuperMetaObject(const TextCustomEditor__RichTextBrowserWidget* self) {
    return (QMetaObject*)self->TextCustomEditor::RichTextBrowserWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnMetaObject(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self)))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_metaobject_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextCustomEditor__RichTextBrowserWidget_SuperMetacast(TextCustomEditor__RichTextBrowserWidget* self, const char* param1) {
    return self->TextCustomEditor::RichTextBrowserWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnMetacast(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_metacast_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowserWidget_SuperMetacall(TextCustomEditor__RichTextBrowserWidget* self, int param1, int param2, void** param3) {
    return self->TextCustomEditor::RichTextBrowserWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnMetacall(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_metacall_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_Metacall_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__RichTextBrowserWidget_DevType(const TextCustomEditor__RichTextBrowserWidget* self) {
    return self->devType();
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowserWidget_SuperDevType(const TextCustomEditor__RichTextBrowserWidget* self) {
    return self->TextCustomEditor::RichTextBrowserWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnDevType(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self)))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_devtype_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SetVisible(TextCustomEditor__RichTextBrowserWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperSetVisible(TextCustomEditor__RichTextBrowserWidget* self, bool visible) {
    self->TextCustomEditor::RichTextBrowserWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnSetVisible(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_setvisible_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* TextCustomEditor__RichTextBrowserWidget_SizeHint(const TextCustomEditor__RichTextBrowserWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextCustomEditor__RichTextBrowserWidget_SuperSizeHint(const TextCustomEditor__RichTextBrowserWidget* self) {
    return new QSize(self->TextCustomEditor::RichTextBrowserWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnSizeHint(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self)))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_sizehint_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextCustomEditor__RichTextBrowserWidget_MinimumSizeHint(const TextCustomEditor__RichTextBrowserWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextCustomEditor__RichTextBrowserWidget_SuperMinimumSizeHint(const TextCustomEditor__RichTextBrowserWidget* self) {
    return new QSize(self->TextCustomEditor::RichTextBrowserWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnMinimumSizeHint(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self)))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_minimumsizehint_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__RichTextBrowserWidget_HeightForWidth(const TextCustomEditor__RichTextBrowserWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowserWidget_SuperHeightForWidth(const TextCustomEditor__RichTextBrowserWidget* self, int param1) {
    return self->TextCustomEditor::RichTextBrowserWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnHeightForWidth(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self)))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_heightforwidth_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowserWidget_HasHeightForWidth(const TextCustomEditor__RichTextBrowserWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserWidget_SuperHasHeightForWidth(const TextCustomEditor__RichTextBrowserWidget* self) {
    return self->TextCustomEditor::RichTextBrowserWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnHasHeightForWidth(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self)))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_hasheightforwidth_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextCustomEditor__RichTextBrowserWidget_PaintEngine(const TextCustomEditor__RichTextBrowserWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextCustomEditor__RichTextBrowserWidget_SuperPaintEngine(const TextCustomEditor__RichTextBrowserWidget* self) {
    return self->TextCustomEditor::RichTextBrowserWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnPaintEngine(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self)))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_paintengine_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowserWidget_Event(TextCustomEditor__RichTextBrowserWidget* self, QEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        return vtextcustomeditorrichtextbrowserwidget->event(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserWidget_SuperEvent(TextCustomEditor__RichTextBrowserWidget* self, QEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        return vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::event(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_event_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_MousePressEvent(TextCustomEditor__RichTextBrowserWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperMousePressEvent(TextCustomEditor__RichTextBrowserWidget* self, QMouseEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnMousePressEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_mousepressevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_MouseReleaseEvent(TextCustomEditor__RichTextBrowserWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperMouseReleaseEvent(TextCustomEditor__RichTextBrowserWidget* self, QMouseEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnMouseReleaseEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_mousereleaseevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_MouseDoubleClickEvent(TextCustomEditor__RichTextBrowserWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperMouseDoubleClickEvent(TextCustomEditor__RichTextBrowserWidget* self, QMouseEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnMouseDoubleClickEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_MouseMoveEvent(TextCustomEditor__RichTextBrowserWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperMouseMoveEvent(TextCustomEditor__RichTextBrowserWidget* self, QMouseEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnMouseMoveEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_mousemoveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_WheelEvent(TextCustomEditor__RichTextBrowserWidget* self, QWheelEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperWheelEvent(TextCustomEditor__RichTextBrowserWidget* self, QWheelEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnWheelEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_wheelevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_KeyPressEvent(TextCustomEditor__RichTextBrowserWidget* self, QKeyEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperKeyPressEvent(TextCustomEditor__RichTextBrowserWidget* self, QKeyEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnKeyPressEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_keypressevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_KeyReleaseEvent(TextCustomEditor__RichTextBrowserWidget* self, QKeyEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperKeyReleaseEvent(TextCustomEditor__RichTextBrowserWidget* self, QKeyEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnKeyReleaseEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_keyreleaseevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_FocusInEvent(TextCustomEditor__RichTextBrowserWidget* self, QFocusEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperFocusInEvent(TextCustomEditor__RichTextBrowserWidget* self, QFocusEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnFocusInEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_focusinevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_FocusOutEvent(TextCustomEditor__RichTextBrowserWidget* self, QFocusEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperFocusOutEvent(TextCustomEditor__RichTextBrowserWidget* self, QFocusEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnFocusOutEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_focusoutevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_EnterEvent(TextCustomEditor__RichTextBrowserWidget* self, QEnterEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperEnterEvent(TextCustomEditor__RichTextBrowserWidget* self, QEnterEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnEnterEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_enterevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_LeaveEvent(TextCustomEditor__RichTextBrowserWidget* self, QEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperLeaveEvent(TextCustomEditor__RichTextBrowserWidget* self, QEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnLeaveEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_leaveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_PaintEvent(TextCustomEditor__RichTextBrowserWidget* self, QPaintEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperPaintEvent(TextCustomEditor__RichTextBrowserWidget* self, QPaintEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnPaintEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_paintevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_MoveEvent(TextCustomEditor__RichTextBrowserWidget* self, QMoveEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperMoveEvent(TextCustomEditor__RichTextBrowserWidget* self, QMoveEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnMoveEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_moveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_ResizeEvent(TextCustomEditor__RichTextBrowserWidget* self, QResizeEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperResizeEvent(TextCustomEditor__RichTextBrowserWidget* self, QResizeEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnResizeEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_resizeevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_CloseEvent(TextCustomEditor__RichTextBrowserWidget* self, QCloseEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperCloseEvent(TextCustomEditor__RichTextBrowserWidget* self, QCloseEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnCloseEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_closeevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_ContextMenuEvent(TextCustomEditor__RichTextBrowserWidget* self, QContextMenuEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperContextMenuEvent(TextCustomEditor__RichTextBrowserWidget* self, QContextMenuEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnContextMenuEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_contextmenuevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_TabletEvent(TextCustomEditor__RichTextBrowserWidget* self, QTabletEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperTabletEvent(TextCustomEditor__RichTextBrowserWidget* self, QTabletEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnTabletEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_tabletevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_ActionEvent(TextCustomEditor__RichTextBrowserWidget* self, QActionEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperActionEvent(TextCustomEditor__RichTextBrowserWidget* self, QActionEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnActionEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_actionevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_DragEnterEvent(TextCustomEditor__RichTextBrowserWidget* self, QDragEnterEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperDragEnterEvent(TextCustomEditor__RichTextBrowserWidget* self, QDragEnterEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnDragEnterEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_dragenterevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_DragMoveEvent(TextCustomEditor__RichTextBrowserWidget* self, QDragMoveEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperDragMoveEvent(TextCustomEditor__RichTextBrowserWidget* self, QDragMoveEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnDragMoveEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_dragmoveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_DragLeaveEvent(TextCustomEditor__RichTextBrowserWidget* self, QDragLeaveEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperDragLeaveEvent(TextCustomEditor__RichTextBrowserWidget* self, QDragLeaveEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnDragLeaveEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_dragleaveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_DropEvent(TextCustomEditor__RichTextBrowserWidget* self, QDropEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperDropEvent(TextCustomEditor__RichTextBrowserWidget* self, QDropEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnDropEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_dropevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_ShowEvent(TextCustomEditor__RichTextBrowserWidget* self, QShowEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperShowEvent(TextCustomEditor__RichTextBrowserWidget* self, QShowEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnShowEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_showevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_HideEvent(TextCustomEditor__RichTextBrowserWidget* self, QHideEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperHideEvent(TextCustomEditor__RichTextBrowserWidget* self, QHideEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnHideEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_hideevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowserWidget_NativeEvent(TextCustomEditor__RichTextBrowserWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        return vtextcustomeditorrichtextbrowserwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserWidget_SuperNativeEvent(TextCustomEditor__RichTextBrowserWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        return vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnNativeEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_nativeevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_ChangeEvent(TextCustomEditor__RichTextBrowserWidget* self, QEvent* param1) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperChangeEvent(TextCustomEditor__RichTextBrowserWidget* self, QEvent* param1) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnChangeEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_changeevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__RichTextBrowserWidget_Metric(const TextCustomEditor__RichTextBrowserWidget* self, int param1) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget) {
        return vtextcustomeditorrichtextbrowserwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowserWidget_SuperMetric(const TextCustomEditor__RichTextBrowserWidget* self, int param1) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self))) {
        return vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnMetric(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self)))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_metric_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_InitPainter(const TextCustomEditor__RichTextBrowserWidget* self, QPainter* painter) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperInitPainter(const TextCustomEditor__RichTextBrowserWidget* self, QPainter* painter) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self))) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnInitPainter(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self)))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_initpainter_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextCustomEditor__RichTextBrowserWidget_Redirected(const TextCustomEditor__RichTextBrowserWidget* self, QPoint* offset) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget) {
        return vtextcustomeditorrichtextbrowserwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextCustomEditor__RichTextBrowserWidget_SuperRedirected(const TextCustomEditor__RichTextBrowserWidget* self, QPoint* offset) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self))) {
        return vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnRedirected(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self)))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_redirected_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextCustomEditor__RichTextBrowserWidget_SharedPainter(const TextCustomEditor__RichTextBrowserWidget* self) {
    auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self));
    if (vtextcustomeditorrichtextbrowserwidget) {
        return vtextcustomeditorrichtextbrowserwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextCustomEditor__RichTextBrowserWidget_SuperSharedPainter(const TextCustomEditor__RichTextBrowserWidget* self) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self))) {
        return vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnSharedPainter(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self)))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_sharedpainter_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_InputMethodEvent(TextCustomEditor__RichTextBrowserWidget* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperInputMethodEvent(TextCustomEditor__RichTextBrowserWidget* self, QInputMethodEvent* param1) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnInputMethodEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_inputmethodevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextCustomEditor__RichTextBrowserWidget_InputMethodQuery(const TextCustomEditor__RichTextBrowserWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* TextCustomEditor__RichTextBrowserWidget_SuperInputMethodQuery(const TextCustomEditor__RichTextBrowserWidget* self, int param1) {
    return new QVariant(self->TextCustomEditor::RichTextBrowserWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnInputMethodQuery(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self)))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_inputmethodquery_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowserWidget_FocusNextPrevChild(TextCustomEditor__RichTextBrowserWidget* self, bool next) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        return vtextcustomeditorrichtextbrowserwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserWidget_SuperFocusNextPrevChild(TextCustomEditor__RichTextBrowserWidget* self, bool next) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        return vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnFocusNextPrevChild(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_focusnextprevchild_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowserWidget_EventFilter(TextCustomEditor__RichTextBrowserWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowserWidget_SuperEventFilter(TextCustomEditor__RichTextBrowserWidget* self, QObject* watched, QEvent* event) {
    return self->TextCustomEditor::RichTextBrowserWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnEventFilter(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_eventfilter_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_TimerEvent(TextCustomEditor__RichTextBrowserWidget* self, QTimerEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperTimerEvent(TextCustomEditor__RichTextBrowserWidget* self, QTimerEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnTimerEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_timerevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_ChildEvent(TextCustomEditor__RichTextBrowserWidget* self, QChildEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperChildEvent(TextCustomEditor__RichTextBrowserWidget* self, QChildEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnChildEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_childevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_CustomEvent(TextCustomEditor__RichTextBrowserWidget* self, QEvent* event) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperCustomEvent(TextCustomEditor__RichTextBrowserWidget* self, QEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnCustomEvent(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_customevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_ConnectNotify(TextCustomEditor__RichTextBrowserWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperConnectNotify(TextCustomEditor__RichTextBrowserWidget* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnConnectNotify(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_connectnotify_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowserWidget_DisconnectNotify(TextCustomEditor__RichTextBrowserWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self);
    if (vtextcustomeditorrichtextbrowserwidget) {
        vtextcustomeditorrichtextbrowserwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowserWidget_SuperDisconnectNotify(TextCustomEditor__RichTextBrowserWidget* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->TextCustomEditor::RichTextBrowserWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowserWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowserWidget_OnDisconnectNotify(TextCustomEditor__RichTextBrowserWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self))
        vtextcustomeditorrichtextbrowserwidget->textcustomeditor__richtextbrowserwidget_disconnectnotify_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowserWidget::TextCustomEditor__RichTextBrowserWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextBrowserWidget_UpdateMicroFocus(TextCustomEditor__RichTextBrowserWidget* self) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->VirtualTextCustomEditorRichTextBrowserWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowserWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextBrowserWidget_Create(TextCustomEditor__RichTextBrowserWidget* self) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->VirtualTextCustomEditorRichTextBrowserWidget::create();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowserWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextBrowserWidget_Destroy(TextCustomEditor__RichTextBrowserWidget* self) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        vtextcustomeditorrichtextbrowserwidget->VirtualTextCustomEditorRichTextBrowserWidget::destroy();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowserWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__RichTextBrowserWidget_FocusNextChild(TextCustomEditor__RichTextBrowserWidget* self) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        return vtextcustomeditorrichtextbrowserwidget->VirtualTextCustomEditorRichTextBrowserWidget::focusNextChild();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowserWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__RichTextBrowserWidget_FocusPreviousChild(TextCustomEditor__RichTextBrowserWidget* self) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = dynamic_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(self)) {
        return vtextcustomeditorrichtextbrowserwidget->VirtualTextCustomEditorRichTextBrowserWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowserWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextCustomEditor__RichTextBrowserWidget_Sender(const TextCustomEditor__RichTextBrowserWidget* self) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self))) {
        return vtextcustomeditorrichtextbrowserwidget->VirtualTextCustomEditorRichTextBrowserWidget::sender();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowserWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextCustomEditor__RichTextBrowserWidget_SenderSignalIndex(const TextCustomEditor__RichTextBrowserWidget* self) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self))) {
        return vtextcustomeditorrichtextbrowserwidget->VirtualTextCustomEditorRichTextBrowserWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowserWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextCustomEditor__RichTextBrowserWidget_Receivers(const TextCustomEditor__RichTextBrowserWidget* self, const char* signal) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self))) {
        return vtextcustomeditorrichtextbrowserwidget->VirtualTextCustomEditorRichTextBrowserWidget::receivers(signal);
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowserWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__RichTextBrowserWidget_IsSignalConnected(const TextCustomEditor__RichTextBrowserWidget* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self))) {
        return vtextcustomeditorrichtextbrowserwidget->VirtualTextCustomEditorRichTextBrowserWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowserWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextCustomEditor__RichTextBrowserWidget_GetDecodedMetricF(const TextCustomEditor__RichTextBrowserWidget* self, int metricA, int metricB) {
    if (auto* vtextcustomeditorrichtextbrowserwidget = const_cast<VirtualTextCustomEditorRichTextBrowserWidget*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowserWidget*>(self))) {
        return vtextcustomeditorrichtextbrowserwidget->VirtualTextCustomEditorRichTextBrowserWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowserWidget::getDecodedMetricF called without a directly constructed type");
}

void TextCustomEditor__RichTextBrowserWidget_Delete(TextCustomEditor__RichTextBrowserWidget* self) {
    delete self;
}
