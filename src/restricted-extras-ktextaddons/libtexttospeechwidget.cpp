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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEditTextToSpeech__TextToSpeechInterface
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEditTextToSpeech__TextToSpeechWidget
#include <texttospeechwidget.h>
#include "libtexttospeechwidget.h"
#include "libtexttospeechwidget.hxx"

TextEditTextToSpeech__TextToSpeechWidget* TextEditTextToSpeech__TextToSpeechWidget_new(QWidget* parent) {
    return new VirtualTextEditTextToSpeechTextToSpeechWidget(parent);
}

TextEditTextToSpeech__TextToSpeechWidget* TextEditTextToSpeech__TextToSpeechWidget_new2() {
    return new VirtualTextEditTextToSpeechTextToSpeechWidget();
}

QMetaObject* TextEditTextToSpeech__TextToSpeechWidget_MetaObject(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextEditTextToSpeech__TextToSpeechWidget_Metacast(TextEditTextToSpeech__TextToSpeechWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextEditTextToSpeech__TextToSpeechWidget_Metacall(TextEditTextToSpeech__TextToSpeechWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextEditTextToSpeech__TextToSpeechWidget_Tr(const char* s) {
    auto _ret = TextEditTextToSpeech::TextToSpeechWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int TextEditTextToSpeech__TextToSpeechWidget_State(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    return static_cast<int>(self->state());
}

void TextEditTextToSpeech__TextToSpeechWidget_SetState(TextEditTextToSpeech__TextToSpeechWidget* self, int state) {
    self->setState(static_cast<TextEditTextToSpeech::TextToSpeechWidget::State>(state));
}

void TextEditTextToSpeech__TextToSpeechWidget_SetTextToSpeechInterface(TextEditTextToSpeech__TextToSpeechWidget* self, TextEditTextToSpeech__TextToSpeechInterface* interface) {
    self->setTextToSpeechInterface(interface);
}

bool TextEditTextToSpeech__TextToSpeechWidget_IsReady(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    return self->isReady();
}

void TextEditTextToSpeech__TextToSpeechWidget_ShowWidget(TextEditTextToSpeech__TextToSpeechWidget* self) {
    self->showWidget();
}

void TextEditTextToSpeech__TextToSpeechWidget_Say(TextEditTextToSpeech__TextToSpeechWidget* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->say(text_QString);
}

void TextEditTextToSpeech__TextToSpeechWidget_SlotStateChanged(TextEditTextToSpeech__TextToSpeechWidget* self, int state) {
    self->slotStateChanged(static_cast<TextEditTextToSpeech::TextToSpeech::State>(state));
}

void TextEditTextToSpeech__TextToSpeechWidget_StateChanged(TextEditTextToSpeech__TextToSpeechWidget* self, int state) {
    self->stateChanged(static_cast<TextEditTextToSpeech::TextToSpeechWidget::State>(state));
}

void TextEditTextToSpeech__TextToSpeechWidget_Connect_StateChanged(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    void (*slotFunc)(TextEditTextToSpeech__TextToSpeechWidget*, int) = reinterpret_cast<void (*)(TextEditTextToSpeech__TextToSpeechWidget*, int)>(slot);
    TextEditTextToSpeech::TextToSpeechWidget::connect(self,
                                                      static_cast<void (TextEditTextToSpeech::TextToSpeechWidget::*)(TextEditTextToSpeech::TextToSpeechWidget::State)>(&TextEditTextToSpeech::TextToSpeechWidget::stateChanged),
                                                      [self, slotFunc](TextEditTextToSpeech::TextToSpeechWidget::State state) {
                                                          int sigval1 = static_cast<int>(state);
                                                          slotFunc(self, sigval1);
                                                      });
}

void TextEditTextToSpeech__TextToSpeechWidget_ChangeVisibility(TextEditTextToSpeech__TextToSpeechWidget* self, bool state) {
    self->changeVisibility(state);
}

void TextEditTextToSpeech__TextToSpeechWidget_Connect_ChangeVisibility(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    void (*slotFunc)(TextEditTextToSpeech__TextToSpeechWidget*, bool) = reinterpret_cast<void (*)(TextEditTextToSpeech__TextToSpeechWidget*, bool)>(slot);
    TextEditTextToSpeech::TextToSpeechWidget::connect(self,
                                                      static_cast<void (TextEditTextToSpeech::TextToSpeechWidget::*)(bool)>(&TextEditTextToSpeech::TextToSpeechWidget::changeVisibility),
                                                      [self, slotFunc](bool state) {
                                                          bool sigval1 = state;
                                                          slotFunc(self, sigval1);
                                                      });
}

libqt_string TextEditTextToSpeech__TextToSpeechWidget_Tr2(const char* s, const char* c) {
    auto _ret = TextEditTextToSpeech::TextToSpeechWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextEditTextToSpeech__TextToSpeechWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextEditTextToSpeech::TextToSpeechWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextEditTextToSpeech__TextToSpeechWidget_SuperMetaObject(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    return (QMetaObject*)self->TextEditTextToSpeech::TextToSpeechWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnMetaObject(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_metaobject_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextEditTextToSpeech__TextToSpeechWidget_SuperMetacast(TextEditTextToSpeech__TextToSpeechWidget* self, const char* param1) {
    return self->TextEditTextToSpeech::TextToSpeechWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnMetacast(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_metacast_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechWidget_SuperMetacall(TextEditTextToSpeech__TextToSpeechWidget* self, int param1, int param2, void** param3) {
    return self->TextEditTextToSpeech::TextToSpeechWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnMetacall(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_metacall_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_Metacall_Callback>(slot);
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechWidget_DevType(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    return self->devType();
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechWidget_SuperDevType(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    return self->TextEditTextToSpeech::TextToSpeechWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnDevType(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_devtype_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SetVisible(TextEditTextToSpeech__TextToSpeechWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperSetVisible(TextEditTextToSpeech__TextToSpeechWidget* self, bool visible) {
    self->TextEditTextToSpeech::TextToSpeechWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnSetVisible(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_setvisible_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechWidget_SizeHint(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechWidget_SuperSizeHint(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    return new QSize(self->TextEditTextToSpeech::TextToSpeechWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnSizeHint(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_sizehint_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechWidget_MinimumSizeHint(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechWidget_SuperMinimumSizeHint(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    return new QSize(self->TextEditTextToSpeech::TextToSpeechWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnMinimumSizeHint(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_minimumsizehint_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechWidget_HeightForWidth(const TextEditTextToSpeech__TextToSpeechWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechWidget_SuperHeightForWidth(const TextEditTextToSpeech__TextToSpeechWidget* self, int param1) {
    return self->TextEditTextToSpeech::TextToSpeechWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnHeightForWidth(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_heightforwidth_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechWidget_HasHeightForWidth(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechWidget_SuperHasHeightForWidth(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    return self->TextEditTextToSpeech::TextToSpeechWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnHasHeightForWidth(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_hasheightforwidth_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextEditTextToSpeech__TextToSpeechWidget_PaintEngine(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextEditTextToSpeech__TextToSpeechWidget_SuperPaintEngine(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    return self->TextEditTextToSpeech::TextToSpeechWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnPaintEngine(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_paintengine_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechWidget_Event(TextEditTextToSpeech__TextToSpeechWidget* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        return vtextedittexttospeechtexttospeechwidget->event(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechWidget_SuperEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        return vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::event(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_event_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_MousePressEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperMousePressEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QMouseEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnMousePressEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_mousepressevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_MouseReleaseEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperMouseReleaseEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QMouseEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnMouseReleaseEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_mousereleaseevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_MouseDoubleClickEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperMouseDoubleClickEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QMouseEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnMouseDoubleClickEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_MouseMoveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperMouseMoveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QMouseEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnMouseMoveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_mousemoveevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_WheelEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QWheelEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperWheelEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QWheelEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnWheelEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_wheelevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_KeyPressEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QKeyEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperKeyPressEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QKeyEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnKeyPressEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_keypressevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_KeyReleaseEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QKeyEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperKeyReleaseEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QKeyEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnKeyReleaseEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_keyreleaseevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_FocusInEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QFocusEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperFocusInEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QFocusEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnFocusInEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_focusinevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_FocusOutEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QFocusEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperFocusOutEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QFocusEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnFocusOutEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_focusoutevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_EnterEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QEnterEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperEnterEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QEnterEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnEnterEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_enterevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_LeaveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperLeaveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnLeaveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_leaveevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_PaintEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QPaintEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperPaintEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QPaintEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnPaintEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_paintevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_MoveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QMoveEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperMoveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QMoveEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnMoveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_moveevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_ResizeEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QResizeEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperResizeEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QResizeEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnResizeEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_resizeevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_CloseEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QCloseEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperCloseEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QCloseEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnCloseEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_closeevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_ContextMenuEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QContextMenuEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperContextMenuEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QContextMenuEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnContextMenuEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_contextmenuevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_TabletEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QTabletEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperTabletEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QTabletEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnTabletEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_tabletevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_ActionEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QActionEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperActionEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QActionEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnActionEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_actionevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_DragEnterEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QDragEnterEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperDragEnterEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QDragEnterEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnDragEnterEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_dragenterevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_DragMoveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QDragMoveEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperDragMoveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QDragMoveEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnDragMoveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_dragmoveevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_DragLeaveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QDragLeaveEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperDragLeaveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QDragLeaveEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnDragLeaveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_dragleaveevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_DropEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QDropEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperDropEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QDropEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnDropEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_dropevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_ShowEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QShowEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperShowEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QShowEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnShowEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_showevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_HideEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QHideEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperHideEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QHideEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnHideEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_hideevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechWidget_NativeEvent(TextEditTextToSpeech__TextToSpeechWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        return vtextedittexttospeechtexttospeechwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechWidget_SuperNativeEvent(TextEditTextToSpeech__TextToSpeechWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        return vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnNativeEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_nativeevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_ChangeEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QEvent* param1) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperChangeEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QEvent* param1) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnChangeEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_changeevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechWidget_Metric(const TextEditTextToSpeech__TextToSpeechWidget* self, int param1) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget) {
        return vtextedittexttospeechtexttospeechwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechWidget_SuperMetric(const TextEditTextToSpeech__TextToSpeechWidget* self, int param1) {
    if (auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))) {
        return vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnMetric(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_metric_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_InitPainter(const TextEditTextToSpeech__TextToSpeechWidget* self, QPainter* painter) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperInitPainter(const TextEditTextToSpeech__TextToSpeechWidget* self, QPainter* painter) {
    if (auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnInitPainter(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_initpainter_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextEditTextToSpeech__TextToSpeechWidget_Redirected(const TextEditTextToSpeech__TextToSpeechWidget* self, QPoint* offset) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget) {
        return vtextedittexttospeechtexttospeechwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextEditTextToSpeech__TextToSpeechWidget_SuperRedirected(const TextEditTextToSpeech__TextToSpeechWidget* self, QPoint* offset) {
    if (auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))) {
        return vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnRedirected(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_redirected_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextEditTextToSpeech__TextToSpeechWidget_SharedPainter(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget) {
        return vtextedittexttospeechtexttospeechwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextEditTextToSpeech__TextToSpeechWidget_SuperSharedPainter(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    if (auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))) {
        return vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnSharedPainter(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_sharedpainter_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_InputMethodEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QInputMethodEvent* param1) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperInputMethodEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QInputMethodEvent* param1) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnInputMethodEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_inputmethodevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextEditTextToSpeech__TextToSpeechWidget_InputMethodQuery(const TextEditTextToSpeech__TextToSpeechWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* TextEditTextToSpeech__TextToSpeechWidget_SuperInputMethodQuery(const TextEditTextToSpeech__TextToSpeechWidget* self, int param1) {
    return new QVariant(self->TextEditTextToSpeech::TextToSpeechWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnInputMethodQuery(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_inputmethodquery_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechWidget_FocusNextPrevChild(TextEditTextToSpeech__TextToSpeechWidget* self, bool next) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        return vtextedittexttospeechtexttospeechwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechWidget_SuperFocusNextPrevChild(TextEditTextToSpeech__TextToSpeechWidget* self, bool next) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        return vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnFocusNextPrevChild(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_focusnextprevchild_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechWidget_EventFilter(TextEditTextToSpeech__TextToSpeechWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechWidget_SuperEventFilter(TextEditTextToSpeech__TextToSpeechWidget* self, QObject* watched, QEvent* event) {
    return self->TextEditTextToSpeech::TextToSpeechWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnEventFilter(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_eventfilter_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_TimerEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QTimerEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperTimerEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QTimerEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnTimerEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_timerevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_ChildEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QChildEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperChildEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QChildEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnChildEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_childevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_CustomEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperCustomEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnCustomEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_customevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_ConnectNotify(TextEditTextToSpeech__TextToSpeechWidget* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperConnectNotify(TextEditTextToSpeech__TextToSpeechWidget* self, const QMetaMethod* signal) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnConnectNotify(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_connectnotify_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_DisconnectNotify(TextEditTextToSpeech__TextToSpeechWidget* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget) {
        vtextedittexttospeechtexttospeechwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperDisconnectNotify(TextEditTextToSpeech__TextToSpeechWidget* self, const QMetaMethod* signal) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->TextEditTextToSpeech::TextToSpeechWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnDisconnectNotify(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))
        vtextedittexttospeechtexttospeechwidget->textedittexttospeech__texttospeechwidget_disconnectnotify_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_UpdateMicroFocus(TextEditTextToSpeech__TextToSpeechWidget* self) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->VirtualTextEditTextToSpeechTextToSpeechWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_Create(TextEditTextToSpeech__TextToSpeechWidget* self) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->VirtualTextEditTextToSpeechTextToSpeechWidget::create();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_Destroy(TextEditTextToSpeech__TextToSpeechWidget* self) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        vtextedittexttospeechtexttospeechwidget->VirtualTextEditTextToSpeechTextToSpeechWidget::destroy();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextEditTextToSpeech__TextToSpeechWidget_FocusNextChild(TextEditTextToSpeech__TextToSpeechWidget* self) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        return vtextedittexttospeechtexttospeechwidget->VirtualTextEditTextToSpeechTextToSpeechWidget::focusNextChild();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextEditTextToSpeech__TextToSpeechWidget_FocusPreviousChild(TextEditTextToSpeech__TextToSpeechWidget* self) {
    if (auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self)) {
        return vtextedittexttospeechtexttospeechwidget->VirtualTextEditTextToSpeechTextToSpeechWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextEditTextToSpeech__TextToSpeechWidget_Sender(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    if (auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))) {
        return vtextedittexttospeechtexttospeechwidget->VirtualTextEditTextToSpeechTextToSpeechWidget::sender();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextEditTextToSpeech__TextToSpeechWidget_SenderSignalIndex(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    if (auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))) {
        return vtextedittexttospeechtexttospeechwidget->VirtualTextEditTextToSpeechTextToSpeechWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextEditTextToSpeech__TextToSpeechWidget_Receivers(const TextEditTextToSpeech__TextToSpeechWidget* self, const char* signal) {
    if (auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))) {
        return vtextedittexttospeechtexttospeechwidget->VirtualTextEditTextToSpeechTextToSpeechWidget::receivers(signal);
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextEditTextToSpeech__TextToSpeechWidget_IsSignalConnected(const TextEditTextToSpeech__TextToSpeechWidget* self, const QMetaMethod* signal) {
    if (auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))) {
        return vtextedittexttospeechtexttospeechwidget->VirtualTextEditTextToSpeechTextToSpeechWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextEditTextToSpeech__TextToSpeechWidget_GetDecodedMetricF(const TextEditTextToSpeech__TextToSpeechWidget* self, int metricA, int metricB) {
    if (auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self))) {
        return vtextedittexttospeechtexttospeechwidget->VirtualTextEditTextToSpeechTextToSpeechWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechWidget::getDecodedMetricF called without a directly constructed type");
}

void TextEditTextToSpeech__TextToSpeechWidget_Delete(TextEditTextToSpeech__TextToSpeechWidget* self) {
    delete self;
}
