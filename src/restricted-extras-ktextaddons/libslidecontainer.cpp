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
#include <QFrame>
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
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextAddonsWidgets__SlideContainer
#include <slidecontainer.h>
#include "libslidecontainer.h"
#include "libslidecontainer.hxx"

TextAddonsWidgets__SlideContainer* TextAddonsWidgets__SlideContainer_new(QWidget* parent) {
    return new VirtualTextAddonsWidgetsSlideContainer(parent);
}

TextAddonsWidgets__SlideContainer* TextAddonsWidgets__SlideContainer_new2() {
    return new VirtualTextAddonsWidgetsSlideContainer();
}

QMetaObject* TextAddonsWidgets__SlideContainer_MetaObject(const TextAddonsWidgets__SlideContainer* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextAddonsWidgets__SlideContainer_Metacast(TextAddonsWidgets__SlideContainer* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextAddonsWidgets__SlideContainer_Metacall(TextAddonsWidgets__SlideContainer* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextAddonsWidgets__SlideContainer_Tr(const char* s) {
    auto _ret = TextAddonsWidgets::SlideContainer::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QWidget* TextAddonsWidgets__SlideContainer_Content(const TextAddonsWidgets__SlideContainer* self) {
    return self->content();
}

void TextAddonsWidgets__SlideContainer_SetContent(TextAddonsWidgets__SlideContainer* self, QWidget* content) {
    self->setContent(content);
}

QSize* TextAddonsWidgets__SlideContainer_SizeHint(const TextAddonsWidgets__SlideContainer* self) {
    return new QSize(self->sizeHint());
}

QSize* TextAddonsWidgets__SlideContainer_MinimumSizeHint(const TextAddonsWidgets__SlideContainer* self) {
    return new QSize(self->minimumSizeHint());
}

int TextAddonsWidgets__SlideContainer_SlideHeight(const TextAddonsWidgets__SlideContainer* self) {
    return self->slideHeight();
}

void TextAddonsWidgets__SlideContainer_SetSlideHeight(TextAddonsWidgets__SlideContainer* self, int height) {
    self->setSlideHeight(static_cast<int>(height));
}

void TextAddonsWidgets__SlideContainer_SlideIn(TextAddonsWidgets__SlideContainer* self) {
    self->slideIn();
}

void TextAddonsWidgets__SlideContainer_SlideOut(TextAddonsWidgets__SlideContainer* self) {
    self->slideOut();
}

void TextAddonsWidgets__SlideContainer_SlidedIn(TextAddonsWidgets__SlideContainer* self) {
    self->slidedIn();
}

void TextAddonsWidgets__SlideContainer_Connect_SlidedIn(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    void (*slotFunc)(TextAddonsWidgets__SlideContainer*) = reinterpret_cast<void (*)(TextAddonsWidgets__SlideContainer*)>(slot);
    TextAddonsWidgets::SlideContainer::connect(self,
                                               static_cast<void (TextAddonsWidgets::SlideContainer::*)()>(&TextAddonsWidgets::SlideContainer::slidedIn),
                                               [self, slotFunc]() {
                                                   slotFunc(self);
                                               });
}

void TextAddonsWidgets__SlideContainer_SlidedOut(TextAddonsWidgets__SlideContainer* self) {
    self->slidedOut();
}

void TextAddonsWidgets__SlideContainer_Connect_SlidedOut(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    void (*slotFunc)(TextAddonsWidgets__SlideContainer*) = reinterpret_cast<void (*)(TextAddonsWidgets__SlideContainer*)>(slot);
    TextAddonsWidgets::SlideContainer::connect(self,
                                               static_cast<void (TextAddonsWidgets::SlideContainer::*)()>(&TextAddonsWidgets::SlideContainer::slidedOut),
                                               [self, slotFunc]() {
                                                   slotFunc(self);
                                               });
}

void TextAddonsWidgets__SlideContainer_ResizeEvent(TextAddonsWidgets__SlideContainer* self, QResizeEvent* param1) {
    auto* vtextaddonswidgets__slidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgets__slidecontainer) {
        vtextaddonswidgets__slidecontainer->resizeEvent(param1);
    }
}

bool TextAddonsWidgets__SlideContainer_EventFilter(TextAddonsWidgets__SlideContainer* self, QObject* param1, QEvent* event) {
    auto* vtextaddonswidgets__slidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgets__slidecontainer) {
        return vtextaddonswidgets__slidecontainer->eventFilter(param1, event);
    }
    qFatal("Error: Protected method TextAddonsWidgets::SlideContainer::eventFilter called without a directly constructed type");
}

libqt_string TextAddonsWidgets__SlideContainer_Tr2(const char* s, const char* c) {
    auto _ret = TextAddonsWidgets::SlideContainer::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextAddonsWidgets__SlideContainer_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextAddonsWidgets::SlideContainer::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextAddonsWidgets__SlideContainer_SuperMetaObject(const TextAddonsWidgets__SlideContainer* self) {
    return (QMetaObject*)self->TextAddonsWidgets::SlideContainer::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnMetaObject(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self)))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_metaobject_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextAddonsWidgets__SlideContainer_SuperMetacast(TextAddonsWidgets__SlideContainer* self, const char* param1) {
    return self->TextAddonsWidgets::SlideContainer::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnMetacast(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_metacast_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextAddonsWidgets__SlideContainer_SuperMetacall(TextAddonsWidgets__SlideContainer* self, int param1, int param2, void** param3) {
    return self->TextAddonsWidgets::SlideContainer::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnMetacall(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_metacall_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* TextAddonsWidgets__SlideContainer_SuperSizeHint(const TextAddonsWidgets__SlideContainer* self) {
    return new QSize(self->TextAddonsWidgets::SlideContainer::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnSizeHint(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self)))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_sizehint_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* TextAddonsWidgets__SlideContainer_SuperMinimumSizeHint(const TextAddonsWidgets__SlideContainer* self) {
    return new QSize(self->TextAddonsWidgets::SlideContainer::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnMinimumSizeHint(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self)))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_minimumsizehint_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperResizeEvent(TextAddonsWidgets__SlideContainer* self, QResizeEvent* param1) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnResizeEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_resizeevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
bool TextAddonsWidgets__SlideContainer_SuperEventFilter(TextAddonsWidgets__SlideContainer* self, QObject* param1, QEvent* event) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        return vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::eventFilter(param1, event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnEventFilter(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_eventfilter_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_EventFilter_Callback>(slot);
}

// Derived class handler implementation
bool TextAddonsWidgets__SlideContainer_Event(TextAddonsWidgets__SlideContainer* self, QEvent* e) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        return vtextaddonswidgetsslidecontainer->event(e);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextAddonsWidgets__SlideContainer_SuperEvent(TextAddonsWidgets__SlideContainer* self, QEvent* e) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        return vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::event(e);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_event_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_Event_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_PaintEvent(TextAddonsWidgets__SlideContainer* self, QPaintEvent* param1) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->paintEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperPaintEvent(TextAddonsWidgets__SlideContainer* self, QPaintEvent* param1) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnPaintEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_paintevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_ChangeEvent(TextAddonsWidgets__SlideContainer* self, QEvent* param1) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperChangeEvent(TextAddonsWidgets__SlideContainer* self, QEvent* param1) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnChangeEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_changeevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_InitStyleOption(const TextAddonsWidgets__SlideContainer* self, QStyleOptionFrame* option) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperInitStyleOption(const TextAddonsWidgets__SlideContainer* self, QStyleOptionFrame* option) {
    if (auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self))) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnInitStyleOption(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self)))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_initstyleoption_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int TextAddonsWidgets__SlideContainer_DevType(const TextAddonsWidgets__SlideContainer* self) {
    return self->devType();
}

// Base class handler implementation
int TextAddonsWidgets__SlideContainer_SuperDevType(const TextAddonsWidgets__SlideContainer* self) {
    return self->TextAddonsWidgets::SlideContainer::devType();
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnDevType(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self)))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_devtype_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_SetVisible(TextAddonsWidgets__SlideContainer* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperSetVisible(TextAddonsWidgets__SlideContainer* self, bool visible) {
    self->TextAddonsWidgets::SlideContainer::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnSetVisible(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_setvisible_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int TextAddonsWidgets__SlideContainer_HeightForWidth(const TextAddonsWidgets__SlideContainer* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextAddonsWidgets__SlideContainer_SuperHeightForWidth(const TextAddonsWidgets__SlideContainer* self, int param1) {
    return self->TextAddonsWidgets::SlideContainer::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnHeightForWidth(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self)))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_heightforwidth_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextAddonsWidgets__SlideContainer_HasHeightForWidth(const TextAddonsWidgets__SlideContainer* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextAddonsWidgets__SlideContainer_SuperHasHeightForWidth(const TextAddonsWidgets__SlideContainer* self) {
    return self->TextAddonsWidgets::SlideContainer::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnHasHeightForWidth(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self)))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_hasheightforwidth_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextAddonsWidgets__SlideContainer_PaintEngine(const TextAddonsWidgets__SlideContainer* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextAddonsWidgets__SlideContainer_SuperPaintEngine(const TextAddonsWidgets__SlideContainer* self) {
    return self->TextAddonsWidgets::SlideContainer::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnPaintEngine(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self)))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_paintengine_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_MousePressEvent(TextAddonsWidgets__SlideContainer* self, QMouseEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperMousePressEvent(TextAddonsWidgets__SlideContainer* self, QMouseEvent* event) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnMousePressEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_mousepressevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_MouseReleaseEvent(TextAddonsWidgets__SlideContainer* self, QMouseEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperMouseReleaseEvent(TextAddonsWidgets__SlideContainer* self, QMouseEvent* event) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnMouseReleaseEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_mousereleaseevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_MouseDoubleClickEvent(TextAddonsWidgets__SlideContainer* self, QMouseEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperMouseDoubleClickEvent(TextAddonsWidgets__SlideContainer* self, QMouseEvent* event) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnMouseDoubleClickEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_MouseMoveEvent(TextAddonsWidgets__SlideContainer* self, QMouseEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperMouseMoveEvent(TextAddonsWidgets__SlideContainer* self, QMouseEvent* event) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnMouseMoveEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_mousemoveevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_WheelEvent(TextAddonsWidgets__SlideContainer* self, QWheelEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperWheelEvent(TextAddonsWidgets__SlideContainer* self, QWheelEvent* event) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnWheelEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_wheelevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_KeyPressEvent(TextAddonsWidgets__SlideContainer* self, QKeyEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperKeyPressEvent(TextAddonsWidgets__SlideContainer* self, QKeyEvent* event) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnKeyPressEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_keypressevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_KeyReleaseEvent(TextAddonsWidgets__SlideContainer* self, QKeyEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperKeyReleaseEvent(TextAddonsWidgets__SlideContainer* self, QKeyEvent* event) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnKeyReleaseEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_keyreleaseevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_FocusInEvent(TextAddonsWidgets__SlideContainer* self, QFocusEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperFocusInEvent(TextAddonsWidgets__SlideContainer* self, QFocusEvent* event) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnFocusInEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_focusinevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_FocusOutEvent(TextAddonsWidgets__SlideContainer* self, QFocusEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperFocusOutEvent(TextAddonsWidgets__SlideContainer* self, QFocusEvent* event) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnFocusOutEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_focusoutevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_EnterEvent(TextAddonsWidgets__SlideContainer* self, QEnterEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperEnterEvent(TextAddonsWidgets__SlideContainer* self, QEnterEvent* event) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnEnterEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_enterevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_LeaveEvent(TextAddonsWidgets__SlideContainer* self, QEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperLeaveEvent(TextAddonsWidgets__SlideContainer* self, QEvent* event) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnLeaveEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_leaveevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_MoveEvent(TextAddonsWidgets__SlideContainer* self, QMoveEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperMoveEvent(TextAddonsWidgets__SlideContainer* self, QMoveEvent* event) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnMoveEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_moveevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_CloseEvent(TextAddonsWidgets__SlideContainer* self, QCloseEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperCloseEvent(TextAddonsWidgets__SlideContainer* self, QCloseEvent* event) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnCloseEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_closeevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_ContextMenuEvent(TextAddonsWidgets__SlideContainer* self, QContextMenuEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperContextMenuEvent(TextAddonsWidgets__SlideContainer* self, QContextMenuEvent* event) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnContextMenuEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_contextmenuevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_TabletEvent(TextAddonsWidgets__SlideContainer* self, QTabletEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperTabletEvent(TextAddonsWidgets__SlideContainer* self, QTabletEvent* event) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnTabletEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_tabletevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_ActionEvent(TextAddonsWidgets__SlideContainer* self, QActionEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperActionEvent(TextAddonsWidgets__SlideContainer* self, QActionEvent* event) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnActionEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_actionevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_DragEnterEvent(TextAddonsWidgets__SlideContainer* self, QDragEnterEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperDragEnterEvent(TextAddonsWidgets__SlideContainer* self, QDragEnterEvent* event) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnDragEnterEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_dragenterevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_DragMoveEvent(TextAddonsWidgets__SlideContainer* self, QDragMoveEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperDragMoveEvent(TextAddonsWidgets__SlideContainer* self, QDragMoveEvent* event) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnDragMoveEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_dragmoveevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_DragLeaveEvent(TextAddonsWidgets__SlideContainer* self, QDragLeaveEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperDragLeaveEvent(TextAddonsWidgets__SlideContainer* self, QDragLeaveEvent* event) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnDragLeaveEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_dragleaveevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_DropEvent(TextAddonsWidgets__SlideContainer* self, QDropEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperDropEvent(TextAddonsWidgets__SlideContainer* self, QDropEvent* event) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnDropEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_dropevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_ShowEvent(TextAddonsWidgets__SlideContainer* self, QShowEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperShowEvent(TextAddonsWidgets__SlideContainer* self, QShowEvent* event) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::showEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnShowEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_showevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_HideEvent(TextAddonsWidgets__SlideContainer* self, QHideEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperHideEvent(TextAddonsWidgets__SlideContainer* self, QHideEvent* event) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnHideEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_hideevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextAddonsWidgets__SlideContainer_NativeEvent(TextAddonsWidgets__SlideContainer* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        return vtextaddonswidgetsslidecontainer->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextAddonsWidgets__SlideContainer_SuperNativeEvent(TextAddonsWidgets__SlideContainer* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        return vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnNativeEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_nativeevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextAddonsWidgets__SlideContainer_Metric(const TextAddonsWidgets__SlideContainer* self, int param1) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer) {
        return vtextaddonswidgetsslidecontainer->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextAddonsWidgets__SlideContainer_SuperMetric(const TextAddonsWidgets__SlideContainer* self, int param1) {
    if (auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self))) {
        return vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnMetric(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self)))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_metric_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_InitPainter(const TextAddonsWidgets__SlideContainer* self, QPainter* painter) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperInitPainter(const TextAddonsWidgets__SlideContainer* self, QPainter* painter) {
    if (auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self))) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnInitPainter(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self)))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_initpainter_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextAddonsWidgets__SlideContainer_Redirected(const TextAddonsWidgets__SlideContainer* self, QPoint* offset) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer) {
        return vtextaddonswidgetsslidecontainer->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextAddonsWidgets__SlideContainer_SuperRedirected(const TextAddonsWidgets__SlideContainer* self, QPoint* offset) {
    if (auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self))) {
        return vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnRedirected(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self)))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_redirected_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextAddonsWidgets__SlideContainer_SharedPainter(const TextAddonsWidgets__SlideContainer* self) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer) {
        return vtextaddonswidgetsslidecontainer->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextAddonsWidgets__SlideContainer_SuperSharedPainter(const TextAddonsWidgets__SlideContainer* self) {
    if (auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self))) {
        return vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnSharedPainter(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self)))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_sharedpainter_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_InputMethodEvent(TextAddonsWidgets__SlideContainer* self, QInputMethodEvent* param1) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperInputMethodEvent(TextAddonsWidgets__SlideContainer* self, QInputMethodEvent* param1) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnInputMethodEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_inputmethodevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextAddonsWidgets__SlideContainer_InputMethodQuery(const TextAddonsWidgets__SlideContainer* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* TextAddonsWidgets__SlideContainer_SuperInputMethodQuery(const TextAddonsWidgets__SlideContainer* self, int param1) {
    return new QVariant(self->TextAddonsWidgets::SlideContainer::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnInputMethodQuery(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self)))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_inputmethodquery_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool TextAddonsWidgets__SlideContainer_FocusNextPrevChild(TextAddonsWidgets__SlideContainer* self, bool next) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        return vtextaddonswidgetsslidecontainer->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextAddonsWidgets__SlideContainer_SuperFocusNextPrevChild(TextAddonsWidgets__SlideContainer* self, bool next) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        return vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnFocusNextPrevChild(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_focusnextprevchild_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_TimerEvent(TextAddonsWidgets__SlideContainer* self, QTimerEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperTimerEvent(TextAddonsWidgets__SlideContainer* self, QTimerEvent* event) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnTimerEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_timerevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_ChildEvent(TextAddonsWidgets__SlideContainer* self, QChildEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperChildEvent(TextAddonsWidgets__SlideContainer* self, QChildEvent* event) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnChildEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_childevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_CustomEvent(TextAddonsWidgets__SlideContainer* self, QEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperCustomEvent(TextAddonsWidgets__SlideContainer* self, QEvent* event) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnCustomEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_customevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_ConnectNotify(TextAddonsWidgets__SlideContainer* self, const QMetaMethod* signal) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperConnectNotify(TextAddonsWidgets__SlideContainer* self, const QMetaMethod* signal) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnConnectNotify(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_connectnotify_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_DisconnectNotify(TextAddonsWidgets__SlideContainer* self, const QMetaMethod* signal) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer) {
        vtextaddonswidgetsslidecontainer->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperDisconnectNotify(TextAddonsWidgets__SlideContainer* self, const QMetaMethod* signal) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->TextAddonsWidgets::SlideContainer::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SlideContainer::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnDisconnectNotify(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self))
        vtextaddonswidgetsslidecontainer->textaddonswidgets__slidecontainer_disconnectnotify_callback = reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextAddonsWidgets__SlideContainer_DrawFrame(TextAddonsWidgets__SlideContainer* self, QPainter* param1) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->VirtualTextAddonsWidgetsSlideContainer::drawFrame(param1);
    } else
        qFatal("Error: Protected method TextAddonsWidgets::SlideContainer::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void TextAddonsWidgets__SlideContainer_UpdateMicroFocus(TextAddonsWidgets__SlideContainer* self) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->VirtualTextAddonsWidgetsSlideContainer::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextAddonsWidgets::SlideContainer::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextAddonsWidgets__SlideContainer_Create(TextAddonsWidgets__SlideContainer* self) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->VirtualTextAddonsWidgetsSlideContainer::create();
    } else
        qFatal("Error: Protected method TextAddonsWidgets::SlideContainer::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextAddonsWidgets__SlideContainer_Destroy(TextAddonsWidgets__SlideContainer* self) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        vtextaddonswidgetsslidecontainer->VirtualTextAddonsWidgetsSlideContainer::destroy();
    } else
        qFatal("Error: Protected method TextAddonsWidgets::SlideContainer::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextAddonsWidgets__SlideContainer_FocusNextChild(TextAddonsWidgets__SlideContainer* self) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        return vtextaddonswidgetsslidecontainer->VirtualTextAddonsWidgetsSlideContainer::focusNextChild();
    } else
        qFatal("Error: Protected method TextAddonsWidgets::SlideContainer::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextAddonsWidgets__SlideContainer_FocusPreviousChild(TextAddonsWidgets__SlideContainer* self) {
    if (auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self)) {
        return vtextaddonswidgetsslidecontainer->VirtualTextAddonsWidgetsSlideContainer::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextAddonsWidgets::SlideContainer::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextAddonsWidgets__SlideContainer_Sender(const TextAddonsWidgets__SlideContainer* self) {
    if (auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self))) {
        return vtextaddonswidgetsslidecontainer->VirtualTextAddonsWidgetsSlideContainer::sender();
    } else
        qFatal("Error: Protected method TextAddonsWidgets::SlideContainer::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextAddonsWidgets__SlideContainer_SenderSignalIndex(const TextAddonsWidgets__SlideContainer* self) {
    if (auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self))) {
        return vtextaddonswidgetsslidecontainer->VirtualTextAddonsWidgetsSlideContainer::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextAddonsWidgets::SlideContainer::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextAddonsWidgets__SlideContainer_Receivers(const TextAddonsWidgets__SlideContainer* self, const char* signal) {
    if (auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self))) {
        return vtextaddonswidgetsslidecontainer->VirtualTextAddonsWidgetsSlideContainer::receivers(signal);
    } else
        qFatal("Error: Protected method TextAddonsWidgets::SlideContainer::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextAddonsWidgets__SlideContainer_IsSignalConnected(const TextAddonsWidgets__SlideContainer* self, const QMetaMethod* signal) {
    if (auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self))) {
        return vtextaddonswidgetsslidecontainer->VirtualTextAddonsWidgetsSlideContainer::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextAddonsWidgets::SlideContainer::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextAddonsWidgets__SlideContainer_GetDecodedMetricF(const TextAddonsWidgets__SlideContainer* self, int metricA, int metricB) {
    if (auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self))) {
        return vtextaddonswidgetsslidecontainer->VirtualTextAddonsWidgetsSlideContainer::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextAddonsWidgets::SlideContainer::getDecodedMetricF called without a directly constructed type");
}

void TextAddonsWidgets__SlideContainer_Delete(TextAddonsWidgets__SlideContainer* self) {
    delete self;
}
