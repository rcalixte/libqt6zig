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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextAutoCorrectionCore__AutoCorrection
#define WORKAROUND_INNER_CLASS_DEFINITION_TextAutoCorrectionWidgets__AutoCorrectionWidget
#include <autocorrectionwidget.h>
#include "libautocorrectionwidget.h"
#include "libautocorrectionwidget.hxx"

TextAutoCorrectionWidgets__AutoCorrectionWidget* TextAutoCorrectionWidgets__AutoCorrectionWidget_new(QWidget* parent) {
    return new VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget(parent);
}

TextAutoCorrectionWidgets__AutoCorrectionWidget* TextAutoCorrectionWidgets__AutoCorrectionWidget_new2() {
    return new VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget();
}

QMetaObject* TextAutoCorrectionWidgets__AutoCorrectionWidget_MetaObject(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextAutoCorrectionWidgets__AutoCorrectionWidget_Metacast(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextAutoCorrectionWidgets__AutoCorrectionWidget_Metacall(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextAutoCorrectionWidgets__AutoCorrectionWidget_Tr(const char* s) {
    auto _ret = TextAutoCorrectionWidgets::AutoCorrectionWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextAutoCorrectionWidgets__AutoCorrectionWidget_SetAutoCorrection(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, TextAutoCorrectionCore__AutoCorrection* autoCorrect) {
    self->setAutoCorrection(autoCorrect);
}

void TextAutoCorrectionWidgets__AutoCorrectionWidget_SetHasHtmlSupport(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, bool b) {
    self->setHasHtmlSupport(b);
}

void TextAutoCorrectionWidgets__AutoCorrectionWidget_LoadConfig(TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    self->loadConfig();
}

void TextAutoCorrectionWidgets__AutoCorrectionWidget_WriteConfig(TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    self->writeConfig();
}

void TextAutoCorrectionWidgets__AutoCorrectionWidget_ResetToDefault(TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    self->resetToDefault();
}

void TextAutoCorrectionWidgets__AutoCorrectionWidget_Changed(TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    self->changed();
}

void TextAutoCorrectionWidgets__AutoCorrectionWidget_Connect_Changed(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    void (*slotFunc)(TextAutoCorrectionWidgets__AutoCorrectionWidget*) = reinterpret_cast<void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*)>(slot);
    TextAutoCorrectionWidgets::AutoCorrectionWidget::connect(self,
                                                             static_cast<void (TextAutoCorrectionWidgets::AutoCorrectionWidget::*)()>(&TextAutoCorrectionWidgets::AutoCorrectionWidget::changed),
                                                             [self, slotFunc]() {
                                                                 slotFunc(self);
                                                             });
}

libqt_string TextAutoCorrectionWidgets__AutoCorrectionWidget_Tr2(const char* s, const char* c) {
    auto _ret = TextAutoCorrectionWidgets::AutoCorrectionWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextAutoCorrectionWidgets__AutoCorrectionWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextAutoCorrectionWidgets::AutoCorrectionWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperMetaObject(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    return (QMetaObject*)self->TextAutoCorrectionWidgets::AutoCorrectionWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnMetaObject(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_metaobject_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperMetacast(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, const char* param1) {
    return self->TextAutoCorrectionWidgets::AutoCorrectionWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnMetacast(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_metacast_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperMetacall(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, int param1, int param2, void** param3) {
    return self->TextAutoCorrectionWidgets::AutoCorrectionWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnMetacall(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_metacall_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_Metacall_Callback>(slot);
}

// Derived class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionWidget_DevType(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    return self->devType();
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperDevType(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    return self->TextAutoCorrectionWidgets::AutoCorrectionWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnDevType(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_devtype_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SetVisible(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperSetVisible(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, bool visible) {
    self->TextAutoCorrectionWidgets::AutoCorrectionWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnSetVisible(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_setvisible_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* TextAutoCorrectionWidgets__AutoCorrectionWidget_SizeHint(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperSizeHint(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    return new QSize(self->TextAutoCorrectionWidgets::AutoCorrectionWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnSizeHint(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_sizehint_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextAutoCorrectionWidgets__AutoCorrectionWidget_MinimumSizeHint(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperMinimumSizeHint(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    return new QSize(self->TextAutoCorrectionWidgets::AutoCorrectionWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnMinimumSizeHint(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_minimumsizehint_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionWidget_HeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperHeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, int param1) {
    return self->TextAutoCorrectionWidgets::AutoCorrectionWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnHeightForWidth(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_heightforwidth_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionWidget_HasHeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperHasHeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    return self->TextAutoCorrectionWidgets::AutoCorrectionWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnHasHeightForWidth(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_hasheightforwidth_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextAutoCorrectionWidgets__AutoCorrectionWidget_PaintEngine(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperPaintEngine(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    return self->TextAutoCorrectionWidgets::AutoCorrectionWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnPaintEngine(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_paintengine_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionWidget_Event(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        return vtextautocorrectionwidgetsautocorrectionwidget->event(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        return vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::event(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_event_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_MousePressEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QMouseEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperMousePressEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QMouseEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnMousePressEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_mousepressevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_MouseReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QMouseEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperMouseReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QMouseEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnMouseReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_mousereleaseevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_MouseDoubleClickEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QMouseEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperMouseDoubleClickEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QMouseEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnMouseDoubleClickEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_MouseMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QMouseEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperMouseMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QMouseEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnMouseMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_mousemoveevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_WheelEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QWheelEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperWheelEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QWheelEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnWheelEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_wheelevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_KeyPressEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QKeyEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperKeyPressEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QKeyEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnKeyPressEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_keypressevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_KeyReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QKeyEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperKeyReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QKeyEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnKeyReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_keyreleaseevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_FocusInEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QFocusEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperFocusInEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QFocusEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnFocusInEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_focusinevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_FocusOutEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QFocusEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperFocusOutEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QFocusEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnFocusOutEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_focusoutevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_EnterEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QEnterEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QEnterEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_enterevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_LeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_leaveevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_PaintEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QPaintEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperPaintEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QPaintEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnPaintEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_paintevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_MoveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QMoveEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QMoveEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_moveevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_ResizeEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QResizeEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperResizeEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QResizeEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnResizeEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_resizeevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_CloseEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QCloseEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperCloseEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QCloseEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnCloseEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_closeevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_ContextMenuEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QContextMenuEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperContextMenuEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QContextMenuEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnContextMenuEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_contextmenuevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_TabletEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QTabletEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperTabletEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QTabletEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnTabletEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_tabletevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_ActionEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QActionEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperActionEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QActionEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnActionEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_actionevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_DragEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QDragEnterEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperDragEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QDragEnterEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnDragEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_dragenterevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_DragMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QDragMoveEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperDragMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QDragMoveEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnDragMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_dragmoveevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_DragLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QDragLeaveEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperDragLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QDragLeaveEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnDragLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_dragleaveevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_DropEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QDropEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperDropEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QDropEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnDropEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_dropevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_ShowEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QShowEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperShowEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QShowEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnShowEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_showevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_HideEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QHideEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperHideEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QHideEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnHideEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_hideevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionWidget_NativeEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        return vtextautocorrectionwidgetsautocorrectionwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperNativeEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        return vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnNativeEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_nativeevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_ChangeEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QEvent* param1) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperChangeEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QEvent* param1) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnChangeEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_changeevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionWidget_Metric(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, int param1) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        return vtextautocorrectionwidgetsautocorrectionwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperMetric(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, int param1) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))) {
        return vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnMetric(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_metric_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_InitPainter(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QPainter* painter) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperInitPainter(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QPainter* painter) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnInitPainter(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_initpainter_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextAutoCorrectionWidgets__AutoCorrectionWidget_Redirected(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QPoint* offset) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        return vtextautocorrectionwidgetsautocorrectionwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperRedirected(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QPoint* offset) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))) {
        return vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnRedirected(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_redirected_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextAutoCorrectionWidgets__AutoCorrectionWidget_SharedPainter(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        return vtextautocorrectionwidgetsautocorrectionwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperSharedPainter(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))) {
        return vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnSharedPainter(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_sharedpainter_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_InputMethodEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QInputMethodEvent* param1) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperInputMethodEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QInputMethodEvent* param1) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnInputMethodEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_inputmethodevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextAutoCorrectionWidgets__AutoCorrectionWidget_InputMethodQuery(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperInputMethodQuery(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, int param1) {
    return new QVariant(self->TextAutoCorrectionWidgets::AutoCorrectionWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnInputMethodQuery(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_inputmethodquery_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionWidget_FocusNextPrevChild(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, bool next) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        return vtextautocorrectionwidgetsautocorrectionwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperFocusNextPrevChild(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, bool next) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        return vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnFocusNextPrevChild(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_focusnextprevchild_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionWidget_EventFilter(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperEventFilter(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QObject* watched, QEvent* event) {
    return self->TextAutoCorrectionWidgets::AutoCorrectionWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnEventFilter(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_eventfilter_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_TimerEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QTimerEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperTimerEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QTimerEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnTimerEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_timerevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_ChildEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QChildEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperChildEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QChildEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnChildEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_childevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_CustomEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperCustomEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnCustomEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_customevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_ConnectNotify(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, const QMetaMethod* signal) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperConnectNotify(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, const QMetaMethod* signal) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnConnectNotify(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_connectnotify_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_DisconnectNotify(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, const QMetaMethod* signal) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperDisconnectNotify(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, const QMetaMethod* signal) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->TextAutoCorrectionWidgets::AutoCorrectionWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnDisconnectNotify(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))
        vtextautocorrectionwidgetsautocorrectionwidget->textautocorrectionwidgets__autocorrectionwidget_disconnectnotify_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_UpdateMicroFocus(TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_Create(TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::create();
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_Destroy(TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        vtextautocorrectionwidgetsautocorrectionwidget->VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::destroy();
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionWidget_FocusNextChild(TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        return vtextautocorrectionwidgetsautocorrectionwidget->VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::focusNextChild();
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionWidget_FocusPreviousChild(TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self)) {
        return vtextautocorrectionwidgetsautocorrectionwidget->VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextAutoCorrectionWidgets__AutoCorrectionWidget_Sender(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))) {
        return vtextautocorrectionwidgetsautocorrectionwidget->VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::sender();
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionWidget_SenderSignalIndex(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))) {
        return vtextautocorrectionwidgetsautocorrectionwidget->VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionWidget_Receivers(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, const char* signal) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))) {
        return vtextautocorrectionwidgetsautocorrectionwidget->VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::receivers(signal);
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionWidget_IsSignalConnected(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, const QMetaMethod* signal) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))) {
        return vtextautocorrectionwidgetsautocorrectionwidget->VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextAutoCorrectionWidgets__AutoCorrectionWidget_GetDecodedMetricF(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, int metricA, int metricB) {
    if (auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self))) {
        return vtextautocorrectionwidgetsautocorrectionwidget->VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionWidget::getDecodedMetricF called without a directly constructed type");
}

void TextAutoCorrectionWidgets__AutoCorrectionWidget_Delete(TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    delete self;
}
