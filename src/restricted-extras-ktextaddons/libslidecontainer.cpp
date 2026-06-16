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
    TextAddonsWidgets::SlideContainer::connect(self, &TextAddonsWidgets::SlideContainer::slidedIn, [self, slotFunc]() {
        slotFunc(self);
    });
}

void TextAddonsWidgets__SlideContainer_SlidedOut(TextAddonsWidgets__SlideContainer* self) {
    self->slidedOut();
}

void TextAddonsWidgets__SlideContainer_Connect_SlidedOut(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    void (*slotFunc)(TextAddonsWidgets__SlideContainer*) = reinterpret_cast<void (*)(TextAddonsWidgets__SlideContainer*)>(slot);
    TextAddonsWidgets::SlideContainer::connect(self, &TextAddonsWidgets::SlideContainer::slidedOut, [self, slotFunc]() {
        slotFunc(self);
    });
}

void TextAddonsWidgets__SlideContainer_ResizeEvent(TextAddonsWidgets__SlideContainer* self, QResizeEvent* param1) {
    auto* vtextaddonswidgets__slidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgets__slidecontainer && vtextaddonswidgets__slidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgets__slidecontainer->resizeEvent(param1);
    }
}

bool TextAddonsWidgets__SlideContainer_EventFilter(TextAddonsWidgets__SlideContainer* self, QObject* param1, QEvent* event) {
    auto* vtextaddonswidgets__slidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgets__slidecontainer && vtextaddonswidgets__slidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        return vtextaddonswidgets__slidecontainer->eventFilter(param1, event);
    }
    return {};
}

// Base class handler implementation
QMetaObject* TextAddonsWidgets__SlideContainer_SuperMetaObject(const TextAddonsWidgets__SlideContainer* self) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_MetaObject_IsBase(true);
        return (QMetaObject*)vtextaddonswidgetsslidecontainer->metaObject();
    } else {
        return (QMetaObject*)self->TextAddonsWidgets::SlideContainer::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnMetaObject(const TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_MetaObject_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextAddonsWidgets__SlideContainer_SuperMetacast(TextAddonsWidgets__SlideContainer* self, const char* param1) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_Metacast_IsBase(true);
        return vtextaddonswidgetsslidecontainer->qt_metacast(param1);
    } else {
        return self->TextAddonsWidgets::SlideContainer::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnMetacast(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_Metacast_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextAddonsWidgets__SlideContainer_SuperMetacall(TextAddonsWidgets__SlideContainer* self, int param1, int param2, void** param3) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_Metacall_IsBase(true);
        return vtextaddonswidgetsslidecontainer->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextAddonsWidgets::SlideContainer::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnMetacall(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_Metacall_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QSize* TextAddonsWidgets__SlideContainer_SuperSizeHint(const TextAddonsWidgets__SlideContainer* self) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_SizeHint_IsBase(true);
        return new QSize(vtextaddonswidgetsslidecontainer->sizeHint());
    } else {
        return new QSize(((VirtualTextAddonsWidgetsSlideContainer*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnSizeHint(const TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_SizeHint_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_SizeHint_Callback>(slot));
    }
}

// Base class handler implementation
QSize* TextAddonsWidgets__SlideContainer_SuperMinimumSizeHint(const TextAddonsWidgets__SlideContainer* self) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_MinimumSizeHint_IsBase(true);
        return new QSize(vtextaddonswidgetsslidecontainer->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextAddonsWidgetsSlideContainer*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnMinimumSizeHint(const TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_MinimumSizeHint_Callback>(slot));
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperResizeEvent(TextAddonsWidgets__SlideContainer* self, QResizeEvent* param1) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_ResizeEvent_IsBase(true);
        vtextaddonswidgetsslidecontainer->resizeEvent(param1);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnResizeEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_ResizeEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_ResizeEvent_Callback>(slot));
    }
}

// Base class handler implementation
bool TextAddonsWidgets__SlideContainer_SuperEventFilter(TextAddonsWidgets__SlideContainer* self, QObject* param1, QEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_EventFilter_IsBase(true);
        return vtextaddonswidgetsslidecontainer->eventFilter(param1, event);
    } else {
        return ((VirtualTextAddonsWidgetsSlideContainer*)self)->eventFilter(param1, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnEventFilter(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_EventFilter_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAddonsWidgets__SlideContainer_Event(TextAddonsWidgets__SlideContainer* self, QEvent* e) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        return vtextaddonswidgetsslidecontainer->event(e);
    } else {
        return ((VirtualTextAddonsWidgetsSlideContainer*)self)->event(e);
    }
}

// Base class handler implementation
bool TextAddonsWidgets__SlideContainer_SuperEvent(TextAddonsWidgets__SlideContainer* self, QEvent* e) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_Event_IsBase(true);
        return vtextaddonswidgetsslidecontainer->event(e);
    } else {
        return ((VirtualTextAddonsWidgetsSlideContainer*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_Event_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_PaintEvent(TextAddonsWidgets__SlideContainer* self, QPaintEvent* param1) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->paintEvent(param1);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperPaintEvent(TextAddonsWidgets__SlideContainer* self, QPaintEvent* param1) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_PaintEvent_IsBase(true);
        vtextaddonswidgetsslidecontainer->paintEvent(param1);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnPaintEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_PaintEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_ChangeEvent(TextAddonsWidgets__SlideContainer* self, QEvent* param1) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->changeEvent(param1);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperChangeEvent(TextAddonsWidgets__SlideContainer* self, QEvent* param1) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_ChangeEvent_IsBase(true);
        vtextaddonswidgetsslidecontainer->changeEvent(param1);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnChangeEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_ChangeEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_InitStyleOption(const TextAddonsWidgets__SlideContainer* self, QStyleOptionFrame* option) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->initStyleOption(option);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperInitStyleOption(const TextAddonsWidgets__SlideContainer* self, QStyleOptionFrame* option) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_InitStyleOption_IsBase(true);
        vtextaddonswidgetsslidecontainer->initStyleOption(option);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnInitStyleOption(const TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_InitStyleOption_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int TextAddonsWidgets__SlideContainer_DevType(const TextAddonsWidgets__SlideContainer* self) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        return vtextaddonswidgetsslidecontainer->devType();
    } else {
        return self->TextAddonsWidgets::SlideContainer::devType();
    }
}

// Base class handler implementation
int TextAddonsWidgets__SlideContainer_SuperDevType(const TextAddonsWidgets__SlideContainer* self) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_DevType_IsBase(true);
        return vtextaddonswidgetsslidecontainer->devType();
    } else {
        return self->TextAddonsWidgets::SlideContainer::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnDevType(const TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_DevType_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_SetVisible(TextAddonsWidgets__SlideContainer* self, bool visible) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setVisible(visible);
    } else {
        self->TextAddonsWidgets::SlideContainer::setVisible(visible);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperSetVisible(TextAddonsWidgets__SlideContainer* self, bool visible) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_SetVisible_IsBase(true);
        vtextaddonswidgetsslidecontainer->setVisible(visible);
    } else {
        self->TextAddonsWidgets::SlideContainer::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnSetVisible(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_SetVisible_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int TextAddonsWidgets__SlideContainer_HeightForWidth(const TextAddonsWidgets__SlideContainer* self, int param1) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        return vtextaddonswidgetsslidecontainer->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextAddonsWidgets::SlideContainer::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextAddonsWidgets__SlideContainer_SuperHeightForWidth(const TextAddonsWidgets__SlideContainer* self, int param1) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_HeightForWidth_IsBase(true);
        return vtextaddonswidgetsslidecontainer->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextAddonsWidgets::SlideContainer::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnHeightForWidth(const TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_HeightForWidth_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAddonsWidgets__SlideContainer_HasHeightForWidth(const TextAddonsWidgets__SlideContainer* self) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        return vtextaddonswidgetsslidecontainer->hasHeightForWidth();
    } else {
        return self->TextAddonsWidgets::SlideContainer::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextAddonsWidgets__SlideContainer_SuperHasHeightForWidth(const TextAddonsWidgets__SlideContainer* self) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_HasHeightForWidth_IsBase(true);
        return vtextaddonswidgetsslidecontainer->hasHeightForWidth();
    } else {
        return self->TextAddonsWidgets::SlideContainer::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnHasHeightForWidth(const TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextAddonsWidgets__SlideContainer_PaintEngine(const TextAddonsWidgets__SlideContainer* self) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        return vtextaddonswidgetsslidecontainer->paintEngine();
    } else {
        return self->TextAddonsWidgets::SlideContainer::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextAddonsWidgets__SlideContainer_SuperPaintEngine(const TextAddonsWidgets__SlideContainer* self) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_PaintEngine_IsBase(true);
        return vtextaddonswidgetsslidecontainer->paintEngine();
    } else {
        return self->TextAddonsWidgets::SlideContainer::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnPaintEngine(const TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_PaintEngine_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_MousePressEvent(TextAddonsWidgets__SlideContainer* self, QMouseEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->mousePressEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperMousePressEvent(TextAddonsWidgets__SlideContainer* self, QMouseEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_MousePressEvent_IsBase(true);
        vtextaddonswidgetsslidecontainer->mousePressEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnMousePressEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_MousePressEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_MouseReleaseEvent(TextAddonsWidgets__SlideContainer* self, QMouseEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->mouseReleaseEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperMouseReleaseEvent(TextAddonsWidgets__SlideContainer* self, QMouseEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_MouseReleaseEvent_IsBase(true);
        vtextaddonswidgetsslidecontainer->mouseReleaseEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnMouseReleaseEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_MouseDoubleClickEvent(TextAddonsWidgets__SlideContainer* self, QMouseEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperMouseDoubleClickEvent(TextAddonsWidgets__SlideContainer* self, QMouseEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_MouseDoubleClickEvent_IsBase(true);
        vtextaddonswidgetsslidecontainer->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnMouseDoubleClickEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_MouseMoveEvent(TextAddonsWidgets__SlideContainer* self, QMouseEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->mouseMoveEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperMouseMoveEvent(TextAddonsWidgets__SlideContainer* self, QMouseEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_MouseMoveEvent_IsBase(true);
        vtextaddonswidgetsslidecontainer->mouseMoveEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnMouseMoveEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_WheelEvent(TextAddonsWidgets__SlideContainer* self, QWheelEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->wheelEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperWheelEvent(TextAddonsWidgets__SlideContainer* self, QWheelEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_WheelEvent_IsBase(true);
        vtextaddonswidgetsslidecontainer->wheelEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnWheelEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_WheelEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_KeyPressEvent(TextAddonsWidgets__SlideContainer* self, QKeyEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->keyPressEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperKeyPressEvent(TextAddonsWidgets__SlideContainer* self, QKeyEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_KeyPressEvent_IsBase(true);
        vtextaddonswidgetsslidecontainer->keyPressEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnKeyPressEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_KeyPressEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_KeyReleaseEvent(TextAddonsWidgets__SlideContainer* self, QKeyEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->keyReleaseEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperKeyReleaseEvent(TextAddonsWidgets__SlideContainer* self, QKeyEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_KeyReleaseEvent_IsBase(true);
        vtextaddonswidgetsslidecontainer->keyReleaseEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnKeyReleaseEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_FocusInEvent(TextAddonsWidgets__SlideContainer* self, QFocusEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->focusInEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperFocusInEvent(TextAddonsWidgets__SlideContainer* self, QFocusEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_FocusInEvent_IsBase(true);
        vtextaddonswidgetsslidecontainer->focusInEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnFocusInEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_FocusInEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_FocusOutEvent(TextAddonsWidgets__SlideContainer* self, QFocusEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->focusOutEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperFocusOutEvent(TextAddonsWidgets__SlideContainer* self, QFocusEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_FocusOutEvent_IsBase(true);
        vtextaddonswidgetsslidecontainer->focusOutEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnFocusOutEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_FocusOutEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_EnterEvent(TextAddonsWidgets__SlideContainer* self, QEnterEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->enterEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperEnterEvent(TextAddonsWidgets__SlideContainer* self, QEnterEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_EnterEvent_IsBase(true);
        vtextaddonswidgetsslidecontainer->enterEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnEnterEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_EnterEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_LeaveEvent(TextAddonsWidgets__SlideContainer* self, QEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->leaveEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperLeaveEvent(TextAddonsWidgets__SlideContainer* self, QEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_LeaveEvent_IsBase(true);
        vtextaddonswidgetsslidecontainer->leaveEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnLeaveEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_LeaveEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_MoveEvent(TextAddonsWidgets__SlideContainer* self, QMoveEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->moveEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperMoveEvent(TextAddonsWidgets__SlideContainer* self, QMoveEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_MoveEvent_IsBase(true);
        vtextaddonswidgetsslidecontainer->moveEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnMoveEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_MoveEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_CloseEvent(TextAddonsWidgets__SlideContainer* self, QCloseEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->closeEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperCloseEvent(TextAddonsWidgets__SlideContainer* self, QCloseEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_CloseEvent_IsBase(true);
        vtextaddonswidgetsslidecontainer->closeEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnCloseEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_CloseEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_ContextMenuEvent(TextAddonsWidgets__SlideContainer* self, QContextMenuEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->contextMenuEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperContextMenuEvent(TextAddonsWidgets__SlideContainer* self, QContextMenuEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_ContextMenuEvent_IsBase(true);
        vtextaddonswidgetsslidecontainer->contextMenuEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnContextMenuEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_TabletEvent(TextAddonsWidgets__SlideContainer* self, QTabletEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->tabletEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperTabletEvent(TextAddonsWidgets__SlideContainer* self, QTabletEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_TabletEvent_IsBase(true);
        vtextaddonswidgetsslidecontainer->tabletEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnTabletEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_TabletEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_ActionEvent(TextAddonsWidgets__SlideContainer* self, QActionEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->actionEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperActionEvent(TextAddonsWidgets__SlideContainer* self, QActionEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_ActionEvent_IsBase(true);
        vtextaddonswidgetsslidecontainer->actionEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnActionEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_ActionEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_DragEnterEvent(TextAddonsWidgets__SlideContainer* self, QDragEnterEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->dragEnterEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperDragEnterEvent(TextAddonsWidgets__SlideContainer* self, QDragEnterEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_DragEnterEvent_IsBase(true);
        vtextaddonswidgetsslidecontainer->dragEnterEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnDragEnterEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_DragEnterEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_DragMoveEvent(TextAddonsWidgets__SlideContainer* self, QDragMoveEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->dragMoveEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperDragMoveEvent(TextAddonsWidgets__SlideContainer* self, QDragMoveEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_DragMoveEvent_IsBase(true);
        vtextaddonswidgetsslidecontainer->dragMoveEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnDragMoveEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_DragMoveEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_DragLeaveEvent(TextAddonsWidgets__SlideContainer* self, QDragLeaveEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->dragLeaveEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperDragLeaveEvent(TextAddonsWidgets__SlideContainer* self, QDragLeaveEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_DragLeaveEvent_IsBase(true);
        vtextaddonswidgetsslidecontainer->dragLeaveEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnDragLeaveEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_DropEvent(TextAddonsWidgets__SlideContainer* self, QDropEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->dropEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperDropEvent(TextAddonsWidgets__SlideContainer* self, QDropEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_DropEvent_IsBase(true);
        vtextaddonswidgetsslidecontainer->dropEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnDropEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_DropEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_ShowEvent(TextAddonsWidgets__SlideContainer* self, QShowEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->showEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->showEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperShowEvent(TextAddonsWidgets__SlideContainer* self, QShowEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_ShowEvent_IsBase(true);
        vtextaddonswidgetsslidecontainer->showEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnShowEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_ShowEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_HideEvent(TextAddonsWidgets__SlideContainer* self, QHideEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->hideEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperHideEvent(TextAddonsWidgets__SlideContainer* self, QHideEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_HideEvent_IsBase(true);
        vtextaddonswidgetsslidecontainer->hideEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnHideEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_HideEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAddonsWidgets__SlideContainer_NativeEvent(TextAddonsWidgets__SlideContainer* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        return vtextaddonswidgetsslidecontainer->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextAddonsWidgetsSlideContainer*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextAddonsWidgets__SlideContainer_SuperNativeEvent(TextAddonsWidgets__SlideContainer* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_NativeEvent_IsBase(true);
        return vtextaddonswidgetsslidecontainer->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextAddonsWidgetsSlideContainer*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnNativeEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_NativeEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextAddonsWidgets__SlideContainer_Metric(const TextAddonsWidgets__SlideContainer* self, int param1) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        return vtextaddonswidgetsslidecontainer->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextAddonsWidgetsSlideContainer*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextAddonsWidgets__SlideContainer_SuperMetric(const TextAddonsWidgets__SlideContainer* self, int param1) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_Metric_IsBase(true);
        return vtextaddonswidgetsslidecontainer->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextAddonsWidgetsSlideContainer*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnMetric(const TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_Metric_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_InitPainter(const TextAddonsWidgets__SlideContainer* self, QPainter* painter) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->initPainter(painter);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperInitPainter(const TextAddonsWidgets__SlideContainer* self, QPainter* painter) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_InitPainter_IsBase(true);
        vtextaddonswidgetsslidecontainer->initPainter(painter);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnInitPainter(const TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_InitPainter_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextAddonsWidgets__SlideContainer_Redirected(const TextAddonsWidgets__SlideContainer* self, QPoint* offset) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        return vtextaddonswidgetsslidecontainer->redirected(offset);
    } else {
        return ((VirtualTextAddonsWidgetsSlideContainer*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextAddonsWidgets__SlideContainer_SuperRedirected(const TextAddonsWidgets__SlideContainer* self, QPoint* offset) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_Redirected_IsBase(true);
        return vtextaddonswidgetsslidecontainer->redirected(offset);
    } else {
        return ((VirtualTextAddonsWidgetsSlideContainer*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnRedirected(const TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_Redirected_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextAddonsWidgets__SlideContainer_SharedPainter(const TextAddonsWidgets__SlideContainer* self) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        return vtextaddonswidgetsslidecontainer->sharedPainter();
    } else {
        return ((VirtualTextAddonsWidgetsSlideContainer*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextAddonsWidgets__SlideContainer_SuperSharedPainter(const TextAddonsWidgets__SlideContainer* self) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_SharedPainter_IsBase(true);
        return vtextaddonswidgetsslidecontainer->sharedPainter();
    } else {
        return ((VirtualTextAddonsWidgetsSlideContainer*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnSharedPainter(const TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_SharedPainter_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_InputMethodEvent(TextAddonsWidgets__SlideContainer* self, QInputMethodEvent* param1) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->inputMethodEvent(param1);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperInputMethodEvent(TextAddonsWidgets__SlideContainer* self, QInputMethodEvent* param1) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_InputMethodEvent_IsBase(true);
        vtextaddonswidgetsslidecontainer->inputMethodEvent(param1);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnInputMethodEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_InputMethodEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextAddonsWidgets__SlideContainer_InputMethodQuery(const TextAddonsWidgets__SlideContainer* self, int param1) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        return new QVariant(vtextaddonswidgetsslidecontainer->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextAddonsWidgetsSlideContainer*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* TextAddonsWidgets__SlideContainer_SuperInputMethodQuery(const TextAddonsWidgets__SlideContainer* self, int param1) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_InputMethodQuery_IsBase(true);
        return new QVariant(vtextaddonswidgetsslidecontainer->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextAddonsWidgetsSlideContainer*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnInputMethodQuery(const TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_InputMethodQuery_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAddonsWidgets__SlideContainer_FocusNextPrevChild(TextAddonsWidgets__SlideContainer* self, bool next) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        return vtextaddonswidgetsslidecontainer->focusNextPrevChild(next);
    } else {
        return ((VirtualTextAddonsWidgetsSlideContainer*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextAddonsWidgets__SlideContainer_SuperFocusNextPrevChild(TextAddonsWidgets__SlideContainer* self, bool next) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_FocusNextPrevChild_IsBase(true);
        return vtextaddonswidgetsslidecontainer->focusNextPrevChild(next);
    } else {
        return ((VirtualTextAddonsWidgetsSlideContainer*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnFocusNextPrevChild(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_TimerEvent(TextAddonsWidgets__SlideContainer* self, QTimerEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->timerEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperTimerEvent(TextAddonsWidgets__SlideContainer* self, QTimerEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_TimerEvent_IsBase(true);
        vtextaddonswidgetsslidecontainer->timerEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnTimerEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_TimerEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_ChildEvent(TextAddonsWidgets__SlideContainer* self, QChildEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->childEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperChildEvent(TextAddonsWidgets__SlideContainer* self, QChildEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_ChildEvent_IsBase(true);
        vtextaddonswidgetsslidecontainer->childEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnChildEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_ChildEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_CustomEvent(TextAddonsWidgets__SlideContainer* self, QEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->customEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperCustomEvent(TextAddonsWidgets__SlideContainer* self, QEvent* event) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_CustomEvent_IsBase(true);
        vtextaddonswidgetsslidecontainer->customEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnCustomEvent(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_CustomEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_ConnectNotify(TextAddonsWidgets__SlideContainer* self, const QMetaMethod* signal) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->connectNotify(*signal);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperConnectNotify(TextAddonsWidgets__SlideContainer* self, const QMetaMethod* signal) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_ConnectNotify_IsBase(true);
        vtextaddonswidgetsslidecontainer->connectNotify(*signal);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnConnectNotify(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_ConnectNotify_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_DisconnectNotify(TextAddonsWidgets__SlideContainer* self, const QMetaMethod* signal) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->disconnectNotify(*signal);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperDisconnectNotify(TextAddonsWidgets__SlideContainer* self, const QMetaMethod* signal) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_DisconnectNotify_IsBase(true);
        vtextaddonswidgetsslidecontainer->disconnectNotify(*signal);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnDisconnectNotify(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_DisconnectNotify_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_DrawFrame(TextAddonsWidgets__SlideContainer* self, QPainter* param1) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->drawFrame(param1);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperDrawFrame(TextAddonsWidgets__SlideContainer* self, QPainter* param1) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_DrawFrame_IsBase(true);
        vtextaddonswidgetsslidecontainer->drawFrame(param1);
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnDrawFrame(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_DrawFrame_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_UpdateMicroFocus(TextAddonsWidgets__SlideContainer* self) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->updateMicroFocus();
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperUpdateMicroFocus(TextAddonsWidgets__SlideContainer* self) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_UpdateMicroFocus_IsBase(true);
        vtextaddonswidgetsslidecontainer->updateMicroFocus();
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnUpdateMicroFocus(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_Create(TextAddonsWidgets__SlideContainer* self) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->create();
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->create();
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperCreate(TextAddonsWidgets__SlideContainer* self) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_Create_IsBase(true);
        vtextaddonswidgetsslidecontainer->create();
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnCreate(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_Create_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SlideContainer_Destroy(TextAddonsWidgets__SlideContainer* self) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->destroy();
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->destroy();
    }
}

// Base class handler implementation
void TextAddonsWidgets__SlideContainer_SuperDestroy(TextAddonsWidgets__SlideContainer* self) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_Destroy_IsBase(true);
        vtextaddonswidgetsslidecontainer->destroy();
    } else {
        ((VirtualTextAddonsWidgetsSlideContainer*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnDestroy(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_Destroy_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAddonsWidgets__SlideContainer_FocusNextChild(TextAddonsWidgets__SlideContainer* self) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        return vtextaddonswidgetsslidecontainer->focusNextChild();
    } else {
        return ((VirtualTextAddonsWidgetsSlideContainer*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextAddonsWidgets__SlideContainer_SuperFocusNextChild(TextAddonsWidgets__SlideContainer* self) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_FocusNextChild_IsBase(true);
        return vtextaddonswidgetsslidecontainer->focusNextChild();
    } else {
        return ((VirtualTextAddonsWidgetsSlideContainer*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnFocusNextChild(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_FocusNextChild_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAddonsWidgets__SlideContainer_FocusPreviousChild(TextAddonsWidgets__SlideContainer* self) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        return vtextaddonswidgetsslidecontainer->focusPreviousChild();
    } else {
        return ((VirtualTextAddonsWidgetsSlideContainer*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextAddonsWidgets__SlideContainer_SuperFocusPreviousChild(TextAddonsWidgets__SlideContainer* self) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_FocusPreviousChild_IsBase(true);
        return vtextaddonswidgetsslidecontainer->focusPreviousChild();
    } else {
        return ((VirtualTextAddonsWidgetsSlideContainer*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnFocusPreviousChild(TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = dynamic_cast<VirtualTextAddonsWidgetsSlideContainer*>(self);
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextAddonsWidgets__SlideContainer_Sender(const TextAddonsWidgets__SlideContainer* self) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        return vtextaddonswidgetsslidecontainer->sender();
    } else {
        return ((VirtualTextAddonsWidgetsSlideContainer*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextAddonsWidgets__SlideContainer_SuperSender(const TextAddonsWidgets__SlideContainer* self) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_Sender_IsBase(true);
        return vtextaddonswidgetsslidecontainer->sender();
    } else {
        return ((VirtualTextAddonsWidgetsSlideContainer*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnSender(const TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_Sender_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextAddonsWidgets__SlideContainer_SenderSignalIndex(const TextAddonsWidgets__SlideContainer* self) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        return vtextaddonswidgetsslidecontainer->senderSignalIndex();
    } else {
        return ((VirtualTextAddonsWidgetsSlideContainer*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextAddonsWidgets__SlideContainer_SuperSenderSignalIndex(const TextAddonsWidgets__SlideContainer* self) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_SenderSignalIndex_IsBase(true);
        return vtextaddonswidgetsslidecontainer->senderSignalIndex();
    } else {
        return ((VirtualTextAddonsWidgetsSlideContainer*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnSenderSignalIndex(const TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextAddonsWidgets__SlideContainer_Receivers(const TextAddonsWidgets__SlideContainer* self, const char* signal) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        return vtextaddonswidgetsslidecontainer->receivers(signal);
    } else {
        return ((VirtualTextAddonsWidgetsSlideContainer*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextAddonsWidgets__SlideContainer_SuperReceivers(const TextAddonsWidgets__SlideContainer* self, const char* signal) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_Receivers_IsBase(true);
        return vtextaddonswidgetsslidecontainer->receivers(signal);
    } else {
        return ((VirtualTextAddonsWidgetsSlideContainer*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnReceivers(const TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_Receivers_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAddonsWidgets__SlideContainer_IsSignalConnected(const TextAddonsWidgets__SlideContainer* self, const QMetaMethod* signal) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        return vtextaddonswidgetsslidecontainer->isSignalConnected(*signal);
    } else {
        return ((VirtualTextAddonsWidgetsSlideContainer*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextAddonsWidgets__SlideContainer_SuperIsSignalConnected(const TextAddonsWidgets__SlideContainer* self, const QMetaMethod* signal) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_IsSignalConnected_IsBase(true);
        return vtextaddonswidgetsslidecontainer->isSignalConnected(*signal);
    } else {
        return ((VirtualTextAddonsWidgetsSlideContainer*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnIsSignalConnected(const TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_IsSignalConnected_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextAddonsWidgets__SlideContainer_GetDecodedMetricF(const TextAddonsWidgets__SlideContainer* self, int metricA, int metricB) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        return vtextaddonswidgetsslidecontainer->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextAddonsWidgetsSlideContainer*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextAddonsWidgets__SlideContainer_SuperGetDecodedMetricF(const TextAddonsWidgets__SlideContainer* self, int metricA, int metricB) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_GetDecodedMetricF_IsBase(true);
        return vtextaddonswidgetsslidecontainer->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextAddonsWidgetsSlideContainer*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SlideContainer_OnGetDecodedMetricF(const TextAddonsWidgets__SlideContainer* self, intptr_t slot) {
    auto* vtextaddonswidgetsslidecontainer = const_cast<VirtualTextAddonsWidgetsSlideContainer*>(dynamic_cast<const VirtualTextAddonsWidgetsSlideContainer*>(self));
    if (vtextaddonswidgetsslidecontainer && vtextaddonswidgetsslidecontainer->isVirtualTextAddonsWidgetsSlideContainer) {
        vtextaddonswidgetsslidecontainer->setTextAddonsWidgets__SlideContainer_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSlideContainer::TextAddonsWidgets__SlideContainer_GetDecodedMetricF_Callback>(slot));
    }
}

void TextAddonsWidgets__SlideContainer_Delete(TextAddonsWidgets__SlideContainer* self) {
    delete self;
}
