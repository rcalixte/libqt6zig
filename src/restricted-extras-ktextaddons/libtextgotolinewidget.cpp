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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextCustomEditor__TextGoToLineWidget
#include <textgotolinewidget.h>
#include "libtextgotolinewidget.h"
#include "libtextgotolinewidget.hxx"

TextCustomEditor__TextGoToLineWidget* TextCustomEditor__TextGoToLineWidget_new(QWidget* parent) {
    return new VirtualTextCustomEditorTextGoToLineWidget(parent);
}

TextCustomEditor__TextGoToLineWidget* TextCustomEditor__TextGoToLineWidget_new2() {
    return new VirtualTextCustomEditorTextGoToLineWidget();
}

QMetaObject* TextCustomEditor__TextGoToLineWidget_MetaObject(const TextCustomEditor__TextGoToLineWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextCustomEditor__TextGoToLineWidget_Metacast(TextCustomEditor__TextGoToLineWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextCustomEditor__TextGoToLineWidget_Metacall(TextCustomEditor__TextGoToLineWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextCustomEditor__TextGoToLineWidget_Tr(const char* s) {
    auto _ret = TextCustomEditor::TextGoToLineWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextCustomEditor__TextGoToLineWidget_GoToLine(TextCustomEditor__TextGoToLineWidget* self) {
    self->goToLine();
}

void TextCustomEditor__TextGoToLineWidget_SetMaximumLineCount(TextCustomEditor__TextGoToLineWidget* self, int max) {
    self->setMaximumLineCount(static_cast<int>(max));
}

void TextCustomEditor__TextGoToLineWidget_MoveToLine(TextCustomEditor__TextGoToLineWidget* self, int param1) {
    self->moveToLine(static_cast<int>(param1));
}

void TextCustomEditor__TextGoToLineWidget_Connect_MoveToLine(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__TextGoToLineWidget*, int) = reinterpret_cast<void (*)(TextCustomEditor__TextGoToLineWidget*, int)>(slot);
    TextCustomEditor::TextGoToLineWidget::connect(self,
                                                  static_cast<void (TextCustomEditor::TextGoToLineWidget::*)(int)>(&TextCustomEditor::TextGoToLineWidget::moveToLine),
                                                  [self, slotFunc](int param1) {
                                                      int sigval1 = param1;
                                                      slotFunc(self, sigval1);
                                                  });
}

void TextCustomEditor__TextGoToLineWidget_HideGotoLine(TextCustomEditor__TextGoToLineWidget* self) {
    self->hideGotoLine();
}

void TextCustomEditor__TextGoToLineWidget_Connect_HideGotoLine(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__TextGoToLineWidget*) = reinterpret_cast<void (*)(TextCustomEditor__TextGoToLineWidget*)>(slot);
    TextCustomEditor::TextGoToLineWidget::connect(self,
                                                  static_cast<void (TextCustomEditor::TextGoToLineWidget::*)()>(&TextCustomEditor::TextGoToLineWidget::hideGotoLine),
                                                  [self, slotFunc]() {
                                                      slotFunc(self);
                                                  });
}

bool TextCustomEditor__TextGoToLineWidget_Event(TextCustomEditor__TextGoToLineWidget* self, QEvent* e) {
    auto* vtextcustomeditor__textgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditor__textgotolinewidget) {
        return vtextcustomeditor__textgotolinewidget->event(e);
    }
    qFatal("Error: Protected method TextCustomEditor::TextGoToLineWidget::event called without a directly constructed type");
}

void TextCustomEditor__TextGoToLineWidget_ShowEvent(TextCustomEditor__TextGoToLineWidget* self, QShowEvent* e) {
    auto* vtextcustomeditor__textgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditor__textgotolinewidget) {
        vtextcustomeditor__textgotolinewidget->showEvent(e);
    }
}

bool TextCustomEditor__TextGoToLineWidget_EventFilter(TextCustomEditor__TextGoToLineWidget* self, QObject* obj, QEvent* event) {
    auto* vtextcustomeditor__textgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditor__textgotolinewidget) {
        return vtextcustomeditor__textgotolinewidget->eventFilter(obj, event);
    }
    qFatal("Error: Protected method TextCustomEditor::TextGoToLineWidget::eventFilter called without a directly constructed type");
}

void TextCustomEditor__TextGoToLineWidget_SlotBlockCountChanged(TextCustomEditor__TextGoToLineWidget* self, int numberBlockCount) {
    self->slotBlockCountChanged(static_cast<int>(numberBlockCount));
}

libqt_string TextCustomEditor__TextGoToLineWidget_Tr2(const char* s, const char* c) {
    auto _ret = TextCustomEditor::TextGoToLineWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextCustomEditor__TextGoToLineWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextCustomEditor::TextGoToLineWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextCustomEditor__TextGoToLineWidget_SuperMetaObject(const TextCustomEditor__TextGoToLineWidget* self) {
    return (QMetaObject*)self->TextCustomEditor::TextGoToLineWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnMetaObject(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self)))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_metaobject_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextCustomEditor__TextGoToLineWidget_SuperMetacast(TextCustomEditor__TextGoToLineWidget* self, const char* param1) {
    return self->TextCustomEditor::TextGoToLineWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnMetacast(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_metacast_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextCustomEditor__TextGoToLineWidget_SuperMetacall(TextCustomEditor__TextGoToLineWidget* self, int param1, int param2, void** param3) {
    return self->TextCustomEditor::TextGoToLineWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnMetacall(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_metacall_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
bool TextCustomEditor__TextGoToLineWidget_SuperEvent(TextCustomEditor__TextGoToLineWidget* self, QEvent* e) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        return vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::event(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_event_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_Event_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperShowEvent(TextCustomEditor__TextGoToLineWidget* self, QShowEvent* e) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::showEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnShowEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_showevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_ShowEvent_Callback>(slot);
}

// Base class handler implementation
bool TextCustomEditor__TextGoToLineWidget_SuperEventFilter(TextCustomEditor__TextGoToLineWidget* self, QObject* obj, QEvent* event) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        return vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::eventFilter(obj, event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnEventFilter(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_eventfilter_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__TextGoToLineWidget_DevType(const TextCustomEditor__TextGoToLineWidget* self) {
    return self->devType();
}

// Base class handler implementation
int TextCustomEditor__TextGoToLineWidget_SuperDevType(const TextCustomEditor__TextGoToLineWidget* self) {
    return self->TextCustomEditor::TextGoToLineWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnDevType(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self)))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_devtype_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_SetVisible(TextCustomEditor__TextGoToLineWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperSetVisible(TextCustomEditor__TextGoToLineWidget* self, bool visible) {
    self->TextCustomEditor::TextGoToLineWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnSetVisible(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_setvisible_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* TextCustomEditor__TextGoToLineWidget_SizeHint(const TextCustomEditor__TextGoToLineWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextCustomEditor__TextGoToLineWidget_SuperSizeHint(const TextCustomEditor__TextGoToLineWidget* self) {
    return new QSize(self->TextCustomEditor::TextGoToLineWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnSizeHint(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self)))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_sizehint_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextCustomEditor__TextGoToLineWidget_MinimumSizeHint(const TextCustomEditor__TextGoToLineWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextCustomEditor__TextGoToLineWidget_SuperMinimumSizeHint(const TextCustomEditor__TextGoToLineWidget* self) {
    return new QSize(self->TextCustomEditor::TextGoToLineWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnMinimumSizeHint(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self)))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_minimumsizehint_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__TextGoToLineWidget_HeightForWidth(const TextCustomEditor__TextGoToLineWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextCustomEditor__TextGoToLineWidget_SuperHeightForWidth(const TextCustomEditor__TextGoToLineWidget* self, int param1) {
    return self->TextCustomEditor::TextGoToLineWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnHeightForWidth(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self)))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_heightforwidth_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__TextGoToLineWidget_HasHeightForWidth(const TextCustomEditor__TextGoToLineWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextCustomEditor__TextGoToLineWidget_SuperHasHeightForWidth(const TextCustomEditor__TextGoToLineWidget* self) {
    return self->TextCustomEditor::TextGoToLineWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnHasHeightForWidth(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self)))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_hasheightforwidth_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextCustomEditor__TextGoToLineWidget_PaintEngine(const TextCustomEditor__TextGoToLineWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextCustomEditor__TextGoToLineWidget_SuperPaintEngine(const TextCustomEditor__TextGoToLineWidget* self) {
    return self->TextCustomEditor::TextGoToLineWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnPaintEngine(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self)))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_paintengine_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_MousePressEvent(TextCustomEditor__TextGoToLineWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperMousePressEvent(TextCustomEditor__TextGoToLineWidget* self, QMouseEvent* event) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnMousePressEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_mousepressevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_MouseReleaseEvent(TextCustomEditor__TextGoToLineWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperMouseReleaseEvent(TextCustomEditor__TextGoToLineWidget* self, QMouseEvent* event) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnMouseReleaseEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_mousereleaseevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_MouseDoubleClickEvent(TextCustomEditor__TextGoToLineWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperMouseDoubleClickEvent(TextCustomEditor__TextGoToLineWidget* self, QMouseEvent* event) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnMouseDoubleClickEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_MouseMoveEvent(TextCustomEditor__TextGoToLineWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperMouseMoveEvent(TextCustomEditor__TextGoToLineWidget* self, QMouseEvent* event) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnMouseMoveEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_mousemoveevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_WheelEvent(TextCustomEditor__TextGoToLineWidget* self, QWheelEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperWheelEvent(TextCustomEditor__TextGoToLineWidget* self, QWheelEvent* event) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnWheelEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_wheelevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_KeyPressEvent(TextCustomEditor__TextGoToLineWidget* self, QKeyEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperKeyPressEvent(TextCustomEditor__TextGoToLineWidget* self, QKeyEvent* event) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnKeyPressEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_keypressevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_KeyReleaseEvent(TextCustomEditor__TextGoToLineWidget* self, QKeyEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperKeyReleaseEvent(TextCustomEditor__TextGoToLineWidget* self, QKeyEvent* event) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnKeyReleaseEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_keyreleaseevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_FocusInEvent(TextCustomEditor__TextGoToLineWidget* self, QFocusEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperFocusInEvent(TextCustomEditor__TextGoToLineWidget* self, QFocusEvent* event) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnFocusInEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_focusinevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_FocusOutEvent(TextCustomEditor__TextGoToLineWidget* self, QFocusEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperFocusOutEvent(TextCustomEditor__TextGoToLineWidget* self, QFocusEvent* event) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnFocusOutEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_focusoutevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_EnterEvent(TextCustomEditor__TextGoToLineWidget* self, QEnterEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperEnterEvent(TextCustomEditor__TextGoToLineWidget* self, QEnterEvent* event) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnEnterEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_enterevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_LeaveEvent(TextCustomEditor__TextGoToLineWidget* self, QEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperLeaveEvent(TextCustomEditor__TextGoToLineWidget* self, QEvent* event) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnLeaveEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_leaveevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_PaintEvent(TextCustomEditor__TextGoToLineWidget* self, QPaintEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperPaintEvent(TextCustomEditor__TextGoToLineWidget* self, QPaintEvent* event) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnPaintEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_paintevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_MoveEvent(TextCustomEditor__TextGoToLineWidget* self, QMoveEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperMoveEvent(TextCustomEditor__TextGoToLineWidget* self, QMoveEvent* event) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnMoveEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_moveevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_ResizeEvent(TextCustomEditor__TextGoToLineWidget* self, QResizeEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperResizeEvent(TextCustomEditor__TextGoToLineWidget* self, QResizeEvent* event) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnResizeEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_resizeevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_CloseEvent(TextCustomEditor__TextGoToLineWidget* self, QCloseEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperCloseEvent(TextCustomEditor__TextGoToLineWidget* self, QCloseEvent* event) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnCloseEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_closeevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_ContextMenuEvent(TextCustomEditor__TextGoToLineWidget* self, QContextMenuEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperContextMenuEvent(TextCustomEditor__TextGoToLineWidget* self, QContextMenuEvent* event) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnContextMenuEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_contextmenuevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_TabletEvent(TextCustomEditor__TextGoToLineWidget* self, QTabletEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperTabletEvent(TextCustomEditor__TextGoToLineWidget* self, QTabletEvent* event) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnTabletEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_tabletevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_ActionEvent(TextCustomEditor__TextGoToLineWidget* self, QActionEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperActionEvent(TextCustomEditor__TextGoToLineWidget* self, QActionEvent* event) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnActionEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_actionevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_DragEnterEvent(TextCustomEditor__TextGoToLineWidget* self, QDragEnterEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperDragEnterEvent(TextCustomEditor__TextGoToLineWidget* self, QDragEnterEvent* event) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnDragEnterEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_dragenterevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_DragMoveEvent(TextCustomEditor__TextGoToLineWidget* self, QDragMoveEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperDragMoveEvent(TextCustomEditor__TextGoToLineWidget* self, QDragMoveEvent* event) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnDragMoveEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_dragmoveevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_DragLeaveEvent(TextCustomEditor__TextGoToLineWidget* self, QDragLeaveEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperDragLeaveEvent(TextCustomEditor__TextGoToLineWidget* self, QDragLeaveEvent* event) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnDragLeaveEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_dragleaveevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_DropEvent(TextCustomEditor__TextGoToLineWidget* self, QDropEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperDropEvent(TextCustomEditor__TextGoToLineWidget* self, QDropEvent* event) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnDropEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_dropevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_HideEvent(TextCustomEditor__TextGoToLineWidget* self, QHideEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperHideEvent(TextCustomEditor__TextGoToLineWidget* self, QHideEvent* event) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnHideEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_hideevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__TextGoToLineWidget_NativeEvent(TextCustomEditor__TextGoToLineWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        return vtextcustomeditortextgotolinewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__TextGoToLineWidget_SuperNativeEvent(TextCustomEditor__TextGoToLineWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        return vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnNativeEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_nativeevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_ChangeEvent(TextCustomEditor__TextGoToLineWidget* self, QEvent* param1) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperChangeEvent(TextCustomEditor__TextGoToLineWidget* self, QEvent* param1) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnChangeEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_changeevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__TextGoToLineWidget_Metric(const TextCustomEditor__TextGoToLineWidget* self, int param1) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget) {
        return vtextcustomeditortextgotolinewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextCustomEditor__TextGoToLineWidget_SuperMetric(const TextCustomEditor__TextGoToLineWidget* self, int param1) {
    if (auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self))) {
        return vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnMetric(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self)))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_metric_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_InitPainter(const TextCustomEditor__TextGoToLineWidget* self, QPainter* painter) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperInitPainter(const TextCustomEditor__TextGoToLineWidget* self, QPainter* painter) {
    if (auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self))) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnInitPainter(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self)))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_initpainter_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextCustomEditor__TextGoToLineWidget_Redirected(const TextCustomEditor__TextGoToLineWidget* self, QPoint* offset) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget) {
        return vtextcustomeditortextgotolinewidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextCustomEditor__TextGoToLineWidget_SuperRedirected(const TextCustomEditor__TextGoToLineWidget* self, QPoint* offset) {
    if (auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self))) {
        return vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnRedirected(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self)))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_redirected_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextCustomEditor__TextGoToLineWidget_SharedPainter(const TextCustomEditor__TextGoToLineWidget* self) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget) {
        return vtextcustomeditortextgotolinewidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextCustomEditor__TextGoToLineWidget_SuperSharedPainter(const TextCustomEditor__TextGoToLineWidget* self) {
    if (auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self))) {
        return vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnSharedPainter(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self)))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_sharedpainter_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_InputMethodEvent(TextCustomEditor__TextGoToLineWidget* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperInputMethodEvent(TextCustomEditor__TextGoToLineWidget* self, QInputMethodEvent* param1) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnInputMethodEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_inputmethodevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextCustomEditor__TextGoToLineWidget_InputMethodQuery(const TextCustomEditor__TextGoToLineWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* TextCustomEditor__TextGoToLineWidget_SuperInputMethodQuery(const TextCustomEditor__TextGoToLineWidget* self, int param1) {
    return new QVariant(self->TextCustomEditor::TextGoToLineWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnInputMethodQuery(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self)))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_inputmethodquery_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__TextGoToLineWidget_FocusNextPrevChild(TextCustomEditor__TextGoToLineWidget* self, bool next) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        return vtextcustomeditortextgotolinewidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__TextGoToLineWidget_SuperFocusNextPrevChild(TextCustomEditor__TextGoToLineWidget* self, bool next) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        return vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnFocusNextPrevChild(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_focusnextprevchild_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_TimerEvent(TextCustomEditor__TextGoToLineWidget* self, QTimerEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperTimerEvent(TextCustomEditor__TextGoToLineWidget* self, QTimerEvent* event) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnTimerEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_timerevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_ChildEvent(TextCustomEditor__TextGoToLineWidget* self, QChildEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperChildEvent(TextCustomEditor__TextGoToLineWidget* self, QChildEvent* event) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnChildEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_childevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_CustomEvent(TextCustomEditor__TextGoToLineWidget* self, QEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperCustomEvent(TextCustomEditor__TextGoToLineWidget* self, QEvent* event) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnCustomEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_customevent_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_ConnectNotify(TextCustomEditor__TextGoToLineWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperConnectNotify(TextCustomEditor__TextGoToLineWidget* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnConnectNotify(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_connectnotify_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_DisconnectNotify(TextCustomEditor__TextGoToLineWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget) {
        vtextcustomeditortextgotolinewidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperDisconnectNotify(TextCustomEditor__TextGoToLineWidget* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->TextCustomEditor::TextGoToLineWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextGoToLineWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnDisconnectNotify(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self))
        vtextcustomeditortextgotolinewidget->textcustomeditor__textgotolinewidget_disconnectnotify_callback = reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextCustomEditor__TextGoToLineWidget_UpdateMicroFocus(TextCustomEditor__TextGoToLineWidget* self) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->VirtualTextCustomEditorTextGoToLineWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextCustomEditor::TextGoToLineWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__TextGoToLineWidget_Create(TextCustomEditor__TextGoToLineWidget* self) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->VirtualTextCustomEditorTextGoToLineWidget::create();
    } else
        qFatal("Error: Protected method TextCustomEditor::TextGoToLineWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__TextGoToLineWidget_Destroy(TextCustomEditor__TextGoToLineWidget* self) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        vtextcustomeditortextgotolinewidget->VirtualTextCustomEditorTextGoToLineWidget::destroy();
    } else
        qFatal("Error: Protected method TextCustomEditor::TextGoToLineWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__TextGoToLineWidget_FocusNextChild(TextCustomEditor__TextGoToLineWidget* self) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        return vtextcustomeditortextgotolinewidget->VirtualTextCustomEditorTextGoToLineWidget::focusNextChild();
    } else
        qFatal("Error: Protected method TextCustomEditor::TextGoToLineWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__TextGoToLineWidget_FocusPreviousChild(TextCustomEditor__TextGoToLineWidget* self) {
    if (auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self)) {
        return vtextcustomeditortextgotolinewidget->VirtualTextCustomEditorTextGoToLineWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextCustomEditor::TextGoToLineWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextCustomEditor__TextGoToLineWidget_Sender(const TextCustomEditor__TextGoToLineWidget* self) {
    if (auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self))) {
        return vtextcustomeditortextgotolinewidget->VirtualTextCustomEditorTextGoToLineWidget::sender();
    } else
        qFatal("Error: Protected method TextCustomEditor::TextGoToLineWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextCustomEditor__TextGoToLineWidget_SenderSignalIndex(const TextCustomEditor__TextGoToLineWidget* self) {
    if (auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self))) {
        return vtextcustomeditortextgotolinewidget->VirtualTextCustomEditorTextGoToLineWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextCustomEditor::TextGoToLineWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextCustomEditor__TextGoToLineWidget_Receivers(const TextCustomEditor__TextGoToLineWidget* self, const char* signal) {
    if (auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self))) {
        return vtextcustomeditortextgotolinewidget->VirtualTextCustomEditorTextGoToLineWidget::receivers(signal);
    } else
        qFatal("Error: Protected method TextCustomEditor::TextGoToLineWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__TextGoToLineWidget_IsSignalConnected(const TextCustomEditor__TextGoToLineWidget* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self))) {
        return vtextcustomeditortextgotolinewidget->VirtualTextCustomEditorTextGoToLineWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextCustomEditor::TextGoToLineWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextCustomEditor__TextGoToLineWidget_GetDecodedMetricF(const TextCustomEditor__TextGoToLineWidget* self, int metricA, int metricB) {
    if (auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self))) {
        return vtextcustomeditortextgotolinewidget->VirtualTextCustomEditorTextGoToLineWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextCustomEditor::TextGoToLineWidget::getDecodedMetricF called without a directly constructed type");
}

void TextCustomEditor__TextGoToLineWidget_Delete(TextCustomEditor__TextGoToLineWidget* self) {
    delete self;
}
