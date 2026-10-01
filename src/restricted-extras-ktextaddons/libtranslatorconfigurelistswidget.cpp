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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextTranslator__TranslatorConfigureListsWidget
#include <translatorconfigurelistswidget.h>
#include "libtranslatorconfigurelistswidget.h"
#include "libtranslatorconfigurelistswidget.hxx"

TextTranslator__TranslatorConfigureListsWidget* TextTranslator__TranslatorConfigureListsWidget_new(QWidget* parent) {
    return new VirtualTextTranslatorTranslatorConfigureListsWidget(parent);
}

TextTranslator__TranslatorConfigureListsWidget* TextTranslator__TranslatorConfigureListsWidget_new2() {
    return new VirtualTextTranslatorTranslatorConfigureListsWidget();
}

QMetaObject* TextTranslator__TranslatorConfigureListsWidget_MetaObject(const TextTranslator__TranslatorConfigureListsWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextTranslator__TranslatorConfigureListsWidget_Metacast(TextTranslator__TranslatorConfigureListsWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextTranslator__TranslatorConfigureListsWidget_Metacall(TextTranslator__TranslatorConfigureListsWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextTranslator__TranslatorConfigureListsWidget_Tr(const char* s) {
    auto _ret = TextTranslator::TranslatorConfigureListsWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextTranslator__TranslatorConfigureListsWidget_Save(TextTranslator__TranslatorConfigureListsWidget* self) {
    self->save();
}

void TextTranslator__TranslatorConfigureListsWidget_Load(TextTranslator__TranslatorConfigureListsWidget* self) {
    self->load();
}

libqt_string TextTranslator__TranslatorConfigureListsWidget_Tr2(const char* s, const char* c) {
    auto _ret = TextTranslator::TranslatorConfigureListsWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextTranslator__TranslatorConfigureListsWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextTranslator::TranslatorConfigureListsWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextTranslator__TranslatorConfigureListsWidget_SuperMetaObject(const TextTranslator__TranslatorConfigureListsWidget* self) {
    return (QMetaObject*)self->TextTranslator::TranslatorConfigureListsWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnMetaObject(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_metaobject_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextTranslator__TranslatorConfigureListsWidget_SuperMetacast(TextTranslator__TranslatorConfigureListsWidget* self, const char* param1) {
    return self->TextTranslator::TranslatorConfigureListsWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnMetacast(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_metacast_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureListsWidget_SuperMetacall(TextTranslator__TranslatorConfigureListsWidget* self, int param1, int param2, void** param3) {
    return self->TextTranslator::TranslatorConfigureListsWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnMetacall(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_metacall_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_Metacall_Callback>(slot);
}

// Derived class handler implementation
int TextTranslator__TranslatorConfigureListsWidget_DevType(const TextTranslator__TranslatorConfigureListsWidget* self) {
    return self->devType();
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureListsWidget_SuperDevType(const TextTranslator__TranslatorConfigureListsWidget* self) {
    return self->TextTranslator::TranslatorConfigureListsWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnDevType(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_devtype_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SetVisible(TextTranslator__TranslatorConfigureListsWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperSetVisible(TextTranslator__TranslatorConfigureListsWidget* self, bool visible) {
    self->TextTranslator::TranslatorConfigureListsWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnSetVisible(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_setvisible_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* TextTranslator__TranslatorConfigureListsWidget_SizeHint(const TextTranslator__TranslatorConfigureListsWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextTranslator__TranslatorConfigureListsWidget_SuperSizeHint(const TextTranslator__TranslatorConfigureListsWidget* self) {
    return new QSize(self->TextTranslator::TranslatorConfigureListsWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnSizeHint(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_sizehint_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextTranslator__TranslatorConfigureListsWidget_MinimumSizeHint(const TextTranslator__TranslatorConfigureListsWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextTranslator__TranslatorConfigureListsWidget_SuperMinimumSizeHint(const TextTranslator__TranslatorConfigureListsWidget* self) {
    return new QSize(self->TextTranslator::TranslatorConfigureListsWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnMinimumSizeHint(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_minimumsizehint_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int TextTranslator__TranslatorConfigureListsWidget_HeightForWidth(const TextTranslator__TranslatorConfigureListsWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureListsWidget_SuperHeightForWidth(const TextTranslator__TranslatorConfigureListsWidget* self, int param1) {
    return self->TextTranslator::TranslatorConfigureListsWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnHeightForWidth(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_heightforwidth_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureListsWidget_HasHeightForWidth(const TextTranslator__TranslatorConfigureListsWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureListsWidget_SuperHasHeightForWidth(const TextTranslator__TranslatorConfigureListsWidget* self) {
    return self->TextTranslator::TranslatorConfigureListsWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnHasHeightForWidth(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_hasheightforwidth_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextTranslator__TranslatorConfigureListsWidget_PaintEngine(const TextTranslator__TranslatorConfigureListsWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextTranslator__TranslatorConfigureListsWidget_SuperPaintEngine(const TextTranslator__TranslatorConfigureListsWidget* self) {
    return self->TextTranslator::TranslatorConfigureListsWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnPaintEngine(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_paintengine_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureListsWidget_Event(TextTranslator__TranslatorConfigureListsWidget* self, QEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        return vtexttranslatortranslatorconfigurelistswidget->event(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureListsWidget_SuperEvent(TextTranslator__TranslatorConfigureListsWidget* self, QEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        return vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::event(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_event_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_MousePressEvent(TextTranslator__TranslatorConfigureListsWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperMousePressEvent(TextTranslator__TranslatorConfigureListsWidget* self, QMouseEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnMousePressEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_mousepressevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_MouseReleaseEvent(TextTranslator__TranslatorConfigureListsWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperMouseReleaseEvent(TextTranslator__TranslatorConfigureListsWidget* self, QMouseEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnMouseReleaseEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_mousereleaseevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_MouseDoubleClickEvent(TextTranslator__TranslatorConfigureListsWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperMouseDoubleClickEvent(TextTranslator__TranslatorConfigureListsWidget* self, QMouseEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnMouseDoubleClickEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_MouseMoveEvent(TextTranslator__TranslatorConfigureListsWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperMouseMoveEvent(TextTranslator__TranslatorConfigureListsWidget* self, QMouseEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnMouseMoveEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_mousemoveevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_WheelEvent(TextTranslator__TranslatorConfigureListsWidget* self, QWheelEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperWheelEvent(TextTranslator__TranslatorConfigureListsWidget* self, QWheelEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnWheelEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_wheelevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_KeyPressEvent(TextTranslator__TranslatorConfigureListsWidget* self, QKeyEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperKeyPressEvent(TextTranslator__TranslatorConfigureListsWidget* self, QKeyEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnKeyPressEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_keypressevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_KeyReleaseEvent(TextTranslator__TranslatorConfigureListsWidget* self, QKeyEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperKeyReleaseEvent(TextTranslator__TranslatorConfigureListsWidget* self, QKeyEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnKeyReleaseEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_keyreleaseevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_FocusInEvent(TextTranslator__TranslatorConfigureListsWidget* self, QFocusEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperFocusInEvent(TextTranslator__TranslatorConfigureListsWidget* self, QFocusEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnFocusInEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_focusinevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_FocusOutEvent(TextTranslator__TranslatorConfigureListsWidget* self, QFocusEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperFocusOutEvent(TextTranslator__TranslatorConfigureListsWidget* self, QFocusEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnFocusOutEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_focusoutevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_EnterEvent(TextTranslator__TranslatorConfigureListsWidget* self, QEnterEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperEnterEvent(TextTranslator__TranslatorConfigureListsWidget* self, QEnterEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnEnterEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_enterevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_LeaveEvent(TextTranslator__TranslatorConfigureListsWidget* self, QEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperLeaveEvent(TextTranslator__TranslatorConfigureListsWidget* self, QEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnLeaveEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_leaveevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_PaintEvent(TextTranslator__TranslatorConfigureListsWidget* self, QPaintEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperPaintEvent(TextTranslator__TranslatorConfigureListsWidget* self, QPaintEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnPaintEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_paintevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_MoveEvent(TextTranslator__TranslatorConfigureListsWidget* self, QMoveEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperMoveEvent(TextTranslator__TranslatorConfigureListsWidget* self, QMoveEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnMoveEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_moveevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_ResizeEvent(TextTranslator__TranslatorConfigureListsWidget* self, QResizeEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperResizeEvent(TextTranslator__TranslatorConfigureListsWidget* self, QResizeEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnResizeEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_resizeevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_CloseEvent(TextTranslator__TranslatorConfigureListsWidget* self, QCloseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperCloseEvent(TextTranslator__TranslatorConfigureListsWidget* self, QCloseEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnCloseEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_closeevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_ContextMenuEvent(TextTranslator__TranslatorConfigureListsWidget* self, QContextMenuEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperContextMenuEvent(TextTranslator__TranslatorConfigureListsWidget* self, QContextMenuEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnContextMenuEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_contextmenuevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_TabletEvent(TextTranslator__TranslatorConfigureListsWidget* self, QTabletEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperTabletEvent(TextTranslator__TranslatorConfigureListsWidget* self, QTabletEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnTabletEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_tabletevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_ActionEvent(TextTranslator__TranslatorConfigureListsWidget* self, QActionEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperActionEvent(TextTranslator__TranslatorConfigureListsWidget* self, QActionEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnActionEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_actionevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_DragEnterEvent(TextTranslator__TranslatorConfigureListsWidget* self, QDragEnterEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperDragEnterEvent(TextTranslator__TranslatorConfigureListsWidget* self, QDragEnterEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnDragEnterEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_dragenterevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_DragMoveEvent(TextTranslator__TranslatorConfigureListsWidget* self, QDragMoveEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperDragMoveEvent(TextTranslator__TranslatorConfigureListsWidget* self, QDragMoveEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnDragMoveEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_dragmoveevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_DragLeaveEvent(TextTranslator__TranslatorConfigureListsWidget* self, QDragLeaveEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperDragLeaveEvent(TextTranslator__TranslatorConfigureListsWidget* self, QDragLeaveEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnDragLeaveEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_dragleaveevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_DropEvent(TextTranslator__TranslatorConfigureListsWidget* self, QDropEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperDropEvent(TextTranslator__TranslatorConfigureListsWidget* self, QDropEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnDropEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_dropevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_ShowEvent(TextTranslator__TranslatorConfigureListsWidget* self, QShowEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperShowEvent(TextTranslator__TranslatorConfigureListsWidget* self, QShowEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnShowEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_showevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_HideEvent(TextTranslator__TranslatorConfigureListsWidget* self, QHideEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperHideEvent(TextTranslator__TranslatorConfigureListsWidget* self, QHideEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnHideEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_hideevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureListsWidget_NativeEvent(TextTranslator__TranslatorConfigureListsWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        return vtexttranslatortranslatorconfigurelistswidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureListsWidget_SuperNativeEvent(TextTranslator__TranslatorConfigureListsWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        return vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnNativeEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_nativeevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_ChangeEvent(TextTranslator__TranslatorConfigureListsWidget* self, QEvent* param1) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperChangeEvent(TextTranslator__TranslatorConfigureListsWidget* self, QEvent* param1) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnChangeEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_changeevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextTranslator__TranslatorConfigureListsWidget_Metric(const TextTranslator__TranslatorConfigureListsWidget* self, int param1) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget) {
        return vtexttranslatortranslatorconfigurelistswidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureListsWidget_SuperMetric(const TextTranslator__TranslatorConfigureListsWidget* self, int param1) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))) {
        return vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnMetric(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_metric_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_InitPainter(const TextTranslator__TranslatorConfigureListsWidget* self, QPainter* painter) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperInitPainter(const TextTranslator__TranslatorConfigureListsWidget* self, QPainter* painter) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnInitPainter(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_initpainter_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextTranslator__TranslatorConfigureListsWidget_Redirected(const TextTranslator__TranslatorConfigureListsWidget* self, QPoint* offset) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget) {
        return vtexttranslatortranslatorconfigurelistswidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextTranslator__TranslatorConfigureListsWidget_SuperRedirected(const TextTranslator__TranslatorConfigureListsWidget* self, QPoint* offset) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))) {
        return vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnRedirected(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_redirected_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextTranslator__TranslatorConfigureListsWidget_SharedPainter(const TextTranslator__TranslatorConfigureListsWidget* self) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget) {
        return vtexttranslatortranslatorconfigurelistswidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextTranslator__TranslatorConfigureListsWidget_SuperSharedPainter(const TextTranslator__TranslatorConfigureListsWidget* self) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))) {
        return vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnSharedPainter(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_sharedpainter_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_InputMethodEvent(TextTranslator__TranslatorConfigureListsWidget* self, QInputMethodEvent* param1) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperInputMethodEvent(TextTranslator__TranslatorConfigureListsWidget* self, QInputMethodEvent* param1) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnInputMethodEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_inputmethodevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextTranslator__TranslatorConfigureListsWidget_InputMethodQuery(const TextTranslator__TranslatorConfigureListsWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* TextTranslator__TranslatorConfigureListsWidget_SuperInputMethodQuery(const TextTranslator__TranslatorConfigureListsWidget* self, int param1) {
    return new QVariant(self->TextTranslator::TranslatorConfigureListsWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnInputMethodQuery(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_inputmethodquery_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureListsWidget_FocusNextPrevChild(TextTranslator__TranslatorConfigureListsWidget* self, bool next) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        return vtexttranslatortranslatorconfigurelistswidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureListsWidget_SuperFocusNextPrevChild(TextTranslator__TranslatorConfigureListsWidget* self, bool next) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        return vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnFocusNextPrevChild(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_focusnextprevchild_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureListsWidget_EventFilter(TextTranslator__TranslatorConfigureListsWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureListsWidget_SuperEventFilter(TextTranslator__TranslatorConfigureListsWidget* self, QObject* watched, QEvent* event) {
    return self->TextTranslator::TranslatorConfigureListsWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnEventFilter(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_eventfilter_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_TimerEvent(TextTranslator__TranslatorConfigureListsWidget* self, QTimerEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperTimerEvent(TextTranslator__TranslatorConfigureListsWidget* self, QTimerEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnTimerEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_timerevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_ChildEvent(TextTranslator__TranslatorConfigureListsWidget* self, QChildEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperChildEvent(TextTranslator__TranslatorConfigureListsWidget* self, QChildEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnChildEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_childevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_CustomEvent(TextTranslator__TranslatorConfigureListsWidget* self, QEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperCustomEvent(TextTranslator__TranslatorConfigureListsWidget* self, QEvent* event) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnCustomEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_customevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_ConnectNotify(TextTranslator__TranslatorConfigureListsWidget* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperConnectNotify(TextTranslator__TranslatorConfigureListsWidget* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnConnectNotify(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_connectnotify_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_DisconnectNotify(TextTranslator__TranslatorConfigureListsWidget* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget) {
        vtexttranslatortranslatorconfigurelistswidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperDisconnectNotify(TextTranslator__TranslatorConfigureListsWidget* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->TextTranslator::TranslatorConfigureListsWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureListsWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnDisconnectNotify(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))
        vtexttranslatortranslatorconfigurelistswidget->texttranslator__translatorconfigurelistswidget_disconnectnotify_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextTranslator__TranslatorConfigureListsWidget_UpdateMicroFocus(TextTranslator__TranslatorConfigureListsWidget* self) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->VirtualTextTranslatorTranslatorConfigureListsWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureListsWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextTranslator__TranslatorConfigureListsWidget_Create(TextTranslator__TranslatorConfigureListsWidget* self) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->VirtualTextTranslatorTranslatorConfigureListsWidget::create();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureListsWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextTranslator__TranslatorConfigureListsWidget_Destroy(TextTranslator__TranslatorConfigureListsWidget* self) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        vtexttranslatortranslatorconfigurelistswidget->VirtualTextTranslatorTranslatorConfigureListsWidget::destroy();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureListsWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextTranslator__TranslatorConfigureListsWidget_FocusNextChild(TextTranslator__TranslatorConfigureListsWidget* self) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        return vtexttranslatortranslatorconfigurelistswidget->VirtualTextTranslatorTranslatorConfigureListsWidget::focusNextChild();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureListsWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextTranslator__TranslatorConfigureListsWidget_FocusPreviousChild(TextTranslator__TranslatorConfigureListsWidget* self) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self)) {
        return vtexttranslatortranslatorconfigurelistswidget->VirtualTextTranslatorTranslatorConfigureListsWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureListsWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextTranslator__TranslatorConfigureListsWidget_Sender(const TextTranslator__TranslatorConfigureListsWidget* self) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))) {
        return vtexttranslatortranslatorconfigurelistswidget->VirtualTextTranslatorTranslatorConfigureListsWidget::sender();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureListsWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextTranslator__TranslatorConfigureListsWidget_SenderSignalIndex(const TextTranslator__TranslatorConfigureListsWidget* self) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))) {
        return vtexttranslatortranslatorconfigurelistswidget->VirtualTextTranslatorTranslatorConfigureListsWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureListsWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextTranslator__TranslatorConfigureListsWidget_Receivers(const TextTranslator__TranslatorConfigureListsWidget* self, const char* signal) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))) {
        return vtexttranslatortranslatorconfigurelistswidget->VirtualTextTranslatorTranslatorConfigureListsWidget::receivers(signal);
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureListsWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextTranslator__TranslatorConfigureListsWidget_IsSignalConnected(const TextTranslator__TranslatorConfigureListsWidget* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))) {
        return vtexttranslatortranslatorconfigurelistswidget->VirtualTextTranslatorTranslatorConfigureListsWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureListsWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextTranslator__TranslatorConfigureListsWidget_GetDecodedMetricF(const TextTranslator__TranslatorConfigureListsWidget* self, int metricA, int metricB) {
    if (auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self))) {
        return vtexttranslatortranslatorconfigurelistswidget->VirtualTextTranslatorTranslatorConfigureListsWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureListsWidget::getDecodedMetricF called without a directly constructed type");
}

void TextTranslator__TranslatorConfigureListsWidget_Delete(TextTranslator__TranslatorConfigureListsWidget* self) {
    delete self;
}
