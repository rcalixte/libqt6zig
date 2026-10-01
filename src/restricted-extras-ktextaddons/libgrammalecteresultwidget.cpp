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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__GrammalecteResultWidget
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__GrammarResultWidget
#include <grammalecteresultwidget.h>
#include "libgrammalecteresultwidget.h"
#include "libgrammalecteresultwidget.hxx"

TextGrammarCheck__GrammalecteResultWidget* TextGrammarCheck__GrammalecteResultWidget_new(QWidget* parent) {
    return new VirtualTextGrammarCheckGrammalecteResultWidget(parent);
}

TextGrammarCheck__GrammalecteResultWidget* TextGrammarCheck__GrammalecteResultWidget_new2() {
    return new VirtualTextGrammarCheckGrammalecteResultWidget();
}

QMetaObject* TextGrammarCheck__GrammalecteResultWidget_MetaObject(const TextGrammarCheck__GrammalecteResultWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextGrammarCheck__GrammalecteResultWidget_Metacast(TextGrammarCheck__GrammalecteResultWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextGrammarCheck__GrammalecteResultWidget_Metacall(TextGrammarCheck__GrammalecteResultWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextGrammarCheck__GrammalecteResultWidget_Tr(const char* s) {
    auto _ret = TextGrammarCheck::GrammalecteResultWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextGrammarCheck__GrammalecteResultWidget_CheckGrammar(TextGrammarCheck__GrammalecteResultWidget* self) {
    self->checkGrammar();
}

libqt_string TextGrammarCheck__GrammalecteResultWidget_Tr2(const char* s, const char* c) {
    auto _ret = TextGrammarCheck::GrammalecteResultWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextGrammarCheck__GrammalecteResultWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextGrammarCheck::GrammalecteResultWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextGrammarCheck__GrammalecteResultWidget_SuperMetaObject(const TextGrammarCheck__GrammalecteResultWidget* self) {
    return (QMetaObject*)self->TextGrammarCheck::GrammalecteResultWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnMetaObject(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self)))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_metaobject_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextGrammarCheck__GrammalecteResultWidget_SuperMetacast(TextGrammarCheck__GrammalecteResultWidget* self, const char* param1) {
    return self->TextGrammarCheck::GrammalecteResultWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnMetacast(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_metacast_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteResultWidget_SuperMetacall(TextGrammarCheck__GrammalecteResultWidget* self, int param1, int param2, void** param3) {
    return self->TextGrammarCheck::GrammalecteResultWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnMetacall(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_metacall_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperCheckGrammar(TextGrammarCheck__GrammalecteResultWidget* self) {
    self->TextGrammarCheck::GrammalecteResultWidget::checkGrammar();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnCheckGrammar(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_checkgrammar_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_CheckGrammar_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_AddExtraWidget(TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->addExtraWidget();
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::addExtraWidget called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperAddExtraWidget(TextGrammarCheck__GrammalecteResultWidget* self) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::addExtraWidget();
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::addExtraWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnAddExtraWidget(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_addextrawidget_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_AddExtraWidget_Callback>(slot);
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteResultWidget_DevType(const TextGrammarCheck__GrammalecteResultWidget* self) {
    return self->devType();
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteResultWidget_SuperDevType(const TextGrammarCheck__GrammalecteResultWidget* self) {
    return self->TextGrammarCheck::GrammalecteResultWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnDevType(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self)))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_devtype_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SetVisible(TextGrammarCheck__GrammalecteResultWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperSetVisible(TextGrammarCheck__GrammalecteResultWidget* self, bool visible) {
    self->TextGrammarCheck::GrammalecteResultWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnSetVisible(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_setvisible_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* TextGrammarCheck__GrammalecteResultWidget_SizeHint(const TextGrammarCheck__GrammalecteResultWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextGrammarCheck__GrammalecteResultWidget_SuperSizeHint(const TextGrammarCheck__GrammalecteResultWidget* self) {
    return new QSize(self->TextGrammarCheck::GrammalecteResultWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnSizeHint(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self)))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_sizehint_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextGrammarCheck__GrammalecteResultWidget_MinimumSizeHint(const TextGrammarCheck__GrammalecteResultWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextGrammarCheck__GrammalecteResultWidget_SuperMinimumSizeHint(const TextGrammarCheck__GrammalecteResultWidget* self) {
    return new QSize(self->TextGrammarCheck::GrammalecteResultWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnMinimumSizeHint(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self)))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_minimumsizehint_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteResultWidget_HeightForWidth(const TextGrammarCheck__GrammalecteResultWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteResultWidget_SuperHeightForWidth(const TextGrammarCheck__GrammalecteResultWidget* self, int param1) {
    return self->TextGrammarCheck::GrammalecteResultWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnHeightForWidth(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self)))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_heightforwidth_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteResultWidget_HasHeightForWidth(const TextGrammarCheck__GrammalecteResultWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteResultWidget_SuperHasHeightForWidth(const TextGrammarCheck__GrammalecteResultWidget* self) {
    return self->TextGrammarCheck::GrammalecteResultWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnHasHeightForWidth(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self)))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_hasheightforwidth_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextGrammarCheck__GrammalecteResultWidget_PaintEngine(const TextGrammarCheck__GrammalecteResultWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextGrammarCheck__GrammalecteResultWidget_SuperPaintEngine(const TextGrammarCheck__GrammalecteResultWidget* self) {
    return self->TextGrammarCheck::GrammalecteResultWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnPaintEngine(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self)))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_paintengine_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteResultWidget_Event(TextGrammarCheck__GrammalecteResultWidget* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        return vtextgrammarcheckgrammalecteresultwidget->event(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteResultWidget_SuperEvent(TextGrammarCheck__GrammalecteResultWidget* self, QEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        return vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::event(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_event_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_MousePressEvent(TextGrammarCheck__GrammalecteResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperMousePressEvent(TextGrammarCheck__GrammalecteResultWidget* self, QMouseEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnMousePressEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_mousepressevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_MouseReleaseEvent(TextGrammarCheck__GrammalecteResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperMouseReleaseEvent(TextGrammarCheck__GrammalecteResultWidget* self, QMouseEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnMouseReleaseEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_mousereleaseevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_MouseDoubleClickEvent(TextGrammarCheck__GrammalecteResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperMouseDoubleClickEvent(TextGrammarCheck__GrammalecteResultWidget* self, QMouseEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnMouseDoubleClickEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_MouseMoveEvent(TextGrammarCheck__GrammalecteResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperMouseMoveEvent(TextGrammarCheck__GrammalecteResultWidget* self, QMouseEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnMouseMoveEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_mousemoveevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_WheelEvent(TextGrammarCheck__GrammalecteResultWidget* self, QWheelEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperWheelEvent(TextGrammarCheck__GrammalecteResultWidget* self, QWheelEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnWheelEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_wheelevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_KeyPressEvent(TextGrammarCheck__GrammalecteResultWidget* self, QKeyEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperKeyPressEvent(TextGrammarCheck__GrammalecteResultWidget* self, QKeyEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnKeyPressEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_keypressevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_KeyReleaseEvent(TextGrammarCheck__GrammalecteResultWidget* self, QKeyEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperKeyReleaseEvent(TextGrammarCheck__GrammalecteResultWidget* self, QKeyEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnKeyReleaseEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_keyreleaseevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_FocusInEvent(TextGrammarCheck__GrammalecteResultWidget* self, QFocusEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperFocusInEvent(TextGrammarCheck__GrammalecteResultWidget* self, QFocusEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnFocusInEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_focusinevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_FocusOutEvent(TextGrammarCheck__GrammalecteResultWidget* self, QFocusEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperFocusOutEvent(TextGrammarCheck__GrammalecteResultWidget* self, QFocusEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnFocusOutEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_focusoutevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_EnterEvent(TextGrammarCheck__GrammalecteResultWidget* self, QEnterEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperEnterEvent(TextGrammarCheck__GrammalecteResultWidget* self, QEnterEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnEnterEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_enterevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_LeaveEvent(TextGrammarCheck__GrammalecteResultWidget* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperLeaveEvent(TextGrammarCheck__GrammalecteResultWidget* self, QEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnLeaveEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_leaveevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_PaintEvent(TextGrammarCheck__GrammalecteResultWidget* self, QPaintEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperPaintEvent(TextGrammarCheck__GrammalecteResultWidget* self, QPaintEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnPaintEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_paintevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_MoveEvent(TextGrammarCheck__GrammalecteResultWidget* self, QMoveEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperMoveEvent(TextGrammarCheck__GrammalecteResultWidget* self, QMoveEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnMoveEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_moveevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_ResizeEvent(TextGrammarCheck__GrammalecteResultWidget* self, QResizeEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperResizeEvent(TextGrammarCheck__GrammalecteResultWidget* self, QResizeEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnResizeEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_resizeevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_CloseEvent(TextGrammarCheck__GrammalecteResultWidget* self, QCloseEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperCloseEvent(TextGrammarCheck__GrammalecteResultWidget* self, QCloseEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnCloseEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_closeevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_ContextMenuEvent(TextGrammarCheck__GrammalecteResultWidget* self, QContextMenuEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperContextMenuEvent(TextGrammarCheck__GrammalecteResultWidget* self, QContextMenuEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnContextMenuEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_contextmenuevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_TabletEvent(TextGrammarCheck__GrammalecteResultWidget* self, QTabletEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperTabletEvent(TextGrammarCheck__GrammalecteResultWidget* self, QTabletEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnTabletEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_tabletevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_ActionEvent(TextGrammarCheck__GrammalecteResultWidget* self, QActionEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperActionEvent(TextGrammarCheck__GrammalecteResultWidget* self, QActionEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnActionEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_actionevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_DragEnterEvent(TextGrammarCheck__GrammalecteResultWidget* self, QDragEnterEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperDragEnterEvent(TextGrammarCheck__GrammalecteResultWidget* self, QDragEnterEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnDragEnterEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_dragenterevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_DragMoveEvent(TextGrammarCheck__GrammalecteResultWidget* self, QDragMoveEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperDragMoveEvent(TextGrammarCheck__GrammalecteResultWidget* self, QDragMoveEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnDragMoveEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_dragmoveevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_DragLeaveEvent(TextGrammarCheck__GrammalecteResultWidget* self, QDragLeaveEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperDragLeaveEvent(TextGrammarCheck__GrammalecteResultWidget* self, QDragLeaveEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnDragLeaveEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_dragleaveevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_DropEvent(TextGrammarCheck__GrammalecteResultWidget* self, QDropEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperDropEvent(TextGrammarCheck__GrammalecteResultWidget* self, QDropEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnDropEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_dropevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_ShowEvent(TextGrammarCheck__GrammalecteResultWidget* self, QShowEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperShowEvent(TextGrammarCheck__GrammalecteResultWidget* self, QShowEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnShowEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_showevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_HideEvent(TextGrammarCheck__GrammalecteResultWidget* self, QHideEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperHideEvent(TextGrammarCheck__GrammalecteResultWidget* self, QHideEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnHideEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_hideevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteResultWidget_NativeEvent(TextGrammarCheck__GrammalecteResultWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        return vtextgrammarcheckgrammalecteresultwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteResultWidget_SuperNativeEvent(TextGrammarCheck__GrammalecteResultWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        return vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnNativeEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_nativeevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_ChangeEvent(TextGrammarCheck__GrammalecteResultWidget* self, QEvent* param1) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperChangeEvent(TextGrammarCheck__GrammalecteResultWidget* self, QEvent* param1) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnChangeEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_changeevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteResultWidget_Metric(const TextGrammarCheck__GrammalecteResultWidget* self, int param1) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget) {
        return vtextgrammarcheckgrammalecteresultwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteResultWidget_SuperMetric(const TextGrammarCheck__GrammalecteResultWidget* self, int param1) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self))) {
        return vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnMetric(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self)))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_metric_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_InitPainter(const TextGrammarCheck__GrammalecteResultWidget* self, QPainter* painter) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperInitPainter(const TextGrammarCheck__GrammalecteResultWidget* self, QPainter* painter) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self))) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnInitPainter(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self)))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_initpainter_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextGrammarCheck__GrammalecteResultWidget_Redirected(const TextGrammarCheck__GrammalecteResultWidget* self, QPoint* offset) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget) {
        return vtextgrammarcheckgrammalecteresultwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextGrammarCheck__GrammalecteResultWidget_SuperRedirected(const TextGrammarCheck__GrammalecteResultWidget* self, QPoint* offset) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self))) {
        return vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnRedirected(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self)))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_redirected_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextGrammarCheck__GrammalecteResultWidget_SharedPainter(const TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget) {
        return vtextgrammarcheckgrammalecteresultwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextGrammarCheck__GrammalecteResultWidget_SuperSharedPainter(const TextGrammarCheck__GrammalecteResultWidget* self) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self))) {
        return vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnSharedPainter(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self)))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_sharedpainter_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_InputMethodEvent(TextGrammarCheck__GrammalecteResultWidget* self, QInputMethodEvent* param1) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperInputMethodEvent(TextGrammarCheck__GrammalecteResultWidget* self, QInputMethodEvent* param1) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnInputMethodEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_inputmethodevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextGrammarCheck__GrammalecteResultWidget_InputMethodQuery(const TextGrammarCheck__GrammalecteResultWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* TextGrammarCheck__GrammalecteResultWidget_SuperInputMethodQuery(const TextGrammarCheck__GrammalecteResultWidget* self, int param1) {
    return new QVariant(self->TextGrammarCheck::GrammalecteResultWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnInputMethodQuery(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self)))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_inputmethodquery_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteResultWidget_FocusNextPrevChild(TextGrammarCheck__GrammalecteResultWidget* self, bool next) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        return vtextgrammarcheckgrammalecteresultwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteResultWidget_SuperFocusNextPrevChild(TextGrammarCheck__GrammalecteResultWidget* self, bool next) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        return vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnFocusNextPrevChild(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_focusnextprevchild_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteResultWidget_EventFilter(TextGrammarCheck__GrammalecteResultWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteResultWidget_SuperEventFilter(TextGrammarCheck__GrammalecteResultWidget* self, QObject* watched, QEvent* event) {
    return self->TextGrammarCheck::GrammalecteResultWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnEventFilter(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_eventfilter_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_TimerEvent(TextGrammarCheck__GrammalecteResultWidget* self, QTimerEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperTimerEvent(TextGrammarCheck__GrammalecteResultWidget* self, QTimerEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnTimerEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_timerevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_ChildEvent(TextGrammarCheck__GrammalecteResultWidget* self, QChildEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperChildEvent(TextGrammarCheck__GrammalecteResultWidget* self, QChildEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnChildEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_childevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_CustomEvent(TextGrammarCheck__GrammalecteResultWidget* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperCustomEvent(TextGrammarCheck__GrammalecteResultWidget* self, QEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnCustomEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_customevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_ConnectNotify(TextGrammarCheck__GrammalecteResultWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperConnectNotify(TextGrammarCheck__GrammalecteResultWidget* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnConnectNotify(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_connectnotify_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_DisconnectNotify(TextGrammarCheck__GrammalecteResultWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget) {
        vtextgrammarcheckgrammalecteresultwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperDisconnectNotify(TextGrammarCheck__GrammalecteResultWidget* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->TextGrammarCheck::GrammalecteResultWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteResultWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnDisconnectNotify(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self))
        vtextgrammarcheckgrammalecteresultwidget->textgrammarcheck__grammalecteresultwidget_disconnectnotify_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextGrammarCheck__GrammalecteResultWidget_UpdateMicroFocus(TextGrammarCheck__GrammalecteResultWidget* self) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->VirtualTextGrammarCheckGrammalecteResultWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteResultWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextGrammarCheck__GrammalecteResultWidget_Create(TextGrammarCheck__GrammalecteResultWidget* self) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->VirtualTextGrammarCheckGrammalecteResultWidget::create();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteResultWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextGrammarCheck__GrammalecteResultWidget_Destroy(TextGrammarCheck__GrammalecteResultWidget* self) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        vtextgrammarcheckgrammalecteresultwidget->VirtualTextGrammarCheckGrammalecteResultWidget::destroy();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteResultWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__GrammalecteResultWidget_FocusNextChild(TextGrammarCheck__GrammalecteResultWidget* self) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        return vtextgrammarcheckgrammalecteresultwidget->VirtualTextGrammarCheckGrammalecteResultWidget::focusNextChild();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteResultWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__GrammalecteResultWidget_FocusPreviousChild(TextGrammarCheck__GrammalecteResultWidget* self) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self)) {
        return vtextgrammarcheckgrammalecteresultwidget->VirtualTextGrammarCheckGrammalecteResultWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteResultWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextGrammarCheck__GrammalecteResultWidget_Sender(const TextGrammarCheck__GrammalecteResultWidget* self) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self))) {
        return vtextgrammarcheckgrammalecteresultwidget->VirtualTextGrammarCheckGrammalecteResultWidget::sender();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteResultWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextGrammarCheck__GrammalecteResultWidget_SenderSignalIndex(const TextGrammarCheck__GrammalecteResultWidget* self) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self))) {
        return vtextgrammarcheckgrammalecteresultwidget->VirtualTextGrammarCheckGrammalecteResultWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteResultWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextGrammarCheck__GrammalecteResultWidget_Receivers(const TextGrammarCheck__GrammalecteResultWidget* self, const char* signal) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self))) {
        return vtextgrammarcheckgrammalecteresultwidget->VirtualTextGrammarCheckGrammalecteResultWidget::receivers(signal);
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteResultWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__GrammalecteResultWidget_IsSignalConnected(const TextGrammarCheck__GrammalecteResultWidget* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self))) {
        return vtextgrammarcheckgrammalecteresultwidget->VirtualTextGrammarCheckGrammalecteResultWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteResultWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextGrammarCheck__GrammalecteResultWidget_GetDecodedMetricF(const TextGrammarCheck__GrammalecteResultWidget* self, int metricA, int metricB) {
    if (auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self))) {
        return vtextgrammarcheckgrammalecteresultwidget->VirtualTextGrammarCheckGrammalecteResultWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteResultWidget::getDecodedMetricF called without a directly constructed type");
}

void TextGrammarCheck__GrammalecteResultWidget_Delete(TextGrammarCheck__GrammalecteResultWidget* self) {
    delete self;
}
