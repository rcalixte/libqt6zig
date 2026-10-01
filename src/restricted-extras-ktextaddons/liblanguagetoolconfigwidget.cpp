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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__LanguageToolConfigWidget
#include <languagetoolconfigwidget.h>
#include "liblanguagetoolconfigwidget.h"
#include "liblanguagetoolconfigwidget.hxx"

TextGrammarCheck__LanguageToolConfigWidget* TextGrammarCheck__LanguageToolConfigWidget_new(QWidget* parent) {
    return new VirtualTextGrammarCheckLanguageToolConfigWidget(parent);
}

TextGrammarCheck__LanguageToolConfigWidget* TextGrammarCheck__LanguageToolConfigWidget_new2() {
    return new VirtualTextGrammarCheckLanguageToolConfigWidget();
}

QMetaObject* TextGrammarCheck__LanguageToolConfigWidget_MetaObject(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextGrammarCheck__LanguageToolConfigWidget_Metacast(TextGrammarCheck__LanguageToolConfigWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextGrammarCheck__LanguageToolConfigWidget_Metacall(TextGrammarCheck__LanguageToolConfigWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextGrammarCheck__LanguageToolConfigWidget_Tr(const char* s) {
    auto _ret = TextGrammarCheck::LanguageToolConfigWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextGrammarCheck__LanguageToolConfigWidget_LoadSettings(TextGrammarCheck__LanguageToolConfigWidget* self) {
    self->loadSettings();
}

void TextGrammarCheck__LanguageToolConfigWidget_SaveSettings(TextGrammarCheck__LanguageToolConfigWidget* self) {
    self->saveSettings();
}

void TextGrammarCheck__LanguageToolConfigWidget_ResetValue(TextGrammarCheck__LanguageToolConfigWidget* self) {
    self->resetValue();
}

void TextGrammarCheck__LanguageToolConfigWidget_Connect_ResetValue(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    void (*slotFunc)(TextGrammarCheck__LanguageToolConfigWidget*) = reinterpret_cast<void (*)(TextGrammarCheck__LanguageToolConfigWidget*)>(slot);
    TextGrammarCheck::LanguageToolConfigWidget::connect(self,
                                                        static_cast<void (TextGrammarCheck::LanguageToolConfigWidget::*)()>(&TextGrammarCheck::LanguageToolConfigWidget::resetValue),
                                                        [self, slotFunc]() {
                                                            slotFunc(self);
                                                        });
}

libqt_string TextGrammarCheck__LanguageToolConfigWidget_Tr2(const char* s, const char* c) {
    auto _ret = TextGrammarCheck::LanguageToolConfigWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextGrammarCheck__LanguageToolConfigWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextGrammarCheck::LanguageToolConfigWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextGrammarCheck__LanguageToolConfigWidget_SuperMetaObject(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    return (QMetaObject*)self->TextGrammarCheck::LanguageToolConfigWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnMetaObject(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_metaobject_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextGrammarCheck__LanguageToolConfigWidget_SuperMetacast(TextGrammarCheck__LanguageToolConfigWidget* self, const char* param1) {
    return self->TextGrammarCheck::LanguageToolConfigWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnMetacast(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_metacast_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolConfigWidget_SuperMetacall(TextGrammarCheck__LanguageToolConfigWidget* self, int param1, int param2, void** param3) {
    return self->TextGrammarCheck::LanguageToolConfigWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnMetacall(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_metacall_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_Metacall_Callback>(slot);
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolConfigWidget_DevType(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    return self->devType();
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolConfigWidget_SuperDevType(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    return self->TextGrammarCheck::LanguageToolConfigWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnDevType(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_devtype_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SetVisible(TextGrammarCheck__LanguageToolConfigWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperSetVisible(TextGrammarCheck__LanguageToolConfigWidget* self, bool visible) {
    self->TextGrammarCheck::LanguageToolConfigWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnSetVisible(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_setvisible_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* TextGrammarCheck__LanguageToolConfigWidget_SizeHint(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextGrammarCheck__LanguageToolConfigWidget_SuperSizeHint(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    return new QSize(self->TextGrammarCheck::LanguageToolConfigWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnSizeHint(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_sizehint_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextGrammarCheck__LanguageToolConfigWidget_MinimumSizeHint(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextGrammarCheck__LanguageToolConfigWidget_SuperMinimumSizeHint(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    return new QSize(self->TextGrammarCheck::LanguageToolConfigWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnMinimumSizeHint(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_minimumsizehint_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolConfigWidget_HeightForWidth(const TextGrammarCheck__LanguageToolConfigWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolConfigWidget_SuperHeightForWidth(const TextGrammarCheck__LanguageToolConfigWidget* self, int param1) {
    return self->TextGrammarCheck::LanguageToolConfigWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnHeightForWidth(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_heightforwidth_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolConfigWidget_HasHeightForWidth(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolConfigWidget_SuperHasHeightForWidth(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    return self->TextGrammarCheck::LanguageToolConfigWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnHasHeightForWidth(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_hasheightforwidth_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextGrammarCheck__LanguageToolConfigWidget_PaintEngine(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextGrammarCheck__LanguageToolConfigWidget_SuperPaintEngine(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    return self->TextGrammarCheck::LanguageToolConfigWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnPaintEngine(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_paintengine_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolConfigWidget_Event(TextGrammarCheck__LanguageToolConfigWidget* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        return vtextgrammarchecklanguagetoolconfigwidget->event(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolConfigWidget_SuperEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        return vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::event(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_event_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_MousePressEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperMousePressEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QMouseEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnMousePressEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_mousepressevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_MouseReleaseEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperMouseReleaseEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QMouseEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnMouseReleaseEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_mousereleaseevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_MouseDoubleClickEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperMouseDoubleClickEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QMouseEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnMouseDoubleClickEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_MouseMoveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperMouseMoveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QMouseEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnMouseMoveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_mousemoveevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_WheelEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QWheelEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperWheelEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QWheelEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnWheelEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_wheelevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_KeyPressEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QKeyEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperKeyPressEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QKeyEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnKeyPressEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_keypressevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_KeyReleaseEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QKeyEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperKeyReleaseEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QKeyEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnKeyReleaseEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_keyreleaseevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_FocusInEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QFocusEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperFocusInEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QFocusEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnFocusInEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_focusinevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_FocusOutEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QFocusEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperFocusOutEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QFocusEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnFocusOutEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_focusoutevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_EnterEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QEnterEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperEnterEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QEnterEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnEnterEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_enterevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_LeaveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperLeaveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnLeaveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_leaveevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_PaintEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QPaintEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperPaintEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QPaintEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnPaintEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_paintevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_MoveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QMoveEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperMoveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QMoveEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnMoveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_moveevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_ResizeEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QResizeEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperResizeEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QResizeEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnResizeEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_resizeevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_CloseEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QCloseEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperCloseEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QCloseEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnCloseEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_closeevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_ContextMenuEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QContextMenuEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperContextMenuEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QContextMenuEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnContextMenuEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_contextmenuevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_TabletEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QTabletEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperTabletEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QTabletEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnTabletEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_tabletevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_ActionEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QActionEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperActionEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QActionEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnActionEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_actionevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_DragEnterEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QDragEnterEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperDragEnterEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QDragEnterEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnDragEnterEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_dragenterevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_DragMoveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QDragMoveEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperDragMoveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QDragMoveEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnDragMoveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_dragmoveevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_DragLeaveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QDragLeaveEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperDragLeaveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QDragLeaveEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnDragLeaveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_dragleaveevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_DropEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QDropEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperDropEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QDropEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnDropEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_dropevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_ShowEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QShowEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperShowEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QShowEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnShowEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_showevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_HideEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QHideEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperHideEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QHideEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnHideEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_hideevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolConfigWidget_NativeEvent(TextGrammarCheck__LanguageToolConfigWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        return vtextgrammarchecklanguagetoolconfigwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolConfigWidget_SuperNativeEvent(TextGrammarCheck__LanguageToolConfigWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        return vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnNativeEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_nativeevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_ChangeEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QEvent* param1) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperChangeEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QEvent* param1) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnChangeEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_changeevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolConfigWidget_Metric(const TextGrammarCheck__LanguageToolConfigWidget* self, int param1) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        return vtextgrammarchecklanguagetoolconfigwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolConfigWidget_SuperMetric(const TextGrammarCheck__LanguageToolConfigWidget* self, int param1) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))) {
        return vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnMetric(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_metric_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_InitPainter(const TextGrammarCheck__LanguageToolConfigWidget* self, QPainter* painter) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperInitPainter(const TextGrammarCheck__LanguageToolConfigWidget* self, QPainter* painter) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnInitPainter(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_initpainter_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextGrammarCheck__LanguageToolConfigWidget_Redirected(const TextGrammarCheck__LanguageToolConfigWidget* self, QPoint* offset) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        return vtextgrammarchecklanguagetoolconfigwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextGrammarCheck__LanguageToolConfigWidget_SuperRedirected(const TextGrammarCheck__LanguageToolConfigWidget* self, QPoint* offset) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))) {
        return vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnRedirected(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_redirected_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextGrammarCheck__LanguageToolConfigWidget_SharedPainter(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        return vtextgrammarchecklanguagetoolconfigwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextGrammarCheck__LanguageToolConfigWidget_SuperSharedPainter(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))) {
        return vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnSharedPainter(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_sharedpainter_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_InputMethodEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QInputMethodEvent* param1) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperInputMethodEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QInputMethodEvent* param1) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnInputMethodEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_inputmethodevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextGrammarCheck__LanguageToolConfigWidget_InputMethodQuery(const TextGrammarCheck__LanguageToolConfigWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* TextGrammarCheck__LanguageToolConfigWidget_SuperInputMethodQuery(const TextGrammarCheck__LanguageToolConfigWidget* self, int param1) {
    return new QVariant(self->TextGrammarCheck::LanguageToolConfigWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnInputMethodQuery(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_inputmethodquery_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolConfigWidget_FocusNextPrevChild(TextGrammarCheck__LanguageToolConfigWidget* self, bool next) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        return vtextgrammarchecklanguagetoolconfigwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolConfigWidget_SuperFocusNextPrevChild(TextGrammarCheck__LanguageToolConfigWidget* self, bool next) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        return vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnFocusNextPrevChild(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_focusnextprevchild_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolConfigWidget_EventFilter(TextGrammarCheck__LanguageToolConfigWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolConfigWidget_SuperEventFilter(TextGrammarCheck__LanguageToolConfigWidget* self, QObject* watched, QEvent* event) {
    return self->TextGrammarCheck::LanguageToolConfigWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnEventFilter(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_eventfilter_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_TimerEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QTimerEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperTimerEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QTimerEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnTimerEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_timerevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_ChildEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QChildEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperChildEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QChildEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnChildEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_childevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_CustomEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperCustomEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnCustomEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_customevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_ConnectNotify(TextGrammarCheck__LanguageToolConfigWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperConnectNotify(TextGrammarCheck__LanguageToolConfigWidget* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnConnectNotify(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_connectnotify_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_DisconnectNotify(TextGrammarCheck__LanguageToolConfigWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget) {
        vtextgrammarchecklanguagetoolconfigwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperDisconnectNotify(TextGrammarCheck__LanguageToolConfigWidget* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->TextGrammarCheck::LanguageToolConfigWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnDisconnectNotify(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))
        vtextgrammarchecklanguagetoolconfigwidget->textgrammarcheck__languagetoolconfigwidget_disconnectnotify_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_UpdateMicroFocus(TextGrammarCheck__LanguageToolConfigWidget* self) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->VirtualTextGrammarCheckLanguageToolConfigWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolConfigWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_Create(TextGrammarCheck__LanguageToolConfigWidget* self) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->VirtualTextGrammarCheckLanguageToolConfigWidget::create();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolConfigWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_Destroy(TextGrammarCheck__LanguageToolConfigWidget* self) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        vtextgrammarchecklanguagetoolconfigwidget->VirtualTextGrammarCheckLanguageToolConfigWidget::destroy();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolConfigWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__LanguageToolConfigWidget_FocusNextChild(TextGrammarCheck__LanguageToolConfigWidget* self) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        return vtextgrammarchecklanguagetoolconfigwidget->VirtualTextGrammarCheckLanguageToolConfigWidget::focusNextChild();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolConfigWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__LanguageToolConfigWidget_FocusPreviousChild(TextGrammarCheck__LanguageToolConfigWidget* self) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self)) {
        return vtextgrammarchecklanguagetoolconfigwidget->VirtualTextGrammarCheckLanguageToolConfigWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolConfigWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextGrammarCheck__LanguageToolConfigWidget_Sender(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))) {
        return vtextgrammarchecklanguagetoolconfigwidget->VirtualTextGrammarCheckLanguageToolConfigWidget::sender();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolConfigWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextGrammarCheck__LanguageToolConfigWidget_SenderSignalIndex(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))) {
        return vtextgrammarchecklanguagetoolconfigwidget->VirtualTextGrammarCheckLanguageToolConfigWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolConfigWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextGrammarCheck__LanguageToolConfigWidget_Receivers(const TextGrammarCheck__LanguageToolConfigWidget* self, const char* signal) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))) {
        return vtextgrammarchecklanguagetoolconfigwidget->VirtualTextGrammarCheckLanguageToolConfigWidget::receivers(signal);
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolConfigWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__LanguageToolConfigWidget_IsSignalConnected(const TextGrammarCheck__LanguageToolConfigWidget* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))) {
        return vtextgrammarchecklanguagetoolconfigwidget->VirtualTextGrammarCheckLanguageToolConfigWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolConfigWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextGrammarCheck__LanguageToolConfigWidget_GetDecodedMetricF(const TextGrammarCheck__LanguageToolConfigWidget* self, int metricA, int metricB) {
    if (auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self))) {
        return vtextgrammarchecklanguagetoolconfigwidget->VirtualTextGrammarCheckLanguageToolConfigWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolConfigWidget::getDecodedMetricF called without a directly constructed type");
}

void TextGrammarCheck__LanguageToolConfigWidget_Delete(TextGrammarCheck__LanguageToolConfigWidget* self) {
    delete self;
}
