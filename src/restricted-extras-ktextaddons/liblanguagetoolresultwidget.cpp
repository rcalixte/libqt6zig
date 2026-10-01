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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__GrammarResultWidget
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__LanguageToolResultWidget
#include <languagetoolresultwidget.h>
#include "liblanguagetoolresultwidget.h"
#include "liblanguagetoolresultwidget.hxx"

TextGrammarCheck__LanguageToolResultWidget* TextGrammarCheck__LanguageToolResultWidget_new(QWidget* parent) {
    return new VirtualTextGrammarCheckLanguageToolResultWidget(parent);
}

TextGrammarCheck__LanguageToolResultWidget* TextGrammarCheck__LanguageToolResultWidget_new2() {
    return new VirtualTextGrammarCheckLanguageToolResultWidget();
}

QMetaObject* TextGrammarCheck__LanguageToolResultWidget_MetaObject(const TextGrammarCheck__LanguageToolResultWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextGrammarCheck__LanguageToolResultWidget_Metacast(TextGrammarCheck__LanguageToolResultWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextGrammarCheck__LanguageToolResultWidget_Metacall(TextGrammarCheck__LanguageToolResultWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextGrammarCheck__LanguageToolResultWidget_Tr(const char* s) {
    auto _ret = TextGrammarCheck::LanguageToolResultWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextGrammarCheck__LanguageToolResultWidget_CheckGrammar(TextGrammarCheck__LanguageToolResultWidget* self) {
    self->checkGrammar();
}

void TextGrammarCheck__LanguageToolResultWidget_AddExtraWidget(TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarcheck__languagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarcheck__languagetoolresultwidget) {
        vtextgrammarcheck__languagetoolresultwidget->addExtraWidget();
    }
}

libqt_string TextGrammarCheck__LanguageToolResultWidget_Tr2(const char* s, const char* c) {
    auto _ret = TextGrammarCheck::LanguageToolResultWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextGrammarCheck__LanguageToolResultWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextGrammarCheck::LanguageToolResultWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextGrammarCheck__LanguageToolResultWidget_SuperMetaObject(const TextGrammarCheck__LanguageToolResultWidget* self) {
    return (QMetaObject*)self->TextGrammarCheck::LanguageToolResultWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnMetaObject(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self)))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_metaobject_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextGrammarCheck__LanguageToolResultWidget_SuperMetacast(TextGrammarCheck__LanguageToolResultWidget* self, const char* param1) {
    return self->TextGrammarCheck::LanguageToolResultWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnMetacast(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_metacast_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolResultWidget_SuperMetacall(TextGrammarCheck__LanguageToolResultWidget* self, int param1, int param2, void** param3) {
    return self->TextGrammarCheck::LanguageToolResultWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnMetacall(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_metacall_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperCheckGrammar(TextGrammarCheck__LanguageToolResultWidget* self) {
    self->TextGrammarCheck::LanguageToolResultWidget::checkGrammar();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnCheckGrammar(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_checkgrammar_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_CheckGrammar_Callback>(slot);
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperAddExtraWidget(TextGrammarCheck__LanguageToolResultWidget* self) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::addExtraWidget();
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::addExtraWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnAddExtraWidget(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_addextrawidget_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_AddExtraWidget_Callback>(slot);
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolResultWidget_DevType(const TextGrammarCheck__LanguageToolResultWidget* self) {
    return self->devType();
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolResultWidget_SuperDevType(const TextGrammarCheck__LanguageToolResultWidget* self) {
    return self->TextGrammarCheck::LanguageToolResultWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnDevType(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self)))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_devtype_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SetVisible(TextGrammarCheck__LanguageToolResultWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperSetVisible(TextGrammarCheck__LanguageToolResultWidget* self, bool visible) {
    self->TextGrammarCheck::LanguageToolResultWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnSetVisible(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_setvisible_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* TextGrammarCheck__LanguageToolResultWidget_SizeHint(const TextGrammarCheck__LanguageToolResultWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextGrammarCheck__LanguageToolResultWidget_SuperSizeHint(const TextGrammarCheck__LanguageToolResultWidget* self) {
    return new QSize(self->TextGrammarCheck::LanguageToolResultWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnSizeHint(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self)))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_sizehint_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextGrammarCheck__LanguageToolResultWidget_MinimumSizeHint(const TextGrammarCheck__LanguageToolResultWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextGrammarCheck__LanguageToolResultWidget_SuperMinimumSizeHint(const TextGrammarCheck__LanguageToolResultWidget* self) {
    return new QSize(self->TextGrammarCheck::LanguageToolResultWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnMinimumSizeHint(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self)))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_minimumsizehint_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolResultWidget_HeightForWidth(const TextGrammarCheck__LanguageToolResultWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolResultWidget_SuperHeightForWidth(const TextGrammarCheck__LanguageToolResultWidget* self, int param1) {
    return self->TextGrammarCheck::LanguageToolResultWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnHeightForWidth(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self)))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_heightforwidth_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolResultWidget_HasHeightForWidth(const TextGrammarCheck__LanguageToolResultWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolResultWidget_SuperHasHeightForWidth(const TextGrammarCheck__LanguageToolResultWidget* self) {
    return self->TextGrammarCheck::LanguageToolResultWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnHasHeightForWidth(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self)))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_hasheightforwidth_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextGrammarCheck__LanguageToolResultWidget_PaintEngine(const TextGrammarCheck__LanguageToolResultWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextGrammarCheck__LanguageToolResultWidget_SuperPaintEngine(const TextGrammarCheck__LanguageToolResultWidget* self) {
    return self->TextGrammarCheck::LanguageToolResultWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnPaintEngine(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self)))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_paintengine_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolResultWidget_Event(TextGrammarCheck__LanguageToolResultWidget* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        return vtextgrammarchecklanguagetoolresultwidget->event(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolResultWidget_SuperEvent(TextGrammarCheck__LanguageToolResultWidget* self, QEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        return vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::event(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_event_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_MousePressEvent(TextGrammarCheck__LanguageToolResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperMousePressEvent(TextGrammarCheck__LanguageToolResultWidget* self, QMouseEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnMousePressEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_mousepressevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_MouseReleaseEvent(TextGrammarCheck__LanguageToolResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperMouseReleaseEvent(TextGrammarCheck__LanguageToolResultWidget* self, QMouseEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnMouseReleaseEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_mousereleaseevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_MouseDoubleClickEvent(TextGrammarCheck__LanguageToolResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperMouseDoubleClickEvent(TextGrammarCheck__LanguageToolResultWidget* self, QMouseEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnMouseDoubleClickEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_MouseMoveEvent(TextGrammarCheck__LanguageToolResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperMouseMoveEvent(TextGrammarCheck__LanguageToolResultWidget* self, QMouseEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnMouseMoveEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_mousemoveevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_WheelEvent(TextGrammarCheck__LanguageToolResultWidget* self, QWheelEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperWheelEvent(TextGrammarCheck__LanguageToolResultWidget* self, QWheelEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnWheelEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_wheelevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_KeyPressEvent(TextGrammarCheck__LanguageToolResultWidget* self, QKeyEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperKeyPressEvent(TextGrammarCheck__LanguageToolResultWidget* self, QKeyEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnKeyPressEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_keypressevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_KeyReleaseEvent(TextGrammarCheck__LanguageToolResultWidget* self, QKeyEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperKeyReleaseEvent(TextGrammarCheck__LanguageToolResultWidget* self, QKeyEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnKeyReleaseEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_keyreleaseevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_FocusInEvent(TextGrammarCheck__LanguageToolResultWidget* self, QFocusEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperFocusInEvent(TextGrammarCheck__LanguageToolResultWidget* self, QFocusEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnFocusInEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_focusinevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_FocusOutEvent(TextGrammarCheck__LanguageToolResultWidget* self, QFocusEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperFocusOutEvent(TextGrammarCheck__LanguageToolResultWidget* self, QFocusEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnFocusOutEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_focusoutevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_EnterEvent(TextGrammarCheck__LanguageToolResultWidget* self, QEnterEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperEnterEvent(TextGrammarCheck__LanguageToolResultWidget* self, QEnterEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnEnterEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_enterevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_LeaveEvent(TextGrammarCheck__LanguageToolResultWidget* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperLeaveEvent(TextGrammarCheck__LanguageToolResultWidget* self, QEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnLeaveEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_leaveevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_PaintEvent(TextGrammarCheck__LanguageToolResultWidget* self, QPaintEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperPaintEvent(TextGrammarCheck__LanguageToolResultWidget* self, QPaintEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnPaintEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_paintevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_MoveEvent(TextGrammarCheck__LanguageToolResultWidget* self, QMoveEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperMoveEvent(TextGrammarCheck__LanguageToolResultWidget* self, QMoveEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnMoveEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_moveevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_ResizeEvent(TextGrammarCheck__LanguageToolResultWidget* self, QResizeEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperResizeEvent(TextGrammarCheck__LanguageToolResultWidget* self, QResizeEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnResizeEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_resizeevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_CloseEvent(TextGrammarCheck__LanguageToolResultWidget* self, QCloseEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperCloseEvent(TextGrammarCheck__LanguageToolResultWidget* self, QCloseEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnCloseEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_closeevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_ContextMenuEvent(TextGrammarCheck__LanguageToolResultWidget* self, QContextMenuEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperContextMenuEvent(TextGrammarCheck__LanguageToolResultWidget* self, QContextMenuEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnContextMenuEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_contextmenuevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_TabletEvent(TextGrammarCheck__LanguageToolResultWidget* self, QTabletEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperTabletEvent(TextGrammarCheck__LanguageToolResultWidget* self, QTabletEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnTabletEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_tabletevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_ActionEvent(TextGrammarCheck__LanguageToolResultWidget* self, QActionEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperActionEvent(TextGrammarCheck__LanguageToolResultWidget* self, QActionEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnActionEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_actionevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_DragEnterEvent(TextGrammarCheck__LanguageToolResultWidget* self, QDragEnterEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperDragEnterEvent(TextGrammarCheck__LanguageToolResultWidget* self, QDragEnterEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnDragEnterEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_dragenterevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_DragMoveEvent(TextGrammarCheck__LanguageToolResultWidget* self, QDragMoveEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperDragMoveEvent(TextGrammarCheck__LanguageToolResultWidget* self, QDragMoveEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnDragMoveEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_dragmoveevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_DragLeaveEvent(TextGrammarCheck__LanguageToolResultWidget* self, QDragLeaveEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperDragLeaveEvent(TextGrammarCheck__LanguageToolResultWidget* self, QDragLeaveEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnDragLeaveEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_dragleaveevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_DropEvent(TextGrammarCheck__LanguageToolResultWidget* self, QDropEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperDropEvent(TextGrammarCheck__LanguageToolResultWidget* self, QDropEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnDropEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_dropevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_ShowEvent(TextGrammarCheck__LanguageToolResultWidget* self, QShowEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperShowEvent(TextGrammarCheck__LanguageToolResultWidget* self, QShowEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnShowEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_showevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_HideEvent(TextGrammarCheck__LanguageToolResultWidget* self, QHideEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperHideEvent(TextGrammarCheck__LanguageToolResultWidget* self, QHideEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnHideEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_hideevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolResultWidget_NativeEvent(TextGrammarCheck__LanguageToolResultWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        return vtextgrammarchecklanguagetoolresultwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolResultWidget_SuperNativeEvent(TextGrammarCheck__LanguageToolResultWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        return vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnNativeEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_nativeevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_ChangeEvent(TextGrammarCheck__LanguageToolResultWidget* self, QEvent* param1) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperChangeEvent(TextGrammarCheck__LanguageToolResultWidget* self, QEvent* param1) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnChangeEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_changeevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolResultWidget_Metric(const TextGrammarCheck__LanguageToolResultWidget* self, int param1) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget) {
        return vtextgrammarchecklanguagetoolresultwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolResultWidget_SuperMetric(const TextGrammarCheck__LanguageToolResultWidget* self, int param1) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self))) {
        return vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnMetric(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self)))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_metric_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_InitPainter(const TextGrammarCheck__LanguageToolResultWidget* self, QPainter* painter) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperInitPainter(const TextGrammarCheck__LanguageToolResultWidget* self, QPainter* painter) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self))) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnInitPainter(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self)))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_initpainter_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextGrammarCheck__LanguageToolResultWidget_Redirected(const TextGrammarCheck__LanguageToolResultWidget* self, QPoint* offset) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget) {
        return vtextgrammarchecklanguagetoolresultwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextGrammarCheck__LanguageToolResultWidget_SuperRedirected(const TextGrammarCheck__LanguageToolResultWidget* self, QPoint* offset) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self))) {
        return vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnRedirected(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self)))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_redirected_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextGrammarCheck__LanguageToolResultWidget_SharedPainter(const TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget) {
        return vtextgrammarchecklanguagetoolresultwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextGrammarCheck__LanguageToolResultWidget_SuperSharedPainter(const TextGrammarCheck__LanguageToolResultWidget* self) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self))) {
        return vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnSharedPainter(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self)))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_sharedpainter_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_InputMethodEvent(TextGrammarCheck__LanguageToolResultWidget* self, QInputMethodEvent* param1) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperInputMethodEvent(TextGrammarCheck__LanguageToolResultWidget* self, QInputMethodEvent* param1) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnInputMethodEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_inputmethodevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextGrammarCheck__LanguageToolResultWidget_InputMethodQuery(const TextGrammarCheck__LanguageToolResultWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* TextGrammarCheck__LanguageToolResultWidget_SuperInputMethodQuery(const TextGrammarCheck__LanguageToolResultWidget* self, int param1) {
    return new QVariant(self->TextGrammarCheck::LanguageToolResultWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnInputMethodQuery(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self)))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_inputmethodquery_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolResultWidget_FocusNextPrevChild(TextGrammarCheck__LanguageToolResultWidget* self, bool next) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        return vtextgrammarchecklanguagetoolresultwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolResultWidget_SuperFocusNextPrevChild(TextGrammarCheck__LanguageToolResultWidget* self, bool next) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        return vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnFocusNextPrevChild(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_focusnextprevchild_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolResultWidget_EventFilter(TextGrammarCheck__LanguageToolResultWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolResultWidget_SuperEventFilter(TextGrammarCheck__LanguageToolResultWidget* self, QObject* watched, QEvent* event) {
    return self->TextGrammarCheck::LanguageToolResultWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnEventFilter(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_eventfilter_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_TimerEvent(TextGrammarCheck__LanguageToolResultWidget* self, QTimerEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperTimerEvent(TextGrammarCheck__LanguageToolResultWidget* self, QTimerEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnTimerEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_timerevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_ChildEvent(TextGrammarCheck__LanguageToolResultWidget* self, QChildEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperChildEvent(TextGrammarCheck__LanguageToolResultWidget* self, QChildEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnChildEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_childevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_CustomEvent(TextGrammarCheck__LanguageToolResultWidget* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperCustomEvent(TextGrammarCheck__LanguageToolResultWidget* self, QEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnCustomEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_customevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_ConnectNotify(TextGrammarCheck__LanguageToolResultWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperConnectNotify(TextGrammarCheck__LanguageToolResultWidget* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnConnectNotify(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_connectnotify_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_DisconnectNotify(TextGrammarCheck__LanguageToolResultWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget) {
        vtextgrammarchecklanguagetoolresultwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperDisconnectNotify(TextGrammarCheck__LanguageToolResultWidget* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->TextGrammarCheck::LanguageToolResultWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolResultWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnDisconnectNotify(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self))
        vtextgrammarchecklanguagetoolresultwidget->textgrammarcheck__languagetoolresultwidget_disconnectnotify_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextGrammarCheck__LanguageToolResultWidget_UpdateMicroFocus(TextGrammarCheck__LanguageToolResultWidget* self) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->VirtualTextGrammarCheckLanguageToolResultWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolResultWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextGrammarCheck__LanguageToolResultWidget_Create(TextGrammarCheck__LanguageToolResultWidget* self) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->VirtualTextGrammarCheckLanguageToolResultWidget::create();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolResultWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextGrammarCheck__LanguageToolResultWidget_Destroy(TextGrammarCheck__LanguageToolResultWidget* self) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        vtextgrammarchecklanguagetoolresultwidget->VirtualTextGrammarCheckLanguageToolResultWidget::destroy();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolResultWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__LanguageToolResultWidget_FocusNextChild(TextGrammarCheck__LanguageToolResultWidget* self) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        return vtextgrammarchecklanguagetoolresultwidget->VirtualTextGrammarCheckLanguageToolResultWidget::focusNextChild();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolResultWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__LanguageToolResultWidget_FocusPreviousChild(TextGrammarCheck__LanguageToolResultWidget* self) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self)) {
        return vtextgrammarchecklanguagetoolresultwidget->VirtualTextGrammarCheckLanguageToolResultWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolResultWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextGrammarCheck__LanguageToolResultWidget_Sender(const TextGrammarCheck__LanguageToolResultWidget* self) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self))) {
        return vtextgrammarchecklanguagetoolresultwidget->VirtualTextGrammarCheckLanguageToolResultWidget::sender();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolResultWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextGrammarCheck__LanguageToolResultWidget_SenderSignalIndex(const TextGrammarCheck__LanguageToolResultWidget* self) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self))) {
        return vtextgrammarchecklanguagetoolresultwidget->VirtualTextGrammarCheckLanguageToolResultWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolResultWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextGrammarCheck__LanguageToolResultWidget_Receivers(const TextGrammarCheck__LanguageToolResultWidget* self, const char* signal) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self))) {
        return vtextgrammarchecklanguagetoolresultwidget->VirtualTextGrammarCheckLanguageToolResultWidget::receivers(signal);
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolResultWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__LanguageToolResultWidget_IsSignalConnected(const TextGrammarCheck__LanguageToolResultWidget* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self))) {
        return vtextgrammarchecklanguagetoolresultwidget->VirtualTextGrammarCheckLanguageToolResultWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolResultWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextGrammarCheck__LanguageToolResultWidget_GetDecodedMetricF(const TextGrammarCheck__LanguageToolResultWidget* self, int metricA, int metricB) {
    if (auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self))) {
        return vtextgrammarchecklanguagetoolresultwidget->VirtualTextGrammarCheckLanguageToolResultWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolResultWidget::getDecodedMetricF called without a directly constructed type");
}

void TextGrammarCheck__LanguageToolResultWidget_Delete(TextGrammarCheck__LanguageToolResultWidget* self) {
    delete self;
}
