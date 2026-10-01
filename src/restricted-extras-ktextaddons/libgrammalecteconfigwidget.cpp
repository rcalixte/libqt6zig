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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__GrammalecteConfigWidget
#include <grammalecteconfigwidget.h>
#include "libgrammalecteconfigwidget.h"
#include "libgrammalecteconfigwidget.hxx"

TextGrammarCheck__GrammalecteConfigWidget* TextGrammarCheck__GrammalecteConfigWidget_new(QWidget* parent) {
    return new VirtualTextGrammarCheckGrammalecteConfigWidget(parent);
}

TextGrammarCheck__GrammalecteConfigWidget* TextGrammarCheck__GrammalecteConfigWidget_new2() {
    return new VirtualTextGrammarCheckGrammalecteConfigWidget();
}

TextGrammarCheck__GrammalecteConfigWidget* TextGrammarCheck__GrammalecteConfigWidget_new3(QWidget* parent, bool disableMessageBox) {
    return new VirtualTextGrammarCheckGrammalecteConfigWidget(parent, disableMessageBox);
}

QMetaObject* TextGrammarCheck__GrammalecteConfigWidget_MetaObject(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextGrammarCheck__GrammalecteConfigWidget_Metacast(TextGrammarCheck__GrammalecteConfigWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextGrammarCheck__GrammalecteConfigWidget_Metacall(TextGrammarCheck__GrammalecteConfigWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextGrammarCheck__GrammalecteConfigWidget_Tr(const char* s) {
    auto _ret = TextGrammarCheck::GrammalecteConfigWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextGrammarCheck__GrammalecteConfigWidget_LoadSettings(TextGrammarCheck__GrammalecteConfigWidget* self) {
    self->loadSettings();
}

void TextGrammarCheck__GrammalecteConfigWidget_SaveSettings(TextGrammarCheck__GrammalecteConfigWidget* self) {
    self->saveSettings();
}

libqt_string TextGrammarCheck__GrammalecteConfigWidget_Tr2(const char* s, const char* c) {
    auto _ret = TextGrammarCheck::GrammalecteConfigWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextGrammarCheck__GrammalecteConfigWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextGrammarCheck::GrammalecteConfigWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextGrammarCheck__GrammalecteConfigWidget_SuperMetaObject(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    return (QMetaObject*)self->TextGrammarCheck::GrammalecteConfigWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnMetaObject(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_metaobject_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextGrammarCheck__GrammalecteConfigWidget_SuperMetacast(TextGrammarCheck__GrammalecteConfigWidget* self, const char* param1) {
    return self->TextGrammarCheck::GrammalecteConfigWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnMetacast(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_metacast_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteConfigWidget_SuperMetacall(TextGrammarCheck__GrammalecteConfigWidget* self, int param1, int param2, void** param3) {
    return self->TextGrammarCheck::GrammalecteConfigWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnMetacall(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_metacall_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_Metacall_Callback>(slot);
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteConfigWidget_DevType(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    return self->devType();
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteConfigWidget_SuperDevType(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    return self->TextGrammarCheck::GrammalecteConfigWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnDevType(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_devtype_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SetVisible(TextGrammarCheck__GrammalecteConfigWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperSetVisible(TextGrammarCheck__GrammalecteConfigWidget* self, bool visible) {
    self->TextGrammarCheck::GrammalecteConfigWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnSetVisible(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_setvisible_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* TextGrammarCheck__GrammalecteConfigWidget_SizeHint(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextGrammarCheck__GrammalecteConfigWidget_SuperSizeHint(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    return new QSize(self->TextGrammarCheck::GrammalecteConfigWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnSizeHint(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_sizehint_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextGrammarCheck__GrammalecteConfigWidget_MinimumSizeHint(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextGrammarCheck__GrammalecteConfigWidget_SuperMinimumSizeHint(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    return new QSize(self->TextGrammarCheck::GrammalecteConfigWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnMinimumSizeHint(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_minimumsizehint_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteConfigWidget_HeightForWidth(const TextGrammarCheck__GrammalecteConfigWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteConfigWidget_SuperHeightForWidth(const TextGrammarCheck__GrammalecteConfigWidget* self, int param1) {
    return self->TextGrammarCheck::GrammalecteConfigWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnHeightForWidth(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_heightforwidth_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteConfigWidget_HasHeightForWidth(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteConfigWidget_SuperHasHeightForWidth(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    return self->TextGrammarCheck::GrammalecteConfigWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnHasHeightForWidth(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_hasheightforwidth_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextGrammarCheck__GrammalecteConfigWidget_PaintEngine(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextGrammarCheck__GrammalecteConfigWidget_SuperPaintEngine(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    return self->TextGrammarCheck::GrammalecteConfigWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnPaintEngine(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_paintengine_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteConfigWidget_Event(TextGrammarCheck__GrammalecteConfigWidget* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        return vtextgrammarcheckgrammalecteconfigwidget->event(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteConfigWidget_SuperEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        return vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::event(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_event_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_MousePressEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperMousePressEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QMouseEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnMousePressEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_mousepressevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_MouseReleaseEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperMouseReleaseEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QMouseEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnMouseReleaseEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_mousereleaseevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_MouseDoubleClickEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperMouseDoubleClickEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QMouseEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnMouseDoubleClickEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_MouseMoveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperMouseMoveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QMouseEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnMouseMoveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_mousemoveevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_WheelEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QWheelEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperWheelEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QWheelEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnWheelEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_wheelevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_KeyPressEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QKeyEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperKeyPressEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QKeyEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnKeyPressEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_keypressevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_KeyReleaseEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QKeyEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperKeyReleaseEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QKeyEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnKeyReleaseEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_keyreleaseevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_FocusInEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QFocusEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperFocusInEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QFocusEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnFocusInEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_focusinevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_FocusOutEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QFocusEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperFocusOutEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QFocusEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnFocusOutEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_focusoutevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_EnterEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QEnterEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperEnterEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QEnterEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnEnterEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_enterevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_LeaveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperLeaveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnLeaveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_leaveevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_PaintEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QPaintEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperPaintEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QPaintEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnPaintEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_paintevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_MoveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QMoveEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperMoveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QMoveEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnMoveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_moveevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_ResizeEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QResizeEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperResizeEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QResizeEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnResizeEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_resizeevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_CloseEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QCloseEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperCloseEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QCloseEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnCloseEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_closeevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_ContextMenuEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QContextMenuEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperContextMenuEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QContextMenuEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnContextMenuEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_contextmenuevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_TabletEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QTabletEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperTabletEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QTabletEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnTabletEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_tabletevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_ActionEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QActionEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperActionEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QActionEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnActionEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_actionevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_DragEnterEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QDragEnterEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperDragEnterEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QDragEnterEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnDragEnterEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_dragenterevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_DragMoveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QDragMoveEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperDragMoveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QDragMoveEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnDragMoveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_dragmoveevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_DragLeaveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QDragLeaveEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperDragLeaveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QDragLeaveEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnDragLeaveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_dragleaveevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_DropEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QDropEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperDropEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QDropEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnDropEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_dropevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_ShowEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QShowEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperShowEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QShowEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnShowEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_showevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_HideEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QHideEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperHideEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QHideEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnHideEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_hideevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteConfigWidget_NativeEvent(TextGrammarCheck__GrammalecteConfigWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        return vtextgrammarcheckgrammalecteconfigwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteConfigWidget_SuperNativeEvent(TextGrammarCheck__GrammalecteConfigWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        return vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnNativeEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_nativeevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_ChangeEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QEvent* param1) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperChangeEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QEvent* param1) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnChangeEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_changeevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteConfigWidget_Metric(const TextGrammarCheck__GrammalecteConfigWidget* self, int param1) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        return vtextgrammarcheckgrammalecteconfigwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteConfigWidget_SuperMetric(const TextGrammarCheck__GrammalecteConfigWidget* self, int param1) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))) {
        return vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnMetric(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_metric_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_InitPainter(const TextGrammarCheck__GrammalecteConfigWidget* self, QPainter* painter) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperInitPainter(const TextGrammarCheck__GrammalecteConfigWidget* self, QPainter* painter) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnInitPainter(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_initpainter_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextGrammarCheck__GrammalecteConfigWidget_Redirected(const TextGrammarCheck__GrammalecteConfigWidget* self, QPoint* offset) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        return vtextgrammarcheckgrammalecteconfigwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextGrammarCheck__GrammalecteConfigWidget_SuperRedirected(const TextGrammarCheck__GrammalecteConfigWidget* self, QPoint* offset) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))) {
        return vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnRedirected(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_redirected_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextGrammarCheck__GrammalecteConfigWidget_SharedPainter(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        return vtextgrammarcheckgrammalecteconfigwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextGrammarCheck__GrammalecteConfigWidget_SuperSharedPainter(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))) {
        return vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnSharedPainter(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_sharedpainter_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_InputMethodEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QInputMethodEvent* param1) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperInputMethodEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QInputMethodEvent* param1) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnInputMethodEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_inputmethodevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextGrammarCheck__GrammalecteConfigWidget_InputMethodQuery(const TextGrammarCheck__GrammalecteConfigWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* TextGrammarCheck__GrammalecteConfigWidget_SuperInputMethodQuery(const TextGrammarCheck__GrammalecteConfigWidget* self, int param1) {
    return new QVariant(self->TextGrammarCheck::GrammalecteConfigWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnInputMethodQuery(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_inputmethodquery_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteConfigWidget_FocusNextPrevChild(TextGrammarCheck__GrammalecteConfigWidget* self, bool next) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        return vtextgrammarcheckgrammalecteconfigwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteConfigWidget_SuperFocusNextPrevChild(TextGrammarCheck__GrammalecteConfigWidget* self, bool next) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        return vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnFocusNextPrevChild(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_focusnextprevchild_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteConfigWidget_EventFilter(TextGrammarCheck__GrammalecteConfigWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteConfigWidget_SuperEventFilter(TextGrammarCheck__GrammalecteConfigWidget* self, QObject* watched, QEvent* event) {
    return self->TextGrammarCheck::GrammalecteConfigWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnEventFilter(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_eventfilter_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_TimerEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QTimerEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperTimerEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QTimerEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnTimerEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_timerevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_ChildEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QChildEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperChildEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QChildEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnChildEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_childevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_CustomEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperCustomEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnCustomEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_customevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_ConnectNotify(TextGrammarCheck__GrammalecteConfigWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperConnectNotify(TextGrammarCheck__GrammalecteConfigWidget* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnConnectNotify(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_connectnotify_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_DisconnectNotify(TextGrammarCheck__GrammalecteConfigWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget) {
        vtextgrammarcheckgrammalecteconfigwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperDisconnectNotify(TextGrammarCheck__GrammalecteConfigWidget* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->TextGrammarCheck::GrammalecteConfigWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnDisconnectNotify(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))
        vtextgrammarcheckgrammalecteconfigwidget->textgrammarcheck__grammalecteconfigwidget_disconnectnotify_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_UpdateMicroFocus(TextGrammarCheck__GrammalecteConfigWidget* self) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->VirtualTextGrammarCheckGrammalecteConfigWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteConfigWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_Create(TextGrammarCheck__GrammalecteConfigWidget* self) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->VirtualTextGrammarCheckGrammalecteConfigWidget::create();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteConfigWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_Destroy(TextGrammarCheck__GrammalecteConfigWidget* self) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        vtextgrammarcheckgrammalecteconfigwidget->VirtualTextGrammarCheckGrammalecteConfigWidget::destroy();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteConfigWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__GrammalecteConfigWidget_FocusNextChild(TextGrammarCheck__GrammalecteConfigWidget* self) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        return vtextgrammarcheckgrammalecteconfigwidget->VirtualTextGrammarCheckGrammalecteConfigWidget::focusNextChild();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteConfigWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__GrammalecteConfigWidget_FocusPreviousChild(TextGrammarCheck__GrammalecteConfigWidget* self) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self)) {
        return vtextgrammarcheckgrammalecteconfigwidget->VirtualTextGrammarCheckGrammalecteConfigWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteConfigWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextGrammarCheck__GrammalecteConfigWidget_Sender(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))) {
        return vtextgrammarcheckgrammalecteconfigwidget->VirtualTextGrammarCheckGrammalecteConfigWidget::sender();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteConfigWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextGrammarCheck__GrammalecteConfigWidget_SenderSignalIndex(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))) {
        return vtextgrammarcheckgrammalecteconfigwidget->VirtualTextGrammarCheckGrammalecteConfigWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteConfigWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextGrammarCheck__GrammalecteConfigWidget_Receivers(const TextGrammarCheck__GrammalecteConfigWidget* self, const char* signal) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))) {
        return vtextgrammarcheckgrammalecteconfigwidget->VirtualTextGrammarCheckGrammalecteConfigWidget::receivers(signal);
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteConfigWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__GrammalecteConfigWidget_IsSignalConnected(const TextGrammarCheck__GrammalecteConfigWidget* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))) {
        return vtextgrammarcheckgrammalecteconfigwidget->VirtualTextGrammarCheckGrammalecteConfigWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteConfigWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextGrammarCheck__GrammalecteConfigWidget_GetDecodedMetricF(const TextGrammarCheck__GrammalecteConfigWidget* self, int metricA, int metricB) {
    if (auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self))) {
        return vtextgrammarcheckgrammalecteconfigwidget->VirtualTextGrammarCheckGrammalecteConfigWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteConfigWidget::getDecodedMetricF called without a directly constructed type");
}

void TextGrammarCheck__GrammalecteConfigWidget_Delete(TextGrammarCheck__GrammalecteConfigWidget* self) {
    delete self;
}
