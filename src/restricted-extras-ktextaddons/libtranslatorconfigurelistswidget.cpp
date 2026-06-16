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

void TextTranslator__TranslatorConfigureListsWidget_Save(TextTranslator__TranslatorConfigureListsWidget* self) {
    self->save();
}

void TextTranslator__TranslatorConfigureListsWidget_Load(TextTranslator__TranslatorConfigureListsWidget* self) {
    self->load();
}

// Base class handler implementation
QMetaObject* TextTranslator__TranslatorConfigureListsWidget_SuperMetaObject(const TextTranslator__TranslatorConfigureListsWidget* self) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_MetaObject_IsBase(true);
        return (QMetaObject*)vtexttranslatortranslatorconfigurelistswidget->metaObject();
    } else {
        return (QMetaObject*)self->TextTranslator::TranslatorConfigureListsWidget::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnMetaObject(const TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_MetaObject_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextTranslator__TranslatorConfigureListsWidget_SuperMetacast(TextTranslator__TranslatorConfigureListsWidget* self, const char* param1) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_Metacast_IsBase(true);
        return vtexttranslatortranslatorconfigurelistswidget->qt_metacast(param1);
    } else {
        return self->TextTranslator::TranslatorConfigureListsWidget::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnMetacast(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_Metacast_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureListsWidget_SuperMetacall(TextTranslator__TranslatorConfigureListsWidget* self, int param1, int param2, void** param3) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_Metacall_IsBase(true);
        return vtexttranslatortranslatorconfigurelistswidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextTranslator::TranslatorConfigureListsWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnMetacall(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_Metacall_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorConfigureListsWidget_DevType(const TextTranslator__TranslatorConfigureListsWidget* self) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        return vtexttranslatortranslatorconfigurelistswidget->devType();
    } else {
        return self->TextTranslator::TranslatorConfigureListsWidget::devType();
    }
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureListsWidget_SuperDevType(const TextTranslator__TranslatorConfigureListsWidget* self) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_DevType_IsBase(true);
        return vtexttranslatortranslatorconfigurelistswidget->devType();
    } else {
        return self->TextTranslator::TranslatorConfigureListsWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnDevType(const TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_DevType_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SetVisible(TextTranslator__TranslatorConfigureListsWidget* self, bool visible) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setVisible(visible);
    } else {
        self->TextTranslator::TranslatorConfigureListsWidget::setVisible(visible);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperSetVisible(TextTranslator__TranslatorConfigureListsWidget* self, bool visible) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_SetVisible_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->setVisible(visible);
    } else {
        self->TextTranslator::TranslatorConfigureListsWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnSetVisible(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_SetVisible_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextTranslator__TranslatorConfigureListsWidget_SizeHint(const TextTranslator__TranslatorConfigureListsWidget* self) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        return new QSize(vtexttranslatortranslatorconfigurelistswidget->sizeHint());
    } else {
        return new QSize(((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextTranslator__TranslatorConfigureListsWidget_SuperSizeHint(const TextTranslator__TranslatorConfigureListsWidget* self) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_SizeHint_IsBase(true);
        return new QSize(vtexttranslatortranslatorconfigurelistswidget->sizeHint());
    } else {
        return new QSize(((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnSizeHint(const TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_SizeHint_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextTranslator__TranslatorConfigureListsWidget_MinimumSizeHint(const TextTranslator__TranslatorConfigureListsWidget* self) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        return new QSize(vtexttranslatortranslatorconfigurelistswidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextTranslator__TranslatorConfigureListsWidget_SuperMinimumSizeHint(const TextTranslator__TranslatorConfigureListsWidget* self) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vtexttranslatortranslatorconfigurelistswidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnMinimumSizeHint(const TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorConfigureListsWidget_HeightForWidth(const TextTranslator__TranslatorConfigureListsWidget* self, int param1) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        return vtexttranslatortranslatorconfigurelistswidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextTranslator::TranslatorConfigureListsWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureListsWidget_SuperHeightForWidth(const TextTranslator__TranslatorConfigureListsWidget* self, int param1) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_HeightForWidth_IsBase(true);
        return vtexttranslatortranslatorconfigurelistswidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextTranslator::TranslatorConfigureListsWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnHeightForWidth(const TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_HeightForWidth_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureListsWidget_HasHeightForWidth(const TextTranslator__TranslatorConfigureListsWidget* self) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        return vtexttranslatortranslatorconfigurelistswidget->hasHeightForWidth();
    } else {
        return self->TextTranslator::TranslatorConfigureListsWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureListsWidget_SuperHasHeightForWidth(const TextTranslator__TranslatorConfigureListsWidget* self) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_HasHeightForWidth_IsBase(true);
        return vtexttranslatortranslatorconfigurelistswidget->hasHeightForWidth();
    } else {
        return self->TextTranslator::TranslatorConfigureListsWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnHasHeightForWidth(const TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextTranslator__TranslatorConfigureListsWidget_PaintEngine(const TextTranslator__TranslatorConfigureListsWidget* self) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        return vtexttranslatortranslatorconfigurelistswidget->paintEngine();
    } else {
        return self->TextTranslator::TranslatorConfigureListsWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextTranslator__TranslatorConfigureListsWidget_SuperPaintEngine(const TextTranslator__TranslatorConfigureListsWidget* self) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_PaintEngine_IsBase(true);
        return vtexttranslatortranslatorconfigurelistswidget->paintEngine();
    } else {
        return self->TextTranslator::TranslatorConfigureListsWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnPaintEngine(const TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_PaintEngine_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureListsWidget_Event(TextTranslator__TranslatorConfigureListsWidget* self, QEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        return vtexttranslatortranslatorconfigurelistswidget->event(event);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureListsWidget_SuperEvent(TextTranslator__TranslatorConfigureListsWidget* self, QEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_Event_IsBase(true);
        return vtexttranslatortranslatorconfigurelistswidget->event(event);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_Event_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_MousePressEvent(TextTranslator__TranslatorConfigureListsWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->mousePressEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperMousePressEvent(TextTranslator__TranslatorConfigureListsWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_MousePressEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->mousePressEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnMousePressEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_MousePressEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_MouseReleaseEvent(TextTranslator__TranslatorConfigureListsWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperMouseReleaseEvent(TextTranslator__TranslatorConfigureListsWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_MouseReleaseEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnMouseReleaseEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_MouseDoubleClickEvent(TextTranslator__TranslatorConfigureListsWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperMouseDoubleClickEvent(TextTranslator__TranslatorConfigureListsWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_MouseDoubleClickEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnMouseDoubleClickEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_MouseMoveEvent(TextTranslator__TranslatorConfigureListsWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperMouseMoveEvent(TextTranslator__TranslatorConfigureListsWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_MouseMoveEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnMouseMoveEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_WheelEvent(TextTranslator__TranslatorConfigureListsWidget* self, QWheelEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->wheelEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperWheelEvent(TextTranslator__TranslatorConfigureListsWidget* self, QWheelEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_WheelEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->wheelEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnWheelEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_WheelEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_KeyPressEvent(TextTranslator__TranslatorConfigureListsWidget* self, QKeyEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->keyPressEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperKeyPressEvent(TextTranslator__TranslatorConfigureListsWidget* self, QKeyEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_KeyPressEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->keyPressEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnKeyPressEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_KeyReleaseEvent(TextTranslator__TranslatorConfigureListsWidget* self, QKeyEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperKeyReleaseEvent(TextTranslator__TranslatorConfigureListsWidget* self, QKeyEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_KeyReleaseEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnKeyReleaseEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_FocusInEvent(TextTranslator__TranslatorConfigureListsWidget* self, QFocusEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->focusInEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperFocusInEvent(TextTranslator__TranslatorConfigureListsWidget* self, QFocusEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_FocusInEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->focusInEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnFocusInEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_FocusInEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_FocusOutEvent(TextTranslator__TranslatorConfigureListsWidget* self, QFocusEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->focusOutEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperFocusOutEvent(TextTranslator__TranslatorConfigureListsWidget* self, QFocusEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_FocusOutEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->focusOutEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnFocusOutEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_EnterEvent(TextTranslator__TranslatorConfigureListsWidget* self, QEnterEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->enterEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperEnterEvent(TextTranslator__TranslatorConfigureListsWidget* self, QEnterEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_EnterEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->enterEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnEnterEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_EnterEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_LeaveEvent(TextTranslator__TranslatorConfigureListsWidget* self, QEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->leaveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperLeaveEvent(TextTranslator__TranslatorConfigureListsWidget* self, QEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_LeaveEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->leaveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnLeaveEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_LeaveEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_PaintEvent(TextTranslator__TranslatorConfigureListsWidget* self, QPaintEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->paintEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperPaintEvent(TextTranslator__TranslatorConfigureListsWidget* self, QPaintEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_PaintEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->paintEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnPaintEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_PaintEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_MoveEvent(TextTranslator__TranslatorConfigureListsWidget* self, QMoveEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->moveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperMoveEvent(TextTranslator__TranslatorConfigureListsWidget* self, QMoveEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_MoveEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->moveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnMoveEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_MoveEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_ResizeEvent(TextTranslator__TranslatorConfigureListsWidget* self, QResizeEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->resizeEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperResizeEvent(TextTranslator__TranslatorConfigureListsWidget* self, QResizeEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_ResizeEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->resizeEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnResizeEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_ResizeEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_CloseEvent(TextTranslator__TranslatorConfigureListsWidget* self, QCloseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->closeEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperCloseEvent(TextTranslator__TranslatorConfigureListsWidget* self, QCloseEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_CloseEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->closeEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnCloseEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_CloseEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_ContextMenuEvent(TextTranslator__TranslatorConfigureListsWidget* self, QContextMenuEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->contextMenuEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperContextMenuEvent(TextTranslator__TranslatorConfigureListsWidget* self, QContextMenuEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_ContextMenuEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->contextMenuEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnContextMenuEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_TabletEvent(TextTranslator__TranslatorConfigureListsWidget* self, QTabletEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->tabletEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperTabletEvent(TextTranslator__TranslatorConfigureListsWidget* self, QTabletEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_TabletEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->tabletEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnTabletEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_TabletEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_ActionEvent(TextTranslator__TranslatorConfigureListsWidget* self, QActionEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->actionEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperActionEvent(TextTranslator__TranslatorConfigureListsWidget* self, QActionEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_ActionEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->actionEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnActionEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_ActionEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_DragEnterEvent(TextTranslator__TranslatorConfigureListsWidget* self, QDragEnterEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->dragEnterEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperDragEnterEvent(TextTranslator__TranslatorConfigureListsWidget* self, QDragEnterEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_DragEnterEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->dragEnterEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnDragEnterEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_DragMoveEvent(TextTranslator__TranslatorConfigureListsWidget* self, QDragMoveEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->dragMoveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperDragMoveEvent(TextTranslator__TranslatorConfigureListsWidget* self, QDragMoveEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_DragMoveEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->dragMoveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnDragMoveEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_DragLeaveEvent(TextTranslator__TranslatorConfigureListsWidget* self, QDragLeaveEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperDragLeaveEvent(TextTranslator__TranslatorConfigureListsWidget* self, QDragLeaveEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_DragLeaveEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnDragLeaveEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_DropEvent(TextTranslator__TranslatorConfigureListsWidget* self, QDropEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->dropEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperDropEvent(TextTranslator__TranslatorConfigureListsWidget* self, QDropEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_DropEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->dropEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnDropEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_DropEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_ShowEvent(TextTranslator__TranslatorConfigureListsWidget* self, QShowEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->showEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperShowEvent(TextTranslator__TranslatorConfigureListsWidget* self, QShowEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_ShowEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->showEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnShowEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_ShowEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_HideEvent(TextTranslator__TranslatorConfigureListsWidget* self, QHideEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->hideEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperHideEvent(TextTranslator__TranslatorConfigureListsWidget* self, QHideEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_HideEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->hideEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnHideEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_HideEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureListsWidget_NativeEvent(TextTranslator__TranslatorConfigureListsWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        return vtexttranslatortranslatorconfigurelistswidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureListsWidget_SuperNativeEvent(TextTranslator__TranslatorConfigureListsWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_NativeEvent_IsBase(true);
        return vtexttranslatortranslatorconfigurelistswidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnNativeEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_NativeEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_ChangeEvent(TextTranslator__TranslatorConfigureListsWidget* self, QEvent* param1) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->changeEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperChangeEvent(TextTranslator__TranslatorConfigureListsWidget* self, QEvent* param1) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_ChangeEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->changeEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnChangeEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_ChangeEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorConfigureListsWidget_Metric(const TextTranslator__TranslatorConfigureListsWidget* self, int param1) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        return vtexttranslatortranslatorconfigurelistswidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureListsWidget_SuperMetric(const TextTranslator__TranslatorConfigureListsWidget* self, int param1) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_Metric_IsBase(true);
        return vtexttranslatortranslatorconfigurelistswidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnMetric(const TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_Metric_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_InitPainter(const TextTranslator__TranslatorConfigureListsWidget* self, QPainter* painter) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->initPainter(painter);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperInitPainter(const TextTranslator__TranslatorConfigureListsWidget* self, QPainter* painter) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_InitPainter_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->initPainter(painter);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnInitPainter(const TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_InitPainter_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextTranslator__TranslatorConfigureListsWidget_Redirected(const TextTranslator__TranslatorConfigureListsWidget* self, QPoint* offset) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        return vtexttranslatortranslatorconfigurelistswidget->redirected(offset);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextTranslator__TranslatorConfigureListsWidget_SuperRedirected(const TextTranslator__TranslatorConfigureListsWidget* self, QPoint* offset) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_Redirected_IsBase(true);
        return vtexttranslatortranslatorconfigurelistswidget->redirected(offset);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnRedirected(const TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_Redirected_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextTranslator__TranslatorConfigureListsWidget_SharedPainter(const TextTranslator__TranslatorConfigureListsWidget* self) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        return vtexttranslatortranslatorconfigurelistswidget->sharedPainter();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextTranslator__TranslatorConfigureListsWidget_SuperSharedPainter(const TextTranslator__TranslatorConfigureListsWidget* self) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_SharedPainter_IsBase(true);
        return vtexttranslatortranslatorconfigurelistswidget->sharedPainter();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnSharedPainter(const TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_SharedPainter_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_InputMethodEvent(TextTranslator__TranslatorConfigureListsWidget* self, QInputMethodEvent* param1) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperInputMethodEvent(TextTranslator__TranslatorConfigureListsWidget* self, QInputMethodEvent* param1) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_InputMethodEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnInputMethodEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextTranslator__TranslatorConfigureListsWidget_InputMethodQuery(const TextTranslator__TranslatorConfigureListsWidget* self, int param1) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        return new QVariant(vtexttranslatortranslatorconfigurelistswidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* TextTranslator__TranslatorConfigureListsWidget_SuperInputMethodQuery(const TextTranslator__TranslatorConfigureListsWidget* self, int param1) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vtexttranslatortranslatorconfigurelistswidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnInputMethodQuery(const TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureListsWidget_FocusNextPrevChild(TextTranslator__TranslatorConfigureListsWidget* self, bool next) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        return vtexttranslatortranslatorconfigurelistswidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureListsWidget_SuperFocusNextPrevChild(TextTranslator__TranslatorConfigureListsWidget* self, bool next) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_FocusNextPrevChild_IsBase(true);
        return vtexttranslatortranslatorconfigurelistswidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnFocusNextPrevChild(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureListsWidget_EventFilter(TextTranslator__TranslatorConfigureListsWidget* self, QObject* watched, QEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        return vtexttranslatortranslatorconfigurelistswidget->eventFilter(watched, event);
    } else {
        return self->TextTranslator::TranslatorConfigureListsWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureListsWidget_SuperEventFilter(TextTranslator__TranslatorConfigureListsWidget* self, QObject* watched, QEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_EventFilter_IsBase(true);
        return vtexttranslatortranslatorconfigurelistswidget->eventFilter(watched, event);
    } else {
        return self->TextTranslator::TranslatorConfigureListsWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnEventFilter(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_EventFilter_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_TimerEvent(TextTranslator__TranslatorConfigureListsWidget* self, QTimerEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->timerEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperTimerEvent(TextTranslator__TranslatorConfigureListsWidget* self, QTimerEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_TimerEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->timerEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnTimerEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_TimerEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_ChildEvent(TextTranslator__TranslatorConfigureListsWidget* self, QChildEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->childEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperChildEvent(TextTranslator__TranslatorConfigureListsWidget* self, QChildEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_ChildEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->childEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnChildEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_ChildEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_CustomEvent(TextTranslator__TranslatorConfigureListsWidget* self, QEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->customEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperCustomEvent(TextTranslator__TranslatorConfigureListsWidget* self, QEvent* event) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_CustomEvent_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->customEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnCustomEvent(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_CustomEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_ConnectNotify(TextTranslator__TranslatorConfigureListsWidget* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->connectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperConnectNotify(TextTranslator__TranslatorConfigureListsWidget* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_ConnectNotify_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->connectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnConnectNotify(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_ConnectNotify_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_DisconnectNotify(TextTranslator__TranslatorConfigureListsWidget* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperDisconnectNotify(TextTranslator__TranslatorConfigureListsWidget* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_DisconnectNotify_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnDisconnectNotify(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_UpdateMicroFocus(TextTranslator__TranslatorConfigureListsWidget* self) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->updateMicroFocus();
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperUpdateMicroFocus(TextTranslator__TranslatorConfigureListsWidget* self) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_UpdateMicroFocus_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->updateMicroFocus();
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnUpdateMicroFocus(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_Create(TextTranslator__TranslatorConfigureListsWidget* self) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->create();
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->create();
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperCreate(TextTranslator__TranslatorConfigureListsWidget* self) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_Create_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->create();
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnCreate(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_Create_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_Destroy(TextTranslator__TranslatorConfigureListsWidget* self) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->destroy();
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->destroy();
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureListsWidget_SuperDestroy(TextTranslator__TranslatorConfigureListsWidget* self) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_Destroy_IsBase(true);
        vtexttranslatortranslatorconfigurelistswidget->destroy();
    } else {
        ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnDestroy(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_Destroy_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureListsWidget_FocusNextChild(TextTranslator__TranslatorConfigureListsWidget* self) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        return vtexttranslatortranslatorconfigurelistswidget->focusNextChild();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureListsWidget_SuperFocusNextChild(TextTranslator__TranslatorConfigureListsWidget* self) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_FocusNextChild_IsBase(true);
        return vtexttranslatortranslatorconfigurelistswidget->focusNextChild();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnFocusNextChild(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_FocusNextChild_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureListsWidget_FocusPreviousChild(TextTranslator__TranslatorConfigureListsWidget* self) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        return vtexttranslatortranslatorconfigurelistswidget->focusPreviousChild();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureListsWidget_SuperFocusPreviousChild(TextTranslator__TranslatorConfigureListsWidget* self) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_FocusPreviousChild_IsBase(true);
        return vtexttranslatortranslatorconfigurelistswidget->focusPreviousChild();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnFocusPreviousChild(TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = dynamic_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(self);
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextTranslator__TranslatorConfigureListsWidget_Sender(const TextTranslator__TranslatorConfigureListsWidget* self) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        return vtexttranslatortranslatorconfigurelistswidget->sender();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextTranslator__TranslatorConfigureListsWidget_SuperSender(const TextTranslator__TranslatorConfigureListsWidget* self) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_Sender_IsBase(true);
        return vtexttranslatortranslatorconfigurelistswidget->sender();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnSender(const TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_Sender_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorConfigureListsWidget_SenderSignalIndex(const TextTranslator__TranslatorConfigureListsWidget* self) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        return vtexttranslatortranslatorconfigurelistswidget->senderSignalIndex();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureListsWidget_SuperSenderSignalIndex(const TextTranslator__TranslatorConfigureListsWidget* self) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_SenderSignalIndex_IsBase(true);
        return vtexttranslatortranslatorconfigurelistswidget->senderSignalIndex();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnSenderSignalIndex(const TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorConfigureListsWidget_Receivers(const TextTranslator__TranslatorConfigureListsWidget* self, const char* signal) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        return vtexttranslatortranslatorconfigurelistswidget->receivers(signal);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureListsWidget_SuperReceivers(const TextTranslator__TranslatorConfigureListsWidget* self, const char* signal) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_Receivers_IsBase(true);
        return vtexttranslatortranslatorconfigurelistswidget->receivers(signal);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnReceivers(const TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_Receivers_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureListsWidget_IsSignalConnected(const TextTranslator__TranslatorConfigureListsWidget* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        return vtexttranslatortranslatorconfigurelistswidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureListsWidget_SuperIsSignalConnected(const TextTranslator__TranslatorConfigureListsWidget* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_IsSignalConnected_IsBase(true);
        return vtexttranslatortranslatorconfigurelistswidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnIsSignalConnected(const TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextTranslator__TranslatorConfigureListsWidget_GetDecodedMetricF(const TextTranslator__TranslatorConfigureListsWidget* self, int metricA, int metricB) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        return vtexttranslatortranslatorconfigurelistswidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextTranslator__TranslatorConfigureListsWidget_SuperGetDecodedMetricF(const TextTranslator__TranslatorConfigureListsWidget* self, int metricA, int metricB) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_GetDecodedMetricF_IsBase(true);
        return vtexttranslatortranslatorconfigurelistswidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureListsWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureListsWidget_OnGetDecodedMetricF(const TextTranslator__TranslatorConfigureListsWidget* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfigurelistswidget = const_cast<VirtualTextTranslatorTranslatorConfigureListsWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureListsWidget*>(self));
    if (vtexttranslatortranslatorconfigurelistswidget && vtexttranslatortranslatorconfigurelistswidget->isVirtualTextTranslatorTranslatorConfigureListsWidget) {
        vtexttranslatortranslatorconfigurelistswidget->setTextTranslator__TranslatorConfigureListsWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureListsWidget::TextTranslator__TranslatorConfigureListsWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void TextTranslator__TranslatorConfigureListsWidget_Delete(TextTranslator__TranslatorConfigureListsWidget* self) {
    delete self;
}
