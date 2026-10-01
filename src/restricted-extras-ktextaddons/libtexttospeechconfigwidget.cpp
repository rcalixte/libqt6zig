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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEditTextToSpeech__TextToSpeechConfigWidget
#include <texttospeechconfigwidget.h>
#include "libtexttospeechconfigwidget.h"
#include "libtexttospeechconfigwidget.hxx"

TextEditTextToSpeech__TextToSpeechConfigWidget* TextEditTextToSpeech__TextToSpeechConfigWidget_new(QWidget* parent) {
    return new VirtualTextEditTextToSpeechTextToSpeechConfigWidget(parent);
}

TextEditTextToSpeech__TextToSpeechConfigWidget* TextEditTextToSpeech__TextToSpeechConfigWidget_new2() {
    return new VirtualTextEditTextToSpeechTextToSpeechConfigWidget();
}

QMetaObject* TextEditTextToSpeech__TextToSpeechConfigWidget_MetaObject(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextEditTextToSpeech__TextToSpeechConfigWidget_Metacast(TextEditTextToSpeech__TextToSpeechConfigWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextEditTextToSpeech__TextToSpeechConfigWidget_Metacall(TextEditTextToSpeech__TextToSpeechConfigWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextEditTextToSpeech__TextToSpeechConfigWidget_Tr(const char* s) {
    auto _ret = TextEditTextToSpeech::TextToSpeechConfigWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextEditTextToSpeech__TextToSpeechConfigWidget_InitializeSettings(TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    self->initializeSettings();
}

void TextEditTextToSpeech__TextToSpeechConfigWidget_WriteConfig(TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    self->writeConfig();
}

void TextEditTextToSpeech__TextToSpeechConfigWidget_ReadConfig(TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    self->readConfig();
}

void TextEditTextToSpeech__TextToSpeechConfigWidget_RestoreDefaults(TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    self->restoreDefaults();
}

void TextEditTextToSpeech__TextToSpeechConfigWidget_ConfigChanged(TextEditTextToSpeech__TextToSpeechConfigWidget* self, bool state) {
    self->configChanged(state);
}

void TextEditTextToSpeech__TextToSpeechConfigWidget_Connect_ConfigChanged(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    void (*slotFunc)(TextEditTextToSpeech__TextToSpeechConfigWidget*, bool) = reinterpret_cast<void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, bool)>(slot);
    TextEditTextToSpeech::TextToSpeechConfigWidget::connect(self,
                                                            static_cast<void (TextEditTextToSpeech::TextToSpeechConfigWidget::*)(bool)>(&TextEditTextToSpeech::TextToSpeechConfigWidget::configChanged),
                                                            [self, slotFunc](bool state) {
                                                                bool sigval1 = state;
                                                                slotFunc(self, sigval1);
                                                            });
}

libqt_string TextEditTextToSpeech__TextToSpeechConfigWidget_Tr2(const char* s, const char* c) {
    auto _ret = TextEditTextToSpeech::TextToSpeechConfigWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextEditTextToSpeech__TextToSpeechConfigWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextEditTextToSpeech::TextToSpeechConfigWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMetaObject(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    return (QMetaObject*)self->TextEditTextToSpeech::TextToSpeechConfigWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnMetaObject(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_metaobject_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMetacast(TextEditTextToSpeech__TextToSpeechConfigWidget* self, const char* param1) {
    return self->TextEditTextToSpeech::TextToSpeechConfigWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnMetacast(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_metacast_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMetacall(TextEditTextToSpeech__TextToSpeechConfigWidget* self, int param1, int param2, void** param3) {
    return self->TextEditTextToSpeech::TextToSpeechConfigWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnMetacall(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_metacall_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_Metacall_Callback>(slot);
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigWidget_DevType(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    return self->devType();
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigWidget_SuperDevType(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    return self->TextEditTextToSpeech::TextToSpeechConfigWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnDevType(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_devtype_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SetVisible(TextEditTextToSpeech__TextToSpeechConfigWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperSetVisible(TextEditTextToSpeech__TextToSpeechConfigWidget* self, bool visible) {
    self->TextEditTextToSpeech::TextToSpeechConfigWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnSetVisible(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_setvisible_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechConfigWidget_SizeHint(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechConfigWidget_SuperSizeHint(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    return new QSize(self->TextEditTextToSpeech::TextToSpeechConfigWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnSizeHint(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_sizehint_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechConfigWidget_MinimumSizeHint(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMinimumSizeHint(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    return new QSize(self->TextEditTextToSpeech::TextToSpeechConfigWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnMinimumSizeHint(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_minimumsizehint_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigWidget_HeightForWidth(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigWidget_SuperHeightForWidth(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, int param1) {
    return self->TextEditTextToSpeech::TextToSpeechConfigWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnHeightForWidth(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_heightforwidth_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigWidget_HasHeightForWidth(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigWidget_SuperHasHeightForWidth(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    return self->TextEditTextToSpeech::TextToSpeechConfigWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnHasHeightForWidth(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_hasheightforwidth_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextEditTextToSpeech__TextToSpeechConfigWidget_PaintEngine(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextEditTextToSpeech__TextToSpeechConfigWidget_SuperPaintEngine(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    return self->TextEditTextToSpeech::TextToSpeechConfigWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnPaintEngine(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_paintengine_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigWidget_Event(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        return vtextedittexttospeechtexttospeechconfigwidget->event(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigWidget_SuperEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        return vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::event(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_event_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_MousePressEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMousePressEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QMouseEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnMousePressEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_mousepressevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_MouseReleaseEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMouseReleaseEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QMouseEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnMouseReleaseEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_mousereleaseevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_MouseDoubleClickEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMouseDoubleClickEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QMouseEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnMouseDoubleClickEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_MouseMoveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMouseMoveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QMouseEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnMouseMoveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_mousemoveevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_WheelEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QWheelEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperWheelEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QWheelEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnWheelEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_wheelevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_KeyPressEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QKeyEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperKeyPressEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QKeyEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnKeyPressEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_keypressevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_KeyReleaseEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QKeyEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperKeyReleaseEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QKeyEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnKeyReleaseEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_keyreleaseevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_FocusInEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QFocusEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperFocusInEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QFocusEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnFocusInEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_focusinevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_FocusOutEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QFocusEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperFocusOutEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QFocusEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnFocusOutEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_focusoutevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_EnterEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QEnterEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperEnterEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QEnterEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnEnterEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_enterevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_LeaveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperLeaveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnLeaveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_leaveevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_PaintEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QPaintEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperPaintEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QPaintEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnPaintEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_paintevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_MoveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QMoveEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMoveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QMoveEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnMoveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_moveevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_ResizeEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QResizeEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperResizeEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QResizeEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnResizeEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_resizeevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_CloseEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QCloseEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperCloseEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QCloseEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnCloseEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_closeevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_ContextMenuEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QContextMenuEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperContextMenuEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QContextMenuEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnContextMenuEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_contextmenuevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_TabletEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QTabletEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperTabletEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QTabletEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnTabletEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_tabletevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_ActionEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QActionEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperActionEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QActionEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnActionEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_actionevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_DragEnterEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QDragEnterEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperDragEnterEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QDragEnterEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnDragEnterEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_dragenterevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_DragMoveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QDragMoveEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperDragMoveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QDragMoveEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnDragMoveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_dragmoveevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_DragLeaveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QDragLeaveEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperDragLeaveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QDragLeaveEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnDragLeaveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_dragleaveevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_DropEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QDropEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperDropEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QDropEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnDropEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_dropevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_ShowEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QShowEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperShowEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QShowEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnShowEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_showevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_HideEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QHideEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperHideEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QHideEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnHideEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_hideevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigWidget_NativeEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        return vtextedittexttospeechtexttospeechconfigwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigWidget_SuperNativeEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        return vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnNativeEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_nativeevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_ChangeEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QEvent* param1) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperChangeEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QEvent* param1) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnChangeEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_changeevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigWidget_Metric(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, int param1) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        return vtextedittexttospeechtexttospeechconfigwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMetric(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, int param1) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))) {
        return vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnMetric(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_metric_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_InitPainter(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, QPainter* painter) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperInitPainter(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, QPainter* painter) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnInitPainter(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_initpainter_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextEditTextToSpeech__TextToSpeechConfigWidget_Redirected(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, QPoint* offset) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        return vtextedittexttospeechtexttospeechconfigwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextEditTextToSpeech__TextToSpeechConfigWidget_SuperRedirected(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, QPoint* offset) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))) {
        return vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnRedirected(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_redirected_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextEditTextToSpeech__TextToSpeechConfigWidget_SharedPainter(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        return vtextedittexttospeechtexttospeechconfigwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextEditTextToSpeech__TextToSpeechConfigWidget_SuperSharedPainter(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))) {
        return vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnSharedPainter(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_sharedpainter_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_InputMethodEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QInputMethodEvent* param1) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperInputMethodEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QInputMethodEvent* param1) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnInputMethodEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_inputmethodevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextEditTextToSpeech__TextToSpeechConfigWidget_InputMethodQuery(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* TextEditTextToSpeech__TextToSpeechConfigWidget_SuperInputMethodQuery(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, int param1) {
    return new QVariant(self->TextEditTextToSpeech::TextToSpeechConfigWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnInputMethodQuery(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_inputmethodquery_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigWidget_FocusNextPrevChild(TextEditTextToSpeech__TextToSpeechConfigWidget* self, bool next) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        return vtextedittexttospeechtexttospeechconfigwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigWidget_SuperFocusNextPrevChild(TextEditTextToSpeech__TextToSpeechConfigWidget* self, bool next) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        return vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnFocusNextPrevChild(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_focusnextprevchild_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigWidget_EventFilter(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigWidget_SuperEventFilter(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QObject* watched, QEvent* event) {
    return self->TextEditTextToSpeech::TextToSpeechConfigWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnEventFilter(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_eventfilter_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_TimerEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QTimerEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperTimerEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QTimerEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnTimerEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_timerevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_ChildEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QChildEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperChildEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QChildEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnChildEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_childevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_CustomEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperCustomEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnCustomEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_customevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_ConnectNotify(TextEditTextToSpeech__TextToSpeechConfigWidget* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperConnectNotify(TextEditTextToSpeech__TextToSpeechConfigWidget* self, const QMetaMethod* signal) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnConnectNotify(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_connectnotify_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_DisconnectNotify(TextEditTextToSpeech__TextToSpeechConfigWidget* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget) {
        vtextedittexttospeechtexttospeechconfigwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperDisconnectNotify(TextEditTextToSpeech__TextToSpeechConfigWidget* self, const QMetaMethod* signal) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->TextEditTextToSpeech::TextToSpeechConfigWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnDisconnectNotify(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))
        vtextedittexttospeechtexttospeechconfigwidget->textedittexttospeech__texttospeechconfigwidget_disconnectnotify_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_UpdateMicroFocus(TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->VirtualTextEditTextToSpeechTextToSpeechConfigWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechConfigWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_Create(TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->VirtualTextEditTextToSpeechTextToSpeechConfigWidget::create();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechConfigWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_Destroy(TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        vtextedittexttospeechtexttospeechconfigwidget->VirtualTextEditTextToSpeechTextToSpeechConfigWidget::destroy();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechConfigWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigWidget_FocusNextChild(TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        return vtextedittexttospeechtexttospeechconfigwidget->VirtualTextEditTextToSpeechTextToSpeechConfigWidget::focusNextChild();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechConfigWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigWidget_FocusPreviousChild(TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self)) {
        return vtextedittexttospeechtexttospeechconfigwidget->VirtualTextEditTextToSpeechTextToSpeechConfigWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechConfigWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextEditTextToSpeech__TextToSpeechConfigWidget_Sender(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))) {
        return vtextedittexttospeechtexttospeechconfigwidget->VirtualTextEditTextToSpeechTextToSpeechConfigWidget::sender();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechConfigWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextEditTextToSpeech__TextToSpeechConfigWidget_SenderSignalIndex(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))) {
        return vtextedittexttospeechtexttospeechconfigwidget->VirtualTextEditTextToSpeechTextToSpeechConfigWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechConfigWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextEditTextToSpeech__TextToSpeechConfigWidget_Receivers(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, const char* signal) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))) {
        return vtextedittexttospeechtexttospeechconfigwidget->VirtualTextEditTextToSpeechTextToSpeechConfigWidget::receivers(signal);
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechConfigWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigWidget_IsSignalConnected(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, const QMetaMethod* signal) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))) {
        return vtextedittexttospeechtexttospeechconfigwidget->VirtualTextEditTextToSpeechTextToSpeechConfigWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechConfigWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextEditTextToSpeech__TextToSpeechConfigWidget_GetDecodedMetricF(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, int metricA, int metricB) {
    if (auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self))) {
        return vtextedittexttospeechtexttospeechconfigwidget->VirtualTextEditTextToSpeechTextToSpeechConfigWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechConfigWidget::getDecodedMetricF called without a directly constructed type");
}

void TextEditTextToSpeech__TextToSpeechConfigWidget_Delete(TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    delete self;
}
