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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEditTextToSpeech__TextToSpeechContainerWidget
#include <texttospeechcontainerwidget.h>
#include "libtexttospeechcontainerwidget.h"
#include "libtexttospeechcontainerwidget.hxx"

TextEditTextToSpeech__TextToSpeechContainerWidget* TextEditTextToSpeech__TextToSpeechContainerWidget_new(QWidget* parent) {
    return new VirtualTextEditTextToSpeechTextToSpeechContainerWidget(parent);
}

TextEditTextToSpeech__TextToSpeechContainerWidget* TextEditTextToSpeech__TextToSpeechContainerWidget_new2() {
    return new VirtualTextEditTextToSpeechTextToSpeechContainerWidget();
}

QMetaObject* TextEditTextToSpeech__TextToSpeechContainerWidget_MetaObject(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextEditTextToSpeech__TextToSpeechContainerWidget_Metacast(TextEditTextToSpeech__TextToSpeechContainerWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextEditTextToSpeech__TextToSpeechContainerWidget_Metacall(TextEditTextToSpeech__TextToSpeechContainerWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextEditTextToSpeech__TextToSpeechContainerWidget_Tr(const char* s) {
    auto _ret = TextEditTextToSpeech::TextToSpeechContainerWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextEditTextToSpeech__TextToSpeechContainerWidget_Say(TextEditTextToSpeech__TextToSpeechContainerWidget* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->say(text_QString);
}

libqt_string TextEditTextToSpeech__TextToSpeechContainerWidget_Tr2(const char* s, const char* c) {
    auto _ret = TextEditTextToSpeech::TextToSpeechContainerWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextEditTextToSpeech__TextToSpeechContainerWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextEditTextToSpeech::TextToSpeechContainerWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextEditTextToSpeech__TextToSpeechContainerWidget_SuperMetaObject(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    return (QMetaObject*)self->TextEditTextToSpeech::TextToSpeechContainerWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnMetaObject(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_metaobject_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextEditTextToSpeech__TextToSpeechContainerWidget_SuperMetacast(TextEditTextToSpeech__TextToSpeechContainerWidget* self, const char* param1) {
    return self->TextEditTextToSpeech::TextToSpeechContainerWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnMetacast(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_metacast_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechContainerWidget_SuperMetacall(TextEditTextToSpeech__TextToSpeechContainerWidget* self, int param1, int param2, void** param3) {
    return self->TextEditTextToSpeech::TextToSpeechContainerWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnMetacall(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_metacall_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_Metacall_Callback>(slot);
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechContainerWidget_DevType(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    return self->devType();
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechContainerWidget_SuperDevType(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    return self->TextEditTextToSpeech::TextToSpeechContainerWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnDevType(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_devtype_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SetVisible(TextEditTextToSpeech__TextToSpeechContainerWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperSetVisible(TextEditTextToSpeech__TextToSpeechContainerWidget* self, bool visible) {
    self->TextEditTextToSpeech::TextToSpeechContainerWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnSetVisible(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_setvisible_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechContainerWidget_SizeHint(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechContainerWidget_SuperSizeHint(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    return new QSize(self->TextEditTextToSpeech::TextToSpeechContainerWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnSizeHint(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_sizehint_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechContainerWidget_MinimumSizeHint(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechContainerWidget_SuperMinimumSizeHint(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    return new QSize(self->TextEditTextToSpeech::TextToSpeechContainerWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnMinimumSizeHint(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_minimumsizehint_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechContainerWidget_HeightForWidth(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechContainerWidget_SuperHeightForWidth(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, int param1) {
    return self->TextEditTextToSpeech::TextToSpeechContainerWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnHeightForWidth(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_heightforwidth_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechContainerWidget_HasHeightForWidth(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechContainerWidget_SuperHasHeightForWidth(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    return self->TextEditTextToSpeech::TextToSpeechContainerWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnHasHeightForWidth(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_hasheightforwidth_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextEditTextToSpeech__TextToSpeechContainerWidget_PaintEngine(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextEditTextToSpeech__TextToSpeechContainerWidget_SuperPaintEngine(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    return self->TextEditTextToSpeech::TextToSpeechContainerWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnPaintEngine(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_paintengine_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechContainerWidget_Event(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        return vtextedittexttospeechtexttospeechcontainerwidget->event(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechContainerWidget_SuperEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        return vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::event(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_event_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_MousePressEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperMousePressEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QMouseEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnMousePressEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_mousepressevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_MouseReleaseEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperMouseReleaseEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QMouseEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnMouseReleaseEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_mousereleaseevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_MouseDoubleClickEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperMouseDoubleClickEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QMouseEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnMouseDoubleClickEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_MouseMoveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperMouseMoveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QMouseEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnMouseMoveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_mousemoveevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_WheelEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QWheelEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperWheelEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QWheelEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnWheelEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_wheelevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_KeyPressEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QKeyEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperKeyPressEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QKeyEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnKeyPressEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_keypressevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_KeyReleaseEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QKeyEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperKeyReleaseEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QKeyEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnKeyReleaseEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_keyreleaseevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_FocusInEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QFocusEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperFocusInEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QFocusEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnFocusInEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_focusinevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_FocusOutEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QFocusEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperFocusOutEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QFocusEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnFocusOutEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_focusoutevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_EnterEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QEnterEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperEnterEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QEnterEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnEnterEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_enterevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_LeaveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperLeaveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnLeaveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_leaveevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_PaintEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QPaintEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperPaintEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QPaintEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnPaintEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_paintevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_MoveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QMoveEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperMoveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QMoveEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnMoveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_moveevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_ResizeEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QResizeEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperResizeEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QResizeEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnResizeEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_resizeevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_CloseEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QCloseEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperCloseEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QCloseEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnCloseEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_closeevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_ContextMenuEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QContextMenuEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperContextMenuEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QContextMenuEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnContextMenuEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_contextmenuevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_TabletEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QTabletEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperTabletEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QTabletEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnTabletEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_tabletevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_ActionEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QActionEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperActionEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QActionEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnActionEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_actionevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_DragEnterEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QDragEnterEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperDragEnterEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QDragEnterEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnDragEnterEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_dragenterevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_DragMoveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QDragMoveEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperDragMoveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QDragMoveEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnDragMoveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_dragmoveevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_DragLeaveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QDragLeaveEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperDragLeaveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QDragLeaveEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnDragLeaveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_dragleaveevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_DropEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QDropEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperDropEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QDropEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnDropEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_dropevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_ShowEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QShowEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperShowEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QShowEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnShowEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_showevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_HideEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QHideEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperHideEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QHideEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnHideEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_hideevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechContainerWidget_NativeEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        return vtextedittexttospeechtexttospeechcontainerwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechContainerWidget_SuperNativeEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        return vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnNativeEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_nativeevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_ChangeEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QEvent* param1) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperChangeEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QEvent* param1) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnChangeEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_changeevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechContainerWidget_Metric(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, int param1) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        return vtextedittexttospeechtexttospeechcontainerwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechContainerWidget_SuperMetric(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, int param1) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))) {
        return vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnMetric(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_metric_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_InitPainter(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, QPainter* painter) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperInitPainter(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, QPainter* painter) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnInitPainter(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_initpainter_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextEditTextToSpeech__TextToSpeechContainerWidget_Redirected(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, QPoint* offset) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        return vtextedittexttospeechtexttospeechcontainerwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextEditTextToSpeech__TextToSpeechContainerWidget_SuperRedirected(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, QPoint* offset) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))) {
        return vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnRedirected(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_redirected_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextEditTextToSpeech__TextToSpeechContainerWidget_SharedPainter(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        return vtextedittexttospeechtexttospeechcontainerwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextEditTextToSpeech__TextToSpeechContainerWidget_SuperSharedPainter(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))) {
        return vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnSharedPainter(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_sharedpainter_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_InputMethodEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QInputMethodEvent* param1) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperInputMethodEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QInputMethodEvent* param1) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnInputMethodEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_inputmethodevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextEditTextToSpeech__TextToSpeechContainerWidget_InputMethodQuery(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* TextEditTextToSpeech__TextToSpeechContainerWidget_SuperInputMethodQuery(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, int param1) {
    return new QVariant(self->TextEditTextToSpeech::TextToSpeechContainerWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnInputMethodQuery(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_inputmethodquery_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechContainerWidget_FocusNextPrevChild(TextEditTextToSpeech__TextToSpeechContainerWidget* self, bool next) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        return vtextedittexttospeechtexttospeechcontainerwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechContainerWidget_SuperFocusNextPrevChild(TextEditTextToSpeech__TextToSpeechContainerWidget* self, bool next) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        return vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnFocusNextPrevChild(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_focusnextprevchild_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechContainerWidget_EventFilter(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechContainerWidget_SuperEventFilter(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QObject* watched, QEvent* event) {
    return self->TextEditTextToSpeech::TextToSpeechContainerWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnEventFilter(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_eventfilter_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_TimerEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QTimerEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperTimerEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QTimerEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnTimerEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_timerevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_ChildEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QChildEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperChildEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QChildEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnChildEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_childevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_CustomEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperCustomEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnCustomEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_customevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_ConnectNotify(TextEditTextToSpeech__TextToSpeechContainerWidget* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperConnectNotify(TextEditTextToSpeech__TextToSpeechContainerWidget* self, const QMetaMethod* signal) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnConnectNotify(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_connectnotify_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_DisconnectNotify(TextEditTextToSpeech__TextToSpeechContainerWidget* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperDisconnectNotify(TextEditTextToSpeech__TextToSpeechContainerWidget* self, const QMetaMethod* signal) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->TextEditTextToSpeech::TextToSpeechContainerWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechContainerWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnDisconnectNotify(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))
        vtextedittexttospeechtexttospeechcontainerwidget->textedittexttospeech__texttospeechcontainerwidget_disconnectnotify_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_UpdateMicroFocus(TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->VirtualTextEditTextToSpeechTextToSpeechContainerWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechContainerWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_Create(TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->VirtualTextEditTextToSpeechTextToSpeechContainerWidget::create();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechContainerWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_Destroy(TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        vtextedittexttospeechtexttospeechcontainerwidget->VirtualTextEditTextToSpeechTextToSpeechContainerWidget::destroy();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechContainerWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextEditTextToSpeech__TextToSpeechContainerWidget_FocusNextChild(TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        return vtextedittexttospeechtexttospeechcontainerwidget->VirtualTextEditTextToSpeechTextToSpeechContainerWidget::focusNextChild();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechContainerWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextEditTextToSpeech__TextToSpeechContainerWidget_FocusPreviousChild(TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self)) {
        return vtextedittexttospeechtexttospeechcontainerwidget->VirtualTextEditTextToSpeechTextToSpeechContainerWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechContainerWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextEditTextToSpeech__TextToSpeechContainerWidget_Sender(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))) {
        return vtextedittexttospeechtexttospeechcontainerwidget->VirtualTextEditTextToSpeechTextToSpeechContainerWidget::sender();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechContainerWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextEditTextToSpeech__TextToSpeechContainerWidget_SenderSignalIndex(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))) {
        return vtextedittexttospeechtexttospeechcontainerwidget->VirtualTextEditTextToSpeechTextToSpeechContainerWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechContainerWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextEditTextToSpeech__TextToSpeechContainerWidget_Receivers(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, const char* signal) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))) {
        return vtextedittexttospeechtexttospeechcontainerwidget->VirtualTextEditTextToSpeechTextToSpeechContainerWidget::receivers(signal);
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechContainerWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextEditTextToSpeech__TextToSpeechContainerWidget_IsSignalConnected(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, const QMetaMethod* signal) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))) {
        return vtextedittexttospeechtexttospeechcontainerwidget->VirtualTextEditTextToSpeechTextToSpeechContainerWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechContainerWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextEditTextToSpeech__TextToSpeechContainerWidget_GetDecodedMetricF(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, int metricA, int metricB) {
    if (auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self))) {
        return vtextedittexttospeechtexttospeechcontainerwidget->VirtualTextEditTextToSpeechTextToSpeechContainerWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechContainerWidget::getDecodedMetricF called without a directly constructed type");
}

void TextEditTextToSpeech__TextToSpeechContainerWidget_Delete(TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    delete self;
}
